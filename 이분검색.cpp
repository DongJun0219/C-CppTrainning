#include <stdio.h>
#include <vector>
#include <algorithm>
int main(){
	int n,m,mid,lt=0,rt=0;
	scanf("%d %d",&n,&m);
	vector<int> a(n);
	rt = n-1;
	for(int i = 0; i<n; i++)
		scanf("%d",&a[i]);
		sort(a.begin(),a.end());
	while(1){
	mid = (lt+rt)/2;
	if(m==a[mid]) break;
	else if(m<a[mid]) rt = mid-1;
	else lt = mid+1;
	}
	printf("%d",mid+1);
return 0;
}


