#pragma once
#include "Receipt_Creator.h"

namespace filmworks{

   Receipt_Creator::Receipt_Creator(const char* file_name) {
      receipt.open(file_name);
      GetSystemTime(&time);
      time.wHour = time.wHour - 8 + 24; // UTC to PST -8, convert to 24 hour
   }
   
   Receipt_Creator::~Receipt_Creator() {
      receipt.close();
   }

   void Receipt_Creator::create_header() {
      receipt << std::setw(30) << std::right << std::setfill('*') << '\n';
      receipt << std::setw(30) << std::right << "Filmworks Superior Photography\n";
      receipt << std::setw(24) << std::right << "1226 Lincoln Way\n";
      receipt << std::setw(24) << std::right << "Auburn, Ca 95603\n";
      receipt << std::setw(26) << std::right << "(530) 368 - 9904\n";
      receipt << std::setw(30) << std::right << std::setfill('*') << '\n';
      receipt << std::left << "Order date: ";
      receipt << time.wMonth << '/' << time.wDay << '/' << time.wYear << '\n';
      receipt << "Order time: ";
      receipt << time.wHour << ':';
      if (time.wMinute < 10) {
         receipt << '0';
      }
      receipt << time.wMinute << '\n';
      receipt << std::setw(30) << std::right << std::setfill('*') << '\n';
   }

   void Receipt_Creator::create_body(const Order& curr_order) {
      os << "Number:" << std::setw(30) << std::setfill('.') << std::right
         << "Item:" << std::setw(4) << std::setfill('.') << std::right
         << "Price:\n";


      os << "Number of items: " << curr_order.get_num_items() << setw(11)
         << std::right << "Sub: " << curr_order.get_sub() << '\n';
      os << std::setw(30) << std::right << "Tax (" << TAX * 100 << "%): "
         << curr_order.get_tax() << '\n';
      os << std::setw(30) << std::right << "Total: " << curr_order.get_total();

   }
}