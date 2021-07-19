// Problem: https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays

//* Loop Based Solution

vector<int> rotLeft(vector<int> a, int d)
{
    for (int rotation = 0; rotation < d; rotation++)
    {
        int left = a[0];
        for (int i = 0; i < a.size() - 1; i++)
            a[i] = a[i + 1];

        a[a.size() - 1] = left;
    }

    return a;
}