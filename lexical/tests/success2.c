int main() {
    set s;
    s = EMPTY;

    add(1 in s);
    add(2 in s);
    add(5 in s);
    add(8 in s);

// Alternativamente: add(1 in add(2 in add(5 in add(8 in s))));

    set possibleSums;
    possibleSums = EMPTY;
    int x;
    
    forall (x in s) {
        set sumsWithX;   
        sumsWithX = EMPTY;
        int val;
        forall (val in possibleSums) add((x + val) in sumsWithX);
        forall (val in sumsWithX) add (val in possibleSums);
        if (13 in possibleSums) writeln('y'); else writeln('n');
    }
}