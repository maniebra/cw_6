#include<iostream>
using namespace std;

#define elif else if

template<typename T>
void print(T out){
    cout << out << endl;
}

template<typename T, typename... Args>
void print(T out, Args... args)
{
    cout << out <<" " ;

    print(args...) ;
}

string intToStr(int a){
    string res = "";
    bool neg = false;
    if(a<0){
        a*=-1;
        neg = true;
    }
    while(a>0){
        res = (char)(a%10 + (int)('0')) + res;
        a/=10;
    }
    if(neg){
        return '-' + res;
    }
    return res;
}
int fib(int a){
    if(a<=1)    return 1;
    return fib(a-1)+fib(a-2);
}
int potato(){
    return 1;
}


int main(){
    print(intToStr(-1555));
}