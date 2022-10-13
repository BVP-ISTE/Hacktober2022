// write a recursive function of tower of hanoi
#include <iostream>

using namespace std;

void tower_of_hanoi(int, char, char, char);

int main()
{
    int n;

    cout << "Enter the number of discs : ";
    cin >> n;
    tower_of_hanoi(n, 'A', 'B', 'C');
    return 0;
}
void tower_of_hanoi(int n, char from_rod, char aux_rod, char to_rod)
{
    if (n == 1)
    {
        cout << "Move Disc 1 From " << from_rod << " to " << to_rod << endl;
        return;
    }

    tower_of_hanoi(n - 1, from_rod, to_rod, aux_rod);
    cout << "Move Disc " << n << " From "
         << from_rod << " to " << to_rod << endl;

    tower_of_hanoi(n - 1, aux_rod, from_rod, to_rod);
}
