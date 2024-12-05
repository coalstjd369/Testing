#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // 시드 초기화
    int target = std::rand() % 100 + 1; // 1부터 100 사이의 랜덤 숫자 생성
    int guess = 0;
    int attempts = 0;

    std::cout << "1부터 100 사이의 숫자를 맞춰보세요!" << std::endl;

    while (guess != target) {
        std::cout << "숫자를 입력하세요: ";
        std::cin >> guess;
        attempts++;

        if (guess < target) {
            std::cout << "더 큰 숫자입니다." << std::endl;
        } else if (guess > target) {
            std::cout << "더 작은 숫자입니다." << std::endl;
        } else {
            std::cout << "정답입니다! 시도 횟수: " << attempts << std::endl;
        }
    }

    return 0;
}
