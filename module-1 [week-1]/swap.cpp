#include <iostream>
using namespace std;

// void swap_values(int *v1, int *v2)
// {
//     int tmp = *v1;
//     *v1 = *v2;
//     *v2 = tmp;
// }

int main()
{
    int v1, v2;
    cin >> v1 >> v2;

    // swap_values(&v1, &v2);
    swap(v1,v2);
    cout << v1 << "🔄️" << v2 << endl;
    return 0;
}
