/*In a circus, There are n number of poles of given height in a linear manner. A screen made of cloth can be attached 
from one pole to another. The circus people want to use the biggest screen with respect to area. Find the max area 
between any two poles so that they use the biggest screen. Consider distance between each poles is 1 unit.
Eg. Input: Order and height of poles: [5,4,3,5,2,1,3,4] -> Answer: 28
Another example: [5,4,3,9,2,1,3,7] -> Answer: 35*/

#include<iostream>
#include<cstdlib>
#include<vector>
#include<algorithm>
#include<limits.h>
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

int max=0;
auto i=0;
auto j=a.size()-1;
while(i<j)
{
   int s=i-j;
   if(min(a[i],a[j])*abs(s)>max){
      max=min(a[i],a[j])*abs(s);
   }

   if(a[i]>a[j]){
      j--;
   }
   else{
      i++;
   }


}
cout<<max;
return 0;
}