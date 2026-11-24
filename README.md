# 🏦 Bank Management System

A console-based Bank Management System built in **C++** using Object-Oriented Programming principles. The system simulates real-world banking operations with a multi-screen architecture, custom utility libraries, and flat-file data persistence.

---

## 📋 Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Architecture](#architecture)
- [Class Structure](#class-structure)
- [Data Persistence](#data-persistence)
- [Custom Libraries](#custom-libraries)
- [Getting Started](#getting-started)
- [Project Structure](#project-structure)
- [OOP Concepts Applied](#oop-concepts-applied)

---

## Overview

This project is a fully functional bank management application that runs in the console. It supports multi-user access with role-based permissions, full CRUD operations on clients and users, financial transactions, transfer auditing, and a currency exchange module — all without a database, using flat text files for storage.

---

## ✨ Features

### 👤 Client Management
- List all clients
- Add new clients
- Find a client by account number
- Update client information
- Delete a client

### 💰 Transactions
- Deposit funds into an account
- Withdraw funds from an account
- Transfer funds between accounts (with full transfer log)
- View total balances across all accounts

### 🔐 User Management (Access Control)
- List all system users
- Add new users
- Find, update, and delete users
- Role-based permission system

### 🔑 Login & Security
- Secure login screen with credential verification
- Persistent login session register (`LoginRegister.txt`) with timestamps

### 💱 Currency Exchange
- View list of all supported currencies
- Find a specific currency
- Update exchange rates
- Currency calculator (convert between currencies)

### 📋 Auditing
- Transfer log (`TransferLog.txt`) tracking all inter-account transactions

---

## 🏗️ Architecture

The project follows a **layered screen-based architecture**:

```
Login Screen
    └── Main Screen
            ├── Client Management Screen
            │       ├── List Clients
            │       ├── Add Client
            │       ├── Find Client
            │       ├── Update Client
            │       └── Delete Client
            ├── Transactions Screen
            │       ├── Deposit
            │       ├── Withdraw
            │       ├── Transfer
            │       ├── Transfer Log
            │       └── Total Balances
            ├── Manage Users Screen
            │       ├── List Users
            │       ├── Add User
            │       ├── Find User
            │       ├── Update User
            │       └── Delete User
            ├── Currency Exchange Screen
            │       ├── Currencies List
            │       ├── Find Currency
            │       ├── Update Rate
            │       └── Currency Calculator
            └── Login Register
```

---

## 🧱 Class Structure

```
clsPerson  (Base Class)
├── clsBankClient
└── clsUser

clsScreen  (Base Screen Class)
└── All screen classes inherit from clsScreen
```

| Class | Responsibility |
|---|---|
| `clsPerson` | Base class with shared attributes (name, phone, etc.) |
| `clsBankClient` | Bank client entity with account logic |
| `clsUser` | System user with permissions |
| `clsCurrency` | Currency entity with exchange rate |
| `clsScreen` | Base class for all UI screens (header rendering, access control) |

---

## 💾 Data Persistence

No database is used. All data is stored in plain text files using delimiter-based serialization:

| File | Contents |
|---|---|
| `Clients.txt` | All registered bank clients |
| `Users.txt` | System users and credentials |
| `Currencies.txt` | Currency list with exchange rates |
| `LoginRegister.txt` | Login session history with timestamps |
| `TransferLog.txt` | Full history of all fund transfers |

Data is loaded into C++ objects at runtime and saved back after each operation.

---

## 🔧 Custom Libraries

| Library | Description |
|---|---|
| `clsString` | String operations: tokenization, splitting, trimming, formatting |
| `clsDate` | Date handling: parsing, formatting, timestamp generation |
| `clsInputValidate` | Input validation: type checking, range enforcement, error handling |
| `clsUtil` | General-purpose utility functions shared across screens |

---

## 🚀 Getting Started

### Prerequisites
- Windows OS
- Visual Studio (2019 or later recommended)
- C++17 or later

### Build & Run

1. Clone the repository:
   ```bash
   git clone https://github.com/mostafamansour745-dotcom/Bank-Management-System.git
   ```

2. Open `Bank Project.slnx` in Visual Studio.

3. Build the solution (`Ctrl + Shift + B`).

4. Run the project (`F5`).

> The application will launch in the console. Use the default credentials in `Users.txt` to log in.

---

## 📁 Project Structure

```
Bank-Management-System/
│
├── Bank Project.cpp                  # Entry point
│
├──── Core Models ──
├── clsPerson.h                       # Base person class
├── clsBankClient.h                   # Bank client model
├── clsUser.h                         # System user model
├── clsCurrency.h                     # Currency model
│
├── ── Screens ──
├── clsScreen.h                       # Base screen class
├── clsMainScreen.h                   # Main menu
├── clsLoginScreen.h                  # Login screen
├── clsListScreen.h                   # Client list
├── clsAddNewClientsScreen.h          # Add client
├── clsFindClientScreen.h             # Find client
├── clsUpdateClientScreen.h           # Update client
├── clsDeleteClientScreen.h           # Delete client
├── clsTransactionsScreen.h           # Transactions menu
├── clsDepositScreen.h                # Deposit
├── clsWithDrawScreen.h               # Withdraw
├── clsTransferScreen.h               # Transfer
├── clsTransferLogScreen.h            # Transfer history
├── clsTotalbalancesScreen.h          # Total balances
├── clsManageUserScreen.h             # User management menu
├── clsListUserScreen.h               # List users
├── clsAddNewUserScreen.h             # Add user
├── clsFindUserScreen.h               # Find user
├── clsUpdateUserScreen.h             # Update user
├── clsDeleteUserScreen.h             # Delete user
├── clsLoginRegisterScreen.h          # Login history
├── clsCurrencyExchangeMainScreen.h   # Currency menu
├── clsCurrenciesListScreen.h         # Currency list
├── clsFindCurrencyScreen.h           # Find currency
├── clsUpdateCurrencyRateScreen.h     # Update rate
├── clsCurrencyCalculatorScreen.h     # Currency calculator
│
├── ── Utility Libraries ──
├── clsString.h                       # String utilities
├── clsDate.h                         # Date utilities
├── clsInputValidate.h                # Input validation
├── clsUtil.h                         # General utilities
├── Global.h                          # Global constants/enums
│
└── ── Data Files ──
    ├── Clients.txt
    ├── Users.txt
    ├── Currencies.txt
    ├── LoginRegister.txt
    └── TransferLog.txt
```

---

## 🎯 OOP Concepts Applied

| Concept | Implementation |
|---|---|
| **Inheritance** | `clsBankClient` and `clsUser` inherit from `clsPerson`; all screens inherit from `clsScreen` |
| **Encapsulation** | Private data members with controlled access through properties and methods |
| **Abstraction** | `clsScreen` provides a blueprint; each screen implements its own logic |
| **Separation of Concerns** | UI layer (screens) is fully separated from business/model layer |
| **Serialization** | Custom text parsing to convert between file records and live objects |

---

## 👨‍💻 Author

**Mostafa Mansour**
- GitHub: [@mostafamansour745-dotcom](https://github.com/mostafamansour745-dotcom)
