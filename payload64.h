
#define PAYLOAD_SIZE 828

char PAYLOAD[] = {
  /* 0000 */ "\x48\x89\x5c\x24\x08"                 /* mov [rsp+0x8], rbx               */
  /* 0005 */ "\x48\x89\x74\x24\x18"                 /* mov [rsp+0x18], rsi              */
  /* 000A */ "\x55"                                 /* push rbp                         */
  /* 000B */ "\x57"                                 /* push rdi                         */
  /* 000C */ "\x41\x54"                             /* push r12                         */
  /* 000E */ "\x41\x56"                             /* push r14                         */
  /* 0010 */ "\x41\x57"                             /* push r15                         */
  /* 0012 */ "\x48\x8d\x6c\x24\xc9"                 /* lea rbp, [rsp-0x37]              */
  /* 0017 */ "\x48\x81\xec\xe0\x00\x00\x00"         /* sub rsp, 0xe0                    */
  /* 001E */ "\x83\x64\x24\x28\x00"                 /* and dword [rsp+0x28], 0x0        */
  /* 0023 */ "\xb8\x65\x00\x00\x00"                 /* mov eax, 0x65                    */
  /* 0028 */ "\x83\x65\x9f\x00"                     /* and dword [rbp-0x61], 0x0        */
  /* 002C */ "\xba\x65\x48\x61\x6e"                 /* mov edx, 0x6e614865              */
  /* 0031 */ "\x83\x65\x17\x00"                     /* and dword [rbp+0x17], 0x0        */
  /* 0035 */ "\xb9\x61\x67\x61\x74"                 /* mov ecx, 0x74616761              */
  /* 003A */ "\x89\x4d\xdb"                         /* mov [rbp-0x25], ecx              */
  /* 003D */ "\x41\xb9\x6b\x65\x72\x6e"             /* mov r9d, 0x6e72656b              */
  /* 0043 */ "\x44\x89\x4c\x24\x20"                 /* mov [rsp+0x20], r9d              */
  /* 0048 */ "\x41\xb8\x65\x6c\x33\x32"             /* mov r8d, 0x32336c65              */
  /* 004E */ "\x44\x89\x44\x24\x24"                 /* mov [rsp+0x24], r8d              */
  /* 0053 */ "\x89\x45\xdf"                         /* mov [rbp-0x21], eax              */
  /* 0056 */ "\x89\x4d\xcb"                         /* mov [rbp-0x35], ecx              */
  /* 0059 */ "\x89\x45\xcf"                         /* mov [rbp-0x31], eax              */
  /* 005C */ "\x89\x55\xab"                         /* mov [rbp-0x55], edx              */
  /* 005F */ "\xc7\x45\x6f\x75\x73\x65\x72"         /* mov dword [rbp+0x6f], 0x72657375 */
  /* 0066 */ "\xc7\x45\x73\x33\x32\x00\x00"         /* mov dword [rbp+0x73], 0x3233     */
  /* 006D */ "\xc7\x45\xb7\x4d\x65\x73\x73"         /* mov dword [rbp-0x49], 0x7373654d */
  /* 0074 */ "\xc7\x45\xbb\x61\x67\x65\x42"         /* mov dword [rbp-0x45], 0x42656761 */
  /* 007B */ "\xc7\x45\xbf\x6f\x78\x41\x00"         /* mov dword [rbp-0x41], 0x41786f   */
  /* 0082 */ "\xc7\x45\xf7\x48\x65\x6c\x6c"         /* mov dword [rbp-0x9], 0x6c6c6548  */
  /* 0089 */ "\xc7\x45\xfb\x6f\x2c\x20\x57"         /* mov dword [rbp-0x5], 0x57202c6f  */
  /* 0090 */ "\xc7\x45\xff\x6f\x72\x6c\x64"         /* mov dword [rbp-0x1], 0x646c726f  */
  /* 0097 */ "\xc7\x45\x03\x21\x00\x00\x00"         /* mov dword [rbp+0x3], 0x21        */
  /* 009E */ "\xc7\x45\xd7\x50\x52\x4f\x50"         /* mov dword [rbp-0x29], 0x504f5250 */
  /* 00A5 */ "\xc7\x45\xc7\x70\x72\x6f\x70"         /* mov dword [rbp-0x39], 0x706f7270 */
  /* 00AC */ "\xc7\x45\x97\x53\x65\x74\x45"         /* mov dword [rbp-0x69], 0x45746553 */
  /* 00B3 */ "\xc7\x45\x9b\x76\x65\x6e\x74"         /* mov dword [rbp-0x65], 0x746e6576 */
  /* 00BA */ "\xc7\x45\x87\x4f\x70\x65\x6e"         /* mov dword [rbp-0x79], 0x6e65704f */
  /* 00C1 */ "\xc7\x45\x8b\x45\x76\x65\x6e"         /* mov dword [rbp-0x75], 0x6e657645 */
  /* 00C8 */ "\xc7\x45\x8f\x74\x41\x00\x00"         /* mov dword [rbp-0x71], 0x4174     */
  /* 00CF */ "\xc7\x45\xa7\x43\x6c\x6f\x73"         /* mov dword [rbp-0x59], 0x736f6c43 */
  /* 00D6 */ "\xc7\x45\xaf\x64\x6c\x65\x00"         /* mov dword [rbp-0x51], 0x656c64   */
  /* 00DD */ "\xc7\x45\x1f\x47\x65\x74\x46"         /* mov dword [rbp+0x1f], 0x46746547 */
  /* 00E4 */ "\xc7\x45\x23\x6f\x72\x65\x67"         /* mov dword [rbp+0x23], 0x6765726f */
  /* 00EB */ "\xc7\x45\x27\x72\x6f\x75\x6e"         /* mov dword [rbp+0x27], 0x6e756f72 */
  /* 00F2 */ "\xc7\x45\x2b\x64\x57\x69\x6e"         /* mov dword [rbp+0x2b], 0x6e695764 */
  /* 00F9 */ "\xc7\x45\x2f\x64\x6f\x77\x00"         /* mov dword [rbp+0x2f], 0x776f64   */
  /* 0100 */ "\x65\x48\x8b\x04\x25\x60\x00\x00\x00" /* mov rax, [gs:0x60]               */
  /* 0109 */ "\xc7\x45\xe7\x47\x65\x74\x50"         /* mov dword [rbp-0x19], 0x50746547 */
  /* 0110 */ "\xc7\x45\xeb\x72\x6f\x63\x41"         /* mov dword [rbp-0x15], 0x41636f72 */
  /* 0117 */ "\xc7\x45\xef\x64\x64\x72\x65"         /* mov dword [rbp-0x11], 0x65726464 */
  /* 011E */ "\x48\x8b\x78\x10"                     /* mov rdi, [rax+0x10]              */
  /* 0122 */ "\xc7\x45\xf3\x73\x73\x00\x00"         /* mov dword [rbp-0xd], 0x7373      */
  /* 0129 */ "\xc7\x45\x07\x47\x65\x74\x4d"         /* mov dword [rbp+0x7], 0x4d746547  */
  /* 0130 */ "\xc7\x45\x0b\x6f\x64\x75\x6c"         /* mov dword [rbp+0xb], 0x6c75646f  */
  /* 0137 */ "\x48\x63\x47\x3c"                     /* movsxd rax, dword [rdi+0x3c]     */
  /* 013B */ "\x89\x55\x0f"                         /* mov [rbp+0xf], edx               */
  /* 013E */ "\xc7\x45\x13\x64\x6c\x65\x41"         /* mov dword [rbp+0x13], 0x41656c64 */
  /* 0145 */ "\x8b\x9c\x38\x90\x00\x00\x00"         /* mov ebx, [rax+rdi+0x90]          */
  /* 014C */ "\x48\x03\xdf"                         /* add rbx, rdi                     */
  /* 014F */ "\x8b\x43\x0c"                         /* mov eax, [rbx+0xc]               */
  /* 0152 */ "\x85\xc0"                             /* test eax, eax                    */
  /* 0154 */ "\x74\x2b"                             /* jz 0x181                         */
  /* 0156 */ "\xba\x20\x20\x20\x20"                 /* mov edx, 0x20202020              */
  /* 015B */ "\x8b\xc8"                             /* mov ecx, eax                     */
  /* 015D */ "\x8b\x04\x39"                         /* mov eax, [rcx+rdi]               */
  /* 0160 */ "\x0b\xc2"                             /* or eax, edx                      */
  /* 0162 */ "\x41\x3b\xc1"                         /* cmp eax, r9d                     */
  /* 0165 */ "\x75\x0f"                             /* jnz 0x176                        */
  /* 0167 */ "\x8b\x44\x39\x04"                     /* mov eax, [rcx+rdi+0x4]           */
  /* 016B */ "\x0b\xc2"                             /* or eax, edx                      */
  /* 016D */ "\x41\x3b\xc0"                         /* cmp eax, r8d                     */
  /* 0170 */ "\x0f\x84\xec\x00\x00\x00"             /* jz 0x262                         */
  /* 0176 */ "\x8b\x43\x20"                         /* mov eax, [rbx+0x20]              */
  /* 0179 */ "\x48\x83\xc3\x14"                     /* add rbx, 0x14                    */
  /* 017D */ "\x85\xc0"                             /* test eax, eax                    */
  /* 017F */ "\x75\xda"                             /* jnz 0x15b                        */
  /* 0181 */ "\x48\x8b\x75\x6f"                     /* mov rsi, [rbp+0x6f]              */
  /* 0185 */ "\x48\x8b\x5d\x6f"                     /* mov rbx, [rbp+0x6f]              */
  /* 0189 */ "\x48\x85\xf6"                         /* test rsi, rsi                    */
  /* 018C */ "\x0f\x84\xb4\x00\x00\x00"             /* jz 0x246                         */
  /* 0192 */ "\x48\x85\xdb"                         /* test rbx, rbx                    */
  /* 0195 */ "\x0f\x84\xab\x00\x00\x00"             /* jz 0x246                         */
  /* 019B */ "\x48\x8d\x4d\x6f"                     /* lea rcx, [rbp+0x6f]              */
  /* 019F */ "\xff\xd6"                             /* call rsi                         */
  /* 01A1 */ "\x48\x8d\x4c\x24\x20"                 /* lea rcx, [rsp+0x20]              */
  /* 01A6 */ "\x4c\x8b\xf0"                         /* mov r14, rax                     */
  /* 01A9 */ "\xff\xd6"                             /* call rsi                         */
  /* 01AB */ "\x48\x8b\xf8"                         /* mov rdi, rax                     */
  /* 01AE */ "\x4d\x85\xf6"                         /* test r14, r14                    */
  /* 01B1 */ "\x0f\x84\x8f\x00\x00\x00"             /* jz 0x246                         */
  /* 01B7 */ "\x48\x85\xc0"                         /* test rax, rax                    */
  /* 01BA */ "\x0f\x84\x86\x00\x00\x00"             /* jz 0x246                         */
  /* 01C0 */ "\x48\x8d\x55\x87"                     /* lea rdx, [rbp-0x79]              */
  /* 01C4 */ "\x48\x8b\xc8"                         /* mov rcx, rax                     */
  /* 01C7 */ "\xff\xd3"                             /* call rbx                         */
  /* 01C9 */ "\x48\x8d\x55\x97"                     /* lea rdx, [rbp-0x69]              */
  /* 01CD */ "\x48\x8b\xcf"                         /* mov rcx, rdi                     */
  /* 01D0 */ "\x4c\x8b\xe0"                         /* mov r12, rax                     */
  /* 01D3 */ "\xff\xd3"                             /* call rbx                         */
  /* 01D5 */ "\x48\x8d\x55\xa7"                     /* lea rdx, [rbp-0x59]              */
  /* 01D9 */ "\x48\x8b\xcf"                         /* mov rcx, rdi                     */
  /* 01DC */ "\x48\x8b\xf0"                         /* mov rsi, rax                     */
  /* 01DF */ "\xff\xd3"                             /* call rbx                         */
  /* 01E1 */ "\x48\x8d\x55\x1f"                     /* lea rdx, [rbp+0x1f]              */
  /* 01E5 */ "\x49\x8b\xce"                         /* mov rcx, r14                     */
  /* 01E8 */ "\x48\x8b\xf8"                         /* mov rdi, rax                     */
  /* 01EB */ "\xff\xd3"                             /* call rbx                         */
  /* 01ED */ "\x48\x8d\x55\xb7"                     /* lea rdx, [rbp-0x49]              */
  /* 01F1 */ "\x49\x8b\xce"                         /* mov rcx, r14                     */
  /* 01F4 */ "\x4c\x8b\xf8"                         /* mov r15, rax                     */
  /* 01F7 */ "\xff\xd3"                             /* call rbx                         */
  /* 01F9 */ "\x4c\x8b\xf0"                         /* mov r14, rax                     */
  /* 01FC */ "\x4d\x85\xe4"                         /* test r12, r12                    */
  /* 01FF */ "\x74\x45"                             /* jz 0x246                         */
  /* 0201 */ "\x48\x85\xf6"                         /* test rsi, rsi                    */
  /* 0204 */ "\x74\x40"                             /* jz 0x246                         */
  /* 0206 */ "\x48\x85\xc0"                         /* test rax, rax                    */
  /* 0209 */ "\x74\x3b"                             /* jz 0x246                         */
  /* 020B */ "\x4d\x85\xff"                         /* test r15, r15                    */
  /* 020E */ "\x74\x36"                             /* jz 0x246                         */
  /* 0210 */ "\x48\x85\xff"                         /* test rdi, rdi                    */
  /* 0213 */ "\x74\x31"                             /* jz 0x246                         */
  /* 0215 */ "\xba\x01\x00\x00\x00"                 /* mov edx, 0x1                     */
  /* 021A */ "\x4c\x8d\x45\xc7"                     /* lea r8, [rbp-0x39]               */
  /* 021E */ "\x8d\x4a\x01"                         /* lea ecx, [rdx+0x1]               */
  /* 0221 */ "\x41\xff\xd4"                         /* call r12                         */
  /* 0224 */ "\x48\x8b\xd8"                         /* mov rbx, rax                     */
  /* 0227 */ "\x48\x85\xc0"                         /* test rax, rax                    */
  /* 022A */ "\x74\x1a"                             /* jz 0x246                         */
  /* 022C */ "\x48\x8b\xc8"                         /* mov rcx, rax                     */
  /* 022F */ "\xff\xd6"                             /* call rsi                         */
  /* 0231 */ "\x48\x8b\xcb"                         /* mov rcx, rbx                     */
  /* 0234 */ "\xff\xd7"                             /* call rdi                         */
  /* 0236 */ "\x45\x33\xc9"                         /* xor r9d, r9d                     */
  /* 0239 */ "\x4c\x8d\x45\xd7"                     /* lea r8, [rbp-0x29]               */
  /* 023D */ "\x48\x8d\x55\xf7"                     /* lea rdx, [rbp-0x9]               */
  /* 0241 */ "\x33\xc9"                             /* xor ecx, ecx                     */
  /* 0243 */ "\x41\xff\xd6"                         /* call r14                         */
  /* 0246 */ "\x4c\x8d\x9c\x24\xe0\x00\x00\x00"     /* lea r11, [rsp+0xe0]              */
  /* 024E */ "\x49\x8b\x5b\x30"                     /* mov rbx, [r11+0x30]              */
  /* 0252 */ "\x49\x8b\x73\x40"                     /* mov rsi, [r11+0x40]              */
  /* 0256 */ "\x49\x8b\xe3"                         /* mov rsp, r11                     */
  /* 0259 */ "\x41\x5f"                             /* pop r15                          */
  /* 025B */ "\x41\x5e"                             /* pop r14                          */
  /* 025D */ "\x41\x5c"                             /* pop r12                          */
  /* 025F */ "\x5f"                                 /* pop rdi                          */
  /* 0260 */ "\x5d"                                 /* pop rbp                          */
  /* 0261 */ "\xc3"                                 /* ret                              */
  /* 0262 */ "\x4c\x8d\x45\x07"                     /* lea r8, [rbp+0x7]                */
  /* 0266 */ "\x48\x8b\xd7"                         /* mov rdx, rdi                     */
  /* 0269 */ "\x48\x8b\xcb"                         /* mov rcx, rbx                     */
  /* 026C */ "\xe8\x1b\x00\x00\x00"                 /* call 0x28c                       */
  /* 0271 */ "\x4c\x8d\x45\xe7"                     /* lea r8, [rbp-0x19]               */
  /* 0275 */ "\x48\x8b\xd7"                         /* mov rdx, rdi                     */
  /* 0278 */ "\x48\x8b\xcb"                         /* mov rcx, rbx                     */
  /* 027B */ "\x48\x8b\xf0"                         /* mov rsi, rax                     */
  /* 027E */ "\xe8\x09\x00\x00\x00"                 /* call 0x28c                       */
  /* 0283 */ "\x48\x8b\xd8"                         /* mov rbx, rax                     */
  /* 0286 */ "\xe9\xfe\xfe\xff\xff"                 /* jmp 0x189                        */
  /* 028B */ "\xcc"                                 /* int3                             */
  /* 028C */ "\x48\x8b\xc4"                         /* mov rax, rsp                     */
  /* 028F */ "\x48\x89\x58\x08"                     /* mov [rax+0x8], rbx               */
  /* 0293 */ "\x48\x89\x68\x10"                     /* mov [rax+0x10], rbp              */
  /* 0297 */ "\x48\x89\x70\x18"                     /* mov [rax+0x18], rsi              */
  /* 029B */ "\x48\x89\x78\x20"                     /* mov [rax+0x20], rdi              */
  /* 029F */ "\x41\x56"                             /* push r14                         */
  /* 02A1 */ "\x48\x83\xec\x20"                     /* sub rsp, 0x20                    */
  /* 02A5 */ "\x8b\x31"                             /* mov esi, [rcx]                   */
  /* 02A7 */ "\x33\xdb"                             /* xor ebx, ebx                     */
  /* 02A9 */ "\x8b\x79\x10"                         /* mov edi, [rcx+0x10]              */
  /* 02AC */ "\x48\x03\xf2"                         /* add rsi, rdx                     */
  /* 02AF */ "\x48\x03\xfa"                         /* add rdi, rdx                     */
  /* 02B2 */ "\x4d\x8b\xf0"                         /* mov r14, r8                      */
  /* 02B5 */ "\x48\x8b\xea"                         /* mov rbp, rdx                     */
  /* 02B8 */ "\x48\x8b\x06"                         /* mov rax, [rsi]                   */
  /* 02BB */ "\x48\x85\xc0"                         /* test rax, rax                    */
  /* 02BE */ "\x74\x2f"                             /* jz 0x2ef                         */
  /* 02C0 */ "\x48\x2b\xf7"                         /* sub rsi, rdi                     */
  /* 02C3 */ "\x48\x85\xc0"                         /* test rax, rax                    */
  /* 02C6 */ "\x78\x15"                             /* js 0x2dd                         */
  /* 02C8 */ "\x8b\xc0"                             /* mov eax, eax                     */
  /* 02CA */ "\x48\x8d\x55\x02"                     /* lea rdx, [rbp+0x2]               */
  /* 02CE */ "\x48\x03\xd0"                         /* add rdx, rax                     */
  /* 02D1 */ "\x49\x8b\xce"                         /* mov rcx, r14                     */
  /* 02D4 */ "\xe8\x37\x00\x00\x00"                 /* call 0x310                       */
  /* 02D9 */ "\x85\xc0"                             /* test eax, eax                    */
  /* 02DB */ "\x74\x0f"                             /* jz 0x2ec                         */
  /* 02DD */ "\x48\x83\xc7\x08"                     /* add rdi, 0x8                     */
  /* 02E1 */ "\x48\x8b\x04\x3e"                     /* mov rax, [rsi+rdi]               */
  /* 02E5 */ "\x48\x85\xc0"                         /* test rax, rax                    */
  /* 02E8 */ "\x74\x05"                             /* jz 0x2ef                         */
  /* 02EA */ "\xeb\xd7"                             /* jmp 0x2c3                        */
  /* 02EC */ "\x48\x8b\x1f"                         /* mov rbx, [rdi]                   */
  /* 02EF */ "\x48\x8b\x6c\x24\x38"                 /* mov rbp, [rsp+0x38]              */
  /* 02F4 */ "\x48\x8b\xc3"                         /* mov rax, rbx                     */
  /* 02F7 */ "\x48\x8b\x5c\x24\x30"                 /* mov rbx, [rsp+0x30]              */
  /* 02FC */ "\x48\x8b\x74\x24\x40"                 /* mov rsi, [rsp+0x40]              */
  /* 0301 */ "\x48\x8b\x7c\x24\x48"                 /* mov rdi, [rsp+0x48]              */
  /* 0306 */ "\x48\x83\xc4\x20"                     /* add rsp, 0x20                    */
  /* 030A */ "\x41\x5e"                             /* pop r14                          */
  /* 030C */ "\xc3"                                 /* ret                              */
  /* 030D */ "\xcc"                                 /* int3                             */
  /* 030E */ "\xcc"                                 /* int3                             */
  /* 030F */ "\xcc"                                 /* int3                             */
  /* 0310 */ "\x44\x8a\x01"                         /* mov r8b, [rcx]                   */
  /* 0313 */ "\x45\x84\xc0"                         /* test r8b, r8b                    */
  /* 0316 */ "\x74\x1a"                             /* jz 0x332                         */
  /* 0318 */ "\x41\x8a\xc0"                         /* mov al, r8b                      */
  /* 031B */ "\x48\x2b\xca"                         /* sub rcx, rdx                     */
  /* 031E */ "\x44\x8a\xc0"                         /* mov r8b, al                      */
  /* 0321 */ "\x3a\x02"                             /* cmp al, [rdx]                    */
  /* 0323 */ "\x75\x0d"                             /* jnz 0x332                        */
  /* 0325 */ "\x48\xff\xc2"                         /* inc rdx                          */
  /* 0328 */ "\x8a\x04\x11"                         /* mov al, [rcx+rdx]                */
  /* 032B */ "\x44\x8a\xc0"                         /* mov r8b, al                      */
  /* 032E */ "\x84\xc0"                             /* test al, al                      */
  /* 0330 */ "\x75\xec"                             /* jnz 0x31e                        */
  /* 0332 */ "\x0f\xb6\x0a"                         /* movzx ecx, byte [rdx]            */
  /* 0335 */ "\x41\x0f\xb6\xc0"                     /* movzx eax, r8b                   */
  /* 0339 */ "\x2b\xc1"                             /* sub eax, ecx                     */
  /* 033B */ "\xc3"                                 /* ret                              */
};