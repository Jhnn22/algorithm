#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string str;
	while (true) {
		getline(cin, str);
		if (str == ".") break;

		stack<char> s;
		bool flag = true;
		for (const char& ch : str) {
			if (ch == '(' || ch == '[') {
				s.push(ch);
			}
			else if (ch == ')' || ch == ']') {
				if (s.empty()) {
					flag = false;
					break;
				}
				if ((s.top() == '(' && ch == ')') ||( s.top() == '[' && ch == ']')) {
					s.pop();
				}
				else {
					flag = false;
					break;
				}
			}
		}
		if (!s.empty()) flag = false;
		cout << (flag ? "yes" : "no") << '\n';
	}
	

	return 0;
}