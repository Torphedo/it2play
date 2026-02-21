// no-op audio driver for it2play

#include <stdint.h>
#include <stdbool.h>

void lockMixer(void)
{
	return;
}

void unlockMixer(void)
{
	return;
}

bool openMixer(int32_t mixingFrequency, int32_t mixingBufferSize)
{
	return true;
}

void closeMixer(void)
{
    return;
}
