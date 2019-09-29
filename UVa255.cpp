#include<bits/stdc++.h>
using namespace std;

int main(){
	int k, q, m;
	while(scanf("%d %d %d", &k, &q, &m)!=EOF){
		if(k==q){
			cout<<"Illegal state\n";
			continue;
		}
		else if(k==m||q==m){
			cout<<"Illegal move\n";
			continue;
		}
		else if(!(((q/8)==(m/8))||(abs(q-m)%8==0))){
			cout<<"Illegal move\n";
			continue;
		}
		else if(q%8==m%8&&q%8==k%8&&((k>m&&k<q)||(k>q&&k<m))){
			cout<<"Illegal move\n";
			continue;
		}
		else if(q/8==m/8&&q/8==k/8&&((k>m&&k<q)||(k>q&&k<m))){
			cout<<"Illegal move\n";
			continue;
		}
		else if((k%8==m%8 && abs(k/8-m/8)==1) || (k/8==m/8 && abs(k%8-m%8)==1 ) ){
			cout<<"Move not allowed\n";
			continue;
		}
		else{
			q=m;
			if((k==0 && m==9) || (k==7 && m==14) || (k==56 && m==49) || (k==63 && m==54))
				cout<<"Stop\n";
			else cout<<"Continue\n";
		}
	}
	return 0;
}