//       1
//     2 3
//   4 5 6
// 7 8 9 10

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i=1;
    int val=1;
    while(i<=n)
    {
        int spaces = n-i;
        while(spaces>0)
        {
            cout << "  ";
            spaces=spaces-1;
        }
        int j=1;
        while(j<=i)
        {
            cout << val<<" " ;
            val=val+1;
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
    return 0;
}