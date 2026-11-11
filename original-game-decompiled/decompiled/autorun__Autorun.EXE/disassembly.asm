; Ghidra listing for Autorun.EXE (x86:LE:32:default). Labels and types are tool-generated unless they came from the binary.
00400000  IMAGE_DOS_HEADER 
00400080  IMAGE_RICH_HEADER 
; undefined 24 bytes at 004000b0
004000c8  IMAGE_NT_HEADERS32 
004001c0  IMAGE_SECTION_HEADER 
004001e8  IMAGE_SECTION_HEADER 
00400210  IMAGE_SECTION_HEADER 
00400238  IMAGE_SECTION_HEADER 
; undefined 416 bytes at 00400260

; ==== FUNCTION FUN_00401000 entry=00401000 sig=undefined __stdcall FUN_00401000(void)
00401000  56                   PUSH ESI
00401001  8b3568304000         MOV ESI,dword ptr [0x00403068]
00401007  57                   PUSH EDI
00401008  6800000100           PUSH 0x10000
0040100d  6a02                 PUSH 0x2
0040100f  ffd6                 CALL ESI
00401011  8b3d88304000         MOV EDI,dword ptr [0x00403088]
00401017  50                   PUSH EAX
00401018  a370434000           MOV [0x00404370],EAX
0040101d  ffd7                 CALL EDI
0040101f  6840800000           PUSH 0x8040
00401024  6a02                 PUSH 0x2
00401026  a36c434000           MOV [0x0040436c],EAX
0040102b  ffd6                 CALL ESI
0040102d  50                   PUSH EAX
0040102e  a3a8434000           MOV [0x004043a8],EAX
00401033  ffd7                 CALL EDI
00401035  6800040000           PUSH 0x400
0040103a  6a02                 PUSH 0x2
0040103c  a398434000           MOV [0x00404398],EAX
00401041  ffd6                 CALL ESI
00401043  50                   PUSH EAX
00401044  a388434000           MOV [0x00404388],EAX
00401049  ffd7                 CALL EDI
0040104b  a374434000           MOV [0x00404374],EAX
00401050  832000               AND dword ptr [EAX],0x0
00401053  6a01                 PUSH 0x1
00401055  58                   POP EAX
00401056  6a08                 PUSH 0x8
00401058  8bc8                 MOV ECX,EAX
0040105a  5a                   POP EDX
0040105b  f6c101               TEST CL,0x1
0040105e  740a                 JZ 0x0040106a
00401060  d1e9                 SHR ECX,0x1
00401062  81f12083b8ed         XOR ECX,0xedb88320
00401068  eb02                 JMP 0x0040106c
0040106a  d1e9                 SHR ECX,0x1
0040106c  4a                   DEC EDX
0040106d  75ec                 JNZ 0x0040105b
0040106f  8b1574434000         MOV EDX,dword ptr [0x00404374]
00401075  890c82               MOV dword ptr [EDX + EAX*0x4],ECX
00401078  40                   INC EAX
00401079  3d00010000           CMP EAX,0x100
0040107e  7cd6                 JL 0x00401056
00401080  5f                   POP EDI
00401081  5e                   POP ESI
00401082  c3                   RET

; ==== FUNCTION FUN_00401083 entry=00401083 sig=undefined __stdcall FUN_00401083(void)
00401083  56                   PUSH ESI
00401084  8b357c304000         MOV ESI,dword ptr [0x0040307c]
0040108a  57                   PUSH EDI
0040108b  ff3570434000         PUSH dword ptr [0x00404370]
00401091  ffd6                 CALL ESI
00401093  ff3570434000         PUSH dword ptr [0x00404370]
00401099  8b3d6c304000         MOV EDI,dword ptr [0x0040306c]
0040109f  ffd7                 CALL EDI
004010a1  ff35a8434000         PUSH dword ptr [0x004043a8]
004010a7  ffd6                 CALL ESI
004010a9  ff35a8434000         PUSH dword ptr [0x004043a8]
004010af  ffd7                 CALL EDI
004010b1  ff3588434000         PUSH dword ptr [0x00404388]
004010b7  ffd6                 CALL ESI
004010b9  ff3588434000         PUSH dword ptr [0x00404388]
004010bf  ffd7                 CALL EDI
004010c1  5f                   POP EDI
004010c2  5e                   POP ESI
004010c3  c3                   RET

; ==== FUNCTION FUN_004010c4 entry=004010c4 sig=int __cdecl FUN_004010c4(uint * param_1)
004010c4  55                   PUSH EBP
004010c5  8bec                 MOV EBP,ESP
004010c7  51                   PUSH ECX
004010c8  51                   PUSH ECX
004010c9  a1ac434000           MOV EAX,[0x004043ac]
004010ce  56                   PUSH ESI
004010cf  8945fc               MOV dword ptr [EBP + -0x4],EAX
004010d2  a19c434000           MOV EAX,[0x0040439c]
004010d7  8945f8               MOV dword ptr [EBP + -0x8],EAX
004010da  8d45f8               LEA EAX,[EBP + -0x8]
004010dd  50                   PUSH EAX
004010de  8d45fc               LEA EAX,[EBP + -0x4]
004010e1  50                   PUSH EAX
004010e2  6a01                 PUSH 0x1
004010e4  e8540c0000           CALL 0x00401d3d
004010e9  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
004010ec  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
004010ef  83e001               AND EAX,0x1
004010f2  83c40c               ADD ESP,0xc
004010f5  8901                 MOV dword ptr [ECX],EAX
004010f7  8d45f8               LEA EAX,[EBP + -0x8]
004010fa  50                   PUSH EAX
004010fb  8d45fc               LEA EAX,[EBP + -0x4]
004010fe  50                   PUSH EAX
004010ff  6a01                 PUSH 0x1
00401101  e8830c0000           CALL 0x00401d89
00401106  83c40c               ADD ESP,0xc
00401109  8d45f8               LEA EAX,[EBP + -0x8]
0040110c  50                   PUSH EAX
0040110d  8d45fc               LEA EAX,[EBP + -0x4]
00401110  50                   PUSH EAX
00401111  6a02                 PUSH 0x2
00401113  e8250c0000           CALL 0x00401d3d
00401118  8b75fc               MOV ESI,dword ptr [EBP + -0x4]
0040111b  83c40c               ADD ESP,0xc
0040111e  8d45f8               LEA EAX,[EBP + -0x8]
00401121  83e603               AND ESI,0x3
00401124  50                   PUSH EAX
00401125  8d45fc               LEA EAX,[EBP + -0x4]
00401128  50                   PUSH EAX
00401129  6a02                 PUSH 0x2
0040112b  e8590c0000           CALL 0x00401d89
00401130  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
00401133  83c40c               ADD ESP,0xc
00401136  a3ac434000           MOV [0x004043ac],EAX
0040113b  8b45f8               MOV EAX,dword ptr [EBP + -0x8]
0040113e  83ee00               SUB ESI,0x0
00401141  a39c434000           MOV [0x0040439c],EAX
00401146  7419                 JZ 0x00401161
00401148  4e                   DEC ESI
00401149  740f                 JZ 0x0040115a
0040114b  4e                   DEC ESI
0040114c  7405                 JZ 0x00401153
0040114e  6afe                 PUSH -0x2
00401150  58                   POP EAX
00401151  eb13                 JMP 0x00401166
00401153  e868080000           CALL 0x004019c0
00401158  eb0c                 JMP 0x00401166
0040115a  e86d070000           CALL 0x004018cc
0040115f  eb05                 JMP 0x00401166
00401161  e85a060000           CALL 0x004017c0
00401166  5e                   POP ESI
00401167  c9                   LEAVE
00401168  c3                   RET

; ==== FUNCTION FUN_00401169 entry=00401169 sig=undefined4 __cdecl FUN_00401169(uint param_1, uint param_2, uint * param_3, int param_4, int param_5, int * param_6, uint * param_7)
00401169  55                   PUSH EBP
0040116a  8bec                 MOV EBP,ESP
0040116c  81ec88050000         SUB ESP,0x588
00401172  8b5510               MOV EDX,dword ptr [EBP + 0x10]
00401175  53                   PUSH EBX
00401176  8b5d08               MOV EBX,dword ptr [EBP + 0x8]
00401179  56                   PUSH ESI
0040117a  57                   PUSH EDI
0040117b  6a11                 PUSH 0x11
0040117d  59                   POP ECX
0040117e  33c0                 XOR EAX,EAX
00401180  8dbd7cffffff         LEA EDI,[EBP + 0xffffff7c]
00401186  8bf3                 MOV ESI,EBX
00401188  f3ab                 STOSD.REP ES:EDI
0040118a  8b02                 MOV EAX,dword ptr [EDX]
0040118c  83c204               ADD EDX,0x4
0040118f  ff84857cffffff       INC dword ptr [EBP + EAX*0x4 + 0xffffff7c]
00401196  8d84857cffffff       LEA EAX,[EBP + EAX*0x4 + 0xffffff7c]
0040119d  4e                   DEC ESI
0040119e  75ea                 JNZ 0x0040118a
004011a0  399d7cffffff         CMP dword ptr [EBP + 0xffffff7c],EBX
004011a6  7513                 JNZ 0x004011bb
004011a8  8b4520               MOV EAX,dword ptr [EBP + 0x20]
004011ab  832000               AND dword ptr [EAX],0x0
004011ae  8b451c               MOV EAX,dword ptr [EBP + 0x1c]
004011b1  832000               AND dword ptr [EAX],0x0
004011b4  33c0                 XOR EAX,EAX
004011b6  5f                   POP EDI
004011b7  5e                   POP ESI
004011b8  5b                   POP EBX
004011b9  c9                   LEAVE
004011ba  c3                   RET
004011bb  8b7520               MOV ESI,dword ptr [EBP + 0x20]
004011be  6a01                 PUSH 0x1
004011c0  5b                   POP EBX
004011c1  8d4580               LEA EAX,[EBP + -0x80]
004011c4  8b16                 MOV EDX,dword ptr [ESI]
004011c6  8bcb                 MOV ECX,EBX
004011c8  895520               MOV dword ptr [EBP + 0x20],EDX
004011cb  33ff                 XOR EDI,EDI
004011cd  3938                 CMP dword ptr [EAX],EDI
004011cf  7509                 JNZ 0x004011da
004011d1  41                   INC ECX
004011d2  83c004               ADD EAX,0x4
004011d5  83f910               CMP ECX,0x10
004011d8  76f1                 JBE 0x004011cb
004011da  3bd1                 CMP EDX,ECX
004011dc  894dfc               MOV dword ptr [EBP + -0x4],ECX
004011df  7303                 JNC 0x004011e4
004011e1  894d20               MOV dword ptr [EBP + 0x20],ECX
004011e4  6a10                 PUSH 0x10
004011e6  8d45bc               LEA EAX,[EBP + -0x44]
004011e9  5a                   POP EDX
004011ea  3938                 CMP dword ptr [EAX],EDI
004011ec  7508                 JNZ 0x004011f6
004011ee  4a                   DEC EDX
004011ef  83e804               SUB EAX,0x4
004011f2  3bd7                 CMP EDX,EDI
004011f4  75f4                 JNZ 0x004011ea
004011f6  395520               CMP dword ptr [EBP + 0x20],EDX
004011f9  8955ec               MOV dword ptr [EBP + -0x14],EDX
004011fc  7603                 JBE 0x00401201
004011fe  895520               MOV dword ptr [EBP + 0x20],EDX
00401201  8b4520               MOV EAX,dword ptr [EBP + 0x20]
00401204  d3e3                 SHL EBX,CL
00401206  3bca                 CMP ECX,EDX
00401208  8906                 MOV dword ptr [ESI],EAX
0040120a  731b                 JNC 0x00401227
0040120c  8d848d7cffffff       LEA EAX,[EBP + ECX*0x4 + 0xffffff7c]
00401213  2b18                 SUB EBX,dword ptr [EAX]
00401215  7825                 JS 0x0040123c
00401217  41                   INC ECX
00401218  8d341b               LEA ESI,[EBX + EBX*0x1]
0040121b  83c004               ADD EAX,0x4
0040121e  3bca                 CMP ECX,EDX
00401220  8975e8               MOV dword ptr [EBP + -0x18],ESI
00401223  8bde                 MOV EBX,ESI
00401225  72ec                 JC 0x00401213
00401227  8b8c957cffffff       MOV ECX,dword ptr [EBP + EDX*0x4 + 0xffffff7c]
0040122e  8d84957cffffff       LEA EAX,[EBP + EDX*0x4 + 0xffffff7c]
00401235  2bd9                 SUB EBX,ECX
00401237  895de8               MOV dword ptr [EBP + -0x18],EBX
0040123a  7907                 JNS 0x00401243
0040123c  6afd                 PUSH -0x3
0040123e  e9d7020000           JMP 0x0040151a
00401243  03cb                 ADD ECX,EBX
00401245  89bd3cffffff         MOV dword ptr [EBP + 0xffffff3c],EDI
0040124b  8908                 MOV dword ptr [EAX],ECX
0040124d  8d4d80               LEA ECX,[EBP + -0x80]
00401250  8dbd40ffffff         LEA EDI,[EBP + 0xffffff40]
00401256  33c0                 XOR EAX,EAX
00401258  4a                   DEC EDX
00401259  740c                 JZ 0x00401267
0040125b  0301                 ADD EAX,dword ptr [ECX]
0040125d  83c104               ADD ECX,0x4
00401260  8907                 MOV dword ptr [EDI],EAX
00401262  83c704               ADD EDI,0x4
00401265  ebf1                 JMP 0x00401258
00401267  8b7510               MOV ESI,dword ptr [EBP + 0x10]
0040126a  33d2                 XOR EDX,EDX
0040126c  8b06                 MOV EAX,dword ptr [ESI]
0040126e  33ff                 XOR EDI,EDI
00401270  83c604               ADD ESI,0x4
00401273  3bc7                 CMP EAX,EDI
00401275  7418                 JZ 0x0040128f
00401277  8b8c8538ffffff       MOV ECX,dword ptr [EBP + EAX*0x4 + 0xffffff38]
0040127e  8d848538ffffff       LEA EAX,[EBP + EAX*0x4 + 0xffffff38]
00401285  89948d78faffff       MOV dword ptr [EBP + ECX*0x4 + 0xfffffa78],EDX
0040128c  41                   INC ECX
0040128d  8908                 MOV dword ptr [EAX],ECX
0040128f  42                   INC EDX
00401290  3b5508               CMP EDX,dword ptr [EBP + 0x8]
00401293  72d7                 JC 0x0040126c
00401295  8b4520               MOV EAX,dword ptr [EBP + 0x20]
00401298  834df8ff             OR dword ptr [EBP + -0x8],0xffffffff
0040129c  8d8d78faffff         LEA ECX,[EBP + 0xfffffa78]
004012a2  33f6                 XOR ESI,ESI
004012a4  894d10               MOV dword ptr [EBP + 0x10],ECX
004012a7  8b4dfc               MOV ECX,dword ptr [EBP + -0x4]
004012aa  f7d8                 NEG EAX
004012ac  3b4dec               CMP ECX,dword ptr [EBP + -0x14]
004012af  897dd0               MOV dword ptr [EBP + -0x30],EDI
004012b2  89bdf8feffff         MOV dword ptr [EBP + 0xfffffef8],EDI
004012b8  89bd38ffffff         MOV dword ptr [EBP + 0xffffff38],EDI
004012be  897df4               MOV dword ptr [EBP + -0xc],EDI
004012c1  0f8f25020000         JG 0x004014ec
004012c7  8d8c8d7cffffff       LEA ECX,[EBP + ECX*0x4 + 0xffffff7c]
004012ce  894ddc               MOV dword ptr [EBP + -0x24],ECX
004012d1  8b4ddc               MOV ECX,dword ptr [EBP + -0x24]
004012d4  8b09                 MOV ECX,dword ptr [ECX]
004012d6  8bd1                 MOV EDX,ECX
004012d8  49                   DEC ECX
004012d9  85d2                 TEST EDX,EDX
004012db  894df0               MOV dword ptr [EBP + -0x10],ECX
004012de  0f84f5010000         JZ 0x004014d9
004012e4  8b4d20               MOV ECX,dword ptr [EBP + 0x20]
004012e7  8d1401               LEA EDX,[ECX + EAX*0x1]
004012ea  3955fc               CMP dword ptr [EBP + -0x4],EDX
004012ed  0f8e07010000         JLE 0x004013fa
004012f3  8b4df0               MOV ECX,dword ptr [EBP + -0x10]
004012f6  8b7dec               MOV EDI,dword ptr [EBP + -0x14]
004012f9  41                   INC ECX
004012fa  8955d4               MOV dword ptr [EBP + -0x2c],EDX
004012fd  894dc8               MOV dword ptr [EBP + -0x38],ECX
00401300  8b4d20               MOV ECX,dword ptr [EBP + 0x20]
00401303  f7d9                 NEG ECX
00401305  894dcc               MOV dword ptr [EBP + -0x34],ECX
00401308  2bf8                 SUB EDI,EAX
0040130a  eb03                 JMP 0x0040130f
0040130c  8b4dcc               MOV ECX,dword ptr [EBP + -0x34]
0040130f  8b5520               MOV EDX,dword ptr [EBP + 0x20]
00401312  ff45f8               INC dword ptr [EBP + -0x8]
00401315  0155d4               ADD dword ptr [EBP + -0x2c],EDX
00401318  03f9                 ADD EDI,ECX
0040131a  03c2                 ADD EAX,EDX
0040131c  3bd7                 CMP EDX,EDI
0040131e  8945d8               MOV dword ptr [EBP + -0x28],EAX
00401321  897dc4               MOV dword ptr [EBP + -0x3c],EDI
00401324  7c05                 JL 0x0040132b
00401326  8b55ec               MOV EDX,dword ptr [EBP + -0x14]
00401329  2bd0                 SUB EDX,EAX
0040132b  8b5dfc               MOV EBX,dword ptr [EBP + -0x4]
0040132e  6a01                 PUSH 0x1
00401330  2bd8                 SUB EBX,EAX
00401332  58                   POP EAX
00401333  8bcb                 MOV ECX,EBX
00401335  d3e0                 SHL EAX,CL
00401337  3b45c8               CMP EAX,dword ptr [EBP + -0x38]
0040133a  7620                 JBE 0x0040135c
0040133c  8b75dc               MOV ESI,dword ptr [EBP + -0x24]
0040133f  83c9ff               OR ECX,0xffffffff
00401342  2b4df0               SUB ECX,dword ptr [EBP + -0x10]
00401345  03c1                 ADD EAX,ECX
00401347  43                   INC EBX
00401348  3bda                 CMP EBX,EDX
0040134a  7310                 JNC 0x0040135c
0040134c  8b4e04               MOV ECX,dword ptr [ESI + 0x4]
0040134f  83c604               ADD ESI,0x4
00401352  03c0                 ADD EAX,EAX
00401354  3bc1                 CMP EAX,ECX
00401356  7604                 JBE 0x0040135c
00401358  2bc1                 SUB EAX,ECX
0040135a  ebeb                 JMP 0x00401347
0040135c  6a01                 PUSH 0x1
0040135e  8bcb                 MOV ECX,EBX
00401360  5e                   POP ESI
00401361  d3e6                 SHL ESI,CL
00401363  8d04f508000000       LEA EAX,[ESI*0x8 + 0x8]
0040136a  50                   PUSH EAX
0040136b  e8960d0000           CALL 0x00402106
00401370  85c0                 TEST EAX,EAX
00401372  59                   POP ECX
00401373  0f848d010000         JZ 0x00401506
00401379  8b551c               MOV EDX,dword ptr [EBP + 0x1c]
0040137c  8d4808               LEA ECX,[EAX + 0x8]
0040137f  89451c               MOV dword ptr [EBP + 0x1c],EAX
00401382  894dd0               MOV dword ptr [EBP + -0x30],ECX
00401385  890a                 MOV dword ptr [EDX],ECX
00401387  8b1560434000         MOV EDX,dword ptr [0x00404360]
0040138d  8d543201             LEA EDX,[EDX + ESI*0x1 + 0x1]
00401391  891560434000         MOV dword ptr [0x00404360],EDX
00401397  8b55f8               MOV EDX,dword ptr [EBP + -0x8]
0040139a  832000               AND dword ptr [EAX],0x0
0040139d  8bc2                 MOV EAX,EDX
0040139f  c1e002               SHL EAX,0x2
004013a2  8945c0               MOV dword ptr [EBP + -0x40],EAX
004013a5  8d8405f8feffff       LEA EAX,[EBP + EAX*0x1 + 0xfffffef8]
004013ac  85d2                 TEST EDX,EDX
004013ae  8908                 MOV dword ptr [EAX],ECX
004013b0  7436                 JZ 0x004013e8
004013b2  8b55c0               MOV EDX,dword ptr [EBP + -0x40]
004013b5  8b7df4               MOV EDI,dword ptr [EBP + -0xc]
004013b8  8b40fc               MOV EAX,dword ptr [EAX + -0x4]
004013bb  80c310               ADD BL,0x10
004013be  89bc1538ffffff       MOV dword ptr [EBP + EDX*0x1 + 0xffffff38],EDI
004013c5  8bd1                 MOV EDX,ECX
004013c7  8a4d20               MOV CL,byte ptr [EBP + 0x20]
004013ca  885de7               MOV byte ptr [EBP + -0x19],BL
004013cd  884de6               MOV byte ptr [EBP + -0x1a],CL
004013d0  8b4dd8               MOV ECX,dword ptr [EBP + -0x28]
004013d3  2b4d20               SUB ECX,dword ptr [EBP + 0x20]
004013d6  8955e0               MOV dword ptr [EBP + -0x20],EDX
004013d9  d3ef                 SHR EDI,CL
004013db  8b4de4               MOV ECX,dword ptr [EBP + -0x1c]
004013de  8914f8               MOV dword ptr [EAX + EDI*0x8],EDX
004013e1  894cf804             MOV dword ptr [EAX + EDI*0x8 + 0x4],ECX
004013e5  8b7dc4               MOV EDI,dword ptr [EBP + -0x3c]
004013e8  8b45d4               MOV EAX,dword ptr [EBP + -0x2c]
004013eb  3945fc               CMP dword ptr [EBP + -0x4],EAX
004013ee  8b45d8               MOV EAX,dword ptr [EBP + -0x28]
004013f1  0f8f15ffffff         JG 0x0040130c
004013f7  8b5de8               MOV EBX,dword ptr [EBP + -0x18]
004013fa  8a4dfc               MOV CL,byte ptr [EBP + -0x4]
004013fd  2ac8                 SUB CL,AL
004013ff  884de6               MOV byte ptr [EBP + -0x1a],CL
00401402  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
00401405  8d8c8d78faffff       LEA ECX,[EBP + ECX*0x4 + 0xfffffa78]
0040140c  394d10               CMP dword ptr [EBP + 0x10],ECX
0040140f  7206                 JC 0x00401417
00401411  804de7ff             OR byte ptr [EBP + -0x19],0xff
00401415  eb3f                 JMP 0x00401456
00401417  8b4d10               MOV ECX,dword ptr [EBP + 0x10]
0040141a  8b09                 MOV ECX,dword ptr [ECX]
0040141c  394d0c               CMP dword ptr [EBP + 0xc],ECX
0040141f  7618                 JBE 0x00401439
00401421  8b5510               MOV EDX,dword ptr [EBP + 0x10]
00401424  81f900010000         CMP ECX,0x100
0040142a  0f92c1               SETC CL
0040142d  668b12               MOV DX,word ptr [EDX]
00401430  83c10f               ADD ECX,0xf
00401433  668955e4             MOV word ptr [EBP + -0x1c],DX
00401437  eb16                 JMP 0x0040144f
00401439  2b4d0c               SUB ECX,dword ptr [EBP + 0xc]
0040143c  8b5514               MOV EDX,dword ptr [EBP + 0x14]
0040143f  d1e1                 SHL ECX,0x1
00401441  668b140a             MOV DX,word ptr [EDX + ECX*0x1]
00401445  668955e4             MOV word ptr [EBP + -0x1c],DX
00401449  8b5518               MOV EDX,dword ptr [EBP + 0x18]
0040144c  8a0c0a               MOV CL,byte ptr [EDX + ECX*0x1]
0040144f  83451004             ADD dword ptr [EBP + 0x10],0x4
00401453  884de7               MOV byte ptr [EBP + -0x19],CL
00401456  8b4dfc               MOV ECX,dword ptr [EBP + -0x4]
00401459  8b55f4               MOV EDX,dword ptr [EBP + -0xc]
0040145c  6a01                 PUSH 0x1
0040145e  2bc8                 SUB ECX,EAX
00401460  5f                   POP EDI
00401461  d3e7                 SHL EDI,CL
00401463  8bc8                 MOV ECX,EAX
00401465  d3ea                 SHR EDX,CL
00401467  3bd6                 CMP EDX,ESI
00401469  7321                 JNC 0x0040148c
0040146b  8b4dd0               MOV ECX,dword ptr [EBP + -0x30]
0040146e  8d0cd1               LEA ECX,[ECX + EDX*0x8]
00401471  8b5de0               MOV EBX,dword ptr [EBP + -0x20]
00401474  03d7                 ADD EDX,EDI
00401476  8919                 MOV dword ptr [ECX],EBX
00401478  8b5de4               MOV EBX,dword ptr [EBP + -0x1c]
0040147b  895904               MOV dword ptr [ECX + 0x4],EBX
0040147e  8bdf                 MOV EBX,EDI
00401480  c1e303               SHL EBX,0x3
00401483  03cb                 ADD ECX,EBX
00401485  3bd6                 CMP EDX,ESI
00401487  72e8                 JC 0x00401471
00401489  8b5de8               MOV EBX,dword ptr [EBP + -0x18]
0040148c  8b4dfc               MOV ECX,dword ptr [EBP + -0x4]
0040148f  6a01                 PUSH 0x1
00401491  49                   DEC ECX
00401492  5a                   POP EDX
00401493  d3e2                 SHL EDX,CL
00401495  8b4df4               MOV ECX,dword ptr [EBP + -0xc]
00401498  85d1                 TEST ECX,EDX
0040149a  7406                 JZ 0x004014a2
0040149c  33ca                 XOR ECX,EDX
0040149e  d1ea                 SHR EDX,0x1
004014a0  ebf6                 JMP 0x00401498
004014a2  33ca                 XOR ECX,EDX
004014a4  894df4               MOV dword ptr [EBP + -0xc],ECX
004014a7  8b4df8               MOV ECX,dword ptr [EBP + -0x8]
004014aa  8d948d38ffffff       LEA EDX,[EBP + ECX*0x4 + 0xffffff38]
004014b1  6a01                 PUSH 0x1
004014b3  8bc8                 MOV ECX,EAX
004014b5  5f                   POP EDI
004014b6  d3e7                 SHL EDI,CL
004014b8  4f                   DEC EDI
004014b9  237df4               AND EDI,dword ptr [EBP + -0xc]
004014bc  3b3a                 CMP EDI,dword ptr [EDX]
004014be  740b                 JZ 0x004014cb
004014c0  2b4520               SUB EAX,dword ptr [EBP + 0x20]
004014c3  ff4df8               DEC dword ptr [EBP + -0x8]
004014c6  83ea04               SUB EDX,0x4
004014c9  ebe6                 JMP 0x004014b1
004014cb  8b4df0               MOV ECX,dword ptr [EBP + -0x10]
004014ce  ff4df0               DEC dword ptr [EBP + -0x10]
004014d1  85c9                 TEST ECX,ECX
004014d3  0f850bfeffff         JNZ 0x004012e4
004014d9  ff45fc               INC dword ptr [EBP + -0x4]
004014dc  8345dc04             ADD dword ptr [EBP + -0x24],0x4
004014e0  8b4dfc               MOV ECX,dword ptr [EBP + -0x4]
004014e3  3b4dec               CMP ECX,dword ptr [EBP + -0x14]
004014e6  0f8ee5fdffff         JLE 0x004012d1
004014ec  837dec01             CMP dword ptr [EBP + -0x14],0x1
004014f0  0f84befcffff         JZ 0x004011b4
004014f6  85db                 TEST EBX,EBX
004014f8  0f84b6fcffff         JZ 0x004011b4
004014fe  83c8ff               OR EAX,0xffffffff
00401501  e9b0fcffff           JMP 0x004011b6
00401506  837df800             CMP dword ptr [EBP + -0x8],0x0
0040150a  740c                 JZ 0x00401518
0040150c  ffb5f8feffff         PUSH dword ptr [EBP + 0xfffffef8]
00401512  e809000000           CALL 0x00401520
00401517  59                   POP ECX
00401518  6afe                 PUSH -0x2
0040151a  58                   POP EAX
0040151b  e996fcffff           JMP 0x004011b6

