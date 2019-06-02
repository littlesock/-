#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int l[42], i, j, k;
	
	srand(time(NULL));
	
	for (i = 0; i < 42; i++)
	{
		l[i] = i + 1;
	}
	for (i = 0; i <42; i++)
	{
		j = (rand () % 42);
		k = l[i];
		l[i] = l[j];
		l[j] = k;
	}
	
	printf ("¼Ö³z¸¹½X : ");
	
	for (i = 0; i < 7; i++)
	{
		printf ("%3d", l[i]);
	}
	return 0;
}


