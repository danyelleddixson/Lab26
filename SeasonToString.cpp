/************************************************************************
 * AUTHOR     : Pedestrian & Catalina2
 * STUDENT ID : 1000986 & 1031215
 * LAB #26    : Enumerated Types
 * CLASS      : CS1A
 * SECTION    : MW: 10am
 * DUE DATE   : 11/23/15
 * **********************************************************************/

#include "MyHeader.h"

string SeasonToString(season thisSeason) // IN - Number associated with
										 //      season (defined from enum)
{
	 string seasonString; // OUT - Full name of season

	 // Switch - converts the season number (enum) to a string (full name)
     switch (thisSeason)
     {
     case FALL   : seasonString = "fall";
     	 	 	   break;

     case SUMMER : seasonString = "summer";
     	 	 	   break;

     case SPRING : seasonString = "spring";
     	 	 	   break;

     case WINTER : seasonString = "winter";
     	 	 	   break;

     }


	 return seasonString;
}
