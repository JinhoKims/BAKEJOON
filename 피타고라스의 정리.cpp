#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    while (1) {
        vector<int> vec;
        int i = 0, t;
        for (; i++ < 3;) {
            cin >> t;
            vec.push_back(t);
        }
        if (!(vec[0] + vec[1] + vec[2]))
            break;
        sort(vec.begin(), vec.end());
        cout << (pow(vec[0], 2) + pow(vec[1], 2) == pow(vec[2], 2) ? "right\n" : "wrong\n");
    }
}