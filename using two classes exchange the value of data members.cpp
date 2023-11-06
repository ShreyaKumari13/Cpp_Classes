//using two classes exchange the value of data members
#include<iostream>
using namespace std;

class class2;
class class1{
    int value1;
    public:
        void indata(int a){
            value1 = a;
        }
        void display(void){
            cout<<value1<<"\n";
        }
        friend void exchange(class1 &,class2 &);
};

class class2{
    int value2;
    public:
        void indata(int a){
            value2 = a;
        }
        void display(void){
            cout<<value2<<"\n";
        }
        friend void exchange(class1 &,class2 &);
};

void exchange(class1 &x,class2 &y){
    int temp = x.value1;
    x.value1 = y.value2;
    y.value2 = temp;
}

int main(){
    class1 c1;
    class2 c2;
    c1.indata(100);
    c2.indata(200);
    cout<<"Values before exchange"<<"\n";
    c1.display();
    c2.display();
    exchange(c1,c2);
    cout<<"Values after exchange"<<"\n";
    c1.display();
    c2.display();
    return 0;
}