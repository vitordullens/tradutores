int main() {
    int a;
    a = 1;
    if(a == 1) {
      a = (1 + 2) * 7;
      int i;
      writeln(a);
      for(i = 10; i >= 0; i = i - 1) write("loop");
      write("\n");
      a = 7;
    } 
    else {
      a = (2 || 3);
      writeln(a);
      int i;
      for(i =0; i<= 10; i = i + 1) write("pool");
      write("\n");
      a = a > 2;
    }

    if(a == 0) {
      writeln("if");
    } else if(a != 0) {
      writeln("else if");
    } else writeln("else");

    writeln(a);
    return 1;
}