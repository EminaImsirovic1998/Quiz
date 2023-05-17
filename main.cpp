#include <iostream>

using namespace std;

struct Quiz{
string question;
string answers[3];
string correctAnswer;
 };
 
 void isYourAnswerCorrect(Quiz quiz){
 	int a;
 	cout << quiz.question << endl;
 	for(int x = 0; x < 3; x++){
 		cout << x+1 << ". " << quiz.answers[x] <<endl;
	 }
	 cout << "Choose answer: ";
	 cin >> a;
	 if (quiz.answers[a-1] == quiz.correctAnswer){
	 	cout << "Correct :D \n" <<endl;
	 }else{
	 	cout << "Incorrect :( \n" <<endl;
	 }
 }
 
int main() {
	Quiz quiz, quiz2, quiz3, quiz4, quiz5;
	
	cout << "How well do you know me?" << endl;
	
	quiz.question = "What is my favorite color?";
	quiz.answers[0] = "Blue";
	quiz.answers[1] = "Purple";
	quiz.answers[2] = "Green";
	quiz.correctAnswer = "Blue";
	
	isYourAnswerCorrect(quiz);
	
	quiz2.question = "What is my name?";
	quiz2.answers[0] = "Emila";
	quiz2.answers[1] = "Sara";
	quiz2.answers[2] = "Emina";
	quiz2.correctAnswer = "Emina";
	
	isYourAnswerCorrect(quiz2);
	
	quiz3.question = "What is my favorite food?";
	quiz3.answers[0] = "Pizza";
	quiz3.answers[1] = "Burrito";
	quiz3.answers[2] = "Salad";
	quiz3.correctAnswer = "Pizza";
	
	isYourAnswerCorrect(quiz3);
	
	quiz4.question = "How tall I am?";
	quiz4.answers[0] = "170cm";
	quiz4.answers[1] = "164cm";
	quiz4.answers[2] = "155cm";
	quiz4.correctAnswer = "164cm";
	
	isYourAnswerCorrect(quiz4);
	
	quiz5.question = "What is my degree?";
	quiz5.answers[0] = "Mechanical Engineer";
	quiz5.answers[1] = "Electrical Engineer";
	quiz5.answers[2] = "MD";
	quiz5.correctAnswer = "Electrical Engineer";
	
	isYourAnswerCorrect(quiz5);
	
	
	
	return 0;
}
