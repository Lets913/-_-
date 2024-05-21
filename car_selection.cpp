#include <algorithm>
#include <cassert>
#include <iostream>
#include <vector>

struct Car {
    int cost;
    int index;
};

bool compareCars(const Car& a, const Car& b) {
    return a.cost < b.cost;
}

std::pair<int, std::vector<int>> maxCars(int N, int S, const std::vector<int>& A) {
    std::vector<Car> cars;
    for (int i = 0; i < N; ++i) {
        cars.push_back({ A[i], i + 1 });
    }

    std::sort(cars.begin(), cars.end(), compareCars);

    int total_cost = 0;
    int car_count = 0;
    std::vector<int> selected_cars;

    for (const auto& car : cars) {
        if (total_cost + car.cost <= S) {
            total_cost += car.cost;
            car_count++;
            selected_cars.push_back(car.index);
        }
        else {
            break;
        }
    }

    return { car_count, selected_cars };
}

