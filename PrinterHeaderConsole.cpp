/************************************************************************
 * AUTHOR     : Pedestrian & Catalina2
 * STUDENT ID : 1000986 & 1031215
 * LAB #26    : Enumerated Types
 * CLASS      : CS1A
 * SECTION    : MW: 10am
 * DUE DATE   : 11/23/15
 * **********************************************************************/

#include "MyHeader.h"

/**************************************************************************
 * FUNCTIONS PrinterHeader
 * ________________________________________________________________________
 * This function receives name(s) of the programmer(s), whether it's an
 *   assignment or lab, the name of the assignment or lab, and the
 *   assignment or lab number.
 * ________________________________________________________________________
 * PRE-CONDITIONS
 *    asName		  : Assignment Name has to be previously defined
 *    asType 		  : Assignment Type has to be previously defined
 *    asNum  		  : Assignment Number has to be previously defined
 *	  programmerNames : Programmer Name(s) have to be previously defined
 *
 *
 * POST-CONDITIONS
 *    This function will output the class heading.
 *************************************************************************/


void PrinterHeader(string programmerNamesF,// IN - Name(s) of programmer(s)
				   string asNameF, 		   // IN - Assignment name
				   char asTypeF, 		   // IN - Assignment type
				   	   	   	   	   	   	   //      (LAB or ASSIGNMENT)
				   int asNumF)			   // IN - Assignment or Lab number
{
	// OUTPUT - Outputs the printer header
	cout << left;
	cout << "***************************************************";
	cout << "\n*  PROGRAMMED BY : " << programmerNamesF;
	cout << "\n*  " << setw (14) << "CLASS"  << ": CS1A";
	cout << "\n*  " << setw (14) << "SECTION"  << ": MW: 10:00a - 12:00p";
	cout << "\n*  ";

	// IF - determines how to output based on whether it's a lab or
	//		assignment.
	if (toupper(asTypeF) == 'L')
	{
		cout << "LAB #" << setw(9);
	}
	else
	{
		cout << "ASSIGNMENT #" << setw(2);
	}

	cout << asNumF << ": " << asNameF;
	cout << "\n***************************************************\n\n";
	cout << right;
}




