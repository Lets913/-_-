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

void testCarSelection() {
    // Тестирование функции maxCars()

    // Тест 1: Достаточно средств для покупки двух автомобилей
    {
        int N = 5;
        int S = 30;
        std::vector<int> A = { 10, 20, 30, 40, 50 };
        std::pair<int, std::vector<int>> result = maxCars(N, S, A);
        assert(result.first == 2);
        assert(std::equal(result.second.begin(), result.second.end(), std::vector<int>{ 1, 2 }.begin()));
    }

    // Тест 2: Достаточно средств для покупки одного автомобиля
    {
        int N = 5;
        int S = 20;
        std::vector<int> A = { 10, 20, 30, 40, 50 };
        std::pair<int, std::vector<int>> result = maxCars(N, S, A);
        assert(result.first == 1);
        assert(std::equal(result.second.begin(), result.second.end(), std::vector<int>{ 1 }.begin()));
    }

    // Тест 3: Недостаточно средств для покупки автомобилей
    {
        int N = 5;
        int S = 5;
        std::vector<int> A = { 10, 20, 30, 40, 50 };
        std::pair<int, std::vector<int>> result = maxCars(N, S, A);
        assert(result.first == 0);
        assert(result.second.empty());
    }

    // Тест 4: Достаточно средств для покупки всех автомобилей
    {
        int N = 5;
        int S = 150;
        std::vector<int> A = { 10, 20, 30, 40, 50 };
        std::pair<int, std::vector<int>> result = maxCars(N, S, A);
        assert(result.first == 5);
        assert(std::equal(result.second.begin(), result.second.end(), std::vector<int>{ 1, 2, 3, 4, 5 }.begin()));
    }
}