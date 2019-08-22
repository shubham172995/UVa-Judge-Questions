#include<bits/stdc++.h>
using namespace std;
int main(){
	while(1){
		int n, r;
		double down, cost;
		cin>>n>>down>>cost>>r;
		if(n<0)
			break;
		vector<double> rates(r);vector<int> month(r);
		for(int i=0;i<r;i++)
			cin>>month[i]>>rates[i];
		double emi=cost/n;
		double owe=cost;
		cost+=down;
		cost=cost-rates[0]*cost;
		int temp=1;int m=0;
		if(owe>=cost){
		for(m=1;m<=n;m++){
			if(month[temp]>m){
				owe=owe-emi;
				cost=cost-rates[temp-1]*cost;
			}
			else if(month[temp]==m){
				owe=owe-emi;
				cost=cost-rates[temp]*cost;
				temp=temp==(r-1)?temp:temp+1;
			}
			else if(temp==r-1){
				owe=owe-emi;
				cost=cost-rates[temp]*cost;
			}
			if(owe<cost)
				break;
		}
	}
		if(m==1)
			cout<<m<<" month"<<endl;
		else cout<<m<<" months"<<endl;
		/*while(owe>=cost){
			if(m<=month[temp]||temp==r-1){
				++m;
				owe=owe-down;
				cost=cost-rates[temp]*cost;
				if(m>month[temp])
					temp=temp==(r-1)?temp:temp+1;
			}
			else{
				++temp;
				m=month[temp];
				owe=owe-down;
				cost=cost-rates[temp]*cost;
			}
		}*/
	}
	return 0;
}