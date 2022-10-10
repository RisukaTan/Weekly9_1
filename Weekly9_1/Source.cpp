#include<stdio.h>
int main() //65010536
{
	int x, y;
	printf("Enter 2 Number : ");
	scanf_s("%d %d",&x,&y);
	x = x + y;
	y = x - y;
	x = x - y;
	printf("%d %d", x, y);
}