#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    long long int t,n,i,sum,temp,temp1,pre;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {   
        sum=0;
        scanf("%lld",&n);
        if(n>2)
        {
            sum=2;
            pre=2;
            temp=3;//term
            while(temp<=n)
            {

               if(temp%2==0)
               {
                   sum=sum+temp;
               }
               temp1=temp;
               temp=temp+pre;
               //intf("%d ",temp);
               pre=temp1;
            }
        }
        else if(n==2)
        {
            sum=2;
        }
        printf("%lld\n",sum);
    }    
    return 0;
}
