#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
 int n,bt[20],wt[20],tat[20],avgwt=0,avgtat=0,i,j;

 cout<<"Enter NUmber of Process:";
 cin>>n;

 cout<<"Enter brust time:";
 for(i=0;i<n;i++){
    cout<<"P["<<i+1<<"]";
    cin>>bt[i];
 }
 wt[0]=0;
 for(i=0;i<n;i++){
    wt[i]=0;
    for(j=0;j<i;j++)
        wt[i]=wt[i]+bt[j];
 }

 cout<<"\nProcess\t\tBrust Time\tWaiting Time\tTrunearound Time";

 for(i=0;i<n;i++){
    tat[i]=wt[i]+bt[i];
    avgwt+=wt[i];
    avgtat+=tat[i];
    cout<<"\nP["<<i+1<<"]"<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
 }
 avgwt/=i;
 avgtat/=i;
 cout<<"\nAvarage waiting time:"<<avgwt;
 cout<<"\nAvarage tt time:"<<avgtat;
  return 0;
}
