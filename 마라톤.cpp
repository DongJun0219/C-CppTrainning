#include <stdio.h>
int main(){
	int n, a[20000], b[20000], i, j;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
		b[i]=1;
	}
	for(i=0; i<n; i++){
		for(j=0; j<=i; j++){
			if(a[j]>a[i]) b[i]++;
		}
	}
	for(i=0; i<n; i++){
		printf("%d ", b[i]);
	}
	return 0;
}
