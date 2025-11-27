default:
	make main; ./main

debug:
	CPPFLAGS=-DDEBUG make main;./main

clean:
	rm main
