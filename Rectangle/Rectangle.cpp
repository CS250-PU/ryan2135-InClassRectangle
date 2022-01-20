//********************************************************************* 
// File name:	 Rectangle.cpp
// Author:		 Computer Science, Pacific University
// Date:			 
// Class:			 CS 250
// Assignment: Rectangle Lab
// Purpose:		 Defines each of the function prototypes associated with 
//						 class Rectangle
//*********************************************************************

#include "Rectangle.h"
/**********************************************************************
Method:			  setLength

Description:	Set the length of the rectangle

Parameters:		length - the length used to initialize the rectangle

Returned:			none
**********************************************************************/

void Rectangle::setLength (double length) {
	mLength = length;
}

/**********************************************************************
Method:			  setWidth

Description:	Set the width of the rectangle

Parameters:		width - the width used to initialize the rectangle

Returned:			none
**********************************************************************/
//void setWidth (double width)
//{
//
//}

/**********************************************************************
Method:			  getLength

Description:	Get the length of the rectangle

Parameters:		none

Returned:			double - the length
**********************************************************************/

double Rectangle::getLength () const {
	return mLength;
}

/**********************************************************************
Method:			  getWidth

Description:	Get the width of the rectangle

Parameters:		none

Returned:			double - the width
**********************************************************************/

//double getWidth () const
//{
//
//}

/**********************************************************************
Method:			  getArea

Description:	Calcuate the area of the rectangle

Parameters:		none

Returned:			double - the area
**********************************************************************/

double Rectangle::getArea () const {
	return mLength * mWidth;
}


/**********************************************************************
Method:			  getPerimeter

Description:	Calcuate the perimeter of the rectangle

Parameters:		none

Returned:			double - the perimeter
**********************************************************************/

double Rectangle::getPerimeter () const {
	return mLength * 2 + mWidth * 2;
}