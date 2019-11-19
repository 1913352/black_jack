#include <stdio.h>


//betting
int main(void) {
	int i;
	int n_user;
	int bet_dollar;
	int bet[4];
	bet[0]=bet_dollar;
	
	for (i=0;i<n_user,i++)
	{
		bet[i]=(rand()%N_MAX_BET)+1;
		printf("   -> player[%i] bets &d (out of $50)\n", i, bet[i]);

}
