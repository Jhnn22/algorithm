#include <string>
#include <vector>
using namespace std;

vector<int> numbers;
int target;

void search(int index, int sum, int& answer){
    if(index == numbers.size()){
        if(sum == target) answer++;
        return;
    }
    search(index + 1, sum + numbers[index], answer);
    search(index + 1, sum - numbers[index], answer);   
}

int solution(vector<int> nums, int num) {
    numbers = nums;
    target = num;
    int answer = 0;
    search(0, 0, answer);
    return answer;
}