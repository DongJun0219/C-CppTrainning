#include <stdio.h>
int main(){
	int n, m, a[200], b[200], c[400], i, j, p1=0, p2=0, p3=0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	for(i=0; i<m; i++){
		scanf("%d", &b[i]);
	}
	while(p1<n && p2<m){
		if(a[p1]<b[p2]) {
			c[p3]=a[p1];
			p1++;
			p3++;
		}
		else {
			c[p3]=b[p2];
			p2++;
			p3++;
		}
	}
	while(p1<n){
		c[p3++]=a[p1++];
	}
	while(p2<m){
		c[p3++]=b[p2++];
	}
	for(i=0; i<p3; i++){
		printf("%d ", c[i]);
	}
	return 0;
} 
