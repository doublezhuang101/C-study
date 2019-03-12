#include <stdio.h>
int main()
{
	int n = 0;
	n += (n = 10);
	printf("%d\n", n);
	getchar();
	return 0;
}