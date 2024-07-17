#include<iostream>
using namespace std;

class Job;

class Youtube{
      private:
        int earnings;
        public:
        Youtube(int e){
            this->earnings=e;
        }
    friend void total_earnings(Youtube,Job);
};
class Job{
      private:
        int earnings;
        public:
        Job(int e){
            this->earnings=e;
        }

    friend void total_earnings(Youtube,Job);
};

 void total_earnings(Youtube y1,Job j1){
    cout<<"Total Earnings="<<y1.earnings+j1.earnings<<endl;
 }

int main(){
    Youtube y1(230000);
    Job j1(333000);
    total_earnings(y1,j1);
    return 0;
}