// Problem link --> https://www.codechef.com/problems/CNOTE

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int testcases, pagesNeeded, pagesAvailablecurrently, budget, numberOfbooksShown;
    string output;
    
    cin >> testcases;
    while (testcases--)
    {
        bool isunLucky=true;
        cin >> pagesNeeded >> pagesAvailablecurrently >> budget >> numberOfbooksShown;
        int newBookPages, newBookCost;
        while (numberOfbooksShown-- )
        {
            cin >> newBookPages >> newBookCost;
            if (pagesAvailablecurrently + newBookPages >= pagesNeeded && newBookCost <= budget && isunLucky)
            {
                output += "LuckyChef\n";
                isunLucky=false;
            }
        }
        if(isunLucky){
            output+="UnluckyChef\n";
        }
        
        
    }
    cout<< output;
}