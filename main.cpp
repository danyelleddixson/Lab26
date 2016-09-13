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
 * Enumerated Types
 * ________________________________________________________________________
 * This program prompts the user to enter a season from a menu of
 *   seasons. It then outputs the citrus fruit that is ripe during the
 *   season specified.
 * ________________________________________________________________________
 * INPUT: User enters character representation of the season
 *
 * OUTPUT: The program will output the printer header, the season and the
 * 	 corresponding citrus fruit until the user types in 'X'.
 *
 *************************************************************************/

int main()
{

	string programmerNames;    // CALC & OUT - the name(s) of the
						       //			   programmer(s)
	string asName;		   	   // CALC & OUT - the assignment or lab
						       //			   name
	char   asType;		   	   // CALC & OUT - whether it's an
						       //			   assignment or lab
	int    asNum;		   	   // CALC & OUT - assignment or lab
						       //			   number

	char   seasonChoiceChar;   // CALC       - character representation
							   //			   of season

	season thisSeason;         // CALC       - enum season representation
	  						   //			   of season

	string seasonString;       // CALC       - full name of season (string)

	// PROCESSING - Assigning values for Printer Header
	programmerNames = "Pedestrian & Catalina2";
	asName			= "Enumerated Types";
	asType			= 'L';
	asNum			= 26;

	// PrinterHeader - Will output the header for this lab to the console
	PrinterHeader(programmerNames, asName, asType, asNum);



    // seasonChoiceChar -  user's selected season
    seasonChoiceChar = GetSeason();

    while (seasonChoiceChar != 'X')
    {
		//seasonChoiceNum -  returns the number assigned to season
		thisSeason = ConvertCharToSeason(seasonChoiceChar);

		//seasonChoiceFull - returns the season's full name
		seasonString = SeasonToString(thisSeason);

		cout << endl;

	   //SeasonalFruit - seasonal fruit that goes with season
	   SeasonalFruit(thisSeason, seasonString);

	   // seasonChoiceChar -  user's selected season
	   seasonChoiceChar = GetSeason();

    }

	return 0;
}
