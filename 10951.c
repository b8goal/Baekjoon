#include <stdio.h>

char A[256], B[256];
int a,b;

int main(void)
{
	while(scanf("%d %d", &A[0], &B[0]) != EOF)
	printf("%d\n", A[0]+B[0]);
	return 0;
}
