include \masm32\congamelib\congame.inc
include \masm32\include\msimg32.inc

includelib \masm32\congamelib\congame.lib
includelib \masm32\lib\msimg32.lib


Main          proto

.const
 ;------------------------------------------------
 ; These values may be used as exit status codes.
 ;------------------------------------------------
 EXIT_SUCCESS	equ 0
 EXIT_FAILURE	equ 1