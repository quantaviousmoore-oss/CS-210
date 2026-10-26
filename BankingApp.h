/*
Airgead Banking App
Author:Quantavious Moore
Date:October 14, 2026
CS 210
*/

#ifndef Investment_H
#define Investment_H

// Define Investment Class
class Investment {
public:
	void setInitialInvestment(double t_initialInvestment);
	void setMonthlyDeposit(double t_monthlyDeposit);
	void setInterestRate(double t_interestRate);
	void setNumberofYears(int t_numberofYears);
	void displayInput() const;
	void displayReport(double t_depositAmount ,const char* t_reportTitle) const;

private:
	double initialInvestment = 0.0;
	double monthlyDeposit = 0.0;
	double annualInterest = 0.0;
	int NumberofYears = 0;
};

#endif
