MEMORY
{
    IROM    (r x) : ORIGIN = 0x08000000, LENGTH = 256k
    IRAM    (rwx) : ORIGIN = 0x20000000, LENGTH = 32k
}

include cortex-m4.ld;
