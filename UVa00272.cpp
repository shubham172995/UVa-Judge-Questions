#include<bits/stdc++.h>

int main(){
	/*std::vector<std::string> s, t;
	int j=0;
	std::string line, temp;
	while(std::getline(std::cin, line)){
    	if (line.empty()){
        	break;
    	}
    s.push_back(line);
	}
	for(int k=0;k<s.size();k++){
		for(int i=0;i<s[k].length();i++)
		{
			if(s[k][i]=='"'){
			if(j==0){
				j=1;
				temp=s[k].substr(0, i)+"``"+s[k].substr(i+1, s[k].length()-i);
			}
			else if(j==1){
				j=0;
				temp=s[k].substr(0, i)+"''"+s[k].substr(i+1, s[k].length()-i);
			}}
		}
		t.push_back(temp);
	}
	for(int i=0;i<t.size();i++)
		std::cout<<t[i]<<std::endl;*/
	char ch;int j=0;
	while(1){
		ch=std::cin.get();
		if(std::cin.eof())
			break;
		if(ch=='"'){
			if(j==0){
				std::cout<<"``";
				j=1;
			}
			else{
				std::cout<<"''";
				j=0;
			}
		}
		else std::cout<<ch;
	}
	return 0;
}