#include<iostream>
using namespace std;
int main ()
{
    int number;
    int n;

    cout<<"how many number";
    cin>>n;
    cout<<"type your value";
    cin>>number;
    int max=number;
    int min=number;
    for (int i=1;i<=n;i++)
    {
        cin>>number;
        if (number > max)
        {
            max=number;
        }
        else if (number<min)
        {
            min=number;
        }
        
    }
    cout<<"The maximum number is "<<max<<endl;
    
    cout<<"The min number is "<<min;
}