# Bank Management System

A console-based banking system application built using C++ (Object-Oriented Programming). The project implements an enterprise-like multi-screen structure, custom utilities, and data persistence using flat text files.

---

## Key Features

* **Client Management (CRUD):** Complete system to list, add, find, update, and delete banking clients.
* **Transactions System:** Supports dynamic deposits, withdrawals, total balances checking, and client-to-client transfers.
* **User Management:** Access control screens to manage system operators (List, Add, Delete, Find, and Update users).
* **Login & Security:** Secure login screen verification with an automated, persistent log (`LoginRegister.txt`) tracking timestamps and sessions.
* **Transfer Auditing:** Tracks all balance transfers between accounts inside a dedicated transaction history log (`TransferLog.txt`).
* **Currency Exchange:** A complete sub-menu containing a currency calculator, dynamic currency lookup, and exchange rate updates.

---

## Technical Architecture & Concepts Applied

### 1. Object-Oriented Programming (OOP)
* **Inheritance:** Derived specialization classes like `clsBankClient` and `clsUser` from the base class `clsPerson` to share common attributes.
* **Encapsulation:** Using robust access modifiers and clean properties to separate the user interface layer from core business models.
* **Screen Abstraction:** Implemented a base screen architecture (`clsScreen`) that acts as a blueprint for rendering headers and permissions across all subsystem screens.

### 2. Data Persistence (File Streams)
* **Flat-File Storage:** Utilizing specialized data mapping functions to load and store information directly into text files (`Clients.txt`, `Users.txt`, `Currencies.txt`).
* **Serialization & Deserialization:** Parsing system text records using delimiters to dynamically reconstruct live C++ objects.

### 3. Custom Utility Libraries
* **clsString:** Custom-built library handling string operations, tokenization, splitting, and character formatting.
* **clsDate:** Comprehensive custom utility to process system dates, calculate periods, and manage logging timestamps.
* **clsInputValidate:** Defensive-programming component enforcing strict range inputs, data type parsing, and validation rules to guarantee smooth CLI execution.
* **clsUtil:** General logic utilities and shared operations utilized across multiple system screens.
