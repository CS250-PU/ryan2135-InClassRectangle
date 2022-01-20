//********************************************************************* 
// File name:	 Rectangle.h
// Author:		 Computer Science, Pacific University
// Date:			 
// Class:			 CS 250
// Assignment: Rectangle Lab
// Purpose:		 Declaration for a Rectangle class
//*********************************************************************

#pragma once

class Rectangle {
public:
	void setLength (double length);
	void setWidth (double width);

	double getLength () const;
	double getWidth () const;

	double getArea () const;
	double getPerimeter () const;

private:
	double mLength;
	double mWidth;
};