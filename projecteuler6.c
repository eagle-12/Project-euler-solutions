#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    long long int t,n,i,res;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        res=(n*(n+1)*(n-1)*(3*n+2))/12;
        printf("%lld\n",res);
    }
    return 0;
}
