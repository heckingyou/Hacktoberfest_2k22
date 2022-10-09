#include<iostream>
using namespace std;


template <class t>

t sum(t a, t b)
{
    return a+b;
}

int main()
{
    cout<<"The Sum of two numbers are : "<<sum(3,10)<<endl;
    cout<<"The sum of floating point number : "<<sum(3.4,5.3)<<endl;

    return 0;
}
