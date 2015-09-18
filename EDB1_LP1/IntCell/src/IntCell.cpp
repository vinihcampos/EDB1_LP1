#include <iostream>
#include "IntCell.h"

/*IntCell::IntCell(){
	m_val = -1;
}*/

IntCell::IntCell(int val){
	m_val = val;
}

void IntCell::write(int _newVal){
	m_val = _newVal;
}

int IntCell::get() const{
	return m_val;
}

IntCell IntCell::operator+(const IntCell & _rhs){
	IntCell resultado;
	resultado.m_val = m_val + _rhs.m_val;

	//IntCell resultado(m_val + _rhs.m_val);

	return resultado;
}

bool IntCell::operator== (const IntCell& _rhs){
	return m_val == _rhs.m_val;
}

