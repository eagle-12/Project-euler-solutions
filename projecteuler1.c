#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    long long int n,x,y,z,res,res1;
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        x=n/3;
        y=n/5;
        z=n/15;
        res=((3*x*(x+1))/2)+((5*y*(y+1))/2)-((15*z*(z+1))/2);
        if(n%3!=0&&n%5!=0)
        {
            res1=res;
        }
        else
        {
            res1=res-n;
        }
        printf("%lld\n",res1);
    }
        
    return 0;
}
