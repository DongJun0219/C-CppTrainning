#include <stdio.h>
int main() {
	int n, a[100001], i, cnt=1, max=-2147000000;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++){
	printf("%d ", a[i]);
	}
	for(i=0; i<n; i++){
		if(a[i]<=a[i+1]) cnt++;
		else if(a[i]>a[i+1]) cnt=1;
		if(cnt>max) max=cnt;
	}
	printf("%d", max);
	return 0;
}
