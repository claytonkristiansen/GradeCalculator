#include <iostream>
#include <vector>


struct GradeItem
{
    double pointsEarned;
    double pointsPossible;
    GradeItem(double earned, double possible)
    :pointsEarned(earned), pointsPossible(possible)
    {

    }
};

double ComputeCategory(std::vector<GradeItem> gradeItems, double weight)
{
    double totalEarned = 0;
    double totalPossible = 0;
    for(GradeItem item : gradeItems)
    {
        totalEarned += item.pointsEarned;
        totalPossible += item.pointsPossible;
    }
    return (totalEarned/totalPossible)*weight;
}

int main()
{
    std::vector<GradeItem> Homework;
    std::vector<GradeItem> Quizzes;
    std::vector<GradeItem> Exam1;
    std::vector<GradeItem> Exam2;
    std::vector<GradeItem> FinalExam;

    Homework.push_back(GradeItem(9, 10));
    Homework.push_back(GradeItem(10, 10));
    //Homework.push_back(GradeItem(9, 10));
    Homework.push_back(GradeItem(10, 10));
    Homework.push_back(GradeItem(10, 10));
    Homework.push_back(GradeItem(10, 10));
    Homework.push_back(GradeItem(10, 10));
    Homework.push_back(GradeItem(10, 10));
    Homework.push_back(GradeItem(10, 10));
    //Homework.push_back(GradeItem(0, 10));

    Quizzes.push_back(GradeItem(10, 10));
    //Quizzes.push_back(GradeItem(5, 10));
    Quizzes.push_back(GradeItem(8, 10));
    Quizzes.push_back(GradeItem(10, 10));
    Quizzes.push_back(GradeItem(9, 10));
    Quizzes.push_back(GradeItem(10, 10));

    Exam1.push_back(GradeItem(93, 100));
    
    Exam2.push_back(GradeItem(92, 100));

    FinalExam.push_back(GradeItem(88.5, 100));

    double Grade = 0;
    Grade += ComputeCategory(Homework, 0.2);
    Grade += ComputeCategory(Quizzes, 0.1);
    Grade += ComputeCategory(Exam1, 0.2);
    Grade += ComputeCategory(Exam2, 0.2);
    Grade += ComputeCategory(FinalExam, 0.3);

    std::cout << Grade << "\n";
    return 0;
}