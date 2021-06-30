#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

const int maxn = 100005;

map<string, bool> ma;

struct Node {
    string s;
    int x{};
    bool operator<(Node &obj) const {
        return s < obj.s;
    }
} node[maxn];

vector<Node> v;

int n, m;

int main() {

    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        ma[s] = true;
    }
    cin >> m;
    int sum = 0;
    for (int i = 0; i < m; i++) {
        cin >> node[i].s >> node[i].x;
        sum += node[i].x;
    }

    sum /= m;

    for (int i = 0; i < m; i++) {
        if (!ma[node[i].s] && node[i].x > sum) {
            v.push_back(node[i]);
        }
    }

    if (v.empty()) {
        cout << "Bing Mei You" << endl;
        return 0;
    }
    sort(v.begin(), v.end());

    for (auto & i : v) {
        cout << i.s << endl;
    }
}
