//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int totalSum = 0;
        for (int num : arr) {
            totalSum += num;  // Calculate the total sum of the array
        }

        int leftSum = 0;
        for (int i = 0; i < arr.size(); i++) {
            totalSum -= arr[i];  // Right sum excluding current element

            if (leftSum == totalSum) {
                return i;  // Found equilibrium point (0-based index)
            }

            leftSum += arr[i];  // Update left sum for next iteration
        }

        return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.findEquilibrium(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends