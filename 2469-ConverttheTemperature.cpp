#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<unordered_map>
using namespace std;

vector<double> convertTemperature(double &celsius)
{
    vector<double> result;
    result.push_back(celsius+273.15);
    result.push_back((celsius*1.80)+32.00);
    return result;

}
int main(){
    double celsius;
    cout<<"Enter the celsius: ";
    cin>>celsius;
    vector<double> temperature=convertTemperature(celsius);
    for(auto temp:temperature)
    {
        cout<<temp<<" ";
    }
}