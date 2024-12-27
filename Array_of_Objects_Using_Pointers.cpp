#include<iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
        void setData(int num, float money){
            id = num;
            price = money;
        }
        void getData(){
            cout << "Id of this item is :- " << id << endl;
            cout << "Price of this item is :- " << price << endl;
        }
};

int main() {
    int size = 2;
    int id, i;
    float price;
    Shop* ptr = new Shop[size];
    Shop* ptrTemp = ptr;

    for(i = 0; i < size; i++){
        cout << "Enter Id and Price for Item No. :- " << i+1 << endl;
        cin >> id >> price;
        // (*ptr).setData(id, price); // Exactly same as ptr->setData() 
        ptr->setData(id, price);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}