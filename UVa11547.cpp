#include<bits/stdc++.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long int res=0;
		int n;
		scanf("%d", &n);
		res=n;
		res*=63;
		res+=7492;
		res*=5;
		res-=498;
		res/=10;
		int ans=res%10;
		printf("%d\n", std::abs(ans));
	}
	return 0;
}