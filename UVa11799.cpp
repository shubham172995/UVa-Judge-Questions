#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		int max=0;
		for(int j=0;j<n;j++){
			int temp;
			cin>>temp;
			max=max>temp?max:temp;
		}
		printf("Case %d: %d\n", i, max);
	}
	return 0;
}