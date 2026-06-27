#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsCurrency.h"
#include "clsInputValidate.h"

class clsFindCurrencyScreen : protected clsScreen
{
private:
    static void _PrintCurrency(clsCurrency Currency)
    {
        cout << "\nCurrency Card:\n";
        cout << "_____________________________\n";
        cout << "\nCountry    : " << Currency.Country();
        cout << "\nCode       : " << Currency.CurrencyCode();
        cout << "\nName       : " << Currency.CurrencyName();
        cout << "\nRate(1$) = : " << Currency.Rate();

        cout << "\n_____________________________\n";

    }
    static void _ShowResult(clsCurrency Currency)
    {
        if (!Currency.IsEmpty())
        {
            cout << "\nCurrency Found " << endl;
            _PrintCurrency(Currency);
        }
        else
        {
            cout << "\nCurrency Was Not Found";
        }
    }
public:
    static void ShowFindCurrencyScreen()
    {
        _DrawScreenHeader("\t  Find Currency Screen");
        cout << "\nFind By [1] Country Code | [2] Country Name " << endl;
        short Answer = clsInputValidate::ReadIntNumberBetween(1, 2, "Number Not Valid!\nPlease Enter 1 or 2\n");
        if (Answer == 1)
        {
            string CurrencyCode;
            cout << "\nEnter Currency Code : ";
            CurrencyCode = clsInputValidate::ReadString();
            clsCurrency Currency = clsCurrency::FindByCode(CurrencyCode);
            _ShowResult(Currency);
        }
        else
        {
            string CountryName;
            cout << "\nEnter Country Name : ";
            CountryName = clsInputValidate::ReadString();
            clsCurrency Currency = clsCurrency::FindByCountry(CountryName);
            _ShowResult(Currency);
        }
    }

};

