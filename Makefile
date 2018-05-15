

	
	
	
	

a.out:Board.o BoardRow.o Content.o IllegalCoordinateException.o 
	#$(CXX) $(CXXFLAGS)Board.o BoardRow.o Content.o    IllegalCoordinateException.o 

Board.o:Board.cpp Board.h BoardRow.h Content.h IllegalCoordinateException.h  IllegalCharException.h	
	$(CXX) $(CXXFLAGS) --compile Board.cpp -o Board.o

BoardRow.o:BoardRow.cpp BoardRow.h Content.h IllegalCoordinateException.h  IllegalCharException.h
	$(CXX) $(CXXFLAGS) --compile BoardRow.cpp -o BoardRow.o

Content.o:Content.cpp Content.h IllegalCharException.h
	$(CXX) $(CXXFLAGS) --compile Content.cpp -o Content.o 

IllegalCoordinateException.o:IllegalCoordinateException.cpp IllegalCoordinateException.h 
	$(CXX) $(CXXFLAGS) --compile IllegalCoordinateException.cpp -o IllegalCoordinateException.o
