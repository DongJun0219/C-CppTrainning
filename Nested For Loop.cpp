#include<stdio.h>

/******Practice******/
//int main(){
//	int i, j;
//	for(i=1; i<=3; i++) {
//		for(j=3; j>=i; j--) {
//			printf("* ");
//		}
//		printf("\n");
//	} 
//	return 0;
//}

/******29.Rectangular******/
//int main(){
//	int n, i, j;
//	scanf("%d", &n);
//	for(i=1; i<=n; i++){
//		for(j=1; j<=n; j++){
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

/******30.Triangle******/
//int main(){
//	int n, i, j;
//	scanf("%d", &n);
//	for(i=1; i<=n; i++){
//		for(j=i; j<=n; j++){
//			printf("@");
//		}
//		printf("\n");
//	}
//	return 0;
//}

/******31.Triangle******/
//int main(){
//	int n, i, j, k;
//	scanf("%d", &n);
//	for(i=1; i<=n; i++){
//		for(k=i; k<n; k++){
//			printf(" ");
//		}
//		for(j=1; j<=i; j++){
//			printf("@");
//		}
//		printf("\n");
//	}
//	return 0;
//}

/******32.Triangle******/
int main(){
	int n, i, j, k;
	scanf("%d", &n);
	for(i=1; i<=n/2+2; i++){
		for(k=i; k<n/2+2; k++){
			printf(" ");
		}
		for(j=1; j<i; j++){
			printf("@");
		}
		printf("\n");
	}
	for(i=2; i<=n/2+2; i++){
		for(j=1; j<i; j++){
			printf(" ");
		}
		for(k=i; k<n/2+2; k++){
			printf("@");
		}
		printf("\n");
	}
	return 0;
}



