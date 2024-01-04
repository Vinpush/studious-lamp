#include <iostream>
#include <string>

using namespace std;

struct HealthInsurance {
    string policyHolderName;
    int policyNumber;
    string insuranceType;
    double coverageAmount;
};

void enterInsuranceDetails(HealthInsurance& insurance) {

    cout << "Enter policyholder's name: ";
    getline(cin, insurance.policyHolderName);

    cout << "Enter policy number: ";
    cin >> insurance.policyNumber;
    cin.ignore(); // Clear the newline character from the input buffer

    cout << "Enter insurance type: ";
    getline(cin, insurance.insuranceType);

    cout << "Enter coverage amount: INR ";
    cin >> insurance.coverageAmount;
}

void displayInsuranceDetails(const HealthInsurance& insurance) {
    cout << "\nInsurance Details:\n";
    cout << "Policyholder's Name: " << insurance.policyHolderName << endl;
    cout << "Policy Number: " << insurance.policyNumber << endl;
    cout << "Insurance Type: " << insurance.insuranceType << endl;
    cout << "Coverage Amount: INR " << insurance.coverageAmount << endl;
}

int main() {
    HealthInsurance userInsurance;

    cout << "Welcome to FIC Health Insurance \n";
    cout << "-------------------------------------\n";

    enterInsuranceDetails(userInsurance);
    displayInsuranceDetails(userInsurance);

    return 0;
}
