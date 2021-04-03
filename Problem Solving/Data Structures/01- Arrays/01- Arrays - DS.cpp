//Problem: https://www.hackerrank.com/challenges/arrays-ds/problem

vector<int> reverseArray(vector<int> a) {
    vector <int> rev;
    for (int i = a.size() - 1; i >= 0; i--)
        rev.push_back(a[i]);

    return rev;
}

//OR:

vector<int> reverseArray(vector<int> a) {
    int size = a.size();
    int temp = 0;
    for (int i = 0; i < size / 2; i++) {
        temp = a[i];
        a[i] = a[size - i - 1];
        a[size - i - 1] = temp;
    }

    return a;
}