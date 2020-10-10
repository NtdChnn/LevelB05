#include<stdio.h>
void drawrectangle(int x, int y)
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
int main()
{
	int x, y;
	scanf_s("%d %d",&x,&y);
	drawrectangle(x, y);
}