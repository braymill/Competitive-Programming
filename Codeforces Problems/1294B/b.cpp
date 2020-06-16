#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <string>
using namespace std;

class Point{
    public:
        int x;
        int y;

        void set_values(int, int);
};

void Point::set_values(int x1, int y1){
    x = x1;
    y = y1;
}

struct c{
    bool operator()(Point p, Point po){
        if (p.x == po.x){
            return p.y < po.y;
        } else {
            return p.x < po.x;
        }
    }
};



int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<Point> v (n);
        for (int j = 0; j < n; j++){
            int x, y;
            cin >> x >> y;
            Point p;
            p.set_values(x, y);
            v.push_back(p);
        }
        sort(v.begin(), v.end(), c());
        int cx = 0;
        int cy = 0;
        string o = "";
        bool possible = true;
        for (auto it = v.begin(); it != v.end(); it++){
            int nx = it->x;
            int ny = it->y;
            if (ny < cy){
                possible = false;
                break;
            }
            for (int i = nx; i > cx; i--){
                o += "R";
            }
            for (int i = ny; i > cy; i--){
                o += "U";
            }
            cx = nx;
            cy = ny;
        }
        if (possible){
            cout << "YES\n";
            cout << o << "\n";
        } else {
            cout << "NO\n";
        }
        
    }
}