// Problem: https://www.hackerrank.com/challenges/2d-array/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=arrays

//* Two Previously done solutions already available at: https://github.com/codesnerd/HackerRank/blob/aa31e1b26ff80c25fd3a735147a766181725bb2f/Problem%20Solving/Data%20Structures/01-%20Arrays/02%20-%202D%20Array%20-%20DS.cpp

int hourglassSum(vector<vector<int>> arr)
{
    int sum = 0, max = -63;

    for (int i = 0, j = 0; i <= arr.size() / 2; j++)
    {
        sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] +
              arr[i + 1][j + 1] +
              arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];

        if (sum > max)
            max = sum;

        if (j == arr.size() / 2)
        {
            i++;
            j = -1;
        }
    }

    return max;
}