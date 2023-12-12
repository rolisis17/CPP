#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>() {}

		class iterator {
			private:
				typename std::stack<T>::container_type::iterator it;
			
			public:
				iterator(typename std::stack<T>::container_type::iterator iter) : it(iter) {}
		
				iterator& operator++() {
					++it;
					return *this;
				}

				iterator operator++(int) {
					iterator temp = *this;
					++it;
					return temp;
				}

				iterator& operator--() {
					--it;
					return *this;
				}

				iterator operator--(int) {
					iterator temp = *this;
					--it;
					return temp;
				}

				T& operator*() {
					return *it;
				}

				bool operator==(const iterator& other) const {
					return it == other.it;
				}

				bool operator!=(const iterator& other) const {
					return it != other.it;
				}
		};

		iterator begin() {
			return iterator(this->c.begin());
		}

		iterator end() {
			return iterator(this->c.end());
		}
};

#endif