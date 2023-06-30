//A
//B C 
//C D E 
//D E F G 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i=0;
    while(i<n)
    {
        char ch ='A'+i;
        int j=0;
        while(j<=i)
        {
            cout << ch << " ";
            ch=ch+1;
            j=j+1;
        }
        cout << endl;
        i=i+1;
    }
}
