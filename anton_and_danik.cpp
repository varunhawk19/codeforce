#include <bits/stdc++.h>
using namespace std;
int main(){
     int i,a_counter=0,b_counter=0;
     cin>>i;
     string s;
     cin>>s;
     for(i=0;i<s.length();i++){
          if(s.at(i)=='A'){
               a_counter++;
          }
          else{
               b_counter++;
          }
     }
     if(a_counter==b_counter){
          cout<<"Friendship";
     }
     else{
          if(a_counter>b_counter){
               cout<<"Anton";
          }
          else{
               cout<<"Danik";
          }
     }a
     return 0;
}
