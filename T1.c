#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number = 0;
	scanf("%d", &number);

	int bai = number / 100;
	int shi = number % 100 / 10;
	int ge = number % 10;
	
	if (ge != 0)
	{
		printf("%d%d%d/n", ge, shi, bai);	
	}
	else if(shi != 0)
	{
		printf("%d%d/n", shi, bai);
	}
	else
	{
		printf("%d", bai);	
	}

	return 0; 
}