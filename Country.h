//
// Created by 7 on 04.04.2020.
//
#include <iostream>
#include <string>


using namespace std;

class Country {
private:
    string name;
    int population;
    
public:
    string GetName()
    {
        return name;
    }
    int GetPopulation()
    {
        return population;
    }

    void SetName(string name)
    {
        this->name = name;
    }
    void SetPopulation (int population)
    {
        this->population = population;
    }
};




