/************************************************************************
 * AUTHOR     : Pedestrian & Catalina2
 * STUDENT ID : 1000986 & 1031215
 * LAB #26    : Enumerated Types
 * CLASS      : CS1A
 * SECTION    : MW: 10am
 * DUE DATE   : 11/23/15
 * **********************************************************************/

#include "MyHeader.h"

char GetSeason( )
{
	char seasonChoiceCharF; // IN & OUT - letter representation of season


	// Do While Loop - Checks for valid input of season (or 'X' to exit)
	do
	{
		cout << "********************\n"
			 << "   FRUIT SELECTOR   \n"
			 << "********************\n"
			 << "(W) Winter\n"
			 << "(S) Spring\n"
			 << "(U) Summer\n"
			 << "(F) Fall\n"
			 << "(X) Exit\n";

		cout << "What season is it? ";
		cin.get(seasonChoiceCharF);
		seasonChoiceCharF = toupper(seasonChoiceCharF);
		cin.ignore(10000,'\n');

	    if (seasonChoiceCharF != 'X' && seasonChoiceCharF != 'W'
	                                 && seasonChoiceCharF != 'S'
	                                 && seasonChoiceCharF != 'F'
	                                 && seasonChoiceCharF != 'U')
	    {
			cout << "\n*** INVALID INPUT - Input a W, S, U, F or X ***\n\n";
	    }

	} while (seasonChoiceCharF != 'X' && seasonChoiceCharF != 'W'
	                                  && seasonChoiceCharF != 'S'
	                                  && seasonChoiceCharF != 'F'
	                                  && seasonChoiceCharF != 'U');

	return seasonChoiceCharF;

}
