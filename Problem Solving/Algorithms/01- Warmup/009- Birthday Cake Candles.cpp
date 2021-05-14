// Problem: https://www.hackerrank.com/challenges/birthday-cake-candles/problem

int birthdayCakeCandles(vector<int> candles)
{
    return count(candles.begin(), candles.end(), *max_element(candles.begin(), candles.end()));
}