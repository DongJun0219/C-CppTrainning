#include <stdio.h> 
bool isPrime(int n){
	int i;
	if(n==1) return 0;
	for(i=2; i<n; i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main() {
	int n, i, a;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &a);
		if(isPrime(a)) printf("%d ", a);
	}
	return 0;
}

