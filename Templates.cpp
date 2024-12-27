#include<iostream>
#include<vector>
using namespace std;

template <class T>
class Base{
    int size;
    T* arr;
    public:
        Base(int m){
            size = m;
            arr = new T[size];
        }
        void setArray(){
            for(int i = 0; i < size; i++){
                cout << "Enter elemet in arr at index no. " << i+1 << endl;
                cin >> arr[i];
            }

            for(int i = 0; i < size; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        T dotProduct(Base &v){
            T d = 0;
            for(int i = 0; i < size; i++){
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
};

int main() {
    
    Base<int> b1(6);
    b1.setArray();
    Base<int> b2(6);
    b2.setArray();
    int res = b1.dotProduct(b2);
    cout << "Dot Product Is :- " << res << endl;


    Base<float> b3(3);
    b3.setArray();
    Base<float> b4(3);
    b4.setArray();
    float res1 = b3.dotProduct(b4);
    cout << "Dot Product Is :- " << res1 << endl;
    return 0;
}