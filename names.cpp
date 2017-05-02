#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int charToVal(char letter) {
    int num = 0;
    switch(letter){
        case 'A':
            num = 1;
			break;
        case 'B':
            num = 2;
			break;
        case 'C':
            num = 3;
			break;
        case 'D':
            num = 4;
			break;
        case 'E':
            num = 5;
			break;
        case 'F':
            num = 6;
			break;
        case 'G':
            num = 7;
			break;
        case 'H':
            num = 8;
			break;
        case 'I':
            num = 9;
			break;
        case 'J':
            num = 10;
			break;
        case 'K':
            num = 11;
			break;
        case 'L':
            num = 12;
			break;
        case 'M':
            num = 13;
			break;
        case 'N':
            num = 14;
			break;
        case 'O':
            num = 15;
			break;
        case 'P':
            num = 16;
			break;
        case 'Q':
            num = 17;
			break;
        case 'R':
            num = 18;
			break;
        case 'S':
            num = 19; 
			break;
        case 'T':
            num = 20;
			break;
        case 'U':
            num = 21;
			break;
        case 'V':
            num = 22;
			break;
        case 'W':
            num = 23;
			break;
        case 'X':
            num = 24;
			break;
        case 'Y':
            num = 25;
			break;
        case 'Z':
            num = 26;
			break;
    }

    return num;
};

int main() {
    ifstream file;
    string word;
    string list[10000];
    int count = 0;
    file.open("names.txt");
    if (file.is_open()) {
        cout << "file is open" << endl;
        while (file) {
            getline(file, word);
            list[count] = word;
            count++;
        }
    }
    else
        cout << "file is not open" << endl;
    file.close();

    int nameScore = 0;
    for (int i = 0; i < count; i++) {
        int pos = i;
        int valueOfWord = 0;
        int sizeOfWord = list[i].size();
        for (int e = 0; e < sizeOfWord; e++) {
            valueOfWord += charToVal(list[i][e]);
        }
        nameScore += valueOfWord*pos;
    }
    
    cout << nameScore << endl;

	system ("pause");
}
