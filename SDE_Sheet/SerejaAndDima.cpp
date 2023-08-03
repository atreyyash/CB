// CodeForce 381A

#include<iostream>
#include<vector>
using namespace std;

void gameWinner(vector<int> &nums, int n){
    int i = 0, j = nums.size() - 1;
    int flag = 0, max = 0;
    int serejaSum = 0, dimaSum = 0;
    while(i <= j){
        if(nums[i] >= nums[j]){
            max = nums[i];
            i++;
        }
        else {
            max = nums[j];
            j--;
        }

        if(flag % 2 == 0){
            serejaSum+=max;
        }
        else{
            dimaSum+=max;
        }
        flag++;
    }
    cout << serejaSum << " " << dimaSum << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }

    gameWinner(nums, n);

    return 0;
}

// Solution - 1
// // cout << nums[i] << " " << nums[j] << endl;
// if (flag == 0)
// { // Sereja Turn
//     cout << "Sereja Turn ";
//     if (nums[i] > nums[j])
//     {
//         serejaSum += nums[i];
//         nums.erase(nums.begin());
//         i++;
//     }
//     else
//     {
//         serejaSum += nums[j];
//         nums.pop_back();
//         j--;
//     }
//     cout << serejaSum << endl;
// }
// else if (flag == 1)
// { // Dima Turn
//     cout << "Dima Turn ";
//     if (nums[i] > nums[j])
//     {
//         dimaSum += nums[i];
//         nums.erase(nums.begin());
//         i++;
//     }
//     else
//     {
//         dimaSum += nums[j];
//         nums.pop_back();
//         j--;
//     }
//     cout << dimaSum << endl;
// }
// // cout << nums[i] << " " << nums[j] << endl;
// flag = flag == 0 ? 1 : 0;
// cout << flag << "i: " << i << "j: " << j << endl;
// }

// cout << serejaSum << " " << dimaSum << endl;