#include <stdio.h>
using namespace std;
	char a[10];
int main(){
	int b, c, sum;
	scanf("%s", &a);
	if(a[1]=='H') b=12;
	else b=12*(a[1]-48);
	if(a[2]!=0 && a[2]!='H') c=(a[2]-48);
	else if(a[3]!=0 && a[3]!='H') c=(a[3]-48);
	else c=1;
	sum=b+c;
	printf("%d", sum);
	return 0;
}
