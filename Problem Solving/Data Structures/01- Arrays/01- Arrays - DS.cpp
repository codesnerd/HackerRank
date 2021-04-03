//Problem: https://www.hackerrank.com/challenges/arrays-ds/problem

vector<int> reverseArray(vector<int> a) {
    vector <int> rev;
    for (int i = a.size() - 1; i >= 0; i--) {
        rev.push_back(a[i]);
    }

    return rev;
}