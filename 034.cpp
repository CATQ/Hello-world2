#include <stdio.h>
#include <string.h>
int n;
int a[23];
int b[23],cnt;
int abs_(int a) {return a<0?-1*a:a;}
void dfs(int c) {
	if(c>n) {
		cnt++;
		return;
	}
	if(b[c]) {
		a[c] = b[c];
		if(c>1 && abs_(a[c]-a[c-1])>1) return;
		dfs(c+1);
		return;
	}
	for(int i = 1 ; i <= n ; ++i) {
		if(c==1) {
			a[c] = i;
			dfs(c+1);
		} else {
			if(abs_(i-a[c-1])<2) {
				a[c] = i;
				dfs(c+1);
			}
		}
	}
}
int main() {
	while(scanf("%d",&n),n) {
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		cnt = 0;
		for(int i = 1 ; i <= n ; ++i) scanf("%d",&b[i]);
		dfs(1);
		printf("%d\n",cnt);
	}
}

