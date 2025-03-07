#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> mathProblems = {"2 + 3", "4 - 5", "6 * 7"};
    string userInput;
    int correctAnswers = 0;

    for (auto problem : mathProblems) {
        cout << "What is the solution to " << problem << "? ";
        cin >> userInput;

        if (userInput == problem) {
            correctAnswers++;
        }
    }

    cout << "You got " << correctAnswers << " out of 3 questions correct." << endl;

    return 0;
}
