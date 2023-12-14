//Activity Selection

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Structure to represent an activity
struct Activity {
    int start, finish;
};

// Function to compare activities based on their finish times
bool compareActivities(const Activity& a, const Activity& b) {
    return a.finish < b.finish;
}

// Function to find the maximum number of non-overlapping activities
vector<Activity> maxActivities(vector<Activity>& arr) {
    int n = arr.size();

    // Sort activities based on finish times
    sort(arr.begin(), arr.end(), compareActivities);

    vector<Activity> selectedActivities;
    selectedActivities.push_back(arr[0]);
    int prevFinishTime = arr[0].finish;

    // Iterate through the rest of the activities
    for (int i = 1; i < n; ++i) {
        // If the start time of the current activity is greater than or equal to
        // the finish time of the previous activity, add it to the selected activities
        if (arr[i].start >= prevFinishTime) {
            selectedActivities.push_back(arr[i]);
            prevFinishTime = arr[i].finish;
        }
    }

    return selectedActivities;
}

int main() {
    // Input
    int n = 6;
    vector<int> start_times = {1, 0, 5};
    vector<int> finish_times = {3, 5, 8};
    
    // Create a vector of activities
    vector<Activity> arr;
    for (int i = 0; i < n; ++i) {
        Activity activity;
        activity.start = start_times[i];
        activity.finish = finish_times[i];
        arr.push_back(activity);
    }

    // Find the maximum number of non-overlapping activities
    vector<Activity> result = maxActivities(arr);

    // Output
    cout << "Maximum number of non-overlapping activities: " << result.size() << endl;
    cout << "Selected activities:" << endl;
    for (const Activity& activity : result) {
        cout << "(" << activity.start << ", " << activity.finish << ") ";
    }

    return 0;
}
