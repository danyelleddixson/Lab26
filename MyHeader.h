/************************************************************************
 * AUTHOR     : Pedestrian & Catalina2
 * STUDENT ID : 1000986 & 1031215
 * LAB #26    : Enumerated Types
 * CLASS      : CS1A
 * SECTION    : MW: 10am
 * DUE DATE   : 11/23/15
 * **********************************************************************/

#ifndef MYHEADER_H_
#define MYHEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;


enum season { WINTER, SPRING, SUMMER, FALL };


// PROTOTYPES

/*************************************************************************
 * PrinterHeader
 *    This function receives an assignment or lab name, type and number
 * 	  then outputs the appropriate header
 * 	  - returns nothing --> This will output the class heading
 *************************************************************************/
void PrinterHeader(string programmerNamesF,// IN - Name(s) of programmer(s)
				   string asNameF, 		   // IN - Assignment name
				   char asTypeF, 		   // IN - Assignment type
				   	   	   	   	   	   	   //      (LAB or ASSIGNMENT)
				   int asNumF); 		   // IN - Assignment or Lab number

/*************************************************************************
 * GetSeason
 *    This function receives nothing, but outputs the selection that the
 *    user will use to select from.
 * 	  - returns character representation of the season the user chooses
 *
 *************************************************************************/
char GetSeason();

/*************************************************************************
 * ConvertCharToSeason
 *    This function receives char representation of the user's season
 *    choice
 * 	  - returns season number (from the enum season)
 *************************************************************************/
season ConvertCharToSeason (char seasonChoiceChar);  // IN - Letter
	 	 	 	 	 	 	 	 	 	 	 	 	 //      representation
	 	 	 	 	 	 	 	 	 	 	 	 	 //      of season

/*************************************************************************
 * SeasonToString
 *    This function changes season number to its representative string
 *    ( seasons full name)
 * 	  - returns season string
 *************************************************************************/
string SeasonToString(season thisSeason);// IN - Number associated with
										 //      season (defined from enum)

/*************************************************************************
 * SeasonalFruit
 * 	  This function receives the variables thisSeason and seasonString.
 *    It then outputs the appropriate fruit to eat/buy during the
 *    specified season in which that fruit is ripe. Outputs seasonal fruit.
 *    - returns nothing
 *************************************************************************/
void SeasonalFruit(season thisSeason,   // IN - full name of season
		 	 	  string seasonString); // IN - full name of season (string)


#endif
