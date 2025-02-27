#include <iostream>
#include <vector>
using namespace std;

vector<int> findUnion(int a[], int n, int b[], int m) {
    vector<int> unionArr;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            if (unionArr.empty() || unionArr.back() != a[i]) 
                unionArr.push_back(a[i]);
            i++;
        } else if (b[j] < a[i]) {
            if (unionArr.empty() || unionArr.back() != b[j]) 
                unionArr.push_back(b[j]);
            j++;
        } else { // Equal elements, add only once
            if (unionArr.empty() || unionArr.back() != a[i]) 
                unionArr.push_back(a[i]);
            i++;
            j++;
        }
    }

    while (i < n) { // Remaining elements in a[]
        if (unionArr.empty() || unionArr.back() != a[i]) 
            unionArr.push_back(a[i]);
        i++;
    }

    while (j < m) { // Remaining elements in b[]
        if (unionArr.empty() || unionArr.back() != b[j]) 
            unionArr.push_back(b[j]);
        j++;
    }

    return unionArr;
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
