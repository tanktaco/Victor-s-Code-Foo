// Now let's get this party started
//The answer, by the way, is 64, but how get the code to prove it, hmm.

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cmath> 
#include <cstdlib>
#include <iomanip>

using namespace std; 

int main( )
{
	//variable declaration
	int board[8][8] = {{0,1,2,3,4,5,6,7},{0,1,2,3,4,5,6,7}};
	int counter;
	int knightsRuns;
	int horizontal[8]; 
	int vertical[8];
	double score;
	int currentRow;
	int currentColumn;



	horizontal[ 0 ] = 2; vertical[ 0 ] = 1;
	horizontal[ 1 ] = 1;  vertical[ 1 ] = 2;
	horizontal[ 2 ] = -1;  vertical[ 2 ] = 2;
	horizontal[ 3 ] = -2;  vertical[ 3 ] = 1;
	horizontal[ 4 ] = -2;  vertical[ 4 ] = -1;
	horizontal[ 5 ] = -1;  vertical[ 5 ] = -2;
	horizontal[ 6 ] = 1;  vertical[ 6 ] = -2;
	horizontal[ 7 ] = 2;  vertical[ 7 ] = -1;

	return 0; 
}


