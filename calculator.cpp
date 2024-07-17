#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter Two Numbers \n";
    cin>>a>>b;
    int choice;
    cout<<"Press 1 For Add\n Press 2 For Subtract\n Press 3 For Multiply\n Press 4 For Division\n Press 5 for Exit\n";
    
    
    while(1)
    {
        cout<<"\nEnter Your Choice:  ";
        cin>>choice;
        if (choice==5)
                {
           break;
        }
        
        switch(choice)
    {
    case 1:
      cout<<"Sum of 2 Number ="<<a+b;
               
        break;    
    case 2:
      cout<<"Differnce of 2 Number ="<<a-b;
       break;
    
    case 3:
      cout<<"Multiply of 2 Number ="<<a*b;
      break;
    
    case 4:
      cout<<"Division of 2 Number ="<<a/b;    
      break;
    
    // default:
    // cout<<"Invalid Choice";
    //     break;
    }
}
   }
    
    