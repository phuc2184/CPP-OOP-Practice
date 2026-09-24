#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
bool Sort_by(const int& a, const int& b) {
    return a < b;
}
int main() {
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(5);
    vec.push_back(3);
    vec.push_back(9);

    for (vector<int>::iterator i = vec.begin(); i != vec.end(); ++i) {
        cout << *i << endl;
    }
    cout << "Vector sorted... " << endl;
    sort(vec.begin(), vec.end(), Sort_by);

    for (vector<int>::iterator i = vec.begin(); i != vec.end(); ++i) {
        cout << *i << endl;
    }
    return 0;
}