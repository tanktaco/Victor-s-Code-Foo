// Now let's get this party started
//The answer, by the way, is 63, but how to get the code to prove it, hmm.

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cmath> 
#include <cstdlib>
#include <iomanip>
#include <random>
#include <ctime>

#include "Question-3-head.h"

using namespace std; 

int main( )
{

	srand(time(0));
	//variable declaration
	int board [8][8];
	int Row[8] = {0,1,2,3,4,5,6,7};
	int	Column[8]= {0,1,2,3,4,5,6,7};
	int counter = 0;
	int knightsRuns;
	int horizontal[8]; 
	int vertical[8];
	int score;
	int currentRow = 0;
	int currentColumn = 0;
	int moveNumber;



	horizontal[0] = 2;	vertical[0] = 1;
	horizontal[1] = 1;  vertical[1] = 2;
	horizontal[2] = -1; vertical[2] = 2;
	horizontal[3] = -2; vertical[3] = 1;
	horizontal[4] = -2; vertical[4] = -1;
	horizontal[5] = -1; vertical[5] = -2;
	horizontal[6] = 1;  vertical[6] = -2;
	horizontal[7] = 2;  vertical[7] = -1;

	//the accessability table, this is going to be a pain in the ass
	board [0][0] = -1; //The knight starts at 0,0 therefore it's already been moved on, and shouldn't be steped on again.
	board [1][0]= 2; 
	board[2][0]=3;

	
	







	cout<<"In the begining of his quest, the knight starts at "<<currentRow<<" and "<<currentColumn<<" with the first "<<endl
		<<"number being the x axis and the second number being the y axis"<<endl<<endl<<endl;

	for (int i=0; i<9000000; i++) //for some reason I can't get do to work, so 9million will have to do for now
		{
			moveNumber = rand()%8;

			if(currentRow + horizontal[moveNumber] > 0 && currentColumn + vertical[moveNumber] > 0
				&& currentRow + horizontal[moveNumber] < 8 && currentColumn + vertical[moveNumber] < 8
				&& board[currentRow + horizontal[moveNumber]][currentColumn + vertical[moveNumber]]!= -1)
			{
				counter++;
				currentRow+=horizontal[moveNumber];
				currentColumn+=vertical[moveNumber];
				cout<<"The knight is at "<<currentRow<<" and "<<currentColumn<<" and moved "<<counter<<" times."<<endl;
				board[currentRow][currentColumn]=-1;

			}
			
			
				
				

				

			
			moveNumber = rand()%8;
		

		
		
		}

	if(counter<63)
		cout<<endl<<"Alas our poor knight has failed and gotten stuck"<<endl;
	else
		cout<<endl<<"Hurray! What a good knigh, see I told you it was 63 times."<<endl;
	cout<<endl;


	return 0; 
}


