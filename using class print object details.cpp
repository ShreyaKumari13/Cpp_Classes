//using class print object details
#include<iostream>
using namespace std;

class item{
    private:
        int number;
        float cost;
    public:
        void getdata(int a,int b);
        void putdata(void){
            cout<<"number : "<<number<<endl;
            cout<<"cost : "<<cost<<endl;
        }

};

void item :: getdata(int a,int b){
    number = a;
    cost = b;
}

int main(){
    item x;
    cout<<"object x"<<endl;
    x.getdata(100,167.87);
    x.putdata();
    return 0;
}