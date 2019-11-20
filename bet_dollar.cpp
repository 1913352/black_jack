#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_CARDSET			1
#define N_CARD				52
#define N_DOLLAR			50


#define N_MAX_CARDNUM		13
#define N_MAX_USER			5
#define N_MAX_CARDHOLD		10
#define N_MAX_GO			17
#define N_MAX_BET			5

#define N_MIN_ENDCARD		30

//card tray object
int CardTray[N_CARDSET*N_CARD];
int cardIndex = 0;							


//player info
int dollar[N_MAX_USER];						//dollars that each player has
int n_user;									//number of users


//play yard information
int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];	//cards that currently the players hold
int cardSum[N_MAX_USER];					//sum of the cards
int bet[N_MAX_USER];						//current betting 
int gameEnd = 0; 							//game end flag

//betting
int main(void) {
	int bet_dollar;
	int i;
	int bet[4];
	int n_user;
	
	printf("------- BETTING STEP -------\n");
	
	
	do{
		printf("  -> your betting (total:$50) : ");
		scanf("%d", &bet_dollar);// input your betting dollars
		
		if (bet_dollar>50)
			printf("   -> you only have $50! bet again\n");
		else if (bet_dollar<1)
			printf("   -> invalid input for betting\n");
	}
	while (bet_dollar>50 || bet_dollar<1);

	for(i=1;i<n_user;i++)
	{
		bet[i]=(rand()%N_MAX_BET)+1; // player's dollar is random
		printf("   -> player[%d] bets %d (out of $50)\n", i, bet[i]); }
	
	printf("----------------------------\n\n");
}
