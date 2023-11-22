#ifndef Rap0249.h
#define Rap0249.h

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int NUM_TESTS = 5;

enum MenuChoice {Add = 1, Remove, Display, Search, Results, Quit};

struct Student {
    string name;
    int studentID;
    int numTests;
    int* testScores;
    double average;
};

int getNumber();
int findMinimum(const int* scores, int size);
void add_Student();
void remove_Student(int studentID);
void display();
void search(int studentID);
void exportResults();

#endif
