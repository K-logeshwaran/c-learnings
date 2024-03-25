#include <stdio.h>
#include <stdlib.h>

int main()
{

	int m1[3][3], m2[3][2];
	int result[3][2];
	// fill matrix
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			m1[i][j] = (i + j);
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			m2[i][j] = (i + j);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", m1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", m2[i][j]);
		}
		printf("\n");
	}

	for (int  i = 0; i < 3; i++)
	{
		

		for (int j = 0; j < 2; j++)
		{

		}
		
	}
	

	return 0;
}
