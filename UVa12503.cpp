#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, ans=0;
		cin>>n;
		vector<int> a(n+1);
		cin.ignore();
		for(int i=1;i<=n;i++){
			string s;
			getline(cin, s);
			if(s=="LEFT")
				a[i]=-1;
			else if(s=="RIGHT")
				a[i]=1;
			else a[i]=a[stoi(s.substr(8, s.length()-8))];
		}
		for(int i=1;i<=n;i++)
			ans+=a[i];
		cout<<ans<<endl;
	}
	return 0;
}