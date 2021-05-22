// Problem: https://www.hackerrank.com/challenges/between-two-sets/problem

//* Brute Force Solution:

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
            count++; //only increment count if 'i' is ALSO a factor of ALL values in 'b' array
    }

    return count;
}

//* LCM and HCF/GCD approach:

//* runs fine on several test cases but is rejected on others due to TLE
//* only to revise calculating LCM, HCF

//calculate LCM of array
int lcmElements(const int a, const int b)
{
    int lcm = a > b ? a : b; //assign the larger of the two elements to lcm

    while (true)
    {
        if (lcm % a == 0 && lcm % b == 0)
            return lcm;
        lcm++;
    }

    return lcm;
}

int lcmArray(vector<int> arr)
{
    //assuming that array has at least two elements
    int lcm = lcmElements(arr[0], arr[1]);

    for (int i = 2; i < arr.size(); i++)
    {
        lcm = lcmElements(lcm, arr[i]);
    }

    return lcm;
}

//calculate HCF/GCD of array
int gcdElements(const int a, const int b)
{
    if (b == 0)
        return a; //as gcd(a, 0) = |a|, for a ≠ 0, since any number is a divisor of 0, and the greatest divisor of a is |a|
    else
        return gcdElements(b, a % b);
}

int gcdArray(vector<int> arr)
{
    //assuming that array has at least two elements
    int gcd = gcdElements(arr[0], arr[1]);

    for (int i = 2; i < arr.size(); i++)
        gcd = gcdElements(gcd, arr[2]);

    return gcd;
}

int getTotalX(vector<int> a, vector<int> b)
{
    int count = 0;

    int lcm = lcmArray(a);
    int gcd = gcdArray(b);

    for (int i = lcm; i <= gcd; i++)
        if (i % lcm == 0 && gcd % i == 0)
            count++;

    return count;
}