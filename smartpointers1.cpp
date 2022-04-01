#include <iostream>
#include <memory>
using namespace std;

/* 
    smart pointers
    auto_ptr
    unique_ptr
    shared_ptr
*/

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
    
    // SmartPointer<int> sp1=new int(5);
    // SmartPointer<int> sp2=sp1;
    
    // auto_ptr<int> ap1(new int(5));
    // auto_ptr<int> ap2(ap1);
    
    //unique_ptr<int> up1(new int(5));
    //unique_ptr<int> up2;       //impossible to assign one pointer to another //need to use a function move
   // up2=move(up1); //the first one is free and the second one with the value

    //up2.swap(up1); //the first with the pointer 2nd empty
    
   // int *p=up1.get();
    


    // int *p=new int(5);
    // unique_ptr<int>up1(p);
    // up1.reset();
    // up1.release();

    shared_ptr<int>p1(new int(5));
    shared_ptr<int>p2(p1); //both with the same adress, 2 links  

}