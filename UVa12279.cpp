#include<bits/stdc++.h>
int main(){
	int i=1;
	while(1){
		int n;
		scanf("%d", &n);
		if(!n)
			break;
		int z=0, nz=0;
		for(int i=0;i<n;i++){
			int temp=0;
			scanf("%d", &temp);
			if(temp==0)
				++z;
			else ++nz;
		}
		std::cout<<"Case "<<i<<": "<<nz-z<<std::endl;
		++i;
	}
	return 0;
}