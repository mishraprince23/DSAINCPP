
#include <iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        set<int> 
        s(a.begin(),a.end());
        s.insert(b.begin(),b.end());
        return vector<int>(s.begin(),s.end());
        // code here
         
    }
};
// method 2 
 #include <iostream>
#include <vector>
using namespace std;

vector<int> findUnion(vector<int>& a, vector<int>& b) {
    int n = a.size();
    int m = b.size();

    int i = 0, j = 0;
    vector<int> ans;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            if (ans.empty() || ans.back() != a[i]) {
                ans.push_back(a[i]);
            }
            i++;
        }
        else if (b[j] < a[i]) {
            if (ans.empty() || ans.back() != b[j]) {
                ans.push_back(b[j]);
            }
            j++;
        }
        else {
            if (ans.empty() || ans.back() != a[i]) {
                ans.push_back(a[i]);
            }
            i++;
            j++;
        }
    }

    while (i < n) {
        if (ans.empty() || ans.back() != a[i]) {
            ans.push_back(a[i]);
        }
        i++;
    }

    while (j < m) {
        if (ans.empty() || ans.back() != b[j]) {
            ans.push_back(b[j]);
        }
        j++;
    }

    return ans;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {2, 3, 4, 6, 7};

    vector<int> ans = findUnion(a, b);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}