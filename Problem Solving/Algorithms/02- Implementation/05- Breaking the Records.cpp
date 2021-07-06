// Problem: https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem

vector<int> breakingRecords(vector<int> scores)
{
    int best = scores[0], worst = scores[0];
    int countBest = 0, countWorst = 0;

    for (int i = 1; i < scores.size(); i++)
    {
        if (scores[i] > best)
        {
            best = scores[i];
            countBest++;
        }
        else if (scores[i] < worst)
        {
            worst = scores[i];
            countWorst++;
        }
    }

    return {countBest, countWorst};
}