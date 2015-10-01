#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int s, e;
	scanf("%d %d", s, e);
	for (int i = 2; i < count; ++i)
	{
		if (insprime(i))
		{
			if (s<=i && i<=e)
			{
				
			}
		}

		
	}
		
	return 0;
}

boolean isprime(int number){
	boolean insprime = true;

	for (int i = 2; i < pow(number,0.5); ++i)
	{
		if (number % 2 == 0)
		{
			insprime = false;
			return insprime;
		}
		return insprime;
	}
}