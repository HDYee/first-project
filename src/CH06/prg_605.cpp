#include <iostream>

using namespace std;

void first();
void second();

int main(int argc, char *argv[])
{
    cout<<"I am starting in function main.\n";
    first();
    second();
    cout<<"Back in fuction main again.\n";    
    return 0;
}

void first(){
    cout<<"I am now inside the function first.\n";
}

void second(){
    cout<<"I am now inside the function second.\n";
}