; ==== FUNCTION FUN_00401520 entry=00401520 sig=undefined __cdecl FUN_00401520(int param_1)
00401520  8b442404             MOV EAX,dword ptr [ESP + 0x4]
00401524  85c0                 TEST EAX,EAX
00401526  7410                 JZ 0x00401538
00401528  56                   PUSH ESI
00401529  8b70f8               MOV ESI,dword ptr [EAX + -0x8]
0040152c  e8540c0000           CALL 0x00402185
00401531  85f6                 TEST ESI,ESI
00401533  8bc6                 MOV EAX,ESI
00401535  75f2                 JNZ 0x00401529
00401537  5e                   POP ESI
00401538  c3                   RET

; ==== FUNCTION FUN_00401539 entry=00401539 sig=undefined4 __cdecl FUN_00401539(int param_1, uint param_2, int param_3, uint param_4)
00401539  55                   PUSH EBP
0040153a  8bec                 MOV EBP,ESP
0040153c  83ec18               SUB ESP,0x18
0040153f  8b450c               MOV EAX,dword ptr [EBP + 0xc]
00401542  53                   PUSH EBX
00401543  56                   PUSH ESI
00401544  57                   PUSH EDI
00401545  0fb7044558414000     MOVZX EAX,word ptr [EAX*0x2 + 0x404158]
0040154d  8945ec               MOV dword ptr [EBP + -0x14],EAX
00401550  8b4514               MOV EAX,dword ptr [EBP + 0x14]
00401553  0fb7044558414000     MOVZX EAX,word ptr [EAX*0x2 + 0x404158]
0040155b  8945e8               MOV dword ptr [EBP + -0x18],EAX
0040155e  a184434000           MOV EAX,[0x00404384]
00401563  8945f4               MOV dword ptr [EBP + -0xc],EAX
00401566  a1ac434000           MOV EAX,[0x004043ac]
0040156b  8945fc               MOV dword ptr [EBP + -0x4],EAX
0040156e  a19c434000           MOV EAX,[0x0040439c]
00401573  8945f8               MOV dword ptr [EBP + -0x8],EAX
00401576  833dbc42400000       CMP dword ptr [0x004042bc],0x0
0040157d  0f8519020000         JNZ 0x0040179c
00401583  8d45f8               LEA EAX,[EBP + -0x8]
00401586  50                   PUSH EAX
00401587  8d45fc               LEA EAX,[EBP + -0x4]
0040158a  50                   PUSH EAX
0040158b  ff750c               PUSH dword ptr [EBP + 0xc]
0040158e  e8aa070000           CALL 0x00401d3d
00401593  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
00401596  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
00401599  83c40c               ADD ESP,0xc
0040159c  2345ec               AND EAX,dword ptr [EBP + -0x14]
0040159f  0fb65cc107           MOVZX EBX,byte ptr [ECX + EAX*0x8 + 0x7]
004015a4  8d3cc1               LEA EDI,[ECX + EAX*0x8]
004015a7  6a10                 PUSH 0x10
004015a9  5e                   POP ESI
004015aa  3bde                 CMP EBX,ESI
004015ac  764b                 JBE 0x004015f9
004015ae  81fbff000000         CMP EBX,0xff
004015b4  0f84e2010000         JZ 0x0040179c
004015ba  8d45f8               LEA EAX,[EBP + -0x8]
004015bd  50                   PUSH EAX
004015be  8d45fc               LEA EAX,[EBP + -0x4]
004015c1  50                   PUSH EAX
004015c2  0fb64706             MOVZX EAX,byte ptr [EDI + 0x6]
004015c6  50                   PUSH EAX
004015c7  e8bd070000           CALL 0x00401d89
004015cc  83c40c               ADD ESP,0xc
004015cf  8d45f8               LEA EAX,[EBP + -0x8]
004015d2  2bde                 SUB EBX,ESI
004015d4  50                   PUSH EAX
004015d5  8d45fc               LEA EAX,[EBP + -0x4]
004015d8  50                   PUSH EAX
004015d9  53                   PUSH EBX
004015da  e85e070000           CALL 0x00401d3d
004015df  0fb7045d58414000     MOVZX EAX,word ptr [EBX*0x2 + 0x404158]
004015e7  8b0f                 MOV ECX,dword ptr [EDI]
004015e9  83c40c               ADD ESP,0xc
004015ec  2345fc               AND EAX,dword ptr [EBP + -0x4]
004015ef  0fb65cc107           MOVZX EBX,byte ptr [ECX + EAX*0x8 + 0x7]
004015f4  8d3cc1               LEA EDI,[ECX + EAX*0x8]
004015f7  ebb1                 JMP 0x004015aa
004015f9  8d45f8               LEA EAX,[EBP + -0x8]
004015fc  50                   PUSH EAX
004015fd  8d45fc               LEA EAX,[EBP + -0x4]
00401600  50                   PUSH EAX
00401601  0fb64706             MOVZX EAX,byte ptr [EDI + 0x6]
00401605  50                   PUSH EAX
00401606  e87e070000           CALL 0x00401d89
0040160b  83c40c               ADD ESP,0xc
0040160e  3bde                 CMP EBX,ESI
00401610  7537                 JNZ 0x00401649
00401612  8b55f4               MOV EDX,dword ptr [EBP + -0xc]
00401615  8b0d6c434000         MOV ECX,dword ptr [0x0040436c]
0040161b  ff45f4               INC dword ptr [EBP + -0xc]
0040161e  8a4704               MOV AL,byte ptr [EDI + 0x4]
00401621  817df400800000       CMP dword ptr [EBP + -0xc],0x8000
00401628  88040a               MOV byte ptr [EDX + ECX*0x1],AL
0040162b  0f8545ffffff         JNZ 0x00401576
00401631  c7058443400000800000 MOV dword ptr [0x00404384],0x8000
0040163b  e85a070000           CALL 0x00401d9a
00401640  8365f400             AND dword ptr [EBP + -0xc],0x0
00401644  e92dffffff           JMP 0x00401576
00401649  83fb0f               CMP EBX,0xf
0040164c  0f844f010000         JZ 0x004017a1
00401652  8d45f8               LEA EAX,[EBP + -0x8]
00401655  50                   PUSH EAX
00401656  8d45fc               LEA EAX,[EBP + -0x4]
00401659  50                   PUSH EAX
0040165a  53                   PUSH EBX
0040165b  e8dd060000           CALL 0x00401d3d
00401660  0fb7345d58414000     MOVZX ESI,word ptr [EBX*0x2 + 0x404158]
00401668  0fb74704             MOVZX EAX,word ptr [EDI + 0x4]
0040166c  2375fc               AND ESI,dword ptr [EBP + -0x4]
0040166f  83c40c               ADD ESP,0xc
00401672  03f0                 ADD ESI,EAX
00401674  8d45f8               LEA EAX,[EBP + -0x8]
00401677  50                   PUSH EAX
00401678  8d45fc               LEA EAX,[EBP + -0x4]
0040167b  50                   PUSH EAX
0040167c  53                   PUSH EBX
0040167d  e807070000           CALL 0x00401d89
00401682  83c40c               ADD ESP,0xc
00401685  8d45f8               LEA EAX,[EBP + -0x8]
00401688  50                   PUSH EAX
00401689  8d45fc               LEA EAX,[EBP + -0x4]
0040168c  50                   PUSH EAX
0040168d  ff7514               PUSH dword ptr [EBP + 0x14]
00401690  e8a8060000           CALL 0x00401d3d
00401695  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
00401698  8b4d10               MOV ECX,dword ptr [EBP + 0x10]
0040169b  83c40c               ADD ESP,0xc
0040169e  2345e8               AND EAX,dword ptr [EBP + -0x18]
004016a1  0fb65cc107           MOVZX EBX,byte ptr [ECX + EAX*0x8 + 0x7]
004016a6  8d3cc1               LEA EDI,[ECX + EAX*0x8]
004016a9  83fb10               CMP EBX,0x10
004016ac  7644                 JBE 0x004016f2
004016ae  81fbff000000         CMP EBX,0xff
004016b4  0f84e2000000         JZ 0x0040179c
004016ba  8d45f8               LEA EAX,[EBP + -0x8]
004016bd  83eb10               SUB EBX,0x10
004016c0  50                   PUSH EAX
004016c1  8d45fc               LEA EAX,[EBP + -0x4]
004016c4  50                   PUSH EAX
004016c5  0fb64706             MOVZX EAX,byte ptr [EDI + 0x6]
004016c9  50                   PUSH EAX
004016ca  e8ba060000           CALL 0x00401d89
004016cf  83c40c               ADD ESP,0xc
004016d2  8d45f8               LEA EAX,[EBP + -0x8]
004016d5  50                   PUSH EAX
004016d6  8d45fc               LEA EAX,[EBP + -0x4]
004016d9  50                   PUSH EAX
004016da  53                   PUSH EBX
004016db  e85d060000           CALL 0x00401d3d
004016e0  0fb7045d58414000     MOVZX EAX,word ptr [EBX*0x2 + 0x404158]
004016e8  8b0f                 MOV ECX,dword ptr [EDI]
004016ea  83c40c               ADD ESP,0xc
004016ed  2345fc               AND EAX,dword ptr [EBP + -0x4]
004016f0  ebaf                 JMP 0x004016a1
004016f2  8d45f8               LEA EAX,[EBP + -0x8]
004016f5  50                   PUSH EAX
004016f6  8d45fc               LEA EAX,[EBP + -0x4]
004016f9  50                   PUSH EAX
004016fa  0fb64706             MOVZX EAX,byte ptr [EDI + 0x6]
004016fe  50                   PUSH EAX
004016ff  e885060000           CALL 0x00401d89
00401704  83c40c               ADD ESP,0xc
00401707  8d45f8               LEA EAX,[EBP + -0x8]
0040170a  50                   PUSH EAX
0040170b  8d45fc               LEA EAX,[EBP + -0x4]
0040170e  50                   PUSH EAX
0040170f  53                   PUSH EBX
00401710  e828060000           CALL 0x00401d3d
00401715  0fb70c5d58414000     MOVZX ECX,word ptr [EBX*0x2 + 0x404158]
0040171d  234dfc               AND ECX,dword ptr [EBP + -0x4]
00401720  8b45f4               MOV EAX,dword ptr [EBP + -0xc]
00401723  83c40c               ADD ESP,0xc
00401726  2bc1                 SUB EAX,ECX
00401728  0fb74f04             MOVZX ECX,word ptr [EDI + 0x4]
0040172c  2bc1                 SUB EAX,ECX
0040172e  8945f0               MOV dword ptr [EBP + -0x10],EAX
00401731  8d45f8               LEA EAX,[EBP + -0x8]
00401734  50                   PUSH EAX
00401735  8d45fc               LEA EAX,[EBP + -0x4]
00401738  50                   PUSH EAX
00401739  53                   PUSH EBX
0040173a  e84a060000           CALL 0x00401d89
0040173f  83c40c               ADD ESP,0xc
00401742  8b55f0               MOV EDX,dword ptr [EBP + -0x10]
00401745  8b7df4               MOV EDI,dword ptr [EBP + -0xc]
00401748  81e2ff7f0000         AND EDX,0x7fff
0040174e  b800800000           MOV EAX,0x8000
00401753  3bd7                 CMP EDX,EDI
00401755  7604                 JBE 0x0040175b
00401757  2bc2                 SUB EAX,EDX
00401759  eb02                 JMP 0x0040175d
0040175b  2bc7                 SUB EAX,EDI
0040175d  3bc6                 CMP EAX,ESI
0040175f  7602                 JBE 0x00401763
00401761  8bc6                 MOV EAX,ESI
00401763  2bf0                 SUB ESI,EAX
00401765  8b0d6c434000         MOV ECX,dword ptr [0x0040436c]
0040176b  8a1c0a               MOV BL,byte ptr [EDX + ECX*0x1]
0040176e  881c0f               MOV byte ptr [EDI + ECX*0x1],BL
00401771  47                   INC EDI
00401772  42                   INC EDX
00401773  48                   DEC EAX
00401774  75ef                 JNZ 0x00401765
00401776  b800800000           MOV EAX,0x8000
0040177b  8955f0               MOV dword ptr [EBP + -0x10],EDX
0040177e  3bf8                 CMP EDI,EAX
00401780  897df4               MOV dword ptr [EBP + -0xc],EDI
00401783  750e                 JNZ 0x00401793
00401785  a384434000           MOV [0x00404384],EAX
0040178a  e80b060000           CALL 0x00401d9a
0040178f  8365f400             AND dword ptr [EBP + -0xc],0x0
00401793  85f6                 TEST ESI,ESI
00401795  77ab                 JA 0x00401742
00401797  e9dafdffff           JMP 0x00401576
0040179c  83c8ff               OR EAX,0xffffffff
0040179f  eb1a                 JMP 0x004017bb
004017a1  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
004017a4  a3ac434000           MOV [0x004043ac],EAX
004017a9  8b45f8               MOV EAX,dword ptr [EBP + -0x8]
004017ac  a39c434000           MOV [0x0040439c],EAX
004017b1  8b45f4               MOV EAX,dword ptr [EBP + -0xc]
004017b4  a384434000           MOV [0x00404384],EAX
004017b9  33c0                 XOR EAX,EAX
004017bb  5f                   POP EDI
004017bc  5e                   POP ESI
004017bd  5b                   POP EBX
004017be  c9                   LEAVE
004017bf  c3                   RET

