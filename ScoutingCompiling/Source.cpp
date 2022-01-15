#include <string.h>
#include <iostream>
#include <fstream>


using namespace std;
//pulls current string section
string pull();

//main function
void main() {
    //main var declarations
    string testString;
    string pullOutput;
    //test string pre file input, to test sort
    testString = "s=hh;e=2022flwp;l=sf;m=98;r=b2;t=2170;as=[23];at=N;au=5;al=3;ac=N;tu=3;tl=2;tm=5;tn=2;wd=N;cl=t;ss=;c=3;be=N;cn=0;ds=x;dr=x;d=N;to=N;cf=N;co=ok i guess";

    
    pullOutput = pull();

}

    string pull(string testString) {
        int location;
        string output;
        string empty = " ";
        location = testString.find(";");
        for (int i = 0; i <= location; i++) {
            string temp = "";
            temp = testString[i];
            output = output + temp;
            testString.replace(i, 1, empty);

        }
        return output;
}