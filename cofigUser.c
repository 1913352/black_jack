	//set the number of players
	//playing game functions -----------------------------

//player settiing
int configUser(void) {
		int n_user;
	do
	{		
	
		printf("Input the number of users (Max:5) : ");
		scanf("%d", &n_user);
	
		if (n_user>5)
			printf("Too many players!\n");
		
		else if (n_user<1)
			printf("invalid input players\n");
			
	
	} 
	while (n_user>5 || n_user<1);
		
	printf(" --> card is mixed and put into the tray\n\n");
	printf("------------------------------------------------\n------------ ROUND 1 (cardIndex:0)--------------------------\n------------------------------------------------\n\n");
		
}
