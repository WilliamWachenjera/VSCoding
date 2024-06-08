<<<<<<< HEAD
#include <iostream>
 #include <ctime>
  #include <cstdlib>
  using namespace std;

  int main()
  {
  int correctCount = 0; // Count the number of correct answers
  int count = 0; // Count the number of questions
 long startTime = time(0);
  int NUMBER_OF_QUESTIONS = 0;

 srand(time(0)); // Set a random seed
cout << "Enter the number of trials: ";
cin >> NUMBER_OF_QUESTIONS;
 while (count < NUMBER_OF_QUESTIONS)
 {
 // 1. Generate two random single-digit integers
 int number1 = rand() % 10;
 int number2 = rand() % 10;

 // 2. If number1 < number2, swap number1 with number2
 if (number1 < number2)
 {
 int temp = number1;
 number1 = number2;
 number2 = temp;
 }

 // 3. Prompt the student to answer "what is number1 – number2?"
 cout << "What is " << number1 << " - " << number2 << "? ";
 int answer;
   cin >> answer;
   cout << endl;

 // 4. Grade the answer and display the result
 if (number1 - number2 == answer)
 {
 cout << "You are correct!\n";
 correctCount++;
 }
 else
 cout << "Your answer is wrong.\n" << number1 << " - " <<
 number2 << " should be " << (number1 - number2) << endl;

 // Increase the count
 count++;
 }

 long endTime = time(0);
 long testTime = endTime - startTime;

 cout << "Correct count is " << correctCount << "\nTest time is " << testTime << " seconds\n";

 return 0;
  }
=======
#include <iostream>
 #include <ctime>
  #include <cstdlib>
  using namespace std;

  int main()
  {
  int correctCount = 0; // Count the number of correct answers
  int count = 0; // Count the number of questions
 long startTime = time(0);
  int NUMBER_OF_QUESTIONS = 0;

 srand(time(0)); // Set a random seed
cout << "Enter the number of trials: ";
cin >> NUMBER_OF_QUESTIONS;
 while (count < NUMBER_OF_QUESTIONS)
 {
 // 1. Generate two random single-digit integers
 int number1 = rand() % 10;
 int number2 = rand() % 10;

 // 2. If number1 < number2, swap number1 with number2
 if (number1 < number2)
 {
 int temp = number1;
 number1 = number2;
 number2 = temp;
 }

 // 3. Prompt the student to answer "what is number1 – number2?"
 cout << "What is " << number1 << " - " << number2 << "? ";
 int answer;
   cin >> answer;
   cout << endl;

 // 4. Grade the answer and display the result
 if (number1 - number2 == answer)
 {
 cout << "You are correct!\n";
 correctCount++;
 }
 else
 cout << "Your answer is wrong.\n" << number1 << " - " <<
 number2 << " should be " << (number1 - number2) << endl;

 // Increase the count
 count++;
 }

 long endTime = time(0);
 long testTime = endTime - startTime;

 cout << "Correct count is " << correctCount << "\nTest time is " << testTime << " seconds\n";

 return 0;
  }
>>>>>>> 28a1e182efec15b14e71fad4388f693ecf6e2c95
