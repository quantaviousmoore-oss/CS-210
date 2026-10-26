/*
Airgead Banking App
Author:Quantavious Moore
Date:October 14, 2026
CS 210
*/

#include <iostream>
#include <iomanip>
#include "BankingApp.h"

using namespace std;

// Store Initial Investment
void Investment::setInitialInvestment(double t_initialInvestment) {
	initialInvestment = t_initialInvestment;
}

// Store Monthly Deposit
void Investment::setMonthlyDeposit(double t_monthlyDeposit) {
	monthlyDeposit = t_monthlyDeposit;
}

// Store Number of Years
void Investment::setNumberofYears(int t_numberofYears) { 
	NumberofYears = t_numberofYears; 
}

// Store Annual Interest Rate
void Investment::setInterestRate(double t_interestRate) {
	annualInterest = t_interestRate;
}

// Display User Input
void Investment::displayInput() const {
	cout << fixed << setprecision(2);

	cout << "\n========================================\n";
	cout << "               Airgead Banking\n";
	cout << "\n========================================\n";
	cout << "Initial Investment: $" << initialInvestment << '\n';
	cout << "Monthly Deposit: $" << monthlyDeposit << '\n';
	cout << " Annual Interest:   " << annualInterest << '%\n';
	cout << "Number of Years:   " << NumberofYears << '\n';
	cout << "\n========================================\n";
	cout << "Press Enter to Continue...";
}

// Display Investment Report
void Investment::displayReport(double t_depositAmount, const char* t_reportTitle) const {
	double balance = initialInvestment;
	double yearlyInterest = 0.0;
	double openingBalance = 0.0;
	double total = 0.0;
	double interest = 0.0;

	const double monthlyRate = (annualInterest / 100.0) / 12.0;

	cout << fixed << setprecision(2);

	cout << "\n\n";
	cout << "========================================\n";
	cout << "              " << t_reportTitle << '\n';
	cout << "========================================\n";
	cout << left << setw(8) << "Year" << right << setw(18) << "Opening Balance" <<
}