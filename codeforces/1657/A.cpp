#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      long long x, y;
      cin >> x >> y;
      if (x == 0 && y == 0)
      {
         cout << 0 << endl;
      }
      else
      {
         long long a = pow(((x * x) + (y * y)), 0.5);
         if ((a *a) == ((x * x) + (y * y)))
         {
            cout << 1 << endl;
         }
         else
         {
            cout << 2 << endl;
         }
      }
   }
}