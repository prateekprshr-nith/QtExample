# QtExample
Guys give a good read to this code. See how 'signals' and 'slots' are implemented and how the various components are connected. If possible, try to compile this project with QT.

# File description
1) Person.h Person.cpp "The Person class": It has the basic attributes that a person is likely to have:). 
   Apart from that it has some slots that that respond to signals from GUI.
2) Gui.h Gui.cpp "The Gui class": This class is responsible for generating GUI layouts. It has QLineEdit 
   fields. It emits signlas that are connected to slots of Person class.
3) Db.h Db.cpp "The Db class": This class is responsible for the interaction of our application with DB. 
   It handles the task of sending the data along with the query to database processor.

# Important tips

1) POINTERS - Brush up your pointer concepts as they are the heart and soul of QT Programming

2) MEMORY MANAGEMENT - Learn about how memory is allocated on heap and stack. Also try to find out the consequencies of      
  allocating memory on heap as well as stack.
  
3) OOP - Learn about data encapsulation, data abstraction, interfaces. Try to find out what are wireframe models as the we 
  require them to design our GUI.
  
4) QT API - QT's official documentation is an excellent place to start with. Try to learn about basic GUI components like 
  QWidget, QDialog, QMainWindow, QLineEdit, QLayout, QLabel etc.
  
5) FUN - Have fun but please be serious about your work ;D.

Coding Conventions would be decided when all of the team members are present.
