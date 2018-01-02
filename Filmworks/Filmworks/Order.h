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
#include <Windows.h>
#include "Package.h"


//******************************************************************************
//	Constant tax variable.  Change and recompile in order
//	to update tax percentage.
const double TAX = 0.0725;
//******************************************************************************

namespace filmworks {


	//***************************************************************************
	class Order {
	private:
      _SYSTEMTIME m_order_time;
		std::vector<package> m_itemized_list;

	public:
      //************************************************************************
      // Constructor
      Order();

		//*Methods

		//************************************************************************
		//	Returns sub total
      double get_sub();

		//************************************************************************
		//	Returns sub total * tax rate
		double get_total() {
			return get_sub() + get_tax();
		}

      //************************************************************************
      // Returns tax amount
      double get_tax() {
         return get_sub() * TAX;
      }

      //************************************************************************
      // Returns num of items
      inline int get_num_items() {
         return m_itemized_list.size();
      }


      //************************************************************************
      // Adds a package to the m_itemized_list vector
      void add_to_list(int package);
	};
}