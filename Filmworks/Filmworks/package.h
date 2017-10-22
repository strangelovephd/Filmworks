#pragma once

namespace filmworks {


	//********************************************************
	// Constant price variables.  Change and recompile to
	// to update program/price list.
	// Package prices:
	const double TBD = 0.00f;
	const double PRICE_A = TBD;
	const double PRICE_B = TBD;
	const double PRICE_C = TBD;
	const double PRICE_D = TBD;
	const double PRICE_E = TBD;
	// A la carte prices:
	const double PRICE_EIGHTBYTEN = TBD;
	const double PRICE_FIVEBYSEVEN = TBD;
	const double PRICE_FOURBYSIX = TBD;
	const double PRICE_WALLET = TBD;

	//********************************************************
	// The package class serves as the base class for each 
	// derived package class
	//********************************************************

	class package {
		const double price = TBD;
	public:
		//*Constructor
		package(double price_in = TBD)
			: price(price_in) {};
		virtual double m_get_price() { return price; }
	};

	//********************************************************
	// For each derived class, the constructor just passes
	// constant info into the base "package" class constructor
	//********************************************************

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

	class a_la_carte : public package {

	public:
		a_la_carte() : package(TBD) {};
	};

	class eight_by_ten : public package {

	public:
		eight_by_ten() : package(PRICE_EIGHTBYTEN) {};
	};

}