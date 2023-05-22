#include <iostream>
using namespace std;
int main()
{

    // input in c++ format
    int p, q;
    // scanf("%d %d", &p , &q); // input in c format
    cin >> p >> q;
    cout << p << " " << q << endl;
    
    // output in c++ format    
    // printf("for c"); // output in c format
    std::cout << "for c++\n";
    std::cout << "for c++" << std::endl;
    std::cout << "Hello "
              << "world" << std::endl;
    std::cout << "Hello " << std::endl
              << "world" << std::endl;

    int a = 5, b = 10;

    // std::cout << a ;
    // std::cout << a  << std::endl;
    // std::cout << a  << std::endl << b ;
    std::cout << a << " " << b << std::endl;

    int m = 50, n = 100;
    cout << m << endl
         << n << endl;

    return 0;
}
