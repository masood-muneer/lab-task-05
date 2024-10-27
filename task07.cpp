#include <iostream>
using namespace std;

int main()
 {
    int numSubjects, num;
    
    cout << "Enter the total number of subjects: ";
    cin >> numSubjects;
    for (int i = 1; i <= numSubjects; ++i) 
    {
        cout << "Enter marks for subject " << i << " (out of 100): ";
        cin >> num;
        if (num >= 90) {
            cout << "Grade: A" << endl;
        } 
        else if (num>= 75) {
            cout << "Grade: B" << endl;
        } 
        else if (num >= 50) {
            cout << "Grade: C" << endl;
        } 
        else {
            cout << "Grade: F" << endl;
        }
    }

    return 0;
}
