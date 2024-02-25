#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num = 5;
    cout<<num<<endl;
    cout<<"Address of num is :"<<&num<<endl;
    int *ptr = &num;
    cout<<"adress is :"<<ptr<<endl;
    cout<<"value is:"<<*ptr<<endl;


    double d =3.14;
    double *p2 =&d;;
    cout<<"Adress of pi is :"<<p2<<endl;
    cout<<"value of pi is :"<<*p2;

    return 0;

}