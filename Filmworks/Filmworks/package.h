//******************************************************************************
// Written by: Wesley Hendriksen 
// Initially written on: 10/22/2017
// Summary:
// The package class serves as a wrapper for what will 
// eventually be a vector of objects that will be used as
// an itemized order list.  Functionality will eventually
// be added to allow each class interact with other 
// aspects of the program.
//******************************************************************************

#pragma once

	//**************************************************************************
	//	Constant price variables.  Change and recompile to
	//	to update program/price list.
	//	Package prices:
	const double TBD = 0.00f;
	const double PRICE_A = TBD;
	const double PRICE_B = TBD;
	const double PRICE_C = TBD;
	const double PRICE_D = TBD;
	const double PRICE_E = TBD;
	//	A la carte prices:
	const double PRICE_EIGHTBYTEN  = TBD;
	const double PRICE_FIVEBYSEVEN = TBD;
	const double PRICE_FOURBYFIVE  = TBD;
	const double PRICE_WALLET      = TBD;
	//**************************************************************************


namespace filmworks {


	//**************************************************************************
	//	The package class serves as the base class for each 
	//	derived package class
	//**************************************************************************

	class package {
		const double m_price = TBD;
	public:
		//*Constructor
		package(double t_price = TBD)
			: price(t_price) {};
		double get_price() { return m_price; }
	};

	//**************************************************************************
	//	For each derived class, the constructor just passes
	//	constant info into the base "package" class constructor
	//**************************************************************************

	class package_a : public package {

	public:
		//*Constructor
		package_a() : package(PRICE_A) {};
	};

	class package_b : public package {

	public:
		package_b() : package(PRICE_B) {};
	};

	class package_c : public package {

	public:
		package_c() : package(PRICE_C) {};
	};

	class package_d : public package {

	public:
		package_d() : package(PRICE_D) {};
	};

	class package_e : public package {

	public:
		package_e() : package(PRICE_E) {};
	};

	//**************************************************************************
	//	Having an a la carte base class for the a la carte items
	//	didn't seem to work.  
	//	class a_la_carte : public package {

	//public:
	//	a_la_carte() : package(TBD) {};
	//};
	//**************************************************************************

	class eight_by_ten : public package {

	public:
		eight_by_ten() : package(PRICE_EIGHTBYTEN) {};
	};

	class five_by_seven : public package {

	public:
		five_by_seven() : package(PRICE_FIVEBYSEVEN) {};
	};

	class four_by_five : public package {

	public:
		four_by_five() : package(PRICE_FOURBYFIVE) {};
	};

	class wallet : public package {
		
	public:
		wallet() : package(PRICE_WALLET) {};
	};
}