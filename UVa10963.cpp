#include<bits/stdc++.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int c;
		scanf("%d", &c);
		int diff=-1;
		bool flag=false;
		for(int i=0;i<c;i++){
			int a, b;
			scanf("%d %d", &a, &b);
			int temp=abs(a-b);
			if(diff==-1)
				diff=temp;
			if(diff!=temp)
				flag=true;
		}
		if(!flag)
			printf("yes\n");
		else if(flag)
			printf("no\n");
		if(t)
			printf("\n");
	}
	return 0;
}