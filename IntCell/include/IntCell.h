#ifndef _INTCELL_H_
#define _INTCELL_H_

class IntCell{

	private:
		int m_val;

	public:
		void write(int _newVal);
		int get() const;
		//IntCell();
		explicit IntCell(int val = 1);
		IntCell operator+ (const IntCell& _rhs);
		bool operator== (const IntCell& _rhs);
};

#endif
