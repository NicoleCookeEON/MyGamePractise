#include "pch.h"
#include <iostream>

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

	//int e; // Number 1
	//int f; // Number 2
	int d; // Number 3
	//int g; // Number 4

	std::cin >> d; //input a is number 3 the user will be correct if entered

	//If the user inputs 3 they will be correct  
	if (d == 3)
	{
		std::cout << "\nYou answered " << d << "\nYou are correct!" << std::endl;
		std::cout << "We can now get the ingredients needed." << std::endl;
	}
	// if the user enters a different number they will be incorrect
	else if (d != 3)
	{
		std::cout << "\nIncorrect answer!\n\nPlease try again!" << std::endl;
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
	std::cout << "Red Velvet Cake, number 2:\n* To be updated\n" << std::endl;

	int a; //Chocolate Cake
	//int b; //Carrot Cake
	//int c; //Red Velvet Cake

	std::cin >> a; //input a is chocolate cake the user will be correct if entered

	//If the user inputs 1 they will be correct  
	if (a == 1)
	{
		std::cout << "\nYou entered " << a << "\n\nYou chose Chocolate Cake\n" "\nLets get baking!" << std::endl;
		equipmentNeeded();
	}
	// if the user enters a different number they will be incorrect
	else if (a != 1)
	{
		std::cout << "\nPlease choose Chocolate Cake\n\nThis would be option number 1" << std::endl;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	// Ask the user to choose the cake list given
	cakeList();
	
	// Get the equipment needed to make the cake
	
	return 0;

	// Get ingredients needed to make the cake
	//ingredientsNeededForCake(); 

	// Mix the ingredients for the cake
	//mixForCake();

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



