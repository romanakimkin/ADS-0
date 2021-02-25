// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
{
   If (a<b) { t =a; a=b; b=t; }
   while(b!=0) {
     t = b;
     b = a%b;
     a = t;
  }
   return a;
}
