#ifndef CPE_H
#define CPE_H

typedef enum {
    CPU_386DX,
    CPU_486DX4,
    CPU_PENTIUM,
    CPU_PENTIUM_MMX,
    CPU_PENTIUM2,
    CPU_PENTIUM3,
    CPU_PENTIUM4,
    CPU_ATHLON_XP,
    CPU_CORE2DUO
} CpuPersonality;

void CPE_Apply(CpuPersonality profile);

#endif
