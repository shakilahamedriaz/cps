#include <iostream>
using namespace std;

const int mx = 100012;
int freq[mx];
int arr[4 * mx + 5];

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= 4 * n - 1; i++) cin >> arr[i];
    
    for(int i = 1; i <= 4 * n - 1; i++)
    {
        freq[arr[i]]++;
    }
    
    for(int i = 1; i <= 4 * n - 1; i++)
    {
        if(freq[arr[i]] == 3)
        {
            cout << arr[i] << "\n";
            break;
        }
    }

    return 0;
}