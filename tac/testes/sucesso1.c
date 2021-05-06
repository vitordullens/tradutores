int x;
int main() {
    writeln("TESTE2");
    writeln('n');
    float y;
    x = 1;
    y = !(!x);
    writeln(y);
    writeln((y!=y) != y);
    x = -(1.2 + 1) * 5 + (7.2 + 2) + 2;
    writeln(x);
    {
        int x;
        x = 1;
        y = (x || x) || (y || y);
    }
    writeln(y);
    float z;
    x = 2;
    z = 2.2;
    x = z != x;
    writeln(x);
    write('-');
    write("TESTE111");
    return y;
}