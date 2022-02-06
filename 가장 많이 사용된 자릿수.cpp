#include <stdio.h>
int ch[10];
int main() {
	char a[200];
	int i, digit, max=-2147000000, res;
	scanf("%s", &a);
	
	for(i=0; a[i] != '\0'; i++){
		digit=a[i]-48;
		ch[digit]++;
	}
	
	for(i=0; i<=9; i++){
		if(ch[i]>max){
			max=ch[i];
			res=i;
		}
	}
	printf("%d\n", res);
	return 0;
}
