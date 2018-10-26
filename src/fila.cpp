#include "fila.h"
template <typename T>
Fila<T>::Fila(int capacidade_):
	m_tamanho(0),m_capacidade(capacidade_){
		m_elementos = new T[capacidade_];

}
template <typename T>
Fila<T>::~Fila(){
	delete [] m_elementos;
}

