#include <iostream>
#include <set>
using namespace std;

vector<int> findUnion(int a[], int n, int b[], int m) {
    set<int> s;
    for (int i = 0; i < n; i++) s.insert(a[i]);
    for (int i = 0; i < m; i++) s.insert(b[i]);

    return vector<int>(s.begin(), s.end());
}

int main() {
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++) cin >> b[i];

    vector<int> result = findUnion(a, n, b, m);
    for (int num : result) cout << num << " ";

    return 0;
}
