int main() {
    int a;
    a = 1;
    if(a != 1) {
      a = (1 + 2) * 7;
      writeln(a);
      a = 7;
    } 
    else {
      a = (2 || 3);
      writeln(a);
      a = a > 2;
    }
    writeln(a);
    return 1;
}