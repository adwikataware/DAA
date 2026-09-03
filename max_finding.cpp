#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[100], temp[100];
    int totalUpdates = 0;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    // 10 different variations
    for(int j = 1; j <= 10; j++)
    {
        // Create rotated array
        for(int i = 0; i < n; i++)
            temp[i] = arr[(i + j) % n];

        int maxVal = temp[0];
        int updates = 0;

        // Standard max finding
        for(int i = 1; i < n; i++)
        {
            if(temp[i] > maxVal)
            {
                maxVal = temp[i];
                updates++;
            }
        }

        cout << "Variation " << j
             << " - Max updates: " << updates << endl;

        totalUpdates += updates;
    }

    double average = (double)totalUpdates / 10;

    cout << "\nAverage max updates: " << average << endl;

    return 0;
}
