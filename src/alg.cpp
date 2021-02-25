// Copyright 2021 NNTU-CS
#include <iostream>
int gcd(int a, int b) {
{
    while(a > 0 && b > 0)
 
        if(a > b)
            a %= b;
 
        else
            b %= a;
 
    return a + b;
}
   std:: cout << gcd(10,5) << endl;
}
