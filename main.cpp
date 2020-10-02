#include <iostream>
#include <berlingo.h>

using namespace std;

int main()
{
    int h, s, k;
    cout<< "Hvor mye hjemlengsel har du på en skala fra 1 til 10?" << endl;
    cin >> h;
    cout<< "Hvor mange prosent stigning er veien? (fra -100 til 100)" << endl;
    cin >> s;
    cout<< "Hvor mange kaffekopper har du drukket?" << endl;
    cin >> k;

    double hastighet;
    berlingofart(h, s, k, hastighet);
    if (hastighet>150)
    {
        cout << "ERROR"<< endl << "Please sir out of the step, vehicle" << endl;
    }
   cout<< "Hastigheten på berlingoen er nøyaktig " << hastighet <<"km/t"<< endl;
}
