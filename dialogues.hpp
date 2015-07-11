#ifndef DIALOGUE_HPP
#define DIALOGUE_HPP


#include <string>
#include <vector>
#include <iostream>


//gameplay is expressed using dialogues
//user has to choose a response

//if the user does not do so then the dialogue will loop around


class Dialogue {

	private:

	std::string description;

	std::vector<std::string> choices;
	public:

	

	Dialogue(std::string description, std::vector<std::string>choice) {
		
		this->description = description;
		this->choices = choices;
	}

	Dialogue()
	{
	}


	int activate(){

		//Output the information
		std::cout<< description << std::endl;

		//Output and number the choices
		for(int i = 0; i<this->choices.size();++i){
			std::cout<< i+1 <<": "<<this->choices[i] << std::endl;
 				
		}
		
		int userInput = -1;
		
		while(true){
				
			std::cin>> userInput;
			
			if(userInput >= 0 && userInput <= choices.size())
			{
				return userInput;

			}

		}


		return 0;
	}
 

};

#endif /* DIALOGUE_HPP */

