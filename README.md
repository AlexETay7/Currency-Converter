# Simple Currency Converter
****************
* Currency Converter
* Personal Project
* Alex Taylor
**************** 

### ***OVERVIEW:***

A currency converter tool that runs on C++. A demo of me teaching myself C++. Currently supports conversions from USD(US dollar), GPB(pounds), EUR(euros), JPY(Japanese yen), AUD(Australian dollar), and INR(Indian rupees).

### ***INCLUDED FILES:***

 * currency_converter.cpp - The driver file that gathers user input, and calculates desired currency based on user input.
 * README - A brief overview of the program, how to run and compile it, related concepts, and testing information.
 * The other files in here are JSON files and things of that nature that allowed me to compile and run my C++ program on VS Code.

### ***COMPILING AND RUNNING:***

 I am going to describe how to compile and run the program on VSCode. 
 To do so, you will have to install two extensions and an integrated development environment on your machine. Don't worry it takes maybe 5 minutes!

 First off, the extension is needed regardless of whether you are on Mac, Windows, Linux, etc. To install the extension look up "Code Runner" 
 in the VSCode extensions tab. The other extension you need installed is the "C/C++ Extension Pack" by Microsoft.
 Once both are installed it is now time to install an integrated development environment on your system.

 To install the integrated development system on Mac, I would recommend installing Xcode. This will allow you to compile your code with clang.
 To do so, open a terminal and type the command: 
 <pre>
  $ xcode-select --install
 </pre>
 If your machine says you already have it, make sure by using the command:
 <pre>
  $ - clang --version
 </pre>

 To install the development/compiling system on Windows, I would recommend watching this 5-minute video on YouTube by Code Bear: "How to Set up Visual Studio Code for C and C++ Programming"

 Once these dependencies are installed, watch this video: "Run C++ and C in Visual Studio Code | Mac and Windows!" by Caleb Curry on YouTube on how to run and compile the program in the VSCode 
 terminal.

 After watching this video and you can compile your code, run the program in the terminal by doing:
 <pre>
  $ ./currency_converter
 </pre>

 I recommend when cloning this repository for use to only use the currency_converter.cpp file, and let the extensions and development system create the other JSON files, etc. for you.

 ### ***PROGRAM DESIGN AND IMPORTANT CONCEPTS:***

 This program does simple currency conversions using constant conversion factors for currencies that I pulled from the internet. Users start by entering their source currency, then the currency they want it converted to, and then the amount. Once this is done console output will give the results.

