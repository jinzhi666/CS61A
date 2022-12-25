#include <cstdio>
#include <iostream>

using namespace std;

int main() {
    int i = 0;
    printf("%d %d %d %d %d %d\n", ++i, ++i, ++i, i++, ++i, i++);
    return 0;
}