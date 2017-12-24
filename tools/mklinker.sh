#!/bin/bash

while read name rom ram ccm junk; do
    cat << EOF > $name.ld
MEMORY
{
    IROM    (r x) : ORIGIN = 0x08000000, LENGTH = ${rom}k
EOF
    if [ "$ccm" != "" -a "$ccm" -ne "0" ]; then
        cat << EOF >> $name.ld
    CCM     (rwx) : ORIGIN = 0x10000000, LENGTH = ${ccm}k
    IRAM    (rwx) : ORIGIN = 0x20000000, LENGTH = ${ram}k
}

include $1-ccm.ld
EOF
    else
        cat << EOF >> $name.ld
    IRAM    (rwx) : ORIGIN = 0x20000000, LENGTH = ${ram}k
}

include $1.ld
EOF
    fi
done
