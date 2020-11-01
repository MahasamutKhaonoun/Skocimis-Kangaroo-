#include<stdio.h>
int calculate(int, int);
int main()
{
	int num[3];
	int* n = num;
	//num[0] = *n
	//num[1] = *(n+1)
	//num[2] = *(n+2)
	int dis[2];
	int* m = dis;
	for (int i = 0; i < 3; i++)
	{
		if (scanf_s("%d", &num[i]) != 1)
		{
			printf("Error");
			return 1;
		}
		else if (num[i] < 0 || num[i] > 100)
		{
			printf("Error");
			return 1;
		}
		if (i > 0 && num[i] < num[i - 1])
		{
			printf("Error");
			return 1;
		}
	}
	for (int i = 0; i < 2; i++)
	{
		dis[i] = calculate(*(n + i), *(n + i + 1));
	}
	if (*m <= *(m + 1))
	{
		printf("%d", *(m + 1));
	}
	else
	{
		printf("%d", *m);
	}
	return 0;
}

int calculate(int a, int b)
{
	if ((a > -32768 && a < 32767) && (b > -32768 && b < 32767))
	{
		int result;
		result = b - a - 1;
		return result;
	}
	
}