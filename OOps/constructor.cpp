#include <iostream>
using namespace std;

class A
{
    private:
        unsigned int count;


    public:
        A(){
            cout<<"myconstructor is working ehne i creating a object: "<<endl;
            count=0;
        }

        void increasecounter()
        {
            count++;
        }
        
        int countvalue()
        {
            return count;
        }


};
int main()
{
   A c1,c2;
   c1.increasecounter();
   for(int i=0;i<5;i++)
   {
    c2.increasecounter();
   }



   cout<<c1.countvalue();
   cout<<endl;
   cout<<c2.countvalue();



}