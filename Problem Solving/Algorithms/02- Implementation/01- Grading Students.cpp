// Problem: https:www.hackerrank.com/challenges/grading/problem

vector<int> gradingStudents(vector<int> grades)
{
    for (int i = 0; i < grades.size(); i++)
    {
        if (grades[i] >= 38 && grades[i] < 100 && grades[i] % 5 >= 3)
            grades[i] += 5 - grades[i] % 5;
    }
    return grades;
}

//* Revised Solution

vector<int> gradingStudents(vector<int> grades)
{
    for (int i = 0; i < grades.size(); i++)
    {
        if (grades[i] >= 38)
        {
            int rem = grades[i] % 5;
            if (rem >= 3)
                grades[i] += 5 - rem;
        }   
    }
    
    return grades;
}
