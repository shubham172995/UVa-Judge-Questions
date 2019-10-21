#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	while(1){
		scanf("%d %d", &n, &m);
		int ans=0;
		if(n==0&&m==0)
			break;
		if(n==1||m==1) ans=m*n;
    	else if(n==2||m==2){
    		int temp=0;
    		if(m==2)
    			temp=n;
    		else
    			temp=m;
    		int a, b;
    		a=(temp%4==0)?temp/4:(temp/4)+1;
    		b=((temp-1)%4==0)?(temp-1)/4:((temp-1)/4)+1;
    		ans=2*(a+b);
    	}
		else ans=ceil((n*m)/2.0);
		printf("%d knights may be placed on a %d row %d column board.\n", ans, n, m);
	}
	return 0;
}