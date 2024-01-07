class Solution {
public:
    int majorityElement(vector<int>& v) {
      int n = v.size();
    int cnt = 0; // count
    int el; // Element

    //applying the algorithm:Moor voting algorithm
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = v[i];
        }
        else if (el == v[i]) cnt++;
        else cnt--;
    }
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el) cnt1++;
    }

    if (cnt1 > (n / 2)) return el;
    return -1;
}


    
};