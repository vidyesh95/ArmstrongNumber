#include <iostream>

int main() {
    char ans = 'n';
    do {
        int num, mod, sum = 0, temp, stonum;
        std::cout << "Enter the Number : ";
        std::cin >> num;
        stonum = num;
        temp = num;
        while (num > 0) {
            mod = num % 10;
            sum = sum + (mod * mod * mod);
            num = num / 10;
        }
        if (temp == sum) {
            std::cout << stonum << " is an armstrong number." << std::endl;
        } else {
            std::cout << stonum << " is not armstrong number." << std::endl;
        }
        std::cout << "Do you want to continue ? (y/n) ";
        std::cin >> ans;
    } while (ans == 'y'|ans =='Y');
    return 0;
}
