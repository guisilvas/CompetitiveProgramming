#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int x, y, sum=0;
	scanf("%d\n",&x);

	int v[x];
	for(int i=0; i<x; i++){
		scanf("%d\n",&y);
		if(y!=0){
			v[i]=y;
		} else {
		    v[i]=0;
		    int j=0;
			while(j=0){
                v[i-0]=0;
                j++;
			}
		}
	}
	for(int i=0; i<x; i++){
        printf("\t%d\n",v[i]);
        sum += v[i];
	}

	printf("%d",sum);

	return 0;
}
