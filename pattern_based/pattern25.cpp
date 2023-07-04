// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<= n-i+1)
        {
            cout << j<< " ";
            j=j+1;
        }
        int k=2;
        while(k<=i)
        {
            cout << "* ";
            k=k+1;
        }
        int l=2;
        while(l<=i)
        {
            cout << "* ";
            l=l+1;
        }
        int m=1;
        int val=n-i+1;
        while(m<=n-i+1)
        {
            cout << val<<" ";
            val=val-1;
            m=m+1;
        }
        cout << endl;
        i=i+1;
    }
    return 0;
}