# Traffic_Management-OpenCV
Since our first task would be to detect cars, in order to get a car count. 

So, for this we used OpenCV.lib, its an open source library primarily used for image processing and object detection. 

The main concept behind this code would be to assign each of our objects (cars) a blob.

A counter would increment each time the blob passes through a virtual line, therefore calculating total number of cars in a particular lane. 

The code consists of three files:

blob.h
blob.cpp
main.cpp		 
	
Blob.h: blob.h contains all the declarations/prototypes of the functions need to position a blob.

Blob.cpp: blob.cpp is the implementation of all these functions. 

Main.cpp: main starts by including the OpenCV.lib header files. The code has been made up to image detection and blob formation.

please look into signalTime folder for the rest of the program. 
