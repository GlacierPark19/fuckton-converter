#pragma once
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
const double BUTTTON_IN_KILOS = 1763;
bool exitProgram = false;
int mtf();

int itf();

int fti();

int ftm();
void runProgram();
void drawMenu();
struct finalUnit buttTonMenu();
void menuSelect();

struct finalUnit
{
    string unit;
    double value;
};