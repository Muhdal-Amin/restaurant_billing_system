# Restaurant Billing System in C

The **Restaurant Billing System** is a command-line application designed to manage billing and invoicing for a restaurant. This system enables restaurant staff to take orders, calculate bills, generate receipts, and maintain a record of daily transactions. Built in C, the project emphasizes performance, accuracy, and an easy-to-use interface, making it an ideal solution for small to medium-sized restaurants.

---

## **Features**
- **Menu Management:** Display a customizable menu with item names, quantities, and prices.
- **Order Handling:** Take multiple orders and calculate the total bill with taxes.
- **Receipt Generation:** Generate printable invoices for customers.
- **Daily Summary:** Track total earnings and the number of orders processed during the day.
- **Error Handling:** Prevent invalid inputs for item selection and quantity.

---

## **Technologies Used**

### **Programming Language**
- **C:** The entire application is developed in C, offering efficient computation and straightforward file handling.

### **Core Features & Libraries**
- **File Handling:** Stores daily transaction records for auditing purposes.
- **Standard C Libraries:** 
  - `<stdio.h>` for input/output operations.
  - `<stdlib.h>` for dynamic memory management.
  - `<string.h>` for string manipulation and menu management.

### **Utilities**
- **Data Structures:** Arrays for menu storage and dynamic memory allocation for order processing.
- **Modular Design:** Functions for key features such as order creation, bill calculation, and transaction summary.

---

## **Installation Guide**
To set up and run the **Restaurant Billing System**, follow these steps:

1. Clone the repository:
   ```bash
   git clone https://github.com/Muhdal-Amin/restaurant-billing-system.git
   cd restaurant-billing-system
   ```

2. Compile the source code:
   ```bash
   gcc -o billing_system billing_system.c
   ```

3. Run the application:
   ```bash
   ./billing_system
   ```

---

## **Challenges Encountered**
1. **Menu Customization:**
   - Allowing flexible menu updates during runtime was complex.
   - **Solution:** Designed a menu system with easy-to-edit code and dynamic item pricing.

2. **Accurate Billing:**
   - Calculating totals with taxes and handling floating-point precision was a challenge.
   - **Solution:** Used `float` data types carefully and tested multiple rounding algorithms.

3. **Data Persistence:**
   - Ensuring daily transactions were logged without errors required robust file handling.
   - **Solution:** Implemented structured file storage with readable formatting.

4. **Error Handling:**
   - Managing invalid inputs such as selecting unavailable items or entering negative quantities.
   - **Solution:** Included thorough validation checks and user-friendly error messages.

---

## **Lessons Learned**
1. **File Handling Proficiency:** Enhanced understanding of file operations, especially appending and reading structured data.
2. **Modular Programming Skills:** Developed reusable functions for critical operations like order creation and receipt printing.
3. **Error Handling Best Practices:** Learned the importance of anticipating and addressing user errors effectively.
4. **Optimized Memory Usage:** Gained practical experience with memory allocation and deallocation in C.

---

## **Future Plans**
1. **Enhanced User Interface:** Add color-coded output for better CLI experience.
2. **Item Search Feature:** Implement search functionality for quick item lookup.
3. **Database Integration:** Transition to using a database for transaction storage and analysis.
4. **Multi-language Support:** Expand to support multilingual menus and receipts.

---

## **Contribution Guidelines**
We welcome contributions to improve the **Restaurant Billing System**! Please follow these steps:
1. Fork the repository.
2. Create a new branch for your feature.
3. Commit your changes with clear messages.
4. Create a pull request to the main repository.

---

## **Acknowledgments**
- **C Programming Community:** For insights on modular programming and error handling.
- **ADV Learning:** For libraries and guides that helped in developing this project.

---
