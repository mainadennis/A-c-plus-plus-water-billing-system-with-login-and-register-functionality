 * Project:  Water Billing: A C++ water billing app with login and register functionality.
 * File:     main.cpp
 *
 * Copyright (c) 2020, Dennis Maina
 * All rights reserved.
 *
# Author 
 DENNIS MAINA
# Contact
* maina@dentricedev.com
# Date 
* Mon ,May 25 2020
# Github 
* github.com/maina-dennis
# 
<h3>Description</h3>
<p>A simple water billing system with login and register functionality built in c++,<br>
the system asks if a user has an account or not, you can choose to use the system default user and password</p> <ul><li>username : test </li><li>password : 0000</li></ul>
<h5>Bill Calculation<h5>

* The system is using some fixed values to get the final bill
* This include 
<ul>
<li>Tax : 16% of the total bill</li>
<li>Standing Charge : fixed standing charge payable every end of the billing period, summed with the total bill.Valued at ksh.200</li>
<li>Price Per Unit : ksh. 15, multiplied by the total unit consumption</li>
</ul>

* for the test account current meter reading is set at 50 units and previous at zero (0).
<h4>Class </h4>

* The system has a class billing which wraps up all the objects and is instantiated in the main method
<h4>Methods</h4>
<b><u>getinfo()</u></b>

* collects the system variable data from the user and stores them into their respective variables for use by the application
* This method passes execution to the def() method

<b><u>def()</u></b>

* Loops through the system options and makes sure that it does not terminate after execution.
* To exit the application use option 5

# 
## want something improved or added?
## Having troubles implementing?
 reach to me@ maina@dentricedev.com
 i will be happy to assist 
# 
## Found a bug in the program?
 make a pull request at github @ github.com/maina-dennis
# 
## Regards,
# Dentricedev
