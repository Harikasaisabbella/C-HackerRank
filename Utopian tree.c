#include<stdio.h>
void main()
{
	int i, n, t, h;
	printf("Number of test cases: ");
	scanf("%d", &t);
	while(t > 0)
	{
		 h = 0;
		 i = 0;
		scanf("%d", &n);
		while(i <= n)
		{
			if(i%2 == 0)
			{
				h = h+1;	
			}
			else
			{
				h = 2*h;
			}	
			i++;	
		}
		printf("%d\n", h);
		t--;
	}
}
