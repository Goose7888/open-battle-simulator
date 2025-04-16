# Makes stuff

CXX = g++
CXXFLAGS = -Wall -g

# Open Battle SIMulator (obs was taken)
TARGET = obsim

SRCS = $(wildcard src/*.cpp)
OBJS = $(SRCS:.cpp=.o)

all			:	$(TARGET)


$(TARGET)	:	$(OBJS)
	$(CXX) $(CXXFLAGS) ./build/*.o -o ./build/$(TARGET)
	cp ./build/$(TARGET) $(TARGET)

%.o			: 	%.cpp
	mkdir -p build
	$(CXX) $(CXXFLAGS) -c $< -o ./build/$(@F)

.PHONY 		: 	clean
clean		:
	rm -rf build
