typedef struct
{
	char name;
	char gamer_tag;
	int points;
	char achievemnts[];
	
}player;

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char string[100];
	printf("Enter value : ");
	gets(string);
	printf("\nYou entered: ");
	puts(string);
  
  return 0;

}