#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	map<string, vector<string> > m;
	while(1){
		string s;
		cin>>s;
		if(s=="XXXXXX")
			break;
		string temp=s;
		sort(temp.begin(), temp.end());
		m[temp].push_back(s);
	}
	while(1){
		string s;
		cin>>s;
		if(s=="XXXXXX")
			break;
		string temp=s;
		sort(temp.begin(), temp.end());
		if(!m[temp].size()){
			cout<<"NOT A VALID WORD\n******\n";
			continue;
		}
		sort(m[temp].begin(), m[temp].end());
		loop(i, 0, m[temp].size()){
			cout<<m[temp][i]<<endl;
		}
		cout<<"******\n";
	}
	return 0;
}