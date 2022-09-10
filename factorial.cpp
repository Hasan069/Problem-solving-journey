#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter number to get a factorial number"<<endl;
    int number,factorial;
    cin>>number;
    factorial = number;

    while (number>1)
    {
        number--;
        factorial = number * factorial;

    }
    
    cout<<"factorial of this number is : "<<factorial<<endl;
 return 0;
}