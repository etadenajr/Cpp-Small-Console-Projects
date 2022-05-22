//5th console Project
//Title: Basic Grading System

#include <iostream>

int gradeCal(int quiz1, int quiz2, int exam);
std::string getGradeVal(int result);

int main()
{
    int quiz1, quiz2, exam, result;

    std::cout << "***Basic Grading System***" << std::endl << std::endl;
    
    //Enter Quiz 1
    std::cout << "Quiz no.1: ";
    std::cin >> quiz1;
    //Enter Quiz 2
    std::cout << std::endl;
    std::cout << "Quiz no.2: ";
    std::cin >> quiz2;
    //Enter Exam
    std::cout << std::endl;
    std::cout << "Exam: ";
    std::cin >> exam;

    result = gradeCal(quiz1, quiz2, exam);

    std::cout << "Total Grade: " << result << " " << getGradeVal(result) << std::endl;
}

int gradeCal(int quiz1, int quiz2, int exam)
{
    return (((quiz1 + quiz2)/2) * .40) + (exam * 0.60);
}

std::string getGradeVal(int result)
{
    std::string gradeVal;
    int grade = result / 10;

    switch (grade)
    {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        gradeVal = "F";
        break;
    case 6:
        gradeVal = "D";
        break;
    case 7:
        gradeVal = "C";
        break;
    case 8:
        gradeVal = "B";
        break;
    case 9:
    case 10:
        gradeVal = "A";
        break;
    default:
        gradeVal = "Invalid!!!";
    }
    return gradeVal;
}