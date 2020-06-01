#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lloop(i, a, b) for(ll i=a;i<(ll)b; i++)
#define loop(i, a, b) for(int i=a;i<b;i++)

void find(int in, vector<string> phrases, vector<string> unique, map<char, int> count, int remain, vector<string> a){
	if(remain==0){
		loop(i, 0, phrases.size()){
			loop(j, 0, unique.size()){
				if(unique[j]==phrases[i])
					return;
			}
		}
		copy(phrases.begin(), phrases.end(), ostream_iterator<string>(cout, " "));
		cout<<"=";
		loop(i, 0, unique.size()){
			cout<<" "<<unique[i];
		}
		cout<<endl;
		return;
	}
	loop(i, in, a.size()){
		bool flag=false;
		int t=remain;
		map<char, int> temp=count;
		loop(j, 0, a[i].length()){
			--count[a[i][j]];
			--remain;
			if(count[a[i][j]]<0){
				flag=true;
				break;
			}
		}
		if(flag){
			remain=t;
			count=temp;
			continue;
		}
		if(remain<0)
			return;
		unique.push_back(a[i]);
		find(i+1, phrases, unique, count, remain, a);
		unique.pop_back();
		count=temp;
		remain=t;
	}
}

int main(){
	vector<string> a;
	map<string, int> m;
	string input;
	while (getline(cin, input), input != "#"){
		string s=input;
		a.push_back(s);
		m[s]=1;
	}
	vector<string> temp;
	int blank=0;
	loop(i, 0, a.size()){
		if(a[i].size()!=0){
			blank=i;
			break;
		}
	}
	if(a.size()){
		temp.push_back(a[blank]);
		loop(i, blank+1, a.size()){
			temp.push_back(a[i]);
		}
	}
	a=temp;
	while(1){
		string s;
		getline(cin, s);
		if(s=="#")
			break;
		int j=0;
		bool flag=false;
		string str="";
		loop(l, j, s.length()){
			if(s[l]==' '){
				continue;
			}
			else str+=s[l];
		}
		vector<string> phrases;
        stringstream ss(s);
       	while (ss >> s)
        	phrases.push_back(s);
		sort(str.begin(), str.end());
		sort(a.begin(), a.end());
		map<char, int> count;
		int remain=str.length();
		loop(i, 0, str.length()){
			++count[str[i]];
		}
		vector<string> unique;
		if(a.size()==0)
			continue;
		find(0, phrases, unique, count, remain, a);
	}
	return 0;
}