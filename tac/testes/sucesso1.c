int x;
int main() {
    writeln("TESTE2");
    float y;
    x = (1.2 + 1) * 5 + (7.2 + 2) + 1;
    writeln(x);
    {
        y = (x || x) || (y || y);
    }
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