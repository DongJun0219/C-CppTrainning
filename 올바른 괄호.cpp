#include <stdio.h>
int main(){
	char a[60];
	int sum=0, i;
	scanf("%s", &a);
	for(i=0; i<30; i++){
		if(a[i]=='(') sum++;
		if(a[i]==')') sum--;
	}
	if(sum==0) printf("Yes\n");
	if(sum!=0) printf("No\n");
	return 0;
}
