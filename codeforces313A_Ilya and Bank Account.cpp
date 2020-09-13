#include <iostream>

using namespace std;
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main()
{ ios
    int num;
    cin >> num;
    if (num >= 0)
    {
        cout << num << endl;
    }
    else
    {
        int v = num / 10;
        int x = num / 100 * 10 + num % 10;
        cout << max(v, x) << endl;
    }
    return 0;
}	
