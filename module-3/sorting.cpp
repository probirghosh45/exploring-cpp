#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

   // sorting
 
    // sort(a,a+n); // smaller to larger
    
    sort(a,a+n,greater<int>()); // larger to smaller , comparision function 

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
       
    return 0;
}



