default:
	CPPFLAGS=-DDEBUG make main;./main
test:
	 make main;./main
clean:
	rm main
