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
	NPC() { cout << "�⺻ ������" << endl; }
	NPC(int _NpcCode, string _Name) { cout << "���� ������" << endl; }
	NPC(NPC& other) { cout << "���� ������" << endl; }
	NPC& operator = (const NPC& npc) { cout << "����" << endl; ; return *this; }

	NPC(NPC&& other) { cout << "Move ������" << endl; }
	NPC& operator = (const NPC&& npc)
	{
		cout << "Move ����" << endl;
		return *this;
	}
	template<typename T>
	NPC& operator = (const NPC&& npc)
	{
		cout << "Move ����" << endl;
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

