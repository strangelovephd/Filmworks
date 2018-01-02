//******************************************************************************
//	Written by: Wesley Hendriksen
//	Initially written on: 12/18/2017
//	Summary:
//	The receipt class takes a customer's order and creates a .txt document
//	that contains the customer and order information.
//	To do:
//	Everything
//******************************************************************************

#pragma once
#include <fstream>
#include <windows.h>
#include <iomanip>
#include "Order.h"

namespace filmworks {

	class Receipt_Creator {
   private:
      std::ofstream receipt;
      _SYSTEMTIME time;

	public:
      Receipt_Creator(const char* file_name);
      ~Receipt_Creator();
      void create_header();
		void create_body(Order& curr_order);
	};

}