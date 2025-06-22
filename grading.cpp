#include <iostream>
using namespace std;

void getmark(int subjectnum) {
    int* mark = new int[subjectnum]; // Dynamic allocation for marks array
    for (int i = 0; i < subjectnum; i++) {
        cout << "Enter Marks Of Subject " << i + 1 << ": ";
        cin >> mark[i];
    }

    int totalmark = 0;
    for (int i = 0; i < subjectnum; i++) {
        totalmark += mark[i];
    }

    // Correct calculation of percentage with floating-point division
    float percentage = (float)(totalmark) / subjectnum;

    cout << "The Percentage is " << percentage << "%" << endl;

    // Corrected grade calculation
    if (percentage >= 90) {
        cout << "Grade is A" << endl;
    } else if (percentage >= 80) {
        cout << "Grade is B" << endl;
    } else if (percentage >= 70) {
        cout << "Grade is C" << endl;
    } else if (percentage >= 60) {
        cout << "Grade is D" << endl; // Changed F to D for clarity
    } else {
        cout << "Grade is F" << endl;
    }

    // Free the dynamically allocated memory
}

int main() {
    int numSubjects;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;
    getmark(numSubjects);
    return 0;
}