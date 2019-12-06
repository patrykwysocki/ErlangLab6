#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct player
{
	char name[50];
	char gamer_tag[50];
	int points;
	char achivements[2][100];
	
};



int main()
{
	struct player P2;
	strcpy(P2.name,"Jane");
	strcpy(P2.gamer_tag,"KillerJane");
	strcpy(P2.achivements[0],"A2");
	strcpy(P2.achivements[1],"B2");
	P2.points = 100;
	printf("\nP2 name is %s gamertag is %s points are %d",P2.name,P2.gamer_tag,P2.points);
	for (int i = 0; i < 2; ++i)
	{
		printf("\nP2 achivements is %s ",P2.achivements[i]);
	}
	

	printf("\nvalue after updating\n"); 
	strcpy(P2.name,"Patryk");
	strcpy(P2.gamer_tag,"PatrykGamertag");
	strcpy(P2.achivements[0],"A1");
	strcpy(P2.achivements[1],"B1");
	P2.points = 120;
	printf("\nP2 name is %s gamertag is %s points are %d",P2.name,P2.gamer_tag,P2.points);
		for (int i = 0; i < 2; ++i)
	{
		printf("\nP2 achivements is %s ",P2.achivements[i]);
	}
	
	return 0;

}