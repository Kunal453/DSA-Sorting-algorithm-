# include <iostream>
using namespace std;
int main()
{
    int i,n=2,a,prime=0;
    cout<<"\nEnter the number:";
    cin>>i;
    while(n<i)
    {
        if(i%n==0)
        {
            prime++;
        }
        n++;
    }
    if(prime==0)
    {
        cout<<"\nThis number is Prime";
    }
    else
    {
        cout<<"\nThis number is Composite";
    }
    return 0;
}
