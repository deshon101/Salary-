#include <iostream>
           using namespace std;
           int main()
           {   
                //---------------------------------------------
                // Declare all variables.
                //---------------------------------------------


               float pay1,      // first paycheck amount
                     pay2,      // second paycheck amount
                     pay3,      // third paycheck amount 
                     pay4,      // fourth paycheck amount
                     pay5,      // fifth paycheck amout
                     pay6,      // sixth paycheck amount
                     pay7,      // seventh paycheck amount
                     pay8,      // eighth paycheck amount
                     pay9,      // ninth paycheck amount 
                     pay10,     // tenth paycheck amount
                     pay11,     // eleventh paycheck amount
                     pay12,     // twelfth paycheck amount
                     Total_Pay,   // variable used to calculate the total pay
                     Average_Pay;  // variable used to calculate the average paycheck amount
               
            cout << endl << "(c) 2017, dgrant De'Shon Grant" << endl << endl;
               //-|--------------------------------------------------
               //-| 1. Read values for pay1, pay2, ... pay12.
               //-|--------------------------------------------------

                  cout << "Type the amount for your check from the month of JANUARY:" << " " << endl;
                  cin >> pay1;
                cout << "Type the amount for your check from the month of FEBURARY:" << " " << endl;
                  cin >> pay2; 
                cout << "Type the amount for your check from the month of MARCH:" << " " << endl;
                  cin >> pay3;
                cout << "Type the amount for your check from the month of APRIL:" << " " << endl;
                  cin >> pay4;
                cout << "Type the amount for your check from the month of MAY:" << " " << endl;
                  cin >> pay5;
                cout << "Type the amount for your check from the month of JUNE:" << " " << endl;
                  cin >> pay6;
                cout << "Type the amount for your check from the month of JULY:" << " " << endl;
                  cin >> pay7;
                cout << "Type the amount for your check from the month of AUGUST:" << " " << endl;
                  cin >> pay8;
                cout << "Type the amount for your check from the month of SEPTEMBER:" << " " << endl;
                  cin >> pay9;
                cout << "Type the amount for your check from the month of OCTOBER:" << " " << endl;
                  cin >> pay10;
                cout << "Type the amount for your check from the month of NOVEMBER:" << " " << endl;
                  cin >> pay11;
                cout << "Type the amount for your check from the month of DECEMBER:" << " " << endl;
                  cin >> pay12;
               //-|--------------------------------------------------
               //-| 2. Compute Total_Pay = pay1 + pay2 + ...pay12.
               //-|--------------------------------------------------
               
                  Total_Pay = pay1 + pay2 + pay3 + pay4 + pay5 + pay6 + pay7 + pay8 + pay9 + pay10 + pay11 + pay12 ;
                //-|--------------------------------------------------
                //-| 3. Compute Average_Pay = Total_Pay / 12.
                //-|--------------------------------------------------
                  Average_Pay = Total_Pay / 12 ; 
                //-|--------------------------------------------------
                //-| 4. Display Total_Pay as: TOTAL PAY = $ xxxxxx
                //-|--------------------------------------------------

                  cout << "TOTAL PAY = $" << " " << Total_Pay << "\n" ;
                //-|--------------------------------------------------
                //-| 5. Display Average_Pay as: AVERAGE PAY = $ xxxxxx
                //-|--------------------------------------------------

                  cout << "AVERAGE PAY = $" << " " << Average_Pay << "\n";
               
                 cout << endl << "(c) 2017, dgrant De'Shon Grant" << endl << endl;                

               return 0;
             }//main
