#include<bits/stdc++.h>
using namespace std;
int main(){
    //maxheap
priority_queue<int>q;
    //now elements will be added at the top of priority queue just like stack 
q.push(3);
q.push(5);
q.push(17);
q.push(1);
q.push(43);
q.push(72);
q.push(37);
//it is just like stack in order to get the element
cout<<q.size()<<endl;
vector<int>a;
while(!q.empty()){
a.push_back(q.top());
q.pop();
}
reverse(a.begin(),a.end());
int i=0;
while(i<a.size()){
    cout<<a[i]<<" ";
    i++;
}

//min heap
    priority_queue<int,vector<int>,greater<int> >m;
    m.push(45);
    m.push(23);
    m.push(56);
    m.push(35);
    m.push(637);
    m.push(1);
    cout<<endl;
while(!m.empty()){
cout<<m.top()<<" ";
m.pop();
}
}
