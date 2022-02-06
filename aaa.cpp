#include <stdio.h>
int main() {
	char a[60];
	int n, i;
	scanf("%s", &a);
	
	for(i=0; i<30; i++){
		if(a[i]=='(') n++;
		if(a[i]==')') n--;
	}
	if(n==0) printf("Yes");
	if(n!=0) printf("No");
	return 0;
}
