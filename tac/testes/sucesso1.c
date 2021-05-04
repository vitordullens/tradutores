int x;
int main() {
    int y;
    x= x || x;
    {
        int x;
        y = (x || x) || (y || y);
    }
    x = x || x;
}