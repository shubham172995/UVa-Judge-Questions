#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

int main(){
	string s;
	vector<string> str;
	while(2){
		cin>>s;
		if(s=="#")
			break;
		str.push_back(s);
	}
	map<string, string> m;
	loop(i, 0, str.size()){
		string temp=str[i];
		loop(j, 0, temp.length()){
			if(temp[j]>='A'&&temp[j]<='Z')
				temp[j]+=32;
		}
		sort(temp.begin(), temp.end());
		m[str[i]]=temp;
	}
	sort(str.begin(), str.end());
	vector<string> ans;
	loop(i, 0, str.size()){
		/*string temp=str[i];
		//cout<<str[i]<<" "<<temp<<endl;
		sort(temp.begin(), temp.end());*/
		bool flag=false;
		loop(j, 0, str.size()){
			if(i==j)
				continue;
			//cout<<str[j]<<" "<<k<<endl;
			if(m[str[i]]==m[str[j]]){
				flag=true;
				break;
			}
		}
		if(!flag){
			ans.push_back(str[i]);
		}
	}
	loop(i, 0, ans.size()){
		cout<<ans[i]<<endl;
	}
	return 0;
}