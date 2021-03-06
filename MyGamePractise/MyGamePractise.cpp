#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
void ingredientsNeededForCake()
{
	//Tells the user what  they will need to get for the ingredients 
	std::cout << "We need to get the ingredients needed for the cake.\n" << std::endl;
	std::cout << "Here are the ingredients we need:" << std::endl;
	std::cout << "* 3 large eggs\n* 175g(6 oz) self - raising flour\n* 175g(6 oz)caster sugar\n* 175g(6 oz) softened butter\n* 1 1/2 level tsp baking powder\n* 40g(1 1/2 oz) cocoa powder\n* 4 tbsp boiling water\n" << std::endl;
	
	//Tells the user they will do the shopping and to wait
	std::cout << "I will go shopping for these items\n" << std::endl;
	std::cout << "You wait\n\nHalf an hour later, still waiting\n\nOne hour later still waiting...........\n\nTwo hours later they are back!" << std::endl;
	
	//Gives the user a list they bought thats incorrect and asks the user if this is correct
	std::cout << "Here are the items needed:\n* 3 large eggs\n* 100g(3.5 oz) self - raising flour\n* 175g(6 oz)caster sugar\n* 175g(6 oz) softened butter\n* 1 level 1/2 tsp baking powder\n* 40g(1 1/2 oz) cocoa powder\n* 4 tbsp boiling water\n\n" << std::endl;

	std::cout << "Is this correct?\n* Yes\n* No\n" << std::endl;

	// variables for the answer yes or no
	std::string answer;
	std::cin >> answer;

	// If the user enters no they will move on to the next step if the enter yes or something else the program will stop/restart
	if (answer == "no")
	{
		std::cout << "\nYou answered: " << answer << std::endl;
		std::cout << "\nThis is correct!\n" << "We got 100g(3.5 oz) self - raising flour\n" << "We need 175g(6 oz) self - raising flour\n" << "Lets go back to the shop!" << std::endl;
	}
	else if (answer == "yes")
	{
		std::cout << "\nYou answered: " << answer << std::endl;
		std::cout << "\nThis is the incorrect answer" << std::endl;
		//cakeList();
	}
	else
	{
		std::cout << "You answered: " << answer << std::endl;
		std::cout << "Please answer with a yes or no\n" << std::endl;
		//cakeList();
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Get the equipment needed to make the cake
void equipmentNeeded()
{
	//Tells the user what  they will need to get for the equipment 
	std::cout << "Now we need the equipment to make the cake\n" << std::endl;
	std::cout << "We will need two 17cm tins or 7 inches they will need to greased and lined with non-stick baking paper\nWe will also need to pre heat the oven to 180C or gas 4\n" << std::endl;

	//Asks the user to choose from the list of equipment
	std::cout << "Choose from the list we need for the equipment:\n" << std::endl;
	std::cout << "Number 1:\n* One 10cm tins or 12 inches they will need to greased and lined with non-stick baking paper\n* We need to turn on the oven to 191c or gas 5" << std::endl;
	std::cout << "Number 2:\n* Two 17cm tins or 7 inches they will need to greased and lined with non-stick baking paper\n* We need to turn on the oven to 204c or gas 6" << std::endl;
	std::cout << "Number 3:\n* Two 17cm tins or 7 inches they will need to greased and lined with non-stick baking paper\n* We need to turn on the oven to 180c or gas 4" << std::endl;
	std::cout << "Number 4:\n* Two 10cm tins or 12 inches they will need to greased and lined with non-stick baking paper\n* We need to turn on the oven to 180c or gas 4\n" << std::endl;

	int d; // Number 3 correct answer
	
	std::cin >> d; //input a is number 3 the user will be correct if entered

	//If the user inputs 3 they will be correct  
	if (d == 3)
	{
		std::cout << "\nYou answered " << d << "\nYou are correct!" << std::endl;
		std::cout << "We can now get the ingredients needed\n\n." << std::endl;
		ingredientsNeededForCake();
	}
	// if the user enters a different number they will be incorrect
	else if (d != 3)
	{
		std::cout << "\nIncorrect answer!\n\nPlease try again!" << std::endl;
		//cakeList();
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Ask the user to choose the cake list given
void cakeList()
{
	//User is asked what they would like to make
	std::cout << "What type of cake would you like to make?" << std::endl;
	std::cout << "At the moment we only have Chocolate Cake.\n" << std::endl;

	//User gets a list of cakes displayed to them
	std::cout << "Choose from the list:" << std::endl;
	std::cout << "Chocolate Cake, number 1:\n* Serves six people\n* Prep 30 minutes\n* Cooking 20 minutes\n" << std::endl;
	std::cout << "Carrot Cake, number 2:\n* To be updated\n" << std::endl;
	std::cout << "Red Velvet Cake, number 3:\n* To be updated\n" << std::endl;

	int a; //Chocolate Cake
	//int b; //Carrot Cake
	//int c; //Red Velvet Cake

	std::cin >> a; //input a is chocolate cake the user will be correct if entered

	//If the user inputs 1 they will be correct  
	if (a == 1)
	{
		std::cout << "\nYou entered " << a << "\n\nYou chose Chocolate Cake\n" "\nLets get baking!\n" << std::endl;
		equipmentNeeded();
	}
	// if the user enters a different number they will be incorrect
	else if (a != 1)
	{
		std::cout << "\nPlease choose Chocolate Cake\n\nThis would be option number 1" << std::endl;
	}
}
*/


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// This is to add a string functionality
using namespace std;

int main()
{
	// Ask the user to choose the cake list given
	//cakeList();
	
	// Get the equipment needed to make the cake
	// Get ingredients needed to make the cake
	
	//return 0;

	// Mix the ingredients for the cake
	//mixForCake();
	std::cout << "Okay so we now have the correct ingredients" << std::endl;
	std::cout << "Lets put the ingredients into the mixing bowl\nBut what ingredients would we need\n" << std::endl;

	//std::string ingredients;
	//std::cin >> ingredients;

	string ingredients[5];

	ingredients[0] = "eggs\n";
	ingredients[1] = "flour\n";
	ingredients[2] = "sugar\n";
	ingredients[3] = "butter\n";
	ingredients[4] = "baking powder";
	//ingredients[5] = "cocoa powder";
	//ingredients[6] = "boiling water";
	//ingredients[7] = "icing sugar";
	//ingredients[8] = "double cream";
	//ingredients[9] = "plain chocolate";
	//ingredients[10] = "apricot jam";

	bool areEquivalentVectors(std::vector<std::string> *vec1, std::vector<std::string> *vec2)
	{
		if (vec1->size() != vec2->size())
		{
			return false;
		}
		for (unsigned int i = 0; i < vec1->size(); i++)
		{
			std::string test = vec2->at(i);
			std::vector<std::string>::iterator it = std::find(vec1->begin(), vec1->end(), test);
			if (it == vec1->end())
			{
				return false;
			}
			return true;
		}

		std::vector<std::string> rightIngredients = { "Sugar", "Milk" };

		const int numberOfIngredients = 2;

		std::vector<std::string> ingredients[numberOfIngredients];

		std::string ingredient;

		for (int i = 0; i < numberOfIngredients; i++)
		{
			std::cin >> ingredient;
			ingredients->push_back(ingredient);
			std::cout << "Ingredient was " << ingredients->at(i) << std::endl;
		}

		bool isRightIngredients = areEquivalentVectors(&rightIngredients, ingredients);

		if (isRightIngredients)
		{
			std::cout << "The ingredients were correct!";
			std::cin >> ingredient;
		}
		else
		{
			std::cout << "The ingredients were NOT correct!";
			std::cin >> ingredient;
		}

		return 0;

}

	//int a[] = { 3, 6, 8, 33 };
	//int x = 8;



	//cout << ingredients[3] << endl;

	/*
	for (int i = 0; i < 11; i++)
	{
		cout << ingredients[i] << endl;
	}
	*/

	/*
	for (int i = 0; i < 5; i++)
	{
		std::cout << "\nPlease enter each ingredient" << std::endl;
		cin >> ingredients[i];
	}


	for (int i = 0; i < 5; i++)
	{
		std::cout << ingredients[i] << std::endl;
	}
	*/

	/*
	if (ingredients[0] == "eggs")
	{
		std::cout << "Correct" << std::endl;
	}
	else if (6 = 10)
	{
		std::cout << "incorrect" << std::endl;
	}
	else
	{
		std::cout << "Please type correct ingredients we got when shopping shopping" << std::endl;
	}
	*/

	/*

	correct
		*Eggs
		*self - raising flour
		*Caster sugar
		*Butter
		*Baking powder

	incorrect
		*Eggs
		*self - raising flour
		*caster sugar
		*softened butter
		*tsp baking powder
		*cocoa powder
		*boiling water
		*icing sugar
		*double cream
		*plain chocolate, broken into pieces
		*apricot jam


	*/

	// Put the cakes in the oven
	//bakeCakes();

	// Wait for the cakes to cool down
	//wait();

	// Get the cakes out of the tin after cooled down
	//takeOutTin();

	// Get ingredients needed to make the icing
	//ingredientsNeededForIcing();

	// Mix the ingredients for the icing
	//mixForIcing();

	// Put icing on the cakes
	//iceTheCakes();

	// Put decorations on the cake
	//decorate();

	// Put in cakes in the fridge
	//fridgeIn();

	// Take the cakes out of the fridge
	//fridgeOut();

	// Cut the cake for you or / and the guest
	//cutCake();

	// information of how to make the cake is here
	//information();
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
	bool b = false;

	std::cin >> b;

	if (b == false)
		std::cout << "\nYou entered false\nThis is correct." << std::endl;
	else if(b == true)
		std::cout << "\nYou entered true\nThis is incorrect." << std::endl;
	else
		std::cout << "\nPlease enter in 1 or 0 to say this is true or false." << std::endl;
	*/

