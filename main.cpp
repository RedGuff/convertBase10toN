#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

string convertBase10toN(unsigned long long int dec, long unsigned int toBase, bool aSupA = false) { // https://github.com/RedGuff/convertBase10toN/blob/main/main.cpp
    vector<string> basede;
    if (aSupA) {
        basede = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};  // https://www.dcode.fr/conversion-base-n

    } else {
        basede = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" }; // https://wims.univ-cotedazur.fr/wims/wims.cgi
    }

    if (toBase>basede.size()) { // ?
        cerr << "The base to convert must be <= " << basede.size() << "." << endl; // ?
        return "!ERR!";
    } else {
        string result = "";
        while (dec!=0) {
            result = basede[dec%toBase]+result;

            dec = (dec/toBase);
        }
        return result;
    }
}

int main() {
 bool aInfA = true;
    if (aInfA){
cout << "a < A" << endl;
}
else
{
cout << "A < a" << endl;
}
    cout << convertBase10toN(16, 39, aInfA) << endl;
    return 0;
}
