#include<iostream>
using namespace std;

int main(){

    int number, count = 0;

    cout<<"\nEnter your number"<<endl;
    cin>>number;

    for (int i = 1; i <= number; i++)
    {
        if (number%i == 0)
        {
            count++;
        }
        
    }
        
    if (count == 2)
    {
        cout<<"It is a prime number"<<endl;
    }

    else
    {

        cout<<"It is not a prime number"<<endl;

    }
           



    
    




    return 0;
}