// Problem: https://www.hackerrank.com/challenges/2d-array/problem

int hourglassSum(vector<vector<int>> arr)
{
    int max = -63, sum = 0; // given condition: -9 <= arr[i][j] <= 9
    int to_traverse = arr.size() - 2;

    int i = 0, j = 0;
    while (i < to_traverse)
    {
        sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] +
              arr[i + 1][j + 1] +
              arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];

        if (sum > max)
            max = sum;

        if (j < to_traverse - 1)
            j++;
        else
        {
            j = 0;
            i++;
        }
    }

    return max;
}

//OR:

int hourglassSum(vector<vector<int>> arr)
{

    int sum = 0, max = INT_MIN;
    int to_traverse = arr.size() - 2;

    for (int i = 0; i < to_traverse; i++)
    {
        for (int j = 0; j < to_traverse; j++)
        {
            sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] +
                  arr[i + 1][j + 1] +
                  arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];

            if (sum > max)
                max = sum;
        }
    }

    return max;
}