; ==== FUNCTION FUN_004017c0 entry=004017c0 sig=undefined4 __stdcall FUN_004017c0(void)
004017c0  55                   PUSH EBP
004017c1  8bec                 MOV EBP,ESP
004017c3  51                   PUSH ECX
004017c4  51                   PUSH ECX
004017c5  a1ac434000           MOV EAX,[0x004043ac]
004017ca  53                   PUSH EBX
004017cb  8b1d84434000         MOV EBX,dword ptr [0x00404384]
004017d1  56                   PUSH ESI
004017d2  8945fc               MOV dword ptr [EBP + -0x4],EAX
004017d5  a19c434000           MOV EAX,[0x0040439c]
004017da  8d4df8               LEA ECX,[EBP + -0x8]
004017dd  57                   PUSH EDI
004017de  51                   PUSH ECX
004017df  8945f8               MOV dword ptr [EBP + -0x8],EAX
004017e2  8d4dfc               LEA ECX,[EBP + -0x4]
004017e5  83e007               AND EAX,0x7
004017e8  51                   PUSH ECX
004017e9  50                   PUSH EAX
004017ea  e89a050000           CALL 0x00401d89
004017ef  83c40c               ADD ESP,0xc
004017f2  8d45f8               LEA EAX,[EBP + -0x8]
004017f5  50                   PUSH EAX
004017f6  8d45fc               LEA EAX,[EBP + -0x4]
004017f9  50                   PUSH EAX
004017fa  6a10                 PUSH 0x10
004017fc  e83c050000           CALL 0x00401d3d
00401801  8b75fc               MOV ESI,dword ptr [EBP + -0x4]
00401804  83c40c               ADD ESP,0xc
00401807  8d45f8               LEA EAX,[EBP + -0x8]
0040180a  bfffff0000           MOV EDI,0xffff
0040180f  50                   PUSH EAX
00401810  8d45fc               LEA EAX,[EBP + -0x4]
00401813  50                   PUSH EAX
00401814  6a10                 PUSH 0x10
00401816  23f7                 AND ESI,EDI
00401818  e86c050000           CALL 0x00401d89
0040181d  83c40c               ADD ESP,0xc
00401820  8d45f8               LEA EAX,[EBP + -0x8]
00401823  50                   PUSH EAX
00401824  8d45fc               LEA EAX,[EBP + -0x4]
00401827  50                   PUSH EAX
00401828  6a10                 PUSH 0x10
0040182a  e80e050000           CALL 0x00401d3d
0040182f  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
00401832  83c40c               ADD ESP,0xc
00401835  f7d0                 NOT EAX
00401837  23c7                 AND EAX,EDI
00401839  3bf0                 CMP ESI,EAX
0040183b  0f8586000000         JNZ 0x004018c7
00401841  8d45f8               LEA EAX,[EBP + -0x8]
00401844  50                   PUSH EAX
00401845  8d45fc               LEA EAX,[EBP + -0x4]
00401848  50                   PUSH EAX
00401849  6a10                 PUSH 0x10
0040184b  e839050000           CALL 0x00401d89
00401850  83c40c               ADD ESP,0xc
00401853  85f6                 TEST ESI,ESI
00401855  7453                 JZ 0x004018aa
00401857  bf00800000           MOV EDI,0x8000
0040185c  833dbc42400000       CMP dword ptr [0x004042bc],0x0
00401863  7562                 JNZ 0x004018c7
00401865  8d45f8               LEA EAX,[EBP + -0x8]
00401868  50                   PUSH EAX
00401869  8d45fc               LEA EAX,[EBP + -0x4]
0040186c  50                   PUSH EAX
0040186d  6a08                 PUSH 0x8
0040186f  e8c9040000           CALL 0x00401d3d
00401874  8b0d6c434000         MOV ECX,dword ptr [0x0040436c]
0040187a  8a45fc               MOV AL,byte ptr [EBP + -0x4]
0040187d  83c40c               ADD ESP,0xc
00401880  88040b               MOV byte ptr [EBX + ECX*0x1],AL
00401883  43                   INC EBX
00401884  3bdf                 CMP EBX,EDI
00401886  750d                 JNZ 0x00401895
00401888  893d84434000         MOV dword ptr [0x00404384],EDI
0040188e  e807050000           CALL 0x00401d9a
00401893  33db                 XOR EBX,EBX
00401895  8d45f8               LEA EAX,[EBP + -0x8]
00401898  50                   PUSH EAX
00401899  8d45fc               LEA EAX,[EBP + -0x4]
0040189c  50                   PUSH EAX
0040189d  6a08                 PUSH 0x8
0040189f  e8e5040000           CALL 0x00401d89
004018a4  83c40c               ADD ESP,0xc
004018a7  4e                   DEC ESI
004018a8  75b2                 JNZ 0x0040185c
004018aa  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
004018ad  891d84434000         MOV dword ptr [0x00404384],EBX
004018b3  a3ac434000           MOV [0x004043ac],EAX
004018b8  8b45f8               MOV EAX,dword ptr [EBP + -0x8]
004018bb  a39c434000           MOV [0x0040439c],EAX
004018c0  33c0                 XOR EAX,EAX
004018c2  5f                   POP EDI
004018c3  5e                   POP ESI
004018c4  5b                   POP EBX
004018c5  c9                   LEAVE
004018c6  c3                   RET
004018c7  83c8ff               OR EAX,0xffffffff
004018ca  ebf6                 JMP 0x004018c2

; ==== FUNCTION FUN_004018cc entry=004018cc sig=int __stdcall FUN_004018cc(void)
004018cc  55                   PUSH EBP
004018cd  8bec                 MOV EBP,ESP
004018cf  81ec90040000         SUB ESP,0x490
004018d5  56                   PUSH ESI
004018d6  57                   PUSH EDI
004018d7  6a08                 PUSH 0x8
004018d9  b990000000           MOV ECX,0x90
004018de  58                   POP EAX
004018df  8dbd70fbffff         LEA EDI,[EBP + 0xfffffb70]
004018e5  f3ab                 STOSD.REP ES:EDI
004018e7  6a70                 PUSH 0x70
004018e9  8dbdb0fdffff         LEA EDI,[EBP + 0xfffffdb0]
004018ef  59                   POP ECX
004018f0  6a09                 PUSH 0x9
004018f2  58                   POP EAX
004018f3  f3ab                 STOSD.REP ES:EDI
004018f5  6a18                 PUSH 0x18
004018f7  8dbd70ffffff         LEA EDI,[EBP + 0xffffff70]
004018fd  59                   POP ECX
004018fe  6a07                 PUSH 0x7
00401900  5a                   POP EDX
00401901  8bc2                 MOV EAX,EDX
00401903  6a08                 PUSH 0x8
00401905  f3ab                 STOSD.REP ES:EDI
00401907  59                   POP ECX
00401908  8d7dd0               LEA EDI,[EBP + -0x30]
0040190b  51                   PUSH ECX
0040190c  8955f8               MOV dword ptr [EBP + -0x8],EDX
0040190f  58                   POP EAX
00401910  f3ab                 STOSD.REP ES:EDI
00401912  8d45f8               LEA EAX,[EBP + -0x8]
00401915  50                   PUSH EAX
00401916  8d45fc               LEA EAX,[EBP + -0x4]
00401919  50                   PUSH EAX
0040191a  6898404000           PUSH 0x404098
0040191f  8d8570fbffff         LEA EAX,[EBP + 0xfffffb70]
00401925  6858404000           PUSH 0x404058
0040192a  50                   PUSH EAX
0040192b  6801010000           PUSH 0x101
00401930  6820010000           PUSH 0x120
00401935  e82ff8ffff           CALL 0x00401169
0040193a  83c41c               ADD ESP,0x1c
0040193d  85c0                 TEST EAX,EAX
0040193f  757b                 JNZ 0x004019bc
00401941  6a1e                 PUSH 0x1e
00401943  8dbd70fbffff         LEA EDI,[EBP + 0xfffffb70]
00401949  59                   POP ECX
0040194a  6a05                 PUSH 0x5
0040194c  58                   POP EAX
0040194d  f3ab                 STOSD.REP ES:EDI
0040194f  8945f0               MOV dword ptr [EBP + -0x10],EAX
00401952  8d45f0               LEA EAX,[EBP + -0x10]
00401955  50                   PUSH EAX
00401956  8d45f4               LEA EAX,[EBP + -0xc]
00401959  50                   PUSH EAX
0040195a  6818414000           PUSH 0x404118
0040195f  8d8570fbffff         LEA EAX,[EBP + 0xfffffb70]
00401965  68d8404000           PUSH 0x4040d8
0040196a  50                   PUSH EAX
0040196b  6a00                 PUSH 0x0
0040196d  6a1e                 PUSH 0x1e
0040196f  e8f5f7ffff           CALL 0x00401169
00401974  8bf0                 MOV ESI,EAX
00401976  83c41c               ADD ESP,0x1c
00401979  83feff               CMP ESI,-0x1
0040197c  7d0d                 JGE 0x0040198b
0040197e  ff75fc               PUSH dword ptr [EBP + -0x4]
00401981  e89afbffff           CALL 0x00401520
00401986  59                   POP ECX
00401987  8bc6                 MOV EAX,ESI
00401989  eb31                 JMP 0x004019bc
0040198b  ff75f0               PUSH dword ptr [EBP + -0x10]
0040198e  ff75f4               PUSH dword ptr [EBP + -0xc]
00401991  ff75f8               PUSH dword ptr [EBP + -0x8]
00401994  ff75fc               PUSH dword ptr [EBP + -0x4]
00401997  e89dfbffff           CALL 0x00401539
0040199c  83c410               ADD ESP,0x10
0040199f  85c0                 TEST EAX,EAX
004019a1  7405                 JZ 0x004019a8
004019a3  83c8ff               OR EAX,0xffffffff
004019a6  eb14                 JMP 0x004019bc
004019a8  ff75fc               PUSH dword ptr [EBP + -0x4]
004019ab  e870fbffff           CALL 0x00401520
004019b0  59                   POP ECX
004019b1  ff75f4               PUSH dword ptr [EBP + -0xc]
004019b4  e867fbffff           CALL 0x00401520
004019b9  59                   POP ECX
004019ba  33c0                 XOR EAX,EAX
004019bc  5f                   POP EDI
004019bd  5e                   POP ESI
004019be  c9                   LEAVE
004019bf  c3                   RET

