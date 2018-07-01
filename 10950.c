#include <stdio.h>

int main(void)
{
    int T,A,B, ans[1000];
    scanf("%d",&T);
    for(int i=0; i<T; i++)
    {
         scanf("%d %d",&A, &B);
         ans[i]=A+B;
    }
    for(int i=0; i<T; i++)
    printf("%d\n",ans[i]);
    return 0;
}
