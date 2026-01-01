#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << fixed << setprecision(2);

    cout << "=========== DIVIDEND EARNINGS (INFLATION-ADJUSTED) CALCULATOR ===========" << endl << endl;

    // Dividend yield (%)
    double dividendYield;
    cout << "Enter the dividend yield (%): ";
    cin >> dividendYield;

    // Stock price
    double stockPrice;
    cout << "Enter the current stock price: ";
    cin >> stockPrice;

    // Total investment amount
    double investedAmount;
    cout << "Enter the total amount of money invested: ";
    cin >> investedAmount;

    // Inflation rate
    double inflationRate;
    cout << "Enter the annual inflation rate (%): ";
    cin >> inflationRate;

    /* ===== CALCULATIONS ===== */

    double dividendYieldDecimal = dividendYield / 100.0;
    double inflationRateDecimal = inflationRate / 100.0;

    double dividendPerShare = dividendYieldDecimal * stockPrice;
    double sharesOwned = investedAmount / stockPrice;

    double annualDividend = dividendPerShare * sharesOwned;
    double realDividend = annualDividend / (1.0 + inflationRateDecimal);

    /* ===== OUTPUT ===== */

    cout << "\n========================= RESULTS =========================\n";
    cout << "Shares Owned: " << sharesOwned << endl;
    cout << "Expected Annual Dividend: " << annualDividend << endl;
    cout << "Dividend Adjusted for Inflation: " << realDividend << endl;

    /* ===== PREVENT CMD FROM CLOSING ===== */
    cout << "\nPress ENTER to exit...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();

    return 0;
}
