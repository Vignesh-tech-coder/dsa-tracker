#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Problem {
    string name;
    char difficulty;   // E = Easy, M = Medium, H = Hard
    int timeTaken;     // time in minutes
};

int main() {
    vector<Problem> problems;
    int choice;

    while (true) {
        cout << "\n--- DSA Practice Tracker ---\n";
        cout << "1. Add solved problem\n";
        cout << "2. View statistics\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            Problem p;
            cout << "Problem name: ";
            cin.ignore();
            getline(cin, p.name);

            cout << "Difficulty (E/M/H): ";
            cin >> p.difficulty;

            cout << "Time taken (minutes): ";
            cin >> p.timeTaken;

            problems.push_back(p);
            cout << "Problem added successfully.\n";
        }
        else if (choice == 2) {
            int easy = 0, medium = 0, hard = 0;

            for (const auto &p : problems) {
                if (p.difficulty == 'E') easy++;
                else if (p.difficulty == 'M') medium++;
                else if (p.difficulty == 'H') hard++;
            }

            cout << "\n--- Statistics ---\n";
            cout << "Total problems solved: " << problems.size() << endl;
            cout << "Easy: " << easy << endl;
            cout << "Medium: " << medium << endl;
            cout << "Hard: " << hard << endl;
        }
        else if (choice == 3) {
            cout << "Exiting program.\n";
            break;
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
