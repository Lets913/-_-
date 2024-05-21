#pragma once
#ifndef CAR_SELECTION_H
#define CAR_SELECTION_H

#include <vector>
#include <utility>

std::pair<int, std::vector<int>> maxCars(int N, int S, const std::vector<int>& A);
void testCarSelection();
#endif
