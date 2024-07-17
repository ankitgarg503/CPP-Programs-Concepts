#include<iostream>
using namespace std;

struct Process{
  int id;
  int AT;
  int BT;
  int WT;
  int TAT;
  int CT;
};

void calculateTime(Process p1[],int n,int tq){
     bool allDone=false;
     int rem[10];
     for (int i = 0; i <n; i++)
     {
          rem[i]=p1[i].BT;
     }
     int curr_time=0;
     while (!allDone)
     {
        allDone=true;
        for (int i = 0; i < n; i++)
        {
             if(rem[i]>0){
                allDone=false;
                if(rem[i]>tq){
                    rem[i]=rem[i]-tq;
                    curr_time+=tq;
                }
                else{
                    curr_time+=rem[i];
                    p1[i].CT=curr_time;
                    rem[i]=0;
                }
             }
        }
        
     }
     
     
}

void calculateTAT(Process p1[],int n){
    for (int i = 0; i < n; i++)
    {
        p1[i].TAT = p1[i].CT -p1[i].AT;
    }
    
}
void calculateWT(Process p1[],int n){
    for (int i = 0; i < n; i++)
    {
        p1[i].WT = p1[i].TAT -p1[i].BT;
    }
    
}

void printTable(Process processes[], int n) {
  cout << "--------------------------------------------------------------------"
          "----------------------\n";
  cout << "| Process | Arrival Time | Burst Time | Completion Time | "
          "Turnaround Time | Waiting Time |\n";
  cout << "--------------------------------------------------------------------"
          "----------------------\n";
  for (int i = 0; i < n; i++) {
    cout << "|    " << processes[i].id << "    |      "
         << processes[i].AT << "      |     " << processes[i].BT
         << "     |        " << processes[i].CT
         << "        |        " << processes[i].TAT
         << "         |      " << processes[i].WT << "      |\n";
  }
  cout << "--------------------------------------------------------------------"
          "----------------------\n";
}

int main(){
    Process p1[10];
    cout<<"Enter no of Processes"<<endl;
    int n;
    cin>>n;
    
    cout<<"Enter Time Quantum"<<endl;
    int tq;
    cin>>tq;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter AT for "<<i+1<<"Process"<<endl;
        cin>>p1[i].AT;
        cout<<"Enter BT for "<<i+1<<"Process"<<endl;
        cin>>p1[i].BT;
        p1[i].id=i+1;
    }
    
  
    calculateTime(p1,n,tq);
    calculateTAT(p1,n);
    calculateWT(p1,n);

    cout << "\nRound Robin Scheduling Results:\n";
  printTable(p1, n);

    return 0;
}