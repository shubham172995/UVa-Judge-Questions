#include<bits/stdc++.h>
using namespace std;

int main(){
	map<string, int> m;
	m["H2"]=0;
	m["H3"]=1;
	m["H4"]=2;
	m["H5"]=3;
	m["H6"]=4;
	m["H7"]=5;
	m["H8"]=6;
	m["H9"]=7;
	m["HT"]=8;
	m["HJ"]=9;
	m["HQ"]=10;
	m["HK"]=11;
	m["HA"]=12;
	m["D2"]=13;
	m["D3"]=14;
	m["D4"]=15;
	m["D5"]=16;
	m["D6"]=17;
	m["D7"]=18;
	m["D8"]=19;
	m["D9"]=20;
	m["DT"]=21;
	m["DJ"]=22;
	m["DQ"]=23;
	m["DK"]=24;
	m["DA"]=25;
	m["S2"]=26;
	m["S3"]=27;
	m["S4"]=28;
	m["S5"]=29;
	m["S6"]=30;
	m["S7"]=31;
	m["S8"]=32;
	m["S9"]=33;
	m["ST"]=34;
	m["SJ"]=35;
	m["SQ"]=36;
	m["SK"]=37;
	m["SA"]=38;
	m["C2"]=39;
	m["C3"]=40;
	m["C4"]=41;
	m["C5"]=42;
	m["C6"]=43;
	m["C7"]=44;
	m["C8"]=45;
	m["C9"]=46;
	m["CT"]=47;
	m["CJ"]=48;
	m["CQ"]=49;
	m["CK"]=20;
	m["CA"]=51;
	while(1){
		string s;
		getline(cin, s);
		if(s[0]=='#')
			break;
		string a, b, c;
		getline(cin, a);
		getline(cin, b);
		getline(cin, c);
		stack<int> de, nde, st;
		queue<int> d, nd;
		int k=0;
		//cout<<s<<endl<<b<<endl<<a<<endl<<c<<endl;
		for(int i=0;i<s.length();i++){
			string temp="";
			temp+=s[i];
			temp+=s[i+1];
			//cout<<temp<<endl;
			if(k==0){
				k=1;
				nde.push(m[temp]);
			}
			else if(k==1){
				k=0;
				de.push(m[temp]);
			}
			i+=2;
		}
		for(int i=0;i<a.length();i++){
			string temp="";
			temp+=a[i];
			temp+=a[i+1];
			//cout<<temp<<endl;
			if(k==0){
				k=1;
				nde.push(m[temp]);
			}
			else if(k==1){
				k=0;
				de.push(m[temp]);
			}
			i+=2;
		}
		for(int i=0;i<b.length();i++){
			string temp="";
			temp+=b[i];
			temp+=b[i+1];
			//cout<<temp<<endl;
			if(k==0){
				k=1;
				nde.push(m[temp]);
			}
			else if(k==1){
				k=0;
				de.push(m[temp]);
			}
			i+=2;
		}
		for(int i=0;i<c.length();i++){
			string temp="";
			temp+=c[i];
			temp+=c[i+1];
			//cout<<temp<<endl;
			if(k==0){
				k=1;
				nde.push(m[temp]);
			}
			else if(k==1){
				k=0;
				de.push(m[temp]);
			}
			i+=2;
		}
		while(!nde.empty()){
			int t=nde.top();
			nde.pop();
			nd.push(t);
		}
		while(!de.empty()){
			int t=de.top();
			de.pop();
			d.push(t);
		}
		/*for(vector<int>::iterator it=d.begin(); it!=d.end(); it++)
			cout<<*it<<" ";
		cout<<endl;*/
		k=1;
		while(!d.empty()&&!nd.empty()){
			if(k%2){
				int t=nd.front();
				nd.pop();
				st.push(t);
				k=0;
				if(t%13<9)
					continue;
				int temp=t%13;
				temp-=8;
				bool flag=true;
				while(temp--&&!d.empty()){
					t=d.front();
					if(t%13>8){
						flag=false;
						k=1;
						break;
					}
					d.pop();
					st.push(t);
				}
				if(!flag)
					continue;
				while(!st.empty()){
					t=st.top();
					st.pop();
					nd.push(t);
				}
				k=1;
			}
			else if(k==0){
				int t=d.front();
				d.pop();
				st.push(t);
				k=1;
				if(t%13<9)
					continue;
				int temp=t%13;
				temp-=8;
				bool flag=true;
				while(temp--&&!nd.empty()){
					t=nd.front();
					if(t%13>8){
						flag=false;
						k=0;
						break;
					}
					nd.pop();
					st.push(t);
				}
				if(!flag)
					continue;
				while(!st.empty()){
					t=st.top();
					st.pop();
					d.push(t);
				}
				k=0;
			}
		}
		if(d.empty())
			cout<<"2 "<<nd.size()<<endl;
		else if(nd.empty())
			cout<<"1 "<<d.size()<<endl;
	}
	return 0;
}


/*
HA H3 H4 CA SK S5 C5 S6 C4 D5 H7 HJ HQ
D4 D7 SJ DT H6 S9 CT HK C8 C9 D6 CJ C6
S8 D8 C2 S2 S3 C7 H5 DJ S4 DQ DK D9 D3
H9 DA SA CK CQ C3 HT SQ H8 S7 ST H2 D2
*/