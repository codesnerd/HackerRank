// Problem: https://www.hackerrank.com/challenges/mini-max-sum/problem

//* O(nlogn)

void miniMaxSum(vector<int> arr)
{
    long long int sum = 0, min = 0, max = 0;
    int size = arr.size();
    sort(arr.begin(), arr.end()); // Quick Sort: O(nlogn)

    for (int i = 0; i < size; i++)
        sum += arr[i];

    min = sum - arr[size - 1];
    max = sum - arr[0];

    cout << min << " " << max;
}

// O(n)

void miniMaxSum(vector<int> arr) {
    long int min = arr[0], max = min, sum = min;
    
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < min)
            min = arr[i];
            
        if (arr[i] > max)
            max = arr[i];
            
        sum += arr[i];
    }
    
    cout << sum - max << " " << sum - min;
}
