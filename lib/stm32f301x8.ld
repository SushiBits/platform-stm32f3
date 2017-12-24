MEMORY
{
    IROM    (r x) : ORIGIN = 0x08000000, LENGTH = 64k
    IRAM    (rwx) : ORIGIN = 0x20000000, LENGTH = 16k
}

INCLUDE cortex-m4.ld
