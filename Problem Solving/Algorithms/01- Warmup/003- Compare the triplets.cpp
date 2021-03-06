//Problem: https://www.hackerrank.com/challenges/compare-the-triplets/problem

vector<int> compareTriplets(vector<int> a, vector<int> b)
{
    vector<int> points = {0, 0};

    for (int i = 0; i < 3; i++)
    {
        if (a[i] > b[i])
            points[0] += 1;
        else if (a[i] < b[i])
            points[1] += 1;
    }
    return points;
}