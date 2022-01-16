#include <stdio.h>
// º°Âï±â 

void printStar(int n){
	int i;
	for(i=1; i<=n; i++){
		printf("*");
	}
}
int main (){
	int n, i;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		printStar(i);
		printf("\n");
	}
	return 0;
}
