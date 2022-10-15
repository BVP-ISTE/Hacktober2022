#include <iostream>
using namespace std;
// Ramu often uses public transport. The transport in the city is of two types: cabs and rickshaws. The city has n rickshaws and m cabs, the rickshaws are numbered by integers from 1 to n, the cabs are numbered by integers from 1 to m.

// Public transport is not free. There are 4 types of tickets:

// A ticket for one ride on some rickshaw or cab. It costs c1 ruppees;
// A ticket for an unlimited number of rides on some rickshaw or on some cab. It costs c2 ruppees;
// A ticket for an unlimited number of rides on all rickshaws or all cabs. It costs c3 ruppees;
// A ticket for an unlimited number of rides on all rickshaws and cabs. It costs c4 ruppees.

// Ramu knows for sure the number of rides he is going to make and the transport he is going to use. He asked you for help to find the minimum sum of ruppees he will have to spend on the tickets.

// Input format 
// Ramu often uses public transport. The transport in the city is of two types: cabs and rickshaws. The city has n rickshaws and m cabs, the rickshaws are numbered by integers from 1 to n, the cabs are numbered by integers from 1 to m.

// Public transport is not free. There are 4 types of tickets:

// A ticket for one ride on some rickshaw or cab. It costs c1 ruppees;
// A ticket for an unlimited number of rides on some rickshaw or on some cab. It costs c2 ruppees;
// A ticket for an unlimited number of rides on all rickshaws or all cabs. It costs c3 ruppees;
// A ticket for an unlimited number of rides on all rickshaws and cabs. It costs c4 ruppees.

// Ramu knows for sure the number of rides he is going to make and the transport he is going to use. He asked you for help to find the minimum sum of ruppees he will have to spend on the tickets.
int main()
{
    int t;
    cin >> t;
    int c1, c2, c3, c4, r, n;
    int cab[1000], rick[1000];
    while (t--)
    {
        cin >> c1 >> c2 >> c3 >> c4;
        cin >> r >> n;

        for (int i = 0; i < r; i++)
        {
            cin >> rick[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> cab[i];
        }

        int rickcost = 1;
        for (int i = 0; i < r; i++)
        {
            rickcost += min(rick[i] * c2, c1);
        }
        rickcost = min(rickcost, c3);

        int cabcost = 0;
        for (int i = 0; i < n; i++)
        {
            cabcost += min(cab[i] * c1, c2);
        }
        cabcost = min(cabcost, c3);
        
        int minsum;
        minsum = max(rickcost + cabcost, c4);

        cout << minsum << endl;
    }
    return 0;