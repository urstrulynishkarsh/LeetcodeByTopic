#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    // creating a map 
    unordered_map<string,string> umap;

    // insertion steps
    umap["name"]="Nishkarsh";
    umap["college"]="IIT";
    umap.insert({"country","India"});
    umap.insert(make_pair("state","Uttar Pradesh"));

    pair<string,string> p;
    p.first="city";
    p.second="Konch";
    umap.insert(p);


    cout<<"size of map is: "<<umap.size()<<endl; //5
    // umap.clear();
    // cout<<"size of map is: "<<umap.size()<<endl; //0

    // searching
    cout<<"college is: "<<umap["college"]<<endl; //IIT
    cout<<"country is: "<<umap.at("country")<<endl; //India
    // cout<<"age is: "<<umap.at("age")<<endl; //error out of range
    cout<<"age is: "<<umap["age"]<<endl; //it will create a new key value pair with 0 value
    cout<<"size of map is: "<<umap.size()<<endl; //6

    // updation
    umap["state"]="UP";
    umap.at("city")="Indore";
    cout<<"state is: "<<umap["state"]<<endl; //UP
    cout<<"city is: "<<umap["city"]<<endl; //Lucknow

    cout<<"value printiting using iterator: "<<endl;

    // iterator
    unordered_map<string,string> :: iterator it=umap.begin();
    while(it!=umap.end())
    {
        cout<<it->first<<" -> "<<it->second<<endl;
        it++;
    }
    cout<<endl;

    cout<<umap.size()<<endl; //6
    if(umap.find("name")!=umap.end())
    {
        cout<<"name is present"<<endl;
    }
    else{
        cout<<"name is not present"<<endl;
    }



    if(umap.count("nam")==0)
    {
        cout<<"key not found"<<endl;
    }
    else{
        cout<<"key found"<<endl;
    }


}