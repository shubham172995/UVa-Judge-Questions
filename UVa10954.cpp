#include<bits/stdc++.h>
using namespace std;

struct comp{
    bool operator()(const long long& a, const long long& b){
        return a>b;
    }
};

int main(){
    while(1){
        int n;
        cin>>n;
        if(n==0)
            break;
        priority_queue<long long, vector<long long>, comp> q;
        long long sum=0;
        for(int i=0;i<n;i++){
            long long temp;
            cin>>temp;
            q.push(temp);
        }
        /*while(q.size()){
            cout<<q.top()<<endl;
            q.pop();
        }*/
        while(q.size()>1){
            long long a, b;
            a=q.top();
            q.pop();
            b=q.top();
            q.pop();
            sum+=a+b;
            q.push(a+b);
        }
        cout<<sum<<endl;
    }
}