#include <stdio.h>
#include <algorithm>
int a[100], b[100];
int main() {
	char str[100];
	int n, i;
	scanf("%s", &str);
	for(i=0; str[i] != '\0'; i++){
		if(str[i]>=65 && str[i]<=90){
			a[str[i]-64]++;
		}
		else a[str[i]-70]++;
	}
	scanf("%s", &str);
	for(i=0; str[i] != '\0'; i++){
		if(str[i]>=65 && str[i]<=90){
			b[str[i]-64]++;
		}
		else b[str[i]-70]++;
	}
	//ÆÇ´Ü  
	for(i=1; i<=52; i++){
		if(a[i]!=b[i]){
			printf("NO\n");
			exit(0);
		}
	}
	printf("Yes\n");
	return 0;
}
