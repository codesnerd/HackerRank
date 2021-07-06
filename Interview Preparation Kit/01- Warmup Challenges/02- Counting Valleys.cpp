// Problem: https://www.hackerrank.com/challenges/counting-valleys/problem?h_l=interview&isFullScreen=true&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup

int countingValleys(int steps, string path)
{
    int depth = 0, valleys = 0;

    for (int i = 0; i < steps; i++)
    {
        if (path[i] == 'U')
        {
            depth--;
            if (depth == 0)
                valleys++;
        }
        else
            depth++;
    }

    return valleys;
}