#include <bits/stdc++.h>
using namespace std;
int main(){
     int h,n,temp,width=0;
     cin>>n>>h;
     std::vector<int> v;
     for(int i=0;i<n;i++){
          cin>>temp;
          if(temp>h){
               width+=2;
          }
          else{
               width++;
          }
     }
     cout<<width;
     return 0;
}
