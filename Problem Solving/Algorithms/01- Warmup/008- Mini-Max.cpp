Problem: https://www.hackerrank.com/challenges/mini-max-sum/problem

void miniMaxSum(vector<int> arr) {
    long long int sum = 0, min = 0, max = 0;
    int size = arr.size();
    sort(arr.begin(), arr.end());

    for (int i = 0; i < size; i++)
        sum += arr[i];

    min = sum - arr[size - 1];
    max = sum - arr[0];

    cout << min << " " << max;
}