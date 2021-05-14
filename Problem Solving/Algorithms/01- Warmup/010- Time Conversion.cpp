// Problem: https://www.hackerrank.com/challenges/time-conversion/problem

string timeConversion(string s)
{
    char ampm = tolower(s[s.length() - 2]);
    string time = s.substr(0, 8);
    string hr = s.substr(0, 2);

    if (ampm == 'p' && hr != "12")
    {
        hr = to_string((stoi(hr) + 12));
        time.replace(0, 2, hr);
    }
    else if (ampm == 'a' && hr == "12")
    {
        hr = "00";
        time.replace(0, 2, hr);
    }

    //if time is a.m. or 12 p.m, the time will be returned as is
    return time;
}