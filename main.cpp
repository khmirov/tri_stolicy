#include <iostream>
#include <string>
#include "Capital.h"

using namespace std;


int main() {

    Capital moscow;
    moscow.SetCountryname("Russia");
    moscow.SetName("Moscow");
    moscow.SetPopulation(11000000);

    Capital varshava;
    varshava.SetCountryname("Poland");
    varshava.SetName("Varshava");
    varshava.SetPopulation(200000);

    Capital london;
    london.SetCountryname("Britain");
    london.SetName("London");
    london.SetPopulation(9000000);

    if (london.GetPopulation() > varshava.GetPopulation() && moscow.GetPopulation() > london.GetPopulation()) {
        cout << "The biggest capital of population is" << endl;
        moscow.Show();
    }

}
