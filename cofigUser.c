	//set the number of players
	int configUser(void) {
	int n_user;
		do
		{
			printf("Input the number of users (Max:5, Min:1)\n");
			scanf("%d", &n_user);
	
			if (n_user>5)
				printf("NO! Choose number from 1 to 5\n");
		
			else if (n_user<1)
				printf("NO! Choose number from 1 to 5\n");
			
			else 
				return n_user;
		} while (n_user>5 || n_user<1);
		
	

	}
