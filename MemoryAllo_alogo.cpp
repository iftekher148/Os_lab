#include<iostream>
using namespace std;
int main(){
 int n,j,i;

 cout<<"Enter the number of holes:";
 cin>>n;

 int Hole[n],process;
 cout<<"Enter the size of hole:";
 for(i=0;i<n;i++){
    cin>>Hole[i];
 }
 cout<<"Enter the process size: ";
 cin>>process;

 cout<<"First fit:"<<Hole[0]<<endl;

 for(i=0;i<n;i++){
    for(j=i;j<n;j++){
        if(Hole[j]<Hole[i])
            swap(Hole[j],Hole[i]);
    }
 }
 for(i=0;i<n;i++){
    if(process<=Hole[i]){
        cout<<"Best fit:"<<Hole[i]<<endl;
        break;
    }
 }

 cout<<"worst fit:"<<Hole[n-1]<<endl;
 return 0;
}
