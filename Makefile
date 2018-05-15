
CXX=clang++-5.0
CXXFLAGS=-std=c++17


a.out: Board.o BoardRow.o Content.o IllegalCoordinateException.o 
	$(CXX) $(CXXFLAGS) main.cpp *.o
	

Board.o: Board.cpp Board.h BoardRow.h Content.h IllegalCoordinateException.h  IllegalCharException.h	
	$(CXX) $(CXXFLAGS) --compile Board.cpp 

BoardRow.o: BoardRow.cpp BoardRow.h Content.h IllegalCoordinateException.h  IllegalCharException.h
	$(CXX) $(CXXFLAGS) --compile BoardRow.cpp 

Content.o: Content.cpp Content.h IllegalCharException.h
	$(CXX) $(CXXFLAGS) --compile Content.cpp  

IllegalCoordinateException.o: IllegalCoordinateException.cpp IllegalCoordinateException.h 
	$(CXX) $(CXXFLAGS) --compile IllegalCoordinateException.cpp 

Clean:
		rm *.o a.out
