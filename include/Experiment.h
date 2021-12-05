// Copyright 2021 wm8

#ifndef TEMPLATE_EXPERIMENT_H
#define TEMPLATE_EXPERIMENT_H
#include <chrono>
#include <ostream>
#include <sstream>
#include "ExperimentType.h"
#include "header.hpp"
class Experiment
{
 public:
    int id;
    int64_t size;
    int time;
    ExperimentType type;
    Experiment(int id, ExperimentType type, int64_t size);
    char* initArray();
    double run();
    void _forward(char* arr, char& k);
    void reverse(char* arr, char& k);
    void random(char* arr, char& k);
    void print(std::ostream& os);
};

#endif  // TEMPLATE_EXPERIMENT_H
