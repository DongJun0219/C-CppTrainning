#include <stdio.h>
int main(){
	int a[200], n, i, j, tmp;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	} 
	for(i=0; i<n-1; i++){
		for(j=0; j<n-1; j++){
			if(a[j]>a[j+1]){
				//swapÄÚµå 
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp; 
			}
		}
	}
	for(i=0; i<n; i++){
		printf("%d  ", a[i]);
	}
	return 0;
} 
