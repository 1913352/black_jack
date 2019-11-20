#include <stdio.h>
#include <stdlib.h>


//card processing functions ---------------



//calculate the actual card number in the blackjack game
int getCardNum(int cardnum) {
	
	if (cardnum%13 ==0)
		return 11;          // if (cardsum>21) -> return value -10  or cardsum -10
	
	if (cardnum%13 ==1)
		return 2;
		
	if (cardnum%13 ==2)
		return 3;
		
	if (cardnum%13 ==3)
		return 4;
		
	if (cardnum%13 ==4)
		return 5;
		
	if (cardnum%13 ==5)
		return 6;
		
	if (cardnum%13 ==6)
		return 7;
		
	if (cardnum%13 ==7)
		return 8;
		
	if (cardnum%13 ==8)
		return 9;
		
	if (cardnum%13 ==9)
		return 10;
		
	if (cardnum%13 ==10)
		return 10;

	if (cardnum%13 ==11)
		return 10;
		
	if (cardnum%13 ==12)
		return 10;
		
		
	
}

//print the card information (e.g. DiaA)
void printCard(int cardnum) {
	if (cardnum/13 ==0)        //0~12 heart
	{
		if (cardnum%13 ==0)
			printf("HRTA");
			
		else if (cardnum%13>0 && cardnum%13<10)
			printf("HRT%d", (cardnum+1)%13);
			
		else if (cardnum%13 ==10)
			printf("HRTJack");
			
		else if (cardnum%13 ==11)
			printf("HRTQueen");
			
		else 
			printf("HRTKing");
			
	}
	
	else if (cardnum/13 ==1)      //13~25 dia
	{
			if (cardnum%13 ==0)
			printf("DIAA");
			
		else if (cardnum%13>0 && cardnum%13<10)
			printf("DIA%d", (cardnum+1)%13);
			
		else if (cardnum%13 ==10)
			printf("DIAJack");
			
		else if (cardnum%13 ==11)
			printf("DIAQueen");
			
		else 
			printf("DIAKing");
	}
	
	else if (cardnum/13 ==2)        //26~38 spade
	{
		if (cardnum%13 ==0)
			printf("SPDA");
			
		else if (cardnum%13>0 && cardnum%13<10)
			printf("SPD%d", (cardnum+1)%13);
			
		else if (cardnum%13 ==10)
			printf("SPDJack");
			
		else if (cardnum%13 ==11)
			printf("SPDQueen");
			
		else 
			printf("SPDKing");
		
	}
	
	else             //39~51 club
	{
		if (cardnum%13 ==0)
			printf("CLVA");
		
		else if (cardnum%13>0 && cardnum%13<10)
			printf("CLV%d", (cardnum+1)%13);
			
		else if (cardnum%13 ==10)
			printf("CLVJack");
			
		else if (cardnum%13 ==11)
			printf("CLVQueen");
			
		else 
			printf("CLVKing");
	}
}
