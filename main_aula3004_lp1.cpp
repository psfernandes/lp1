#include <iostream>
#include <stack>
#include <string>

/*template<typename T> //Dessa forma T é o tipo da variável
void print(T n) {
	std::cout << n << std::endl;
} //Ao invés de ficar aqui tem que ser no .h

template<typename Return, typename T, typename T2>
T soma(T a, T2 b) {
	return a + b;
}

int main()
{
	int a = 0;
	float b = 1.0f;
	long c = 20;
	short d = 30;
	std::string e = "LP1";

	soma<int, int, int>(1, 2);
	soma<float, float, float>(1.0f, 2.0f);
	soma<float>(1, 2.0f);

	print(a);
	print(b);
	print(c);
	print(d);
	print(e);

	//Criar uma função para imprimir

	return 0;
}*/

/*template<typename MeuTipo>
MeuTipo* create_array(int n) {
	return new MeuTipo[n];
}

struct Pessoa {};

int main()
{
	int qtde_elementos 	= 10000;

	int* numeros 		= create_array<int>(qtde_elementos);
	float* numeros2		= create_array<float>(qtde_elementos);
	Pessoa* pessoas		= create_array<Pessoa>(qtde_elementos);

	delete[] numeros;
	delete[] numeros2;
	delete[] pessoas;
	return 0;
}*/

//Ordenação de um tipo T de dado
/*template<typename T>
void sort(T* array, int n) {
	for (int i = 0; i < n; i++){
		for (int j = i + 1; j < n; j++){
			T primeiro_numero = array[i];
			T segundo_numero  = array[j];

			if(primeiro_numero > segundo_numero) {
				array[i] = segundo_numero;
				array[j] = primeiro_numero;
			} 
		}
	}
}*/

/*template<typename InfoType>
struct Node {
	InfoType info;
	Node* next;
	Node() : next(nullptr)
	{}
};

int main()
{
	Node<float> head;
	head.info = 10.0f;

	Node<float> tail;
	tail.info = 20.0f;

	head.next = &tail;

	//print()
	Node<float>* current = &head;
	while(current != nullptr){
		std::cout << current->info << std::endl;
		current = current->next;
	}

	return 0;
}*/

struct Printer
{
	template<typename T>
	void print(T v) {
		std::cout << v << std::endl;
	}
};

int main()
{
	Printer p;
	p.print(10);
	p.print("LP1");

	return 0;
}