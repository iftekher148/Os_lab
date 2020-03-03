#include<bits/stdc++.h>
using namespace std;

int main(){
 int rs,ref_str[100],fr,memo[100],pf=1,m=1,i,j;

 cout<<"Enter the number of reference String:";
 cin>>rs;

 cout<<"Enter the reference string:";
 for(i=0;i<rs;i++){
    cin>>ref_str[i];
 }

 cout<<"Enter the number of frame in memory:";
 cin>>fr;
 memo[0]=ref_str[0];
 for(i=1;i<rs;i++){
    int flag=0;
    for(j=0;j<fr;j++){
        if(memo[j]==ref_str[i])
            flag=1;
    }
    if(flag==0){
        pf++;
        if(m==fr){
            m=0;
        }
        memo[m]=ref_str[i];
        m++;
    }
 }
 cout<<"Page fault :"<<pf;
 return 0;
}
