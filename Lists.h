/*
 * list.h
 *
 *  Created on: Dec 17, 2014
 *      Author: explicitness
 */

#include <string>
#include <iostream>

#ifndef LIST_H_
#define LIST_H_

class Lists
{
private:
	int rating;
	std::string reviewText;


public:
	Lists(){};
	void addLists(int newRating, std::string reviewText);

};

#endif /* LIST_H_ */
