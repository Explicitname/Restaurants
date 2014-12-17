/*
 * Main.cpp
 *
 *  Created on: Dec 17, 2014
 *      Author: explicitness
 */
#include <iostream>
#include <string>
#include "Restaurants.h"
#include "Lists.h"



void Restaraunt::addRestaraunt(std::string newRestaraunt, std::string newType, std::string newLocation)
{
	nameRestaraunt = newRestaraunt;
	typeRestaraunt = newType;
	locRestaraunt = newLocation;

}

void Restaraunt::printContent()
{
	std::cout << nameRestaraunt << std::endl;
	std::cout << typeRestaraunt << std::endl;
	std::cout << locRestaraunt << std::endl;
}


int main()

{
	Restaraunt Arbys;
	Arbys.addRestaraunt("Arby's", "Fast Food", "Greenville, Texas");

	Arbys.printContent();


	return 0;
}



