#include <stdio.h>
#include <vector>
#include <algorithm>
int main(){
	using namespace std;
	int n, i, pre, now, a;
	scanf("%d", &n);
	vector<int> ch(n);
	scanf("%d", &pre);
	for(i=1; i<n; i++){
		scanf("%d", &now);
		a=abs(pre-now);
		if(a>0 && a<n && ch[a]==0) ch[a]=1;
		else{
			printf("No\n");
			return 0;
		}
		pre=now;
	}
	printf("Yes\n");
	return 0;
}
