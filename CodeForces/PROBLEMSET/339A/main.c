/*


n/2+1 + n/2-1
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont[4];

    if(scanf("+%d",&num)||scanf("%d",&num)){
        cont[num]++;
    }
    for(int i=0; i<4; i++){
        while(cont[i]>0){
            printf("+%d",i);
            cont[i]--;
        }
    }

    return 0;
}
