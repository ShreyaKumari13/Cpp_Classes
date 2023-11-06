//using class create item menu
#include<iostream>
using namespace std;
const int m=50;
class items{
    private:
        int itemcode[m];
        float itemprice[m];
        int count;
    public:
        void cnt(void){count = 0;};
        void getitem(void);
        void displaysum(void);
        void remove(void);
        void displayitem(void);
};

void items :: getitem(void){
    cout<<"Enter item code:";
    cin>>itemcode[count];
    cout<<"Enter item price:";
    cin>>itemprice[count];
    count++;
}

void items :: displaysum(void){
    float sum = 0;
    for(int i=0;i<count;i++){
        sum = sum+itemprice[i];
    }
    cout<<"Total value :"<<sum<<endl;
}
void items :: remove(void){
    int a;
    cout<<"Enter the item code:";
    cin>>a;
    for(int i=0;i<count;i++){
        if(itemcode[i]==a){
            itemprice[i] = 0;
        }
    }
}
void items :: displayitem(void){
    cout<<"Code price";
    for(int i=0;i<count;i++){
        cout<<"\n"<<itemcode[i];
        cout<<"\n"<<itemprice[i];
    }
    cout<<"\n";
}


int main(){
    items order;
    order.cnt();
    int x;
    do{
        cout<<"You can do the following "<<endl
            <<"Enter appropriate number\n";
        cout<<"\n1:Add an item";
        cout<<"\n2:Display total value";
        cout<<"\n3:Delete an item";
        cout<<"\n4:Display all item";
        cout<<"\n5:Quit";
        cout<<"\nChoose your number"<<endl;
        cin>>x;
        switch(x){
            case 1:
                order.getitem();
                break;            
            case 2:
                order.displaysum();
                break;
            case 3:
                order.remove();
                break;
            case 4:
                order.displayitem();
                break;
            case 5:
                exit(0);
            default:
                cout<<"Error in input!!";
                break;
        }
    }while(x!=5);
    return 0;
}