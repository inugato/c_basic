#include "curses.h"
#include "stdio.h"

int main()
{
	int i;
	int n;
	long  sum = 0;
	printf("Enter Value: ");
	scanf("%d",&n);
	while(i <= n)
	{
		sum = sum + i;
		i++;
	}
	printf("\nSum %ld:",sum);
}
