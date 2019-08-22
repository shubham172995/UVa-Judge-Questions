#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		int n;
		cin>>n;
		vector<int> h(n);
		int high, low;
		high=low=0;
		cin>>h[0];
		for(int j=1;j<n;j++){
			cin>>h[j];
			if(h[j]>h[j-1])
				++high;
			else if(h[j]<h[j-1])
				++low;
		}
		printf("Case %d: ", i);
		cout<<high<<" "<<low<<endl;
	}
	return 0;
}