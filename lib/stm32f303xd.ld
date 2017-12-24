MEMORY
{
    IROM    (r x) : ORIGIN = 0x08000000, LENGTH = 384k
    CCM     (rwx) : ORIGIN = 0x10000000, LENGTH = 16k
    IRAM    (rwx) : ORIGIN = 0x20000000, LENGTH = 64k
}

INCLUDE cortex-m4-ccm.ld
