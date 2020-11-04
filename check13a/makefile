###############################################################
# Program:
#     Checkpoint 13a, Destructors
#     Brother Dudley, CS165
# Author:
#     Will Brown
# Summary:
#     Summaries are not necessary for checkpoint assignments.
###############################################################


a.out : numberList.o check13a.o
	g++ numberList.o check13a.o
	tar -cf check13a.tar makefile *.cpp *.h

numberList.o : numberList.h numberList.cpp
	g++ -c numberList.cpp

check13a.o : numberList.h check13a.cpp
	g++ -c check13a.cpp

clean :
	rm *.o *.out
