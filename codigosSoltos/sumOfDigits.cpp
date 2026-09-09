#include<iostream>
#include<cstring>

using namespace std;

int digits_sum(int iterations, int number){
    int newSum = 0;

    if(number <= 9){
        return iterations;
    }

    while(1){
        if(number % 10 == number){
            newSum += number;
            iterations++;
            return digits_sum(iterations, newSum);
        }

        newSum += (number % 10);
        number -= (number % 10);
        number = number/10;
    }
}

int main(){
    char number[100001];
    int sum = 0, iterations = 0;

    cin >> number;

    if(strlen(number) > 1){
        iterations++;
        for(int i = 0; i < strlen(number); i++)
            sum += int(number[i] - '0');
    }

    if(sum > 9)
        iterations = digits_sum(iterations, sum);

    cout << iterations;
}