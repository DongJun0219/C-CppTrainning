#include <stdio.h>
int a[200000];
int main() {
	int n, k, max=-2147000000, sum, i, j;
	scanf("%d %d", &n, &k);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n-k; i++){
		sum=0;
		for(j=i; j<i+k; j++){
			sum=sum+a[j];
		}
		if(sum>max) max=sum;
	}
	printf("%d", max);
	return 0;
}
