#include <iostream>
#include <cstdio>
#include<iomanip>
using namespace std;

int main() {
    int a;
    long int b;
    char c;
    float d;
    double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    std::cout<<std::fixed<<std::setprecision(3)<<d<<"\n";
    std::cout<<std::fixed<<std::setprecision(5)<<e<<"\n";
    return 0;
}

