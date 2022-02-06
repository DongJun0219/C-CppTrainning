#include <stdio.h>
#include <time.h>
//int main() {
//	int n, sum=0, cnt=1, d=9, res=0;
//	scanf("%d", &n);
//	
//	while(sum+d<n){
//		res=res+(cnt*d);
//		sum=sum+d;
//		cnt++;
//		d=d*10;
//	}
//	res=res+((n-sum)*cnt);
//	printf("%d\n", res);
//	return 0;
//}

int main(){
clock_t start,end;
int a, sum = 0, cnt = 1, d = 9, res = 0;
double cl;
scanf("%d",&a);
start = clock();

while(sum+d<a)
{
res+=(cnt*d);
sum+=d;
cnt++;
d*=10;
}
res+=((a-sum)*cnt);

end = clock();
cl = ((double)end - start) / 1000;
printf("%lf\n",cl);
printf("%d",res);
}
