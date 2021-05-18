// Problem: https://www.hackerrank.com/challenges/between-two-sets/problem

// Brute Force Solution:

int getTotalX(vector<int> a, vector<int> b)
{
    int count = 0;

    for (int i = a[a.size() - 1]; i <= b[0]; i++)
    {
        bool first_flag = true;
        for (int j = 0; j < a.size(); j++)
            if (i % a[j] != 0)
            {
                first_flag = false;
                break;
            }

        if (!first_flag) //if 'i' is not a multiple of ALL values in the 'a' array, don't check the 'b' array
            continue;

        bool final_flag = true;
        for (int k = 0; k < b.size(); k++)
            if (b[k] % i != 0)
            {
                final_flag = false;
                break;
            }

        if (final_flag)
        {
            count++; //only increment count if 'i' is ALSO a factor of ALL values in 'b' array
        }
    }

    return count;
}