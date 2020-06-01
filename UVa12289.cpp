#include<bits/stdc++.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		std::string s;
		std::cin>>s;
		int one=0;
		if(s.length()!=3){
			printf("3\n");
		}
		else{
			if(s[0]=='o')
				++one;
			if(s[1]=='n')
				++one;
			if(s[2]=='e')
				++one;
		if(one>=2)
			printf("1\n");
		else printf("2\n");
	}
	}
	return 0;
}