; ==== FUNCTION FUN_004019c0 entry=004019c0 sig=int __stdcall FUN_004019c0(void)
004019c0  55                   PUSH EBP
004019c1  8bec                 MOV EBP,ESP
004019c3  81ec18050000         SUB ESP,0x518
004019c9  a1ac434000           MOV EAX,[0x004043ac]
004019ce  53                   PUSH EBX
004019cf  8945fc               MOV dword ptr [EBP + -0x4],EAX
004019d2  a19c434000           MOV EAX,[0x0040439c]
004019d7  8945f8               MOV dword ptr [EBP + -0x8],EAX
004019da  56                   PUSH ESI
004019db  8d45f8               LEA EAX,[EBP + -0x8]
004019de  57                   PUSH EDI
004019df  50                   PUSH EAX
004019e0  8d45fc               LEA EAX,[EBP + -0x4]
004019e3  50                   PUSH EAX
004019e4  6a05                 PUSH 0x5
004019e6  5e                   POP ESI
004019e7  56                   PUSH ESI
004019e8  e850030000           CALL 0x00401d3d
004019ed  8b5dfc               MOV EBX,dword ptr [EBP + -0x4]
004019f0  83c40c               ADD ESP,0xc
004019f3  8d45f8               LEA EAX,[EBP + -0x8]
004019f6  83e31f               AND EBX,0x1f
004019f9  50                   PUSH EAX
004019fa  8d45fc               LEA EAX,[EBP + -0x4]
004019fd  50                   PUSH EAX
004019fe  56                   PUSH ESI
004019ff  81c301010000         ADD EBX,0x101
00401a05  e87f030000           CALL 0x00401d89
00401a0a  83c40c               ADD ESP,0xc
00401a0d  8d45f8               LEA EAX,[EBP + -0x8]
00401a10  50                   PUSH EAX
00401a11  8d45fc               LEA EAX,[EBP + -0x4]
00401a14  50                   PUSH EAX
00401a15  56                   PUSH ESI
00401a16  e822030000           CALL 0x00401d3d
00401a1b  8b7dfc               MOV EDI,dword ptr [EBP + -0x4]
00401a1e  83c40c               ADD ESP,0xc
00401a21  8d45f8               LEA EAX,[EBP + -0x8]
00401a24  83e71f               AND EDI,0x1f
00401a27  50                   PUSH EAX
00401a28  8d45fc               LEA EAX,[EBP + -0x4]
00401a2b  47                   INC EDI
00401a2c  50                   PUSH EAX
00401a2d  56                   PUSH ESI
00401a2e  897ddc               MOV dword ptr [EBP + -0x24],EDI
00401a31  e853030000           CALL 0x00401d89
00401a36  83c40c               ADD ESP,0xc
00401a39  8d45f8               LEA EAX,[EBP + -0x8]
00401a3c  50                   PUSH EAX
00401a3d  8d45fc               LEA EAX,[EBP + -0x4]
00401a40  50                   PUSH EAX
00401a41  6a04                 PUSH 0x4
00401a43  e8f5020000           CALL 0x00401d3d
00401a48  8b75fc               MOV ESI,dword ptr [EBP + -0x4]
00401a4b  83c40c               ADD ESP,0xc
00401a4e  8d45f8               LEA EAX,[EBP + -0x8]
00401a51  83e60f               AND ESI,0xf
00401a54  50                   PUSH EAX
00401a55  8d45fc               LEA EAX,[EBP + -0x4]
00401a58  50                   PUSH EAX
00401a59  6a04                 PUSH 0x4
00401a5b  83c604               ADD ESI,0x4
00401a5e  e826030000           CALL 0x00401d89
00401a63  83c40c               ADD ESP,0xc
00401a66  81fb1e010000         CMP EBX,0x11e
00401a6c  0f87c3020000         JA 0x00401d35
00401a72  83ff1e               CMP EDI,0x1e
00401a75  0f87ba020000         JA 0x00401d35
00401a7b  33c0                 XOR EAX,EAX
00401a7d  85f6                 TEST ESI,ESI
00401a7f  7644                 JBE 0x00401ac5
00401a81  bf08404000           MOV EDI,0x404008
00401a86  8975f0               MOV dword ptr [EBP + -0x10],ESI
00401a89  8d45f8               LEA EAX,[EBP + -0x8]
00401a8c  50                   PUSH EAX
00401a8d  8d45fc               LEA EAX,[EBP + -0x4]
00401a90  50                   PUSH EAX
00401a91  6a03                 PUSH 0x3
00401a93  e8a5020000           CALL 0x00401d3d
00401a98  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
00401a9b  8b0f                 MOV ECX,dword ptr [EDI]
00401a9d  83e007               AND EAX,0x7
00401aa0  83c40c               ADD ESP,0xc
00401aa3  89848de8faffff       MOV dword ptr [EBP + ECX*0x4 + 0xfffffae8],EAX
00401aaa  8d45f8               LEA EAX,[EBP + -0x8]
00401aad  50                   PUSH EAX
00401aae  8d45fc               LEA EAX,[EBP + -0x4]
00401ab1  50                   PUSH EAX
00401ab2  6a03                 PUSH 0x3
00401ab4  e8d0020000           CALL 0x00401d89
00401ab9  83c40c               ADD ESP,0xc
00401abc  83c704               ADD EDI,0x4
00401abf  4e                   DEC ESI
00401ac0  75c7                 JNZ 0x00401a89
00401ac2  8b45f0               MOV EAX,dword ptr [EBP + -0x10]
00401ac5  83f813               CMP EAX,0x13
00401ac8  731b                 JNC 0x00401ae5
00401aca  8d048508404000       LEA EAX,[EAX*0x4 + 0x404008]
00401ad1  8b08                 MOV ECX,dword ptr [EAX]
00401ad3  83c004               ADD EAX,0x4
00401ad6  83a48de8faffff00     AND dword ptr [EBP + ECX*0x4 + 0xfffffae8],0x0
00401ade  3d54404000           CMP EAX,0x404054
00401ae3  72ec                 JC 0x00401ad1
00401ae5  8d45ec               LEA EAX,[EBP + -0x14]
00401ae8  c745ec07000000       MOV dword ptr [EBP + -0x14],0x7
00401aef  50                   PUSH EAX
00401af0  8d45f4               LEA EAX,[EBP + -0xc]
00401af3  50                   PUSH EAX
00401af4  6a00                 PUSH 0x0
00401af6  8d85e8faffff         LEA EAX,[EBP + 0xfffffae8]
00401afc  6a00                 PUSH 0x0
00401afe  50                   PUSH EAX
00401aff  6a13                 PUSH 0x13
00401b01  6a13                 PUSH 0x13
00401b03  e861f6ffff           CALL 0x00401169
00401b08  8bf0                 MOV ESI,EAX
00401b0a  83c41c               ADD ESP,0x1c
00401b0d  85f6                 TEST ESI,ESI
00401b0f  0f8598010000         JNZ 0x00401cad
00401b15  8b4dec               MOV ECX,dword ptr [EBP + -0x14]
00401b18  8b45dc               MOV EAX,dword ptr [EBP + -0x24]
00401b1b  2175e4               AND dword ptr [EBP + -0x1c],ESI
00401b1e  03c3                 ADD EAX,EBX
00401b20  0fb70c4d58414000     MOVZX ECX,word ptr [ECX*0x2 + 0x404158]
00401b28  85c0                 TEST EAX,EAX
00401b2a  8945f0               MOV dword ptr [EBP + -0x10],EAX
00401b2d  894dd8               MOV dword ptr [EBP + -0x28],ECX
00401b30  0f8629010000         JBE 0x00401c5f
00401b36  8d45f8               LEA EAX,[EBP + -0x8]
00401b39  50                   PUSH EAX
00401b3a  8d45fc               LEA EAX,[EBP + -0x4]
00401b3d  50                   PUSH EAX
00401b3e  ff75ec               PUSH dword ptr [EBP + -0x14]
00401b41  e8f7010000           CALL 0x00401d3d
00401b46  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
00401b49  8b4df4               MOV ECX,dword ptr [EBP + -0xc]
00401b4c  2345d8               AND EAX,dword ptr [EBP + -0x28]
00401b4f  83c40c               ADD ESP,0xc
00401b52  8d04c1               LEA EAX,[ECX + EAX*0x8]
00401b55  8d4df8               LEA ECX,[EBP + -0x8]
00401b58  8945e8               MOV dword ptr [EBP + -0x18],EAX
00401b5b  51                   PUSH ECX
00401b5c  0fb64006             MOVZX EAX,byte ptr [EAX + 0x6]
00401b60  8d4dfc               LEA ECX,[EBP + -0x4]
00401b63  51                   PUSH ECX
00401b64  50                   PUSH EAX
00401b65  e81f020000           CALL 0x00401d89
00401b6a  8b45e8               MOV EAX,dword ptr [EBP + -0x18]
00401b6d  83c40c               ADD ESP,0xc
00401b70  0fb74004             MOVZX EAX,word ptr [EAX + 0x4]
00401b74  83f810               CMP EAX,0x10
00401b77  7310                 JNC 0x00401b89
00401b79  8984b5e8faffff       MOV dword ptr [EBP + ESI*0x4 + 0xfffffae8],EAX
00401b80  8945e4               MOV dword ptr [EBP + -0x1c],EAX
00401b83  46                   INC ESI
00401b84  e9cd000000           JMP 0x00401c56
00401b89  7555                 JNZ 0x00401be0
00401b8b  8d45f8               LEA EAX,[EBP + -0x8]
00401b8e  50                   PUSH EAX
00401b8f  8d45fc               LEA EAX,[EBP + -0x4]
00401b92  50                   PUSH EAX
00401b93  6a02                 PUSH 0x2
00401b95  e8a3010000           CALL 0x00401d3d
00401b9a  8b7dfc               MOV EDI,dword ptr [EBP + -0x4]
00401b9d  83c40c               ADD ESP,0xc
00401ba0  8d45f8               LEA EAX,[EBP + -0x8]
00401ba3  83e703               AND EDI,0x3
00401ba6  50                   PUSH EAX
00401ba7  8d45fc               LEA EAX,[EBP + -0x4]
00401baa  50                   PUSH EAX
00401bab  6a02                 PUSH 0x2
00401bad  83c703               ADD EDI,0x3
00401bb0  e8d4010000           CALL 0x00401d89
00401bb5  8d143e               LEA EDX,[ESI + EDI*0x1]
00401bb8  83c40c               ADD ESP,0xc
00401bbb  3955f0               CMP dword ptr [EBP + -0x10],EDX
00401bbe  0f8271010000         JC 0x00401d35
00401bc4  85ff                 TEST EDI,EDI
00401bc6  0f848a000000         JZ 0x00401c56
00401bcc  8b45e4               MOV EAX,dword ptr [EBP + -0x1c]
00401bcf  8db4b5e8faffff       LEA ESI,[EBP + ESI*0x4 + 0xfffffae8]
00401bd6  8bcf                 MOV ECX,EDI
00401bd8  8bfe                 MOV EDI,ESI
00401bda  f3ab                 STOSD.REP ES:EDI
00401bdc  8bf2                 MOV ESI,EDX
00401bde  eb76                 JMP 0x00401c56
00401be0  83f811               CMP EAX,0x11
00401be3  8d45f8               LEA EAX,[EBP + -0x8]
00401be6  50                   PUSH EAX
00401be7  8d45fc               LEA EAX,[EBP + -0x4]
00401bea  50                   PUSH EAX
00401beb  751f                 JNZ 0x00401c0c
00401bed  6a03                 PUSH 0x3
00401bef  e849010000           CALL 0x00401d3d
00401bf4  8b7dfc               MOV EDI,dword ptr [EBP + -0x4]
00401bf7  83c40c               ADD ESP,0xc
00401bfa  8d45f8               LEA EAX,[EBP + -0x8]
00401bfd  83e707               AND EDI,0x7
00401c00  50                   PUSH EAX
00401c01  8d45fc               LEA EAX,[EBP + -0x4]
00401c04  50                   PUSH EAX
00401c05  83c703               ADD EDI,0x3
00401c08  6a03                 PUSH 0x3
00401c0a  eb1d                 JMP 0x00401c29
00401c0c  6a07                 PUSH 0x7
00401c0e  e82a010000           CALL 0x00401d3d
00401c13  8b7dfc               MOV EDI,dword ptr [EBP + -0x4]
00401c16  83c40c               ADD ESP,0xc
00401c19  8d45f8               LEA EAX,[EBP + -0x8]
00401c1c  83e77f               AND EDI,0x7f
00401c1f  50                   PUSH EAX
00401c20  8d45fc               LEA EAX,[EBP + -0x4]
00401c23  50                   PUSH EAX
00401c24  83c70b               ADD EDI,0xb
00401c27  6a07                 PUSH 0x7
00401c29  e85b010000           CALL 0x00401d89
00401c2e  8d143e               LEA EDX,[ESI + EDI*0x1]
00401c31  83c40c               ADD ESP,0xc
00401c34  3955f0               CMP dword ptr [EBP + -0x10],EDX
00401c37  0f82f8000000         JC 0x00401d35
00401c3d  85ff                 TEST EDI,EDI
00401c3f  7411                 JZ 0x00401c52
00401c41  8db4b5e8faffff       LEA ESI,[EBP + ESI*0x4 + 0xfffffae8]
00401c48  8bcf                 MOV ECX,EDI
00401c4a  33c0                 XOR EAX,EAX
00401c4c  8bfe                 MOV EDI,ESI
00401c4e  f3ab                 STOSD.REP ES:EDI
00401c50  8bf2                 MOV ESI,EDX
00401c52  8365e400             AND dword ptr [EBP + -0x1c],0x0
00401c56  3975f0               CMP dword ptr [EBP + -0x10],ESI
00401c59  0f87d7feffff         JA 0x00401b36
00401c5f  ff75f4               PUSH dword ptr [EBP + -0xc]
00401c62  e8b9f8ffff           CALL 0x00401520
00401c67  a17c414000           MOV EAX,[0x0040417c]
00401c6c  59                   POP ECX
00401c6d  8945ec               MOV dword ptr [EBP + -0x14],EAX
00401c70  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
00401c73  a3ac434000           MOV [0x004043ac],EAX
00401c78  8b45f8               MOV EAX,dword ptr [EBP + -0x8]
00401c7b  a39c434000           MOV [0x0040439c],EAX
00401c80  8d45ec               LEA EAX,[EBP + -0x14]
00401c83  50                   PUSH EAX
00401c84  8d45f4               LEA EAX,[EBP + -0xc]
00401c87  50                   PUSH EAX
00401c88  6898404000           PUSH 0x404098
00401c8d  8d85e8faffff         LEA EAX,[EBP + 0xfffffae8]
00401c93  6858404000           PUSH 0x404058
00401c98  50                   PUSH EAX
00401c99  6801010000           PUSH 0x101
00401c9e  53                   PUSH EBX
00401c9f  e8c5f4ffff           CALL 0x00401169
00401ca4  8bf0                 MOV ESI,EAX
00401ca6  83c41c               ADD ESP,0x1c
00401ca9  85f6                 TEST ESI,ESI
00401cab  740a                 JZ 0x00401cb7
00401cad  83feff               CMP ESI,-0x1
00401cb0  7551                 JNZ 0x00401d03
00401cb2  ff75f4               PUSH dword ptr [EBP + -0xc]
00401cb5  eb46                 JMP 0x00401cfd
00401cb7  a180414000           MOV EAX,[0x00404180]
00401cbc  8945e0               MOV dword ptr [EBP + -0x20],EAX
00401cbf  8d45e0               LEA EAX,[EBP + -0x20]
00401cc2  50                   PUSH EAX
00401cc3  8d45e8               LEA EAX,[EBP + -0x18]
00401cc6  50                   PUSH EAX
00401cc7  6818414000           PUSH 0x404118
00401ccc  8d849de8faffff       LEA EAX,[EBP + EBX*0x4 + 0xfffffae8]
00401cd3  68d8404000           PUSH 0x4040d8
00401cd8  50                   PUSH EAX
00401cd9  6a00                 PUSH 0x0
00401cdb  ff75dc               PUSH dword ptr [EBP + -0x24]
00401cde  e886f4ffff           CALL 0x00401169
00401ce3  8bf0                 MOV ESI,EAX
00401ce5  83c41c               ADD ESP,0x1c
00401ce8  85f6                 TEST ESI,ESI
00401cea  741b                 JZ 0x00401d07
00401cec  ff75f4               PUSH dword ptr [EBP + -0xc]
00401cef  e82cf8ffff           CALL 0x00401520
00401cf4  83feff               CMP ESI,-0x1
00401cf7  59                   POP ECX
00401cf8  7509                 JNZ 0x00401d03
00401cfa  ff75e8               PUSH dword ptr [EBP + -0x18]
00401cfd  e81ef8ffff           CALL 0x00401520
00401d02  59                   POP ECX
00401d03  8bc6                 MOV EAX,ESI
00401d05  eb31                 JMP 0x00401d38
00401d07  ff75e0               PUSH dword ptr [EBP + -0x20]
00401d0a  ff75e8               PUSH dword ptr [EBP + -0x18]
00401d0d  ff75ec               PUSH dword ptr [EBP + -0x14]
00401d10  ff75f4               PUSH dword ptr [EBP + -0xc]
00401d13  e821f8ffff           CALL 0x00401539
00401d18  83c410               ADD ESP,0x10
00401d1b  85c0                 TEST EAX,EAX
00401d1d  7516                 JNZ 0x00401d35
00401d1f  ff75f4               PUSH dword ptr [EBP + -0xc]
00401d22  e8f9f7ffff           CALL 0x00401520
00401d27  59                   POP ECX
00401d28  ff75e8               PUSH dword ptr [EBP + -0x18]
00401d2b  e8f0f7ffff           CALL 0x00401520
00401d30  59                   POP ECX
00401d31  33c0                 XOR EAX,EAX
00401d33  eb03                 JMP 0x00401d38
00401d35  83c8ff               OR EAX,0xffffffff
00401d38  5f                   POP EDI
00401d39  5e                   POP ESI
00401d3a  5b                   POP EBX
00401d3b  c9                   LEAVE
00401d3c  c3                   RET

; ==== FUNCTION FUN_00401d3d entry=00401d3d sig=undefined __cdecl FUN_00401d3d(uint param_1, uint * param_2, uint * param_3)
00401d3d  53                   PUSH EBX
00401d3e  8b5c2408             MOV EBX,dword ptr [ESP + 0x8]
00401d42  56                   PUSH ESI
00401d43  8b742414             MOV ESI,dword ptr [ESP + 0x14]
00401d47  391e                 CMP dword ptr [ESI],EBX
00401d49  733b                 JNC 0x00401d86
00401d4b  57                   PUSH EDI
00401d4c  8b7c2414             MOV EDI,dword ptr [ESP + 0x14]
00401d50  8b0d7c434000         MOV ECX,dword ptr [0x0040437c]
00401d56  3b0d80434000         CMP ECX,dword ptr [0x00404380]
00401d5c  7312                 JNC 0x00401d70
00401d5e  a198434000           MOV EAX,[0x00404398]
00401d63  0fb60401             MOVZX EAX,byte ptr [ECX + EAX*0x1]
00401d67  41                   INC ECX
00401d68  890d7c434000         MOV dword ptr [0x0040437c],ECX
00401d6e  eb05                 JMP 0x00401d75
00401d70  e8c3000000           CALL 0x00401e38
00401d75  8b0e                 MOV ECX,dword ptr [ESI]
00401d77  0fb6c0               MOVZX EAX,AL
00401d7a  d3e0                 SHL EAX,CL
00401d7c  0907                 OR dword ptr [EDI],EAX
00401d7e  830608               ADD dword ptr [ESI],0x8
00401d81  391e                 CMP dword ptr [ESI],EBX
00401d83  72cb                 JC 0x00401d50
00401d85  5f                   POP EDI
00401d86  5e                   POP ESI
00401d87  5b                   POP EBX
00401d88  c3                   RET

; ==== FUNCTION FUN_00401d89 entry=00401d89 sig=undefined __cdecl FUN_00401d89(int param_1, uint * param_2, int * param_3)
00401d89  8b442408             MOV EAX,dword ptr [ESP + 0x8]
00401d8d  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
00401d91  d328                 SHR dword ptr [EAX],CL
00401d93  8b44240c             MOV EAX,dword ptr [ESP + 0xc]
00401d97  2908                 SUB dword ptr [EAX],ECX
00401d99  c3                   RET

; ==== FUNCTION FUN_00401d9a entry=00401d9a sig=undefined __stdcall FUN_00401d9a(void)
00401d9a  8b0d84434000         MOV ECX,dword ptr [0x00404384]
00401da0  85c9                 TEST ECX,ECX
00401da2  0f848f000000         JZ 0x00401e37
00401da8  833d2c43400000       CMP dword ptr [0x0040432c],0x0
00401daf  753d                 JNZ 0x00401dee
00401db1  f605d642400001       TEST byte ptr [0x004042d6],0x1
00401db8  7406                 JZ 0x00401dc0
00401dba  010db4424000         ADD dword ptr [0x004042b4],ECX
00401dc0  51                   PUSH ECX
00401dc1  ff356c434000         PUSH dword ptr [0x0040436c]
00401dc7  ff358c434000         PUSH dword ptr [0x0040438c]
00401dcd  ff1544434000         CALL dword ptr [0x00404344]
00401dd3  8b0d84434000         MOV ECX,dword ptr [0x00404384]
00401dd9  3bc1                 CMP EAX,ECX
00401ddb  7411                 JZ 0x00401dee
00401ddd  c705bc42400001000000 MOV dword ptr [0x004042bc],0x1
00401de7  c605c042400001       MOV byte ptr [0x004042c0],0x1
00401dee  51                   PUSH ECX
00401def  ff356c434000         PUSH dword ptr [0x0040436c]
00401df5  e8bc020000           CALL 0x004020b6
00401dfa  833d2c43400000       CMP dword ptr [0x0040432c],0x0
00401e01  a394434000           MOV [0x00404394],EAX
00401e06  7428                 JZ 0x00401e30
00401e08  833d8443400000       CMP dword ptr [0x00404384],0x0
00401e0f  a16c434000           MOV EAX,[0x0040436c]
00401e14  7421                 JZ 0x00401e37
00401e16  8b152c434000         MOV EDX,dword ptr [0x0040432c]
00401e1c  8a08                 MOV CL,byte ptr [EAX]
00401e1e  880a                 MOV byte ptr [EDX],CL
00401e20  ff052c434000         INC dword ptr [0x0040432c]
00401e26  40                   INC EAX
00401e27  ff0d84434000         DEC dword ptr [0x00404384]
00401e2d  75e7                 JNZ 0x00401e16
00401e2f  c3                   RET
00401e30  83258443400000       AND dword ptr [0x00404384],0x0
00401e37  c3                   RET

; ==== FUNCTION FUN_00401e38 entry=00401e38 sig=uint __stdcall FUN_00401e38(void)
00401e38  833dbc42400000       CMP dword ptr [0x004042bc],0x0
00401e3f  56                   PUSH ESI
00401e40  57                   PUSH EDI
00401e41  0f85a8000000         JNZ 0x00401eef
00401e47  a1a4434000           MOV EAX,[0x004043a4]
00401e4c  8325b043400000       AND dword ptr [0x004043b0],0x0
00401e53  bf00800000           MOV EDI,0x8000
00401e58  3bc7                 CMP EAX,EDI
00401e5a  7f02                 JG 0x00401e5e
00401e5c  8bf8                 MOV EDI,EAX
00401e5e  8b3574304000         MOV ESI,dword ptr [0x00403074]
00401e64  57                   PUSH EDI
00401e65  ff3598434000         PUSH dword ptr [0x00404398]
00401e6b  ff3568434000         PUSH dword ptr [0x00404368]
00401e71  ffd6                 CALL ESI
00401e73  85c0                 TEST EAX,EAX
00401e75  7405                 JZ 0x00401e7c
00401e77  83f8ff               CMP EAX,-0x1
00401e7a  754e                 JNZ 0x00401eca
00401e7c  a190424000           MOV EAX,[0x00404290]
00401e81  85c0                 TEST EAX,EAX
00401e83  746a                 JZ 0x00401eef
00401e85  57                   PUSH EDI
00401e86  ff35a4434000         PUSH dword ptr [0x004043a4]
00401e8c  ffd0                 CALL EAX
00401e8e  85c0                 TEST EAX,EAX
00401e90  755d                 JNZ 0x00401eef
00401e92  8b0da8424000         MOV ECX,dword ptr [0x004042a8]
00401e98  a1b8424000           MOV EAX,[0x004042b8]
00401e9d  2b0dac424000         SUB ECX,dword ptr [0x004042ac]
00401ea3  6a00                 PUSH 0x0
00401ea5  a368434000           MOV [0x00404368],EAX
00401eaa  51                   PUSH ECX
00401eab  50                   PUSH EAX
00401eac  ff1578304000         CALL dword ptr [0x00403078]
00401eb2  57                   PUSH EDI
00401eb3  ff3598434000         PUSH dword ptr [0x00404398]
00401eb9  ff3568434000         PUSH dword ptr [0x00404368]
00401ebf  ffd6                 CALL ESI
00401ec1  85c0                 TEST EAX,EAX
00401ec3  742a                 JZ 0x00401eef
00401ec5  83f8ff               CMP EAX,-0x1
00401ec8  7425                 JZ 0x00401eef
00401eca  2905a4434000         SUB dword ptr [0x004043a4],EAX
00401ed0  0105a8424000         ADD dword ptr [0x004042a8],EAX
00401ed6  a380434000           MOV [0x00404380],EAX
00401edb  a198434000           MOV EAX,[0x00404398]
00401ee0  c7057c43400001000000 MOV dword ptr [0x0040437c],0x1
00401eea  0fb600               MOVZX EAX,byte ptr [EAX]
00401eed  eb03                 JMP 0x00401ef2
00401eef  83c8ff               OR EAX,0xffffffff
00401ef2  5f                   POP EDI
00401ef3  5e                   POP ESI
00401ef4  c3                   RET

