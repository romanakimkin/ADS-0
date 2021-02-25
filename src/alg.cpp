// Copyright 2021 NNTU-CS
#include <iostream>
int gcd(int a, int b) {
    while(a > 0 && b > 0)
    {
        if(a > b)
            a %= b;
        else
            b %= a;
    }
    std::cout<< a+b;
}  
int main ()
{
    int a,b;
    std::cin >> a >> b;
    gcd(a,b);
    return 0;
    
}

