#include <iostream>
#include <stack>

int main(){
	int n = 0;
	char c;
	std::stack<char> stek;
	while (std::cin >> c){
		if ((c == '(') or (c == '{') or (c == '<') or (c == '[')){
			stek.push(c);	
		}
		if (((c == ')') or (c == '}') or (c == '>') or (c == ']')) and (stek.size() == 0)){
			n = -1;
		} else {
			if ((c == ')') and (stek.top() == '(')){
			stek.pop();
		}
			if ((c == '}') and (stek.top() == '{')){
			stek.pop();
		}
			if ((c == '>') and (stek.top() == '<')){
			stek.pop();
		}
			if ((c == ']') and (stek.top() == '[')){
			stek.pop();
		}
		}	
	}
	if ((stek.size() == 0) and (n == 0))
		std::cout << "yes";
	else
		std::cout << "no";
}
