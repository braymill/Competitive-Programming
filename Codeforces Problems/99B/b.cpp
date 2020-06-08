#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v (n);
    vector<int> o (n);
    for (int i = 0; i < n; i++){
        int cur;
        cin >> cur;
        v.at(i) = cur;
        o.at(i) = cur;
    }
    sort(v.begin(), v.end());
    int mid = v.at(v.size() / 2);
    int nd = 0;
    int c1 = -1;
    int c2 = -1;
    for (int i = 0; i < v.size(); i++){
        if (v.at(i) != mid){
            nd++;
            if (c1 == -1){
                c1 = i;
            } else {
                c2 = i;
            }
        }
    }
    if (nd == 0){
        cout << "Exemplary pages.";
    } else if (nd > 2){ 
        cout << "Unrecoverable configuration.";
    } else {
        int c1v = v.at(c1);
        int c2v = v.at(c2);
        int d = (c2v - c1v) / 2;
        int oc1 = -1;
        int oc2 = -1;
        for (int i = 0; i < o.size(); i++){
            if (o.at(i) == c1v){
                oc1 = i;
            } else if (o.at(i) == c2v){
                oc2 = i;
            }
        }
        cout << d << " ml. from cup #" << oc1 + 1 << " to cup #" << oc2 + 1 << ".";
    }
}