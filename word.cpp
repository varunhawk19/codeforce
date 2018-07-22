#include <bits/stdc++.h>
using namespace std;
int main(){
     string s;
     int temp1=0,temp2=0;
     cin>>s;
     for(int i=0;i<s.length();i++){
          if(islower(s.at(i))){
               temp1++;
          }
     }
     temp2=s.length()-temp1;
     if(temp2<temp1){
          for(auto& test:s){
               test=tolower(test);
          }
     }
     else{
          for(auto& test:s){
               test=toupper(test);
          }
     }
     cout<<s;
     return 0;
}
