#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    string s;
    int n;
    cin >> n;
    cin >> s;
    // number of possibilites is actually just n + 1! 1 for each move that could malfunction, 1 for none malfunctioning
    cout << n + 1;
}