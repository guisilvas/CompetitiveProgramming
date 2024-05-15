#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int x, y;
	scanf("%d\n",&x);
	
	int v[x];
	for(int i=0; i<x; i++){
		scanf("%d\n",&y);
		if(y!=0){
			v[i]=y;
		} else {
			v[i-1]=0;
		}
		sum += v[i];
	}
	printf("%d",sum);
	
	return 0;
}
