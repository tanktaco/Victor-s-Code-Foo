// Now let's get this party started
//The answer, by the way, is 63, but how to get the code to prove it, hmm.
//This one will work, but by very clumsy brute force
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cmath> 
#include <cstdlib>
#include <iomanip>
#include <random>
#include <ctime>



using namespace std; 

int main( )
{

	srand(time(0));
	int counter =0;
while(counter <63)
{

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
	board [1][0]= 3; 
	board[2][0]=4;
	board[3][0]=4;
	board[4][0]=4;
	board[5][0]=4;
	board[6][0]=3;
	board[7][0]=2;
	board[0][1]=3;//row1
	board[1][1]=4;
	board[2][1]=5;//This space losses acessability because the kight starts in 0,0 efectivly removing I method of getting to this space
	board[3][1]=6;
	board[4][1]=6;
	board[5][1]=6;
	board[6][1]=4;
	board[7][1]=3;
	board[0][2]=4;//row2
	board[1][2]=5;//This space losses acessability because the kight starts in 0,0 efectivly removing I method of getting to this space
	board[2][2]=8;
	board[3][2]=8;
	board[4][2]=8;
	board[5][2]=8;
	board[6][2]=6;
	board[7][2]=4;
	board[0][3]=4;//row3
	board[1][3]=6;
	board[2][3]=8;
	board[3][3]=8;
	board[4][3]=8;
	board[5][3]=8;
	board[6][3]=6;
	board[7][3]=4;
	board[0][4]=4;//row4
	board[1][4]=6;
	board[2][4]=8;
	board[3][4]=8;
	board[4][4]=8;
	board[5][4]=8;
	board[6][4]=6;
	board[7][4]=4;	
	board[0][5]=4;//row5
	board[1][5]=6;
	board[2][5]=8;
	board[3][5]=8;
	board[4][5]=8;
	board[5][5]=8;
	board[6][5]=6;
	board[7][5]=4;
	board[0][6]=3;//row6
	board[1][6]=4;
	board[2][6]=6;
	board[3][6]=6;
	board[4][6]=6;
	board[5][6]=6;
	board[6][6]=4;
	board[7][6]=3;
	board[0][7]=2;//row 7
	board[1][7]=3;
	board[2][7]=4;
	board[3][7]=4;
	board[4][7]=4;
	board[5][7]=4;
	board[6][7]=3;
	board[7][7]=2;
	
	







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
	{
		cout<<endl<<"Hurray! What a good knigh, see I told you it was 63 times."<<endl;
		cout<<endl;
		return 0;
	}
	cout<<endl;

cout<<"and so our brave knight tries again"<<endl<<endl;

}
	return 0; 
}

