#include <iostream>

using namespace std;

int fib(int n)

{

    if(n==0)

    return 0;

    else if(n==1)

    return 1;

    else

    return fib(n-1)+fib(n-2);

}

int main()

{

    int n

    cout<<"Enter n to find nth number in Fibonacci Sequence : "

    cin>>n

    cout<<"The nth integer in Fibonacci Sequence = "

    cout<<fib(n)<<endl

}
