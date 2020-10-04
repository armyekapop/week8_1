#include<stdio.h>
int main()
{
	char input[999];
	scanf_s("%s", &input, 999);
	while (1)
	{
		int sum = 0;
		for (int i = 0; i < 999; i++)
		{
			if (input[i] == '\0')
			{
				break;
			}
			sum += input[i] - '0';
		}
		printf("%d", sum);
		if (sum < 10)
		{
			break;
		}
		printf(" -> ");
		sprintf_s(input, "%d", sum);
	}
	return 0;
}