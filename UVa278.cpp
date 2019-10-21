#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		int ans=0, n, m;
		char ch;
		cin>>ch>>n>>m;
		if(ch=='r'||ch=='Q'){
			cout<<min(n, m)<<endl;
			continue;
		}
		else if(ch=='K'){
			n=ceil((double)n/2);
			m=ceil((double)m/2);
			cout<<n*m<<endl;
			continue;
		}
		else{
			ans=ceil(m*n/2.0);
			cout<<ans<<endl;
		}
	}
	return 0;
}