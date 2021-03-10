Problem: https://www.hackerrank.com/challenges/grading/problem

vector<int> gradingStudents(vector<int> grades) {
    for (int i = 0; i < grades.size(); i++)
    {
        int nextMultiple = (((grades[i] / 5) + 1) * 5);
        int difference = nextMultiple - grades[i];
        if (grades[i] < 100 && grades[i] >= 38 && difference < 3)
            grades[i] = nextMultiple;
    }
    return grades;
}