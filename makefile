CXX = g++
CXXFLAGS = -std=c++11
OPENCV_LIBS = `pkg-config --cflags --libs opencv`

SRC = image_converter.cpp
TARGET = image_converter

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $< $(OPENCV_LIBS)

clean:
	rm -f $(TARGET)

