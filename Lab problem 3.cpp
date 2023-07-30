#include <iostream>
using namespace std;
int main()
{
    int a=9,b=10,c=11;

    if (a>b&&a>c)
    {
        cout << "The larger number :"<<a<<endl;
    }
    else if (b>a&&b>c)
    {
        cout << "The larger number :"<<b<<endl;
    }
    else
    {
        cout << "The larger number :"<<c<<endl;
    }

}


