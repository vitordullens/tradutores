set add_int(set s) {
    return add(2 in add(1 in s));
    // {1,2}
}

set add_float(set s) {
    return add(5.4 in add(1.5 in s));
}

set add_set(set s) {
    set newset;
    newset = EMPTY;
    return add(add_int(newset) in s);
    //{{1,2}}
}

int main() {
    set s;
    s = EMPTY;

    add_set(s);

    // s = {{1,2}}
    elem el;
    
    exists(el in s);
    // el is the set {1,2}
    
    add_float(s);
    // {1.5,5.4,{1,2}}

    exists(el in s);
    // el can be any of 1.5, 5.4 or {1,2}
   
    add_int(s);
    // add_int always returns {1,2} thus the set remains unchanged
    // {1.5,5.4,{1,2}}

    int acc; float accf;
    acc = 0; accf = 0;
    elem x;
    
    forall(x in s) {
        acc = acc + x; // when x is {1,2} the behaviour is undefined; this may raise an exception at runtime
    accf = accf + x;
    }

    // this fixes the above
    
    forall(x in s) {
        if (!is_set(x)) {
           acc = acc + x;
       accf = accf + x;
    }   
    }

   // acc is 6; accf is 6.9

    return 0.0;
}