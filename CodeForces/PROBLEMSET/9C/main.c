/*
2^n° casas decimais - 1 = result
0 1 2 3 4 5 6 7 8 9 10
11 12 13 14 15 16 17 18 19

105
(0) 1 10 11 100 101 (110) (111)
                  105

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int x, tam=1, result, binary=0;
    scanf("%d",&x);
    while(x/10!=0)
    {
        tam++;
        x/=10;
    }

    for(int i=0; i<tam; i++)
    {
        binary*=10;
        binary+=1;
    }
    result=(pow(2,tam)-1);

    for(int i=0; i<result; i++)
    {
        if(binary/100)
        {

        }
    }

    printf("%d %d %d", tam, result, binary);
    return 0;
}
