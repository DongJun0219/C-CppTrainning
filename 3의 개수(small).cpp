#include <stdio.h>
int main(){
	int n, i, tmp, cnt=0;
	scanf("%d", &n);
	for(i=3; i<=n; i++){
		tmp=i;
		while(tmp>0){
			if(tmp%10==3) cnt++;
			tmp=tmp/10;
		}
	}
	printf("%d", cnt);
	return 0;
}
