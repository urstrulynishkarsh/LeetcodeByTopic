#include<iostream>
using namespace std;

class abc{

   

    public:
    int x;
    int *y;

    abc()
    {
        cout<<"constructor called: ";
        x=0;
        y=new int(0);
    }
     abc(int _x,int _y):x(_x),y(new int(_y)){}
    // by default dumb constructor call for shallow copy
    // abc(const abc &obj)
    // {
    //     x=obj.x;
    //     y=obj.y;
    // }


    // our smart deep copy
    abc(const abc &obj)
    {
        cout<<"constructor called: ";
        x=obj.x;
        y=new int(*obj.y);
    }

    
   
    void print() const
    {
        printf("X: %d\nAddress of Y pointer:%p\nValue of Y is: %d\n",x,y,*y);
    }
    ~abc(){
        cout<<"destructor called: ";
        delete y;
    }
};

int main()
{
    abc a;
    // a.print();
    // cout<<endl;
    // abc b=a;
    // b.print();
    // cout<<endl;
    // b.x=20;
    // *b.y=30;
    // b.print();
    // cout<<endl;
    //  a.print();



    // abc *a= new abc(10,20);
    // abc b=*a;
    // delete a;
    // b.print();
    
}