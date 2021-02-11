//
// Created by michael putong on 11/02/21.
//

#include <iostream>
#include <vector>

using namespace std;

void fibonacci(int n, vector<int> f) {
    int fn;

    if (n > 20) {
        return;
    } else if (n <= 1) {
        f.push_back(n);
        cout << f[n] << endl;
        fibonacci(n + 1, f);
    } else {
        fn = f[n-1] + f[n-2];
        f.push_back(fn);
        cout << f[n] << endl;
        fibonacci(n + 1, f);
    }

}

int main()
{
    vector<int> f;
    fibonacci(0, f);
    return 0;
}

