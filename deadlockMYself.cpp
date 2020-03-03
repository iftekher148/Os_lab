#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,m,i,j,k,l=0;

 cout<<"Enter the number of Process:";
 cin>>n;
 cout<<"Enter the number of Resources:";
 cin>>m;

  int Allo[n][m],Req[n][m];
  int Avail[m],Work[m],Finish[n],Sequence[n],prAllo[n];
  bool Flag,deadlock=false;

 cout<<"Enter total Number of instance:";
 for(i=0;i<m;i++){
    cin>>Avail[i];
 }

 cout<<"Enter Allocation of Process:";
 for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        cin>>Allo[i][j];
        prAllo[i]=prAllo[i]+Allo[i][j];
        Avail[j]=Avail[j]-Allo[i][j];
        Work[j]=Avail[j];
    }
    if(prAllo!=0)
        Finish[i]=0;
    else
        Finish[i]=1;
 }

 cout<<"Enter the Request:";
 for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        cin>>Req[i][j];
    }
 }

 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        Flag=true;
        for(k=0;k<m;k++){
            if(!(Finish[j]==0 && Req[j][k]<=Work[k]))
                Flag=false;
        }
        if(Flag==true){
            Finish[j]=1;
            for(k=0;k<m;k++){
                Work[k]=Work[k]+Allo[j][k];
        }
        Sequence[l]=j;
        l++;
    }
 }
 }
for(i=0;i<n;i++){
    if(Finish[i]==0){
        deadlock=true;
    }
}

if(deadlock==true){
    cout<<"There is deadlock:";
    cout<<"The sequence is:";
    for(i=0;i<n;i++)
    if(Finish[i]==0)
        cout<<"P["<<i<<"]:";
}
else{
    cout<<"There is no deadlock:";
    cout<<"Sequence:";
    for(i=0;i<n;i++){
        cout<<"P["<<Sequence[i]<<"]";
    }
}
 return 0;
}
