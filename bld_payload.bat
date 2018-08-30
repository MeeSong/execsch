@echo off
cl -c -nologo -Os -O2 -Gm- -GR- -EHa -Oi -GS- calc.c
link /order:@ctrlsvc64.txt /entry:HandlerEx /base:0 calc.obj -subsystem:windows -nodefaultlib -stack:0x100000,0x100000
xbin calc.exe .text
dist -fc -b64 calc.exe64.bin >payload64.h