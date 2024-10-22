#include "fucktons.hpp"

void runProgram()
{
    drawMenu();
    menuSelect();
}

void drawMenu()
{

    cout << "*************************************************" << endl;
    cout << "Please select an option:" << endl;
    cout << "1: Metric to Fucktons" << endl;
    cout << "2: Imperial to Fucktons" << endl;
    cout << "3: Fucktons to Metric" << endl;
    cout << "4: Fucktons to Imperial" << endl;
    cout << "5: Exit" << endl;
    cout << "*************************************************" << endl;
}

void menuSelect()
{
    string tempString;
    int choiceInt;

    getline(cin, tempString);
    choiceInt = stoi(tempString);

    switch (choiceInt)
    {

    case 1:
        mtf();
        break;

    case 2:
        itf();
        break;

    case 3:
        ftm();
        break;

    case 4:
        fti();
        break;

    case 5:
        exit(0);
        break;

    case 69420:
        cout << "Its time to go outside and touch grass :)  " << endl;
        exit(3);
        break;

    default:

        break;
    }
}

// note: 1 Buttload is equal to 1.763 metric tons (fuck you)

int mtf()
{

    string inString;
    double metricWeight, tempWeight, fuckTonWeight, buttLoadMeasurment;

    cout << "Please input starting weight (in Kilos)" << endl;
    getline(cin, inString);
    metricWeight = stod(inString);
    buttLoadMeasurment = (metricWeight / BUTTTON_IN_KILOS);
    cout << "Enter unit of desired measurment: " << endl;
}
itf()
{
}

int fti() {}

int ftm() {}

void buttTonMenu()
{
}