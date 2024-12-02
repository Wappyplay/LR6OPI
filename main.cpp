#include <stdio.h>
#include <iomanip>
#include <iostream>
using namespace std;
#define m 5
int main()
{
   const int n = 6;
   int a[n] = {84, 38, 12};
   srand(time(NULL));
   for(int i=0; i<n; i++)
   //cin >> a[i];
   a[i] = rand()%20-10;     //[-10;9]
   for (int i=0; i < n; i++)
   cout  << setw(4) << a[i];
   int min = a[0];
   cout << setw(7) << a[1];
}