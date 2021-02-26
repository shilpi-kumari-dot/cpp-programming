//this program simulates rolling two dice
#include <stdio.h>
#include<stdio.h>
#include<time.h>

int main(void)
{
	//put this at the top of the program
	//important: only call the srand function once!
	srand(time(0));
	
	//simulate rolling the first die
	int roll = rand()%6+1;
	printf ("Roll of the first die = %i\n",roll);
	
	//second die 
	roll = rand()%6+1;
	printf("Roll of the second die = %i\n",roll);
	
	return 0;
}
