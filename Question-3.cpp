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
	int score0,score1,score2,score3,score4,score5,score6,score7=0;
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

			//check acessability rating
			if(currentRow + horizontal[0] > 0 && currentColumn + vertical[0] > 0
				&& currentRow + horizontal[0] < 8 && currentColumn + vertical[0] < 8
				&& board[currentRow + horizontal[0]][currentColumn + vertical[0]]!= -1)

				score0 =  board[currentRow + horizontal[0]][currentColumn + vertical[0]];


			if(currentRow + horizontal[1] > 0 && currentColumn + vertical[1] > 0
				&& currentRow + horizontal[1] < 8 && currentColumn + vertical[1] < 8
				&& board[currentRow + horizontal[1]][currentColumn + vertical[1]]!= -1)

				score1 =  board[currentRow + horizontal[1]][currentColumn + vertical[1]];


			if(currentRow + horizontal[2] > 0 && currentColumn + vertical[2] > 0
				&& currentRow + horizontal[2] < 8 && currentColumn + vertical[2] < 8
				&& board[currentRow + horizontal[2]][currentColumn + vertical[2]]!= -1)

				score2 =  board[currentRow + horizontal[2]][currentColumn + vertical[2]];


			if(currentRow + horizontal[3] > 0 && currentColumn + vertical[3] > 0
				&& currentRow + horizontal[3] < 8 && currentColumn + vertical[3] < 8
				&& board[currentRow + horizontal[3]][currentColumn + vertical[3]]!= -1)

				score3 =  board[currentRow + horizontal[3]][currentColumn + vertical[3]];


			if(currentRow + horizontal[4] > 0 && currentColumn + vertical[4] > 0
				&& currentRow + horizontal[4] < 8 && currentColumn + vertical[4] < 8
				&& board[currentRow + horizontal[4]][currentColumn + vertical[4]]!= -1)

				score4 =  board[currentRow + horizontal[4]][currentColumn + vertical[4]];


			if(currentRow + horizontal[5] > 0 && currentColumn + vertical[5] > 0
				&& currentRow + horizontal[5] < 8 && currentColumn + vertical[5] < 8
				&& board[currentRow + horizontal[5]][currentColumn + vertical[5]]!= -1)

				score5 =  board[currentRow + horizontal[5]][currentColumn + vertical[5]];


			if(currentRow + horizontal[6] > 0 && currentColumn + vertical[6] > 0
				&& currentRow + horizontal[6] < 8 && currentColumn + vertical[6] < 8
				&& board[currentRow + horizontal[6]][currentColumn + vertical[6]]!= -1)

				score6 =  board[currentRow + horizontal[6]][currentColumn + vertical[6]];


			if(currentRow + horizontal[7] > 0 && currentColumn + vertical[7] > 0
				&& currentRow + horizontal[7] < 8 && currentColumn + vertical[7] < 8
				&& board[currentRow + horizontal[7]][currentColumn + vertical[7]]!= -1)

				score7 =  board[currentRow + horizontal[7]][currentColumn + vertical[7]];

			//determin which square to go next base on the lowest acessability rating taking priority
			if(score0<score1 && score0 != 0  && score1 != 0)
			{
				if(score0<score2)
					if(score0<score3)
						if(score0<score4)
							if(score0<score5)
								if(score0<score6)
									if(score0<score7)
									{
										counter++;
										currentRow+=horizontal[0];
										currentColumn+=vertical[0];
										cout<<"The knight is at "<<currentRow<<" and "<<currentColumn<<" and moved "<<counter<<" times."<<endl;
										board[currentRow][currentColumn]=-1;
									}
			}

			else
			{
				if(score1<score2 && score1 != 0 && score2 != 0)
				{
					if(score1<score3)
						if(score1<score4)
							if(score1<score5)
								if(score1<score6)
									if(score1<score7)
									{
										counter++;
										currentRow+=horizontal[1];
										currentColumn+=vertical[1];
										cout<<"The knight is at "<<currentRow<<" and "<<currentColumn<<" and moved "<<counter<<" times."<<endl;
										board[currentRow][currentColumn]=-1;
									}
				}

				else
				{
					if(score2<score3 && score2 != 0 && score3 != 0)
					{
						if(score2<score4)
							if(score2<score5)
								if(score2<score6)
									if(score2<score7)
									{
										counter++;
										currentRow+=horizontal[2];
										currentColumn+=vertical[2];
										cout<<"The knight is at "<<currentRow<<" and "<<currentColumn<<" and moved "<<counter<<" times."<<endl;
										board[currentRow][currentColumn]=-1;
									}

					}
					else
					{
						if(score3<score4 && score3 != 0 && score4 != 0)
						{
							if(score3<score5)
								if(score3<score6)
									if(score3<score7)
									{
										counter++;
										currentRow+=horizontal[3];
										currentColumn+=vertical[3];
										cout<<"The knight is at "<<currentRow<<" and "<<currentColumn<<" and moved "<<counter<<" times."<<endl;
										board[currentRow][currentColumn]=-1;
									}
						}
						else
						{
							if(score4<score5 && score4 != 0 && score5 != 0)
							{
								if(score4<score6)
									if(score4<score7)
									{
										counter++;
										currentRow+=horizontal[4];
										currentColumn+=vertical[4];
										cout<<"The knight is at "<<currentRow<<" and "<<currentColumn<<" and moved "<<counter<<" times."<<endl;
										board[currentRow][currentColumn]=-1;
									}
							}
							else
							{
								if(score5<score6 && score5 != 0 && score6 != 0)
								{
									if(score5<score7)
									{
										counter++;
										currentRow+=horizontal[5];
										currentColumn+=vertical[5];
										cout<<"The knight is at "<<currentRow<<" and "<<currentColumn<<" and moved "<<counter<<" times."<<endl;
										board[currentRow][currentColumn]=-1;
									}
								}
								else
								{
									if(score6<score7 && score6 != 0 && score7 != 0)
									{
										counter++;
										currentRow+=horizontal[0];
										currentColumn+=vertical[0];
										cout<<"The knight is at "<<currentRow<<" and "<<currentColumn<<" and moved "<<counter<<" times."<<endl;
										board[currentRow][currentColumn]=-1;
									}
									else
									{
										if(score7 != 0)
										{
											counter++;
											currentRow+=horizontal[0];
											currentColumn+=vertical[0];
											cout<<"The knight is at "<<currentRow<<" and "<<currentColumn<<" and moved "<<counter<<" times."<<endl;
											board[currentRow][currentColumn]=-1;
										}
									}
								}
							}
						}
					}
				}
			}


			//In case of a tie
			if(score1==score2 && score1 != 0)













			



			/*{

				counter++;
				currentRow+=horizontal[moveNumber];
				currentColumn+=vertical[moveNumber];
				cout<<"The knight is at "<<currentRow<<" and "<<currentColumn<<" and moved "<<counter<<" times."<<endl;
				board[currentRow][currentColumn]=-1;

			}*/
			
			
				
				

				

			
			moveNumber = rand()%8;
		

		
		
		}

	if(counter<63)
		cout<<endl<<"Alas our poor knight has failed and gotten stuck"<<endl;
	else
		cout<<endl<<"Hurray! What a good knigh, see I told you it was 63 times."<<endl;
	cout<<endl;


	return 0; 
}


