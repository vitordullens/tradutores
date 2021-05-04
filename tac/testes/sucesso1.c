int x;
int main() {
    write("TESTE");
    writeln("TESTE2");
    int y;
    x= x || x;
    {
        int x;
        y = (x || x) || (y || y);
    }
    x = x || x;
}