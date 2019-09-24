#include<bits/stdc++.h>
using namespace std;

int main(){
	while(1){
		char ch;
		cin>>ch;
		if(ch=='#'){
			break;
		}
		if(ch=='N')
			ch='E';
		else if(ch=='E')
			ch='S';
		else if(ch=='S')
			ch='W';
		else if(ch=='W')
			ch='N';
		string a, b;
		map<int, char> m;
		map<int, char> o;
		o[1]='C';
		o[2]='D';
		o[3]='S';
		o[4]='H';
		map<char, int> p;
		m[1]='2';p['2']=1;
		m[2]='3';p['3']=2;
		m[3]='4';p['4']=3;
		m[4]='5';p['5']=4;
		m[5]='6';p['6']=5;
		m[6]='7';p['7']=6;
		m[7]='8';p['8']=7;
		m[8]='9';p['9']=8;
		m[9]='T';p['T']=9;
		m[10]='J';p['J']=10;
		m[11]='Q';p['Q']=11;
		m[12]='K';p['K']=12;
		m[13]='A';p['A']=13;
		cin>>a>>b;
		vector<pair<int, int> > n, s, w, e;
		for(int i=0;i<a.length();i+=2){
			if(ch=='N'){
				ch='E';
				if(a[i]=='C')
					n.push_back(make_pair(1, p[a[i+1]]));
				else if(a[i]=='D')
					n.push_back(make_pair(2, p[a[i+1]]));
				else if(a[i]=='S')
					n.push_back(make_pair(3, p[a[i+1]]));
				else if(a[i]=='H')
					n.push_back(make_pair(4, p[a[i+1]]));
			}
			else if(ch=='E'){
				ch='S';
				if(a[i]=='C')
					e.push_back(make_pair(1, p[a[i+1]]));
				else if(a[i]=='D')
					e.push_back(make_pair(2, p[a[i+1]]));
				else if(a[i]=='S')
					e.push_back(make_pair(3, p[a[i+1]]));
				else if(a[i]=='H')
					e.push_back(make_pair(4, p[a[i+1]]));
			}
			else if(ch=='S'){
				ch='W';
				if(a[i]=='C')
					s.push_back(make_pair(1, p[a[i+1]]));
				else if(a[i]=='D')
					s.push_back(make_pair(2, p[a[i+1]]));
				else if(a[i]=='S')
					s.push_back(make_pair(3, p[a[i+1]]));
				else if(a[i]=='H')
					s.push_back(make_pair(4, p[a[i+1]]));
			}
			else if(ch=='W'){
				ch='N';
				if(a[i]=='C')
					w.push_back(make_pair(1, p[a[i+1]]));
				else if(a[i]=='D')
					w.push_back(make_pair(2, p[a[i+1]]));
				else if(a[i]=='S')
					w.push_back(make_pair(3, p[a[i+1]]));
				else if(a[i]=='H')
					w.push_back(make_pair(4, p[a[i+1]]));
			}
		}
		for(int i=0;i<b.length();i+=2){
			if(ch=='N'){
				ch='E';
				if(b[i]=='C')
					n.push_back(make_pair(1, p[b[i+1]]));
				else if(b[i]=='D')
					n.push_back(make_pair(2, p[b[i+1]]));
				else if(b[i]=='S')
					n.push_back(make_pair(3, p[b[i+1]]));
				else if(b[i]=='H')
					n.push_back(make_pair(4, p[b[i+1]]));
			}
			else if(ch=='E'){
				ch='S';
				if(b[i]=='C')
					e.push_back(make_pair(1, p[b[i+1]]));
				else if(b[i]=='D')
					e.push_back(make_pair(2, p[b[i+1]]));
				else if(b[i]=='S')
					e.push_back(make_pair(3, p[b[i+1]]));
				else if(b[i]=='H')
					e.push_back(make_pair(4, p[b[i+1]]));
			}
			else if(ch=='S'){
				ch='W';
				if(b[i]=='C')
					s.push_back(make_pair(1, p[b[i+1]]));
				else if(b[i]=='D')
					s.push_back(make_pair(2, p[b[i+1]]));
				else if(b[i]=='S')
					s.push_back(make_pair(3, p[b[i+1]]));
				else if(b[i]=='H')
					s.push_back(make_pair(4, p[b[i+1]]));
			}
			else if(ch=='W'){
				ch='N';
				if(b[i]=='C')
					w.push_back(make_pair(1, p[b[i+1]]));
				else if(b[i]=='D')
					w.push_back(make_pair(2, p[b[i+1]]));
				else if(b[i]=='S')
					w.push_back(make_pair(3, p[b[i+1]]));
				else if(b[i]=='H')
					w.push_back(make_pair(4, p[b[i+1]]));
			}
		}
		sort(n.begin(), n.end());
		sort(s.begin(), s.end());
		sort(e.begin(), e.end());
		sort(w.begin(), w.end());
		cout<<"S:";
		for(int i=0;i<s.size();i++)
			cout<<" "<<o[s[i].first]<<m[s[i].second];
		cout<<"\nW:";
		for(int i=0;i<w.size();i++)
			cout<<" "<<o[w[i].first]<<m[w[i].second];
		cout<<"\nN:";
		for(int i=0;i<n.size();i++)
			cout<<" "<<o[n[i].first]<<m[n[i].second];
		cout<<"\nE:";
		for(int i=0;i<e.size();i++)
			cout<<" "<<o[e[i].first]<<m[e[i].second];
		cout<<endl;
	}
	return 0;
}