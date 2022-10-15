#include <iostream>
using namespace std;
int main()
{
    int num, count, f, n;
    count = 0;
    cout << "Enter The Number: ";
    cin >> num;
    cout << "Enter The Number to be Counted: ";
    cin >> f;
    while (num != 0)
    {
        n = num % 10;
        if (n == f)
        {
            count = count + 1;
        }
        num = num / 10;
    }
    cout << "count = ";
    cout << count << endl;

    return 0;
}
