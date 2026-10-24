#ifndef VBE_H
#define VBE_H

void VBE_Init(void);

void INT10_Handler(void);
void INT13_Handler(void);
void INT16_Handler(void);

#endif
