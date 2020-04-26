#include<iostream>
using namespace std;
int major = 1;





class linked{
public:
	int data = 0;
	linked* prev = nullptr;
	linked* next = nullptr;
	linked(linked * prev) :data(major++), prev(prev) {
		prev->next = this;
	}
	linked() :data(major++) { cout << "de:"<< major << endl; } // root
	
	int Counting_tail() {
		int res = 0;
		linked* tmp = this;
		while (tmp->next != nullptr) {
			res++;
			tmp = tmp->next;
		}
		return res;
	}
	linked(linked&& lin) :data(major) { cout << "move" << endl; }
};

class NPC
{
public:
	int NPCCode;
	string Name;
	NPC() { cout << "기본 생성자" << endl; }
	NPC(int _NpcCode, string _Name) { cout << "인자 생성자" << endl; }
	NPC(NPC& other) { cout << "복사 생성자" << endl; }
	NPC& operator = (const NPC& npc) { cout << "대입" << endl; ; return *this; }

	NPC(NPC&& other) { cout << "Move 생성자" << endl; }
	NPC& operator = (const NPC&& npc)
	{
		cout << "Move 대입" << endl;
		return *this;
	}
	template<typename T>
	NPC& operator = (const NPC&& npc)
	{ 
		cout << "Move 대입" << endl;
		return *this;
	}

};


int& fa(const NPC& l) {
	int p = 99;
	return p;
}
template <typename T>
void fs(T&& p) {
	cout << 'a' << endl;
}
template<typename T>
void fs(T& p) {
	cout << 'b' << endl;
}

void main() {
	linked* root = new linked();
	linked* a = new linked(root);
	linked* b = new linked(a);
	int* ptr = &fa(NPC(2,"ss")); // int * ptr = &p;

	fs(new linked());
}

