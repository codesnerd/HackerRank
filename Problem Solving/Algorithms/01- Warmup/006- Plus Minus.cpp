// Problem : https://www.hackerrank.com/challenges/plus-minus/problem

void plusMinus(vector<int> arr)
{
    float positives = 0, negatives = 0, zeroes = 0;
    int size = arr.size();

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
            positives += 1;
        else if (arr[i] < 0)
            negatives += 1;
        else
            zeroes += 1;
    }

    cout << setprecision(6) << positives / size << endl;
    cout << negatives / size << endl;
    cout << zeroes / size << endl;
}