#include<iostream>
using namespace std;
void count( char s[], int counts[]) {
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
	}
	int i = 0;
	while (s[i] != '\0') {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] = s[i] - 'A' + 'a';
		}
		if (s[i] >= 'a' && s[i] <= 'z') {
			counts[s[i] - 'a']++;
		}
		i++;
	}
}
int main() {
    const int SIZE = 26;
    int counts[SIZE]; 
    for (int i = 0; i < SIZE; i++) {
        counts[i] = 0;
    }
    char s[100];
    std::cout << "ÇëÊäÈëÒ»¸ö×Ö·û´®£º";
    std::cin.getline(s, 100);
    count(s, counts);
    for (int i = 0; i < SIZE; i++) {
        if (counts[i] != 0) {
            std::cout << static_cast<char>('a' + i) << ": " << counts[i] << std::endl;
        }
    }
    return 0;
}