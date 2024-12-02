#include <stdio.h>
#include <iomanip>
#include <iostream>
using namespace std;
#define m 5
int main()
{
   const int n = 666;
   int a[n] = {84, 38333, 12};
   srand(time(NULL));
   for(int i=0; i<n; i++)
   //cin >> a[i];
   cout << setw(7) << a[1];
}