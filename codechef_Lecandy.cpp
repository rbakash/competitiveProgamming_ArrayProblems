// Problem link --> https://www.codechef.com/problems/LECANDY
#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    long int arr[100000], testCases, noOfElephants, noOfCandy, sum = 0;
    string output;
    cin >> testCases;

    while (testCases--) 
    {
        sum=0;
        cin >> noOfElephants >> noOfCandy;
        for (int i = 0; i < noOfElephants; i++)
        {   
            
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum <= noOfCandy)
        {
            output+="Yes\n";
            cout<<"yes\n";
        }
        else
        {
            output+="No\n";
            cout<<"No\n";
        }
    }
    cout<< output;
}
