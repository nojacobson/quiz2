/** @file college.h */
//********************
//Matthew Aberegg
//Project 3
//CS 2401
//10/8/2015
//********************

#include <iostream>
#include <fstream>
#include <string>
#include "course.h"
#include "node.h"


#ifndef COLLEGE_H
#define COLLEGE_H

/** @class College
  * @brief A list of classes being taken in college
 */
class College{
	public:
	College(std::string s);
	~College();
	College(const College& other);
	College& operator =(const College& other);
	void add(course& c);
	void remove(std::string coursename);
	void display(std::ostream& outs);
	/** @brief hours
	  * @return a number of credit hours
	*/
	double hours();
	double gpa();
	void save(std::ostream& outs);
	void load(std::istream& ins);
	private:
	std::string name;
	node * head;




};
#endif
