#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++){
		printf("Case #%d:\n", i);
		vector<pair<string, int> >a(10);
		for(int j=0;j<10;j++){
			cin>>a[j].first>>a[j].second;
		}
		struct sort_pred{
			bool operator()(const pair<string, int> &left, const pair<string, int> &right){
				return left.second<right.second;
			}
		};
		sort(a.begin(), a.end(), sort_pred());
		int j=0;
		for(j=9;j>=0;j--){
			if(a[j].second!=a[j-1].second)
				break;
		}
		for(j;j<=9;j++)
			cout<<a[j].first<<endl;
	}
	return 0;
}