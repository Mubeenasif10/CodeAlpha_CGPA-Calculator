#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;
    
    float grades[n], credits[n];
    float totalPoints = 0, totalCredits = 0;
    
    for(int i=0; i<n; i++) {
        cout << "\nCourse " << i+1 << ":\n";
        cout << "Enter grade point (0-4): ";
        cin >> grades[i];
        cout << "Enter credit hours: ";
        cin >> credits[i];
        
        totalPoints += grades[i] * credits[i];
        totalCredits += credits[i];
    }
    
    float gpa = totalPoints / totalCredits;
    
    cout << fixed << setprecision(2);
    cout << "\n=== RESULT ===\n";
    cout << "Total Credits: " << totalCredits << endl;
    cout << "GPA: " << gpa << endl;
    
    return 0;
}
