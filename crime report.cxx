#include <iostream>
#include <string>

using namespace std;

struct CrimeReport {
    string crimeType;
    int year;
    string location;
};

void reportCrime(CrimeReport& report) {
    cout << "Enter the type of crime: ";
    getline(cin, report.crimeType);

    cout << "Enter the year of the crime: ";
    cin >> report.year;
    cin.ignore();  // Clear the newline character from the input buffer

    cout << "Enter the location of the crime: ";
    getline(cin, report.location);
}

int main() {
    CrimeReport userReport;

    cout << "Welcome to the Crime Reporting System\n";
    cout << "-----------------------------------\n";

    reportCrime(userReport);

    cout << "\nCrime Report Recorded:\n";
    cout << "Type of Crime: " << userReport.crimeType << endl;
    cout << "Year of Crime: " << userReport.year << endl;
    cout << "Location of Crime: " << userReport.location << endl;

    return 0;
}
