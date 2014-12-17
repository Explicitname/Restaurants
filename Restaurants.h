/*
 * Objects.h
 *
 *  Created on: Dec 17, 2014
 *      Author: explicitness
 */
#include <string>
#include <iostream>

#ifndef OBJECTS_H_
#define OBJECTS_H_



class Restaraunt
{
private:
	std::string nameRestaraunt;
	std::string typeRestaraunt;
	std::string locRestaraunt;


public:
	Restaraunt(){};
	void addRestaraunt(std::string newRestaraunt, std::string newType, std::string newLocation);
	void printContent();

};




#endif /* OBJECTS_H_ */
