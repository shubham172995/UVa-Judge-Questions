#include<bits/stdc++.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m, ans=0;
		scanf("%d %d", &n, &m);
		ans=(n/3)*(m/3);
		std::cout<<ans<<std::endl;
	}
	return 0;
}