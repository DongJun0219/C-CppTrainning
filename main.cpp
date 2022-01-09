#include <stdio.h>
#include <string.h>

//int main(){
//	int n, a[200], i;
//	scanf("%d\n", &n);
//	for(i=0; i<n; i++){
//		scanf("%d", &a[i]);
//	}
//	for(i=n-1; i>=0; i--){
//		printf("%d ", a[i]);
//	}
//	return 0;
//}


//배열의 회전
  
//int main(){
//	int array[9], cnt, tem;
//	for(int a = 0; a<=8; a++) scanf("%d", &array[a]);
//	scanf("%d", &cnt);
//	for(int b = 1; b <= cnt; b++){
//		tem = array[8];
//		array[8] = array[0];
//		array[0] = array[1];
//		array[1] = array[2];
//		array[2] = array[3];
//		array[3] = array[4];
//		array[4] = array[5];
//		array[5] = array[6];
//		array[6] = array[7];
//		array[7] = tem;
//	}
//	for(int c = 0; c <= 8; c++) printf("%d ", array[c]);
//	return 0;
//}


//A를 #으로

//int main(){
//	char a[100], i, n;
//	scanf("%s", &a);
//	n=strlen(a);
//	for(i=0; i<n; i++){
//		if(a[i]=='A') a[i]='#';
//	}
//	printf("%s\n", a);
//	return 0;
//} 

// 2차원 배열
 
int a[20][20];
int main(){
	int i, j, k=1, n;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		for(j=n-1; j>=0; j--){
			a[j][i]=k++;
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}






