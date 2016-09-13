/************************************************************************
 * AUTHOR     : Pedestrian & Catalina2
 * STUDENT ID : 1000986 & 1031215
 * LAB #26    : Enumerated Types
 * CLASS      : CS1A
 * SECTION    : MW: 10am
 * DUE DATE   : 11/23/15
 * **********************************************************************/

#include "MyHeader.h"
 season ConvertCharToSeason (char seasonChoiceChar)  // IN - Letter
 	 	 	 	 	 	 	 	 	 	 	 	 	 //      representation
 	 	 	 	 	 	 	 	 	 	 	 	 	 //      of season
 {


	 season thisSeason; // OUT - Number associated with season (defined
	 	 	 	 	   //		from enum)

	 // Switch - Converts the char to a type season
     switch (seasonChoiceChar)
     {
     	 case 'W' : thisSeason = WINTER;
	 	 	        break;

         case 'S' : thisSeason = SPRING;
	 	 	        break;

         case 'U' : thisSeason = SUMMER;
	 	 	        break;

         case 'F' : thisSeason = FALL;
         	 	 	break;

         default  : cout << "Wrong season.";
         	 	 	break;
     }


     return thisSeason;
 }