; ==== FUNCTION FUN_00401ef5 entry=00401ef5 sig=int __stdcall FUN_00401ef5(uint param_1, undefined4 param_2, uint param_3, uint * param_4)
00401ef5  55                   PUSH EBP
00401ef6  8bec                 MOV EBP,ESP
00401ef8  83ec10               SUB ESP,0x10
00401efb  8b4510               MOV EAX,dword ptr [EBP + 0x10]
00401efe  53                   PUSH EBX
00401eff  33db                 XOR EBX,EBX
00401f01  56                   PUSH ESI
00401f02  3bc3                 CMP EAX,EBX
00401f04  57                   PUSH EDI
00401f05  a3a4434000           MOV [0x004043a4],EAX
00401f0a  0f849d010000         JZ 0x004020ad
00401f10  f605d542400001       TEST byte ptr [0x004042d5],0x1
00401f17  7470                 JZ 0x00401f89
00401f19  8b7d08               MOV EDI,dword ptr [EBP + 0x8]
00401f1c  8b3578304000         MOV ESI,dword ptr [0x00403078]
00401f22  83ffff               CMP EDI,-0x1
00401f25  752d                 JNZ 0x00401f54
00401f27  a190424000           MOV EAX,[0x00404290]
00401f2c  3bc3                 CMP EAX,EBX
00401f2e  7424                 JZ 0x00401f54
00401f30  53                   PUSH EBX
00401f31  53                   PUSH EBX
00401f32  ffd0                 CALL EAX
00401f34  85c0                 TEST EAX,EAX
00401f36  0f8571010000         JNZ 0x004020ad
00401f3c  8b0da8424000         MOV ECX,dword ptr [0x004042a8]
00401f42  a1b8424000           MOV EAX,[0x004042b8]
00401f47  2b0dac424000         SUB ECX,dword ptr [0x004042ac]
00401f4d  53                   PUSH EBX
00401f4e  8bf8                 MOV EDI,EAX
00401f50  51                   PUSH ECX
00401f51  50                   PUSH EAX
00401f52  ffd6                 CALL ESI
00401f54  6a01                 PUSH 0x1
00401f56  6a0e                 PUSH 0xe
00401f58  57                   PUSH EDI
00401f59  ffd6                 CALL ESI
00401f5b  8d45f0               LEA EAX,[EBP + -0x10]
00401f5e  6a10                 PUSH 0x10
00401f60  50                   PUSH EAX
00401f61  57                   PUSH EDI
00401f62  ff1574304000         CALL dword ptr [0x00403074]
00401f68  8b45f0               MOV EAX,dword ptr [EBP + -0x10]
00401f6b  6a01                 PUSH 0x1
00401f6d  894508               MOV dword ptr [EBP + 0x8],EAX
00401f70  0fb745fc             MOVZX EAX,word ptr [EBP + -0x4]
00401f74  50                   PUSH EAX
00401f75  57                   PUSH EDI
00401f76  ffd6                 CALL ESI
00401f78  0fb745fc             MOVZX EAX,word ptr [EBP + -0x4]
00401f7c  6ae2                 PUSH -0x1e
00401f7e  59                   POP ECX
00401f7f  2bc8                 SUB ECX,EAX
00401f81  010da4434000         ADD dword ptr [0x004043a4],ECX
00401f87  eb0b                 JMP 0x00401f94
00401f89  8b7d08               MOV EDI,dword ptr [EBP + 0x8]
00401f8c  83c0fc               ADD EAX,-0x4
00401f8f  a3a4434000           MOV [0x004043a4],EAX
00401f94  391da4434000         CMP dword ptr [0x004043a4],EBX
00401f9a  0f840d010000         JZ 0x004020ad
00401fa0  53                   PUSH EBX
00401fa1  53                   PUSH EBX
00401fa2  e80f010000           CALL 0x004020b6
00401fa7  a394434000           MOV [0x00404394],EAX
00401fac  8b450c               MOV EAX,dword ptr [EBP + 0xc]
00401faf  893d68434000         MOV dword ptr [0x00404368],EDI
00401fb5  a38c434000           MOV [0x0040438c],EAX
00401fba  33f6                 XOR ESI,ESI
00401fbc  891d9c434000         MOV dword ptr [0x0040439c],EBX
00401fc2  891d80434000         MOV dword ptr [0x00404380],EBX
00401fc8  891d7c434000         MOV dword ptr [0x0040437c],EBX
00401fce  891d84434000         MOV dword ptr [0x00404384],EBX
00401fd4  891dac434000         MOV dword ptr [0x004043ac],EBX
00401fda  a140434000           MOV EAX,[0x00404340]
00401fdf  3bc3                 CMP EAX,EBX
00401fe1  7404                 JZ 0x00401fe7
00401fe3  6a01                 PUSH 0x1
00401fe5  ffd0                 CALL EAX
00401fe7  8d4510               LEA EAX,[EBP + 0x10]
00401fea  891d60434000         MOV dword ptr [0x00404360],EBX
00401ff0  50                   PUSH EAX
00401ff1  e8cef0ffff           CALL 0x004010c4
00401ff6  3bc3                 CMP EAX,EBX
00401ff8  59                   POP ECX
00401ff9  7522                 JNZ 0x0040201d
00401ffb  a160434000           MOV EAX,[0x00404360]
00402000  3bc6                 CMP EAX,ESI
00402002  7602                 JBE 0x00402006
00402004  8bf0                 MOV ESI,EAX
00402006  395d10               CMP dword ptr [EBP + 0x10],EBX
00402009  7527                 JNZ 0x00402032
0040200b  391dbc424000         CMP dword ptr [0x004042bc],EBX
00402011  751f                 JNZ 0x00402032
00402013  381dc0424000         CMP byte ptr [0x004042c0],BL
00402019  7517                 JNZ 0x00402032
0040201b  ebbd                 JMP 0x00401fda
0040201d  391dbc424000         CMP dword ptr [0x004042bc],EBX
00402023  0f8586000000         JNZ 0x004020af
00402029  c605c042400002       MOV byte ptr [0x004042c0],0x2
00402030  eb7d                 JMP 0x004020af
00402032  833d9c43400008       CMP dword ptr [0x0040439c],0x8
00402039  7218                 JC 0x00402053
0040203b  a19c434000           MOV EAX,[0x0040439c]
00402040  c1e803               SHR EAX,0x3
00402043  832d9c43400008       SUB dword ptr [0x0040439c],0x8
0040204a  ff0d7c434000         DEC dword ptr [0x0040437c]
00402050  48                   DEC EAX
00402051  75f0                 JNZ 0x00402043
00402053  e842fdffff           CALL 0x00401d9a
00402058  f605d542400001       TEST byte ptr [0x004042d5],0x1
0040205f  7512                 JNZ 0x00402073
00402061  8d4508               LEA EAX,[EBP + 0x8]
00402064  6a04                 PUSH 0x4
00402066  50                   PUSH EAX
00402067  ff3568434000         PUSH dword ptr [0x00404368]
0040206d  ff1574304000         CALL dword ptr [0x00403074]
00402073  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
00402076  3b0d94434000         CMP ECX,dword ptr [0x00404394]
0040207c  7417                 JZ 0x00402095
0040207e  391dbc424000         CMP dword ptr [0x004042bc],EBX
00402084  750f                 JNZ 0x00402095
00402086  381dc0424000         CMP byte ptr [0x004042c0],BL
0040208c  7507                 JNZ 0x00402095
0040208e  c605c042400002       MOV byte ptr [0x004042c0],0x2
00402095  8b4514               MOV EAX,dword ptr [EBP + 0x14]
00402098  3bc3                 CMP EAX,EBX
0040209a  7402                 JZ 0x0040209e
0040209c  8908                 MOV dword ptr [EAX],ECX
0040209e  391d90434000         CMP dword ptr [0x00404390],EBX
004020a4  7407                 JZ 0x004020ad
004020a6  e8da000000           CALL 0x00402185
004020ab  ebf1                 JMP 0x0040209e
004020ad  33c0                 XOR EAX,EAX
004020af  5f                   POP EDI
004020b0  5e                   POP ESI
004020b1  5b                   POP EBX
004020b2  c9                   LEAVE
004020b3  c21000               RET 0x10

; ==== FUNCTION FUN_004020b6 entry=004020b6 sig=uint __stdcall FUN_004020b6(byte * param_1, int param_2)
004020b6  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
004020ba  85c9                 TEST ECX,ECX
004020bc  750a                 JNZ 0x004020c8
004020be  83c8ff               OR EAX,0xffffffff
004020c1  a300404000           MOV [0x00404000],EAX
004020c6  eb39                 JMP 0x00402101
004020c8  8b542408             MOV EDX,dword ptr [ESP + 0x8]
004020cc  a100404000           MOV EAX,[0x00404000]
004020d1  56                   PUSH ESI
004020d2  8bf2                 MOV ESI,EDX
004020d4  4a                   DEC EDX
004020d5  85f6                 TEST ESI,ESI
004020d7  7422                 JZ 0x004020fb
004020d9  57                   PUSH EDI
004020da  42                   INC EDX
004020db  0fb639               MOVZX EDI,byte ptr [ECX]
004020de  8bf0                 MOV ESI,EAX
004020e0  81e6ff000000         AND ESI,0xff
004020e6  33f7                 XOR ESI,EDI
004020e8  8b3d74434000         MOV EDI,dword ptr [0x00404374]
004020ee  c1e808               SHR EAX,0x8
004020f1  8b34b7               MOV ESI,dword ptr [EDI + ESI*0x4]
004020f4  33c6                 XOR EAX,ESI
004020f6  41                   INC ECX
004020f7  4a                   DEC EDX
004020f8  75e1                 JNZ 0x004020db
004020fa  5f                   POP EDI
004020fb  a300404000           MOV [0x00404000],EAX
00402100  5e                   POP ESI
00402101  f7d0                 NOT EAX
00402103  c20800               RET 0x8

; ==== FUNCTION FUN_00402106 entry=00402106 sig=undefined4 * __cdecl FUN_00402106(int param_1)
00402106  8b0d78434000         MOV ECX,dword ptr [0x00404378]
0040210c  ff0590434000         INC dword ptr [0x00404390]
00402112  56                   PUSH ESI
00402113  57                   PUSH EDI
00402114  8b7c240c             MOV EDI,dword ptr [ESP + 0xc]
00402118  b8f07f0000           MOV EAX,0x7ff0
0040211d  85c9                 TEST ECX,ECX
0040211f  741a                 JZ 0x0040213b
00402121  8b1564434000         MOV EDX,dword ptr [0x00404364]
00402127  2bd1                 SUB EDX,ECX
00402129  03d0                 ADD EDX,EAX
0040212b  3bd7                 CMP EDX,EDI
0040212d  7e0c                 JLE 0x0040213b
0040212f  8bc1                 MOV EAX,ECX
00402131  03cf                 ADD ECX,EDI
00402133  890d78434000         MOV dword ptr [0x00404378],ECX
00402139  eb47                 JMP 0x00402182
0040213b  50                   PUSH EAX
0040213c  6a02                 PUSH 0x2
0040213e  ff1568304000         CALL dword ptr [0x00403068]
00402144  8bf0                 MOV ESI,EAX
00402146  56                   PUSH ESI
00402147  ff1588304000         CALL dword ptr [0x00403088]
0040214d  83600400             AND dword ptr [EAX + 0x4],0x0
00402151  8930                 MOV dword ptr [EAX],ESI
00402153  833da043400000       CMP dword ptr [0x004043a0],0x0
0040215a  7507                 JNZ 0x00402163
0040215c  a3a0434000           MOV [0x004043a0],EAX
00402161  eb0d                 JMP 0x00402170
00402163  8b0d64434000         MOV ECX,dword ptr [0x00404364]
00402169  85c9                 TEST ECX,ECX
0040216b  7403                 JZ 0x00402170
0040216d  894104               MOV dword ptr [ECX + 0x4],EAX
00402170  8d4c3808             LEA ECX,[EAX + EDI*0x1 + 0x8]
00402174  a364434000           MOV [0x00404364],EAX
00402179  890d78434000         MOV dword ptr [0x00404378],ECX
0040217f  83c008               ADD EAX,0x8
00402182  5f                   POP EDI
00402183  5e                   POP ESI
00402184  c3                   RET

; ==== FUNCTION FUN_00402185 entry=00402185 sig=undefined __stdcall FUN_00402185(void)
00402185  ff0d90434000         DEC dword ptr [0x00404390]
0040218b  56                   PUSH ESI
0040218c  7535                 JNZ 0x004021c3
0040218e  8b35a0434000         MOV ESI,dword ptr [0x004043a0]
00402194  85f6                 TEST ESI,ESI
00402196  742b                 JZ 0x004021c3
00402198  57                   PUSH EDI
00402199  8b3e                 MOV EDI,dword ptr [ESI]
0040219b  8b7604               MOV ESI,dword ptr [ESI + 0x4]
0040219e  57                   PUSH EDI
0040219f  ff157c304000         CALL dword ptr [0x0040307c]
004021a5  57                   PUSH EDI
004021a6  ff156c304000         CALL dword ptr [0x0040306c]
004021ac  85f6                 TEST ESI,ESI
004021ae  75e9                 JNZ 0x00402199
004021b0  213578434000         AND dword ptr [0x00404378],ESI
004021b6  213564434000         AND dword ptr [0x00404364],ESI
004021bc  2135a0434000         AND dword ptr [0x004043a0],ESI
004021c2  5f                   POP EDI
004021c3  5e                   POP ESI
004021c4  c3                   RET

