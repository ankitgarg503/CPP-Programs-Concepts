#include<iostream>
using namespace std;

int swap(int *a,int *b){
    swap(*a,*b);
}

int main(){
    int bt[10],priority[10],index[10];
    int n,t,m;
    cout<<"Enter no. of Processes: "<<endl;
    cin>>n;
    cout<<"Enter BT PT and ID of Process"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter BT PT of Process: "<<i+1<<"\n";
        cin>>bt[i];
        cin>>priority[i];
         index[i]=i+1;
    }
    for (int i = 0; i < n; i++)
    {
        t=priority[i];
        m=i;
        for (int j = i; j < n; j++)
        {
            if(priority[j]>t){
                t=priority[j];
                m=j;
            }
        }
        swap(&priority[i], &priority[m]);
        swap(&bt[i], &bt[m]);
        swap(&index[i], &index[m]);
    }
    printf("PID  BT  TAT  WT\n");
    int wait_time=0;
    for (int i = 0; i < n; i++)
    {
        cout<<"P"<<index[i]<<"   "<<bt[i]<<"   "<<wait_time+bt[i]<<"  "<<wait_time<<endl;
        wait_time+=bt[i];
    }
    
    

    return 0;
}