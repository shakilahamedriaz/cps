#include <bits/stdc++.h>
using namespace std; 

int gcd(int a, int b) { if(a % b == 0) return b; else return gcd(b, a % b); }
int lcm(int a, int b) { return (a * b) / gcd(a, b); }

struct Runtime 
{
    clock_t start;
    Runtime() {
        start = clock();
    }
    ~Runtime() {
        std::cout << "Runtime: " << std::fixed << std::setprecision(3) << (double) (clock() - start) / CLOCKS_PER_SEC << "s\n";
    }
};

void shakil_sol() 
{

        int n;
        cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++) 
        {
            cin >> arr[i];
        }

        int mx = 0;
        for(int i = 0; i < n-1; i++)
        {
            int mean = (arr[i] + arr[i+1]) / 2;
            mx = max(mx, mean);
        }

        int cl = 0;
        int mxlen = 0;

        for(int i = 0; i < n; i++)
        {
            if(arr[i] >= mx)
            {
                cl++;
            }
            else
            {
                cl = 0;
            }

            mxlen = max(mxlen, cl);
        } 

          cout << mxlen << '\n';
    }


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    shakil_sol();

    return 0;
}