; ==== FUNCTION entry entry=004021c5 sig=undefined4 __stdcall entry(void)
004021c5  55                   PUSH EBP
004021c6  8bec                 MOV EBP,ESP
004021c8  81ecac030000         SUB ESP,0x3ac
004021ce  53                   PUSH EBX
004021cf  56                   PUSH ESI
004021d0  57                   PUSH EDI
004021d1  6a04                 PUSH 0x4
004021d3  ff1550304000         CALL dword ptr [0x00403050]
004021d9  ff1580304000         CALL dword ptr [0x00403080]
004021df  8bf0                 MOV ESI,EAX
004021e1  8975f8               MOV dword ptr [EBP + -0x8],ESI
004021e4  8a06                 MOV AL,byte ptr [ESI]
004021e6  3c22                 CMP AL,0x22
004021e8  0f8561040000         JNZ 0x0040264f
004021ee  8a4601               MOV AL,byte ptr [ESI + 0x1]
004021f1  46                   INC ESI
004021f2  8975f8               MOV dword ptr [EBP + -0x8],ESI
004021f5  33db                 XOR EBX,EBX
004021f7  3ac3                 CMP AL,BL
004021f9  740d                 JZ 0x00402208
004021fb  3c22                 CMP AL,0x22
004021fd  7409                 JZ 0x00402208
004021ff  8a4601               MOV AL,byte ptr [ESI + 0x1]
00402202  46                   INC ESI
00402203  8975f8               MOV dword ptr [EBP + -0x8],ESI
00402206  ebef                 JMP 0x004021f7
00402208  803e22               CMP byte ptr [ESI],0x22
0040220b  7504                 JNZ 0x00402211
0040220d  46                   INC ESI
0040220e  8975f8               MOV dword ptr [EBP + -0x8],ESI
00402211  803e20               CMP byte ptr [ESI],0x20
00402214  7509                 JNZ 0x0040221f
00402216  46                   INC ESI
00402217  803e20               CMP byte ptr [ESI],0x20
0040221a  74fa                 JZ 0x00402216
0040221c  8975f8               MOV dword ptr [EBP + -0x8],ESI
0040221f  53                   PUSH EBX
00402220  ff1584304000         CALL dword ptr [0x00403084]
00402226  803e2f               CMP byte ptr [ESI],0x2f
00402229  8945f4               MOV dword ptr [EBP + -0xc],EAX
0040222c  7515                 JNZ 0x00402243
0040222e  8a4601               MOV AL,byte ptr [ESI + 0x1]
00402231  3c53                 CMP AL,0x53
00402233  7404                 JZ 0x00402239
00402235  3c73                 CMP AL,0x73
00402237  750a                 JNZ 0x00402243
00402239  c705d042400001000000 MOV dword ptr [0x004042d0],0x1
00402243  8d85d4fcffff         LEA EAX,[EBP + 0xfffffcd4]
00402249  6800010000           PUSH 0x100
0040224e  50                   PUSH EAX
0040224f  ff75f4               PUSH dword ptr [EBP + -0xc]
00402252  ff1548304000         CALL dword ptr [0x00403048]
00402258  8a0e                 MOV CL,byte ptr [ESI]
0040225a  8bc6                 MOV EAX,ESI
0040225c  3acb                 CMP CL,BL
0040225e  740b                 JZ 0x0040226b
00402260  80f97f               CMP CL,0x7f
00402263  7406                 JZ 0x0040226b
00402265  8a4801               MOV CL,byte ptr [EAX + 0x1]
00402268  40                   INC EAX
00402269  ebf1                 JMP 0x0040225c
0040226b  3818                 CMP byte ptr [EAX],BL
0040226d  7432                 JZ 0x004022a1
0040226f  8818                 MOV byte ptr [EAX],BL
00402271  40                   INC EAX
00402272  33d2                 XOR EDX,EDX
00402274  8a08                 MOV CL,byte ptr [EAX]
00402276  3acb                 CMP CL,BL
00402278  7412                 JZ 0x0040228c
0040227a  80f920               CMP CL,0x20
0040227d  740d                 JZ 0x0040228c
0040227f  0fbec9               MOVSX ECX,CL
00402282  8d1492               LEA EDX,[EDX + EDX*0x4]
00402285  40                   INC EAX
00402286  8d5451d0             LEA EDX,[ECX + EDX*0x2 + -0x30]
0040228a  ebe8                 JMP 0x00402274
0040228c  011588414000         ADD dword ptr [0x00404188],EDX
00402292  40                   INC EAX
00402293  50                   PUSH EAX
00402294  8d85d4fcffff         LEA EAX,[EBP + 0xfffffcd4]
0040229a  50                   PUSH EAX
0040229b  ff1540304000         CALL dword ptr [0x00403040]
004022a1  8d85d4fcffff         LEA EAX,[EBP + 0xfffffcd4]
004022a7  53                   PUSH EBX
004022a8  50                   PUSH EAX
004022a9  ff153c304000         CALL dword ptr [0x0040303c]
004022af  3bc3                 CMP EAX,EBX
004022b1  a3b8424000           MOV [0x004042b8],EAX
004022b6  0f8c06020000         JL 0x004024c2
004022bc  e83fedffff           CALL 0x00401000
004022c1  a188414000           MOV EAX,[0x00404188]
004022c6  8b3d78304000         MOV EDI,dword ptr [0x00403078]
004022cc  53                   PUSH EBX
004022cd  50                   PUSH EAX
004022ce  ff35b8424000         PUSH dword ptr [0x004042b8]
004022d4  a3b0424000           MOV [0x004042b0],EAX
004022d9  a3a8424000           MOV [0x004042a8],EAX
004022de  ffd7                 CALL EDI
004022e0  8b3574304000         MOV ESI,dword ptr [0x00403074]
004022e6  8d45ff               LEA EAX,[EBP + -0x1]
004022e9  6a01                 PUSH 0x1
004022eb  50                   PUSH EAX
004022ec  ff35b8424000         PUSH dword ptr [0x004042b8]
004022f2  ffd6                 CALL ESI
004022f4  385dff               CMP byte ptr [EBP + -0x1],BL
004022f7  7459                 JZ 0x00402352
004022f9  0fb645ff             MOVZX EAX,byte ptr [EBP + -0x1]
004022fd  50                   PUSH EAX
004022fe  8d85e8feffff         LEA EAX,[EBP + 0xfffffee8]
00402304  50                   PUSH EAX
00402305  ff35b8424000         PUSH dword ptr [0x004042b8]
0040230b  ffd6                 CALL ESI
0040230d  8d45e8               LEA EAX,[EBP + -0x18]
00402310  6a04                 PUSH 0x4
00402312  50                   PUSH EAX
00402313  ff35b8424000         PUSH dword ptr [0x004042b8]
00402319  ffd6                 CALL ESI
0040231b  8d85e8feffff         LEA EAX,[EBP + 0xfffffee8]
00402321  53                   PUSH EBX
00402322  50                   PUSH EAX
00402323  ff153c304000         CALL dword ptr [0x0040303c]
00402329  3bc3                 CMP EAX,EBX
0040232b  8945f0               MOV dword ptr [EBP + -0x10],EAX
0040232e  7c1c                 JL 0x0040234c
00402330  6a02                 PUSH 0x2
00402332  53                   PUSH EBX
00402333  50                   PUSH EAX
00402334  ffd7                 CALL EDI
00402336  3945e8               CMP dword ptr [EBP + -0x18],EAX
00402339  7406                 JZ 0x00402341
0040233b  889de8feffff         MOV byte ptr [EBP + 0xfffffee8],BL
00402341  ff75f0               PUSH dword ptr [EBP + -0x10]
00402344  ff1538304000         CALL dword ptr [0x00403038]
0040234a  eb06                 JMP 0x00402352
0040234c  889de8feffff         MOV byte ptr [EBP + 0xfffffee8],BL
00402352  6a04                 PUSH 0x4
00402354  68d4424000           PUSH 0x4042d4
00402359  ff35b8424000         PUSH dword ptr [0x004042b8]
0040235f  ffd6                 CALL ESI
00402361  6a0c                 PUSH 0xc
00402363  6850434000           PUSH 0x404350
00402368  ff35b8424000         PUSH dword ptr [0x004042b8]
0040236e  ffd6                 CALL ESI
00402370  6a08                 PUSH 0x8
00402372  681c434000           PUSH 0x40431c
00402377  ff35b8424000         PUSH dword ptr [0x004042b8]
0040237d  ffd6                 CALL ESI
0040237f  6a38                 PUSH 0x38
00402381  68e4424000           PUSH 0x4042e4
00402386  ff35b8424000         PUSH dword ptr [0x004042b8]
0040238c  ffd6                 CALL ESI
0040238e  a1d4424000           MOV EAX,[0x004042d4]
00402393  f6c410               TEST AH,0x10
00402396  7407                 JZ 0x0040239f
00402398  c605d842400001       MOV byte ptr [0x004042d8],0x1
0040239f  f605d442400080       TEST byte ptr [0x004042d4],0x80
004023a6  7414                 JZ 0x004023bc
004023a8  391dd0424000         CMP dword ptr [0x004042d0],EBX
004023ae  750c                 JNZ 0x004023bc
004023b0  83e003               AND EAX,0x3
004023b3  3c02                 CMP AL,0x2
004023b5  7405                 JZ 0x004023bc
004023b7  e8d9070000           CALL 0x00402b95
004023bc  8b75f4               MOV ESI,dword ptr [EBP + -0xc]
004023bf  56                   PUSH ESI
004023c0  e8a5020000           CALL 0x0040266a
004023c5  85c0                 TEST EAX,EAX
004023c7  59                   POP ECX
004023c8  0f84f9000000         JZ 0x004024c7
004023ce  56                   PUSH ESI
004023cf  e8f5020000           CALL 0x004026c9
004023d4  85c0                 TEST EAX,EAX
004023d6  59                   POP ECX
004023d7  0f84ea000000         JZ 0x004024c7
004023dd  a18c424000           MOV EAX,[0x0040428c]
004023e2  391d18434000         CMP dword ptr [0x00404318],EBX
004023e8  a3a0424000           MOV [0x004042a0],EAX
004023ed  8935a4424000         MOV dword ptr [0x004042a4],ESI
004023f3  7433                 JZ 0x00402428
004023f5  6a01                 PUSH 0x1
004023f7  53                   PUSH EBX
004023f8  ff35b8424000         PUSH dword ptr [0x004042b8]
004023fe  ffd7                 CALL EDI
00402400  6a02                 PUSH 0x2
00402402  53                   PUSH EBX
00402403  ff35b8424000         PUSH dword ptr [0x004042b8]
00402409  8945f0               MOV dword ptr [EBP + -0x10],EAX
0040240c  ffd7                 CALL EDI
0040240e  53                   PUSH EBX
0040240f  8bf0                 MOV ESI,EAX
00402411  ff75f0               PUSH dword ptr [EBP + -0x10]
00402414  ff35b8424000         PUSH dword ptr [0x004042b8]
0040241a  ffd7                 CALL EDI
0040241c  3b3518434000         CMP ESI,dword ptr [0x00404318]
00402422  0f859a000000         JNZ 0x004024c2
00402428  a1e4424000           MOV EAX,[0x004042e4]
0040242d  c70530434000f51e4000 MOV dword ptr [0x00404330],0x401ef5
00402437  40                   INC EAX
00402438  c70534434000b6204000 MOV dword ptr [0x00404334],0x4020b6
00402442  50                   PUSH EAX
00402443  6a02                 PUSH 0x2
00402445  ff1568304000         CALL dword ptr [0x00403068]
0040244b  50                   PUSH EAX
0040244c  a324434000           MOV [0x00404324],EAX
00402451  ff1588304000         CALL dword ptr [0x00403088]
00402457  53                   PUSH EBX
00402458  a328434000           MOV [0x00404328],EAX
0040245d  ff35e8424000         PUSH dword ptr [0x004042e8]
00402463  c70544434000dc2c4000 MOV dword ptr [0x00404344],0x402cdc
0040246d  a32c434000           MOV [0x0040432c],EAX
00402472  53                   PUSH EBX
00402473  ff35b8424000         PUSH dword ptr [0x004042b8]
00402479  e877faffff           CALL 0x00401ef5
0040247e  385dff               CMP byte ptr [EBP + -0x1],BL
00402481  891d2c434000         MOV dword ptr [0x0040432c],EBX
00402487  755b                 JNZ 0x004024e4
00402489  8d85e8feffff         LEA EAX,[EBP + 0xfffffee8]
0040248f  50                   PUSH EAX
00402490  e886060000           CALL 0x00402b1b
00402495  59                   POP ECX
00402496  8d85e8feffff         LEA EAX,[EBP + 0xfffffee8]
0040249c  53                   PUSH EBX
0040249d  50                   PUSH EAX
0040249e  ff1544304000         CALL dword ptr [0x00403044]
004024a4  8b3538304000         MOV ESI,dword ptr [0x00403038]
004024aa  50                   PUSH EAX
004024ab  ffd6                 CALL ESI
004024ad  8d85e8feffff         LEA EAX,[EBP + 0xfffffee8]
004024b3  6a02                 PUSH 0x2
004024b5  50                   PUSH EAX
004024b6  ff153c304000         CALL dword ptr [0x0040303c]
004024bc  8bf8                 MOV EDI,EAX
004024be  3bfb                 CMP EDI,EBX
004024c0  7d0c                 JGE 0x004024ce
004024c2  e8b5060000           CALL 0x00402b7c
004024c7  33c0                 XOR EAX,EAX
004024c9  e97c010000           JMP 0x0040264a
004024ce  53                   PUSH EBX
004024cf  ff35ec424000         PUSH dword ptr [0x004042ec]
004024d5  57                   PUSH EDI
004024d6  ff35b8424000         PUSH dword ptr [0x004042b8]
004024dc  e814faffff           CALL 0x00401ef5
004024e1  57                   PUSH EDI
004024e2  ffd6                 CALL ESI
004024e4  381dc0424000         CMP byte ptr [0x004042c0],BL
004024ea  c745ec01000000       MOV dword ptr [EBP + -0x14],0x1
004024f1  889d68feffff         MOV byte ptr [EBP + 0xfffffe68],BL
004024f7  740a                 JZ 0x00402503
004024f9  e87e060000           CALL 0x00402b7c
004024fe  e9bd000000           JMP 0x004025c0
00402503  8d85e8feffff         LEA EAX,[EBP + 0xfffffee8]
00402509  50                   PUSH EAX
0040250a  ff1534304000         CALL dword ptr [0x00403034]
00402510  8bf8                 MOV EDI,EAX
00402512  3bfb                 CMP EDI,EBX
00402514  7454                 JZ 0x0040256a
00402516  8b3528304000         MOV ESI,dword ptr [0x00403028]
0040251c  684c424000           PUSH 0x40424c
00402521  57                   PUSH EDI
00402522  ffd6                 CALL ESI
00402524  683c424000           PUSH 0x40423c
00402529  57                   PUSH EDI
0040252a  a35c434000           MOV [0x0040435c],EAX
0040252f  ffd6                 CALL ESI
00402531  682c424000           PUSH 0x40422c
00402536  57                   PUSH EDI
00402537  a340434000           MOV [0x00404340],EAX
0040253c  ffd6                 CALL ESI
0040253e  6820424000           PUSH 0x404220
00402543  57                   PUSH EDI
00402544  a33c434000           MOV [0x0040433c],EAX
00402549  ffd6                 CALL ESI
0040254b  6814424000           PUSH 0x404214
00402550  57                   PUSH EDI
00402551  a390424000           MOV [0x00404290],EAX
00402556  ffd6                 CALL ESI
00402558  6808424000           PUSH 0x404208
0040255d  57                   PUSH EDI
0040255e  a344434000           MOV [0x00404344],EAX
00402563  ffd6                 CALL ESI
00402565  a34c434000           MOV [0x0040434c],EAX
0040256a  a15c434000           MOV EAX,[0x0040435c]
0040256f  3bc3                 CMP EAX,EBX
00402571  7524                 JNZ 0x00402597
00402573  385dff               CMP byte ptr [EBP + -0x1],BL
00402576  b8c4414000           MOV EAX,0x4041c4
0040257b  7505                 JNZ 0x00402582
0040257d  b8a4414000           MOV EAX,0x4041a4
00402582  53                   PUSH EBX
00402583  689c414000           PUSH 0x40419c
00402588  50                   PUSH EAX
00402589  ff358c424000         PUSH dword ptr [0x0040428c]
0040258f  ff15d4304000         CALL dword ptr [0x004030d4]
00402595  eb29                 JMP 0x004025c0
00402597  8d8d54fcffff         LEA ECX,[EBP + 0xfffffc54]
0040259d  51                   PUSH ECX
0040259e  8d8d68feffff         LEA ECX,[EBP + 0xfffffe68]
004025a4  51                   PUSH ECX
004025a5  8d4dec               LEA ECX,[EBP + -0x14]
004025a8  51                   PUSH ECX
004025a9  ff75f8               PUSH dword ptr [EBP + -0x8]
004025ac  68a0424000           PUSH 0x4042a0
004025b1  ffd0                 CALL EAX
004025b3  0fb7c0               MOVZX EAX,AX
004025b6  57                   PUSH EDI
004025b7  8945f4               MOV dword ptr [EBP + -0xc],EAX
004025ba  ff152c304000         CALL dword ptr [0x0040302c]
004025c0  e8beeaffff           CALL 0x00401083
004025c5  385dff               CMP byte ptr [EBP + -0x1],BL
004025c8  7519                 JNZ 0x004025e3
004025ca  8d85e0fdffff         LEA EAX,[EBP + 0xfffffde0]
004025d0  6800020000           PUSH 0x200
004025d5  50                   PUSH EAX
004025d6  8d85e8feffff         LEA EAX,[EBP + 0xfffffee8]
004025dc  50                   PUSH EAX
004025dd  ff1530304000         CALL dword ptr [0x00403030]
004025e3  a148434000           MOV EAX,[0x00404348]
004025e8  3bc3                 CMP EAX,EBX
004025ea  7407                 JZ 0x004025f3
004025ec  50                   PUSH EAX
004025ed  ff1504304000         CALL dword ptr [0x00403004]
004025f3  837dec01             CMP dword ptr [EBP + -0x14],0x1
004025f7  742e                 JZ 0x00402627
004025f9  8d85d4fdffff         LEA EAX,[EBP + 0xfffffdd4]
004025ff  c785d4fdffff94000000 MOV dword ptr [EBP + 0xfffffdd4],0x94
00402609  50                   PUSH EAX
0040260a  ff154c304000         CALL dword ptr [0x0040304c]
00402610  8b85e4fdffff         MOV EAX,dword ptr [EBP + 0xfffffde4]
00402616  53                   PUSH EBX
00402617  48                   DEC EAX
00402618  48                   DEC EAX
00402619  f7d8                 NEG EAX
0040261b  1bc0                 SBB EAX,EAX
0040261d  83e002               AND EAX,0x2
00402620  50                   PUSH EAX
00402621  ff15d0304000         CALL dword ptr [0x004030d0]
00402627  389d68feffff         CMP byte ptr [EBP + 0xfffffe68],BL
0040262d  740f                 JZ 0x0040263e
0040262f  8d8568feffff         LEA EAX,[EBP + 0xfffffe68]
00402635  6a05                 PUSH 0x5
00402637  50                   PUSH EAX
00402638  ff1564304000         CALL dword ptr [0x00403064]
0040263e  ff75f4               PUSH dword ptr [EBP + -0xc]
00402641  ff1570304000         CALL dword ptr [0x00403070]
00402647  8b45f4               MOV EAX,dword ptr [EBP + -0xc]
0040264a  5f                   POP EDI
0040264b  5e                   POP ESI
0040264c  5b                   POP EBX
0040264d  c9                   LEAVE
0040264e  c3                   RET
0040264f  33db                 XOR EBX,EBX
00402651  3ac3                 CMP AL,BL
00402653  0f84b8fbffff         JZ 0x00402211
00402659  3c20                 CMP AL,0x20
0040265b  0f84b0fbffff         JZ 0x00402211
00402661  8a4601               MOV AL,byte ptr [ESI + 0x1]
00402664  46                   INC ESI
00402665  8975f8               MOV dword ptr [EBP + -0x8],ESI
00402668  ebe7                 JMP 0x00402651

; ==== FUNCTION FUN_0040266a entry=0040266a sig=ATOM __cdecl FUN_0040266a(HINSTANCE param_1)
0040266a  55                   PUSH EBP
0040266b  8bec                 MOV EBP,ESP
0040266d  83ec28               SUB ESP,0x28
00402670  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00402673  56                   PUSH ESI
00402674  33f6                 XOR ESI,ESI
00402676  6a6c                 PUSH 0x6c
00402678  50                   PUSH EAX
00402679  8975d8               MOV dword ptr [EBP + -0x28],ESI
0040267c  c745dc05284000       MOV dword ptr [EBP + -0x24],0x402805
00402683  8975e0               MOV dword ptr [EBP + -0x20],ESI
00402686  8975e4               MOV dword ptr [EBP + -0x1c],ESI
00402689  8945e8               MOV dword ptr [EBP + -0x18],EAX
0040268c  ff15c8304000         CALL dword ptr [0x004030c8]
00402692  68007f0000           PUSH 0x7f00
00402697  56                   PUSH ESI
00402698  8945ec               MOV dword ptr [EBP + -0x14],EAX
0040269b  ff15cc304000         CALL dword ptr [0x004030cc]
004026a1  56                   PUSH ESI
004026a2  8945f0               MOV dword ptr [EBP + -0x10],EAX
004026a5  ff1508304000         CALL dword ptr [0x00403008]
004026ab  8945f4               MOV dword ptr [EBP + -0xc],EAX
004026ae  a18c414000           MOV EAX,[0x0040418c]
004026b3  8945fc               MOV dword ptr [EBP + -0x4],EAX
004026b6  8d45d8               LEA EAX,[EBP + -0x28]
004026b9  50                   PUSH EAX
004026ba  8975f8               MOV dword ptr [EBP + -0x8],ESI
004026bd  ff15d8304000         CALL dword ptr [0x004030d8]
004026c3  0fb7c0               MOVZX EAX,AX
004026c6  5e                   POP ESI
004026c7  c9                   LEAVE
004026c8  c3                   RET

; ==== FUNCTION FUN_004026c9 entry=004026c9 sig=undefined4 __cdecl FUN_004026c9(HINSTANCE param_1)
004026c9  53                   PUSH EBX
004026ca  33db                 XOR EBX,EBX
004026cc  53                   PUSH EBX
004026cd  b800000080           MOV EAX,0x80000000
004026d2  ff74240c             PUSH dword ptr [ESP + 0xc]
004026d6  53                   PUSH EBX
004026d7  53                   PUSH EBX
004026d8  53                   PUSH EBX
004026d9  50                   PUSH EAX
004026da  53                   PUSH EBX
004026db  50                   PUSH EAX
004026dc  a1d4424000           MOV EAX,[0x004042d4]
004026e1  2408                 AND AL,0x8
004026e3  f6d8                 NEG AL
004026e5  1bc0                 SBB EAX,EAX
004026e7  250000c980           AND EAX,0x80c90000
004026ec  0500000480           ADD EAX,0x80040000
004026f1  50                   PUSH EAX
004026f2  6858424000           PUSH 0x404258
004026f7  ff358c414000         PUSH dword ptr [0x0040418c]
004026fd  53                   PUSH EBX
004026fe  ff15b0304000         CALL dword ptr [0x004030b0]
00402704  3bc3                 CMP EAX,EBX
00402706  a38c424000           MOV [0x0040428c],EAX
0040270b  7504                 JNZ 0x00402711
0040270d  33c0                 XOR EAX,EAX
0040270f  5b                   POP EBX
00402710  c3                   RET
00402711  57                   PUSH EDI
00402712  56                   PUSH ESI
00402713  50                   PUSH EAX
00402714  ff15b4304000         CALL dword ptr [0x004030b4]
0040271a  8b3d0c304000         MOV EDI,dword ptr [0x0040300c]
00402720  8bf0                 MOV ESI,EAX
00402722  6a08                 PUSH 0x8
00402724  56                   PUSH ESI
00402725  ffd7                 CALL EDI
00402727  6a0a                 PUSH 0xa
00402729  56                   PUSH ESI
0040272a  a3c4424000           MOV [0x004042c4],EAX
0040272f  ffd7                 CALL EDI
00402731  56                   PUSH ESI
00402732  a3c8424000           MOV [0x004042c8],EAX
00402737  ff358c424000         PUSH dword ptr [0x0040428c]
0040273d  ff15b8304000         CALL dword ptr [0x004030b8]
00402743  391dd0424000         CMP dword ptr [0x004042d0],EBX
00402749  8b35bc304000         MOV ESI,dword ptr [0x004030bc]
0040274f  7547                 JNZ 0x00402798
00402751  a1d4424000           MOV EAX,[0x004042d4]
00402756  83e003               AND EAX,0x3
00402759  2bc3                 SUB EAX,EBX
0040275b  742d                 JZ 0x0040278a
0040275d  48                   DEC EAX
0040275e  7538                 JNZ 0x00402798
00402760  a1c8424000           MOV EAX,[0x004042c8]
00402765  6a04                 PUSH 0x4
00402767  59                   POP ECX
00402768  8d0440               LEA EAX,[EAX + EAX*0x2]
0040276b  51                   PUSH ECX
0040276c  99                   CDQ
0040276d  f7f9                 IDIV ECX
0040276f  50                   PUSH EAX
00402770  a3c8424000           MOV [0x004042c8],EAX
00402775  ff35c4424000         PUSH dword ptr [0x004042c4]
0040277b  53                   PUSH EBX
0040277c  53                   PUSH EBX
0040277d  53                   PUSH EBX
0040277e  ff358c424000         PUSH dword ptr [0x0040428c]
00402784  ffd6                 CALL ESI
00402786  6a05                 PUSH 0x5
00402788  eb02                 JMP 0x0040278c
0040278a  6a03                 PUSH 0x3
0040278c  ff358c424000         PUSH dword ptr [0x0040428c]
00402792  ff15c0304000         CALL dword ptr [0x004030c0]
00402798  391dd0424000         CMP dword ptr [0x004042d0],EBX
0040279e  750c                 JNZ 0x004027ac
004027a0  a1d4424000           MOV EAX,[0x004042d4]
004027a5  83e003               AND EAX,0x3
004027a8  3c02                 CMP AL,0x2
004027aa  7519                 JNZ 0x004027c5
004027ac  6a04                 PUSH 0x4
004027ae  ff35c8424000         PUSH dword ptr [0x004042c8]
004027b4  ff35c4424000         PUSH dword ptr [0x004042c4]
004027ba  53                   PUSH EBX
004027bb  53                   PUSH EBX
004027bc  53                   PUSH EBX
004027bd  ff358c424000         PUSH dword ptr [0x0040428c]
004027c3  ffd6                 CALL ESI
004027c5  e813000000           CALL 0x004027dd
004027ca  ff358c424000         PUSH dword ptr [0x0040428c]
004027d0  ff15c4304000         CALL dword ptr [0x004030c4]
004027d6  6a01                 PUSH 0x1
004027d8  58                   POP EAX
004027d9  5e                   POP ESI
004027da  5f                   POP EDI
004027db  5b                   POP EBX
004027dc  c3                   RET

; ==== FUNCTION FUN_004027dd entry=004027dd sig=undefined __stdcall FUN_004027dd(void)
004027dd  55                   PUSH EBP
004027de  8bec                 MOV EBP,ESP
004027e0  83ec10               SUB ESP,0x10
004027e3  8d45f0               LEA EAX,[EBP + -0x10]
004027e6  50                   PUSH EAX
004027e7  ff358c424000         PUSH dword ptr [0x0040428c]
004027ed  ff1590304000         CALL dword ptr [0x00403090]
004027f3  8b45f8               MOV EAX,dword ptr [EBP + -0x8]
004027f6  a3c4424000           MOV [0x004042c4],EAX
004027fb  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
004027fe  a3c8424000           MOV [0x004042c8],EAX
00402803  c9                   LEAVE
00402804  c3                   RET

