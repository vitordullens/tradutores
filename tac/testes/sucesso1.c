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
    x = 1;
    y = !x;
    writeln(y);
    x = -(1.2 + 1) * 5 + (7.2 + 2) + 2;
    writeln(x);
    {
        y = (x || x) || (y || y);
    }
    writeln(y);
    float z;
    x = 2;
    z = 2.2;
    x = z > x;
    writeln(x);
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