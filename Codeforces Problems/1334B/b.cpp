#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct c{
    bool operator()(double a, double b){
        return a > b;
    }
};

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, x;
        cin >> n >> x;
        vector<double> v (n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end(), c());
        double sum = v[0];
        double dist = v[0];
        int w = 0;
        int idx = 1;
        while (w < n && dist >= x){
            w++;
            sum += v[idx];
            dist = sum / (w + 1);
            // cout << dist << "\n";
            idx++;
        }
        cout << w << "\n";
    }
}