#include <iostream>
#include<cstdlib>
using namespace std;
int main() {
    for(int i=1;i<=100;i++){
        system("./data");
        system("./d");
        system("./d_1");
        if(system("diff test1.out test2.out")){
            cout<<"Wrong on test#:"<<i<<endl;break;
        }
        else cout<<"Test#"<<i<<": No problem!"<<endl;
    }

    return 0;
}

