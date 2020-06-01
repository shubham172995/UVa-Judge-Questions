#include<bits/stdc++.h>
int main(){
	while(1){
		int k;
		scanf("%d", &k);
		if(k==0)
			return 0;
		int n, m;
		scanf("%d %d", &n, &m);
		while(k--){
			int x, y;
			scanf("%d %d", &x, &y);
			if(x==n||y==m){
				printf("divisa\n");
			}
			else if(x<n&&y<m){
				printf("SO\n");
			}
			else if(x<n&&y>m){
				printf("NO\n");
			}
			else if(x>n&&y<m){
				printf("SE\n");
			}
			else printf("NE\n");
		}
	}
	return 0;
}