#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    while(T-->0)
    {
        int i,a,b,dig,x;
        long long int k,Sum;
        scanf("%lld%d%d",&k,&a,&b);
        Sum=a+b;
        if(k>2&&Sum!=10)
        {
            Sum=Sum+(Sum%10);
            if(Sum!=20&&Sum!=10)
            {
                Sum=Sum+(20*((k-3)/4));
                x=(k-3)%4;
                for(i=1;i<=x;i++)
                {
                    dig=Sum%10;
                    if(dig==0)
                    break;
                    Sum+=dig;
                }
            }
        }
        if(Sum%3==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
