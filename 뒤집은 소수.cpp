#include <stdio.h>
//������ �˰��� 
int reverse(int x){
	int res=0, tmp;
	while(x>0){
		tmp=x%10;
		res=res*10+tmp;
		x=x/10;
	}
	return res;
}
//�Ҽ� ���ϴ� �˰��� 
bool isPrime(int x){
	int i;
	bool flag=true;
	for(i=2; i<x; i++){
		if(x%i==0){
			flag=false;
			break;
		}
	}
	return flag;
}
int main(){
	int n, i, num, tmp;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &num);
		tmp=reverse(num);
		if(isPrime(tmp)) printf("%d ", tmp);
	}
	return 0;
}
