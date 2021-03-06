// Problem: https://www.hackerrank.com/challenges/a-very-big-sum/problem

long aVeryBigSum(vector<long> ar)
{
    long int sum = 0;
    for (int i = 0; i < ar.size(); i++)
        sum += ar[i];
    return sum;
}