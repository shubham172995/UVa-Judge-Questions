#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        bool p=true, sta=true, que=true;
        stack<int> s;
        queue<int> q;
        priority_queue<int> pq;
        for(int i=0;i<n;i++){
            int a, b;
            cin>>a>>b;
            if(a==1){
                if(p)
                    pq.push(b);
                if(sta)
                    s.push(b);
                if(que)
                    q.push(b);
            }
            else if(a==2){
                if(sta){
                    if(!s.size()||s.top()!=b)
                        sta=false;
                    else s.pop();
                }
                if(que){
                    if(!q.size()||q.front()!=b)
                        que=false;
                    else q.pop();
                }
                if(p){
                    if(!pq.size()||pq.top()!=b)
                        p=false;
                    else pq.pop();
                }
            }
        }
        if(!sta&&!que&&!p){
            cout<<"impossible\n";
        }
        else if(sta&&!p&&!que){
            cout<<"stack\n";
        }
        else if(que&&!p&&!sta){
            cout<<"queue\n";
        }
        else if(p&&!que&&!sta){
            cout<<"priority queue\n";
        }
        else cout<<"not sure\n";
    }
    return 0;
}