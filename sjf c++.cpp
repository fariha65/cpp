#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,bt[20],wt[20],tat[20],i,j,order[20];
    cout<<"Enter number of processes: ";
    cin>>n;

    cout<<"Enter Process Burst time: "<<endl;
    for(i=0;i<n;i++){
        cout<<"P["<<i+1<<"]:";
        cin>>bt[i];
        order[i]=i;
    }

    for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                if(bt[j]<bt[i]){
                    swap(bt[i], bt[j]);
                    swap(order[i],order[j]);
                }
           }
     }

     wt[0]=0;
     cout<<endl<<"Process\t\tBurst Time\tWaiting Time\tTurnaround Time"<<endl;
     for(i=0;i<n;i++){
            wt[i+1]=wt[i]+bt[i];
            tat[i]=wt[i]+bt[i];
            cout<<"P["<<order[i]+1<<"]\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;
    }
    cout<<endl;
    cout<<"The gantt chart is showing below there "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"   P["<<order[i]+1<<"] ";
    }
    cout<<endl;
    cout<<"|-----|---------|-------|---------|--------|"<<endl;
    cout<<"0     ";
    for(i=0;i<n;i++)
    {
        cout<<tat[i]<<"       ";
    }
     return 0;
}
