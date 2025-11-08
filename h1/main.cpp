#include <iostream>
#include <iomanip>

using namespace std;

void calcSum(int luku1, int luku2)

{
    int summa = luku1 + luku2;
    cout << "Luvun 1 ja luvun 2 summa on " <<  summa << endl;
}

void calcDiv(double luku1, double luku2)

{
    if (luku2 == 0)

    {
    cout << "Virhe ilmoitus: Luku 2 ei saa olla nolla !!" << endl;
    }

    else

    {
    double jako = luku1 / luku2;
    cout << fixed << setprecision(2);
    cout << "Luvun 1 ja luvun 2 osamaara on " << jako << endl;
    }
}

int retSum(int luku1, int luku2)
{
    return luku1 + luku2;
}

double retDiv(double luku1, double luku2)
{
    double result = luku1 / luku2;
    return result;
}

int main()
{
    int a,b;

    cout << "Anna luku 1: ";
    cin >> a;
    cout << "Anna luku 2: ";
    cin >> b;

    calcSum(a,b);

    calcDiv(a,b);

    cout << "Luvun 1 ja luvun 2 summa on " << retSum(a,b) << endl;

    try

        {
        if (b == 0)
        {
            throw runtime_error("jakaja ei saa olla nolla!");

        }
        double result = retDiv(a,b);
        cout << fixed << setprecision(2);
        cout << "Luvun 1 ja luvun 2 osamaara on " << result << endl;

        }
        catch (runtime_error& e) {

        cout<<"Error: "<< e.what()<< endl;
        }

        return 0;
}
