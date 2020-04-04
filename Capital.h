//
// Created by 7 on 04.04.2020.
//
#include <iostream>
#include <string>
#include "Country.h"
using namespace std;


class Capital : public Country {
private:
    string countryname;
public:

    string GetCountryname()
    {
        return countryname;
    }

    void SetCountryname (string countryname)
    {
        this->countryname = countryname;
    }

    Capital(){}
    Capital(string name, int population, string countryname)
    {
        SetName(name);
        SetPopulation(population);
        SetCountryname(countryname);
    }

    void Show()
    {
        cout << "Country " << countryname << endl;
        cout << "Capital: " << GetName() << endl;
        cout << "Population " << GetPopulation() << endl;

    }

};
