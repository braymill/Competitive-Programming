#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        unordered_map<string, int> m;
        vector<string> files (names.size());
        for (int i = 0; i < names.size(); i++){
            string cur = names[i];
            // found inside of map
            if (m.find(cur) != m.end()){
                int kcur = m[cur];
                while (m[cur + "(" + to_string(kcur) + ")"] >= 1){
                    kcur++;
                }
                string n = cur + "(" + to_string(kcur) + ")";
                files[i] = n;
                m[n]++;
            } else {
                files[i] = cur;
            }
            m[cur]++;
        }
        return files;
    }
};