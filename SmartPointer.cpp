#include<iostream>
#include<memory>
using namespace std;

class CLASS {
public:
	shared_ptr<CLASS> m_other;
	int x;
	CLASS() :x(10) {}
	CLASS(int x) :x(x) {}

};


int main() {
	// ���۷��� ī���Ͱ� 0�� �Ǹ� �ش� �����Ͱ� �����ȴ�.
/*	{shared_ptr<CLASS> myA(new CLASS(1));
	shared_ptr<CLASS> myB(new CLASS(2));

	myA->m_other = myB;
	myB->m_other = myA;
	cout << myA.use_count() << endl << endl; // myB�� myA�� �����ϸ� myA�� ���۷��� ī���͵� 1 �����Ѵ�.
	myA.reset(); // reset()�� �ش簴ü(myA)�� ī���͸� �״�� 0���� ��������, myB�� ���۷��� ī���ʹ� 2 ��. (m_other=myA)�� �߱� ����.

	cout << myA.use_count() << endl;
	cout << myB.use_count() << endl;
	}

	cout << "mmmmmmmmmmmmmmmmmmmm" << endl;


	{shared_ptr<CLASS> myA(new CLASS(1));
	weak_ptr<CLASS> myB = myA;

	myA->m_other = myB.lock();
	myB.lock()->m_other = myA;


	cout << myA.use_count() << endl;
	cout << myB.use_count() << endl << endl;


	myA.reset(); // waek_ptr�� ���۷��� ī���͸� ������Ű�� ������ myA�� �����ϸ�, (���)

	cout << myA.use_count() << endl;
	cout << myB.use_count() << endl; // myA.reset()�� ���۷��� ī���ʹ� 1�� �����Ѵ�.
	}
*/

	cout << "Shared ptr to Shared ptr" << endl;
	{shared_ptr<CLASS> myA(new CLASS(1));
	shared_ptr<CLASS> myB = myA;
	
	cout << myA.use_count() << endl;  // shared_ptr�� myB�� ����� �� (�� �� ������ �޾�) ���۷��� ī���͸� ������Ű��, count�� 2�� �ȴ�.
	cout << myB.use_count() << endl << endl; // �� myB ��ü(1) + myA��(1)�� ī���͸� �������� ī���� ���� 2�� �ȴ�. 


	myA.reset();  // reset()�� ���� �� myA�� 0�� ������, 

	cout << myA.use_count() << endl;
	cout << myB.use_count() << endl << endl; // myB�� ���� �ڽ� (myB=myA)�� ���� �ֱ⿡ 1�� ���´�.
	}


	cout << "Shared ptr to weaked ptr" << endl;
	// weak_ptr�� new�� �� �� ����.(���Կ����θ� ��)
	{shared_ptr<CLASS> myA(new CLASS(1));
	weak_ptr<CLASS> myB = myA; // �� myA�� ī���͸� ������Ű�� �ʰ� myB ��ü�� ī����(1)

	cout << myA.use_count() << endl;  // waek_ptr�� ���۷��� ī���͸� ������Ű�� ������ myA�� �״�� ī��Ʈ 1�̴�.
	cout << myB.use_count() << endl << endl; 


	myA.reset(); //  myA�� �����ϰ�,  myB�� myA�� ����Ű�� �� ���ķ� -1(with myA)�� �Ǽ� 0�� �ȴ�.

	cout << myA.use_count() << endl;
	cout << myB.use_count() << endl << endl; // myB�� �����ȴ�.(0)
	}




	
	shared_ptr<CLASS> sptr(new CLASS);
	shared_ptr<CLASS> sptr2(sptr);

	cout << sptr.use_count() << endl;
	sptr2.reset();
	

	
	cout << sptr2.use_count() << endl;


	weak_ptr<CLASS> uptr = sptr;
//	shared_ptr<CLASS> sptr3 = uptr.lock(); // lock()�� shared_ptr�� ���� �� ����. 


	cout << sptr.use_count() << endl;



}
