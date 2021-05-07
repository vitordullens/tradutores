int main() {
    int a;
    for(a = 0; a < 5; a = a + 1) {
        write(a);
        if(a == 4) write('\n');
        else write('-');
    }
}


// expr1
// loop_label:
//     expr2
//     brz exit_for
//     stmts
//     expr3
//     jump loop_label
// exit_for

