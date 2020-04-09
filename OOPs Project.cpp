#include <iostream>

using namespace std;

class trunkExchangeCalls
{
  private:double toPhone;
  double fromPhone;
public:

  int getCall (int c)
   {
    if (c == 1)
      {
	lighteningCall ();
	cout << "\nYour call is a Lightening call!!";
      }
    else if (c == 2)
      {
	cout << "\nYour call is a Urgent Call !!" << urgentCall ();
      }

    else if (c == 3)
      {
	cout << "\nYour Call is ordinary Call !!" << ordinaryCall ();
      }
    else
      {
	cout << "\nDefault !!! ";
      }
  }

  int lighteningCall ()
  {
    float rate = 10.0;
    float duration;
    cout << " Enter your duration !! (in minutes) ";
    cin >> duration;
    rate = duration * 10.00 + 2.00;
    cout << "\nYour rate is " << rate;
    return 0;
  }
  int urgentCall ()
  {
    float rate = 7.0;
    float duration;
    cout << " Enter your duration !! (in minutes) ";
    cin >> duration;
    rate = duration * 7.0 + 2.00;
    cout << "\nYour rate is " << rate;
    return 0;

  }

  int ordinaryCall ()
  {
    float rate = 5.0;
    float duration;
    cout << "\n Enter your duration !! (in minutes) ";
    cin >> duration;
    rate = duration * 5.0 + 2.00;
    cout << "\nYour rate is " << rate;
    return 0;
  }

};

int
main ()
{
  trunkExchangeCalls TrunkExchangeCalls;
  int choice;
  cout <<
    "Enter the kind of call:\n1.Lightening Call\t2.Urgent Call\t3.  Ordinary Call ";
  cin >> choice;
  TrunkExchangeCalls.getCall (choice);
  cout << "\nThis the receipt !!";
  return 0;
}
