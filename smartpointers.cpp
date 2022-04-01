#include <iostream>
// smart pointers
using namespace std;
template <typename T>
class SmartPointer{
    public:
    SmartPointer(T *ptr){
        this->ptr=ptr;
        cout<<"Constructor\n";
    }
    ~SmartPointer(){
        delete ptr;
        cout<<"Destructor";
    }
    T& operator*(){
        return *ptr;
    }

    private:
    T *ptr;
};

int main(){
    
    SmartPointer<int> pointer=new int(100);
    *pointer=1565;
    cout<<*pointer<<endl;
}