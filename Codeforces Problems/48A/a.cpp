#include <iostream>
using namespace std;

int main(){
    string fs, ms, ss;
    cin >> fs >> ms >> ss;
    // simplify logic
    char f = fs[0];
    char m = ms[0];
    char s = ss[0]; 
    // one player must beat the other two, otherwise indeterminate
    if ((f == 'p' && m == 'r' && s == 'r' || m == 'p' && f == 'r' && s == 'r' || s == 'p' && f == 'r' && m == 'r')){
        if (f == 'p'){
            cout << "F";
        } else if (m == 'p'){
            cout << "M";
        } else {
            cout << "S";
        }
    } else if ((f == 's' && m == 'p' && s == 'p') || (m == 's' && f == 'p' && s == 'p') || (s == 's' && f == 'p' && m == 'p')){
        if (f == 's'){
            cout << "F";
        } else if (m == 's'){
            cout << "M";
        } else {
            cout << "S";
        }
    } else if ((f == 'r' && m == 's' && s == 's') || (m == 'r' && f == 's' && s == 's') || (s == 'r' && f == 's' && m == 's')){
        if (f == 'r'){
            cout << "F";
        } else if (m == 'r'){
            cout << "M";
        } else {
            cout << "S";
        }
    } else {
        cout << "?";
    }
}