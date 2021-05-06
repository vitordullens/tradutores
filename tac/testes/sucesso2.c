int main() {
    int a;
    a = 1;
    {
      a = 2;
      a = 3;
    }
    // bez $0, aq
    if(a == 1) {
      a = 1 + 2;
      a = 4;
      write(a);
      writeln(a);

      // jump fim
    } 
    else {
      a = 2;
      writeln(a);
    }
    writeln(a);
    return 1;
    // }
    // fim:
}