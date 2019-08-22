#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, b;
	while(1){
	cin>>b>>n;
	if(b==0||n==0)
		break;
	else{
	vector<int> res(b+1);
	for(int i=1;i<=b;i++)
		cin>>res[i];
	bool flag=false;
	for(int i=0;i<n;i++){
		int d, c, deb;
		cin>>d>>c>>deb;
		res[c]+=deb;
		res[d]-=deb;
	}
	for(int i=1;i<=b;i++)
		if(res[i]<0)
			flag=true;
	if(flag)
		cout<<"N\n";
	else cout<<"S\n";
}}
	return 0;
}