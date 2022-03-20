#include <stdio.h>
int a[20][20], b[20];
int main(){
	int n, i, j, sum=0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &b[i]);
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			a[j][i]=b[i];
		}
	}
	for(i=n-1; i>=0; i--){
		scanf("%d", &b[i]);
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(a[i][j]>b[i]) a[i][j]=b[i];
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			sum=sum+a[i][j];
		}
	}
	printf("%d", sum); 
	return 0;
}
