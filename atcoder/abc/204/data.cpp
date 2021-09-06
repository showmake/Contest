#include <iostream>
#include<cstdlib>
#include<ctime>
int main() {
    freopen("test.in","w",stdout);
    srand(time(0));

    std::cout << rand()%30000 <<' '<<rand()%30000<< std::endl;
    return 0;
}


