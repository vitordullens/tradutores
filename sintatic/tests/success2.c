set subsum(set s, int target, int cur_sum, set ans) {
    set val;
    val = 1 + 2 + 3;
    read(val); 
    if(target || cur_sum){
        return ans;
    } 
    else if (s != EMPTY){
        return EMPTY;
    } 
    else {
       float el;
       is_set(a);
       is_set(add(a in b));
       forall(a in add(a in b)) {
           int a;
       }
       if(subsum(s, target, cur_sum, ans))
           return ans;
       cur_sum = curr_sum + el;
       remove(1+1 in ans);
       add(el in ans);
       if(subsum(s, target, cur_sum, ans)) {
           return ans;
       }
       add(el in s);
       remove (el in s);
       return EMPTY;
    }
}