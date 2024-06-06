#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y,z=1;
    scanf("%f %f",&x,&y);
    for(int i=0;i<y;i++)
    {
        z*=x;
    }
    printf("%.4f",z);
    return 0;
}