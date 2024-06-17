/*Identify this pattern [1,2,3,5,7,8,15]  -> [1-3,5,7-8,15]. Your code must output [1-3,5,7-8,15] when an input
like [1,2,3,5,7,8,15] is given. I must be able to input any array.*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cout<<"Enter no of items:\n";
cin>>n;
 int s;
vector<int> a;
for(int i=0;i<n;i++){
   cout<<"Enter number"<<i+1<<endl;
   cin>>s;
   a.push_back(s);
}

for(auto i=a.begin();i!=a.end();++i){
    cout<<*i;
    if(*i+1==*(i+1)){
        cout<<"-";
    while(*i+1==*(i+1) || *i==*(i+1)){
        ++i;
    }
    cout<<*i<<",";
    }
    else{
        cout<<",";
    }
}

return 0;
}