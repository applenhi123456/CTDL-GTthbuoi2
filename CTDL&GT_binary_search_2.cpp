//link tham khảo:https://vnoi.info/wiki/algo/basic/binary-search.md
// hàm kiểm tra P
 bool check(int capacity, const vector<int>& weights, int days) {
    int current_weight = 0; --days;
    for(int i = 0; i < weights.size(); ++i) {
        if (current_weight + weights[i] <= capacity)
            current_weight += weights[i];
        else {
            --days;
            current_weight = weights[i];
        }
    }
    return days >= 0;
}

// hàm tìm kiếm nhị phân
int shipWithinDays(const vector<int>& weights, int days) {
    int lo = 0, hi = 0;
    for (int i = 0; i < weights.size(); ++i) {
        lo = max(lo, weights[i]);
        hi += weights[i];
    }

    while (lo < hi) {
        int mid = lo + (hi - lo)/2;
        if (check(mid, weights, days))
            hi = mid;
        else
            lo = mid + 1;
    }

    return lo;
}
