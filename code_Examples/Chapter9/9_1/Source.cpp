#include<iostream>
using namespace std;

template<typename T>
T abs(T x)
{
    return x < 0 ? -x : x;
}

int abs(int x)
{
    return x < 0 ? -x : x;
}


double abs(double x)
{
    return x < 0 ? -x : x;
}

int main1()
{
    int n = -5;
    double d = -5.5;
    cout << abs(n) << endl;
    cout << abs(d) << endl;
}
