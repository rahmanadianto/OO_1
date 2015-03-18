/* Author : Rahman Adianto */
/* NIM 		: 13513006 */

#include "Ekspresi.h"

Ekspresi::Ekspresi() : id(Setting::POSTFIX) {
	ekspresi = "";
}

Ekspresi::Ekspresi(std::string eks, int mode) : id(mode) {
	ekspresi = eks;
}

Ekspresi::~Ekspresi() {}

std::string Ekspresi::getEkspresi(){
	return ekspresi;
}

int Ekspresi::getInitialId(){
	return id;
}

void Ekspresi::setEkspresi(std::string eks){
	ekspresi = eks;
}

void Ekspresi::PrefixToPostfix(){
	stack<std::string> OpStack, RiversingStack;
	std::string word_temp, operan1, operan2, oprt;
	std::stringstream stream(ekspresi);
	while (stream >> word_temp)
		RiversingStack.push(word_temp);

	while (!RiversingStack.empty()){
		if (isOperan(RiversingStack.top())){
			OpStack.push(RiversingStack.top() + " ");
			RiversingStack.pop();
		}
		else{
			if (RiversingStack.top() != "~"){
				operan1 = OpStack.top();
				OpStack.pop();
				operan2 = OpStack.top();
				OpStack.pop();
				oprt = RiversingStack.top();
				RiversingStack.pop();
				OpStack.push(operan1 + operan2 + oprt + " ");
			}
			else {
				operan1 = OpStack.top();
				OpStack.pop();
				oprt = RiversingStack.top();
				RiversingStack.pop();
				OpStack.push(operan1 + oprt + " ");
			}
		}
	}
	ekspresi = OpStack.top();
	OpStack.pop();
}

void Ekspresi::InfixToPostfix(){
	/* Shunting Yard Algorithm */
	stack<std::string> OpStack;
	std::string PostFix = "", word_temp;
	std::stringstream stream(ekspresi);

	while(stream >> word_temp){
		if (isOperan(word_temp)){
			PostFix += word_temp;
			PostFix += " ";
		}
		if (isOperator(word_temp)){
			while(!OpStack.empty() && OpStack.top() != "(" && higherPrecedence(OpStack.top(), word_temp)){
				PostFix += OpStack.top();
				PostFix += " ";
				OpStack.pop();
			}
			OpStack.push(word_temp);
		}
		if (word_temp == "(")
			OpStack.push(word_temp);
		if (word_temp == ")"){
			while(!OpStack.empty() && OpStack.top() != "("){
				PostFix += OpStack.top();
				PostFix += " ";
				OpStack.pop();
			}
			OpStack.pop();
		}
	}

	while(!OpStack.empty()) {
		PostFix += OpStack.top();
		PostFix += " ";
		OpStack.pop();
	}
	
	ekspresi = PostFix;
}