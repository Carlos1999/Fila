#ifndef FILA_H
#ifndef FILA_H

template <typename T> 
class Fila{

private:
	T * m_elementos;
	int m_tamanho;
	int m_capacidade;

public:	

	Fila(int capacidade_);
	~Fila();
	bool empty();
	bool full();
	T* first();
	int push (T* novo_);
	int pop();
	int size();


};

template <typename T>
Fila<T>::Fila(int capacidade_):
	m_tamanho(0),m_capacidade(capacidade_){
		m_elementos = new T[capacidade_];

}
template <typename T>
Fila<T>::~Fila(){
	delete [] m_elementos;
}

template <typename T>

bool Fila<T>::empty (){
	return m_tamanho == 0;
}

template <typename T>
bool Fila<T>::full ()
{
	return m_tamanho == m_capacidade;
}

template <typename T>
T& Fila<T>::first (){
	if (empty()) {

	std::cerr << "Fila vazia" << std::endl;
	}
	return m_elementos [0];
}

template <typename T>
int Fila<T>::push (T* novo_){
	if(full()){
		return 0;
	}
	m_elementos[m_tamanho++] = novo;
}

template <typename T>
int Fila<T>::pop (T* novo_){
	if(empty()){
		return 0;
	}
	
	for (int i = 0; i < m_tamanho-1; ++i){
		m_elementos[i]=m_elementos[i+1];
	}
	m_tamanho--;
}

template <typename T>
int Fila<T>::size(){
	return m_tamanho;
}
#endif