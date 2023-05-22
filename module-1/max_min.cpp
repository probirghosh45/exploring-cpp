#include <iostream>
using namespace std;

// int my_max(int a, int b)
// {
//     if (a > b)
//         return a;
//     return b;
// }


// int my_min(int a, int b)
// {
//     if (a < b)
//         return a;
//     return b;
// }

int main()
{
    int a, b;
    cin >> a >> b ;
    // int max_value = my_max(a, b);
    // int min_value = my_min(a, b);

    // cout << "Max Value" << " " << max_value <<endl;
    // cout << "Min Value" << " " << min_value <<endl;


    cout << "Max Value" << " " << max(a,b) <<endl;
    cout << "Min Value" << " " << min(a,b) <<endl;
    return 0;
}
