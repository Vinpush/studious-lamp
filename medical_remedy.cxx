#include <iostream>
#include <string>

using namespace std;

void suggestRemedy(const string& healthIssue) {
    cout << "\nSuggested Remedy for " << healthIssue << ":\n";

    if (healthIssue == "headache") {
        cout << "Rest in a quiet, dark room and consider taking over-the-counter pain relievers.\n";
    } else if (healthIssue == "sore throat") {
        cout << "Gargle with warm saltwater and stay hydrated. Consider using throat lozenges.\n";
    } else if (healthIssue == "fever") {
        cout << "Get plenty of rest, stay hydrated, and take over-the-counter fever reducers as needed.\n";
    } else if(healthIssue == "constipation ")  {
    cout<<"Do normal exercise, drink water before going to washroom, avoid fast foods , instead eat foods rich in fibres,consult a doctor if it persists.\n";
} else if(healthIssue == "body pain") {
cout<<" avoid extreme exercise, perform easy movements,don't lift heavy items, apply a massage oil.\n "; }
   else {
        cout << "Sorry, we don't have specific remedies for this issue. Please consult a healthcare professional.\n";
    }
}

int main() {
    string patientIssue;

    cout << "Welcome to the Medical Remedy System\n";
    cout << "-----------------------------------\n";

    cout << "Enter your health issue: ";
    getline(cin, patientIssue);

    suggestRemedy(patientIssue);

    return 0;
}
