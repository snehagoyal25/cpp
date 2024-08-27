// Write C++ program to find the largest element of a given array of integers.

#include<iostream>
using namespace std;
int amin(){
    int nums[]={5,78,23,45,90};
    int n = sizeof(nums) / sizeof(nums[0]); // Determining the number of elements in the array
cout << "Original array:"; // Output message indicating the original array is being displayed
  for (int i=0; i < n; i++) // Loop to display each element of the array
    cout << nums[i] <<" "; 
    return 0;
}