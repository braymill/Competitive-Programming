#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string f, s, t;
    cin >> f >> s >> t;
    string combined = f + s;
    sort(combined.begin(), combined.end());
    sort(t.begin(), t.end());
    if (combined.compare(t) == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
}