; ==== FUNCTION _MainWndProc@16 entry=00402805 sig=UINT __stdcall _MainWndProc@16(HWND param_1, uint param_2, HWND param_3, HPALETTE param_4)
00402805  55                   PUSH EBP
00402806  8bec                 MOV EBP,ESP
00402808  83ec64               SUB ESP,0x64
0040280b  8b450c               MOV EAX,dword ptr [EBP + 0xc]
0040280e  53                   PUSH EBX
0040280f  56                   PUSH ESI
00402810  83f805               CMP EAX,0x5
00402813  57                   PUSH EDI
00402814  772b                 JA 0x00402841
00402816  7417                 JZ 0x0040282f
00402818  8bc8                 MOV ECX,EAX
0040281a  49                   DEC ECX
0040281b  49                   DEC ECX
0040281c  0f8527020000         JNZ 0x00402a49
00402822  6a00                 PUSH 0x0
00402824  ff15a8304000         CALL dword ptr [0x004030a8]
0040282a  e9d1020000           JMP 0x00402b00
0040282f  6a01                 PUSH 0x1
00402831  6a00                 PUSH 0x0
00402833  ff7508               PUSH dword ptr [EBP + 0x8]
00402836  ff15a4304000         CALL dword ptr [0x004030a4]
0040283c  e9bf020000           JMP 0x00402b00
00402841  83f814               CMP EAX,0x14
00402844  0f8773010000         JA 0x004029bd
0040284a  0f8465010000         JZ 0x004029b5
00402850  83f80f               CMP EAX,0xf
00402853  0f85f0010000         JNZ 0x00402a49
00402859  8d459c               LEA EAX,[EBP + -0x64]
0040285c  50                   PUSH EAX
0040285d  ff7508               PUSH dword ptr [EBP + 0x8]
00402860  ff15a0304000         CALL dword ptr [0x004030a0]
00402866  8bd8                 MOV EBX,EAX
00402868  895dfc               MOV dword ptr [EBP + -0x4],EBX
0040286b  e86dffffff           CALL 0x004027dd
00402870  a148434000           MOV EAX,[0x00404348]
00402875  33ff                 XOR EDI,EDI
00402877  3bc7                 CMP EAX,EDI
00402879  7413                 JZ 0x0040288e
0040287b  57                   PUSH EDI
0040287c  50                   PUSH EAX
0040287d  53                   PUSH EBX
0040287e  ff151c304000         CALL dword ptr [0x0040301c]
00402884  53                   PUSH EBX
00402885  894514               MOV dword ptr [EBP + 0x14],EAX
00402888  ff1520304000         CALL dword ptr [0x00403020]
0040288e  f605d842400003       TEST byte ptr [0x004042d8],0x3
00402895  0f85e4000000         JNZ 0x0040297f
0040289b  8b3518304000         MOV ESI,dword ptr [0x00403018]
004028a1  83c8ff               OR EAX,0xffffffff
004028a4  eb03                 JMP 0x004028a9
004028a6  8b45e8               MOV EAX,dword ptr [EBP + -0x18]
004028a9  8945e0               MOV dword ptr [EBP + -0x20],EAX
004028ac  a1c8424000           MOV EAX,[0x004042c8]
004028b1  8d4f01               LEA ECX,[EDI + 0x1]
004028b4  6a60                 PUSH 0x60
004028b6  0fafc1               IMUL EAX,ECX
004028b9  894df8               MOV dword ptr [EBP + -0x8],ECX
004028bc  59                   POP ECX
004028bd  99                   CDQ
004028be  f7f9                 IDIV ECX
004028c0  8d4dec               LEA ECX,[EBP + -0x14]
004028c3  c7451050434000       MOV dword ptr [EBP + 0x10],0x404350
004028ca  c7450c03000000       MOV dword ptr [EBP + 0xc],0x3
004028d1  8945e8               MOV dword ptr [EBP + -0x18],EAX
004028d4  8b4510               MOV EAX,dword ptr [EBP + 0x10]
004028d7  6a5f                 PUSH 0x5f
004028d9  5b                   POP EBX
004028da  0fbf4006             MOVSX EAX,word ptr [EAX + 0x6]
004028de  0fafc7               IMUL EAX,EDI
004028e1  99                   CDQ
004028e2  f7fb                 IDIV EBX
004028e4  8b5510               MOV EDX,dword ptr [EBP + 0x10]
004028e7  0fbf12               MOVSX EDX,word ptr [EDX]
004028ea  03c2                 ADD EAX,EDX
004028ec  85c0                 TEST EAX,EAX
004028ee  8901                 MOV dword ptr [ECX],EAX
004028f0  7d03                 JGE 0x004028f5
004028f2  832100               AND dword ptr [ECX],0x0
004028f5  b8ff000000           MOV EAX,0xff
004028fa  3901                 CMP dword ptr [ECX],EAX
004028fc  7e02                 JLE 0x00402900
004028fe  8901                 MOV dword ptr [ECX],EAX
00402900  83451002             ADD dword ptr [EBP + 0x10],0x2
00402904  83c104               ADD ECX,0x4
00402907  ff4d0c               DEC dword ptr [EBP + 0xc]
0040290a  75c8                 JNZ 0x004028d4
0040290c  833d4843400000       CMP dword ptr [0x00404348],0x0
00402913  740a                 JZ 0x0040291f
00402915  0fb7c7               MOVZX EAX,DI
00402918  0d00000001           OR EAX,0x1000000
0040291d  eb16                 JMP 0x00402935
0040291f  0fb645f4             MOVZX EAX,byte ptr [EBP + -0xc]
00402923  0fb64df0             MOVZX ECX,byte ptr [EBP + -0x10]
00402927  c1e008               SHL EAX,0x8
0040292a  0bc1                 OR EAX,ECX
0040292c  0fb64dec             MOVZX ECX,byte ptr [EBP + -0x14]
00402930  c1e008               SHL EAX,0x8
00402933  0bc1                 OR EAX,ECX
00402935  50                   PUSH EAX
00402936  ff1514304000         CALL dword ptr [0x00403014]
0040293c  8b5dfc               MOV EBX,dword ptr [EBP + -0x4]
0040293f  8bf8                 MOV EDI,EAX
00402941  57                   PUSH EDI
00402942  53                   PUSH EBX
00402943  ffd6                 CALL ESI
00402945  894510               MOV dword ptr [EBP + 0x10],EAX
00402948  8b45e8               MOV EAX,dword ptr [EBP + -0x18]
0040294b  2b45e0               SUB EAX,dword ptr [EBP + -0x20]
0040294e  682100f000           PUSH 0xf00021
00402953  50                   PUSH EAX
00402954  ff35c4424000         PUSH dword ptr [0x004042c4]
0040295a  ff75e0               PUSH dword ptr [EBP + -0x20]
0040295d  6a00                 PUSH 0x0
0040295f  53                   PUSH EBX
00402960  ff1510304000         CALL dword ptr [0x00403010]
00402966  ff7510               PUSH dword ptr [EBP + 0x10]
00402969  53                   PUSH EBX
0040296a  ffd6                 CALL ESI
0040296c  57                   PUSH EDI
0040296d  ff1504304000         CALL dword ptr [0x00403004]
00402973  8b7df8               MOV EDI,dword ptr [EBP + -0x8]
00402976  83ff60               CMP EDI,0x60
00402979  0f8c27ffffff         JL 0x004028a6
0040297f  833d4843400000       CMP dword ptr [0x00404348],0x0
00402986  740c                 JZ 0x00402994
00402988  6a01                 PUSH 0x1
0040298a  ff7514               PUSH dword ptr [EBP + 0x14]
0040298d  53                   PUSH EBX
0040298e  ff151c304000         CALL dword ptr [0x0040301c]
00402994  a13c434000           MOV EAX,[0x0040433c]
00402999  85c0                 TEST EAX,EAX
0040299b  7406                 JZ 0x004029a3
0040299d  53                   PUSH EBX
0040299e  ff7508               PUSH dword ptr [EBP + 0x8]
004029a1  ffd0                 CALL EAX
004029a3  8d459c               LEA EAX,[EBP + -0x64]
004029a6  50                   PUSH EAX
004029a7  ff7508               PUSH dword ptr [EBP + 0x8]
004029aa  ff159c304000         CALL dword ptr [0x0040309c]
004029b0  e94b010000           JMP 0x00402b00
004029b5  6a01                 PUSH 0x1
004029b7  58                   POP EAX
004029b8  e957010000           JMP 0x00402b14
004029bd  b912010000           MOV ECX,0x112
004029c2  3bc1                 CMP EAX,ECX
004029c4  0f8423010000         JZ 0x00402aed
004029ca  3d13010000           CMP EAX,0x113
004029cf  0f84fc000000         JZ 0x00402ad1
004029d5  3d0f030000           CMP EAX,0x30f
004029da  0f8481000000         JZ 0x00402a61
004029e0  3d11030000           CMP EAX,0x311
004029e5  746e                 JZ 0x00402a55
004029e7  3d00040000           CMP EAX,0x400
004029ec  765b                 JBE 0x00402a49
004029ee  3d02040000           CMP EAX,0x402
004029f3  7638                 JBE 0x00402a2d
004029f5  3dc8040000           CMP EAX,0x4c8
004029fa  754d                 JNZ 0x00402a49
004029fc  817d140d020000       CMP dword ptr [EBP + 0x14],0x20d
00402a03  0f85f7000000         JNZ 0x00402b00
00402a09  f605d842400004       TEST byte ptr [0x004042d8],0x4
00402a10  6a00                 PUSH 0x0
00402a12  6a00                 PUSH 0x0
00402a14  7407                 JZ 0x00402a1d
00402a16  6806080000           PUSH 0x806
00402a1b  eb02                 JMP 0x00402a1f
00402a1d  6a10                 PUSH 0x10
00402a1f  ff7510               PUSH dword ptr [EBP + 0x10]
00402a22  ff1598304000         CALL dword ptr [0x00403098]
00402a28  e9d3000000           JMP 0x00402b00
00402a2d  8b0d4c434000         MOV ECX,dword ptr [0x0040434c]
00402a33  85c9                 TEST ECX,ECX
00402a35  0f84c5000000         JZ 0x00402b00
00402a3b  ff7514               PUSH dword ptr [EBP + 0x14]
00402a3e  ff7510               PUSH dword ptr [EBP + 0x10]
00402a41  50                   PUSH EAX
00402a42  ffd1                 CALL ECX
00402a44  e9b7000000           JMP 0x00402b00
00402a49  ff7514               PUSH dword ptr [EBP + 0x14]
00402a4c  ff7510               PUSH dword ptr [EBP + 0x10]
00402a4f  50                   PUSH EAX
00402a50  e9b6000000           JMP 0x00402b0b
00402a55  8b4510               MOV EAX,dword ptr [EBP + 0x10]
00402a58  3b4508               CMP EAX,dword ptr [EBP + 0x8]
00402a5b  0f849f000000         JZ 0x00402b00
00402a61  a1dc424000           MOV EAX,[0x004042dc]
00402a66  8b0d48434000         MOV ECX,dword ptr [0x00404348]
00402a6c  85c0                 TEST EAX,EAX
00402a6e  7508                 JNZ 0x00402a78
00402a70  85c9                 TEST ECX,ECX
00402a72  0f8488000000         JZ 0x00402b00
00402a78  85c0                 TEST EAX,EAX
00402a7a  8bf0                 MOV ESI,EAX
00402a7c  7502                 JNZ 0x00402a80
00402a7e  8bf1                 MOV ESI,ECX
00402a80  ff7508               PUSH dword ptr [EBP + 0x8]
00402a83  ff15b4304000         CALL dword ptr [0x004030b4]
00402a89  8bd8                 MOV EBX,EAX
00402a8b  6a00                 PUSH 0x0
00402a8d  56                   PUSH ESI
00402a8e  8b351c304000         MOV ESI,dword ptr [0x0040301c]
00402a94  53                   PUSH EBX
00402a95  ffd6                 CALL ESI
00402a97  8b3d20304000         MOV EDI,dword ptr [0x00403020]
00402a9d  53                   PUSH EBX
00402a9e  894514               MOV dword ptr [EBP + 0x14],EAX
00402aa1  ffd7                 CALL EDI
00402aa3  85c0                 TEST EAX,EAX
00402aa5  894510               MOV dword ptr [EBP + 0x10],EAX
00402aa8  740d                 JZ 0x00402ab7
00402aaa  6a01                 PUSH 0x1
00402aac  6a00                 PUSH 0x0
00402aae  ff7508               PUSH dword ptr [EBP + 0x8]
00402ab1  ff15a4304000         CALL dword ptr [0x004030a4]
00402ab7  6a01                 PUSH 0x1
00402ab9  ff7514               PUSH dword ptr [EBP + 0x14]
00402abc  53                   PUSH EBX
00402abd  ffd6                 CALL ESI
00402abf  53                   PUSH EBX
00402ac0  ffd7                 CALL EDI
00402ac2  53                   PUSH EBX
00402ac3  ff7508               PUSH dword ptr [EBP + 0x8]
00402ac6  ff15b8304000         CALL dword ptr [0x004030b8]
00402acc  8b4510               MOV EAX,dword ptr [EBP + 0x10]
00402acf  eb43                 JMP 0x00402b14
00402ad1  817d1069200000       CMP dword ptr [EBP + 0x10],0x2069
00402ad8  7509                 JNZ 0x00402ae3
00402ada  8325cc42400000       AND dword ptr [0x004042cc],0x0
00402ae1  eb1d                 JMP 0x00402b00
00402ae3  6a00                 PUSH 0x0
00402ae5  ff1540434000         CALL dword ptr [0x00404340]
00402aeb  eb13                 JMP 0x00402b00
00402aed  817d1060f00000       CMP dword ptr [EBP + 0x10],0xf060
00402af4  750e                 JNZ 0x00402b04
00402af6  c705bc42400001000000 MOV dword ptr [0x004042bc],0x1
00402b00  33c0                 XOR EAX,EAX
00402b02  eb10                 JMP 0x00402b14
00402b04  ff7514               PUSH dword ptr [EBP + 0x14]
00402b07  ff7510               PUSH dword ptr [EBP + 0x10]
00402b0a  51                   PUSH ECX
00402b0b  ff7508               PUSH dword ptr [EBP + 0x8]
00402b0e  ff1594304000         CALL dword ptr [0x00403094]
00402b14  5f                   POP EDI
00402b15  5e                   POP ESI
00402b16  5b                   POP EBX
00402b17  c9                   LEAVE
00402b18  c21000               RET 0x10

; ==== FUNCTION FUN_00402b1b entry=00402b1b sig=undefined __cdecl FUN_00402b1b(LPSTR param_1)
00402b1b  55                   PUSH EBP
00402b1c  8bec                 MOV EBP,ESP
00402b1e  81ec88000000         SUB ESP,0x88
00402b24  53                   PUSH EBX
00402b25  56                   PUSH ESI
00402b26  57                   PUSH EDI
00402b27  8b7d08               MOV EDI,dword ptr [EBP + 0x8]
00402b2a  6800010000           PUSH 0x100
00402b2f  57                   PUSH EDI
00402b30  ff1558304000         CALL dword ptr [0x00403058]
00402b36  57                   PUSH EDI
00402b37  33db                 XOR EBX,EBX
00402b39  ff1554304000         CALL dword ptr [0x00403054]
00402b3f  807c38ff5c           CMP byte ptr [EAX + EDI*0x1 + -0x1],0x5c
00402b44  8d7438ff             LEA ESI,[EAX + EDI*0x1 + -0x1]
00402b48  7401                 JZ 0x00402b4b
00402b4a  46                   INC ESI
00402b4b  0fb7c3               MOVZX EAX,BX
00402b4e  50                   PUSH EAX
00402b4f  685c424000           PUSH 0x40425c
00402b54  56                   PUSH ESI
00402b55  ff15ac304000         CALL dword ptr [0x004030ac]
00402b5b  83c40c               ADD ESP,0xc
00402b5e  8d8578ffffff         LEA EAX,[EBP + 0xffffff78]
00402b64  43                   INC EBX
00402b65  6800400000           PUSH 0x4000
00402b6a  50                   PUSH EAX
00402b6b  57                   PUSH EDI
00402b6c  ff1530304000         CALL dword ptr [0x00403030]
00402b72  83f8ff               CMP EAX,-0x1
00402b75  75d4                 JNZ 0x00402b4b
00402b77  5f                   POP EDI
00402b78  5e                   POP ESI
00402b79  5b                   POP EBX
00402b7a  c9                   LEAVE
00402b7b  c3                   RET

; ==== FUNCTION FUN_00402b7c entry=00402b7c sig=undefined __stdcall FUN_00402b7c(void)
00402b7c  6a00                 PUSH 0x0
00402b7e  689c414000           PUSH 0x40419c
00402b83  686c424000           PUSH 0x40426c
00402b88  ff358c424000         PUSH dword ptr [0x0040428c]
00402b8e  ff15d4304000         CALL dword ptr [0x004030d4]
00402b94  c3                   RET

; ==== FUNCTION FUN_00402b95 entry=00402b95 sig=undefined __stdcall FUN_00402b95(void)
00402b95  55                   PUSH EBP
00402b96  8bec                 MOV EBP,ESP
00402b98  83ec20               SUB ESP,0x20
00402b9b  53                   PUSH EBX
00402b9c  33db                 XOR EBX,EBX
00402b9e  66391d56434000       CMP word ptr [0x00404356],BX
00402ba5  56                   PUSH ESI
00402ba6  57                   PUSH EDI
00402ba7  7516                 JNZ 0x00402bbf
00402ba9  66391d58434000       CMP word ptr [0x00404358],BX
00402bb0  750d                 JNZ 0x00402bbf
00402bb2  66391d5a434000       CMP word ptr [0x0040435a],BX
00402bb9  0f8418010000         JZ 0x00402cd7
00402bbf  ff358c424000         PUSH dword ptr [0x0040428c]
00402bc5  ff15b4304000         CALL dword ptr [0x004030b4]
00402bcb  8b350c304000         MOV ESI,dword ptr [0x0040300c]
00402bd1  6a0c                 PUSH 0xc
00402bd3  50                   PUSH EAX
00402bd4  8945f8               MOV dword ptr [EBP + -0x8],EAX
00402bd7  ffd6                 CALL ESI
00402bd9  6a0e                 PUSH 0xe
00402bdb  8bf8                 MOV EDI,EAX
00402bdd  ff75f8               PUSH dword ptr [EBP + -0x8]
00402be0  ffd6                 CALL ESI
00402be2  0faff8               IMUL EDI,EAX
00402be5  6683ff08             CMP DI,0x8
00402be9  0f8cd9000000         JL 0x00402cc8
00402bef  6884010000           PUSH 0x184
00402bf4  6a42                 PUSH 0x42
00402bf6  ff1568304000         CALL dword ptr [0x00403068]
00402bfc  50                   PUSH EAX
00402bfd  ff1588304000         CALL dword ptr [0x00403088]
00402c03  6a60                 PUSH 0x60
00402c05  8bf8                 MOV EDI,EAX
00402c07  58                   POP EAX
00402c08  895df4               MOV dword ptr [EBP + -0xc],EBX
00402c0b  66894702             MOV word ptr [EDI + 0x2],AX
00402c0f  66c7070003           MOV word ptr [EDI],0x300
00402c14  8d4f05               LEA ECX,[EDI + 0x5]
00402c17  8945ec               MOV dword ptr [EBP + -0x14],EAX
00402c1a  8d75e0               LEA ESI,[EBP + -0x20]
00402c1d  c745fc50434000       MOV dword ptr [EBP + -0x4],0x404350
00402c24  c745f003000000       MOV dword ptr [EBP + -0x10],0x3
00402c2b  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
00402c2e  6a5f                 PUSH 0x5f
00402c30  5b                   POP EBX
00402c31  0fbf4006             MOVSX EAX,word ptr [EAX + 0x6]
00402c35  0faf45f4             IMUL EAX,dword ptr [EBP + -0xc]
00402c39  99                   CDQ
00402c3a  f7fb                 IDIV EBX
00402c3c  8b55fc               MOV EDX,dword ptr [EBP + -0x4]
00402c3f  33db                 XOR EBX,EBX
00402c41  0fbf12               MOVSX EDX,word ptr [EDX]
00402c44  03c2                 ADD EAX,EDX
00402c46  3bc3                 CMP EAX,EBX
00402c48  8906                 MOV dword ptr [ESI],EAX
00402c4a  7d02                 JGE 0x00402c4e
00402c4c  891e                 MOV dword ptr [ESI],EBX
00402c4e  b8ff000000           MOV EAX,0xff
00402c53  3906                 CMP dword ptr [ESI],EAX
00402c55  7e02                 JLE 0x00402c59
00402c57  8906                 MOV dword ptr [ESI],EAX
00402c59  8345fc02             ADD dword ptr [EBP + -0x4],0x2
00402c5d  83c604               ADD ESI,0x4
00402c60  ff4df0               DEC dword ptr [EBP + -0x10]
00402c63  75c6                 JNZ 0x00402c2b
00402c65  8a45e0               MOV AL,byte ptr [EBP + -0x20]
00402c68  ff45f4               INC dword ptr [EBP + -0xc]
00402c6b  8841ff               MOV byte ptr [ECX + -0x1],AL
00402c6e  8a45e4               MOV AL,byte ptr [EBP + -0x1c]
00402c71  8801                 MOV byte ptr [ECX],AL
00402c73  8a45e8               MOV AL,byte ptr [EBP + -0x18]
00402c76  884101               MOV byte ptr [ECX + 0x1],AL
00402c79  885902               MOV byte ptr [ECX + 0x2],BL
00402c7c  83c104               ADD ECX,0x4
00402c7f  ff4dec               DEC dword ptr [EBP + -0x14]
00402c82  7596                 JNZ 0x00402c1a
00402c84  8b3548434000         MOV ESI,dword ptr [0x00404348]
00402c8a  57                   PUSH EDI
00402c8b  ff1500304000         CALL dword ptr [0x00403000]
00402c91  57                   PUSH EDI
00402c92  a348434000           MOV [0x00404348],EAX
00402c97  ff155c304000         CALL dword ptr [0x0040305c]
00402c9d  50                   PUSH EAX
00402c9e  ff156c304000         CALL dword ptr [0x0040306c]
00402ca4  53                   PUSH EBX
00402ca5  ff3548434000         PUSH dword ptr [0x00404348]
00402cab  ff75f8               PUSH dword ptr [EBP + -0x8]
00402cae  ff151c304000         CALL dword ptr [0x0040301c]
00402cb4  3bf3                 CMP ESI,EBX
00402cb6  7407                 JZ 0x00402cbf
00402cb8  56                   PUSH ESI
00402cb9  ff1504304000         CALL dword ptr [0x00403004]
00402cbf  ff75f8               PUSH dword ptr [EBP + -0x8]
00402cc2  ff1520304000         CALL dword ptr [0x00403020]
00402cc8  ff75f8               PUSH dword ptr [EBP + -0x8]
00402ccb  ff358c424000         PUSH dword ptr [0x0040428c]
00402cd1  ff15b8304000         CALL dword ptr [0x004030b8]
00402cd7  5f                   POP EDI
00402cd8  5e                   POP ESI
00402cd9  5b                   POP EBX
00402cda  c9                   LEAVE
00402cdb  c3                   RET

