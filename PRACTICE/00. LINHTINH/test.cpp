#include<iostream>
using namespace std;

int main()
{
    int n, tg, a[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> tg;

    for(int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if(a[i] + a[j] == tg) {
                cout << i << " " << j;
                break;
            }
        }
    }
    return 0;
}
