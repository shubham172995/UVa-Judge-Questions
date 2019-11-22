#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		cin.ignore();
		map<string, vector<string> > m;
		loop(i, 0, n){
			string s;
			cin>>s;
			string temp=s;
			sort(temp.begin(), temp.end());
			m[temp].push_back(s);
		}
		while(1){
			string s;
			cin>>s;
			if(s=="END")
				break;
			cout<<"Anagrams for: "<<s<<endl;
			string temp=s;
			sort(temp.begin(), temp.end());
			if(!m[temp].size())
				cout<<"No anagrams for: "<<s<<endl;
			else{
				//sort(m[temp].begin(), m[temp].end());
				loop(i, 0, m[temp].size()){
					cout<<"  "<<i+1<<") "<<m[temp][i]<<endl;
				}
			}
		}
		if(t)
			cout<<endl;
	}
	return 0;
}