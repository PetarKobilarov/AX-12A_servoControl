#ifndef QEI_H_
#define QEI_H_

#ifndef F_CPU
#define F_CPU 11059200ULL
#endif

void MAXON_Init(void);
void MAXON_Check(void);
void MAXON_Start(unsigned char speed, signed int position);
char MAXON_IsRotating(void);
void MAXON_RotateFor(signed int position, unsigned char speed);

#endif /* QEI_H_ */
