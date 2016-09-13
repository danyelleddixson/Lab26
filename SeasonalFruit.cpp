/****************************************************************************
 * AUTHOR     : Pedestrian & Catalina2
 * STUDENT ID : 1000986 & 1031215
 * LAB #26    : Enumerated Types
 * CLASS      : CS1A
 * SECTION    : MW: 10am
 * DUE DATE   : 11/23/15
 * **************************************************************************/

#include "MyHeader.h"

 void SeasonalFruit(season thisSeason,   // IN - full name of season
		 	 	 	string seasonString) // IN - full name of season (string)
 {

	 /***********************************************************************
	  * CONSTANTS
	  * _____________________________________________________________________
	  *  USED FOR DETERMINING OUTPUT
	  *  --------------------------------------------------------------------
	  *      WINTERFRUIT : Fruit for winter
	  *      SPRINGFRUIT : Fruit for spring
	  *      SUMMERFRUIT : Fruit for summer
	  *      FALLFRUIT   : Fruit for fall
	  ***********************************************************************/

	const string WINTERFRUIT = "Kishu Mini Mandarin";
	const string SPRINGFRUIT = "Blood Orange";
	const string SUMMERFRUIT = "Lane Navel Orange";
	const string FALLFRUIT   = "Star Ruby Red Grapefruit";

    // Determines what seasonal fruit user should try base on user input
    // of season
	switch (thisSeason)
	{
	case WINTER : cout << "For " << seasonString << ", you might want to try a "
			           << WINTERFRUIT << "." << endl << endl;
				  break;

	case SPRING : cout << "For " << seasonString << ", you might want to try a "
			           << SPRINGFRUIT << "." << endl << endl;
				  break;

	case SUMMER : cout << "For " << seasonString << ", you might want to try a "
			           << SUMMERFRUIT << "." << endl << endl;
				  break;

	case FALL   : cout << "For " << seasonString << ", you might want to try a "
			 	 	   << FALLFRUIT << "." << endl << endl;
				  break;
	}


 }
