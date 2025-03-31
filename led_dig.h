/*
 * indicator_seven.h
 *
 * Created: 28.03.2025 9:50:00
 *  Author: GS
 */ 

#ifndef INDICATOR_SEVEN_H_
#define INDICATOR_SEVEN_H_
#define A 0
#define B 1
#define C 2
#define D 3
#define E 4
#define F 5
#define G 6
#define DP 7

#define ZERO  (1<<A)|(1<<B)|(1<<C)|(1<<D)|(1<<E)|(1<<F)|(0<<G)
#define ONE   (0<<A)|(1<<B)|(1<<C)|(0<<D)|(0<<E)|(0<<F)|(0<<G)
#define TWO   (1<<A)|(1<<B)|(1<<0)|(1<<D)|(1<<E)|(0<<F)|(1<<G)
#define THREE (1<<A)|(1<<B)|(1<<C)|(1<<D)|(0<<E)|(0<<F)|(1<<G)
#define FOUR  (0<<A)|(1<<B)|(1<<C)|(0<<D)|(0<<E)|(1<<F)|(1<<G)
#define FIVE  (1<<A)|(0<<B)|(1<<C)|(1<<D)|(0<<E)|(1<<F)|(1<<G)
#define SIX   (1<<A)|(0<<B)|(1<<C)|(1<<D)|(1<<E)|(1<<F)|(1<<G)
#define SEVEN (1<<A)|(1<<B)|(1<<C)|(0<<D)|(0<<E)|(0<<F)|(0<<G)
#define EIGTH (1<<A)|(1<<B)|(1<<C)|(1<<D)|(1<<E)|(1<<F)|(1<<G)
#define NINE  (1<<A)|(1<<B)|(1<<C)|(1<<D)|(0<<E)|(1<<F)|(1<<G)

unsigned char letter(char let) {
	switch (let) {
		case 'a': return (1<<E)|(1<<F)|(1<<A)|(1<<B)|(1<<C)|(1<<G);
		case 'b': return (1<<F)|(1<<E)|(1<<D)|(1<<C)|(1<<G);
		case 'c': return (1<< A)|(1<< F)|(1<<E)|(1<<D);
		case 'd': return (1<<E)|(1<<B)|(1<<C)|(1<<D)|(1<<G);
		case 'e': return (1<<A)|(1<<F)|(1<<G)|(1<<E)|(1<<D);
		case 'f': return (1<<A)|(1<<F)|(1<<G)|(1<<E);
		case 'g': return (1<<A)|(1<<B)|(1<<C)|(1<<D)|(1<<F)|(1<<G);
		case 'h': return (1<<F)|(1<<E)|(1<<G)|(1<<C);
		case 'i': return (1<<B)|(1<<C);
		case 'k': return (1<<A)|(1<<F)|(1<<G)|(1<<E)|(1<<C);
		case 'l': return (1<<F)|(1<<E)|(1<<D);
		case 'n': return (1<<E)|(1<<G)|(1<<C);
		case 'o': return (1<<E)|(1<<D)|(1<<C)|(1<<G);
		case 'p': return (1<<A)|(1<<B)|(1<<E)|(1<<F)|(1<<G);
		case 'r': return (1<<E)|(1<<G);
		case 's': return (1<<A)|(1<<F)|(1<<G)|(1<<C)|(1<<D);
		case 't': return (1<<F)|(1<<G)|(1<<E)|(1<<D);
		case 'u': return (1<<E)|(1<<D)|(1<<C);
		case 'x': return (1<<F)|(1<<G)|(1<<B)|(1<<E)|(1<<C);
		case 'y': return (1<<F)|(1<<G)|(1<<B)|(1<<C)|(1<<D);
		case '\0': return 0x00;
		default: return (1<<D);
	}
}

unsigned char digit(unsigned char num) {
	unsigned char dig[] = {ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGTH, NINE};
	if (num >= 0 && num < 10)
		return dig[num];
	return letter('e');
}



#endif /* INDICATOR_SEVEN_H_ */
