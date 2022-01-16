#include <stdio.h>
int digit(int n){
	if(n>=1000) return 4;
	if(n>=100) return 3;
	if(n>=10) return 2;
	if(n>=1) return 1;
} 
int main() {
	int n;
	scanf("%d", &n);
	digit(n);
	printf("%d", digit(n));
	return 0;
}
