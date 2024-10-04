/*
Title: Chapter 3 Exercise 17: Math Tutor
File Name: Chapter3Ex17_Cody_Drumheller
Programmer: Cody Drumheller
Date:20241004
Requirements: Wrtie a program that can be used as a math tutor, the program should display
two random numbers to be adde. the progrm should then pause while the studen works on the problem.
When the student is ready to check the answer, the program should diplay the correct answer
when prompted.
Second branch: before answer is displayed, allow user to enter to enter answer.
Display correct answer and say " You are correct!" or "Sorry, that's incorrect."


*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

 int main()
{
	 srand(static_cast<unsigned int>(time(0)));
	 int num1 = rand() % 900 + 100;
	 int num2 = rand() % 900 + 100;
	 cout << " Solve the following addition problem: " << num1 <<  " + " << num2 << "?" << endl;
	 int student_answer;
	 cout << "Enter your answer: ";
	 cin >> student_answer;
	 int correct_answer = num1 + num2;
	 if (student_answer == correct_answer) {
		 cout << "You are correct! " << endl;
	 }
	 else {
		 cout << " Your answer is not correct. The correct answer is: " << correct_answer << endl;
	 }
	 return 0;

}
