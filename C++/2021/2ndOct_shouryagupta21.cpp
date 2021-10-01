#include <iostream>
using namespace std;
bool Prime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}
int main() {
    int n, t1 = 1, t2 = 1, nextTerm = 0;

    cin >> n;

    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1 << " ";
            continue;
        }
        if(i == 2) {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;

        t1 = t2;
        t2 = nextTerm;
        if (Prime(nextTerm)==true){
            nextTerm=0;
        }
        if(nextTerm%5 == 0){
            nextTerm=0;
        }
        cout << nextTerm << " ";
    }
    return 0;
}
