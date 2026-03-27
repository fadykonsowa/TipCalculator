#include <iostream>
#include "TipCalculator.h"

using namespace std;
using namespace TipCalculatorNS;

int main()
{
TipCalculatorLib obj;
obj.printRateName();
obj.setTipCalculator();

cout << "\n*********** Result ***********\n";
cout << "Rate Name: " << obj.getRateName() << endl;
cout << "Invoice Amount: " << obj.getInvoiceAmount() << endl;
cout << "Tip Amount: " << obj.getTipAmount() << endl;

cout << "\nFady Konsowa @ Copyright 2026\n" << endl;

system("pause");
return 0;
}