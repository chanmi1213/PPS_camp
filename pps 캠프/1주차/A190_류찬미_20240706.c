#include <stdio.h>

int main(void) {
	int d1, d2, d3;
	int money;
	int max;
	scanf("%d %d %d", &d1, &d2, &d3);

	if (d1 == d2 && d2== d3 && d3==d1) 
	{
		money = 10000 + d1 * 1000;
	}
	else if (d1 == d2 || d1 == d3)
	{
		money = 1000 + d1 * 100;
	}
	else if (d2 == d3)
	{
		money = 1000 + d2 * 100;
	}
	else {
		if (d1 > d2 && d1 > d3) 
			max = d1;
		else if (d2 > d1 && d2 > d3)
			max = d2;
		else if (d3 > d1 && d3 > d2)
			max = d3;

		money = max * 100;
	}
	printf("%d",money);
    return 0;
}

	