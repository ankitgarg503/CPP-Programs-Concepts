#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="Ankit Garg";
    string s2;
    s2=s;
    cout<<s2;
    return 0;
}





// #include<iostream>
// #include<string>

// using namespace std;


// class Binary{
//     private:
//     string s;
//     public:
//     void  setData(void);
//      void display(void);
//      void onesCompliment(void );
//      void chkBinary(void );

// };
// void Binary::setData(){
//     cout << "Enter one Binary Number"<<endl;
//     cin>>s; 
//     // cout<<s.at(0); 

// }
// void Binary::chkBinary(void){
//     for (int  i = 0; i <s.length(); i++)
//     {
//         if(s.at(i)!='0' && s.at(i)!='1'){
//             cout<<"Invalid Binary Format"<<endl;
//             exit(0);
//         }
        
//     }
    
    
// }
// void Binary::display(void){
//     for (int i = 0; i < s.length(); i++)
//     {
//           cout<<s.at(i);      
//     }
//     cout<<"\n";
//     chkBinary();


// }
// void Binary::onesCompliment(void){

//     for (int i = 0; i < s.length(); i++)
//     {
//         if(s.at(i) =='0'){
//             s.at(i) = '1';

//         }
//         else{
//              s.at(i) = '0';
//         }
//     }
    
//     display();
// }

// int main(){

//     Binary b1;
//     b1.setData();
//      b1.chkBinary();
//     // b1.display();
//     cout<<"\n";
//     b1.onesCompliment();
//     // b1.display();
//     return 0;
// }