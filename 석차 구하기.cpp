#include <stdio.h>
int main(){
	int n, a[200], b[200], i, j;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
		b[i]=1;
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(a[i]<a[j]) b[i]++;
		}
	}
	for(i=0; i<n; i++){
		printf("%d ", b[i]);
	}
}
