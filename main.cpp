//
//  main.cpp
//  leixing
//
//  Created by 20141105072 on 15/11/25.
//  Copyright © 2015年 20141105072. All rights reserved.
//

#include <iostream>
using namespace std;
class Complex
{
public:
    Complex(){real=0;imag=0;}
        Complex(double r,double i){real=r;imag=i;}
        operator double(){return real;}
    private:
        double real;
        double imag;
};
int main()
    {
        Complex c1(3,4),c2(5,-10),c3;
        double d;
        d=2.5+c1;
        cout<<d<<endl;
        return 0;
    }