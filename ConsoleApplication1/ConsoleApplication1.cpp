#include "pch.h"
#include <iostream>

#define N 19

int main()
{
	int paymentsPerLevel[30] = {4,2,2,4,3,3,4,3,2,2,2,2,3,5,2,2,4,3,5,6,5,2,10,3,6,4,5,4,4,4};
	int sum = 0, bestSum = 0, bestLevel = 0;;
	int multiplier = 1;
	//payments per level
	/*for (int i = 0; i < 30; i++) {
		printf("%2d %d\n", i + 1, paymentsPerLevel[i]);
	}*/
	//payments before 19 lvl
	/*for (int i = 17; i >= 0; i--) {
		sum += paymentsPerLevel[i];
		printf("%2d %d\n",i+1,sum);
	}*/
	//total money before N lvl
	for (int i = 1; i < N; i++) {
		for (int j = i; j < N; j++) {
			sum += i * multiplier * paymentsPerLevel[j - 1];
			//printf("%2d %d\n", j, sum);
		}
		printf("Level: %2d Money: %4d Addition: %d\n", i, sum, i*multiplier);
		sum = 0;
	}
	//best level to get upgrade if game lasted ?? lvls
	/*for (int f = 1; f < 30; f++) {
		for (int i = 1; i < f; i++) {
			for (int j = i; j < f; j++) {
				sum += i * multiplier * paymentsPerLevel[j - 1];
				//printf("%2d %d\n", j, sum);
			}
			//printf("Level: %2d Money: %4d Addition: %d\n", i, sum, i*multiplier);
			if (sum > bestSum) {
				bestSum = sum;
				bestLevel = i;
			}
			sum = 0;
		}
		printf("Game: %2d Best: %d\n", f, bestLevel);
		bestLevel = 0;
		bestSum = 0;
	}*/
	

}