#ifndef CREATURE_HPP
#define CREATURE_HPP

#include <string>


class Creature
{

	public:

	Creature()
	{
	}

	Creature(std::string name, int health, int str , int end,
		int dex, double hitRate, unsigned int level = 1,
		std::string className = "")
	{
		this->name = name;
		this->health = health;
		this->str = str;  //strength
		this->end = end;  //endurance
		this->dex = dex;  //dexterity
		this->hitRate = hitRate;
		this->className = className;
		this->level = level; 
		this->exp = 0; //experience
	}


	//calculates the experience required to reach a certain level,
	// *in total*
	unsigned int expToLevel(unsigned int level)
	{
		//Exp to level x = 128*x^2
		return 128 * level * level;

	

	//Level the creature to the next level if it has 
	//enough experience to do so, return true if leveled up
	// and false otherwise.
	

	bool levelUp()
	{

		if()
		{

			//advance to next level
			++level;

			//variables to keep track of stat changes
			
			unsigned int healthBoost = 0;
			unsigned int strBoost = 0;
			unsigned int endBoost = 0;
			unsigned int dexBoost = 0;
			
			//Give a large boost to health every third level
			if(level % 3 == 0) 
			{
				//randomly increase health, proportional 
				//to the creature's endurance

				healthBoost = 10 + (rand() %4 ) + this->end /4;


			}
			else
			{
				//just increase health by small amount
				healthBoost = this->end / 4;

			}



			//if creature is a fighter
			//favour strenght over dexterity 
			// but increase dex 50% of the time too
			
			if(this->className == "Fighter")
			{

				strBoost = 1;
				endBoost = 1;

				if(rand() % 2 == 0 ) dexBoost = 1;

			}
			



			return true;

		}

		return false;

	}


















};

#endif //CREATURE_HPP
