#ifndef JCORE_H
#define JCORE_H

typedef struct {
    const char* firmwareVersion;
    const char* compatibilityProfile;
    int secureMode;
} JCoreState;

void JCore_Init(void);
void JCore_Post(void);
void JCore_LoadProfile(const char* profile);

#endif
