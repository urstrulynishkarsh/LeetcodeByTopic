#include<iostream>
using namespace std;
// class abc{
//     public:
//     int x;
//     int y;

//     void print()
//     {
//         cout<<this->x<<" "<<this->y;
//     }
// };
// int main(){
//     abc obj1={1,2};
//     abc obj2={3,4};
//     cout<<endl;
//     obj1.print();
//     obj2.print();
// }




class abc{
    public:
    static int x;
    static int y;

    void print()
    {
        cout<<this->x<<" "<<this->y;
    }
};
int abc::x;
int abc::y;
int main(){
    abc obj1;
    obj1.x=10;
    obj1.y=20;
    obj1.print();
    abc obj2;
    cout<<endl;
     obj1.x=30;
    obj1.y=40;
    obj1.print();
    obj2.print();
}