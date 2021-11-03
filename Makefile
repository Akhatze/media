media: media.o estatistica.o unity.o #junta os tres
	gcc media.o estatistica.o unity.o -o media -lm	

media.o: media.c #compila main
	gcc -c media.c

estatistica.o: estatistica.c  #compila header
	gcc -c estatistica.c -lm

unity.o: unity.c unity.h unity_internals.h #compila header novo
	gcc -c unity.c