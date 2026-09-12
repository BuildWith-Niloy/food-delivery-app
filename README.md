# 🍔 Food Delivery Billing System

A command-line food delivery application built in C that calculates orders, 
applies discounts, adds service charges, and calculates delivery fees based on distance.

## ✨ Features

- **🍔 Dynamic Menu System** - 5 food items with different prices
- **💰 Smart Discount Logic**
  - 20% discount on orders ≥ 1000 tk
  - 10% discount on orders 500-999 tk
  - No discount on orders < 500 tk

- **🚚 Distance-Based Delivery Charges**
  - Free delivery on orders ≥ 1500 tk
  - Flat 50 tk for distances ≤ 5 km
  - 50 tk + (12 tk per km) for distances > 5 km

- **🧾 Automatic Service Charge** - 5% on all orders
- **📊 Detailed Bill Breakdown** - Clear summary of all charges

## 🛠️ How to Use

### Compile
```bash
gcc food_delivery_app.c -o food_delivery_app
```

### Run
```bash
./food_delivery_app
```

### Sample Input & Output
