#include <stdio.h>
int main() {
	int a[20], b[20], i, A, B;
	for(i=0; i<10; i++){
		scanf("%d", &a[i]);
	}
	for(i=0; i<10; i++){
		scanf("%d", &b[i]);
	}
	for(i=0; i<10; i++){
		if(a[i]==b[i]){
			A=A+1;
			B=B+1;
		} 
		else if(a[i]>b[i]) A=A+3;
		else if(a[i]<b[i]) B=B+3;
	}
	printf("%d %d", A, B);
	if(A>B) printf("A\n");
	if(A<B) printf("B\n");
	if(A==B){
		for(i=10; i>0; i--){
			if(a[i]>b[i]) printf("A");
			else if(a[i]<b[i]) printf("B");
			else printf("D");
		}
	}
	return 0;
} 
