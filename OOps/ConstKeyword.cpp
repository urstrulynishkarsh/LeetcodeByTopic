#include<iostream>
using namespace std;
int main(){
    int x=10;
    cout<<"Value of x before updation "<<x<<endl;
    x=15;
    cout<<"Value of x after  updation "<<x<<endl;


    // const  is like a promise
    const int z=16;
    cout<<"Value of z before updation "<<z<<endl;
    // z=15;
    // cout<<"Value of x after  updation "<<z<<endl;


// there will be amemory leak so that's why we need to delete a
    int *a =new int;
    *a=10;
    cout<<*a<<endl;
    delete a;
    int b=15;
    a=&b;
    cout<<*a<<endl;



// this will not work const data non cont pointer
//  const int *c=new int;
//     *c=20;
//     cout<<*c<<endl;


    const int *c=new int(20);
    int y=50;
    c=&y;
    cout<<*c<<endl;




    // if we write const after * then content will be constant
    // const pointer but not cont data;

    int * const ptr=new int(500);
    cout<<*ptr<<endl;
    *ptr=600;
     cout<<*ptr<<endl;

    //  int pt=700;
    //  ptr=&pt;
    //  cout<<*ptr<<endl;



    // if we write const  write before * then 
    const int * const last=new int(800);
    cout<<*last<<endl;
    // you camn change pointer and not change data;





    
}