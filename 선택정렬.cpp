#include <stdio.h>
int main(){
	int n, i, j, a[200], idx, tmp;\
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	//scan하는 코드  
	for(i=0; i<n-1; i++){
		idx=i;
		for(j=i+1; j<=n; j++){
			if(a[idx]>a[j]) idx=j;
		}
		
		//swap하는 코드  
		tmp=a[i];
		a[i]=a[idx];
		a[idx]=tmp;
	}
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
