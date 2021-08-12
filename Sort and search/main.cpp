#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

void bubbleSort(vector<int> vec) {
    size_t len = vec.size();
    for (size_t i = 0; i < len; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (vec[j] < vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
            }
        }
    }
    for (int item:vec) {
        cout << item << " ";
    }
    cout << endl;
}

void selectSort(vector<int> vec) {
    size_t len = vec.size();
    for (size_t i = 0; i < len; i++) {
        int min_index = i;
        for (size_t j = i + 1; j < len; j++) {
            if (vec[min_index] > vec[j]) {
                min_index = j;
            }
        }
        swap(vec[min_index], vec[i]);
    }
    for (int item:vec) {
        cout << item << " ";
    }
    cout << endl;
}

void insertSort(vector<int> vec){
    size_t len=vec.size();
    for(size_t i=1;i<len;i++){
        int temp=vec[i];
        int j;
        for(j=i-1;j>=0 && vec[j]>temp;j--){
            vec[j+1]=vec[j];
        }
        vec[j+1]=temp;
    }
    for (int item:vec) {
        cout << item << " ";
    }
    cout << endl;
}

void quickSort(vector<int>&vec,int left,int right){
    int temp_left=left;
    int temp_right=right;
    int middle=vec[(left+right)/2];
    while(temp_left<=temp_right){
        while(vec[temp_left]<middle){
            temp_left++;
        }
        while(vec[temp_right]>middle){
            temp_right--;
        }
        if(temp_left<=temp_right){
            swap(vec[temp_left],vec[temp_right]);
            temp_left++;
            temp_right--;
        }
    }
    if(temp_left==temp_right){
        temp_left++;
    }
    if(temp_left<right){
        quickSort(vec,temp_right+1,right);
    }
    if(left<temp_right){
        quickSort(vec,left,temp_left-1);
    }
}

void quickSort(vector<int>&vec){
    quickSort(vec,0,vec.size()-1);
    for (int item:vec) {
        cout << item << " ";
    }
    cout << endl;
}

bool search(vector<int>vec,int target){
    int left=0;
    int right=vec.size()-1;
    while(left<=right){
        int middle_index=(left+right)/2;
        if(vec[middle_index]>target){
            right=middle_index-1;
        }else if(vec[middle_index]<target){
            left=middle_index+1;
        }else{
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> vec = {62, 60, 33, 19, 26, 14, 53, 37, 64, 60, 67, 53, 25, 48};
    bubbleSort(vec);
    selectSort(vec);
    insertSort(vec);
    quickSort(vec);
    cout<<boolalpha<<search(vec,27);
    return 0;
}
