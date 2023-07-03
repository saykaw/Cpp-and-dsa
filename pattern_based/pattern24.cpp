//             1
//         1   2   1
//     1   2   3   2  1
// 1   2   3   4   3  2  1

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i=1;
    while(i<=n)
    {
        int spaces=n-i;
        while(spaces>0)
        {
            cout << "  ";
            spaces=spaces-1;
        }
        int j=1;
        while(j<=i)
        {
            cout << j<<" ";
            j=j+1;
        }
        int k=2;
        int val=i;
        while(k<=i)
        {
            cout << val-1<<" ";
            val=val-1;
            k=k+1;
        }
        cout << endl;
        i=i+1;
    }
    return 0;
}
