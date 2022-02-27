#include <stdio.h>
int main(){
	int n, i, j, a[200], idx, tmp, cnt;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	
	//scan하는 코드  
	for(i=0; i<n-1; i++){
		idx=i;
		for(j=i; j<n; j++){
			if(a[idx]>a[j]) idx=j;
		}
		
		//swap하는 코드  
		tmp=a[i];
		a[i]=a[idx];
		a[idx]=tmp;
	}
	for(i=1; i<n; i++){
		if(a[i-1]!=a[i]) cnt++;
		if(cnt==2){
			printf("%d\n", a[i]);
			break;
		}
	}
	return 0;
}
