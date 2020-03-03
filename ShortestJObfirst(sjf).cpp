#include<iostream>
using namespace std;
int main(){
 int n,bt[20],wt[20],tat[20],avgwt=0,avgtat=0,i,j,p[20];

 cout<<"Enter number of process:";
 cin>>n;

 cout<<"Enter brust time:";
 for(i=0;i<n;i++){
    cout<<"P["<<i+1<<"]:";
    cin>>bt[i];
    p[i]=i+1;
 }

 for(i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(bt[j]>bt[i]){
            int temp;
            temp=bt[i];
            bt[i]=bt[j];
            bt[j]=temp;

            temp=p[i];
            p[i]=p[j];
            p[j]=temp;
        }
    }
 }

 wt[0]=0;

 for(i=0;i<n;i++){
    wt[i]=0;
    for(j=0;j<i;j++)
        wt[i]=wt[i]+bt[j];
 }

cout<<"\nProcess\t\tBrust time\tWaiting Time\ttrunAround time";
 for(i=0;i<n;i++){
    tat[i]=wt[i]+bt[i];
    avgwt+=wt[i];
    avgtat+=tat[i];
    cout<<"\nP["<<p[i]<<"]"<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<bt[i];
 }
 avgwt/=i;
 avgtat/=i;
  cout<<"\n\nAverage Waiting Time:"<<avgwt;
    cout<<"\nAverage Turnaround Time:"<<avgtat;

    return 0;
}
