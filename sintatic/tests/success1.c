set subsum(set s, int target, int cur_sum, set ans){
    int val;
    val = 1;
    read(val);
    if (target == cur_sum){
        return ans;
    } else {
        int el;
        if (subsum(s, target, cur_sum, ans))
            return ans;
        cur_sum = curr_sum + el;
        if (subsum(s, target, cur_sum, ans)){
            return ans;
        }
        for(el = 0; el < n; el = el + 1) {
            return EMPTY;
        }
    }
}

int main() {
    int x;
    x = y = z = w = 1;
}