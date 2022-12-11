DEBUG_FLAGS = -O0 -g3 # O0 = no compile optimization, -g3 = max degug info
RELEASE_FLAGS = -O3 # max compile optimizaiton (level3)

FLAGS = $(RELEASE_FLAGS) 

preprocess: # text ersetzung. copy paste included libraries. you can indvidually run it using 'make preprocess', then the follwing line will be executed. 
	g++ $(FLAGS) -E Functions2.cc > Temp.cc 

assemble: # human readable assemble code. run only this? - do 'make assemble'
	g++ $(FLAGS) -S Functions2.cc

compile: # compile. do 'make compile' 
	g++ $(FLAGS) -c Functions2.cc -o Functions2.o

build: # bind all the object file togethor and build the exe
	g++ $(FLAGS) Functions2.o -o Functions2
