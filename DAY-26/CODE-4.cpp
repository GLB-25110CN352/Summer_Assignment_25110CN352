#include <iostream>
using namespace std;

int main() {
    int score = 0;
    int answer;
    cout << " QUIZ APPLICATION\n";
    cout << "Be Ready To Start Your quiz";
    cout << "\n1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 2)
        score++;
    cout << "\n2. who is known as the missile man of india ?\n";
    cout << "1. subash chandra bosh\n2. Dr.A.P.J.Abdul kalam\n3. lal bahadur shastri\n4. C.V.Raman\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;
    cout << "\n3. Which symbol is used for input in C?\n";
    cout << "1. >>\n2. <<\n3. ==\n4. &&\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 4)
        score++;
    cout << "\n4. How many days are there in a leap year?\n";
    cout << "1. 364\n2. 365\n3. 366\n4. 367\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;
    cout << "\n5. Which planet is known as the hottest Planet?\n";
    cout << "1. Earth\n2. Mars\n3. Venus\n4. Jupiter\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 3)
        score++;
    cout << "Quiz Completed!\n";
    cout << "Your Score: " << score << " out of 5\n";
    if (score == 5)
        cout << "Excellent! Perfect Score!\n";
    else if (score >= 3)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";
    return 0;
}