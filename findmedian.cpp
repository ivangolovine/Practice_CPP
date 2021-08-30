#include <iostream>
#include <string.h>
#include <iomanip> 
#include <vector>
#include <algorithm>
using namespace std;
int findMedian(vector<int> arr);

int main(){
    //vector <int> vect;
   // vect.push_back(1);
    //std::vector<int> v = {1, 2, 3, 4};
    static const int arr[] = {0,1,2,4,6,5,3};
    //0 1 2 4 6 5 3
    vector<int> vec (arr, arr + sizeof(arr) / sizeof(arr[0]) );
    cout << findMedian(vec) << endl;
}

int findMedian(vector<int> arr) {
    int s = arr.size();
    sort (arr.begin(), arr.end());
    if (s % 2 != 0){
        return arr.at(s/2);
    }
    return (arr.at((s-1)/2) + arr.at(s/2))/2;
}

