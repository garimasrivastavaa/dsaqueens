using namespace std;

int minStepsToReachTargetSweetness(int target, vector<int>& candies) {
    priority_queue <int, vector<int>, greater<int> > minHeap(candies.begin(), candies.end());

    int steps = 0;
    int x=minHeap.top();
    while (minHeap.top() < target) {
        int leastSweet = minHeap.top();
        minHeap.pop();
        int secondLeastSweet = minHeap.top();
        minHeap.pop();

        int newSweetness = leastSweet + 2 * secondLeastSweet;
        x=newSweetness;
        minHeap.push(newSweetness);
        steps++;
    }

    return steps;
}

int main() {
    string t,s, a="";
    vector <int> candies;
    getline(cin,t);
    getline(cin,s);
    for(auto ch:s){
        a+=ch;
        if(ch==' '){ 
            candies.push_back(stoi(a));
            a="";
        }
    } 
    candies.push_back(stoi(a)); 
    cout<<minStepsToReachTargetSweetness(stoi(t),candies);
}
                                                                                                                            