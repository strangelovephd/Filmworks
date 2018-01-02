#include "Order.h"

namespace filmworks {

   Order::Order() {
      GetSystemTime(&m_order_time);
      m_order_time.wHour = m_order_time.wHour - 8 + 24;
   }

   double Order::get_sub() {
      double sub = 0.0;
      if (!m_itemized_list.empty()) {
         for (unsigned int i = 0; i < m_itemized_list.size(); ++i) {
            sub += m_itemized_list[i].get_price();
         }
      }
      return sub;
   }

   void Order::add_to_list(int package) {
      switch (package) {
      case 1: m_itemized_list.push_back(package_a());
         break;
      case 2: m_itemized_list.push_back(package_b());
         break;
      case 3: m_itemized_list.push_back(package_c());
         break;
      }
   }
}