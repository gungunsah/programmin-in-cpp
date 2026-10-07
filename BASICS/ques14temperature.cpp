//write a programme to input and to check whether the given temperature is in fahrenheit or
// in celsius ?

#include<iostream>
using namespace std;
int main(){
    float fahrenheit,celsius;
    cout<<"enter the temperature in fahrenheit:";
    cin>>fahrenheit;
    celsius=(fahrenheit-32)*5/9.0;
    cout << fahrenheit << " °F = " << celsius << " °C" << endl;
    float check=(celsius*9/5.0)+32;
    cout << "Verification: " << celsius << " °C = " << check << " °F" << endl;

}