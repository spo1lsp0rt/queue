// Ниже представлен код с использованием готовой библиотеки очереди <queue>
//

#include <iostream>
#include <queue>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "Введите размер очереди: ";
	int n;
	cin >> n;
	queue <int> q;
	cout << "Введите необходимые элементы очереди." << endl;
	for (int i = 0; i < n; i++) {
		cout << endl << i << "й элемент: ";
		int a;
		cin >> a;

		q.push(a);
	}
	cout << "Сверим размер: " << q.size() << " = " << n << endl;
	
	cout << "Первый элемент очереди: " << q.front() << endl;
	cout << "Последний элемент очереди: " << q.back() << endl;

	q.pop();
	cout << "Удаление элемента. Первый элемент очереди: " << q.front() << endl;
	cout << "Очередь пуста? Ответ: " << q.empty() << endl;
	for (int i = q.size(); i > 0; i--) {
		q.pop();
	}
	cout << "Очистка очереди. Очередь пуста? Ответ: " << q.empty() << endl;
	
	return 0;
}