; ==== FUNCTION _StubFileWrite@12 entry=00402cdc sig=undefined __stdcall _StubFileWrite@12(HFILE param_1, LPCCH param_2, UINT param_3)
00402cdc  ff74240c             PUSH dword ptr [ESP + 0xc]
00402ce0  ff74240c             PUSH dword ptr [ESP + 0xc]
00402ce4  ff74240c             PUSH dword ptr [ESP + 0xc]
00402ce8  ff1560304000         CALL dword ptr [0x00403060]
00402cee  c20c00               RET 0xc
; undefined 271 bytes at 00402cf1
00403000  addr 0000352c
00403004  addr 000034aa
00403008  addr 000034ba
0040300c  addr 000034cc
00403010  addr 000034dc
00403014  addr 000034e6
00403018  addr 000034fa
0040301c  addr 0000351c
00403020  addr 0000350a
; undefined 4 bytes at 00403024
00403028  addr 000032a0
0040302c  addr 00003292
00403030  addr 00003286
00403034  addr 000032b2
00403038  addr 000032cc
0040303c  addr 000032d6
00403040  addr 000032e0
00403044  addr 000032c2
00403048  addr 000032ec
0040304c  addr 00003276
00403050  addr 00003328
00403054  addr 00003338
00403058  addr 00003344
0040305c  addr 0000335c
00403060  addr 0000336c
00403064  addr 0000326c
00403068  addr 0000321e
0040306c  addr 0000322c
00403070  addr 0000325e
00403074  addr 00003254
00403078  addr 0000324a
0040307c  addr 0000323a
00403080  addr 00003316
00403084  addr 00003302
00403088  addr 00003210
; undefined 4 bytes at 0040308c
00403090  addr 00003422
00403094  addr 00003432
00403098  addr 00003444
0040309c  addr 00003454
004030a0  addr 00003460
004030a4  addr 0000346e
004030a8  addr 00003480
004030ac  addr 00003492
004030b0  addr 00003410
004030b4  addr 00003408
004030b8  addr 000033fc
004030bc  addr 000033ec
004030c0  addr 000033de
004030c4  addr 000033ce
004030c8  addr 000033c2
004030cc  addr 000033b4
004030d0  addr 00003384
004030d4  addr 00003394
004030d8  addr 000033a2
; undefined 4 bytes at 004030dc
004030e0  ddw 3158h
004030e4  ddw 0h
004030e8  ddw 0h
004030ec  ddw 3376h
004030f0  ddw 3028h
004030f4  ddw 31C0h
004030f8  ddw 0h
004030fc  ddw 0h
00403100  ddw 349Eh
00403104  ddw 3090h
00403108  ddw 3130h
0040310c  ddw 0h
00403110  ddw 0h
00403114  ddw 353Ch
00403118  ddw 3000h
; undefined 20 bytes at 0040311c
00403130  ddw 352Ch
00403134  ddw 34AAh
00403138  ddw 34BAh
0040313c  ddw 34CCh
00403140  ddw 34DCh
00403144  ddw 34E6h
00403148  ddw 34FAh
0040314c  ddw 351Ch
00403150  ddw 350Ah
; undefined 4 bytes at 00403154
00403158  ddw 32A0h
0040315c  ddw 3292h
00403160  ddw 3286h
00403164  ddw 32B2h
00403168  ddw 32CCh
0040316c  ddw 32D6h
00403170  ddw 32E0h
00403174  ddw 32C2h
00403178  ddw 32ECh
0040317c  ddw 3276h
00403180  ddw 3328h
00403184  ddw 3338h
00403188  ddw 3344h
0040318c  ddw 335Ch
00403190  ddw 336Ch
00403194  ddw 326Ch
00403198  ddw 321Eh
0040319c  ddw 322Ch
004031a0  ddw 325Eh
004031a4  ddw 3254h
004031a8  ddw 324Ah
004031ac  ddw 323Ah
004031b0  ddw 3316h
004031b4  ddw 3302h
004031b8  ddw 3210h
; undefined 4 bytes at 004031bc
004031c0  ddw 3422h
004031c4  ddw 3432h
004031c8  ddw 3444h
004031cc  ddw 3454h
004031d0  ddw 3460h
004031d4  ddw 346Eh
004031d8  ddw 3480h
004031dc  ddw 3492h
004031e0  ddw 3410h
004031e4  ddw 3408h
004031e8  ddw 33FCh
004031ec  ddw 33ECh
004031f0  ddw 33DEh
004031f4  ddw 33CEh
004031f8  ddw 33C2h
004031fc  ddw 33B4h
00403200  ddw 3384h
00403204  ddw 3394h
00403208  ddw 33A2h
; undefined 4 bytes at 0040320c
00403210  dw 160h
00403212  ds "GlobalLock"
; undefined 1 bytes at 0040321d
0040321e  dw 155h
00403220  ds "GlobalAlloc"
0040322c  dw 15Ch
0040322e  ds "GlobalFree"
; undefined 1 bytes at 00403239
0040323a  dw 166h
0040323c  ds "GlobalUnlock"
; undefined 1 bytes at 00403249
0040324a  dw 28Dh
0040324c  ds "_llseek"
00403254  dw 28Fh
00403256  ds "_lread"
; undefined 1 bytes at 0040325d
0040325e  dw 6Bh
00403260  ds "ExitProcess"
0040326c  dw 26Fh
0040326e  ds "WinExec"
00403276  dw 14Dh
00403278  ds "GetVersionExA"
00403286  dw 1AFh
00403288  ds "OpenFile"
; undefined 1 bytes at 00403291
00403292  dw 98h
00403294  ds "FreeLibrary"
004032a0  dw 116h
004032a2  ds "GetProcAddress"
; undefined 1 bytes at 004032b1
004032b2  dw 190h
004032b4  ds "LoadLibraryA"
; undefined 1 bytes at 004032c1
004032c2  dw 28Ch
004032c4  ds "_lcreat"
004032cc  dw 28Bh
004032ce  ds "_lclose"
004032d6  dw 28Eh
004032d8  ds "_lopen"
; undefined 1 bytes at 004032df
004032e0  dw 29Bh
004032e2  ds "lstrcpyA"
; undefined 1 bytes at 004032eb
004032ec  dw FCh
004032ee  ds "GetModuleFileNameA"
; undefined 1 bytes at 00403301
00403302  dw FEh
00403304  ds "GetModuleHandleA"
; undefined 1 bytes at 00403315
00403316  dw AAh
00403318  ds "GetCommandLineA"
00403328  dw 213h
0040332a  ds "SetErrorMode"
; undefined 1 bytes at 00403337
00403338  dw 2A1h
0040333a  ds "lstrlenA"
; undefined 1 bytes at 00403343
00403344  dw 151h
00403346  ds "GetWindowsDirectoryA"
; undefined 1 bytes at 0040335b
0040335c  dw 15Fh
0040335e  ds "GlobalHandle"
; undefined 1 bytes at 0040336b
0040336c  dw 290h
0040336e  ds "_lwrite"
00403376  ds "KERNEL32.dll"
; undefined 1 bytes at 00403383
00403384  dw CBh
00403386  ds "ExitWindowsEx"
00403394  dw 195h
00403396  ds "MessageBoxA"
004033a2  dw 1BEh
004033a4  ds "RegisterClassA"
; undefined 1 bytes at 004033b3
004033b4  dw 172h
004033b6  ds "LoadCursorA"
004033c2  dw 176h
004033c4  ds "LoadIconA"
004033ce  dw 251h
004033d0  ds "UpdateWindow"
; undefined 1 bytes at 004033dd
004033de  dw 22Dh
004033e0  ds "ShowWindow"
; undefined 1 bytes at 004033eb
004033ec  dw 21Eh
004033ee  ds "SetWindowPos"
; undefined 1 bytes at 004033fb
004033fc  dw 1CDh
004033fe  ds "ReleaseDC"
00403408  dw EEh
0040340a  ds "GetDC"
00403410  dw 55h
00403412  ds "CreateWindowExA"
00403422  dw E4h
00403424  ds "GetClientRect"
00403432  dw 80h
00403434  ds "DefWindowProcA"
; undefined 1 bytes at 00403443
00403444  dw 1DAh
00403446  ds "SendMessageA"
; undefined 1 bytes at 00403453
00403454  dw B6h
00403456  ds "EndPaint"
; undefined 1 bytes at 0040345f
00403460  dw 9h
00403462  ds "BeginPaint"
; undefined 1 bytes at 0040346d
0040346e  dw 152h
00403470  ds "InvalidateRect"
; undefined 1 bytes at 0040347f
00403480  dw 1B3h
00403482  ds "PostQuitMessage"
00403492  dw 264h
00403494  ds "wsprintfA"
0040349e  ds "USER32.dll"
; undefined 1 bytes at 004034a9
004034aa  dw 46h
004034ac  ds "DeleteObject"
; undefined 1 bytes at 004034b9
004034ba  dw FAh
004034bc  ds "GetStockObject"
; undefined 1 bytes at 004034cb
004034cc  dw C7h
004034ce  ds "GetDeviceCaps"
004034dc  dw 122h
004034de  ds "PatBlt"
; undefined 1 bytes at 004034e5
004034e6  dw 40h
004034e8  ds "CreateSolidBrush"
; undefined 1 bytes at 004034f9
004034fa  dw 14Ah
004034fc  ds "SelectObject"
; undefined 1 bytes at 00403509
0040350a  dw 137h
0040350c  ds "RealizePalette"
; undefined 1 bytes at 0040351b
0040351c  dw 14Bh
0040351e  ds "SelectPalette"
0040352c  dw 35h
0040352e  ds "CreatePalette"
0040353c  ds "GDI32.dll"
; undefined 10 bytes at 00403546
00403550  IMAGE_DIRECTORY_ENTRY_EXPORT 
00403578  ibo32 00402805
0040357c  ibo32 00402cdc
00403580  ibo32 00403597
00403584  ibo32 004035a7
00403588  dw 0h
0040358a  dw 1h
0040358c  ds "STUB32.EXE"
00403597  ds "_MainWndProc@16"
004035a7  ds "_StubFileWrite@12"
; undefined 71 bytes at 004035b9
00404000  undefined4 FFFFFFFFh
; undefined 4 bytes at 00404004
00404008  undefined4 00000010h
; undefined 346 bytes at 0040400c
00404166  undefined2 007Fh
; undefined 20 bytes at 00404168
0040417c  undefined4 00000009h
00404180  undefined4 00000006h
; undefined 4 bytes at 00404184
00404188  undefined4 00003000h
0040418c  addr 00404190
00404190  ds "GLBSInstall"
0040419c  ds "Install"
004041a4  ds "System DLLs corrupt or missing."
004041c4  ds "Demo installations only run on the computer they were created on."
; undefined 2 bytes at 00404206
00404208  ds "HandleFtp"
; undefined 2 bytes at 00404212
00404214  ds "FileWrite"
; undefined 2 bytes at 0040421e
00404220  ds "DiskPrompt"
; undefined 1 bytes at 0040422b
0040422c  ds "DisplayGraphics"
0040423c  ds "UpdateScreen"
; undefined 3 bytes at 00404249
0040424c  ds "WiseMain"
; undefined 7 bytes at 00404255
0040425c  ds "\\~GLC%04x.TMP"
; undefined 2 bytes at 0040426a
0040426c  ds "Corrupt installation detected."
; undefined 1 bytes at 0040428b
0040428c  undefined4 00000000h
00404290  undefined4 00000000h
; undefined 20 bytes at 00404294
004042a8  undefined4 00000000h
; undefined 12 bytes at 004042ac
004042b8  undefined4 00000000h
004042bc  undefined4 00000000h
004042c0  undefined1 00h
; undefined 3 bytes at 004042c1
004042c4  undefined4 00000000h
004042c8  undefined4 00000000h
; undefined 4 bytes at 004042cc
004042d0  undefined4 00000000h
004042d4  undefined4 00000000h
; undefined 4 bytes at 004042d8
004042dc  undefined4 00000000h
; undefined 4 bytes at 004042e0
004042e4  undefined4 00000000h
004042e8  undefined4 00000000h
004042ec  undefined4 00000000h
; undefined 40 bytes at 004042f0
00404318  undefined4 00000000h
; undefined 16 bytes at 0040431c
0040432c  undefined4 00000000h
; undefined 12 bytes at 00404330
0040433c  undefined4 00000000h
00404340  undefined4 00000000h
00404344  undefined4 00000000h
00404348  undefined4 00000000h
0040434c  undefined4 00000000h
00404350  undefined2 0000h
00404352  undefined2 0000h
; undefined 2 bytes at 00404354
00404356  undefined2 0000h
00404358  undefined2 0000h
0040435a  undefined2 0000h
0040435c  undefined4 00000000h
00404360  undefined4 00000000h
00404364  undefined4 00000000h
00404368  undefined4 00000000h
0040436c  undefined4 00000000h
00404370  undefined4 00000000h
00404374  undefined4 00000000h
00404378  undefined4 00000000h
0040437c  undefined4 00000000h
00404380  undefined4 00000000h
00404384  undefined4 00000000h
00404388  undefined4 00000000h
0040438c  undefined4 00000000h
00404390  undefined4 00000000h
00404394  undefined4 00000000h
00404398  undefined4 00000000h
0040439c  undefined4 00000000h
004043a0  undefined4 00000000h
004043a4  undefined4 00000000h
004043a8  undefined4 00000000h
004043ac  undefined4 00000000h
; undefined 80 bytes at 004043b0
00405000  IMAGE_RESOURCE_DIRECTORY 
00405010  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00405018  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00405020  IMAGE_RESOURCE_DIRECTORY 
00405030  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00405038  IMAGE_RESOURCE_DIRECTORY 
00405048  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00405050  IMAGE_RESOURCE_DIRECTORY 
00405060  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00405068  IMAGE_RESOURCE_DIRECTORY 
00405078  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00405080  IMAGE_RESOURCE_DATA_ENTRY 
00405090  IMAGE_RESOURCE_DATA_ENTRY 
Rsrc_Icon_1_409:
004050a0  IconRes <Icon-Image>
Rsrc_GroupIcon_6c_409:
00405388  GroupIconRes <GroupIcon-Resource>
; undefined 100 bytes at 0040539c
ExceptionList:
ffdff000  void * 00000000
StackBase:
ffdff004  void * 00000000
StackLimit:
ffdff008  void * 00000000
SubSystemTib:
ffdff00c  void * 00000000
FiberData:
ffdff010  void * 00000000
ArbitraryUserPointer:
ffdff014  void * 00000000
Self:
ffdff018  void * ffdff000
EnvironmentPointer:
ffdff01c  void * 00000000
ClientId:
ffdff020  CLIENT_ID 
ActiveRpcHandle:
ffdff028  void * 00000000
ThreadLocalStoragePointer:
ffdff02c  void * 00000000
ProcessEnvironmentBlock:
ffdff030  void * 00000000
LastErrorValue:
ffdff034  ddw 0h
CountOfOwnedCriticalSections:
ffdff038  ddw 0h
CsrClientThread:
ffdff03c  void * 00000000
Win32ThreadInfo:
ffdff040  void * 00000000
User32Reserved:
ffdff044  ddw[26] 
UserReserved:
ffdff0ac  ddw[5] 
WOW32Reserved:
ffdff0c0  void * 00000000
CurrentLocale:
ffdff0c4  ddw 0h
FpSoftwareStatusRegister:
ffdff0c8  ddw 0h
SystemReserved1:
ffdff0cc  void *[54] 
ExceptionCode:
ffdff1a4  ddw 0h
ActivationContextStackPointer:
ffdff1a8  void * 00000000
SpareBytes:
ffdff1ac  uchar[36] ""
TxFsContext:
ffdff1d0  ddw 0h
GdiTebBatch:
ffdff1d4  ddw 0h
; undefined 1244 bytes at ffdff1d8
RealClientId:
ffdff6b4  CLIENT_ID 
GdiCachedProcessHandle:
ffdff6bc  void * 00000000
GdiClientPID:
ffdff6c0  ddw 0h
GdiCLientTID:
ffdff6c4  ddw 0h
GdiThreadLocalInfo:
ffdff6c8  void * 00000000
Win32ClientInfo:
ffdff6cc  void *[62] 
glDispatchTable:
ffdff7c4  void *[233] 
glReserved1:
ffdffb68  void *[29] 
glReserved2:
ffdffbdc  void * 00000000
glSectionInfo:
ffdffbe0  void * 00000000
glSection:
ffdffbe4  void * 00000000
glTable:
ffdffbe8  void * 00000000
glCurrentRC:
ffdffbec  void * 00000000
glContext:
ffdffbf0  void * 00000000
LastStatusValue:
ffdffbf4  ddw 0h
; undefined 8 bytes at ffdffbf8
StaticUnicodeBuffer:
ffdffc00  wchar16[261] u""
; undefined 2 bytes at ffdffe0a
DeallocationStack:
ffdffe0c  void * 00000000
TlsSlots:
ffdffe10  void *[64] 
TlsLinks.Flink:
ffdfff10  void * 00000000
TlsLinks.Blink:
ffdfff14  void * 00000000
Vdm:
ffdfff18  void * 00000000
ReservedForNtRpc:
ffdfff1c  void * 00000000
DbgSsReserved:
ffdfff20  void *[2] 
HardErrorMode:
ffdfff28  ddw 0h
Instrumentation:
ffdfff2c  void *[9] 
ActivityId:
ffdfff50  GUID 00000000-0000-0000-0000-000000000000
SubProcessTag:
ffdfff60  void * 00000000
EtwLocalData:
ffdfff64  void * 00000000
EtwTraceData:
ffdfff68  void * 00000000
WinSockData:
ffdfff6c  void * 00000000
GdiBatchCount:
ffdfff70  ddw 0h
IdealProcessorValue:
ffdfff74  ddw 0h
GuaranteedStackBytes:
ffdfff78  ddw 0h
ReservedForPerf:
ffdfff7c  void * 00000000
ReservedForOle:
ffdfff80  void * 00000000
WaitingOnLoaderLock:
ffdfff84  ddw 0h
SavedPriorityState:
ffdfff88  void * 00000000
SoftPatchPtr1:
ffdfff8c  void * 00000000
ThreadPoolData:
ffdfff90  void * 00000000
TlsExpansionSlots:
ffdfff94  void * 00000000
MuiGeneration:
ffdfff98  ddw 0h
IsImpersonating:
ffdfff9c  ddw 0h
NlsCache:
ffdfffa0  void * 00000000
pShimData:
ffdfffa4  void * 00000000
HeapVirtualAffinity:
ffdfffa8  ddw 0h
CurrentTransactionHandle:
ffdfffac  void * 00000000
ActiveFrame:
ffdfffb0  void * 00000000
FlsData:
ffdfffb4  void * 00000000
PreferredLanguages:
ffdfffb8  void * 00000000
UserPrefLanguages:
ffdfffbc  void * 00000000
MergedPrefLanguages:
ffdfffc0  void * 00000000
MuiImpersonation:
ffdfffc4  ddw 0h
CrossTebFlags:
ffdfffc8  ushort 0h
SameTebFlags:
ffdfffca  ushort 0h
TxnScopeEnterCallback:
ffdfffcc  void * 00000000
TxnScopeExitCallback:
ffdfffd0  void * 00000000
TxnScopeContext:
ffdfffd4  void * 00000000
LockCount:
ffdfffd8  ddw 0h
; undefined 4 bytes at ffdfffdc
ResourceRetValue:
ffdfffe0  void * 00000000
; undefined 28 bytes at ffdfffe4
