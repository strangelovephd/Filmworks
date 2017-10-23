//********************************************************
// Written by: Wesley Hendriksen
// Initially written on: 10/22/2017
// Summary:
// The customer is the base wrapper that everything will 
// based upon.  The customer will initially have one
// order object, but I plan to expand upon it after I
// come up with a serialization scheme.
// To do:
// Serialization
//********************************************************

#pragma once
#include "Order.h"
#include <string>

namespace filmworks {
	
	class Customer {
		std::string m_name;
		std::string m_street;
		std::string m_city;
		std::string m_phone;
		Order m_current;

	public:
		// Default constructor
		Customer(std::string name = "", std::string street = "", 
			std::string city = "", std::string phone = "")
			:
			m_name(name), m_street(street), m_city(city), m_phone(phone)
		{}

		// Getter methods for customer info
		std::string m_get_name() const { return m_name; }
		std::string m_get_street() const { return m_street; }
		std::string m_get_city() const { return m_street; }
		std::string m_get_phone() const { return m_phone; }
	};
}