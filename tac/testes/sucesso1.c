int x;
int c() {
    x = 2;
}

int b() {
    x = 1;
}
int main() {
    writeln("TESTE2");
    float y;
    x = 0;
    y = !x;
    writeln(y);
    x = -(1.2 + 1) * 5 + (7.2 + 2) + 1;
    writeln(x);
    {
        y = (x || x) || (y || y);
    }
    return y;
}

// int f(int a, int b) {
//     return a + b;
// }

// int g(int a, int b){
//     return a * b;
// }

// int main(){
//     f(1, 2);
//     g(2, 3);
// }