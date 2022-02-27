#include <stdio.h>
int main(){
	int n, a[200], m[100] = {0,}, p[100] = {0}, mc = 0, pc = 0;
	scanf("%d", &n);
	for(int i = 0; i<n; i++) scanf("%d",&a[i]);
	
	for(int i = 0; i<n; i++){
		if(a[i] < 0) m[mc++] = a[i];
		else p[pc++] = a[i];
	}
	
	for(int i = 0; m[i] != 0; i++)
		printf("%d ",m[i]);
		
	for(int i = 0; p[i] != 0; i++)
		printf("%d ",p[i]);
	return 0;
}


