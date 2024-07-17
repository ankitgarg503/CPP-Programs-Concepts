// #include<iostream>
// using namespace std;

// int &fun()
// {
//   static int x = 10;
//   return x;
// }
// int main()
// {
//     int &y=fun();
//    y=y+30;
//    cout << fun();
//    cout<<endl<<sizeof('x');
//    cout<<endl<<sizeof(char);
//    return 0;
// }



 #include<iostream>
 using namespace std;
 class A{
    static int a;
     int b;  
 };
 //int A::a;
 int main(){
    // A obj1;
    cout<<sizeof(A)<<endl;  
    //cout<<sizeof(obj1)<<endl;  
  //  int a=10;
  //  cout<<a++<<endl;
     return 0;
 }