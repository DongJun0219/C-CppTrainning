#include <stdio.h>
int main() {
	int n, i, j, a, b, sum=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		sum=0;
		scanf("%d %d", &a, &b);
		for(j=1; j<=a; j++){
			sum=sum+j;
		}
		if(sum==b) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
} 
