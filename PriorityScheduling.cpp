#include<iostream>
using namespace std;

int main(){
 int n,bt[20],pr[20],wt[20],tat[20],avgwt=0,avgtat=0,i,j,temp,p[20],pos;

 cout<<"Enter total number of processes:";
    cin>>n;

    cout<<"Enter Brust time:";
    for(i=0;i<n;i++){
        cout<<" Brust time:";
        cout<<"\nP["<<i+1<<"]:";
        cin>>bt[i];
        cout<<"Priority:";
        cin>>pr[i];
        p[i]=i+1;
    }
    for(i=0;i<n;i++){

        for(j=0;j<n;j++){
            if(pr[j]>pr[i]){

            temp=pr[i];
            pr[i]=pr[j];
            pr[j]=temp;

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
            wt[i]+=bt[j];
    }
    cout<<"\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time";

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
