//******************************************************************************
//	Written by: Wesley Hendriksen
//	Initially written on: 10/22/2017
//	Summary:
//	The order class will basically be a wrapper around an
//	itemized list in the form of an std::vector<package>.
//	To do:
//	New orders can be created for returning customers after
//	a logging, filing, and serialization scheme is created
//******************************************************************************

#pragma once
#include <vector>
#include "Package.h"

//******************************************************************************
//	Constant tax variable.  Change and recompile in order
//	to update tax percentage.
const double TAX = 1.0725;
//******************************************************************************

namespace filmworks {


	//**************************************************************************
	class Order {
	private:
		std::vector<package> m_itemized_list;
	public:

		//*Methods

		//**********************************************************************
		//	Returns sub total
		double get_sub() {
			double sub = 0.0;
			if (!m_itemized_list.empty()) {
				for (unsigned int i = 0; i < m_itemized_list.size(); ++i) {
					sub += itemized_list[i].get_price();
				}
			}
			return sub;
		} 

		//**********************************************************************
		//	Returns sub total * tax rate
		double get_total() {
			return get_sub() * TAX;
		}

		//
		void add_to_list(int package) {
			switch (package) {
			case 1: m_itemized_list.push_back(package_a);
					break;
			case 2: m_itemized_list.push_back(package_b);
					break;
			case 3: m_itemized_list.push_back(package_c);
			}
		}
	};
}