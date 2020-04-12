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
	// 레퍼런스 카운터가 0이 되면 해당 포인터가 삭제된다.
/*	{shared_ptr<CLASS> myA(new CLASS(1));
	shared_ptr<CLASS> myB(new CLASS(2));

	myA->m_other = myB;
	myB->m_other = myA;
	cout << myA.use_count() << endl << endl; // myB가 myA를 참조하면 myA의 레퍼런스 카운터도 1 증가한다.
	myA.reset(); // reset()는 해당객체(myA)의 카운터를 그대로 0으로 만들지만, myB의 레퍼런스 카운터는 2 다. (m_other=myA)를 했기 때문.

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


	myA.reset(); // waek_ptr은 레퍼런스 카운터를 증가시키지 않으니 myA를 삭제하면, (계속)

	cout << myA.use_count() << endl;
	cout << myB.use_count() << endl; // myA.reset()로 레퍼런스 카운터는 1이 감소한다.
	}
*/

	cout << "Shared ptr to Shared ptr" << endl;
	{shared_ptr<CLASS> myA(new CLASS(1));
	shared_ptr<CLASS> myB = myA;
	
	cout << myA.use_count() << endl;  // shared_ptr은 myA 연결될 시 레퍼런스 카운터를 증가시키니, count는 2가 된다.
	cout << myB.use_count() << endl << endl;


	myA.reset();  // reset()로 삭제 시 myA는 0이 되지만, 

	cout << myA.use_count() << endl;
	cout << myB.use_count() << endl << endl; // myB는 아직 myA를 갖고있기에 1이 남는다.
	}


	cout << "Shared ptr to weaked ptr" << endl;

	{shared_ptr<CLASS> myA(new CLASS(1));
	weak_ptr<CLASS> myB = myA; // myA의 카운터를 증가시키지 않고 자기자신만 카운팅(1)

	cout << myA.use_count() << endl;  // waek_ptr은 레퍼런스 카운터를 증가시키지 않으니 myA의 그대로 카운트는 1이다.
	cout << myB.use_count() << endl << endl; 


	myA.reset(); // waek_ptr은 레퍼런스 카운터를 증가시키지 않으니 myA를 삭제하면, (계속)

	cout << myA.use_count() << endl;
	cout << myB.use_count() << endl << endl; // myB도 삭제된다.
	}




	
	shared_ptr<CLASS> sptr(new CLASS);
	shared_ptr<CLASS> sptr2(sptr);

	cout << sptr.use_count() << endl;
	sptr2.reset();
	

	
	cout << sptr2.use_count() << endl;


	weak_ptr<CLASS> uptr = sptr;
//	shared_ptr<CLASS> sptr3 = uptr.lock(); // lock()로 shared_ptr을 받을 수 있음. 


	cout << sptr.use_count() << endl;


	//uptrVec.push_back(move(uptr));
	

}
