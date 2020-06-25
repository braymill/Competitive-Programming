#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Person{
    public:
        string name;
        string who;
        int pos;

        void set_values(string, string, int);
};

void Person::set_values(string n, string w, int p){
    name = n;
    who = w;
    pos = p;
}

struct c{
    bool operator()(Person p, Person po){
        unordered_map<string, int> m;
        m["rat"] = 0;
        m["woman"] = 1;
        m["child"] = 1;
        m["man"] = 2;
        m["captain"] = 3;
        if (m[p.who] != m[po.who]){
            return m[p.who] < m[po.who];
        } else {
            return p.pos < po.pos;
        }
    }
};

int main(){
    int n;
    cin >> n;
    vector<Person> p (n);
    for (int i = 0; i < n; i++){
        string name;
        string who;
        cin >> name >> who;
        Person c;
        c.set_values(name, who, i);
        p[i] = c;
    }
    sort(p.begin(), p.end(), c());
    for (int i = 0; i < n; i++){
        cout << p[i].name << "\n";
    }
}