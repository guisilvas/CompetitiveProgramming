#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    i=n;

    while(n/i>=0)
    {
        if(n%i==0)
        {
            if(n/i==n)
            {
                printf("%d",(n/i));
                break;
            }
            else
            {
                printf("%d ",(n/i));
            }
        }
        i--;
    }

    return 0;
}
