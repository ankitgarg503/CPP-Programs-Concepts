#include<iostream>
using namespace std;

struct Process{
    int id;
    int AT;
    int BT;
    int WT;
    int CT;
    int TAT;
};

void calculateTime(Process p1[],int n,int tq){
    int remainingTime[n];
    for (int i = 0; i < n; i++)
    {
         remainingTime[i] =p1[i].BT;
    }
    bool allDone = false;
    int currentTime = 0;
    while (!allDone)
    {
         allDone=true;
         for (int i = 0; i < n; i++)
         {
             if(remainingTime[i]>0){
                allDone=false;
                if(remainingTime[i]>tq){
                    currentTime+=tq;
                    remainingTime[i]=remainingTime[i]-tq;
                }
                else{
                    currentTime+=remainingTime[i];
                    p1[i].CT=currentTime;
                     remainingTime[i]=0;
                }
             }
         }
         

    }
    
    
}

void calculateTAT(Process p1[],int n){
     for (int i = 0; i < n; i++)
     {
         p1[i].TAT=p1[i].CT-p1[i].AT;
     }
     
}

void calculateWT(Process p1[],int n){
     for (int i = 0; i < n; i++)
     {
         p1[i].WT=p1[i].TAT-p1[i].BT;
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
    int n,tq;
    cout<<"Enter number of Process "<<endl;
    cin>>n;
    cout<<"Enter time quantum "<<endl;
    cin>>tq;
    Process p[n];
     cout << "Enter process details:\n";
  for (int i = 0; i < n; i++) {
    cout << "Process " << i + 1 << ":\n";
    p[i].id = i + 1;
    cout << "   Arrival Time: ";
    cin >> p[i].AT;
    cout << "   Burst Time: ";
    cin >> p[i].BT;
  }
   calculateTime(p,n,tq);
   calculateTAT(p,n);
   calculateWT(p,n);

 cout << "\nRound Robin Scheduling Results:\n";
  printTable(p, n);

    return 0;
}