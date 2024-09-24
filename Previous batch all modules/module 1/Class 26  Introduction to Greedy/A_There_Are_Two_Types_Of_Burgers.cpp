#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while( t-- )
    {
        int numBuns, numPatti, numKut, priceHam, priceChiken;
        cin >> numBuns >> numPatti >> numKut >> priceHam >> priceChiken;

        int mxPrice, mnPrice, mxpricePattiNum, mnPricePattiNum;

        // Determine which patty has the higher price
        if(priceHam > priceChiken)
        {
            mxPrice = priceHam;
            mxpricePattiNum = numPatti;

            mnPrice = priceChiken;
            mnPricePattiNum = numKut;
        }
        else
        {
            mxPrice = priceChiken;
            mxpricePattiNum = numKut;

            mnPrice = priceHam;
            mnPricePattiNum = numPatti;
        }

        // Calculate maximum number of burgers possible
        int numBurger = numBuns / 2;
        int profit = 0;

        // Sell as many of the higher-priced burger as possible
        if(mxpricePattiNum >= numBurger)
        {
            profit += (numBurger * mxPrice);
            numBurger = 0; // No buns left for other burgers
        }
        else
        {
            profit += (mxPrice * mxpricePattiNum);
            numBurger -= mxpricePattiNum; // Remaining buns for lower-priced burgers
        }

        // Sell as many of the lower-priced burger as possible
        if(mnPricePattiNum >= numBurger)
        {
            profit += (numBurger * mnPrice);
            numBurger = 0; // No buns left
        }
        else
        {
            profit += (mnPrice * mnPricePattiNum);
        }

        cout << profit << "\n";
    }

    return 0;
}
