MEMORY
{
    IROM    (r x) : ORIGIN = 0x08000000, LENGTH = 256k
    CCM     (rwx) : ORIGIN = 0x10000000, LENGTH = 8k
    IRAM    (rwx) : ORIGIN = 0x20000000, LENGTH = 40k
}

include cortex-m4-ccm.ld
