#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, b, h, w;
	while(cin>>n>>b>>h>>w){
	int ans=b+5;
	for(int i=0;i<h;i++){
		int price, min=-1;
		cin>>price;
		for(int j=0;j<w;j++){
			int temp;
			cin>>temp;
			if(temp>=n){
				min=price*n;
			}
		}
		if(min!=-1)
			ans=min<ans?min:ans;
	}
	if(ans<=b)
		cout<<ans<<endl;
	else cout<<"stay home\n";
}
	return 0;
}