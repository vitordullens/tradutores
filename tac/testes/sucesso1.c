int x;
int y;
int z;
int main() {
    int x;
    x= x || x;
    {
        int x;
        x = x || x;
    }
    x = x || x;
}