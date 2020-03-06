#include<bits/stdc++.h>
using namespace std;

int main(){
	while(1){
		int t;
		scanf("%d", &t);
		if(!t)
			break;
		while(t--){
			long long x, y, n, z=1;
			cin>>x>>y>>n;
			x%=n;
			while(y){
				if(y&1)
					z=z*x%n;
				x=x*x%n;
				y>>=1;
			}
			cout<<z<<endl;
		}
	}
	return 0;
}