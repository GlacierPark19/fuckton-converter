#include "fucktons.hpp"

void runProgram()
{
    while (exitProgram == false)
    {
        drawMenu();
        menuSelect();
    }
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

        break;

    case 4:

        break;

    case 5:
        exitProgram = true;
        break;

    case 69420:
        cout << "Its time to go outside and touch grass :)  " << endl;
        exitProgram = true;
        break;

    default:

        break;
    }
}

// note: 1 Buttload is equal to 1.763 metric tons (fuck you)

int mtf()
{

    string inString, unit;
    double metricWeight, tempWeight, fuckTonWeight, buttLoadMeasurement;
    int expon;

    cout << "Please input starting weight (in Kilos)" << endl;
    getline(cin, inString);
    metricWeight = stod(inString);
    buttLoadMeasurement = (metricWeight / BUTTTON_IN_KILOS);
    cout << "Enter unit of desired measurment: " << endl;
    struct finalUnit final = buttTonMenu();
    expon = final.value;
    unit = final.unit;
    fuckTonWeight = pow(buttLoadMeasurement, expon);

    cout << "The final weight is: " << fuckTonWeight << " " << unit << endl;
    return 0;
}

int itf()
{
    string inString, unit;
    double imperialWeight, metricWeight, tempWeight, fuckTonWeight, buttLoadMeasurement;
    int expon;

    cout << "Please input starting weight (in Pounds)" << endl;
    getline(cin, inString);
    imperialWeight = stod(inString);
    metricWeight = (imperialWeight / 2.205);
    buttLoadMeasurement = (metricWeight / BUTTTON_IN_KILOS);
    cout << "Enter unit of desired measurment: " << endl;
    struct finalUnit final = buttTonMenu();
    expon = final.value;
    unit = final.unit;
    fuckTonWeight = pow(buttLoadMeasurement, expon);

    cout << "The final weight is: " << fuckTonWeight << " " << unit << endl;
    return 0;
}

struct finalUnit buttTonMenu()
{
    struct finalUnit final;
    string temp;
    double tempInt;
    int switchInt;
    cout << "1: Butt Tons" << endl;
    cout << "2: Assloads" << endl;
    cout << "3: Asstons" << endl;
    cout << "4: Shitloads" << endl;
    cout << "5: Shittons" << endl;
    cout << "6: Fuckloads" << endl;
    cout << "7: Fucktons" << endl;

    getline(cin, temp);
    tempInt = stod(temp);
    switchInt = stoi(temp);

    switch (switchInt)
    {
    case 1:

        final.unit = "Butt Tons";
        final.value = tempInt;
        return final;
        break;
    case 2:
        final.unit = "Assloads";
        final.value = tempInt;
        return final;
        break;

    case 3:
        final.unit = "Asstons";
        final.value = tempInt;
        return final;
        break;

    case 4:
        final.unit = "Shitloads";
        final.value = tempInt;
        return final;
        break;

    case 5:
        final.unit = "Shittons";
        final.value = tempInt;
        return final;
        break;

    case 6:
        final.unit = "Fuckloads";
        final.value = tempInt;
        return final;
        break;

    case 7:
        final.unit = "Fucktons";
        final.value = tempInt;
        return final;
        break;
    default:
        break;
    }
}