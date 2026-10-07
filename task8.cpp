#include<stdio.h>

int main()
{
	float weather[8];
	float max= -1000, min=1000,scnd;
	for (int i=0;i<=7;i++)
	{
			printf("Input temperature in celcius for hour %d\n",i+1);
			scanf("%f", &weather[i]);
		
	}
	for (int x=0;x<=7;x++)
	{
		if (weather[x]>max)
		{
			max=weather[x];
		}
		if (weather[x]<min)
		{
			min=weather[x];
		}

	}
	scnd=min;
	
	for (int y=0;y<8;y++)
	{
		if (weather[y]>scnd && weather[y]<max)
		{
			scnd=weather[y];
		}
	}
		printf("The maximum temperature is %.2f\n", max);
		printf("The minimum temperature is %.2f\n", min);	
		printf("The 2nd highest temperature temperature is %.2f\n", scnd);
	
	return 0;
}
