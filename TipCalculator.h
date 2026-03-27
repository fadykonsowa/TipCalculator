#include <iostream>

using namespace std;

namespace TipCalculatorNS
{
    class TipCalculatorLib
    {
    private:
        int rate;
        string rateName;
        double invoiceAmount;
        double tipAmount;

    public:
        void printRateName()
        {
            cout << "******* Tip Calculator *******\n" << endl;
            cout << "Choose number 1 is Rate Name excellent" << endl;
            cout << "Choose number 2 is Rate Name great" << endl;
            cout << "Choose number 3 is Rate Name good" << endl;
            cout << "Choose number 4 is Rate Name poor" << endl;
            cout << "Choose number 5 is Rate Name terrible\n"
                 << endl;

            cout << "Enter Invoice Amount: ";
            cin >> invoiceAmount;

            cout << "Enter number Rate Name: ";
            cin >> rate;
        } // printRateName

        void setTipCalculator()
        {
            if (rate == 1)
            {
                rateName = "excellent";
                tipAmount = (invoiceAmount / 100) * 20;
            }
            else if (rate == 2)
            {
                rateName = "great";
                tipAmount = (invoiceAmount / 100) * 15;
            }
            else if (rate == 3)
            {
                rateName = "good";
                tipAmount = (invoiceAmount / 100) * 10;
            }
            else if (rate == 4)
            {
                rateName = "poor";
                tipAmount = (invoiceAmount / 100) * 5;
            }
            else if (rate == 5)
            {
                rateName = "terrible";
                tipAmount = (invoiceAmount / 100) * 0;
            }
            else
            {
                rateName = "No Rate";
                tipAmount = 0.0;
            }
        } // setTipCalculator

        string getRateName()
        {
            return rateName;
        }
        double getInvoiceAmount()
        {
            return invoiceAmount;
        }
        double getTipAmount()
        {
            return tipAmount;
        }

    }; // TipCalculatorLib
} // TipCalculatorNS