// Copyright 2020 ykvopich <Kravchenko_vlad2001@bk.ru>

#ifndef INCLUDE_HEADER_HPP_
#define INCLUDE_HEADER_HPP_

#define UNSINT unsigned int

#include <algorithm>
#include <chrono>
#include <cmath>
#include <iostream>
#include <ostream>
#include <random>
#include <sstream>
#include <vector>

using std::cout;
using std::pow;
using std::cout;
using std::ostream;
using std::stringstream;
using std::endl;
using std::string;
using std::vector;

void StraightExperiment(const vector<UNSINT>& buffer, ostream& ss);
void BackExperiment(const vector<UNSINT>& buffer, ostream& ss);
void RandomExperiment(const vector<UNSINT>& buffer, ostream& ss);
void Print(const vector<UNSINT>& buffer);
vector<unsigned> GeneratorVector(vector<double>& cache);
inline void Heating (int* arr, int& h, const double& buffer);

const int TestNumber = 1000;
const int StepSize = 16;
const int Conv   = 262144;
#endif // INCLUDE_HEADER_HPP_

