#include<iostream>
using namespace std;

class Array
{
	public:
	int arr[10],max,min,pos=0,neg=0,i;
	float salary;
	
	void process()
	{
	   for(i=0;i<10;i++)
	   {
	      cin>>arr[i];	
	   }
	   for(i=0;i<10;i++)
	   {
	      cout<<arr[i]<<endl;	
	   }
	   for(i=0;i<10;i++)
	   {
	      if(arr[i]>0)
		  {
		     pos++; 	
		  }	
	   }	
	    for(i=0;i<10;i++)
	   {
	      if(arr[i]<0)
		  {
		     neg++; 	
		  }	
	   }
	   	
	   	max=arr[0];
	   	 for(i=0;i<10;i++)
	   {
	      if(arr[i]>max)
		  {
		  	max=arr[i];
			  }	
	   }
	   
	   	min=arr[0];
	   	 for(i=0;i<10;i++)
	   {
	      if(arr[i]<max)
		  {
		  	min=arr[i];
			  }	
	   }
	   	
	   	
	   	
	   
	   
	}	
	void display()
	{
	  cout<<"\n Positive no="<<pos;
	  cout<<"\n Negtive no="<<neg;	
	  cout<<"\n MAximum of Array="<<max;
	  cout<<"\n Minimum of Array="<<min;
	}
};



int main()
{
	Array a1;
//	a1.a=20;
//	a1.age=20;
//	a1.salary=300000;
//	a1.display();
     a1.process();
     a1.display();
	cout<<"\nAnkit Garg";
}
