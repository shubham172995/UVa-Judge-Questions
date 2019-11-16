#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	int t;
	scanf("%d", &t);
	cin.ignore();
	cin.ignore();
	while(t--){
		string s;
		map<string, string> m;
		map<string, bool> n;
		map<string, vector<string> > ans;
		while(getline(cin, s)&&s!=""){
			string temp=s;
			temp.erase(remove(temp.begin(), temp.end(), ' '), temp.end());
			sort(temp.begin(), temp.end());
			m[s]=temp;
		}
		for(map<string, string>::iterator it=m.begin(); it!=m.end(); it++){
			//cout<<(*it).first<<" = "<<(*it).second<<endl;
			for(map<string, string>::iterator j=it; j!=m.end(); j++){
				if(j==it)
					continue;
				if(m[(*it).first]==m[(*j).first]){
					ans[(*it).first].push_back((*j).first);
				}
			}
			n[(*it).second]=true;
		}
		for(map<string, vector<string> >::iterator it=ans.begin(); it!=ans.end(); it++){
			for(vector<string>::iterator j=ans[(*it).first].begin(); j!=ans[(*it).first].end(); ++j){
				cout<<(*it).first<<" = "<<*j<<endl;
			}
		}
		if(t)
			cout<<endl;
	}
	return 0;
}