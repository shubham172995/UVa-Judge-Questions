#include<bits/stdc++.h>
int main(){
	while(1){
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if(a==0&&b==0&&c==0&&d==0)
			break;
		int angle=1080;
		angle+=((a-b+40)%40)*9;
		angle+=((c-b+40)%40)*9;
		angle+=((c-d+40)%40)*9;
		std::cout<<angle<<std::endl;
	}
	return 0;
}