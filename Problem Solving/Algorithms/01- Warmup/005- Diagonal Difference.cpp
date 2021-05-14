// Problem: https://www.hackerrank.com/challenges/diagonal-difference/problem

int diagonalDifference(vector<vector<int>> arr)
{
    int sum, pri = 0, sec = 0, rows = arr.size();

    for (int i = 0, j = rows - 1; i < rows; i++, j--)
    {
        pri += arr[i][i];
        sec += arr[i][j];
    }
    sum = pri - sec;
    if (sum < 0)
        sum = -sum;
    return sum;
}