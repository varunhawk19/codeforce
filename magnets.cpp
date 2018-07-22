#include <bits/stdc++.h>
using namespace std;
int main(){
     int n;
     string temp;
     cin>>n;
     std::vector<int> magnets;
     int temp1,temp2,counter=1;
     for(int i=0;i<n;i++){
          cin>>temp;
          magnets.push_back(stoi(temp));
     }
     for(int i=0;i<n-1;i++){
          if(magnets.at(i)!=magnets.at(i+1)){
               counter++;
          }
     }
     cout<<counter;
     return 0;
}
