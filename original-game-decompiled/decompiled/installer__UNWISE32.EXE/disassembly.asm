; Ghidra listing for stream_015_000263ed.exe (x86:LE:32:default). Labels and types are tool-generated unless they came from the binary.
00400000  IMAGE_DOS_HEADER 
00400080  IMAGE_RICH_HEADER 
; undefined 24 bytes at 004000b0
004000c8  IMAGE_NT_HEADERS32 
004001c0  IMAGE_SECTION_HEADER 
004001e8  IMAGE_SECTION_HEADER 
00400210  IMAGE_SECTION_HEADER 
00400238  IMAGE_SECTION_HEADER 
; undefined 416 bytes at 00400260

; ==== FUNCTION FUN_00401000 entry=00401000 sig=undefined4 __stdcall FUN_00401000(HMODULE param_1, int param_2, char * param_3)
00401000  55                   PUSH EBP
00401001  8bec                 MOV EBP,ESP
00401003  81ec78090000         SUB ESP,0x978
00401009  53                   PUSH EBX
0040100a  56                   PUSH ESI
0040100b  33db                 XOR EBX,EBX
0040100d  57                   PUSH EDI
0040100e  889d88f8ffff         MOV byte ptr [EBP + 0xfffff888],BL
00401014  e872760000           CALL 0x0040868b
00401019  bf00010000           MOV EDI,0x100
0040101e  57                   PUSH EDI
0040101f  e8bf880000           CALL 0x004098e3
00401024  8b353ce14000         MOV ESI,dword ptr [0x0040e13c]
0040102a  59                   POP ECX
0040102b  57                   PUSH EDI
0040102c  50                   PUSH EAX
0040102d  ff7508               PUSH dword ptr [EBP + 0x8]
00401030  a3b8384100           MOV [0x004138b8],EAX
00401035  ffd6                 CALL ESI
00401037  6a01                 PUSH 0x1
00401039  ff35b8384100         PUSH dword ptr [0x004138b8]
0040103f  e8f5790000           CALL 0x00408a39
00401044  59                   POP ECX
00401045  59                   POP ECX
00401046  57                   PUSH EDI
00401047  e897880000           CALL 0x004098e3
0040104c  59                   POP ECX
0040104d  a3f43b4100           MOV [0x00413bf4],EAX
00401052  57                   PUSH EDI
00401053  50                   PUSH EAX
00401054  ff7508               PUSH dword ptr [EBP + 0x8]
00401057  ffd6                 CALL ESI
00401059  68a8014100           PUSH 0x4101a8
0040105e  ff35f43b4100         PUSH dword ptr [0x00413bf4]
00401064  ff1540e14000         CALL dword ptr [0x0040e140]
0040106a  8b0df43b4100         MOV ECX,dword ptr [0x00413bf4]
00401070  8b3544e14000         MOV ESI,dword ptr [0x0040e144]
00401076  8d4408fd             LEA EAX,[EAX + ECX*0x1 + -0x3]
0040107a  50                   PUSH EAX
0040107b  ffd6                 CALL ESI
0040107d  6800400000           PUSH 0x4000
00401082  e85c880000           CALL 0x004098e3
00401087  59                   POP ECX
00401088  a3503c4100           MOV [0x00413c50],EAX
0040108d  ff7510               PUSH dword ptr [EBP + 0x10]
00401090  8d8588faffff         LEA EAX,[EBP + 0xfffffa88]
00401096  c745f801000000       MOV dword ptr [EBP + -0x8],0x1
0040109d  50                   PUSH EAX
0040109e  ffd6                 CALL ESI
004010a0  389d88faffff         CMP byte ptr [EBP + 0xfffffa88],BL
004010a6  7575                 JNZ 0x0040111d
004010a8  ff35f43b4100         PUSH dword ptr [0x00413bf4]
004010ae  8d8588fdffff         LEA EAX,[EBP + 0xfffffd88]
004010b4  50                   PUSH EAX
004010b5  ffd6                 CALL ESI
004010b7  8d8588fdffff         LEA EAX,[EBP + 0xfffffd88]
004010bd  53                   PUSH EBX
004010be  50                   PUSH EAX
004010bf  e875790000           CALL 0x00408a39
004010c4  59                   POP ECX
004010c5  8d8588fdffff         LEA EAX,[EBP + 0xfffffd88]
004010cb  59                   POP ECX
004010cc  50                   PUSH EAX
004010cd  ff1540e14000         CALL dword ptr [0x0040e140]
004010d3  8d840587fdffff       LEA EAX,[EBP + EAX*0x1 + 0xfffffd87]
004010da  8d8d88fdffff         LEA ECX,[EBP + 0xfffffd88]
004010e0  3bc1                 CMP EAX,ECX
004010e2  7608                 JBE 0x004010ec
004010e4  80385c               CMP byte ptr [EAX],0x5c
004010e7  7408                 JZ 0x004010f1
004010e9  48                   DEC EAX
004010ea  ebee                 JMP 0x004010da
004010ec  80385c               CMP byte ptr [EAX],0x5c
004010ef  7501                 JNZ 0x004010f2
004010f1  40                   INC EAX
004010f2  689c014100           PUSH 0x41019c
004010f7  50                   PUSH EAX
004010f8  ffd6                 CALL ESI
004010fa  8d8588fdffff         LEA EAX,[EBP + 0xfffffd88]
00401100  53                   PUSH EBX
00401101  50                   PUSH EAX
00401102  e8c67a0000           CALL 0x00408bcd
00401107  59                   POP ECX
00401108  85c0                 TEST EAX,EAX
0040110a  59                   POP ECX
0040110b  7510                 JNZ 0x0040111d
0040110d  8d8588fdffff         LEA EAX,[EBP + 0xfffffd88]
00401113  50                   PUSH EAX
00401114  8d8588faffff         LEA EAX,[EBP + 0xfffffa88]
0040111a  50                   PUSH EAX
0040111b  ffd6                 CALL ESI
0040111d  6a02                 PUSH 0x2
0040111f  8d8588faffff         LEA EAX,[EBP + 0xfffffa88]
00401125  6898014100           PUSH 0x410198
0040112a  50                   PUSH EAX
0040112b  e830cb0000           CALL 0x0040dc60
00401130  83c40c               ADD ESP,0xc
00401133  85c0                 TEST EAX,EAX
00401135  0f8486000000         JZ 0x004011c1
0040113b  8d8588fdffff         LEA EAX,[EBP + 0xfffffd88]
00401141  50                   PUSH EAX
00401142  57                   PUSH EDI
00401143  ff1548e14000         CALL dword ptr [0x0040e148]
00401149  8d8588f9ffff         LEA EAX,[EBP + 0xfffff988]
0040114f  50                   PUSH EAX
00401150  682b1a0000           PUSH 0x1a2b
00401155  8d8588fdffff         LEA EAX,[EBP + 0xfffffd88]
0040115b  6894014100           PUSH 0x410194
00401160  50                   PUSH EAX
00401161  ff154ce14000         CALL dword ptr [0x0040e14c]
00401167  8d8588f9ffff         LEA EAX,[EBP + 0xfffff988]
0040116d  6890014100           PUSH 0x410190
00401172  50                   PUSH EAX
00401173  ff1540e14000         CALL dword ptr [0x0040e140]
00401179  8d8d88f9ffff         LEA ECX,[EBP + 0xfffff988]
0040117f  83e903               SUB ECX,0x3
00401182  03c1                 ADD EAX,ECX
00401184  50                   PUSH EAX
00401185  ffd6                 CALL ESI
00401187  8d8588feffff         LEA EAX,[EBP + 0xfffffe88]
0040118d  57                   PUSH EDI
0040118e  50                   PUSH EAX
0040118f  ff7508               PUSH dword ptr [EBP + 0x8]
00401192  ff153ce14000         CALL dword ptr [0x0040e13c]
00401198  8d8588f9ffff         LEA EAX,[EBP + 0xfffff988]
0040119e  53                   PUSH EBX
0040119f  50                   PUSH EAX
004011a0  8d8588feffff         LEA EAX,[EBP + 0xfffffe88]
004011a6  50                   PUSH EAX
004011a7  ff1550e14000         CALL dword ptr [0x0040e150]
004011ad  85c0                 TEST EAX,EAX
004011af  740d                 JZ 0x004011be
004011b1  8d8588f9ffff         LEA EAX,[EBP + 0xfffff988]
004011b7  50                   PUSH EAX
004011b8  e816860000           CALL 0x004097d3
004011bd  59                   POP ECX
004011be  895df8               MOV dword ptr [EBP + -0x8],EBX
004011c1  8b35c8e04000         MOV ESI,dword ptr [0x0040e0c8]
004011c7  6a05                 PUSH 0x5
004011c9  6a6a                 PUSH 0x6a
004011cb  ff7508               PUSH dword ptr [EBP + 0x8]
004011ce  ffd6                 CALL ESI
004011d0  50                   PUSH EAX
004011d1  ff7508               PUSH dword ptr [EBP + 0x8]
004011d4  ff1554e14000         CALL dword ptr [0x0040e154]
004011da  50                   PUSH EAX
004011db  8945fc               MOV dword ptr [EBP + -0x4],EAX
004011de  ff1558e14000         CALL dword ptr [0x0040e158]
004011e4  6a05                 PUSH 0x5
004011e6  6a68                 PUSH 0x68
004011e8  ff7508               PUSH dword ptr [EBP + 0x8]
004011eb  ffd6                 CALL ESI
004011ed  50                   PUSH EAX
004011ee  ff7508               PUSH dword ptr [EBP + 0x8]
004011f1  ff1554e14000         CALL dword ptr [0x0040e154]
004011f7  50                   PUSH EAX
004011f8  8945d4               MOV dword ptr [EBP + -0x2c],EAX
004011fb  ff1558e14000         CALL dword ptr [0x0040e158]
00401201  6a02                 PUSH 0x2
00401203  6a6a                 PUSH 0x6a
00401205  ff7508               PUSH dword ptr [EBP + 0x8]
00401208  ffd6                 CALL ESI
0040120a  50                   PUSH EAX
0040120b  ff7508               PUSH dword ptr [EBP + 0x8]
0040120e  ff1554e14000         CALL dword ptr [0x0040e154]
00401214  50                   PUSH EAX
00401215  8945d8               MOV dword ptr [EBP + -0x28],EAX
00401218  ff1558e14000         CALL dword ptr [0x0040e158]
0040121e  6a6a                 PUSH 0x6a
00401220  ff7508               PUSH dword ptr [EBP + 0x8]
00401223  ff151ce24000         CALL dword ptr [0x0040e21c]
00401229  80bd88faffff2f       CMP byte ptr [EBP + 0xfffffa88],0x2f
00401230  a3f83b4100           MOV [0x00413bf8],EAX
00401235  8d8588faffff         LEA EAX,[EBP + 0xfffffa88]
0040123b  891d403c4100         MOV dword ptr [0x00413c40],EBX
00401241  894510               MOV dword ptr [EBP + 0x10],EAX
00401244  0f85c9000000         JNZ 0x00401313
0040124a  8b7510               MOV ESI,dword ptr [EBP + 0x10]
0040124d  0fbe4601             MOVSX EAX,byte ptr [ESI + 0x1]
00401251  50                   PUSH EAX
00401252  e8598f0000           CALL 0x0040a1b0
00401257  83f85a               CMP EAX,0x5a
0040125a  59                   POP ECX
0040125b  7526                 JNZ 0x00401283
0040125d  807e017a             CMP byte ptr [ESI + 0x1],0x7a
00401261  750a                 JNZ 0x0040126d
00401263  c705a838410001000000 MOV dword ptr [0x004138a8],0x1
0040126d  46                   INC ESI
0040126e  46                   INC ESI
0040126f  897510               MOV dword ptr [EBP + 0x10],ESI
00401272  803e20               CMP byte ptr [ESI],0x20
00401275  0f858f000000         JNZ 0x0040130a
0040127b  46                   INC ESI
0040127c  803e20               CMP byte ptr [ESI],0x20
0040127f  74fa                 JZ 0x0040127b
00401281  eb76                 JMP 0x004012f9
00401283  0fbe4601             MOVSX EAX,byte ptr [ESI + 0x1]
00401287  50                   PUSH EAX
00401288  e8238f0000           CALL 0x0040a1b0
0040128d  83f841               CMP EAX,0x41
00401290  59                   POP ECX
00401291  750c                 JNZ 0x0040129f
00401293  c705403c410001000000 MOV dword ptr [0x00413c40],0x1
0040129d  eb58                 JMP 0x004012f7
0040129f  0fbe4601             MOVSX EAX,byte ptr [ESI + 0x1]
004012a3  50                   PUSH EAX
004012a4  e8078f0000           CALL 0x0040a1b0
004012a9  83f853               CMP EAX,0x53
004012ac  59                   POP ECX
004012ad  750f                 JNZ 0x004012be
004012af  6a01                 PUSH 0x1
004012b1  58                   POP EAX
004012b2  a378384100           MOV [0x00413878],EAX
004012b7  a3403c4100           MOV [0x00413c40],EAX
004012bc  eb39                 JMP 0x004012f7
004012be  0fbe4601             MOVSX EAX,byte ptr [ESI + 0x1]
004012c2  50                   PUSH EAX
004012c3  e8e88e0000           CALL 0x0040a1b0
004012c8  83f852               CMP EAX,0x52
004012cb  59                   POP ECX
004012cc  750c                 JNZ 0x004012da
004012ce  c705c838410001000000 MOV dword ptr [0x004138c8],0x1
004012d8  eb1d                 JMP 0x004012f7
004012da  0fbe4601             MOVSX EAX,byte ptr [ESI + 0x1]
004012de  50                   PUSH EAX
004012df  e8cc8e0000           CALL 0x0040a1b0
004012e4  83f855               CMP EAX,0x55
004012e7  59                   POP ECX
004012e8  7529                 JNZ 0x00401313
004012ea  8b7510               MOV ESI,dword ptr [EBP + 0x10]
004012ed  c705a43b410001000000 MOV dword ptr [0x00413ba4],0x1
004012f7  46                   INC ESI
004012f8  46                   INC ESI
004012f9  803e20               CMP byte ptr [ESI],0x20
004012fc  897510               MOV dword ptr [EBP + 0x10],ESI
004012ff  7509                 JNZ 0x0040130a
00401301  46                   INC ESI
00401302  803e20               CMP byte ptr [ESI],0x20
00401305  74fa                 JZ 0x00401301
00401307  897510               MOV dword ptr [EBP + 0x10],ESI
0040130a  803e2f               CMP byte ptr [ESI],0x2f
0040130d  0f8437ffffff         JZ 0x0040124a
00401313  8b4510               MOV EAX,dword ptr [EBP + 0x10]
00401316  803820               CMP byte ptr [EAX],0x20
00401319  7509                 JNZ 0x00401324
0040131b  40                   INC EAX
0040131c  803820               CMP byte ptr [EAX],0x20
0040131f  74fa                 JZ 0x0040131b
00401321  894510               MOV dword ptr [EBP + 0x10],EAX
00401324  6a20                 PUSH 0x20
00401326  50                   PUSH EAX
00401327  e8c48d0000           CALL 0x0040a0f0
0040132c  59                   POP ECX
0040132d  3bc3                 CMP EAX,EBX
0040132f  59                   POP ECX
00401330  7434                 JZ 0x00401366
00401332  391da8384100         CMP dword ptr [0x004138a8],EBX
00401338  752c                 JNZ 0x00401366
0040133a  8818                 MOV byte ptr [EAX],BL
0040133c  40                   INC EAX
0040133d  a3fc3b4100           MOV [0x00413bfc],EAX
00401342  803822               CMP byte ptr [EAX],0x22
00401345  7506                 JNZ 0x0040134d
00401347  40                   INC EAX
00401348  a3fc3b4100           MOV [0x00413bfc],EAX
0040134d  50                   PUSH EAX
0040134e  ff1540e14000         CALL dword ptr [0x0040e140]
00401354  48                   DEC EAX
00401355  780f                 JS 0x00401366
00401357  8b0dfc3b4100         MOV ECX,dword ptr [0x00413bfc]
0040135d  03c1                 ADD EAX,ECX
0040135f  803822               CMP byte ptr [EAX],0x22
00401362  7502                 JNZ 0x00401366
00401364  8818                 MOV byte ptr [EAX],BL
00401366  ff35f43b4100         PUSH dword ptr [0x00413bf4]
0040136c  8b35d4e04000         MOV ESI,dword ptr [0x0040e0d4]
00401372  53                   PUSH EBX
00401373  6884014100           PUSH 0x410184
00401378  6878014100           PUSH 0x410178
0040137d  ffd6                 CALL ESI
0040137f  ff35f43b4100         PUSH dword ptr [0x00413bf4]
00401385  a3203c4100           MOV [0x00413c20],EAX
0040138a  53                   PUSH EBX
0040138b  686c014100           PUSH 0x41016c
00401390  6878014100           PUSH 0x410178
00401395  ffd6                 CALL ESI
00401397  ff35f43b4100         PUSH dword ptr [0x00413bf4]
0040139d  a3243c4100           MOV [0x00413c24],EAX
004013a2  68ff000000           PUSH 0xff
004013a7  6860014100           PUSH 0x410160
004013ac  6878014100           PUSH 0x410178
004013b1  ffd6                 CALL ESI
004013b3  ff35f43b4100         PUSH dword ptr [0x00413bf4]
004013b9  a3283c4100           MOV [0x00413c28],EAX
004013be  53                   PUSH EBX
004013bf  6858014100           PUSH 0x410158
004013c4  6878014100           PUSH 0x410178
004013c9  ffd6                 CALL ESI
004013cb  ff35f43b4100         PUSH dword ptr [0x00413bf4]
004013d1  2b05203c4100         SUB EAX,dword ptr [0x00413c20]
004013d7  53                   PUSH EBX
004013d8  684c014100           PUSH 0x41014c
004013dd  6878014100           PUSH 0x410178
004013e2  a32c3c4100           MOV [0x00413c2c],EAX
004013e7  ffd6                 CALL ESI
004013e9  ff35f43b4100         PUSH dword ptr [0x00413bf4]
004013ef  2b05243c4100         SUB EAX,dword ptr [0x00413c24]
004013f5  53                   PUSH EBX
004013f6  6840014100           PUSH 0x410140
004013fb  6878014100           PUSH 0x410178
00401400  a3303c4100           MOV [0x00413c30],EAX
00401405  ffd6                 CALL ESI
00401407  ff35f43b4100         PUSH dword ptr [0x00413bf4]
0040140d  2b05283c4100         SUB EAX,dword ptr [0x00413c28]
00401413  6a01                 PUSH 0x1
00401415  6830014100           PUSH 0x410130
0040141a  6878014100           PUSH 0x410178
0040141f  a3343c4100           MOV [0x00413c34],EAX
00401424  ffd6                 CALL ESI
00401426  a338384100           MOV [0x00413838],EAX
0040142b  e8b77d0000           CALL 0x004091e7
00401430  395d0c               CMP dword ptr [EBP + 0xc],EBX
00401433  750d                 JNZ 0x00401442
00401435  ff7508               PUSH dword ptr [EBP + 0x8]
00401438  e8c1090000           CALL 0x00401dfe
0040143d  85c0                 TEST EAX,EAX
0040143f  59                   POP ECX
00401440  7411                 JZ 0x00401453
00401442  ff7514               PUSH dword ptr [EBP + 0x14]
00401445  ff7508               PUSH dword ptr [EBP + 0x8]
00401448  e8100a0000           CALL 0x00401e5d
0040144d  59                   POP ECX
0040144e  85c0                 TEST EAX,EAX
00401450  59                   POP ECX
00401451  7507                 JNZ 0x0040145a
00401453  33c0                 XOR EAX,EAX
00401455  e99d090000           JMP 0x00401df7
0040145a  391d1c384100         CMP dword ptr [0x0041381c],EBX
00401460  8b352ce24000         MOV ESI,dword ptr [0x0040e22c]
00401466  745c                 JZ 0x004014c4
00401468  53                   PUSH EBX
00401469  6a64                 PUSH 0x64
0040146b  686a200000           PUSH 0x206a
00401470  c705e43b410001000000 MOV dword ptr [0x00413be4],0x1
0040147a  ff3520384100         PUSH dword ptr [0x00413820]
00401480  ff1530e24000         CALL dword ptr [0x0040e230]
00401486  6a01                 PUSH 0x1
00401488  53                   PUSH EBX
00401489  53                   PUSH EBX
0040148a  8d45dc               LEA EAX,[EBP + -0x24]
0040148d  53                   PUSH EBX
0040148e  50                   PUSH EAX
0040148f  ffd6                 CALL ESI
00401491  85c0                 TEST EAX,EAX
00401493  7416                 JZ 0x004014ab
00401495  8d45dc               LEA EAX,[EBP + -0x24]
00401498  50                   PUSH EAX
00401499  ff1534e24000         CALL dword ptr [0x0040e234]
0040149f  8d45dc               LEA EAX,[EBP + -0x24]
004014a2  50                   PUSH EAX
004014a3  ff1504e34000         CALL dword ptr [0x0040e304]
004014a9  ebdb                 JMP 0x00401486
004014ab  391de43b4100         CMP dword ptr [0x00413be4],EBX
004014b1  75d3                 JNZ 0x00401486
004014b3  686a200000           PUSH 0x206a
004014b8  ff3520384100         PUSH dword ptr [0x00413820]
004014be  ff1508e34000         CALL dword ptr [0x0040e308]
004014c4  391da8384100         CMP dword ptr [0x004138a8],EBX
004014ca  0f84bf010000         JZ 0x0040168f
004014d0  8b4510               MOV EAX,dword ptr [EBP + 0x10]
004014d3  3818                 CMP byte ptr [EAX],BL
004014d5  0f84b4010000         JZ 0x0040168f
004014db  53                   PUSH EBX
004014dc  68e8030000           PUSH 0x3e8
004014e1  686a200000           PUSH 0x206a
004014e6  c705e43b410001000000 MOV dword ptr [0x00413be4],0x1
004014f0  ff3520384100         PUSH dword ptr [0x00413820]
004014f6  ff1530e24000         CALL dword ptr [0x0040e230]
004014fc  6a01                 PUSH 0x1
004014fe  53                   PUSH EBX
004014ff  53                   PUSH EBX
00401500  8d45dc               LEA EAX,[EBP + -0x24]
00401503  53                   PUSH EBX
00401504  50                   PUSH EAX
00401505  ffd6                 CALL ESI
00401507  85c0                 TEST EAX,EAX
00401509  7416                 JZ 0x00401521
0040150b  8d45dc               LEA EAX,[EBP + -0x24]
0040150e  50                   PUSH EAX
0040150f  ff1534e24000         CALL dword ptr [0x0040e234]
00401515  8d45dc               LEA EAX,[EBP + -0x24]
00401518  50                   PUSH EAX
00401519  ff1504e34000         CALL dword ptr [0x0040e304]
0040151f  ebdb                 JMP 0x004014fc
00401521  391de43b4100         CMP dword ptr [0x00413be4],EBX
00401527  75d3                 JNZ 0x004014fc
00401529  686a200000           PUSH 0x206a
0040152e  ff3520384100         PUSH dword ptr [0x00413820]
00401534  ff1508e34000         CALL dword ptr [0x0040e308]
0040153a  ff7510               PUSH dword ptr [EBP + 0x10]
0040153d  8d8588feffff         LEA EAX,[EBP + 0xfffffe88]
00401543  50                   PUSH EAX
00401544  ff1544e14000         CALL dword ptr [0x0040e144]
0040154a  8d8588feffff         LEA EAX,[EBP + 0xfffffe88]
00401550  6a20                 PUSH 0x20
00401552  50                   PUSH EAX
00401553  e8988b0000           CALL 0x0040a0f0
00401558  8bf0                 MOV ESI,EAX
0040155a  59                   POP ECX
0040155b  3bf3                 CMP ESI,EBX
0040155d  59                   POP ECX
0040155e  7402                 JZ 0x00401562
00401560  881e                 MOV byte ptr [ESI],BL
00401562  8d8588feffff         LEA EAX,[EBP + 0xfffffe88]
00401568  50                   PUSH EAX
00401569  ff1540e14000         CALL dword ptr [0x0040e140]
0040156f  80bc0587feffff5c     CMP byte ptr [EBP + EAX*0x1 + 0xfffffe87],0x5c
00401577  740d                 JZ 0x00401586
00401579  8d8588feffff         LEA EAX,[EBP + 0xfffffe88]
0040157f  50                   PUSH EAX
00401580  ff15d8e04000         CALL dword ptr [0x0040e0d8]
00401586  8d8588feffff         LEA EAX,[EBP + 0xfffffe88]
0040158c  50                   PUSH EAX
0040158d  ff1540e14000         CALL dword ptr [0x0040e140]
00401593  8d840587feffff       LEA EAX,[EBP + EAX*0x1 + 0xfffffe87]
0040159a  8d8d88feffff         LEA ECX,[EBP + 0xfffffe88]
004015a0  3bc1                 CMP EAX,ECX
004015a2  7608                 JBE 0x004015ac
004015a4  80385c               CMP byte ptr [EAX],0x5c
004015a7  7408                 JZ 0x004015b1
004015a9  48                   DEC EAX
004015aa  ebee                 JMP 0x0040159a
004015ac  80385c               CMP byte ptr [EAX],0x5c
004015af  7502                 JNZ 0x004015b3
004015b1  8818                 MOV byte ptr [EAX],BL
004015b3  8d8588feffff         LEA EAX,[EBP + 0xfffffe88]
004015b9  53                   PUSH EBX
004015ba  50                   PUSH EAX
004015bb  e88e5f0000           CALL 0x0040754e
004015c0  59                   POP ECX
004015c1  3bf3                 CMP ESI,EBX
004015c3  59                   POP ECX
004015c4  7422                 JZ 0x004015e8
004015c6  46                   INC ESI
004015c7  381e                 CMP byte ptr [ESI],BL
004015c9  741d                 JZ 0x004015e8
004015cb  56                   PUSH ESI
004015cc  ff1540e14000         CALL dword ptr [0x0040e140]
004015d2  807c30ff5c           CMP byte ptr [EAX + ESI*0x1 + -0x1],0x5c
004015d7  8d4430ff             LEA EAX,[EAX + ESI*0x1 + -0x1]
004015db  7502                 JNZ 0x004015df
004015dd  8818                 MOV byte ptr [EAX],BL
004015df  53                   PUSH EBX
004015e0  56                   PUSH ESI
004015e1  e8685f0000           CALL 0x0040754e
004015e6  59                   POP ECX
004015e7  59                   POP ECX
004015e8  ff3520384100         PUSH dword ptr [0x00413820]
004015ee  ff15e8e24000         CALL dword ptr [0x0040e2e8]
004015f4  8b3544e24000         MOV ESI,dword ptr [0x0040e244]
004015fa  53                   PUSH EBX
004015fb  53                   PUSH EBX
004015fc  8d45dc               LEA EAX,[EBP + -0x24]
004015ff  53                   PUSH EBX
00401600  50                   PUSH EAX
00401601  ffd6                 CALL ESI
00401603  85c0                 TEST EAX,EAX
00401605  741d                 JZ 0x00401624
00401607  8d45dc               LEA EAX,[EBP + -0x24]
0040160a  50                   PUSH EAX
0040160b  ff1534e24000         CALL dword ptr [0x0040e234]
00401611  8d45dc               LEA EAX,[EBP + -0x24]
00401614  50                   PUSH EAX
00401615  ff1504e34000         CALL dword ptr [0x0040e304]
0040161b  53                   PUSH EBX
0040161c  53                   PUSH EBX
0040161d  8d45dc               LEA EAX,[EBP + -0x24]
00401620  53                   PUSH EBX
00401621  50                   PUSH EAX
00401622  ebdd                 JMP 0x00401601
00401624  ff35f83b4100         PUSH dword ptr [0x00413bf8]
0040162a  ff1544e04000         CALL dword ptr [0x0040e044]
00401630  ff75d8               PUSH dword ptr [EBP + -0x28]
00401633  8b35dce04000         MOV ESI,dword ptr [0x0040e0dc]
00401639  ffd6                 CALL ESI
0040163b  ff75d4               PUSH dword ptr [EBP + -0x2c]
0040163e  ffd6                 CALL ESI
00401640  ff75fc               PUSH dword ptr [EBP + -0x4]
00401643  ffd6                 CALL ESI
00401645  8d8588feffff         LEA EAX,[EBP + 0xfffffe88]
0040164b  57                   PUSH EDI
0040164c  50                   PUSH EAX
0040164d  ff7508               PUSH dword ptr [EBP + 0x8]
00401650  ff153ce14000         CALL dword ptr [0x0040e13c]
00401656  a1483c4100           MOV EAX,[0x00413c48]
0040165b  3bc3                 CMP EAX,EBX
0040165d  7407                 JZ 0x00401666
0040165f  50                   PUSH EAX
00401660  ff1544e04000         CALL dword ptr [0x0040e044]
00401666  a188384100           MOV EAX,[0x00413888]
0040166b  3bc3                 CMP EAX,EBX
0040166d  7407                 JZ 0x00401676
0040166f  50                   PUSH EAX
00401670  ff1544e04000         CALL dword ptr [0x0040e044]
00401676  a1bc384100           MOV EAX,[0x004138bc]
0040167b  3bc3                 CMP EAX,EBX
0040167d  0f8471070000         JZ 0x00401df4
00401683  50                   PUSH EAX
00401684  ff1544e04000         CALL dword ptr [0x0040e044]
0040168a  e965070000           JMP 0x00401df4
0040168f  6800800000           PUSH 0x8000
00401694  ff15e0e04000         CALL dword ptr [0x0040e0e0]
0040169a  6824014100           PUSH 0x410124
0040169f  ff15e4e04000         CALL dword ptr [0x0040e0e4]
004016a5  3bc3                 CMP EAX,EBX
004016a7  89450c               MOV dword ptr [EBP + 0xc],EAX
004016aa  7440                 JZ 0x004016ec
004016ac  8b35e8e04000         MOV ESI,dword ptr [0x0040e0e8]
004016b2  6814014100           PUSH 0x410114
004016b7  50                   PUSH EAX
004016b8  ffd6                 CALL ESI
004016ba  6804014100           PUSH 0x410104
004016bf  a3d4384100           MOV [0x004138d4],EAX
004016c4  ff750c               PUSH dword ptr [EBP + 0xc]
004016c7  ffd6                 CALL ESI
004016c9  68f0004100           PUSH 0x4100f0
004016ce  a3b4384100           MOV [0x004138b4],EAX
004016d3  ff750c               PUSH dword ptr [EBP + 0xc]
004016d6  ffd6                 CALL ESI
004016d8  68dc004100           PUSH 0x4100dc
004016dd  a360384100           MOV [0x00413860],EAX
004016e2  ff750c               PUSH dword ptr [EBP + 0xc]
004016e5  ffd6                 CALL ESI
004016e7  a3f03b4100           MOV [0x00413bf0],EAX
004016ec  a1d4384100           MOV EAX,[0x004138d4]
004016f1  c705dc384100ffffff00 MOV dword ptr [0x004138dc],0xffffff
004016fb  3bc3                 CMP EAX,EBX
004016fd  743d                 JZ 0x0040173c
004016ff  ff7508               PUSH dword ptr [EBP + 0x8]
00401702  ffd0                 CALL EAX
00401704  85c0                 TEST EAX,EAX
00401706  742e                 JZ 0x00401736
00401708  833d3438410001       CMP dword ptr [0x00413834],0x1
0040170f  a15c384100           MOV EAX,[0x0041385c]
00401714  7504                 JNZ 0x0040171a
00401716  3bc3                 CMP EAX,EBX
00401718  750d                 JNZ 0x00401727
0040171a  3bc3                 CMP EAX,EBX
0040171c  7509                 JNZ 0x00401727
0040171e  ff7508               PUSH dword ptr [EBP + 0x8]
00401721  ff1560384100         CALL dword ptr [0x00413860]
00401727  6a0f                 PUSH 0xf
00401729  ff1548e24000         CALL dword ptr [0x0040e248]
0040172f  a3dc384100           MOV [0x004138dc],EAX
00401734  eb06                 JMP 0x0040173c
00401736  891dd4384100         MOV dword ptr [0x004138d4],EBX
0040173c  8b4510               MOV EAX,dword ptr [EBP + 0x10]
0040173f  889d88fcffff         MOV byte ptr [EBP + 0xfffffc88],BL
00401745  3818                 CMP byte ptr [EAX],BL
00401747  0f85b7000000         JNZ 0x00401804
0040174d  6a4c                 PUSH 0x4c
0040174f  8d4588               LEA EAX,[EBP + -0x78]
00401752  5e                   POP ESI
00401753  56                   PUSH ESI
00401754  53                   PUSH EBX
00401755  50                   PUSH EAX
00401756  e825890000           CALL 0x0040a080
0040175b  a120384100           MOV EAX,[0x00413820]
00401760  83c40c               ADD ESP,0xc
00401763  89458c               MOV dword ptr [EBP + -0x74],EAX
00401766  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00401769  894590               MOV dword ptr [EBP + -0x70],EAX
0040176c  8d8588fbffff         LEA EAX,[EBP + 0xfffffb88]
00401772  57                   PUSH EDI
00401773  50                   PUSH EAX
00401774  6a01                 PUSH 0x1
00401776  897588               MOV dword ptr [EBP + -0x78],ESI
00401779  ff35d03b4100         PUSH dword ptr [0x00413bd0]
0040177f  897da8               MOV dword ptr [EBP + -0x58],EDI
00401782  c745bc00100000       MOV dword ptr [EBP + -0x44],0x1000
00401789  e8a5760000           CALL 0x00408e33
0040178e  83c410               ADD ESP,0x10
00401791  8d8588fbffff         LEA EAX,[EBP + 0xfffffb88]
00401797  50                   PUSH EAX
00401798  ff1540e14000         CALL dword ptr [0x0040e140]
0040179e  8db40589fbffff       LEA ESI,[EBP + EAX*0x1 + 0xfffffb89]
004017a5  68d0004100           PUSH 0x4100d0
004017aa  56                   PUSH ESI
004017ab  ff1544e14000         CALL dword ptr [0x0040e144]
004017b1  56                   PUSH ESI
004017b2  ff1540e14000         CALL dword ptr [0x0040e140]
004017b8  8d740601             LEA ESI,[ESI + EAX*0x1 + 0x1]
004017bc  8d8588fbffff         LEA EAX,[EBP + 0xfffffb88]
004017c2  689c014100           PUSH 0x41019c
004017c7  881e                 MOV byte ptr [ESI],BL
004017c9  8b3544e14000         MOV ESI,dword ptr [0x0040e144]
004017cf  894594               MOV dword ptr [EBP + -0x6c],EAX
004017d2  8d8588feffff         LEA EAX,[EBP + 0xfffffe88]
004017d8  50                   PUSH EAX
004017d9  ffd6                 CALL ESI
004017db  8d8588feffff         LEA EAX,[EBP + 0xfffffe88]
004017e1  8945a4               MOV dword ptr [EBP + -0x5c],EAX
004017e4  e85e870000           CALL 0x00409f47
004017e9  8d4588               LEA EAX,[EBP + -0x78]
004017ec  50                   PUSH EAX
004017ed  e8e8870000           CALL 0x00409fda
004017f2  85c0                 TEST EAX,EAX
004017f4  741c                 JZ 0x00401812
004017f6  ff75a4               PUSH dword ptr [EBP + -0x5c]
004017f9  8d8588fcffff         LEA EAX,[EBP + 0xfffffc88]
004017ff  50                   PUSH EAX
00401800  ffd6                 CALL ESI
00401802  eb0e                 JMP 0x00401812
00401804  50                   PUSH EAX
00401805  8d8588fcffff         LEA EAX,[EBP + 0xfffffc88]
0040180b  50                   PUSH EAX
0040180c  ff1544e14000         CALL dword ptr [0x0040e144]
00401812  57                   PUSH EDI
00401813  e8cb800000           CALL 0x004098e3
00401818  59                   POP ECX
00401819  be00400000           MOV ESI,0x4000
0040181e  56                   PUSH ESI
0040181f  a3e03b4100           MOV [0x00413be0],EAX
00401824  e8ba800000           CALL 0x004098e3
00401829  59                   POP ECX
0040182a  a308384100           MOV [0x00413808],EAX
0040182f  56                   PUSH ESI
00401830  53                   PUSH EBX
00401831  50                   PUSH EAX
00401832  e849880000           CALL 0x0040a080
00401837  83c40c               ADD ESP,0xc
0040183a  57                   PUSH EDI
0040183b  e8a3800000           CALL 0x004098e3
00401840  59                   POP ECX
00401841  a3c03c4100           MOV [0x00413cc0],EAX
00401846  6800040000           PUSH 0x400
0040184b  e893800000           CALL 0x004098e3
00401850  59                   POP ECX
00401851  a3b0384100           MOV [0x004138b0],EAX
00401856  57                   PUSH EDI
00401857  e887800000           CALL 0x004098e3
0040185c  59                   POP ECX
0040185d  a300394100           MOV [0x00413900],EAX
00401862  6804010000           PUSH 0x104
00401867  e877800000           CALL 0x004098e3
0040186c  59                   POP ECX
0040186d  be00020000           MOV ESI,0x200
00401872  56                   PUSH ESI
00401873  a39c384100           MOV [0x0041389c],EAX
00401878  e866800000           CALL 0x004098e3
0040187d  59                   POP ECX
0040187e  a3e4384100           MOV [0x004138e4],EAX
00401883  56                   PUSH ESI
00401884  53                   PUSH EBX
00401885  50                   PUSH EAX
00401886  e8f5870000           CALL 0x0040a080
0040188b  83c40c               ADD ESP,0xc
0040188e  be00fa0000           MOV ESI,0xfa00
00401893  56                   PUSH ESI
00401894  e84a800000           CALL 0x004098e3
00401899  59                   POP ECX
0040189a  a358384100           MOV [0x00413858],EAX
0040189f  56                   PUSH ESI
004018a0  e83e800000           CALL 0x004098e3
004018a5  59                   POP ECX
004018a6  a34c3c4100           MOV [0x00413c4c],EAX
004018ab  56                   PUSH ESI
004018ac  e832800000           CALL 0x004098e3
004018b1  59                   POP ECX
004018b2  a328384100           MOV [0x00413828],EAX
004018b7  56                   PUSH ESI
004018b8  e826800000           CALL 0x004098e3
004018bd  59                   POP ECX
004018be  a36c384100           MOV [0x0041386c],EAX
004018c3  56                   PUSH ESI
004018c4  e81a800000           CALL 0x004098e3
004018c9  59                   POP ECX
004018ca  a32c384100           MOV [0x0041382c],EAX
004018cf  56                   PUSH ESI
004018d0  e80e800000           CALL 0x004098e3
004018d5  59                   POP ECX
004018d6  a3fc384100           MOV [0x004138fc],EAX
004018db  56                   PUSH ESI
004018dc  e802800000           CALL 0x004098e3
004018e1  59                   POP ECX
004018e2  a348384100           MOV [0x00413848],EAX
004018e7  56                   PUSH ESI
004018e8  e8f67f0000           CALL 0x004098e3
004018ed  59                   POP ECX
004018ee  a310394100           MOV [0x00413910],EAX
004018f3  56                   PUSH ESI
004018f4  e8ea7f0000           CALL 0x004098e3
004018f9  59                   POP ECX
004018fa  a3c43b4100           MOV [0x00413bc4],EAX
004018ff  56                   PUSH ESI
00401900  e8de7f0000           CALL 0x004098e3
00401905  59                   POP ECX
00401906  a398384100           MOV [0x00413898],EAX
0040190b  56                   PUSH ESI
0040190c  e8d27f0000           CALL 0x004098e3
00401911  59                   POP ECX
00401912  a3a4384100           MOV [0x004138a4],EAX
00401917  56                   PUSH ESI
00401918  e8c67f0000           CALL 0x004098e3
0040191d  389d88fcffff         CMP byte ptr [EBP + 0xfffffc88],BL
00401923  59                   POP ECX
00401924  a3d83c4100           MOV [0x00413cd8],EAX
00401929  0f84d5010000         JZ 0x00401b04
0040192f  68027f0000           PUSH 0x7f02
00401934  53                   PUSH EBX
00401935  ff154ce24000         CALL dword ptr [0x0040e24c]
0040193b  8b3550e24000         MOV ESI,dword ptr [0x0040e250]
00401941  50                   PUSH EAX
00401942  ffd6                 CALL ESI
00401944  894510               MOV dword ptr [EBP + 0x10],EAX
00401947  8d8588f8ffff         LEA EAX,[EBP + 0xfffff888]
0040194d  50                   PUSH EAX
0040194e  8d8588fcffff         LEA EAX,[EBP + 0xfffffc88]
00401954  50                   PUSH EAX
00401955  e8671d0000           CALL 0x004036c1
0040195a  59                   POP ECX
0040195b  59                   POP ECX
0040195c  ff7510               PUSH dword ptr [EBP + 0x10]
0040195f  85c0                 TEST EAX,EAX
00401961  0f859b010000         JNZ 0x00401b02
00401967  ffd6                 CALL ESI
00401969  391d403c4100         CMP dword ptr [0x00413c40],EBX
0040196f  b8e8030000           MOV EAX,0x3e8
00401974  740c                 JZ 0x00401982
00401976  a340384100           MOV [0x00413840],EAX
0040197b  c605a03b41000b       MOV byte ptr [0x00413ba0],0xb
00401982  391da43b4100         CMP dword ptr [0x00413ba4],EBX
00401988  740c                 JZ 0x00401996
0040198a  a340384100           MOV [0x00413840],EAX
0040198f  c605a03b41000b       MOV byte ptr [0x00413ba0],0xb
00401996  391d78384100         CMP dword ptr [0x00413878],EBX
0040199c  0f85a1000000         JNZ 0x00401a43
004019a2  e8a0850000           CALL 0x00409f47
004019a7  53                   PUSH EBX
004019a8  ff3520384100         PUSH dword ptr [0x00413820]
004019ae  ff1554e24000         CALL dword ptr [0x0040e254]
004019b4  53                   PUSH EBX
004019b5  68f2234000           PUSH 0x4023f2
004019ba  ff3520384100         PUSH dword ptr [0x00413820]
004019c0  ff1558e24000         CALL dword ptr [0x0040e258]
004019c6  f7d8                 NEG EAX
004019c8  1bc0                 SBB EAX,EAX
004019ca  230520384100         AND EAX,dword ptr [0x00413820]
004019d0  50                   PUSH EAX
004019d1  6a6a                 PUSH 0x6a
004019d3  ff35d03b4100         PUSH dword ptr [0x00413bd0]
004019d9  ff155ce24000         CALL dword ptr [0x0040e25c]
004019df  391d403c4100         CMP dword ptr [0x00413c40],EBX
004019e5  a318384100           MOV [0x00413818],EAX
004019ea  7557                 JNZ 0x00401a43
004019ec  391d8c384100         CMP dword ptr [0x0041388c],EBX
004019f2  757e                 JNZ 0x00401a72
004019f4  8b352ce24000         MOV ESI,dword ptr [0x0040e22c]
004019fa  391d30384100         CMP dword ptr [0x00413830],EBX
00401a00  7541                 JNZ 0x00401a43
00401a02  6a01                 PUSH 0x1
00401a04  53                   PUSH EBX
00401a05  53                   PUSH EBX
00401a06  8d45dc               LEA EAX,[EBP + -0x24]
00401a09  53                   PUSH EBX
00401a0a  50                   PUSH EAX
00401a0b  ffd6                 CALL ESI
00401a0d  85c0                 TEST EAX,EAX
00401a0f  742a                 JZ 0x00401a3b
00401a11  8d45dc               LEA EAX,[EBP + -0x24]
00401a14  50                   PUSH EAX
00401a15  ff3518384100         PUSH dword ptr [0x00413818]
00401a1b  ff1560e24000         CALL dword ptr [0x0040e260]
00401a21  85c0                 TEST EAX,EAX
00401a23  75dd                 JNZ 0x00401a02
00401a25  8d45dc               LEA EAX,[EBP + -0x24]
00401a28  50                   PUSH EAX
00401a29  ff1534e24000         CALL dword ptr [0x0040e234]
00401a2f  8d45dc               LEA EAX,[EBP + -0x24]
00401a32  50                   PUSH EAX
00401a33  ff1504e34000         CALL dword ptr [0x0040e304]
00401a39  ebc7                 JMP 0x00401a02
00401a3b  391d8c384100         CMP dword ptr [0x0041388c],EBX
00401a41  74b7                 JZ 0x004019fa
00401a43  391d8c384100         CMP dword ptr [0x0041388c],EBX
00401a49  7527                 JNZ 0x00401a72
00401a4b  68cc004100           PUSH 0x4100cc
00401a50  e88b850000           CALL 0x00409fe0
00401a55  59                   POP ECX
00401a56  8d8588fcffff         LEA EAX,[EBP + 0xfffffc88]
00401a5c  50                   PUSH EAX
00401a5d  e83e440000           CALL 0x00405ea0
00401a62  59                   POP ECX
00401a63  53                   PUSH EBX
00401a64  53                   PUSH EBX
00401a65  6a1a                 PUSH 0x1a
00401a67  68ffff0000           PUSH 0xffff
00401a6c  ff1564e24000         CALL dword ptr [0x0040e264]
00401a72  391d64384100         CMP dword ptr [0x00413864],EBX
00401a78  746d                 JZ 0x00401ae7
00401a7a  391d78384100         CMP dword ptr [0x00413878],EBX
00401a80  7579                 JNZ 0x00401afb
00401a82  8d8588fdffff         LEA EAX,[EBP + 0xfffffd88]
00401a88  57                   PUSH EDI
00401a89  50                   PUSH EAX
00401a8a  6a19                 PUSH 0x19
00401a8c  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00401a92  e89c730000           CALL 0x00408e33
00401a97  83c410               ADD ESP,0x10
00401a9a  8d8588f6ffff         LEA EAX,[EBP + 0xfffff688]
00401aa0  6800020000           PUSH 0x200
00401aa5  50                   PUSH EAX
00401aa6  6a44                 PUSH 0x44
00401aa8  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00401aae  e880730000           CALL 0x00408e33
00401ab3  83c410               ADD ESP,0x10
00401ab6  33c0                 XOR EAX,EAX
00401ab8  391d34384100         CMP dword ptr [0x00413834],EBX
00401abe  0f95c0               SETNZ AL
00401ac1  50                   PUSH EAX
00401ac2  8d8588fdffff         LEA EAX,[EBP + 0xfffffd88]
00401ac8  50                   PUSH EAX
00401ac9  8d8588f6ffff         LEA EAX,[EBP + 0xfffff688]
00401acf  50                   PUSH EAX
00401ad0  ff3518384100         PUSH dword ptr [0x00413818]
00401ad6  ff1568e24000         CALL dword ptr [0x0040e268]
00401adc  83f802               CMP EAX,0x2
00401adf  7506                 JNZ 0x00401ae7
00401ae1  891d64384100         MOV dword ptr [0x00413864],EBX
00401ae7  391d78384100         CMP dword ptr [0x00413878],EBX
00401aed  750c                 JNZ 0x00401afb
00401aef  ff3518384100         PUSH dword ptr [0x00413818]
00401af5  ff15e8e24000         CALL dword ptr [0x0040e2e8]
00401afb  e807780000           CALL 0x00409307
00401b00  eb02                 JMP 0x00401b04
00401b02  ffd6                 CALL ESI
00401b04  a11c384100           MOV EAX,[0x0041381c]
00401b09  3bc3                 CMP EAX,EBX
00401b0b  7407                 JZ 0x00401b14
00401b0d  50                   PUSH EAX
00401b0e  ff15e8e24000         CALL dword ptr [0x0040e2e8]
00401b14  ff3520384100         PUSH dword ptr [0x00413820]
00401b1a  ff15e8e24000         CALL dword ptr [0x0040e2e8]
00401b20  8b3544e24000         MOV ESI,dword ptr [0x0040e244]
00401b26  53                   PUSH EBX
00401b27  53                   PUSH EBX
00401b28  8d45dc               LEA EAX,[EBP + -0x24]
00401b2b  53                   PUSH EBX
00401b2c  50                   PUSH EAX
00401b2d  ffd6                 CALL ESI
00401b2f  85c0                 TEST EAX,EAX
00401b31  741d                 JZ 0x00401b50
00401b33  8d45dc               LEA EAX,[EBP + -0x24]
00401b36  50                   PUSH EAX
00401b37  ff1534e24000         CALL dword ptr [0x0040e234]
00401b3d  8d45dc               LEA EAX,[EBP + -0x24]
00401b40  50                   PUSH EAX
00401b41  ff1504e34000         CALL dword ptr [0x0040e304]
00401b47  53                   PUSH EBX
00401b48  53                   PUSH EBX
00401b49  8d45dc               LEA EAX,[EBP + -0x24]
00401b4c  53                   PUSH EBX
00401b4d  50                   PUSH EAX
00401b4e  ebdd                 JMP 0x00401b2d
00401b50  a1b4384100           MOV EAX,[0x004138b4]
00401b55  3bc3                 CMP EAX,EBX
00401b57  7405                 JZ 0x00401b5e
00401b59  ff7508               PUSH dword ptr [EBP + 0x8]
00401b5c  ffd0                 CALL EAX
00401b5e  395d0c               CMP dword ptr [EBP + 0xc],EBX
00401b61  7409                 JZ 0x00401b6c
00401b63  ff750c               PUSH dword ptr [EBP + 0xc]
00401b66  ff15ece04000         CALL dword ptr [0x0040e0ec]
00401b6c  ff35f83b4100         PUSH dword ptr [0x00413bf8]
00401b72  ff1544e04000         CALL dword ptr [0x0040e044]
00401b78  ff75d8               PUSH dword ptr [EBP + -0x28]
00401b7b  8b35dce04000         MOV ESI,dword ptr [0x0040e0dc]
00401b81  ffd6                 CALL ESI
00401b83  ff75d4               PUSH dword ptr [EBP + -0x2c]
00401b86  ffd6                 CALL ESI
00401b88  ff75fc               PUSH dword ptr [EBP + -0x4]
00401b8b  ffd6                 CALL ESI
00401b8d  391d64384100         CMP dword ptr [0x00413864],EBX
00401b93  0f8401010000         JZ 0x00401c9a
00401b99  a134384100           MOV EAX,[0x00413834]
00401b9e  83f801               CMP EAX,0x1
00401ba1  7408                 JZ 0x00401bab
00401ba3  3bc3                 CMP EAX,EBX
00401ba5  0f85ef000000         JNZ 0x00401c9a
00401bab  48                   DEC EAX
00401bac  682c010000           PUSH 0x12c
00401bb1  f7d8                 NEG EAX
00401bb3  1bc0                 SBB EAX,EAX
00401bb5  05fa750000           ADD EAX,0x75fa
00401bba  0fb7c0               MOVZX EAX,AX
00401bbd  50                   PUSH EAX
00401bbe  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00401bc4  ff15c8e04000         CALL dword ptr [0x0040e0c8]
00401bca  3bc3                 CMP EAX,EBX
00401bcc  894510               MOV dword ptr [EBP + 0x10],EAX
00401bcf  0f84c5000000         JZ 0x00401c9a
00401bd5  50                   PUSH EAX
00401bd6  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00401bdc  ff15f0e04000         CALL dword ptr [0x0040e0f0]
00401be2  ff7510               PUSH dword ptr [EBP + 0x10]
00401be5  894514               MOV dword ptr [EBP + 0x14],EAX
00401be8  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00401bee  ff1554e14000         CALL dword ptr [0x0040e154]
00401bf4  3bc3                 CMP EAX,EBX
00401bf6  89450c               MOV dword ptr [EBP + 0xc],EAX
00401bf9  0f849b000000         JZ 0x00401c9a
00401bff  50                   PUSH EAX
00401c00  ff1558e14000         CALL dword ptr [0x0040e158]
00401c06  3bc3                 CMP EAX,EBX
00401c08  8945fc               MOV dword ptr [EBP + -0x4],EAX
00401c0b  0f8484000000         JZ 0x00401c95
00401c11  8d8588fcffff         LEA EAX,[EBP + 0xfffffc88]
00401c17  57                   PUSH EDI
00401c18  50                   PUSH EAX
00401c19  ff15f4e04000         CALL dword ptr [0x0040e0f4]
00401c1f  8d8588fcffff         LEA EAX,[EBP + 0xfffffc88]
00401c25  50                   PUSH EAX
00401c26  ff1540e14000         CALL dword ptr [0x0040e140]
00401c2c  80bc0587fcffff5c     CMP byte ptr [EBP + EAX*0x1 + 0xfffffc87],0x5c
00401c34  7412                 JZ 0x00401c48
00401c36  8d8588fcffff         LEA EAX,[EBP + 0xfffffc88]
00401c3c  68cc004100           PUSH 0x4100cc
00401c41  50                   PUSH EAX
00401c42  ff15f8e04000         CALL dword ptr [0x0040e0f8]
00401c48  391d34384100         CMP dword ptr [0x00413834],EBX
00401c4e  7507                 JNZ 0x00401c57
00401c50  68bc004100           PUSH 0x4100bc
00401c55  eb05                 JMP 0x00401c5c
00401c57  68ac004100           PUSH 0x4100ac
00401c5c  8d8588fcffff         LEA EAX,[EBP + 0xfffffc88]
00401c62  50                   PUSH EAX
00401c63  ff15f8e04000         CALL dword ptr [0x0040e0f8]
00401c69  8d8588fcffff         LEA EAX,[EBP + 0xfffffc88]
00401c6f  53                   PUSH EBX
00401c70  50                   PUSH EAX
00401c71  ff15fce04000         CALL dword ptr [0x0040e0fc]
00401c77  83f8ff               CMP EAX,-0x1
00401c7a  894510               MOV dword ptr [EBP + 0x10],EAX
00401c7d  7416                 JZ 0x00401c95
00401c7f  ff7514               PUSH dword ptr [EBP + 0x14]
00401c82  ff75fc               PUSH dword ptr [EBP + -0x4]
00401c85  50                   PUSH EAX
00401c86  ff1500e14000         CALL dword ptr [0x0040e100]
00401c8c  ff7510               PUSH dword ptr [EBP + 0x10]
00401c8f  ff1504e14000         CALL dword ptr [0x0040e104]
00401c95  ff750c               PUSH dword ptr [EBP + 0xc]
00401c98  ffd6                 CALL ESI
00401c9a  a1483c4100           MOV EAX,[0x00413c48]
00401c9f  3bc3                 CMP EAX,EBX
00401ca1  7407                 JZ 0x00401caa
00401ca3  50                   PUSH EAX
00401ca4  ff1544e04000         CALL dword ptr [0x0040e044]
00401caa  a188384100           MOV EAX,[0x00413888]
00401caf  3bc3                 CMP EAX,EBX
00401cb1  7407                 JZ 0x00401cba
00401cb3  50                   PUSH EAX
00401cb4  ff1544e04000         CALL dword ptr [0x0040e044]
00401cba  a1ac384100           MOV EAX,[0x004138ac]
00401cbf  3bc3                 CMP EAX,EBX
00401cc1  7407                 JZ 0x00401cca
00401cc3  50                   PUSH EAX
00401cc4  ff1544e04000         CALL dword ptr [0x0040e044]
00401cca  395df8               CMP dword ptr [EBP + -0x8],EBX
00401ccd  7470                 JZ 0x00401d3f
00401ccf  8d8588feffff         LEA EAX,[EBP + 0xfffffe88]
00401cd5  57                   PUSH EDI
00401cd6  50                   PUSH EAX
00401cd7  ff7508               PUSH dword ptr [EBP + 0x8]
00401cda  ff153ce14000         CALL dword ptr [0x0040e13c]
00401ce0  391d34384100         CMP dword ptr [0x00413834],EBX
00401ce6  8b3508e14000         MOV ESI,dword ptr [0x0040e108]
00401cec  7415                 JZ 0x00401d03
00401cee  8d8500feffff         LEA EAX,[EBP + 0xfffffe00]
00401cf4  6800020000           PUSH 0x200
00401cf9  50                   PUSH EAX
00401cfa  8d8588feffff         LEA EAX,[EBP + 0xfffffe88]
00401d00  50                   PUSH EAX
00401d01  ffd6                 CALL ESI
00401d03  8d8588feffff         LEA EAX,[EBP + 0xfffffe88]
00401d09  68a8014100           PUSH 0x4101a8
00401d0e  50                   PUSH EAX
00401d0f  ff1540e14000         CALL dword ptr [0x0040e140]
00401d15  8d8d88feffff         LEA ECX,[EBP + 0xfffffe88]
00401d1b  83e903               SUB ECX,0x3
00401d1e  03c1                 ADD EAX,ECX
00401d20  50                   PUSH EAX
00401d21  ff1544e14000         CALL dword ptr [0x0040e144]
00401d27  8d8500feffff         LEA EAX,[EBP + 0xfffffe00]
00401d2d  6800020000           PUSH 0x200
00401d32  50                   PUSH EAX
00401d33  8d8588feffff         LEA EAX,[EBP + 0xfffffe88]
00401d39  50                   PUSH EAX
00401d3a  ffd6                 CALL ESI
00401d3c  395df8               CMP dword ptr [EBP + -0x8],EBX
00401d3f  8b358ce14000         MOV ESI,dword ptr [0x0040e18c]
00401d45  756c                 JNZ 0x00401db3
00401d47  8d8588fbffff         LEA EAX,[EBP + 0xfffffb88]
00401d4d  57                   PUSH EDI
00401d4e  50                   PUSH EAX
00401d4f  ff7508               PUSH dword ptr [EBP + 0x8]
00401d52  ff153ce14000         CALL dword ptr [0x0040e13c]
00401d58  8d8588fbffff         LEA EAX,[EBP + 0xfffffb88]
00401d5e  53                   PUSH EBX
00401d5f  50                   PUSH EAX
00401d60  e8d46c0000           CALL 0x00408a39
00401d65  59                   POP ECX
00401d66  8d8588f8ffff         LEA EAX,[EBP + 0xfffff888]
00401d6c  59                   POP ECX
00401d6d  50                   PUSH EAX
00401d6e  8d8588fbffff         LEA EAX,[EBP + 0xfffffb88]
00401d74  50                   PUSH EAX
00401d75  8d8588f9ffff         LEA EAX,[EBP + 0xfffff988]
00401d7b  50                   PUSH EAX
00401d7c  8d8588feffff         LEA EAX,[EBP + 0xfffffe88]
00401d82  68a0004100           PUSH 0x4100a0
00401d87  50                   PUSH EAX
00401d88  ff156ce24000         CALL dword ptr [0x0040e26c]
00401d8e  83c414               ADD ESP,0x14
00401d91  391dc83b4100         CMP dword ptr [0x00413bc8],EBX
00401d97  740d                 JZ 0x00401da6
00401d99  8d8588feffff         LEA EAX,[EBP + 0xfffffe88]
00401d9f  6a05                 PUSH 0x5
00401da1  50                   PUSH EAX
00401da2  ffd6                 CALL ESI
00401da4  eb0d                 JMP 0x00401db3
00401da6  8d8588fbffff         LEA EAX,[EBP + 0xfffffb88]
00401dac  50                   PUSH EAX
00401dad  ff15d8e04000         CALL dword ptr [0x0040e0d8]
00401db3  e8ad7b0000           CALL 0x00409965
00401db8  a1bc384100           MOV EAX,[0x004138bc]
00401dbd  3bc3                 CMP EAX,EBX
00401dbf  7407                 JZ 0x00401dc8
00401dc1  50                   PUSH EAX
00401dc2  ff1544e04000         CALL dword ptr [0x0040e044]
00401dc8  391d64384100         CMP dword ptr [0x00413864],EBX
00401dce  7424                 JZ 0x00401df4
00401dd0  a134384100           MOV EAX,[0x00413834]
00401dd5  83f801               CMP EAX,0x1
00401dd8  740f                 JZ 0x00401de9
00401dda  3bc3                 CMP EAX,EBX
00401ddc  740b                 JZ 0x00401de9
00401dde  6aff                 PUSH -0x1
00401de0  53                   PUSH EBX
00401de1  ff1570e24000         CALL dword ptr [0x0040e270]
00401de7  eb0b                 JMP 0x00401df4
00401de9  8d8588fcffff         LEA EAX,[EBP + 0xfffffc88]
00401def  6a05                 PUSH 0x5
00401df1  50                   PUSH EAX
00401df2  ffd6                 CALL ESI
00401df4  8b45e4               MOV EAX,dword ptr [EBP + -0x1c]
00401df7  5f                   POP EDI
00401df8  5e                   POP ESI
00401df9  5b                   POP EBX
00401dfa  c9                   LEAVE
00401dfb  c21000               RET 0x10

; ==== FUNCTION FUN_00401dfe entry=00401dfe sig=ATOM __cdecl FUN_00401dfe(HINSTANCE param_1)
00401dfe  55                   PUSH EBP
00401dff  8bec                 MOV EBP,ESP
00401e01  83ec28               SUB ESP,0x28
00401e04  8b4508               MOV EAX,dword ptr [EBP + 0x8]
00401e07  56                   PUSH ESI
00401e08  33f6                 XOR ESI,ESI
00401e0a  6a65                 PUSH 0x65
00401e0c  50                   PUSH EAX
00401e0d  8975d8               MOV dword ptr [EBP + -0x28],ESI
00401e10  c745dc761f4000       MOV dword ptr [EBP + -0x24],0x401f76
00401e17  8975e0               MOV dword ptr [EBP + -0x20],ESI
00401e1a  8975e4               MOV dword ptr [EBP + -0x1c],ESI
00401e1d  8945e8               MOV dword ptr [EBP + -0x18],EAX
00401e20  ff1520e24000         CALL dword ptr [0x0040e220]
00401e26  68007f0000           PUSH 0x7f00
00401e2b  56                   PUSH ESI
00401e2c  8945ec               MOV dword ptr [EBP + -0x14],EAX
00401e2f  ff154ce24000         CALL dword ptr [0x0040e24c]
00401e35  56                   PUSH ESI
00401e36  8945f0               MOV dword ptr [EBP + -0x10],EAX
00401e39  ff1594e04000         CALL dword ptr [0x0040e094]
00401e3f  8945f4               MOV dword ptr [EBP + -0xc],EAX
00401e42  a150004100           MOV EAX,[0x00410050]
00401e47  8945fc               MOV dword ptr [EBP + -0x4],EAX
00401e4a  8d45d8               LEA EAX,[EBP + -0x28]
00401e4d  50                   PUSH EAX
00401e4e  8975f8               MOV dword ptr [EBP + -0x8],ESI
00401e51  ff1518e24000         CALL dword ptr [0x0040e218]
00401e57  0fb7c0               MOVZX EAX,AX
00401e5a  5e                   POP ESI
00401e5b  c9                   LEAVE
00401e5c  c3                   RET

; ==== FUNCTION FUN_00401e5d entry=00401e5d sig=undefined4 __cdecl FUN_00401e5d(HINSTANCE param_1)
00401e5d  55                   PUSH EBP
00401e5e  8bec                 MOV EBP,ESP
00401e60  83ec18               SUB ESP,0x18
00401e63  53                   PUSH EBX
00401e64  8b1d3ce24000         MOV EBX,dword ptr [0x0040e23c]
00401e6a  56                   PUSH ESI
00401e6b  57                   PUSH EDI
00401e6c  8b7d08               MOV EDI,dword ptr [EBP + 0x8]
00401e6f  33f6                 XOR ESI,ESI
00401e71  393578384100         CMP dword ptr [0x00413878],ESI
00401e77  893dd03b4100         MOV dword ptr [0x00413bd0],EDI
00401e7d  7579                 JNZ 0x00401ef8
00401e7f  3935a8384100         CMP dword ptr [0x004138a8],ESI
00401e85  7571                 JNZ 0x00401ef8
00401e87  68c43c4100           PUSH 0x413cc4
00401e8c  6a6f                 PUSH 0x6f
00401e8e  e8707f0000           CALL 0x00409e03
00401e93  59                   POP ECX
00401e94  a3ac384100           MOV [0x004138ac],EAX
00401e99  59                   POP ECX
00401e9a  8d4de8               LEA ECX,[EBP + -0x18]
00401e9d  51                   PUSH ECX
00401e9e  6a18                 PUSH 0x18
00401ea0  50                   PUSH EAX
00401ea1  ff1548e04000         CALL dword ptr [0x0040e048]
00401ea7  56                   PUSH ESI
00401ea8  57                   PUSH EDI
00401ea9  56                   PUSH ESI
00401eaa  56                   PUSH ESI
00401eab  ff75f0               PUSH dword ptr [EBP + -0x10]
00401eae  8b3d74e24000         MOV EDI,dword ptr [0x0040e274]
00401eb4  ff75ec               PUSH dword ptr [EBP + -0x14]
00401eb7  6a01                 PUSH 0x1
00401eb9  ffd7                 CALL EDI
00401ebb  2b45f0               SUB EAX,dword ptr [EBP + -0x10]
00401ebe  99                   CDQ
00401ebf  2bc2                 SUB EAX,EDX
00401ec1  d1f8                 SAR EAX,0x1
00401ec3  50                   PUSH EAX
00401ec4  56                   PUSH ESI
00401ec5  ffd7                 CALL EDI
00401ec7  2b45ec               SUB EAX,dword ptr [EBP + -0x14]
00401eca  99                   CDQ
00401ecb  2bc2                 SUB EAX,EDX
00401ecd  d1f8                 SAR EAX,0x1
00401ecf  50                   PUSH EAX
00401ed0  6800000090           PUSH 0x90000000
00401ed5  68ac014100           PUSH 0x4101ac
00401eda  ff3550004100         PUSH dword ptr [0x00410050]
00401ee0  6a08                 PUSH 0x8
00401ee2  ffd3                 CALL EBX
00401ee4  56                   PUSH ESI
00401ee5  68c4090000           PUSH 0x9c4
00401eea  6a01                 PUSH 0x1
00401eec  50                   PUSH EAX
00401eed  a31c384100           MOV [0x0041381c],EAX
00401ef2  ff1530e24000         CALL dword ptr [0x0040e230]
00401ef8  56                   PUSH ESI
00401ef9  ff7508               PUSH dword ptr [EBP + 0x8]
00401efc  56                   PUSH ESI
00401efd  56                   PUSH ESI
00401efe  68e0010000           PUSH 0x1e0
00401f03  6880020000           PUSH 0x280
00401f08  56                   PUSH ESI
00401f09  56                   PUSH ESI
00401f0a  680000cd00           PUSH 0xcd0000
00401f0f  68ac014100           PUSH 0x4101ac
00401f14  ff3550004100         PUSH dword ptr [0x00410050]
00401f1a  56                   PUSH ESI
00401f1b  ffd3                 CALL EBX
00401f1d  3bc6                 CMP EAX,ESI
00401f1f  a320384100           MOV [0x00413820],EAX
00401f24  7504                 JNZ 0x00401f2a
00401f26  33c0                 XOR EAX,EAX
00401f28  eb47                 JMP 0x00401f71
00401f2a  8b0dfc3b4100         MOV ECX,dword ptr [0x00413bfc]
00401f30  3bce                 CMP ECX,ESI
00401f32  740d                 JZ 0x00401f41
00401f34  51                   PUSH ECX
00401f35  50                   PUSH EAX
00401f36  ff1540e24000         CALL dword ptr [0x0040e240]
00401f3c  a120384100           MOV EAX,[0x00413820]
00401f41  393578384100         CMP dword ptr [0x00413878],ESI
00401f47  751e                 JNZ 0x00401f67
00401f49  3935a8384100         CMP dword ptr [0x004138a8],ESI
00401f4f  7516                 JNZ 0x00401f67
00401f51  393538384100         CMP dword ptr [0x00413838],ESI
00401f57  750e                 JNZ 0x00401f67
00401f59  6a03                 PUSH 0x3
00401f5b  50                   PUSH EAX
00401f5c  ff1528e24000         CALL dword ptr [0x0040e228]
00401f62  a120384100           MOV EAX,[0x00413820]
00401f67  50                   PUSH EAX
00401f68  ff1524e24000         CALL dword ptr [0x0040e224]
00401f6e  6a01                 PUSH 0x1
00401f70  58                   POP EAX
00401f71  5f                   POP EDI
00401f72  5e                   POP ESI
00401f73  5b                   POP EBX
00401f74  c9                   LEAVE
00401f75  c3                   RET

; ==== FUNCTION _MainWndProc@16 entry=00401f76 sig=UINT __stdcall _MainWndProc@16(HWND param_1, UINT param_2, HWND param_3, int param_4)
00401f76  55                   PUSH EBP
00401f77  8bec                 MOV EBP,ESP
00401f79  83ec78               SUB ESP,0x78
00401f7c  53                   PUSH EBX
00401f7d  8b5d08               MOV EBX,dword ptr [EBP + 0x8]
00401f80  3b1d1c384100         CMP EBX,dword ptr [0x0041381c]
00401f86  56                   PUSH ESI
00401f87  57                   PUSH EDI
00401f88  0f84ac010000         JZ 0x0040213a
00401f8e  33ff                 XOR EDI,EDI
00401f90  393d20384100         CMP dword ptr [0x00413820],EDI
00401f96  0f84a0010000         JZ 0x0040213c
00401f9c  8b450c               MOV EAX,dword ptr [EBP + 0xc]
00401f9f  48                   DEC EAX
00401fa0  48                   DEC EAX
00401fa1  0f8487010000         JZ 0x0040212e
00401fa7  83e80d               SUB EAX,0xd
00401faa  7459                 JZ 0x00402005
00401fac  83e805               SUB EAX,0x5
00401faf  744c                 JZ 0x00401ffd
00401fb1  2dff000000           SUB EAX,0xff
00401fb6  743a                 JZ 0x00401ff2
00401fb8  2dfc010000           SUB EAX,0x1fc
00401fbd  7411                 JZ 0x00401fd0
00401fbf  48                   DEC EAX
00401fc0  48                   DEC EAX
00401fc1  0f859f010000         JNZ 0x00402166
00401fc7  395d10               CMP dword ptr [EBP + 0x10],EBX
00401fca  0f84c0020000         JZ 0x00402290
00401fd0  393dbc384100         CMP dword ptr [0x004138bc],EDI
00401fd6  0f84b4020000         JZ 0x00402290
00401fdc  53                   PUSH EBX
00401fdd  ff1598e24000         CALL dword ptr [0x0040e298]
00401fe3  57                   PUSH EDI
00401fe4  89450c               MOV dword ptr [EBP + 0xc],EAX
00401fe7  ff35bc384100         PUSH dword ptr [0x004138bc]
00401fed  e9af010000           JMP 0x004021a1
00401ff2  893de43b4100         MOV dword ptr [0x00413be4],EDI
00401ff8  e993020000           JMP 0x00402290
00401ffd  6a01                 PUSH 0x1
00401fff  58                   POP EAX
00402000  e98d020000           JMP 0x00402292
00402005  8d4588               LEA EAX,[EBP + -0x78]
00402008  50                   PUSH EAX
00402009  53                   PUSH EBX
0040200a  ff1594e24000         CALL dword ptr [0x0040e294]
00402010  89450c               MOV dword ptr [EBP + 0xc],EAX
00402013  8d45c8               LEA EAX,[EBP + -0x38]
00402016  50                   PUSH EAX
00402017  53                   PUSH EBX
00402018  ff1584e24000         CALL dword ptr [0x0040e284]
0040201e  a1bc384100           MOV EAX,[0x004138bc]
00402023  3bc7                 CMP EAX,EDI
00402025  7414                 JZ 0x0040203b
00402027  57                   PUSH EDI
00402028  50                   PUSH EAX
00402029  ff750c               PUSH dword ptr [EBP + 0xc]
0040202c  ff1568e04000         CALL dword ptr [0x0040e068]
00402032  ff750c               PUSH dword ptr [EBP + 0xc]
00402035  ff1564e04000         CALL dword ptr [0x0040e064]
0040203b  8b3560e04000         MOV ESI,dword ptr [0x0040e060]
00402041  83cbff               OR EBX,0xffffffff
00402044  8b45d4               MOV EAX,dword ptr [EBP + -0x2c]
00402047  8d4f01               LEA ECX,[EDI + 0x1]
0040204a  0fafc1               IMUL EAX,ECX
0040204d  6a60                 PUSH 0x60
0040204f  894dfc               MOV dword ptr [EBP + -0x4],ECX
00402052  99                   CDQ
00402053  59                   POP ECX
00402054  895de4               MOV dword ptr [EBP + -0x1c],EBX
00402057  f7f9                 IDIV ECX
00402059  83651000             AND dword ptr [EBP + 0x10],0x0
0040205d  c7451403000000       MOV dword ptr [EBP + 0x14],0x3
00402064  8945ec               MOV dword ptr [EBP + -0x14],EAX
00402067  8b4510               MOV EAX,dword ptr [EBP + 0x10]
0040206a  6a5f                 PUSH 0x5f
0040206c  5b                   POP EBX
0040206d  8d88203c4100         LEA ECX,[EAX + 0x413c20]
00402073  8b802c3c4100         MOV EAX,dword ptr [EAX + 0x413c2c]
00402079  8b09                 MOV ECX,dword ptr [ECX]
0040207b  0fafc7               IMUL EAX,EDI
0040207e  99                   CDQ
0040207f  f7fb                 IDIV EBX
00402081  03c8                 ADD ECX,EAX
00402083  8b4510               MOV EAX,dword ptr [EBP + 0x10]
00402086  85c9                 TEST ECX,ECX
00402088  8d4405f0             LEA EAX,[EBP + EAX*0x1 + -0x10]
0040208c  8908                 MOV dword ptr [EAX],ECX
0040208e  7d03                 JGE 0x00402093
00402090  832000               AND dword ptr [EAX],0x0
00402093  b9ff000000           MOV ECX,0xff
00402098  3908                 CMP dword ptr [EAX],ECX
0040209a  7e02                 JLE 0x0040209e
0040209c  8908                 MOV dword ptr [EAX],ECX
0040209e  83451004             ADD dword ptr [EBP + 0x10],0x4
004020a2  ff4d14               DEC dword ptr [EBP + 0x14]
004020a5  75c0                 JNZ 0x00402067
004020a7  833dbc38410000       CMP dword ptr [0x004138bc],0x0
004020ae  740a                 JZ 0x004020ba
004020b0  0fb7c7               MOVZX EAX,DI
004020b3  0d00000001           OR EAX,0x1000000
004020b8  eb16                 JMP 0x004020d0
004020ba  0fb645f8             MOVZX EAX,byte ptr [EBP + -0x8]
004020be  0fb64df4             MOVZX ECX,byte ptr [EBP + -0xc]
004020c2  c1e008               SHL EAX,0x8
004020c5  0bc1                 OR EAX,ECX
004020c7  0fb64df0             MOVZX ECX,byte ptr [EBP + -0x10]
004020cb  c1e008               SHL EAX,0x8
004020ce  0bc1                 OR EAX,ECX
004020d0  50                   PUSH EAX
004020d1  ff155ce04000         CALL dword ptr [0x0040e05c]
004020d7  8bf8                 MOV EDI,EAX
004020d9  57                   PUSH EDI
004020da  ff750c               PUSH dword ptr [EBP + 0xc]
004020dd  ffd6                 CALL ESI
004020df  8b5dec               MOV EBX,dword ptr [EBP + -0x14]
004020e2  894510               MOV dword ptr [EBP + 0x10],EAX
004020e5  8bc3                 MOV EAX,EBX
004020e7  682100f000           PUSH 0xf00021
004020ec  2b45e4               SUB EAX,dword ptr [EBP + -0x1c]
004020ef  50                   PUSH EAX
004020f0  ff75d0               PUSH dword ptr [EBP + -0x30]
004020f3  ff75e4               PUSH dword ptr [EBP + -0x1c]
004020f6  6a00                 PUSH 0x0
004020f8  ff750c               PUSH dword ptr [EBP + 0xc]
004020fb  ff1558e04000         CALL dword ptr [0x0040e058]
00402101  ff7510               PUSH dword ptr [EBP + 0x10]
00402104  ff750c               PUSH dword ptr [EBP + 0xc]
00402107  ffd6                 CALL ESI
00402109  57                   PUSH EDI
0040210a  ff1544e04000         CALL dword ptr [0x0040e044]
00402110  8b7dfc               MOV EDI,dword ptr [EBP + -0x4]
00402113  83ff60               CMP EDI,0x60
00402116  0f8c28ffffff         JL 0x00402044
0040211c  8d4588               LEA EAX,[EBP + -0x78]
0040211f  50                   PUSH EAX
00402120  ff7508               PUSH dword ptr [EBP + 0x8]
00402123  ff158ce24000         CALL dword ptr [0x0040e28c]
00402129  e962010000           JMP 0x00402290
0040212e  57                   PUSH EDI
0040212f  ff1588e24000         CALL dword ptr [0x0040e288]
00402135  e956010000           JMP 0x00402290
0040213a  33ff                 XOR EDI,EDI
0040213c  8b450c               MOV EAX,dword ptr [EBP + 0xc]
0040213f  48                   DEC EAX
00402140  48                   DEC EAX
00402141  0f8443010000         JZ 0x0040228a
00402147  83e80d               SUB EAX,0xd
0040214a  0f84aa000000         JZ 0x004021fa
00402150  2d04010000           SUB EAX,0x104
00402155  0f8490000000         JZ 0x004021eb
0040215b  2dfc010000           SUB EAX,0x1fc
00402160  7422                 JZ 0x00402184
00402162  48                   DEC EAX
00402163  48                   DEC EAX
00402164  7415                 JZ 0x0040217b
00402166  ff7514               PUSH dword ptr [EBP + 0x14]
00402169  ff7510               PUSH dword ptr [EBP + 0x10]
0040216c  ff750c               PUSH dword ptr [EBP + 0xc]
0040216f  53                   PUSH EBX
00402170  ff1578e24000         CALL dword ptr [0x0040e278]
00402176  e917010000           JMP 0x00402292
0040217b  395d10               CMP dword ptr [EBP + 0x10],EBX
0040217e  0f840c010000         JZ 0x00402290
00402184  393dc43c4100         CMP dword ptr [0x00413cc4],EDI
0040218a  0f8400010000         JZ 0x00402290
00402190  53                   PUSH EBX
00402191  ff1598e24000         CALL dword ptr [0x0040e298]
00402197  57                   PUSH EDI
00402198  89450c               MOV dword ptr [EBP + 0xc],EAX
0040219b  ff35c43c4100         PUSH dword ptr [0x00413cc4]
004021a1  8b3568e04000         MOV ESI,dword ptr [0x0040e068]
004021a7  50                   PUSH EAX
004021a8  ffd6                 CALL ESI
004021aa  ff750c               PUSH dword ptr [EBP + 0xc]
004021ad  8b3d64e04000         MOV EDI,dword ptr [0x0040e064]
004021b3  894510               MOV dword ptr [EBP + 0x10],EAX
004021b6  ffd7                 CALL EDI
004021b8  85c0                 TEST EAX,EAX
004021ba  894508               MOV dword ptr [EBP + 0x8],EAX
004021bd  740b                 JZ 0x004021ca
004021bf  6a01                 PUSH 0x1
004021c1  6a00                 PUSH 0x0
004021c3  53                   PUSH EBX
004021c4  ff1580e24000         CALL dword ptr [0x0040e280]
004021ca  6a01                 PUSH 0x1
004021cc  ff7510               PUSH dword ptr [EBP + 0x10]
004021cf  ff750c               PUSH dword ptr [EBP + 0xc]
004021d2  ffd6                 CALL ESI
004021d4  ff750c               PUSH dword ptr [EBP + 0xc]
004021d7  ffd7                 CALL EDI
004021d9  ff750c               PUSH dword ptr [EBP + 0xc]
004021dc  53                   PUSH EBX
004021dd  ff157ce24000         CALL dword ptr [0x0040e27c]
004021e3  8b4508               MOV EAX,dword ptr [EBP + 0x8]
004021e6  e9a7000000           JMP 0x00402292
004021eb  c7058038410001000000 MOV dword ptr [0x00413880],0x1
004021f5  e996000000           JMP 0x00402290
004021fa  8d4588               LEA EAX,[EBP + -0x78]
004021fd  50                   PUSH EAX
004021fe  53                   PUSH EBX
004021ff  ff1594e24000         CALL dword ptr [0x0040e294]
00402205  8bf0                 MOV ESI,EAX
00402207  a1bc384100           MOV EAX,[0x004138bc]
0040220c  3bc7                 CMP EAX,EDI
0040220e  89750c               MOV dword ptr [EBP + 0xc],ESI
00402211  7410                 JZ 0x00402223
00402213  57                   PUSH EDI
00402214  50                   PUSH EAX
00402215  56                   PUSH ESI
00402216  ff1568e04000         CALL dword ptr [0x0040e068]
0040221c  56                   PUSH ESI
0040221d  ff1564e04000         CALL dword ptr [0x0040e064]
00402223  56                   PUSH ESI
00402224  ff1554e04000         CALL dword ptr [0x0040e054]
0040222a  ff35ac384100         PUSH dword ptr [0x004138ac]
00402230  8b3560e04000         MOV ESI,dword ptr [0x0040e060]
00402236  894510               MOV dword ptr [EBP + 0x10],EAX
00402239  50                   PUSH EAX
0040223a  ffd6                 CALL ESI
0040223c  894508               MOV dword ptr [EBP + 0x8],EAX
0040223f  8d45d8               LEA EAX,[EBP + -0x28]
00402242  50                   PUSH EAX
00402243  6a18                 PUSH 0x18
00402245  ff35ac384100         PUSH dword ptr [0x004138ac]
0040224b  ff1548e04000         CALL dword ptr [0x0040e048]
00402251  682000cc00           PUSH 0xcc0020
00402256  57                   PUSH EDI
00402257  57                   PUSH EDI
00402258  ff7510               PUSH dword ptr [EBP + 0x10]
0040225b  ff75e0               PUSH dword ptr [EBP + -0x20]
0040225e  ff75dc               PUSH dword ptr [EBP + -0x24]
00402261  57                   PUSH EDI
00402262  57                   PUSH EDI
00402263  ff750c               PUSH dword ptr [EBP + 0xc]
00402266  ff1550e04000         CALL dword ptr [0x0040e050]
0040226c  ff7508               PUSH dword ptr [EBP + 0x8]
0040226f  ff7510               PUSH dword ptr [EBP + 0x10]
00402272  ffd6                 CALL ESI
00402274  ff7510               PUSH dword ptr [EBP + 0x10]
00402277  ff154ce04000         CALL dword ptr [0x0040e04c]
0040227d  8d4588               LEA EAX,[EBP + -0x78]
00402280  50                   PUSH EAX
00402281  53                   PUSH EBX
00402282  ff158ce24000         CALL dword ptr [0x0040e28c]
00402288  eb06                 JMP 0x00402290
0040228a  893d1c384100         MOV dword ptr [0x0041381c],EDI
00402290  33c0                 XOR EAX,EAX
00402292  5f                   POP EDI
00402293  5e                   POP ESI
00402294  5b                   POP EBX
00402295  c9                   LEAVE
00402296  c21000               RET 0x10

; ==== FUNCTION _SharedDlg@16 entry=00402299 sig=undefined4 __stdcall _SharedDlg@16(HWND param_1, int param_2, INT_PTR param_3)
00402299  55                   PUSH EBP
0040229a  8bec                 MOV EBP,ESP
0040229c  81ec10010000         SUB ESP,0x110
004022a2  8b450c               MOV EAX,dword ptr [EBP + 0xc]
004022a5  53                   PUSH EBX
004022a6  56                   PUSH ESI
004022a7  2d10010000           SUB EAX,0x110
004022ac  57                   PUSH EDI
004022ad  741b                 JZ 0x004022ca
004022af  48                   DEC EAX
004022b0  7407                 JZ 0x004022b9
004022b2  33c0                 XOR EAX,EAX
004022b4  e932010000           JMP 0x004023eb
004022b9  ff7510               PUSH dword ptr [EBP + 0x10]
004022bc  ff7508               PUSH dword ptr [EBP + 0x8]
004022bf  ff159ce24000         CALL dword ptr [0x0040e29c]
004022c5  e91e010000           JMP 0x004023e8
004022ca  8b5d08               MOV EBX,dword ptr [EBP + 0x8]
004022cd  53                   PUSH EBX
004022ce  e8b3690000           CALL 0x00408c86
004022d3  8b35a4e24000         MOV ESI,dword ptr [0x0040e2a4]
004022d9  59                   POP ECX
004022da  ff35b0384100         PUSH dword ptr [0x004138b0]
004022e0  68ea030000           PUSH 0x3ea
004022e5  53                   PUSH EBX
004022e6  ffd6                 CALL ESI
004022e8  bf00010000           MOV EDI,0x100
004022ed  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
004022f3  57                   PUSH EDI
004022f4  50                   PUSH EAX
004022f5  6a3e                 PUSH 0x3e
004022f7  ff35d03b4100         PUSH dword ptr [0x00413bd0]
004022fd  e8316b0000           CALL 0x00408e33
00402302  83c410               ADD ESP,0x10
00402305  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
0040230b  50                   PUSH EAX
0040230c  53                   PUSH EBX
0040230d  ff1540e24000         CALL dword ptr [0x0040e240]
00402313  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
00402319  57                   PUSH EDI
0040231a  50                   PUSH EAX
0040231b  6a33                 PUSH 0x33
0040231d  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00402323  e80b6b0000           CALL 0x00408e33
00402328  83c410               ADD ESP,0x10
0040232b  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
00402331  50                   PUSH EAX
00402332  68ed030000           PUSH 0x3ed
00402337  53                   PUSH EBX
00402338  ffd6                 CALL ESI
0040233a  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
00402340  57                   PUSH EDI
00402341  50                   PUSH EAX
00402342  6a34                 PUSH 0x34
00402344  ff35d03b4100         PUSH dword ptr [0x00413bd0]
0040234a  e8e46a0000           CALL 0x00408e33
0040234f  83c410               ADD ESP,0x10
00402352  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
00402358  50                   PUSH EAX
00402359  68ee030000           PUSH 0x3ee
0040235e  53                   PUSH EBX
0040235f  ffd6                 CALL ESI
00402361  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
00402367  57                   PUSH EDI
00402368  50                   PUSH EAX
00402369  6a45                 PUSH 0x45
0040236b  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00402371  e8bd6a0000           CALL 0x00408e33
00402376  83c410               ADD ESP,0x10
00402379  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
0040237f  50                   PUSH EAX
00402380  68ef030000           PUSH 0x3ef
00402385  53                   PUSH EBX
00402386  ffd6                 CALL ESI
00402388  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
0040238e  57                   PUSH EDI
0040238f  50                   PUSH EAX
00402390  6a35                 PUSH 0x35
00402392  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00402398  e8966a0000           CALL 0x00408e33
0040239d  83c410               ADD ESP,0x10
004023a0  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
004023a6  50                   PUSH EAX
004023a7  6a01                 PUSH 0x1
004023a9  53                   PUSH EBX
004023aa  ffd6                 CALL ESI
004023ac  8d45f0               LEA EAX,[EBP + -0x10]
004023af  50                   PUSH EAX
004023b0  53                   PUSH EBX
004023b1  ff15a0e24000         CALL dword ptr [0x0040e2a0]
004023b7  8b4df8               MOV ECX,dword ptr [EBP + -0x8]
004023ba  8b55fc               MOV EDX,dword ptr [EBP + -0x4]
004023bd  2b4df0               SUB ECX,dword ptr [EBP + -0x10]
004023c0  2b55f4               SUB EDX,dword ptr [EBP + -0xc]
004023c3  a1f8384100           MOV EAX,[0x004138f8]
004023c8  6a00                 PUSH 0x0
004023ca  52                   PUSH EDX
004023cb  51                   PUSH ECX
004023cc  2bc2                 SUB EAX,EDX
004023ce  99                   CDQ
004023cf  2bc2                 SUB EAX,EDX
004023d1  d1f8                 SAR EAX,0x1
004023d3  50                   PUSH EAX
004023d4  a1f4384100           MOV EAX,[0x004138f4]
004023d9  2bc1                 SUB EAX,ECX
004023db  99                   CDQ
004023dc  2bc2                 SUB EAX,EDX
004023de  d1f8                 SAR EAX,0x1
004023e0  50                   PUSH EAX
004023e1  53                   PUSH EBX
004023e2  ff1590e24000         CALL dword ptr [0x0040e290]
004023e8  6a01                 PUSH 0x1
004023ea  58                   POP EAX
004023eb  5f                   POP EDI
004023ec  5e                   POP ESI
004023ed  5b                   POP EBX
004023ee  c9                   LEAVE
004023ef  c21000               RET 0x10

; ==== FUNCTION _ItemDlg@16 entry=004023f2 sig=undefined4 __stdcall _ItemDlg@16(HWND param_1, int param_2, int param_3)
004023f2  55                   PUSH EBP
004023f3  8bec                 MOV EBP,ESP
004023f5  81ec50020000         SUB ESP,0x250
004023fb  8b450c               MOV EAX,dword ptr [EBP + 0xc]
004023fe  53                   PUSH EBX
004023ff  56                   PUSH ESI
00402400  83e80f               SUB EAX,0xf
00402403  57                   PUSH EDI
00402404  0f843b030000         JZ 0x00402745
0040240a  2d01010000           SUB EAX,0x101
0040240f  0f8468010000         JZ 0x0040257d
00402415  48                   DEC EAX
00402416  7449                 JZ 0x00402461
00402418  48                   DEC EAX
00402419  48                   DEC EAX
0040241a  0f85a6040000         JNZ 0x004028c6
00402420  837d1019             CMP dword ptr [EBP + 0x10],0x19
00402424  0f859c040000         JNZ 0x004028c6
0040242a  ff0554004100         INC dword ptr [0x00410054]
00402430  833d5400410019       CMP dword ptr [0x00410054],0x19
00402437  7e0a                 JLE 0x00402443
00402439  c7055400410001000000 MOV dword ptr [0x00410054],0x1
00402443  6a00                 PUSH 0x0
00402445  68b03b4100           PUSH 0x413bb0
0040244a  ff7508               PUSH dword ptr [EBP + 0x8]
0040244d  ff1580e24000         CALL dword ptr [0x0040e280]
00402453  ff7508               PUSH dword ptr [EBP + 0x8]
00402456  ff1524e24000         CALL dword ptr [0x0040e224]
0040245c  e965040000           JMP 0x004028c6
00402461  8b4510               MOV EAX,dword ptr [EBP + 0x10]
00402464  83f802               CMP EAX,0x2
00402467  0f859a000000         JNZ 0x00402507
0040246d  be00010000           MOV ESI,0x100
00402472  8d85b0fdffff         LEA EAX,[EBP + 0xfffffdb0]
00402478  56                   PUSH ESI
00402479  50                   PUSH EAX
0040247a  6a19                 PUSH 0x19
0040247c  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00402482  e8ac690000           CALL 0x00408e33
00402487  83c410               ADD ESP,0x10
0040248a  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
00402490  56                   PUSH ESI
00402491  50                   PUSH EAX
00402492  6a3b                 PUSH 0x3b
00402494  ff35d03b4100         PUSH dword ptr [0x00413bd0]
0040249a  e894690000           CALL 0x00408e33
0040249f  8b7508               MOV ESI,dword ptr [EBP + 0x8]
004024a2  33ff                 XOR EDI,EDI
004024a4  83c410               ADD ESP,0x10
004024a7  393dcc3b4100         CMP dword ptr [0x00413bcc],EDI
004024ad  7409                 JZ 0x004024b8
004024af  6a19                 PUSH 0x19
004024b1  56                   PUSH ESI
004024b2  ff1508e34000         CALL dword ptr [0x0040e308]
004024b8  8d85b0fdffff         LEA EAX,[EBP + 0xfffffdb0]
004024be  6a04                 PUSH 0x4
004024c0  50                   PUSH EAX
004024c1  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
004024c7  50                   PUSH EAX
004024c8  56                   PUSH ESI
004024c9  ff1568e24000         CALL dword ptr [0x0040e268]
004024cf  83f806               CMP EAX,0x6
004024d2  7513                 JNZ 0x004024e7
004024d4  6a02                 PUSH 0x2
004024d6  56                   PUSH ESI
004024d7  c7058c38410001000000 MOV dword ptr [0x0041388c],0x1
004024e1  ff159ce24000         CALL dword ptr [0x0040e29c]
004024e7  393dcc3b4100         CMP dword ptr [0x00413bcc],EDI
004024ed  0f844a020000         JZ 0x0040273d
004024f3  57                   PUSH EDI
004024f4  6896000000           PUSH 0x96
004024f9  6a19                 PUSH 0x19
004024fb  56                   PUSH ESI
004024fc  ff1530e24000         CALL dword ptr [0x0040e230]
00402502  e936020000           JMP 0x0040273d
00402507  6a01                 PUSH 0x1
00402509  5e                   POP ESI
0040250a  3bc6                 CMP EAX,ESI
0040250c  7520                 JNZ 0x0040252e
0040250e  803da03b41000b       CMP byte ptr [0x00413ba0],0xb
00402515  750b                 JNZ 0x00402522
00402517  893530384100         MOV dword ptr [0x00413830],ESI
0040251d  e9a4030000           JMP 0x004028c6
00402522  ff7508               PUSH dword ptr [EBP + 0x8]
00402525  e8c4040000           CALL 0x004029ee
0040252a  59                   POP ECX
0040252b  56                   PUSH ESI
0040252c  eb10                 JMP 0x0040253e
0040252e  83f805               CMP EAX,0x5
00402531  751b                 JNZ 0x0040254e
00402533  ff7508               PUSH dword ptr [EBP + 0x8]
00402536  e8b3040000           CALL 0x004029ee
0040253b  59                   POP ECX
0040253c  6a00                 PUSH 0x0
0040253e  e88c030000           CALL 0x004028cf
00402543  59                   POP ECX
00402544  e88a060000           CALL 0x00402bd3
00402549  e978030000           JMP 0x004028c6
0040254e  83f803               CMP EAX,0x3
00402551  7505                 JNZ 0x00402558
00402553  6aff                 PUSH -0x1
00402555  56                   PUSH ESI
00402556  eb0d                 JMP 0x00402565
00402558  83f804               CMP EAX,0x4
0040255b  0f8565030000         JNZ 0x004028c6
00402561  6aff                 PUSH -0x1
00402563  6a00                 PUSH 0x0
00402565  6885010000           PUSH 0x185
0040256a  68eb030000           PUSH 0x3eb
0040256f  ff7508               PUSH dword ptr [EBP + 0x8]
00402572  ff15f4e24000         CALL dword ptr [0x0040e2f4]
00402578  e949030000           JMP 0x004028c6
0040257d  8b5d08               MOV EBX,dword ptr [EBP + 0x8]
00402580  53                   PUSH EBX
00402581  e800670000           CALL 0x00408c86
00402586  59                   POP ECX
00402587  be00010000           MOV ESI,0x100
0040258c  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
00402592  56                   PUSH ESI
00402593  50                   PUSH EAX
00402594  6a2f                 PUSH 0x2f
00402596  ff35d03b4100         PUSH dword ptr [0x00413bd0]
0040259c  e892680000           CALL 0x00408e33
004025a1  8b3da4e24000         MOV EDI,dword ptr [0x0040e2a4]
004025a7  83c410               ADD ESP,0x10
004025aa  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
004025b0  50                   PUSH EAX
004025b1  6a05                 PUSH 0x5
004025b3  53                   PUSH EBX
004025b4  ffd7                 CALL EDI
004025b6  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
004025bc  56                   PUSH ESI
004025bd  50                   PUSH EAX
004025be  6a30                 PUSH 0x30
004025c0  ff35d03b4100         PUSH dword ptr [0x00413bd0]
004025c6  e868680000           CALL 0x00408e33
004025cb  83c410               ADD ESP,0x10
004025ce  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
004025d4  50                   PUSH EAX
004025d5  6a02                 PUSH 0x2
004025d7  53                   PUSH EBX
004025d8  ffd7                 CALL EDI
004025da  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
004025e0  56                   PUSH ESI
004025e1  50                   PUSH EAX
004025e2  6a31                 PUSH 0x31
004025e4  ff35d03b4100         PUSH dword ptr [0x00413bd0]
004025ea  e844680000           CALL 0x00408e33
004025ef  83c410               ADD ESP,0x10
004025f2  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
004025f8  50                   PUSH EAX
004025f9  6a03                 PUSH 0x3
004025fb  53                   PUSH EBX
004025fc  ffd7                 CALL EDI
004025fe  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
00402604  56                   PUSH ESI
00402605  50                   PUSH EAX
00402606  6a32                 PUSH 0x32
00402608  ff35d03b4100         PUSH dword ptr [0x00413bd0]
0040260e  e820680000           CALL 0x00408e33
00402613  83c410               ADD ESP,0x10
00402616  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
0040261c  50                   PUSH EAX
0040261d  6a04                 PUSH 0x4
0040261f  53                   PUSH EBX
00402620  ffd7                 CALL EDI
00402622  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
00402628  56                   PUSH ESI
00402629  50                   PUSH EAX
0040262a  ff3520384100         PUSH dword ptr [0x00413820]
00402630  ff15f8e24000         CALL dword ptr [0x0040e2f8]
00402636  8d85f0feffff         LEA EAX,[EBP + 0xfffffef0]
0040263c  50                   PUSH EAX
0040263d  53                   PUSH EBX
0040263e  ff1540e24000         CALL dword ptr [0x0040e240]
00402644  8d45f0               LEA EAX,[EBP + -0x10]
00402647  50                   PUSH EAX
00402648  53                   PUSH EBX
00402649  ff15a0e24000         CALL dword ptr [0x0040e2a0]
0040264f  8b55fc               MOV EDX,dword ptr [EBP + -0x4]
00402652  a1f8384100           MOV EAX,[0x004138f8]
00402657  2b55f4               SUB EDX,dword ptr [EBP + -0xc]
0040265a  8b4df8               MOV ECX,dword ptr [EBP + -0x8]
0040265d  2b4df0               SUB ECX,dword ptr [EBP + -0x10]
00402660  6a00                 PUSH 0x0
00402662  2bc2                 SUB EAX,EDX
00402664  52                   PUSH EDX
00402665  99                   CDQ
00402666  2bc2                 SUB EAX,EDX
00402668  51                   PUSH ECX
00402669  d1f8                 SAR EAX,0x1
0040266b  50                   PUSH EAX
0040266c  a1f4384100           MOV EAX,[0x004138f4]
00402671  2bc1                 SUB EAX,ECX
00402673  99                   CDQ
00402674  2bc2                 SUB EAX,EDX
00402676  d1f8                 SAR EAX,0x1
00402678  50                   PUSH EAX
00402679  53                   PUSH EBX
0040267a  ff1590e24000         CALL dword ptr [0x0040e290]
00402680  803da03b41000b       CMP byte ptr [0x00413ba0],0xb
00402687  8b3d28e24000         MOV EDI,dword ptr [0x0040e228]
0040268d  8b35fce24000         MOV ESI,dword ptr [0x0040e2fc]
00402693  891d18384100         MOV dword ptr [0x00413818],EBX
00402699  7522                 JNZ 0x004026bd
0040269b  833d403c410000       CMP dword ptr [0x00413c40],0x0
004026a2  7419                 JZ 0x004026bd
004026a4  6a00                 PUSH 0x0
004026a6  6a01                 PUSH 0x1
004026a8  53                   PUSH EBX
004026a9  ffd6                 CALL ESI
004026ab  50                   PUSH EAX
004026ac  ffd7                 CALL EDI
004026ae  6a00                 PUSH 0x0
004026b0  6a05                 PUSH 0x5
004026b2  ff3518384100         PUSH dword ptr [0x00413818]
004026b8  ffd6                 CALL ESI
004026ba  50                   PUSH EAX
004026bb  ffd7                 CALL EDI
004026bd  e811050000           CALL 0x00402bd3
004026c2  6a00                 PUSH 0x0
004026c4  68f60e0000           PUSH 0xef6
004026c9  ff3518384100         PUSH dword ptr [0x00413818]
004026cf  ffd6                 CALL ESI
004026d1  50                   PUSH EAX
004026d2  ffd7                 CALL EDI
004026d4  68f60e0000           PUSH 0xef6
004026d9  53                   PUSH EBX
004026da  ffd6                 CALL ESI
004026dc  85c0                 TEST EAX,EAX
004026de  894508               MOV dword ptr [EBP + 0x8],EAX
004026e1  7445                 JZ 0x00402728
004026e3  8d4df0               LEA ECX,[EBP + -0x10]
004026e6  51                   PUSH ECX
004026e7  50                   PUSH EAX
004026e8  ff15a0e24000         CALL dword ptr [0x0040e2a0]
004026ee  8b45f0               MOV EAX,dword ptr [EBP + -0x10]
004026f1  8b3500e34000         MOV ESI,dword ptr [0x0040e300]
004026f7  40                   INC EAX
004026f8  6808394100           PUSH 0x413908
004026fd  a308394100           MOV [0x00413908],EAX
00402702  8b45f4               MOV EAX,dword ptr [EBP + -0xc]
00402705  40                   INC EAX
00402706  53                   PUSH EBX
00402707  a30c394100           MOV [0x0041390c],EAX
0040270c  ffd6                 CALL ESI
0040270e  8b45f8               MOV EAX,dword ptr [EBP + -0x8]
00402711  6810384100           PUSH 0x413810
00402716  48                   DEC EAX
00402717  53                   PUSH EBX
00402718  a310384100           MOV [0x00413810],EAX
0040271d  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
00402720  48                   DEC EAX
00402721  a314384100           MOV [0x00413814],EAX
00402726  ffd6                 CALL ESI
00402728  33c0                 XOR EAX,EAX
0040272a  3905d4384100         CMP dword ptr [0x004138d4],EAX
00402730  750b                 JNZ 0x0040273d
00402732  394508               CMP dword ptr [EBP + 0x8],EAX
00402735  7406                 JZ 0x0040273d
00402737  50                   PUSH EAX
00402738  ff7508               PUSH dword ptr [EBP + 0x8]
0040273b  ffd7                 CALL EDI
0040273d  6a01                 PUSH 0x1
0040273f  58                   POP EAX
00402740  e983010000           JMP 0x004028c8
00402745  833d2434410000       CMP dword ptr [0x00413424],0x0
0040274c  751c                 JNZ 0x0040276a
0040274e  6a00                 PUSH 0x0
00402750  6896000000           PUSH 0x96
00402755  6a19                 PUSH 0x19
00402757  ff7508               PUSH dword ptr [EBP + 0x8]
0040275a  ff1530e24000         CALL dword ptr [0x0040e230]
00402760  c7052434410001000000 MOV dword ptr [0x00413424],0x1
0040276a  8d85b0feffff         LEA EAX,[EBP + 0xfffffeb0]
00402770  50                   PUSH EAX
00402771  ff7508               PUSH dword ptr [EBP + 0x8]
00402774  ff1594e24000         CALL dword ptr [0x0040e294]
0040277a  8bf8                 MOV EDI,EAX
0040277c  57                   PUSH EDI
0040277d  ff1554e04000         CALL dword ptr [0x0040e054]
00402783  ff35f83b4100         PUSH dword ptr [0x00413bf8]
00402789  8b3560e04000         MOV ESI,dword ptr [0x0040e060]
0040278f  8bd8                 MOV EBX,EAX
00402791  53                   PUSH EBX
00402792  ffd6                 CALL ESI
00402794  682000cc00           PUSH 0xcc0020
00402799  6a00                 PUSH 0x0
0040279b  6a00                 PUSH 0x0
0040279d  53                   PUSH EBX
0040279e  6806010000           PUSH 0x106
004027a3  6a7a                 PUSH 0x7a
004027a5  6a0c                 PUSH 0xc
004027a7  6a0c                 PUSH 0xc
004027a9  57                   PUSH EDI
004027aa  894510               MOV dword ptr [EBP + 0x10],EAX
004027ad  ff1550e04000         CALL dword ptr [0x0040e050]
004027b3  ff7510               PUSH dword ptr [EBP + 0x10]
004027b6  53                   PUSH EBX
004027b7  ffd6                 CALL ESI
004027b9  53                   PUSH EBX
004027ba  ff154ce04000         CALL dword ptr [0x0040e04c]
004027c0  833dcc3b410000       CMP dword ptr [0x00413bcc],0x0
004027c7  0f84e9000000         JZ 0x004028b6
004027cd  ff7508               PUSH dword ptr [EBP + 0x8]
004027d0  57                   PUSH EDI
004027d1  e8e5720000           CALL 0x00409abb
004027d6  a114384100           MOV EAX,[0x00413814]
004027db  59                   POP ECX
004027dc  2b050c394100         SUB EAX,dword ptr [0x0041390c]
004027e2  59                   POP ECX
004027e3  6a03                 PUSH 0x3
004027e5  0fb7c0               MOVZX EAX,AX
004027e8  d1e0                 SHL EAX,0x1
004027ea  99                   CDQ
004027eb  59                   POP ECX
004027ec  f7f9                 IDIV ECX
004027ee  6800007f00           PUSH 0x7f0000
004027f3  57                   PUSH EDI
004027f4  8bf0                 MOV ESI,EAX
004027f6  a110384100           MOV EAX,[0x00413810]
004027fb  2b0508394100         SUB EAX,dword ptr [0x00413908]
00402801  0fb7c0               MOVZX EAX,AX
00402804  0faf0568384100       IMUL EAX,dword ptr [0x00413868]
0040280b  99                   CDQ
0040280c  f73d383c4100         IDIV dword ptr [0x00413c38]
00402812  0fb7d8               MOVZX EBX,AX
00402815  ff1570e04000         CALL dword ptr [0x0040e070]
0040281b  a10c394100           MOV EAX,[0x0041390c]
00402820  83651000             AND dword ptr [EBP + 0x10],0x0
00402824  40                   INC EAX
00402825  8945f4               MOV dword ptr [EBP + -0xc],EAX
00402828  a114384100           MOV EAX,[0x00413814]
0040282d  48                   DEC EAX
0040282e  8945fc               MOV dword ptr [EBP + -0x4],EAX
00402831  a108394100           MOV EAX,[0x00413908]
00402836  85db                 TEST EBX,EBX
00402838  8945f0               MOV dword ptr [EBP + -0x10],EAX
0040283b  7e2f                 JLE 0x0040286c
0040283d  8b45f0               MOV EAX,dword ptr [EBP + -0x10]
00402840  6a00                 PUSH 0x0
00402842  6a00                 PUSH 0x0
00402844  6820344100           PUSH 0x413420
00402849  8d4c06fd             LEA ECX,[ESI + EAX*0x1 + -0x3]
0040284d  894df8               MOV dword ptr [EBP + -0x8],ECX
00402850  8d4df0               LEA ECX,[EBP + -0x10]
00402853  51                   PUSH ECX
00402854  6a06                 PUSH 0x6
00402856  ff75f4               PUSH dword ptr [EBP + -0xc]
00402859  50                   PUSH EAX
0040285a  57                   PUSH EDI
0040285b  ff156ce04000         CALL dword ptr [0x0040e06c]
00402861  017510               ADD dword ptr [EBP + 0x10],ESI
00402864  0175f0               ADD dword ptr [EBP + -0x10],ESI
00402867  395d10               CMP dword ptr [EBP + 0x10],EBX
0040286a  7cd1                 JL 0x0040283d
0040286c  833dd438410000       CMP dword ptr [0x004138d4],0x0
00402873  7541                 JNZ 0x004028b6
00402875  a10c394100           MOV EAX,[0x0041390c]
0040287a  6a00                 PUSH 0x0
0040287c  48                   DEC EAX
0040287d  8945f4               MOV dword ptr [EBP + -0xc],EAX
00402880  a108394100           MOV EAX,[0x00413908]
00402885  48                   DEC EAX
00402886  8945f0               MOV dword ptr [EBP + -0x10],EAX
00402889  a114384100           MOV EAX,[0x00413814]
0040288e  40                   INC EAX
0040288f  8945fc               MOV dword ptr [EBP + -0x4],EAX
00402892  a110384100           MOV EAX,[0x00413810]
00402897  40                   INC EAX
00402898  8945f8               MOV dword ptr [EBP + -0x8],EAX
0040289b  ff155ce04000         CALL dword ptr [0x0040e05c]
004028a1  8bf0                 MOV ESI,EAX
004028a3  8d45f0               LEA EAX,[EBP + -0x10]
004028a6  56                   PUSH ESI
004028a7  50                   PUSH EAX
004028a8  57                   PUSH EDI
004028a9  ff15ace24000         CALL dword ptr [0x0040e2ac]
004028af  56                   PUSH ESI
004028b0  ff1544e04000         CALL dword ptr [0x0040e044]
004028b6  8d85b0feffff         LEA EAX,[EBP + 0xfffffeb0]
004028bc  50                   PUSH EAX
004028bd  ff7508               PUSH dword ptr [EBP + 0x8]
004028c0  ff158ce24000         CALL dword ptr [0x0040e28c]
004028c6  33c0                 XOR EAX,EAX
004028c8  5f                   POP EDI
004028c9  5e                   POP ESI
004028ca  5b                   POP EBX
004028cb  c9                   LEAVE
004028cc  c21000               RET 0x10

; ==== FUNCTION FUN_004028cf entry=004028cf sig=undefined __cdecl FUN_004028cf(int param_1)
004028cf  813d40384100e8030000 CMP dword ptr [0x00413840],0x3e8
004028d9  7551                 JNZ 0x0040292c
004028db  a0a03b4100           MOV AL,[0x00413ba0]
004028e0  33c9                 XOR ECX,ECX
004028e2  394c2404             CMP dword ptr [ESP + 0x4],ECX
004028e6  741e                 JZ 0x00402906
004028e8  3c0b                 CMP AL,0xb
004028ea  0f84d1000000         JZ 0x004029c1
004028f0  3c0c                 CMP AL,0xc
004028f2  0f84c2000000         JZ 0x004029ba
004028f8  390dd43b4100         CMP dword ptr [0x00413bd4],ECX
004028fe  0f95c0               SETNZ AL
00402901  83c00b               ADD EAX,0xb
00402904  eb20                 JMP 0x00402926
00402906  3ac1                 CMP AL,CL
00402908  0f84b3000000         JZ 0x004029c1
0040290e  3c0c                 CMP AL,0xc
00402910  7507                 JNZ 0x00402919
00402912  880da03b4100         MOV byte ptr [0x00413ba0],CL
00402918  c3                   RET
00402919  390dd43b4100         CMP dword ptr [0x00413bd4],ECX
0040291f  0f94c0               SETZ AL
00402922  48                   DEC EAX
00402923  83e00c               AND EAX,0xc
00402926  a2a03b4100           MOV [0x00413ba0],AL
0040292b  c3                   RET
0040292c  33c9                 XOR ECX,ECX
0040292e  394c2404             CMP dword ptr [ESP + 0x4],ECX
00402932  7408                 JZ 0x0040293c
00402934  fe05a03b4100         INC byte ptr [0x00413ba0]
0040293a  eb06                 JMP 0x00402942
0040293c  fe0da03b4100         DEC byte ptr [0x00413ba0]
00402942  0fb605a03b4100       MOVZX EAX,byte ptr [0x00413ba0]
00402949  83f80a               CMP EAX,0xa
0040294c  776c                 JA 0x004029ba
switchD_0040294e::switchD:
0040294e  ff2485c2294000       JMP dword ptr [EAX*0x4 + 0x4029c2]
switchD_0040294e::caseD_1:
00402955  390dec3b4100         CMP dword ptr [0x00413bec],ECX
0040295b  eb56                 JMP 0x004029b3
switchD_0040294e::caseD_2:
0040295d  390dc0384100         CMP dword ptr [0x004138c0],ECX
00402963  eb4e                 JMP 0x004029b3
switchD_0040294e::caseD_3:
00402965  390dc83c4100         CMP dword ptr [0x00413cc8],ECX
0040296b  eb46                 JMP 0x004029b3
switchD_0040294e::caseD_4:
0040296d  390dcc384100         CMP dword ptr [0x004138cc],ECX
00402973  eb3e                 JMP 0x004029b3
switchD_0040294e::caseD_5:
00402975  390d84384100         CMP dword ptr [0x00413884],ECX
0040297b  eb36                 JMP 0x004029b3
switchD_0040294e::caseD_6:
0040297d  390ddc3c4100         CMP dword ptr [0x00413cdc],ECX
00402983  eb2e                 JMP 0x004029b3
switchD_0040294e::caseD_7:
00402985  390d443c4100         CMP dword ptr [0x00413c44],ECX
0040298b  eb26                 JMP 0x004029b3
switchD_0040294e::caseD_8:
0040298d  390d3c3c4100         CMP dword ptr [0x00413c3c],ECX
00402993  eb1e                 JMP 0x004029b3
switchD_0040294e::caseD_9:
00402995  390d44384100         CMP dword ptr [0x00413844],ECX
0040299b  eb16                 JMP 0x004029b3
switchD_0040294e::caseD_a:
0040299d  390df0384100         CMP dword ptr [0x004138f0],ECX
004029a3  751c                 JNZ 0x004029c1
004029a5  390dd83b4100         CMP dword ptr [0x00413bd8],ECX
004029ab  7f14                 JG 0x004029c1
004029ad  390dc03b4100         CMP dword ptr [0x00413bc0],ECX
004029b3  7f0c                 JG 0x004029c1
004029b5  e974ffffff           JMP 0x0040292e
switchD_0040294e::default:
004029ba  c605a03b41000b       MOV byte ptr [0x00413ba0],0xb
switchD_0040294e::caseD_0:
004029c1  c3                   RET
switchD_0040294e::switchdataD_004029c2:
004029c2  addr 004029c1
004029c6  addr 00402955
004029ca  addr 0040295d
004029ce  addr 00402965
004029d2  addr 0040296d
004029d6  addr 00402975
004029da  addr 0040297d
004029de  addr 00402985
004029e2  addr 0040298d
004029e6  addr 00402995
004029ea  addr 0040299d

; ==== FUNCTION FUN_004029ee entry=004029ee sig=undefined __cdecl FUN_004029ee(HWND param_1)
004029ee  a0a03b4100           MOV AL,[0x00413ba0]
004029f3  53                   PUSH EBX
004029f4  33db                 XOR EBX,EBX
004029f6  55                   PUSH EBP
004029f7  8b2df4e24000         MOV EBP,dword ptr [0x0040e2f4]
004029fd  56                   PUSH ESI
004029fe  3ac3                 CMP AL,BL
00402a00  57                   PUSH EDI
00402a01  7524                 JNZ 0x00402a27
00402a03  53                   PUSH EBX
00402a04  53                   PUSH EBX
00402a05  68f0000000           PUSH 0xf0
00402a0a  68e8030000           PUSH 0x3e8
00402a0f  ff3518384100         PUSH dword ptr [0x00413818]
00402a15  ffd5                 CALL EBP
00402a17  f7d8                 NEG EAX
00402a19  1bc0                 SBB EAX,EAX
00402a1b  05e9030000           ADD EAX,0x3e9
00402a20  a340384100           MOV [0x00413840],EAX
00402a25  eb2d                 JMP 0x00402a54
00402a27  3c0c                 CMP AL,0xc
00402a29  7521                 JNZ 0x00402a4c
00402a2b  53                   PUSH EBX
00402a2c  53                   PUSH EBX
00402a2d  68f0000000           PUSH 0xf0
00402a32  68e8030000           PUSH 0x3e8
00402a37  ff3518384100         PUSH dword ptr [0x00413818]
00402a3d  ffd5                 CALL EBP
00402a3f  f7d8                 NEG EAX
00402a41  1bc0                 SBB EAX,EAX
00402a43  f7d8                 NEG EAX
00402a45  a3c8384100           MOV [0x004138c8],EAX
00402a4a  eb08                 JMP 0x00402a54
00402a4c  3c0b                 CMP AL,0xb
00402a4e  0f8421010000         JZ 0x00402b75
00402a54  33f6                 XOR ESI,ESI
00402a56  391d383c4100         CMP dword ptr [0x00413c38],EBX
00402a5c  0f8e13010000         JLE 0x00402b75
00402a62  53                   PUSH EBX
00402a63  56                   PUSH ESI
00402a64  6887010000           PUSH 0x187
00402a69  68eb030000           PUSH 0x3eb
00402a6e  ff742424             PUSH dword ptr [ESP + 0x24]
00402a72  ffd5                 CALL EBP
00402a74  0fb60da03b4100       MOVZX ECX,byte ptr [0x00413ba0]
00402a7b  49                   DEC ECX
00402a7c  83f909               CMP ECX,0x9
00402a7f  0f87e3000000         JA 0x00402b68
switchD_00402a85::switchD:
00402a85  ff248d7a2b4000       JMP dword ptr [ECX*0x4 + 0x402b7a]
switchD_00402a85::caseD_1:
00402a8c  8b0d58384100         MOV ECX,dword ptr [0x00413858]
00402a92  eb3e                 JMP 0x00402ad2
switchD_00402a85::caseD_2:
00402a94  8b0d4c3c4100         MOV ECX,dword ptr [0x00413c4c]
00402a9a  8b0cb1               MOV ECX,dword ptr [ECX + ESI*0x4]
00402a9d  898108020000         MOV dword ptr [ECX + 0x208],EAX
00402aa3  e9c0000000           JMP 0x00402b68
switchD_00402a85::caseD_3:
00402aa8  8b0d6c384100         MOV ECX,dword ptr [0x0041386c]
00402aae  eb36                 JMP 0x00402ae6
switchD_00402a85::caseD_4:
00402ab0  8b0d2c384100         MOV ECX,dword ptr [0x0041382c]
00402ab6  eb2e                 JMP 0x00402ae6
switchD_00402a85::caseD_5:
00402ab8  8b0dfc384100         MOV ECX,dword ptr [0x004138fc]
00402abe  8b0cb1               MOV ECX,dword ptr [ECX + ESI*0x4]
00402ac1  89810c070000         MOV dword ptr [ECX + 0x70c],EAX
00402ac7  e99c000000           JMP 0x00402b68
switchD_00402a85::caseD_6:
00402acc  8b0d48384100         MOV ECX,dword ptr [0x00413848]
00402ad2  8b0cb1               MOV ECX,dword ptr [ECX + ESI*0x4]
00402ad5  898110020000         MOV dword ptr [ECX + 0x210],EAX
00402adb  e988000000           JMP 0x00402b68
switchD_00402a85::caseD_7:
00402ae0  8b0d10394100         MOV ECX,dword ptr [0x00413910]
00402ae6  8b0cb1               MOV ECX,dword ptr [ECX + ESI*0x4]
00402ae9  eb77                 JMP 0x00402b62
switchD_00402a85::caseD_8:
00402aeb  8b0dc43b4100         MOV ECX,dword ptr [0x00413bc4]
00402af1  8b0cb1               MOV ECX,dword ptr [ECX + ESI*0x4]
00402af4  898110120000         MOV dword ptr [ECX + 0x1210],EAX
00402afa  eb6c                 JMP 0x00402b68
switchD_00402a85::caseD_9:
00402afc  8b0d98384100         MOV ECX,dword ptr [0x00413898]
00402b02  8b0cb1               MOV ECX,dword ptr [ECX + ESI*0x4]
00402b05  898100030000         MOV dword ptr [ECX + 0x300],EAX
00402b0b  eb5b                 JMP 0x00402b68
switchD_00402a85::caseD_a:
00402b0d  33d2                 XOR EDX,EDX
00402b0f  33ff                 XOR EDI,EDI
00402b11  391df0384100         CMP dword ptr [0x004138f0],EBX
00402b17  740e                 JZ 0x00402b27
00402b19  6a01                 PUSH 0x1
00402b1b  3bf3                 CMP ESI,EBX
00402b1d  5a                   POP EDX
00402b1e  7507                 JNZ 0x00402b27
00402b20  a34c384100           MOV [0x0041384c],EAX
00402b25  8bfa                 MOV EDI,EDX
00402b27  3bfb                 CMP EDI,EBX
00402b29  753d                 JNZ 0x00402b68
00402b2b  8bce                 MOV ECX,ESI
00402b2d  2bca                 SUB ECX,EDX
00402b2f  3b0dd83b4100         CMP ECX,dword ptr [0x00413bd8]
00402b35  7d12                 JGE 0x00402b49
00402b37  8b3da4384100         MOV EDI,dword ptr [0x004138a4]
00402b3d  6a01                 PUSH 0x1
00402b3f  8b0c8f               MOV ECX,dword ptr [EDI + ECX*0x4]
00402b42  5f                   POP EDI
00402b43  898104020000         MOV dword ptr [ECX + 0x204],EAX
00402b49  0315d83b4100         ADD EDX,dword ptr [0x00413bd8]
00402b4f  33db                 XOR EBX,EBX
00402b51  3bfb                 CMP EDI,EBX
00402b53  7513                 JNZ 0x00402b68
00402b55  8bce                 MOV ECX,ESI
00402b57  2bca                 SUB ECX,EDX
00402b59  8b15d83c4100         MOV EDX,dword ptr [0x00413cd8]
00402b5f  8b0c8a               MOV ECX,dword ptr [EDX + ECX*0x4]
00402b62  898104010000         MOV dword ptr [ECX + 0x104],EAX
switchD_00402a85::default:
00402b68  46                   INC ESI
00402b69  3b35383c4100         CMP ESI,dword ptr [0x00413c38]
00402b6f  0f8cedfeffff         JL 0x00402a62
00402b75  5f                   POP EDI
00402b76  5e                   POP ESI
00402b77  5d                   POP EBP
00402b78  5b                   POP EBX
00402b79  c3                   RET
switchD_00402a85::switchdataD_00402b7a:
00402b7a  addr 00402a8c
00402b7e  addr 00402a94
00402b82  addr 00402aa8
00402b86  addr 00402ab0
00402b8a  addr 00402ab8
00402b8e  addr 00402acc
00402b92  addr 00402ae0
00402b96  addr 00402aeb
00402b9a  addr 00402afc
00402b9e  addr 00402b0d

; ==== FUNCTION FUN_00402ba2 entry=00402ba2 sig=undefined __cdecl FUN_00402ba2(int param_1, int param_2)
00402ba2  56                   PUSH ESI
00402ba3  ff742408             PUSH dword ptr [ESP + 0x8]
00402ba7  ff3518384100         PUSH dword ptr [0x00413818]
00402bad  ff15fce24000         CALL dword ptr [0x0040e2fc]
00402bb3  ff74240c             PUSH dword ptr [ESP + 0xc]
00402bb7  8bf0                 MOV ESI,EAX
00402bb9  56                   PUSH ESI
00402bba  ff1554e24000         CALL dword ptr [0x0040e254]
00402bc0  33c0                 XOR EAX,EAX
00402bc2  3944240c             CMP dword ptr [ESP + 0xc],EAX
00402bc6  0f95c0               SETNZ AL
00402bc9  50                   PUSH EAX
00402bca  56                   PUSH ESI
00402bcb  ff1528e24000         CALL dword ptr [0x0040e228]
00402bd1  5e                   POP ESI
00402bd2  c3                   RET

; ==== FUNCTION FUN_00402bd3 entry=00402bd3 sig=undefined __stdcall FUN_00402bd3(void)
00402bd3  81ec54090000         SUB ESP,0x954
00402bd9  803da03b41000b       CMP byte ptr [0x00413ba0],0xb
00402be0  8d442414             LEA EAX,[ESP + 0x14]
00402be4  53                   PUSH EBX
00402be5  55                   PUSH EBP
00402be6  56                   PUSH ESI
00402be7  57                   PUSH EDI
00402be8  bf00040000           MOV EDI,0x400
00402bed  57                   PUSH EDI
00402bee  50                   PUSH EAX
00402bef  7504                 JNZ 0x00402bf5
00402bf1  6a3f                 PUSH 0x3f
00402bf3  eb02                 JMP 0x00402bf7
00402bf5  6a2e                 PUSH 0x2e
00402bf7  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00402bfd  e831620000           CALL 0x00408e33
00402c02  83c410               ADD ESP,0x10
00402c05  8d442424             LEA EAX,[ESP + 0x24]
00402c09  8b35a4e24000         MOV ESI,dword ptr [0x0040e2a4]
00402c0f  50                   PUSH EAX
00402c10  6a01                 PUSH 0x1
00402c12  5b                   POP EBX
00402c13  53                   PUSH EBX
00402c14  ff3518384100         PUSH dword ptr [0x00413818]
00402c1a  ffd6                 CALL ESI
00402c1c  a0a03b4100           MOV AL,[0x00413ba0]
00402c21  bd00010000           MOV EBP,0x100
00402c26  84c0                 TEST AL,AL
00402c28  0f846b010000         JZ 0x00402d99
00402c2e  3c0c                 CMP AL,0xc
00402c30  0f8463010000         JZ 0x00402d99
00402c36  3c0b                 CMP AL,0xb
00402c38  0f850b010000         JNZ 0x00402d49
00402c3e  bbeb030000           MOV EBX,0x3eb
00402c43  6a00                 PUSH 0x0
00402c45  53                   PUSH EBX
00402c46  e857ffffff           CALL 0x00402ba2
00402c4b  59                   POP ECX
00402c4c  59                   POP ECX
00402c4d  6a00                 PUSH 0x0
00402c4f  6a03                 PUSH 0x3
00402c51  e84cffffff           CALL 0x00402ba2
00402c56  59                   POP ECX
00402c57  59                   POP ECX
00402c58  6a00                 PUSH 0x0
00402c5a  6a04                 PUSH 0x4
00402c5c  e841ffffff           CALL 0x00402ba2
00402c61  59                   POP ECX
00402c62  59                   POP ECX
00402c63  6a00                 PUSH 0x0
00402c65  68e8030000           PUSH 0x3e8
00402c6a  e833ffffff           CALL 0x00402ba2
00402c6f  59                   POP ECX
00402c70  59                   POP ECX
00402c71  6a00                 PUSH 0x0
00402c73  68e9030000           PUSH 0x3e9
00402c78  e825ffffff           CALL 0x00402ba2
00402c7d  59                   POP ECX
00402c7e  59                   POP ECX
00402c7f  6a01                 PUSH 0x1
00402c81  68ec030000           PUSH 0x3ec
00402c86  e817ffffff           CALL 0x00402ba2
00402c8b  59                   POP ECX
00402c8c  8d442428             LEA EAX,[ESP + 0x28]
00402c90  59                   POP ECX
00402c91  57                   PUSH EDI
00402c92  50                   PUSH EAX
00402c93  6a0d                 PUSH 0xd
00402c95  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00402c9b  e893610000           CALL 0x00408e33
00402ca0  83c410               ADD ESP,0x10
00402ca3  8d442424             LEA EAX,[ESP + 0x24]
00402ca7  ff35e03b4100         PUSH dword ptr [0x00413be0]
00402cad  50                   PUSH EAX
00402cae  8d84246c050000       LEA EAX,[ESP + 0x56c]
00402cb5  50                   PUSH EAX
00402cb6  ff156ce24000         CALL dword ptr [0x0040e26c]
00402cbc  83c40c               ADD ESP,0xc
00402cbf  8d842464050000       LEA EAX,[ESP + 0x564]
00402cc6  50                   PUSH EAX
00402cc7  68ea030000           PUSH 0x3ea
00402ccc  ff3518384100         PUSH dword ptr [0x00413818]
00402cd2  ffd6                 CALL ESI
00402cd4  8d442424             LEA EAX,[ESP + 0x24]
00402cd8  57                   PUSH EDI
00402cd9  50                   PUSH EAX
00402cda  6a16                 PUSH 0x16
00402cdc  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00402ce2  e84c610000           CALL 0x00408e33
00402ce7  83c410               ADD ESP,0x10
00402cea  8d442424             LEA EAX,[ESP + 0x24]
00402cee  50                   PUSH EAX
00402cef  68ec030000           PUSH 0x3ec
00402cf4  ff3518384100         PUSH dword ptr [0x00413818]
00402cfa  ffd6                 CALL ESI
00402cfc  8d442424             LEA EAX,[ESP + 0x24]
00402d00  57                   PUSH EDI
00402d01  50                   PUSH EAX
00402d02  6a13                 PUSH 0x13
00402d04  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00402d0a  e824610000           CALL 0x00408e33
00402d0f  83c410               ADD ESP,0x10
00402d12  8d442424             LEA EAX,[ESP + 0x24]
00402d16  50                   PUSH EAX
00402d17  ff3518384100         PUSH dword ptr [0x00413818]
00402d1d  ff1540e24000         CALL dword ptr [0x0040e240]
00402d23  33c0                 XOR EAX,EAX
00402d25  3905a43b4100         CMP dword ptr [0x00413ba4],EAX
00402d2b  0f94c0               SETZ AL
00402d2e  50                   PUSH EAX
00402d2f  6a05                 PUSH 0x5
00402d31  ff3518384100         PUSH dword ptr [0x00413818]
00402d37  ff15fce24000         CALL dword ptr [0x0040e2fc]
00402d3d  50                   PUSH EAX
00402d3e  ff1554e24000         CALL dword ptr [0x0040e254]
00402d44  e9f4020000           JMP 0x0040303d
00402d49  53                   PUSH EBX
00402d4a  68eb030000           PUSH 0x3eb
00402d4f  e84efeffff           CALL 0x00402ba2
00402d54  59                   POP ECX
00402d55  59                   POP ECX
00402d56  53                   PUSH EBX
00402d57  6a03                 PUSH 0x3
00402d59  e844feffff           CALL 0x00402ba2
00402d5e  59                   POP ECX
00402d5f  59                   POP ECX
00402d60  53                   PUSH EBX
00402d61  6a04                 PUSH 0x4
00402d63  e83afeffff           CALL 0x00402ba2
00402d68  59                   POP ECX
00402d69  33ff                 XOR EDI,EDI
00402d6b  59                   POP ECX
00402d6c  57                   PUSH EDI
00402d6d  68e8030000           PUSH 0x3e8
00402d72  e82bfeffff           CALL 0x00402ba2
00402d77  59                   POP ECX
00402d78  59                   POP ECX
00402d79  57                   PUSH EDI
00402d7a  68e9030000           PUSH 0x3e9
00402d7f  e81efeffff           CALL 0x00402ba2
00402d84  59                   POP ECX
00402d85  59                   POP ECX
00402d86  57                   PUSH EDI
00402d87  68ec030000           PUSH 0x3ec
00402d8c  e811feffff           CALL 0x00402ba2
00402d91  59                   POP ECX
00402d92  59                   POP ECX
00402d93  53                   PUSH EBX
00402d94  e98a020000           JMP 0x00403023
00402d99  6a00                 PUSH 0x0
00402d9b  68eb030000           PUSH 0x3eb
00402da0  e8fdfdffff           CALL 0x00402ba2
00402da5  59                   POP ECX
00402da6  59                   POP ECX
00402da7  6a00                 PUSH 0x0
00402da9  6a03                 PUSH 0x3
00402dab  e8f2fdffff           CALL 0x00402ba2
00402db0  59                   POP ECX
00402db1  59                   POP ECX
00402db2  6a00                 PUSH 0x0
00402db4  6a04                 PUSH 0x4
00402db6  e8e7fdffff           CALL 0x00402ba2
00402dbb  59                   POP ECX
00402dbc  59                   POP ECX
00402dbd  53                   PUSH EBX
00402dbe  68e8030000           PUSH 0x3e8
00402dc3  e8dafdffff           CALL 0x00402ba2
00402dc8  59                   POP ECX
00402dc9  59                   POP ECX
00402dca  53                   PUSH EBX
00402dcb  bbe9030000           MOV EBX,0x3e9
00402dd0  53                   PUSH EBX
00402dd1  e8ccfdffff           CALL 0x00402ba2
00402dd6  59                   POP ECX
00402dd7  59                   POP ECX
00402dd8  6a01                 PUSH 0x1
00402dda  68ec030000           PUSH 0x3ec
00402ddf  e8befdffff           CALL 0x00402ba2
00402de4  803da03b410000       CMP byte ptr [0x00413ba0],0x0
00402deb  59                   POP ECX
00402dec  59                   POP ECX
00402ded  8d442424             LEA EAX,[ESP + 0x24]
00402df1  55                   PUSH EBP
00402df2  50                   PUSH EAX
00402df3  0f8527010000         JNZ 0x00402f20
00402df9  6a3c                 PUSH 0x3c
00402dfb  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00402e01  e82d600000           CALL 0x00408e33
00402e06  83c410               ADD ESP,0x10
00402e09  8d442424             LEA EAX,[ESP + 0x24]
00402e0d  50                   PUSH EAX
00402e0e  68e8030000           PUSH 0x3e8
00402e13  ff3518384100         PUSH dword ptr [0x00413818]
00402e19  ffd6                 CALL ESI
00402e1b  8d442424             LEA EAX,[ESP + 0x24]
00402e1f  55                   PUSH EBP
00402e20  50                   PUSH EAX
00402e21  6a3d                 PUSH 0x3d
00402e23  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00402e29  e805600000           CALL 0x00408e33
00402e2e  83c410               ADD ESP,0x10
00402e31  8d442424             LEA EAX,[ESP + 0x24]
00402e35  50                   PUSH EAX
00402e36  53                   PUSH EBX
00402e37  ff3518384100         PUSH dword ptr [0x00413818]
00402e3d  ffd6                 CALL ESI
00402e3f  33c0                 XOR EAX,EAX
00402e41  391d40384100         CMP dword ptr [0x00413840],EBX
00402e47  6a00                 PUSH 0x0
00402e49  0f95c0               SETNZ AL
00402e4c  50                   PUSH EAX
00402e4d  68f1000000           PUSH 0xf1
00402e52  68e8030000           PUSH 0x3e8
00402e57  ff3518384100         PUSH dword ptr [0x00413818]
00402e5d  ff15f4e24000         CALL dword ptr [0x0040e2f4]
00402e63  33c0                 XOR EAX,EAX
00402e65  391d40384100         CMP dword ptr [0x00413840],EBX
00402e6b  6a00                 PUSH 0x0
00402e6d  0f94c0               SETZ AL
00402e70  50                   PUSH EAX
00402e71  68f1000000           PUSH 0xf1
00402e76  53                   PUSH EBX
00402e77  ff3518384100         PUSH dword ptr [0x00413818]
00402e7d  ff15f4e24000         CALL dword ptr [0x0040e2f4]
00402e83  8d442424             LEA EAX,[ESP + 0x24]
00402e87  57                   PUSH EDI
00402e88  50                   PUSH EAX
00402e89  6a07                 PUSH 0x7
00402e8b  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00402e91  e89d5f0000           CALL 0x00408e33
00402e96  83c410               ADD ESP,0x10
00402e99  8d442424             LEA EAX,[ESP + 0x24]
00402e9d  ff35e03b4100         PUSH dword ptr [0x00413be0]
00402ea3  50                   PUSH EAX
00402ea4  8d84246c050000       LEA EAX,[ESP + 0x56c]
00402eab  50                   PUSH EAX
00402eac  ff156ce24000         CALL dword ptr [0x0040e26c]
00402eb2  83c40c               ADD ESP,0xc
00402eb5  8d842464050000       LEA EAX,[ESP + 0x564]
00402ebc  50                   PUSH EAX
00402ebd  68ea030000           PUSH 0x3ea
00402ec2  ff3518384100         PUSH dword ptr [0x00413818]
00402ec8  ffd6                 CALL ESI
00402eca  8d442424             LEA EAX,[ESP + 0x24]
00402ece  57                   PUSH EDI
00402ecf  50                   PUSH EAX
00402ed0  6a0a                 PUSH 0xa
00402ed2  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00402ed8  e8565f0000           CALL 0x00408e33
00402edd  83c410               ADD ESP,0x10
00402ee0  8d442424             LEA EAX,[ESP + 0x24]
00402ee4  50                   PUSH EAX
00402ee5  68ec030000           PUSH 0x3ec
00402eea  ff3518384100         PUSH dword ptr [0x00413818]
00402ef0  ffd6                 CALL ESI
00402ef2  8d442424             LEA EAX,[ESP + 0x24]
00402ef6  57                   PUSH EDI
00402ef7  50                   PUSH EAX
00402ef8  6a10                 PUSH 0x10
00402efa  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00402f00  e82e5f0000           CALL 0x00408e33
00402f05  83c410               ADD ESP,0x10
00402f08  8d442424             LEA EAX,[ESP + 0x24]
00402f0c  50                   PUSH EAX
00402f0d  ff3518384100         PUSH dword ptr [0x00413818]
00402f13  ff1540e24000         CALL dword ptr [0x0040e240]
00402f19  6a00                 PUSH 0x0
00402f1b  e903010000           JMP 0x00403023
00402f20  6a33                 PUSH 0x33
00402f22  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00402f28  e8065f0000           CALL 0x00408e33
00402f2d  83c410               ADD ESP,0x10
00402f30  8d442424             LEA EAX,[ESP + 0x24]
00402f34  50                   PUSH EAX
00402f35  68e8030000           PUSH 0x3e8
00402f3a  ff3518384100         PUSH dword ptr [0x00413818]
00402f40  ffd6                 CALL ESI
00402f42  8d442424             LEA EAX,[ESP + 0x24]
00402f46  55                   PUSH EBP
00402f47  50                   PUSH EAX
00402f48  6a34                 PUSH 0x34
00402f4a  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00402f50  e8de5e0000           CALL 0x00408e33
00402f55  83c410               ADD ESP,0x10
00402f58  8d442424             LEA EAX,[ESP + 0x24]
00402f5c  50                   PUSH EAX
00402f5d  53                   PUSH EBX
00402f5e  ff3518384100         PUSH dword ptr [0x00413818]
00402f64  ffd6                 CALL ESI
00402f66  33c0                 XOR EAX,EAX
00402f68  6a00                 PUSH 0x0
00402f6a  3905c8384100         CMP dword ptr [0x004138c8],EAX
00402f70  0f95c0               SETNZ AL
00402f73  50                   PUSH EAX
00402f74  68f1000000           PUSH 0xf1
00402f79  68e8030000           PUSH 0x3e8
00402f7e  ff3518384100         PUSH dword ptr [0x00413818]
00402f84  ff15f4e24000         CALL dword ptr [0x0040e2f4]
00402f8a  33c0                 XOR EAX,EAX
00402f8c  6a00                 PUSH 0x0
00402f8e  3905c8384100         CMP dword ptr [0x004138c8],EAX
00402f94  0f94c0               SETZ AL
00402f97  50                   PUSH EAX
00402f98  68f1000000           PUSH 0xf1
00402f9d  53                   PUSH EBX
00402f9e  ff3518384100         PUSH dword ptr [0x00413818]
00402fa4  ff15f4e24000         CALL dword ptr [0x0040e2f4]
00402faa  8d442424             LEA EAX,[ESP + 0x24]
00402fae  57                   PUSH EDI
00402faf  50                   PUSH EAX
00402fb0  6a41                 PUSH 0x41
00402fb2  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00402fb8  e8765e0000           CALL 0x00408e33
00402fbd  83c410               ADD ESP,0x10
00402fc0  8d442424             LEA EAX,[ESP + 0x24]
00402fc4  50                   PUSH EAX
00402fc5  68ea030000           PUSH 0x3ea
00402fca  ff3518384100         PUSH dword ptr [0x00413818]
00402fd0  ffd6                 CALL ESI
00402fd2  8d442424             LEA EAX,[ESP + 0x24]
00402fd6  57                   PUSH EDI
00402fd7  50                   PUSH EAX
00402fd8  6a42                 PUSH 0x42
00402fda  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00402fe0  e84e5e0000           CALL 0x00408e33
00402fe5  83c410               ADD ESP,0x10
00402fe8  8d442424             LEA EAX,[ESP + 0x24]
00402fec  50                   PUSH EAX
00402fed  68ec030000           PUSH 0x3ec
00402ff2  ff3518384100         PUSH dword ptr [0x00413818]
00402ff8  ffd6                 CALL ESI
00402ffa  8d442424             LEA EAX,[ESP + 0x24]
00402ffe  57                   PUSH EDI
00402fff  50                   PUSH EAX
00403000  6a40                 PUSH 0x40
00403002  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00403008  e8265e0000           CALL 0x00408e33
0040300d  83c410               ADD ESP,0x10
00403010  8d442424             LEA EAX,[ESP + 0x24]
00403014  50                   PUSH EAX
00403015  ff3518384100         PUSH dword ptr [0x00413818]
0040301b  ff1540e24000         CALL dword ptr [0x0040e240]
00403021  6a01                 PUSH 0x1
00403023  6a05                 PUSH 0x5
00403025  ff3518384100         PUSH dword ptr [0x00413818]
0040302b  ff15fce24000         CALL dword ptr [0x0040e2fc]
00403031  50                   PUSH EAX
00403032  ff1554e24000         CALL dword ptr [0x0040e254]
00403038  bbeb030000           MOV EBX,0x3eb
0040303d  0fb605a03b4100       MOVZX EAX,byte ptr [0x00413ba0]
00403044  48                   DEC EAX
00403045  83f809               CMP EAX,0x9
00403048  0f874a020000         JA 0x00403298
switchD_0040304e::switchD:
0040304e  ff24856c364000       JMP dword ptr [EAX*0x4 + 0x40366c]
switchD_0040304e::caseD_1:
00403055  55                   PUSH EBP
00403056  ff35c03c4100         PUSH dword ptr [0x00413cc0]
0040305c  6a05                 PUSH 0x5
0040305e  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00403064  e8ca5d0000           CALL 0x00408e33
00403069  83c410               ADD ESP,0x10
0040306c  55                   PUSH EBP
0040306d  ff35b0384100         PUSH dword ptr [0x004138b0]
00403073  6a06                 PUSH 0x6
00403075  ff35d03b4100         PUSH dword ptr [0x00413bd0]
0040307b  e8b35d0000           CALL 0x00408e33
00403080  a1ec3b4100           MOV EAX,[0x00413bec]
00403085  83c410               ADD ESP,0x10
00403088  e9b5010000           JMP 0x00403242
switchD_0040304e::caseD_2:
0040308d  55                   PUSH EBP
0040308e  ff35c03c4100         PUSH dword ptr [0x00413cc0]
00403094  6a08                 PUSH 0x8
00403096  ff35d03b4100         PUSH dword ptr [0x00413bd0]
0040309c  e8925d0000           CALL 0x00408e33
004030a1  83c410               ADD ESP,0x10
004030a4  55                   PUSH EBP
004030a5  ff35b0384100         PUSH dword ptr [0x004138b0]
004030ab  6a09                 PUSH 0x9
004030ad  ff35d03b4100         PUSH dword ptr [0x00413bd0]
004030b3  e87b5d0000           CALL 0x00408e33
004030b8  a1c0384100           MOV EAX,[0x004138c0]
004030bd  83c410               ADD ESP,0x10
004030c0  e97d010000           JMP 0x00403242
switchD_0040304e::caseD_3:
004030c5  55                   PUSH EBP
004030c6  ff35c03c4100         PUSH dword ptr [0x00413cc0]
004030cc  6a0b                 PUSH 0xb
004030ce  ff35d03b4100         PUSH dword ptr [0x00413bd0]
004030d4  e85a5d0000           CALL 0x00408e33
004030d9  83c410               ADD ESP,0x10
004030dc  55                   PUSH EBP
004030dd  ff35b0384100         PUSH dword ptr [0x004138b0]
004030e3  6a0c                 PUSH 0xc
004030e5  ff35d03b4100         PUSH dword ptr [0x00413bd0]
004030eb  e8435d0000           CALL 0x00408e33
004030f0  a1c83c4100           MOV EAX,[0x00413cc8]
004030f5  83c410               ADD ESP,0x10
004030f8  e945010000           JMP 0x00403242
switchD_0040304e::caseD_4:
004030fd  55                   PUSH EBP
004030fe  ff35c03c4100         PUSH dword ptr [0x00413cc0]
00403104  6a0e                 PUSH 0xe
00403106  ff35d03b4100         PUSH dword ptr [0x00413bd0]
0040310c  e8225d0000           CALL 0x00408e33
00403111  83c410               ADD ESP,0x10
00403114  55                   PUSH EBP
00403115  ff35b0384100         PUSH dword ptr [0x004138b0]
0040311b  6a0f                 PUSH 0xf
0040311d  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00403123  e80b5d0000           CALL 0x00408e33
00403128  a1cc384100           MOV EAX,[0x004138cc]
0040312d  83c410               ADD ESP,0x10
00403130  e90d010000           JMP 0x00403242
switchD_0040304e::caseD_5:
00403135  55                   PUSH EBP
00403136  ff35c03c4100         PUSH dword ptr [0x00413cc0]
0040313c  6a11                 PUSH 0x11
0040313e  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00403144  e8ea5c0000           CALL 0x00408e33
00403149  83c410               ADD ESP,0x10
0040314c  55                   PUSH EBP
0040314d  ff35b0384100         PUSH dword ptr [0x004138b0]
00403153  6a12                 PUSH 0x12
00403155  ff35d03b4100         PUSH dword ptr [0x00413bd0]
0040315b  e8d35c0000           CALL 0x00408e33
00403160  a184384100           MOV EAX,[0x00413884]
00403165  83c410               ADD ESP,0x10
00403168  e9d5000000           JMP 0x00403242
switchD_0040304e::caseD_6:
0040316d  55                   PUSH EBP
0040316e  ff35c03c4100         PUSH dword ptr [0x00413cc0]
00403174  6a14                 PUSH 0x14
00403176  ff35d03b4100         PUSH dword ptr [0x00413bd0]
0040317c  e8b25c0000           CALL 0x00408e33
00403181  83c410               ADD ESP,0x10
00403184  55                   PUSH EBP
00403185  ff35b0384100         PUSH dword ptr [0x004138b0]
0040318b  6a15                 PUSH 0x15
0040318d  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00403193  e89b5c0000           CALL 0x00408e33
00403198  a1dc3c4100           MOV EAX,[0x00413cdc]
0040319d  83c410               ADD ESP,0x10
004031a0  e99d000000           JMP 0x00403242
switchD_0040304e::caseD_7:
004031a5  55                   PUSH EBP
004031a6  ff35c03c4100         PUSH dword ptr [0x00413cc0]
004031ac  6a36                 PUSH 0x36
004031ae  ff35d03b4100         PUSH dword ptr [0x00413bd0]
004031b4  e87a5c0000           CALL 0x00408e33
004031b9  83c410               ADD ESP,0x10
004031bc  55                   PUSH EBP
004031bd  ff35b0384100         PUSH dword ptr [0x004138b0]
004031c3  6a37                 PUSH 0x37
004031c5  ff35d03b4100         PUSH dword ptr [0x00413bd0]
004031cb  e8635c0000           CALL 0x00408e33
004031d0  a1443c4100           MOV EAX,[0x00413c44]
004031d5  83c410               ADD ESP,0x10
004031d8  eb68                 JMP 0x00403242
switchD_0040304e::caseD_8:
004031da  55                   PUSH EBP
004031db  ff35c03c4100         PUSH dword ptr [0x00413cc0]
004031e1  6a17                 PUSH 0x17
004031e3  ff35d03b4100         PUSH dword ptr [0x00413bd0]
004031e9  e8455c0000           CALL 0x00408e33
004031ee  83c410               ADD ESP,0x10
004031f1  55                   PUSH EBP
004031f2  ff35b0384100         PUSH dword ptr [0x004138b0]
004031f8  6a18                 PUSH 0x18
004031fa  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00403200  e82e5c0000           CALL 0x00408e33
00403205  a13c3c4100           MOV EAX,[0x00413c3c]
0040320a  83c410               ADD ESP,0x10
0040320d  eb33                 JMP 0x00403242
switchD_0040304e::caseD_9:
0040320f  55                   PUSH EBP
00403210  ff35c03c4100         PUSH dword ptr [0x00413cc0]
00403216  6a1a                 PUSH 0x1a
00403218  ff35d03b4100         PUSH dword ptr [0x00413bd0]
0040321e  e8105c0000           CALL 0x00408e33
00403223  83c410               ADD ESP,0x10
00403226  55                   PUSH EBP
00403227  ff35b0384100         PUSH dword ptr [0x004138b0]
0040322d  6a1b                 PUSH 0x1b
0040322f  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00403235  e8f95b0000           CALL 0x00408e33
0040323a  a144384100           MOV EAX,[0x00413844]
0040323f  83c410               ADD ESP,0x10
00403242  a3383c4100           MOV [0x00413c38],EAX
00403247  eb4f                 JMP 0x00403298
switchD_0040304e::caseD_a:
00403249  55                   PUSH EBP
0040324a  ff35c03c4100         PUSH dword ptr [0x00413cc0]
00403250  6a2a                 PUSH 0x2a
00403252  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00403258  e8d65b0000           CALL 0x00408e33
0040325d  83c410               ADD ESP,0x10
00403260  55                   PUSH EBP
00403261  ff35b0384100         PUSH dword ptr [0x004138b0]
00403267  6a29                 PUSH 0x29
00403269  ff35d03b4100         PUSH dword ptr [0x00413bd0]
0040326f  e8bf5b0000           CALL 0x00408e33
00403274  a1c03b4100           MOV EAX,[0x00413bc0]
00403279  8b0dd83b4100         MOV ECX,dword ptr [0x00413bd8]
0040327f  83c410               ADD ESP,0x10
00403282  03c1                 ADD EAX,ECX
00403284  833df038410000       CMP dword ptr [0x004138f0],0x0
0040328b  a3383c4100           MOV [0x00413c38],EAX
00403290  7406                 JZ 0x00403298
00403292  ff05383c4100         INC dword ptr [0x00413c38]
switchD_0040304e::default:
00403298  a0a03b4100           MOV AL,[0x00413ba0]
0040329d  84c0                 TEST AL,AL
0040329f  0f84a7030000         JZ 0x0040364c
004032a5  3c0b                 CMP AL,0xb
004032a7  0f849f030000         JZ 0x0040364c
004032ad  3c0c                 CMP AL,0xc
004032af  0f8497030000         JZ 0x0040364c
004032b5  8b3df4e24000         MOV EDI,dword ptr [0x0040e2f4]
004032bb  6a00                 PUSH 0x0
004032bd  6a00                 PUSH 0x0
004032bf  6884010000           PUSH 0x184
004032c4  53                   PUSH EBX
004032c5  ff3518384100         PUSH dword ptr [0x00413818]
004032cb  ffd7                 CALL EDI
004032cd  ff35b0384100         PUSH dword ptr [0x004138b0]
004032d3  68ea030000           PUSH 0x3ea
004032d8  ff3518384100         PUSH dword ptr [0x00413818]
004032de  ffd6                 CALL ESI
004032e0  ff35c03c4100         PUSH dword ptr [0x00413cc0]
004032e6  ff3518384100         PUSH dword ptr [0x00413818]
004032ec  ff1540e24000         CALL dword ptr [0x0040e240]
004032f2  8d842424040000       LEA EAX,[ESP + 0x424]
004032f9  33ed                 XOR EBP,EBP
004032fb  50                   PUSH EAX
004032fc  896c2418             MOV dword ptr [ESP + 0x18],EBP
00403300  ff3518384100         PUSH dword ptr [0x00413818]
00403306  ff1594e24000         CALL dword ptr [0x0040e294]
0040330c  55                   PUSH EBP
0040330d  55                   PUSH EBP
0040330e  6a0b                 PUSH 0xb
00403310  53                   PUSH EBX
00403311  ff3518384100         PUSH dword ptr [0x00413818]
00403317  8944242c             MOV dword ptr [ESP + 0x2c],EAX
0040331b  ffd7                 CALL EDI
0040331d  392d383c4100         CMP dword ptr [0x00413c38],EBP
00403323  0f8ec8020000         JLE 0x004035f1
00403329  8b742418             MOV ESI,dword ptr [ESP + 0x18]
0040332d  8b7c2418             MOV EDI,dword ptr [ESP + 0x18]
00403331  0fb605a03b4100       MOVZX EAX,byte ptr [0x00413ba0]
00403338  48                   DEC EAX
00403339  83f809               CMP EAX,0x9
0040333c  0f8740020000         JA 0x00403582
switchD_00403342::switchD:
00403342  ff248594364000       JMP dword ptr [EAX*0x4 + 0x403694]
switchD_00403342::caseD_1:
00403349  a158384100           MOV EAX,[0x00413858]
0040334e  8b04a8               MOV EAX,dword ptr [EAX + EBP*0x4]
00403351  8d7008               LEA ESI,[EAX + 0x8]
00403354  e9e2000000           JMP 0x0040343b
switchD_00403342::caseD_2:
00403359  a14c3c4100           MOV EAX,[0x00413c4c]
0040335e  8b34a8               MOV ESI,dword ptr [EAX + EBP*0x4]
00403361  8bbe08020000         MOV EDI,dword ptr [ESI + 0x208]
00403367  e916020000           JMP 0x00403582
switchD_00403342::caseD_3:
0040336c  a16c384100           MOV EAX,[0x0041386c]
00403371  ff34a8               PUSH dword ptr [EAX + EBP*0x4]
00403374  8d442428             LEA EAX,[ESP + 0x28]
00403378  50                   PUSH EAX
00403379  ff1544e14000         CALL dword ptr [0x0040e144]
0040337f  8d442424             LEA EAX,[ESP + 0x24]
00403383  8d742424             LEA ESI,[ESP + 0x24]
00403387  50                   PUSH EAX
00403388  ff1540e14000         CALL dword ptr [0x0040e140]
0040338e  8064042300           AND byte ptr [ESP + EAX*0x1 + 0x23],0x0
00403393  a16c384100           MOV EAX,[0x0041386c]
00403398  8b04a8               MOV EAX,dword ptr [EAX + EBP*0x4]
0040339b  8bb804010000         MOV EDI,dword ptr [EAX + 0x104]
004033a1  e9dc010000           JMP 0x00403582
switchD_00403342::caseD_4:
004033a6  a12c384100           MOV EAX,[0x0041382c]
004033ab  e99b000000           JMP 0x0040344b
switchD_00403342::caseD_5:
004033b0  a1fc384100           MOV EAX,[0x004138fc]
004033b5  8b04a8               MOV EAX,dword ptr [EAX + EBP*0x4]
004033b8  8d880c030000         LEA ECX,[EAX + 0x30c]
004033be  51                   PUSH ECX
004033bf  8d880c020000         LEA ECX,[EAX + 0x20c]
004033c5  51                   PUSH ECX
004033c6  8d880c010000         LEA ECX,[EAX + 0x10c]
004033cc  83c008               ADD EAX,0x8
004033cf  51                   PUSH ECX
004033d0  50                   PUSH EAX
004033d1  8d442434             LEA EAX,[ESP + 0x34]
004033d5  68e4014100           PUSH 0x4101e4
004033da  50                   PUSH EAX
004033db  ff156ce24000         CALL dword ptr [0x0040e26c]
004033e1  a1fc384100           MOV EAX,[0x004138fc]
004033e6  83c418               ADD ESP,0x18
004033e9  8d742424             LEA ESI,[ESP + 0x24]
004033ed  8b04a8               MOV EAX,dword ptr [EAX + EBP*0x4]
004033f0  8bb80c070000         MOV EDI,dword ptr [EAX + 0x70c]
004033f6  e987010000           JMP 0x00403582
switchD_00403342::caseD_6:
004033fb  a148384100           MOV EAX,[0x00413848]
00403400  8b04a8               MOV EAX,dword ptr [EAX + EBP*0x4]
00403403  80b80c01000000       CMP byte ptr [EAX + 0x10c],0x0
0040340a  8d880c010000         LEA ECX,[EAX + 0x10c]
00403410  741e                 JZ 0x00403430
00403412  83c008               ADD EAX,0x8
00403415  51                   PUSH ECX
00403416  50                   PUSH EAX
00403417  8d44242c             LEA EAX,[ESP + 0x2c]
0040341b  68d0014100           PUSH 0x4101d0
00403420  50                   PUSH EAX
00403421  ff156ce24000         CALL dword ptr [0x0040e26c]
00403427  83c410               ADD ESP,0x10
0040342a  8d742424             LEA ESI,[ESP + 0x24]
0040342e  eb03                 JMP 0x00403433
00403430  8d7008               LEA ESI,[EAX + 0x8]
00403433  a148384100           MOV EAX,[0x00413848]
00403438  8b04a8               MOV EAX,dword ptr [EAX + EBP*0x4]
0040343b  8bb810020000         MOV EDI,dword ptr [EAX + 0x210]
00403441  e93c010000           JMP 0x00403582
switchD_00403342::caseD_7:
00403446  a110394100           MOV EAX,[0x00413910]
0040344b  8b34a8               MOV ESI,dword ptr [EAX + EBP*0x4]
0040344e  e929010000           JMP 0x0040357c
switchD_00403342::caseD_8:
00403453  a1c43b4100           MOV EAX,[0x00413bc4]
00403458  8b0ca8               MOV ECX,dword ptr [EAX + EBP*0x4]
0040345b  8d04a8               LEA EAX,[EAX + EBP*0x4]
0040345e  80b90801000000       CMP byte ptr [ECX + 0x108],0x0
00403465  7455                 JZ 0x004034bc
00403467  8bc1                 MOV EAX,ECX
00403469  68ff000000           PUSH 0xff
0040346e  0508020000           ADD EAX,0x208
00403473  50                   PUSH EAX
00403474  8d84246c040000       LEA EAX,[ESP + 0x46c]
0040347b  50                   PUSH EAX
0040347c  e82f6e0000           CALL 0x0040a2b0
00403481  a1c43b4100           MOV EAX,[0x00413bc4]
00403486  80a4246f05000000     AND byte ptr [ESP + 0x56f],0x0
0040348e  83c40c               ADD ESP,0xc
00403491  8d8c2464040000       LEA ECX,[ESP + 0x464]
00403498  8b04a8               MOV EAX,dword ptr [EAX + EBP*0x4]
0040349b  51                   PUSH ECX
0040349c  8d8808010000         LEA ECX,[EAX + 0x108]
004034a2  83c008               ADD EAX,0x8
004034a5  51                   PUSH ECX
004034a6  50                   PUSH EAX
004034a7  8d442430             LEA EAX,[ESP + 0x30]
004034ab  68b8014100           PUSH 0x4101b8
004034b0  50                   PUSH EAX
004034b1  ff156ce24000         CALL dword ptr [0x0040e26c]
004034b7  83c414               ADD ESP,0x14
004034ba  eb1e                 JMP 0x004034da
004034bc  8d8108020000         LEA EAX,[ECX + 0x208]
004034c2  83c108               ADD ECX,0x8
004034c5  50                   PUSH EAX
004034c6  51                   PUSH ECX
004034c7  8d44242c             LEA EAX,[ESP + 0x2c]
004034cb  68b0014100           PUSH 0x4101b0
004034d0  50                   PUSH EAX
004034d1  ff156ce24000         CALL dword ptr [0x0040e26c]
004034d7  83c410               ADD ESP,0x10
004034da  a1c43b4100           MOV EAX,[0x00413bc4]
004034df  8d742424             LEA ESI,[ESP + 0x24]
004034e3  8b04a8               MOV EAX,dword ptr [EAX + EBP*0x4]
004034e6  8bb810120000         MOV EDI,dword ptr [EAX + 0x1210]
004034ec  e991000000           JMP 0x00403582
switchD_00403342::caseD_9:
004034f1  a198384100           MOV EAX,[0x00413898]
004034f6  8b04a8               MOV EAX,dword ptr [EAX + EBP*0x4]
004034f9  8bb800030000         MOV EDI,dword ptr [EAX + 0x300]
004034ff  8db000010000         LEA ESI,[EAX + 0x100]
00403505  eb7b                 JMP 0x00403582
switchD_00403342::caseD_a:
00403507  a1f0384100           MOV EAX,[0x004138f0]
0040350c  8364241000           AND dword ptr [ESP + 0x10],0x0
00403511  33c9                 XOR ECX,ECX
00403513  85c0                 TEST EAX,EAX
00403515  7417                 JZ 0x0040352e
00403517  85ed                 TEST EBP,EBP
00403519  c744241001000000     MOV dword ptr [ESP + 0x10],0x1
00403521  750b                 JNZ 0x0040352e
00403523  8b3d4c384100         MOV EDI,dword ptr [0x0041384c]
00403529  6a01                 PUSH 0x1
0040352b  8bf0                 MOV ESI,EAX
0040352d  59                   POP ECX
0040352e  85c9                 TEST ECX,ECX
00403530  7550                 JNZ 0x00403582
00403532  8b15d83b4100         MOV EDX,dword ptr [0x00413bd8]
00403538  8bc5                 MOV EAX,EBP
0040353a  2b442410             SUB EAX,dword ptr [ESP + 0x10]
0040353e  3bc2                 CMP EAX,EDX
00403540  7d23                 JGE 0x00403565
00403542  8b0da4384100         MOV ECX,dword ptr [0x004138a4]
00403548  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
0040354b  80b80401000000       CMP byte ptr [EAX + 0x104],0x0
00403552  8db004010000         LEA ESI,[EAX + 0x104]
00403558  7502                 JNZ 0x0040355c
0040355a  8bf0                 MOV ESI,EAX
0040355c  8bb804020000         MOV EDI,dword ptr [EAX + 0x204]
00403562  6a01                 PUSH 0x1
00403564  59                   POP ECX
00403565  01542410             ADD dword ptr [ESP + 0x10],EDX
00403569  85c9                 TEST ECX,ECX
0040356b  7515                 JNZ 0x00403582
0040356d  8b0dd83c4100         MOV ECX,dword ptr [0x00413cd8]
00403573  8bc5                 MOV EAX,EBP
00403575  2b442410             SUB EAX,dword ptr [ESP + 0x10]
00403579  8b3481               MOV ESI,dword ptr [ECX + EAX*0x4]
0040357c  8bbe04010000         MOV EDI,dword ptr [ESI + 0x104]
switchD_00403342::default:
00403582  8d44241c             LEA EAX,[ESP + 0x1c]
00403586  50                   PUSH EAX
00403587  56                   PUSH ESI
00403588  ff1540e14000         CALL dword ptr [0x0040e140]
0040358e  50                   PUSH EAX
0040358f  56                   PUSH ESI
00403590  ff742424             PUSH dword ptr [ESP + 0x24]
00403594  ff1574e04000         CALL dword ptr [0x0040e074]
0040359a  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
0040359e  0fb7c8               MOVZX ECX,AX
004035a1  394c2414             CMP dword ptr [ESP + 0x14],ECX
004035a5  7304                 JNC 0x004035ab
004035a7  89442414             MOV dword ptr [ESP + 0x14],EAX
004035ab  56                   PUSH ESI
004035ac  6a00                 PUSH 0x0
004035ae  6880010000           PUSH 0x180
004035b3  53                   PUSH EBX
004035b4  ff3518384100         PUSH dword ptr [0x00413818]
004035ba  ff15f4e24000         CALL dword ptr [0x0040e2f4]
004035c0  85ff                 TEST EDI,EDI
004035c2  7418                 JZ 0x004035dc
004035c4  0fb7c5               MOVZX EAX,BP
004035c7  50                   PUSH EAX
004035c8  6a01                 PUSH 0x1
004035ca  6885010000           PUSH 0x185
004035cf  53                   PUSH EBX
004035d0  ff3518384100         PUSH dword ptr [0x00413818]
004035d6  ff15f4e24000         CALL dword ptr [0x0040e2f4]
004035dc  45                   INC EBP
004035dd  3b2d383c4100         CMP EBP,dword ptr [0x00413c38]
004035e3  0f8c48fdffff         JL 0x00403331
004035e9  8b3df4e24000         MOV EDI,dword ptr [0x0040e2f4]
004035ef  33ed                 XOR EBP,EBP
004035f1  8d842424040000       LEA EAX,[ESP + 0x424]
004035f8  50                   PUSH EAX
004035f9  ff3518384100         PUSH dword ptr [0x00413818]
004035ff  ff158ce24000         CALL dword ptr [0x0040e28c]
00403605  55                   PUSH EBP
00403606  ff742418             PUSH dword ptr [ESP + 0x18]
0040360a  6894010000           PUSH 0x194
0040360f  53                   PUSH EBX
00403610  ff3518384100         PUSH dword ptr [0x00413818]
00403616  ffd7                 CALL EDI
00403618  55                   PUSH EBP
00403619  55                   PUSH EBP
0040361a  6897010000           PUSH 0x197
0040361f  53                   PUSH EBX
00403620  ff3518384100         PUSH dword ptr [0x00413818]
00403626  ffd7                 CALL EDI
00403628  55                   PUSH EBP
00403629  6a01                 PUSH 0x1
0040362b  6a0b                 PUSH 0xb
0040362d  53                   PUSH EBX
0040362e  ff3518384100         PUSH dword ptr [0x00413818]
00403634  ffd7                 CALL EDI
00403636  55                   PUSH EBP
00403637  55                   PUSH EBP
00403638  53                   PUSH EBX
00403639  ff3518384100         PUSH dword ptr [0x00413818]
0040363f  ff15fce24000         CALL dword ptr [0x0040e2fc]
00403645  50                   PUSH EAX
00403646  ff1580e24000         CALL dword ptr [0x0040e280]
0040364c  6a01                 PUSH 0x1
0040364e  ff3518384100         PUSH dword ptr [0x00413818]
00403654  ff15fce24000         CALL dword ptr [0x0040e2fc]
0040365a  50                   PUSH EAX
0040365b  ff15f0e24000         CALL dword ptr [0x0040e2f0]
00403661  5f                   POP EDI
00403662  5e                   POP ESI
00403663  5d                   POP EBP
00403664  5b                   POP EBX
00403665  81c454090000         ADD ESP,0x954
0040366b  c3                   RET
switchD_0040304e::switchdataD_0040366c:
0040366c  addr 00403055
00403670  addr 0040308d
00403674  addr 004030c5
00403678  addr 004030fd
0040367c  addr 00403135
00403680  addr 0040316d
00403684  addr 004031a5
00403688  addr 004031da
0040368c  addr 0040320f
00403690  addr 00403249
switchD_00403342::switchdataD_00403694:
00403694  addr 00403349
00403698  addr 00403359
0040369c  addr 0040336c
004036a0  addr 004033a6
004036a4  addr 004033b0
004036a8  addr 004033fb
004036ac  addr 00403446
004036b0  addr 00403453
004036b4  addr 004034f1
004036b8  addr 00403507

; ==== FUNCTION FUN_004036bc entry=004036bc sig=undefined4 __stdcall FUN_004036bc(void)
004036bc  33c0                 XOR EAX,EAX
004036be  c22000               RET 0x20

; ==== FUNCTION FUN_004036c1 entry=004036c1 sig=undefined4 __stdcall FUN_004036c1(LPCSTR param_1, LPSTR param_2)
004036c1  55                   PUSH EBP
004036c2  8bec                 MOV EBP,ESP
004036c4  b84c1c0000           MOV EAX,0x1c4c
004036c9  e8326e0000           CALL 0x0040a500
004036ce  53                   PUSH EBX
004036cf  56                   PUSH ESI
004036d0  8b3544e14000         MOV ESI,dword ptr [0x0040e144]
004036d6  57                   PUSH EDI
004036d7  bf28054100           MOV EDI,0x410528
004036dc  8d85c8f2ffff         LEA EAX,[EBP + 0xfffff2c8]
004036e2  57                   PUSH EDI
004036e3  50                   PUSH EAX
004036e4  ffd6                 CALL ESI
004036e6  8d85c4edffff         LEA EAX,[EBP + 0xffffedc4]
004036ec  57                   PUSH EDI
004036ed  50                   PUSH EAX
004036ee  ffd6                 CALL ESI
004036f0  ff7508               PUSH dword ptr [EBP + 0x8]
004036f3  8b7d0c               MOV EDI,dword ptr [EBP + 0xc]
004036f6  57                   PUSH EDI
004036f7  ffd6                 CALL ESI
004036f9  57                   PUSH EDI
004036fa  e8b2600000           CALL 0x004097b1
004036ff  3bc7                 CMP EAX,EDI
00403701  59                   POP ECX
00403702  7604                 JBE 0x00403708
00403704  8060ff00             AND byte ptr [EAX + -0x1],0x0
00403708  33db                 XOR EBX,EBX
0040370a  53                   PUSH EBX
0040370b  57                   PUSH EDI
0040370c  e828530000           CALL 0x00408a39
00403711  59                   POP ECX
00403712  59                   POP ECX
00403713  68cc004100           PUSH 0x4100cc
00403718  57                   PUSH EDI
00403719  ff15f8e04000         CALL dword ptr [0x0040e0f8]
0040371f  8b3d28e14000         MOV EDI,dword ptr [0x0040e128]
00403725  6824054100           PUSH 0x410524
0040372a  895ddc               MOV dword ptr [EBP + -0x24],EBX
0040372d  ffd7                 CALL EDI
0040372f  6820054100           PUSH 0x410520
00403734  8945e8               MOV dword ptr [EBP + -0x18],EAX
00403737  ffd7                 CALL EDI
00403739  680c010000           PUSH 0x10c
0040373e  8945e4               MOV dword ptr [EBP + -0x1c],EAX
00403741  e89d610000           CALL 0x004098e3
00403746  8b15c83c4100         MOV EDX,dword ptr [0x00413cc8]
0040374c  59                   POP ECX
0040374d  8b0d6c384100         MOV ECX,dword ptr [0x0041386c]
00403753  ff7508               PUSH dword ptr [EBP + 0x8]
00403756  890491               MOV dword ptr [ECX + EDX*0x4],EAX
00403759  a16c384100           MOV EAX,[0x0041386c]
0040375e  8b0dc83c4100         MOV ECX,dword ptr [0x00413cc8]
00403764  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00403767  899804010000         MOV dword ptr [EAX + 0x104],EBX
0040376d  a16c384100           MOV EAX,[0x0041386c]
00403772  8b0dc83c4100         MOV ECX,dword ptr [0x00413cc8]
00403778  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
0040377b  66899808010000       MOV word ptr [EAX + 0x108],BX
00403782  a16c384100           MOV EAX,[0x0041386c]
00403787  8b0dc83c4100         MOV ECX,dword ptr [0x00413cc8]
0040378d  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00403790  66c7800a010000ff7f   MOV word ptr [EAX + 0x10a],0x7fff
00403799  a16c384100           MOV EAX,[0x0041386c]
0040379e  8b0dc83c4100         MOV ECX,dword ptr [0x00413cc8]
004037a4  8b3c88               MOV EDI,dword ptr [EAX + ECX*0x4]
004037a7  57                   PUSH EDI
004037a8  ffd6                 CALL ESI
004037aa  6a01                 PUSH 0x1
004037ac  57                   PUSH EDI
004037ad  e887520000           CALL 0x00408a39
004037b2  8b1d40e14000         MOV EBX,dword ptr [0x0040e140]
004037b8  59                   POP ECX
004037b9  59                   POP ECX
004037ba  57                   PUSH EDI
004037bb  ffd3                 CALL EBX
004037bd  8d4438ff             LEA EAX,[EAX + EDI*0x1 + -0x1]
004037c1  3bc7                 CMP EAX,EDI
004037c3  760b                 JBE 0x004037d0
004037c5  80385c               CMP byte ptr [EAX],0x5c
004037c8  740b                 JZ 0x004037d5
004037ca  802000               AND byte ptr [EAX],0x0
004037cd  48                   DEC EAX
004037ce  ebf1                 JMP 0x004037c1
004037d0  80385c               CMP byte ptr [EAX],0x5c
004037d3  7504                 JNZ 0x004037d9
004037d5  80600100             AND byte ptr [EAX + 0x1],0x0
004037d9  57                   PUSH EDI
004037da  ffd3                 CALL EBX
004037dc  83f803               CMP EAX,0x3
004037df  7f03                 JG 0x004037e4
004037e1  802700               AND byte ptr [EDI],0x0
004037e4  8365fc00             AND dword ptr [EBP + -0x4],0x0
004037e8  8b1d2ce14000         MOV EBX,dword ptr [0x0040e12c]
004037ee  c745f801000000       MOV dword ptr [EBP + -0x8],0x1
004037f5  837dfc00             CMP dword ptr [EBP + -0x4],0x0
004037f9  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
004037ff  6800010000           PUSH 0x100
00403804  50                   PUSH EAX
00403805  7408                 JZ 0x0040380f
00403807  ff15f4e04000         CALL dword ptr [0x0040e0f4]
0040380d  eb02                 JMP 0x00403811
0040380f  ffd3                 CALL EBX
00403811  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403817  50                   PUSH EAX
00403818  ff1540e14000         CALL dword ptr [0x0040e140]
0040381e  80bc05cbf7ffff5c     CMP byte ptr [EBP + EAX*0x1 + 0xfffff7cb],0x5c
00403826  7412                 JZ 0x0040383a
00403828  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
0040382e  68cc004100           PUSH 0x4100cc
00403833  50                   PUSH EAX
00403834  ff15f8e04000         CALL dword ptr [0x0040e0f8]
0040383a  57                   PUSH EDI
0040383b  ff1540e14000         CALL dword ptr [0x0040e140]
00403841  50                   PUSH EAX
00403842  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403848  50                   PUSH EAX
00403849  57                   PUSH EDI
0040384a  e811a40000           CALL 0x0040dc60
0040384f  83c40c               ADD ESP,0xc
00403852  85c0                 TEST EAX,EAX
00403854  7503                 JNZ 0x00403859
00403856  2145f8               AND dword ptr [EBP + -0x8],EAX
00403859  ff45fc               INC dword ptr [EBP + -0x4]
0040385c  837dfc02             CMP dword ptr [EBP + -0x4],0x2
00403860  7c93                 JL 0x004037f5
00403862  8d85b4e7ffff         LEA EAX,[EBP + 0xffffe7b4]
00403868  6804010000           PUSH 0x104
0040386d  50                   PUSH EAX
0040386e  ff15f4e04000         CALL dword ptr [0x0040e0f4]
00403874  8d85c0eaffff         LEA EAX,[EBP + 0xffffeac0]
0040387a  6804010000           PUSH 0x104
0040387f  50                   PUSH EAX
00403880  ffd3                 CALL EBX
00403882  8d85c0eaffff         LEA EAX,[EBP + 0xffffeac0]
00403888  50                   PUSH EAX
00403889  8d85b8e8ffff         LEA EAX,[EBP + 0xffffe8b8]
0040388f  50                   PUSH EAX
00403890  ffd6                 CALL ESI
00403892  8d85b8e8ffff         LEA EAX,[EBP + 0xffffe8b8]
00403898  6818054100           PUSH 0x410518
0040389d  50                   PUSH EAX
0040389e  ff15f8e04000         CALL dword ptr [0x0040e0f8]
004038a4  833d3438410001       CMP dword ptr [0x00413834],0x1
004038ab  754f                 JNZ 0x004038fc
004038ad  6804010000           PUSH 0x104
004038b2  ff359c384100         PUSH dword ptr [0x0041389c]
004038b8  ffd3                 CALL EBX
004038ba  ff359c384100         PUSH dword ptr [0x0041389c]
004038c0  8d85bce9ffff         LEA EAX,[EBP + 0xffffe9bc]
004038c6  50                   PUSH EAX
004038c7  ffd6                 CALL ESI
004038c9  8d85bce9ffff         LEA EAX,[EBP + 0xffffe9bc]
004038cf  68cc004100           PUSH 0x4100cc
004038d4  50                   PUSH EAX
004038d5  ff15f8e04000         CALL dword ptr [0x0040e0f8]
004038db  57                   PUSH EDI
004038dc  ff1540e14000         CALL dword ptr [0x0040e140]
004038e2  50                   PUSH EAX
004038e3  8d85bce9ffff         LEA EAX,[EBP + 0xffffe9bc]
004038e9  50                   PUSH EAX
004038ea  57                   PUSH EDI
004038eb  e870a30000           CALL 0x0040dc60
004038f0  83c40c               ADD ESP,0xc
004038f3  85c0                 TEST EAX,EAX
004038f5  7514                 JNZ 0x0040390b
004038f7  2145f8               AND dword ptr [EBP + -0x8],EAX
004038fa  eb0f                 JMP 0x0040390b
004038fc  8d85c0eaffff         LEA EAX,[EBP + 0xffffeac0]
00403902  50                   PUSH EAX
00403903  ff359c384100         PUSH dword ptr [0x0041389c]
00403909  ffd6                 CALL ESI
0040390b  33db                 XOR EBX,EBX
0040390d  395df8               CMP dword ptr [EBP + -0x8],EBX
00403910  740a                 JZ 0x0040391c
00403912  381f                 CMP byte ptr [EDI],BL
00403914  7406                 JZ 0x0040391c
00403916  ff05c83c4100         INC dword ptr [0x00413cc8]
0040391c  53                   PUSH EBX
0040391d  ff7508               PUSH dword ptr [EBP + 0x8]
00403920  ff1530e14000         CALL dword ptr [0x0040e130]
00403926  83f8ff               CMP EAX,-0x1
00403929  894508               MOV dword ptr [EBP + 0x8],EAX
0040392c  7565                 JNZ 0x00403993
0040392e  be00010000           MOV ESI,0x100
00403933  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403939  56                   PUSH ESI
0040393a  50                   PUSH EAX
0040393b  6a03                 PUSH 0x3
0040393d  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00403943  e8eb540000           CALL 0x00408e33
00403948  83c410               ADD ESP,0x10
0040394b  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
00403951  56                   PUSH ESI
00403952  50                   PUSH EAX
00403953  6a02                 PUSH 0x2
00403955  ff35d03b4100         PUSH dword ptr [0x00413bd0]
0040395b  e8d3540000           CALL 0x00408e33
00403960  a11c384100           MOV EAX,[0x0041381c]
00403965  83c410               ADD ESP,0x10
00403968  3bc3                 CMP EAX,EBX
0040396a  7407                 JZ 0x00403973
0040396c  50                   PUSH EAX
0040396d  ff15e8e24000         CALL dword ptr [0x0040e2e8]
00403973  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
00403979  53                   PUSH EBX
0040397a  50                   PUSH EAX
0040397b  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403981  50                   PUSH EAX
00403982  ff3520384100         PUSH dword ptr [0x00413820]
00403988  ff1568e24000         CALL dword ptr [0x0040e268]
0040398e  e9e6010000           JMP 0x00403b79
00403993  6a01                 PUSH 0x1
00403995  bb00080000           MOV EBX,0x800
0040399a  5f                   POP EDI
0040399b  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
004039a1  6a00                 PUSH 0x0
004039a3  897df8               MOV dword ptr [EBP + -0x8],EDI
004039a6  ff7508               PUSH dword ptr [EBP + 0x8]
004039a9  53                   PUSH EBX
004039aa  50                   PUSH EAX
004039ab  e851240000           CALL 0x00405e01
004039b0  83c410               ADD ESP,0x10
004039b3  80bdd0f7ffff20       CMP byte ptr [EBP + 0xfffff7d0],0x20
004039ba  7506                 JNZ 0x004039c2
004039bc  893d7c384100         MOV dword ptr [0x0041387c],EDI
004039c2  8b3d34e14000         MOV EDI,dword ptr [0x0040e134]
004039c8  66ff05d43c4100       INC word ptr [0x00413cd4]
004039cf  80a5d0f7ffff00       AND byte ptr [EBP + 0xfffff7d0],0x0
004039d6  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
004039dc  6810054100           PUSH 0x410510
004039e1  50                   PUSH EAX
004039e2  ffd7                 CALL EDI
004039e4  85c0                 TEST EAX,EAX
004039e6  0f851d010000         JNZ 0x00403b09
004039ec  6a00                 PUSH 0x0
004039ee  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
004039f4  ff7508               PUSH dword ptr [EBP + 0x8]
004039f7  53                   PUSH EBX
004039f8  50                   PUSH EAX
004039f9  e803240000           CALL 0x00405e01
004039fe  80a5d2f7ffff00       AND byte ptr [EBP + 0xfffff7d2],0x0
00403a05  83c410               ADD ESP,0x10
00403a08  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403a0e  6808054100           PUSH 0x410508
00403a13  50                   PUSH EAX
00403a14  ffd7                 CALL EDI
00403a16  85c0                 TEST EAX,EAX
00403a18  7409                 JZ 0x00403a23
00403a1a  80bdccf7ffff00       CMP byte ptr [EBP + 0xfffff7cc],0x0
00403a21  75c9                 JNZ 0x004039ec
00403a23  80bdccf7ffff00       CMP byte ptr [EBP + 0xfffff7cc],0x0
00403a2a  0f84d9000000         JZ 0x00403b09
00403a30  8365f800             AND dword ptr [EBP + -0x8],0x0
00403a34  8d85d3f7ffff         LEA EAX,[EBP + 0xfffff7d3]
00403a3a  50                   PUSH EAX
00403a3b  ff35e03b4100         PUSH dword ptr [0x00413be0]
00403a41  ffd6                 CALL ESI
00403a43  ff35e03b4100         PUSH dword ptr [0x00413be0]
00403a49  ff1540e14000         CALL dword ptr [0x0040e140]
00403a4f  8bf8                 MOV EDI,EAX
00403a51  83ff0d               CMP EDI,0xd
00403a54  7e23                 JLE 0x00403a79
00403a56  a1e03b4100           MOV EAX,[0x00413be0]
00403a5b  68f8044100           PUSH 0x4104f8
00403a60  8d4407f3             LEA EAX,[EDI + EAX*0x1 + -0xd]
00403a64  50                   PUSH EAX
00403a65  ff1538e14000         CALL dword ptr [0x0040e138]
00403a6b  85c0                 TEST EAX,EAX
00403a6d  750a                 JNZ 0x00403a79
00403a6f  a1e03b4100           MOV EAX,[0x00413be0]
00403a74  806407f300           AND byte ptr [EDI + EAX*0x1 + -0xd],0x0
00403a79  ff35e03b4100         PUSH dword ptr [0x00413be0]
00403a7f  ff1540e14000         CALL dword ptr [0x0040e140]
00403a85  8bf8                 MOV EDI,EAX
00403a87  83ff08               CMP EDI,0x8
00403a8a  7e23                 JLE 0x00403aaf
00403a8c  a1e03b4100           MOV EAX,[0x00413be0]
00403a91  68ec044100           PUSH 0x4104ec
00403a96  8d4407f8             LEA EAX,[EDI + EAX*0x1 + -0x8]
00403a9a  50                   PUSH EAX
00403a9b  ff1538e14000         CALL dword ptr [0x0040e138]
00403aa1  85c0                 TEST EAX,EAX
00403aa3  750a                 JNZ 0x00403aaf
00403aa5  a1e03b4100           MOV EAX,[0x00413be0]
00403aaa  806407f800           AND byte ptr [EDI + EAX*0x1 + -0x8],0x0
00403aaf  833dfc3b410000       CMP dword ptr [0x00413bfc],0x0
00403ab6  7551                 JNZ 0x00403b09
00403ab8  8d85c8eeffff         LEA EAX,[EBP + 0xffffeec8]
00403abe  6800010000           PUSH 0x100
00403ac3  50                   PUSH EAX
00403ac4  6a19                 PUSH 0x19
00403ac6  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00403acc  e862530000           CALL 0x00408e33
00403ad1  83c410               ADD ESP,0x10
00403ad4  8d85c8eeffff         LEA EAX,[EBP + 0xffffeec8]
00403ada  ff35e03b4100         PUSH dword ptr [0x00413be0]
00403ae0  50                   PUSH EAX
00403ae1  8d85c8f1ffff         LEA EAX,[EBP + 0xfffff1c8]
00403ae7  68e4044100           PUSH 0x4104e4
00403aec  50                   PUSH EAX
00403aed  ff156ce24000         CALL dword ptr [0x0040e26c]
00403af3  83c410               ADD ESP,0x10
00403af6  8d85c8f1ffff         LEA EAX,[EBP + 0xfffff1c8]
00403afc  50                   PUSH EAX
00403afd  ff3520384100         PUSH dword ptr [0x00413820]
00403b03  ff1540e24000         CALL dword ptr [0x0040e240]
00403b09  837df800             CMP dword ptr [EBP + -0x8],0x0
00403b0d  7472                 JZ 0x00403b81
00403b0f  be00010000           MOV ESI,0x100
00403b14  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403b1a  56                   PUSH ESI
00403b1b  50                   PUSH EAX
00403b1c  6a04                 PUSH 0x4
00403b1e  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00403b24  e80a530000           CALL 0x00408e33
00403b29  83c410               ADD ESP,0x10
00403b2c  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
00403b32  56                   PUSH ESI
00403b33  50                   PUSH EAX
00403b34  6a02                 PUSH 0x2
00403b36  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00403b3c  e8f2520000           CALL 0x00408e33
00403b41  a11c384100           MOV EAX,[0x0041381c]
00403b46  83c410               ADD ESP,0x10
00403b49  85c0                 TEST EAX,EAX
00403b4b  7407                 JZ 0x00403b54
00403b4d  50                   PUSH EAX
00403b4e  ff15e8e24000         CALL dword ptr [0x0040e2e8]
00403b54  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
00403b5a  6a00                 PUSH 0x0
00403b5c  50                   PUSH EAX
00403b5d  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403b63  50                   PUSH EAX
00403b64  ff3520384100         PUSH dword ptr [0x00413820]
00403b6a  ff1568e24000         CALL dword ptr [0x0040e268]
00403b70  ff7508               PUSH dword ptr [EBP + 0x8]
00403b73  ff1504e14000         CALL dword ptr [0x0040e104]
00403b79  6a01                 PUSH 0x1
00403b7b  58                   POP EAX
00403b7c  e97b220000           JMP 0x00405dfc
00403b81  6a00                 PUSH 0x0
00403b83  ff7508               PUSH dword ptr [EBP + 0x8]
00403b86  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403b8c  53                   PUSH EBX
00403b8d  50                   PUSH EAX
00403b8e  e86e220000           CALL 0x00405e01
00403b93  83c410               ADD ESP,0x10
00403b96  80bdccf7ffff00       CMP byte ptr [EBP + 0xfffff7cc],0x0
00403b9d  0f844e220000         JZ 0x00405df1
00403ba3  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403ba9  68d0044100           PUSH 0x4104d0
00403bae  50                   PUSH EAX
00403baf  c745f401000000       MOV dword ptr [EBP + -0xc],0x1
00403bb6  e855a10000           CALL 0x0040dd10
00403bbb  59                   POP ECX
00403bbc  85c0                 TEST EAX,EAX
00403bbe  59                   POP ECX
00403bbf  751f                 JNZ 0x00403be0
00403bc1  33ff                 XOR EDI,EDI
00403bc3  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403bc9  57                   PUSH EDI
00403bca  c745f001000000       MOV dword ptr [EBP + -0x10],0x1
00403bd1  ff7508               PUSH dword ptr [EBP + 0x8]
00403bd4  53                   PUSH EBX
00403bd5  50                   PUSH EAX
00403bd6  e826220000           CALL 0x00405e01
00403bdb  83c410               ADD ESP,0x10
00403bde  eb05                 JMP 0x00403be5
00403be0  33ff                 XOR EDI,EDI
00403be2  897df0               MOV dword ptr [EBP + -0x10],EDI
00403be5  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403beb  68b4044100           PUSH 0x4104b4
00403bf0  50                   PUSH EAX
00403bf1  e81aa10000           CALL 0x0040dd10
00403bf6  59                   POP ECX
00403bf7  85c0                 TEST EAX,EAX
00403bf9  59                   POP ECX
00403bfa  751d                 JNZ 0x00403c19
00403bfc  57                   PUSH EDI
00403bfd  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403c03  ff7508               PUSH dword ptr [EBP + 0x8]
00403c06  c745f801000000       MOV dword ptr [EBP + -0x8],0x1
00403c0d  53                   PUSH EBX
00403c0e  50                   PUSH EAX
00403c0f  e8ed210000           CALL 0x00405e01
00403c14  83c410               ADD ESP,0x10
00403c17  eb03                 JMP 0x00403c1c
00403c19  897df8               MOV dword ptr [EBP + -0x8],EDI
00403c1c  6a0b                 PUSH 0xb
00403c1e  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403c24  68a8044100           PUSH 0x4104a8
00403c29  50                   PUSH EAX
00403c2a  e831a00000           CALL 0x0040dc60
00403c2f  83c40c               ADD ESP,0xc
00403c32  85c0                 TEST EAX,EAX
00403c34  0f84f2190000         JZ 0x0040562c
00403c3a  6a0c                 PUSH 0xc
00403c3c  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403c42  6898044100           PUSH 0x410498
00403c47  50                   PUSH EAX
00403c48  e813a00000           CALL 0x0040dc60
00403c4d  83c40c               ADD ESP,0xc
00403c50  85c0                 TEST EAX,EAX
00403c52  0f84d4190000         JZ 0x0040562c
00403c58  6a10                 PUSH 0x10
00403c5a  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403c60  6884044100           PUSH 0x410484
00403c65  50                   PUSH EAX
00403c66  e8f59f0000           CALL 0x0040dc60
00403c6b  83c40c               ADD ESP,0xc
00403c6e  85c0                 TEST EAX,EAX
00403c70  0f84b6190000         JZ 0x0040562c
00403c76  6a0b                 PUSH 0xb
00403c78  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403c7e  6878044100           PUSH 0x410478
00403c83  50                   PUSH EAX
00403c84  e8d79f0000           CALL 0x0040dc60
00403c89  83c40c               ADD ESP,0xc
00403c8c  85c0                 TEST EAX,EAX
00403c8e  0f85d8030000         JNZ 0x0040406c
00403c94  8d85d7f7ffff         LEA EAX,[EBP + 0xfffff7d7]
00403c9a  50                   PUSH EAX
00403c9b  8d85c8efffff         LEA EAX,[EBP + 0xffffefc8]
00403ca1  50                   PUSH EAX
00403ca2  ffd6                 CALL ESI
00403ca4  57                   PUSH EDI
00403ca5  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403cab  ff7508               PUSH dword ptr [EBP + 0x8]
00403cae  897df4               MOV dword ptr [EBP + -0xc],EDI
00403cb1  53                   PUSH EBX
00403cb2  50                   PUSH EAX
00403cb3  e849210000           CALL 0x00405e01
00403cb8  83c410               ADD ESP,0x10
00403cbb  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403cc1  6a0b                 PUSH 0xb
00403cc3  686c044100           PUSH 0x41046c
00403cc8  50                   PUSH EAX
00403cc9  e8929f0000           CALL 0x0040dc60
00403cce  83c40c               ADD ESP,0xc
00403cd1  85c0                 TEST EAX,EAX
00403cd3  0f858c200000         JNZ 0x00405d65
00403cd9  33ff                 XOR EDI,EDI
00403cdb  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403ce1  57                   PUSH EDI
00403ce2  ff7508               PUSH dword ptr [EBP + 0x8]
00403ce5  53                   PUSH EBX
00403ce6  50                   PUSH EAX
00403ce7  e815210000           CALL 0x00405e01
00403cec  80a5c4ebffff00       AND byte ptr [EBP + 0xffffebc4],0x0
00403cf3  217dfc               AND dword ptr [EBP + -0x4],EDI
00403cf6  83c410               ADD ESP,0x10
00403cf9  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403cff  6a0c                 PUSH 0xc
00403d01  685c044100           PUSH 0x41045c
00403d06  50                   PUSH EAX
00403d07  e8549f0000           CALL 0x0040dc60
00403d0c  83c40c               ADD ESP,0xc
00403d0f  85c0                 TEST EAX,EAX
00403d11  7524                 JNZ 0x00403d37
00403d13  8d85d8f7ffff         LEA EAX,[EBP + 0xfffff7d8]
00403d19  50                   PUSH EAX
00403d1a  8d85c4ebffff         LEA EAX,[EBP + 0xffffebc4]
00403d20  50                   PUSH EAX
00403d21  ffd6                 CALL ESI
00403d23  57                   PUSH EDI
00403d24  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403d2a  ff7508               PUSH dword ptr [EBP + 0x8]
00403d2d  53                   PUSH EBX
00403d2e  50                   PUSH EAX
00403d2f  e8cd200000           CALL 0x00405e01
00403d34  83c410               ADD ESP,0x10
00403d37  6a0c                 PUSH 0xc
00403d39  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403d3f  684c044100           PUSH 0x41044c
00403d44  50                   PUSH EAX
00403d45  e8169f0000           CALL 0x0040dc60
00403d4a  83c40c               ADD ESP,0xc
00403d4d  85c0                 TEST EAX,EAX
00403d4f  7525                 JNZ 0x00403d76
00403d51  8d85d8f7ffff         LEA EAX,[EBP + 0xfffff7d8]
00403d57  50                   PUSH EAX
00403d58  e893670000           CALL 0x0040a4f0
00403d5d  59                   POP ECX
00403d5e  8945fc               MOV dword ptr [EBP + -0x4],EAX
00403d61  6a00                 PUSH 0x0
00403d63  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403d69  ff7508               PUSH dword ptr [EBP + 0x8]
00403d6c  53                   PUSH EBX
00403d6d  50                   PUSH EAX
00403d6e  e88e200000           CALL 0x00405e01
00403d73  83c410               ADD ESP,0x10
00403d76  6a0c                 PUSH 0xc
00403d78  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403d7e  683c044100           PUSH 0x41043c
00403d83  50                   PUSH EAX
00403d84  e8d79e0000           CALL 0x0040dc60
00403d89  83c40c               ADD ESP,0xc
00403d8c  85c0                 TEST EAX,EAX
00403d8e  7524                 JNZ 0x00403db4
00403d90  8d85d8f7ffff         LEA EAX,[EBP + 0xfffff7d8]
00403d96  50                   PUSH EAX
00403d97  e854670000           CALL 0x0040a4f0
00403d9c  59                   POP ECX
00403d9d  8bf8                 MOV EDI,EAX
00403d9f  6a00                 PUSH 0x0
00403da1  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403da7  ff7508               PUSH dword ptr [EBP + 0x8]
00403daa  53                   PUSH EBX
00403dab  50                   PUSH EAX
00403dac  e850200000           CALL 0x00405e01
00403db1  83c410               ADD ESP,0x10
00403db4  83ff01               CMP EDI,0x1
00403db7  750d                 JNZ 0x00403dc6
00403db9  833dd838410000       CMP dword ptr [0x004138d8],0x0
00403dc0  0f859f1f0000         JNZ 0x00405d65
00403dc6  6a0b                 PUSH 0xb
00403dc8  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403dce  6830044100           PUSH 0x410430
00403dd3  50                   PUSH EAX
00403dd4  e8879e0000           CALL 0x0040dc60
00403dd9  83c40c               ADD ESP,0xc
00403ddc  85c0                 TEST EAX,EAX
00403dde  8d85c4ebffff         LEA EAX,[EBP + 0xffffebc4]
00403de4  6a00                 PUSH 0x0
00403de6  50                   PUSH EAX
00403de7  8d85c8efffff         LEA EAX,[EBP + 0xffffefc8]
00403ded  50                   PUSH EAX
00403dee  0f85b6010000         JNZ 0x00403faa
00403df4  8b0d3c3c4100         MOV ECX,dword ptr [0x00413c3c]
00403dfa  a1c43b4100           MOV EAX,[0x00413bc4]
00403dff  51                   PUSH ECX
00403e00  6818120000           PUSH 0x1218
00403e05  ff30                 PUSH dword ptr [EAX]
00403e07  8d0488               LEA EAX,[EAX + ECX*0x4]
00403e0a  50                   PUSH EAX
00403e0b  e8ea5b0000           CALL 0x004099fa
00403e10  8bd8                 MOV EBX,EAX
00403e12  83c41c               ADD ESP,0x1c
00403e15  85db                 TEST EBX,EBX
00403e17  0f851a010000         JNZ 0x00403f37
00403e1d  a1c43b4100           MOV EAX,[0x00413bc4]
00403e22  8b0d3c3c4100         MOV ECX,dword ptr [0x00413c3c]
00403e28  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00403e2b  219810120000         AND dword ptr [EAX + 0x1210],EBX
00403e31  a1c43b4100           MOV EAX,[0x00413bc4]
00403e36  8b0d3c3c4100         MOV ECX,dword ptr [0x00413c3c]
00403e3c  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00403e3f  8b4dfc               MOV ECX,dword ptr [EBP + -0x4]
00403e42  89880c120000         MOV dword ptr [EAX + 0x120c],ECX
00403e48  a1c43b4100           MOV EAX,[0x00413bc4]
00403e4d  8b0d3c3c4100         MOV ECX,dword ptr [0x00413c3c]
00403e53  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00403e56  89b808120000         MOV dword ptr [EAX + 0x1208],EDI
00403e5c  a1c43b4100           MOV EAX,[0x00413bc4]
00403e61  8b0d3c3c4100         MOV ECX,dword ptr [0x00413c3c]
00403e67  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00403e6a  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
00403e71  66898814120000       MOV word ptr [EAX + 0x1214],CX
00403e78  8b0d3c3c4100         MOV ECX,dword ptr [0x00413c3c]
00403e7e  8d85c8efffff         LEA EAX,[EBP + 0xffffefc8]
00403e84  50                   PUSH EAX
00403e85  a1c43b4100           MOV EAX,[0x00413bc4]
00403e8a  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00403e8d  83c008               ADD EAX,0x8
00403e90  50                   PUSH EAX
00403e91  ffd6                 CALL ESI
00403e93  8b0d3c3c4100         MOV ECX,dword ptr [0x00413c3c]
00403e99  8d85c4ebffff         LEA EAX,[EBP + 0xffffebc4]
00403e9f  50                   PUSH EAX
00403ea0  a1c43b4100           MOV EAX,[0x00413bc4]
00403ea5  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00403ea8  0508010000           ADD EAX,0x108
00403ead  50                   PUSH EAX
00403eae  ffd6                 CALL ESI
00403eb0  a13c3c4100           MOV EAX,[0x00413c3c]
00403eb5  8b0dc43b4100         MOV ECX,dword ptr [0x00413bc4]
00403ebb  8b3c81               MOV EDI,dword ptr [ECX + EAX*0x4]
00403ebe  81c708020000         ADD EDI,0x208
00403ec4  8d85d7f7ffff         LEA EAX,[EBP + 0xfffff7d7]
00403eca  50                   PUSH EAX
00403ecb  57                   PUSH EDI
00403ecc  ffd6                 CALL ESI
00403ece  57                   PUSH EDI
00403ecf  ff1540e14000         CALL dword ptr [0x0040e140]
00403ed5  6a00                 PUSH 0x0
00403ed7  8d7c0701             LEA EDI,[EDI + EAX*0x1 + 0x1]
00403edb  ff7508               PUSH dword ptr [EBP + 0x8]
00403ede  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403ee4  6800080000           PUSH 0x800
00403ee9  50                   PUSH EAX
00403eea  e8121f0000           CALL 0x00405e01
00403eef  83c410               ADD ESP,0x10
00403ef2  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403ef8  6a0b                 PUSH 0xb
00403efa  6830044100           PUSH 0x410430
00403eff  50                   PUSH EAX
00403f00  e85b9d0000           CALL 0x0040dc60
00403f05  83c40c               ADD ESP,0xc
00403f08  85c0                 TEST EAX,EAX
00403f0a  74b8                 JZ 0x00403ec4
00403f0c  802700               AND byte ptr [EDI],0x0
00403f0f  a13c3c4100           MOV EAX,[0x00413c3c]
00403f14  8b0dc43b4100         MOV ECX,dword ptr [0x00413bc4]
00403f1a  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00403f1d  8d8808020000         LEA ECX,[EAX + 0x208]
00403f23  05080a0000           ADD EAX,0xa08
00403f28  51                   PUSH ECX
00403f29  50                   PUSH EAX
00403f2a  ffd6                 CALL ESI
00403f2c  ff053c3c4100         INC dword ptr [0x00413c3c]
00403f32  e92e1e0000           JMP 0x00405d65
00403f37  8dbdb4e3ffff         LEA EDI,[EBP + 0xffffe3b4]
00403f3d  8d85d7f7ffff         LEA EAX,[EBP + 0xfffff7d7]
00403f43  50                   PUSH EAX
00403f44  57                   PUSH EDI
00403f45  ffd6                 CALL ESI
00403f47  57                   PUSH EDI
00403f48  ff1540e14000         CALL dword ptr [0x0040e140]
00403f4e  6a00                 PUSH 0x0
00403f50  8d7c0701             LEA EDI,[EDI + EAX*0x1 + 0x1]
00403f54  ff7508               PUSH dword ptr [EBP + 0x8]
00403f57  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403f5d  6800080000           PUSH 0x800
00403f62  50                   PUSH EAX
00403f63  e8991e0000           CALL 0x00405e01
00403f68  83c410               ADD ESP,0x10
00403f6b  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00403f71  6a0b                 PUSH 0xb
00403f73  6830044100           PUSH 0x410430
00403f78  50                   PUSH EAX
00403f79  e8e29c0000           CALL 0x0040dc60
00403f7e  83c40c               ADD ESP,0xc
00403f81  85c0                 TEST EAX,EAX
00403f83  74b8                 JZ 0x00403f3d
00403f85  802700               AND byte ptr [EDI],0x0
00403f88  8d85b4e3ffff         LEA EAX,[EBP + 0xffffe3b4]
00403f8e  50                   PUSH EAX
00403f8f  8d83080a0000         LEA EAX,[EBX + 0xa08]
00403f95  50                   PUSH EAX
00403f96  ffd6                 CALL ESI
00403f98  66a1d43c4100         MOV AX,[0x00413cd4]
00403f9e  66898314120000       MOV word ptr [EBX + 0x1214],AX
00403fa5  e9bb1d0000           JMP 0x00405d65
00403faa  8b0ddc3c4100         MOV ECX,dword ptr [0x00413cdc]
00403fb0  a148384100           MOV EAX,[0x00413848]
00403fb5  51                   PUSH ECX
00403fb6  6818020000           PUSH 0x218
00403fbb  ff30                 PUSH dword ptr [EAX]
00403fbd  8d0488               LEA EAX,[EAX + ECX*0x4]
00403fc0  50                   PUSH EAX
00403fc1  e8345a0000           CALL 0x004099fa
00403fc6  83c41c               ADD ESP,0x1c
00403fc9  85c0                 TEST EAX,EAX
00403fcb  0f8588000000         JNZ 0x00404059
00403fd1  a148384100           MOV EAX,[0x00413848]
00403fd6  8b0ddc3c4100         MOV ECX,dword ptr [0x00413cdc]
00403fdc  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00403fdf  83a01002000000       AND dword ptr [EAX + 0x210],0x0
00403fe6  a148384100           MOV EAX,[0x00413848]
00403feb  8b0ddc3c4100         MOV ECX,dword ptr [0x00413cdc]
00403ff1  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00403ff4  89b80c020000         MOV dword ptr [EAX + 0x20c],EDI
00403ffa  a148384100           MOV EAX,[0x00413848]
00403fff  8b0ddc3c4100         MOV ECX,dword ptr [0x00413cdc]
00404005  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00404008  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
0040400f  66898814020000       MOV word ptr [EAX + 0x214],CX
00404016  8b0ddc3c4100         MOV ECX,dword ptr [0x00413cdc]
0040401c  8d85c8efffff         LEA EAX,[EBP + 0xffffefc8]
00404022  50                   PUSH EAX
00404023  a148384100           MOV EAX,[0x00413848]
00404028  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
0040402b  83c008               ADD EAX,0x8
0040402e  50                   PUSH EAX
0040402f  ffd6                 CALL ESI
00404031  8b0d48384100         MOV ECX,dword ptr [0x00413848]
00404037  8d85c4ebffff         LEA EAX,[EBP + 0xffffebc4]
0040403d  50                   PUSH EAX
0040403e  a1dc3c4100           MOV EAX,[0x00413cdc]
00404043  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00404046  050c010000           ADD EAX,0x10c
0040404b  50                   PUSH EAX
0040404c  ffd6                 CALL ESI
0040404e  ff05dc3c4100         INC dword ptr [0x00413cdc]
00404054  e90c1d0000           JMP 0x00405d65
00404059  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
00404060  66898814020000       MOV word ptr [EAX + 0x214],CX
00404067  e9f91c0000           JMP 0x00405d65
0040406c  6a0b                 PUSH 0xb
0040406e  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00404074  6824044100           PUSH 0x410424
00404079  50                   PUSH EAX
0040407a  e8e19b0000           CALL 0x0040dc60
0040407f  83c40c               ADD ESP,0xc
00404082  85c0                 TEST EAX,EAX
00404084  0f850b020000         JNZ 0x00404295
0040408a  8d85d7f7ffff         LEA EAX,[EBP + 0xfffff7d7]
00404090  50                   PUSH EAX
00404091  8d85c8f1ffff         LEA EAX,[EBP + 0xfffff1c8]
00404097  50                   PUSH EAX
00404098  ffd6                 CALL ESI
0040409a  57                   PUSH EDI
0040409b  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
004040a1  ff7508               PUSH dword ptr [EBP + 0x8]
004040a4  53                   PUSH EBX
004040a5  50                   PUSH EAX
004040a6  e8561d0000           CALL 0x00405e01
004040ab  80a5c8eeffff00       AND byte ptr [EBP + 0xffffeec8],0x0
004040b2  83c410               ADD ESP,0x10
004040b5  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
004040bb  6a0d                 PUSH 0xd
004040bd  6814044100           PUSH 0x410414
004040c2  50                   PUSH EAX
004040c3  e8989b0000           CALL 0x0040dc60
004040c8  83c40c               ADD ESP,0xc
004040cb  85c0                 TEST EAX,EAX
004040cd  7512                 JNZ 0x004040e1
004040cf  8d85d9f7ffff         LEA EAX,[EBP + 0xfffff7d9]
004040d5  50                   PUSH EAX
004040d6  8d85c8eeffff         LEA EAX,[EBP + 0xffffeec8]
004040dc  50                   PUSH EAX
004040dd  ffd6                 CALL ESI
004040df  eb03                 JMP 0x004040e4
004040e1  897df4               MOV dword ptr [EBP + -0xc],EDI
004040e4  6a02                 PUSH 0x2
004040e6  8d85c8f1ffff         LEA EAX,[EBP + 0xfffff1c8]
004040ec  5f                   POP EDI
004040ed  57                   PUSH EDI
004040ee  6810044100           PUSH 0x410410
004040f3  50                   PUSH EAX
004040f4  e8679b0000           CALL 0x0040dc60
004040f9  83c40c               ADD ESP,0xc
004040fc  85c0                 TEST EAX,EAX
004040fe  7509                 JNZ 0x00404109
00404100  397de8               CMP dword ptr [EBP + -0x18],EDI
00404103  0f845c1c0000         JZ 0x00405d65
00404109  57                   PUSH EDI
0040410a  8d85c8f1ffff         LEA EAX,[EBP + 0xfffff1c8]
00404110  680c044100           PUSH 0x41040c
00404115  50                   PUSH EAX
00404116  e8459b0000           CALL 0x0040dc60
0040411b  83c40c               ADD ESP,0xc
0040411e  85c0                 TEST EAX,EAX
00404120  7509                 JNZ 0x0040412b
00404122  397de4               CMP dword ptr [EBP + -0x1c],EDI
00404125  0f843a1c0000         JZ 0x00405d65
0040412b  80bdc8eeffff00       CMP byte ptr [EBP + 0xffffeec8],0x0
00404132  0f842d1c0000         JZ 0x00405d65
00404138  8d85c8f1ffff         LEA EAX,[EBP + 0xfffff1c8]
0040413e  6a00                 PUSH 0x0
00404140  50                   PUSH EAX
00404141  e8874a0000           CALL 0x00408bcd
00404146  59                   POP ECX
00404147  85c0                 TEST EAX,EAX
00404149  59                   POP ECX
0040414a  0f85151c0000         JNZ 0x00405d65
00404150  8d85c8f1ffff         LEA EAX,[EBP + 0xfffff1c8]
00404156  50                   PUSH EAX
00404157  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
0040415d  50                   PUSH EAX
0040415e  ffd6                 CALL ESI
00404160  33db                 XOR EBX,EBX
00404162  33ff                 XOR EDI,EDI
00404164  391de83b4100         CMP dword ptr [0x00413be8],EBX
0040416a  7e22                 JLE 0x0040418e
0040416c  a128384100           MOV EAX,[0x00413828]
00404171  ff34b8               PUSH dword ptr [EAX + EDI*0x4]
00404174  8d85c8f1ffff         LEA EAX,[EBP + 0xfffff1c8]
0040417a  50                   PUSH EAX
0040417b  ff1538e14000         CALL dword ptr [0x0040e138]
00404181  85c0                 TEST EAX,EAX
00404183  7409                 JZ 0x0040418e
00404185  47                   INC EDI
00404186  3b3de83b4100         CMP EDI,dword ptr [0x00413be8]
0040418c  7cde                 JL 0x0040416c
0040418e  3b3de83b4100         CMP EDI,dword ptr [0x00413be8]
00404194  0f8cc5000000         JL 0x0040425f
0040419a  680a020000           PUSH 0x20a
0040419f  e83f570000           CALL 0x004098e3
004041a4  8b1528384100         MOV EDX,dword ptr [0x00413828]
004041aa  59                   POP ECX
004041ab  8b0de83b4100         MOV ECX,dword ptr [0x00413be8]
004041b1  89048a               MOV dword ptr [EDX + ECX*0x4],EAX
004041b4  391d7c384100         CMP dword ptr [0x0041387c],EBX
004041ba  7419                 JZ 0x004041d5
004041bc  8b0d28384100         MOV ECX,dword ptr [0x00413828]
004041c2  8d85c8f1ffff         LEA EAX,[EBP + 0xfffff1c8]
004041c8  50                   PUSH EAX
004041c9  a1e83b4100           MOV EAX,[0x00413be8]
004041ce  ff3481               PUSH dword ptr [ECX + EAX*0x4]
004041d1  ffd6                 CALL ESI
004041d3  eb1b                 JMP 0x004041f0
004041d5  a1e83b4100           MOV EAX,[0x00413be8]
004041da  8b0d28384100         MOV ECX,dword ptr [0x00413828]
004041e0  ff3481               PUSH dword ptr [ECX + EAX*0x4]
004041e3  8d85c8f1ffff         LEA EAX,[EBP + 0xfffff1c8]
004041e9  50                   PUSH EAX
004041ea  ff15ece24000         CALL dword ptr [0x0040e2ec]
004041f0  391d7c384100         CMP dword ptr [0x0041387c],EBX
004041f6  741f                 JZ 0x00404217
004041f8  8b0d28384100         MOV ECX,dword ptr [0x00413828]
004041fe  8d85c8eeffff         LEA EAX,[EBP + 0xffffeec8]
00404204  50                   PUSH EAX
00404205  a1e83b4100           MOV EAX,[0x00413be8]
0040420a  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
0040420d  0504010000           ADD EAX,0x104
00404212  50                   PUSH EAX
00404213  ffd6                 CALL ESI
00404215  eb21                 JMP 0x00404238
00404217  a1e83b4100           MOV EAX,[0x00413be8]
0040421c  8b0d28384100         MOV ECX,dword ptr [0x00413828]
00404222  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00404225  0504010000           ADD EAX,0x104
0040422a  50                   PUSH EAX
0040422b  8d85c8eeffff         LEA EAX,[EBP + 0xffffeec8]
00404231  50                   PUSH EAX
00404232  ff15ece24000         CALL dword ptr [0x0040e2ec]
00404238  a1e83b4100           MOV EAX,[0x00413be8]
0040423d  8b0d28384100         MOV ECX,dword ptr [0x00413828]
00404243  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00404246  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
0040424d  66898808020000       MOV word ptr [EAX + 0x208],CX
00404254  ff05e83b4100         INC dword ptr [0x00413be8]
0040425a  e9061b0000           JMP 0x00405d65
0040425f  8b0d28384100         MOV ECX,dword ptr [0x00413828]
00404265  668b15d43c4100       MOV DX,word ptr [0x00413cd4]
0040426c  8bc7                 MOV EAX,EDI
0040426e  c1e002               SHL EAX,0x2
00404271  8b0c01               MOV ECX,dword ptr [ECX + EAX*0x1]
00404274  66899108020000       MOV word ptr [ECX + 0x208],DX
0040427b  8d8dc8eeffff         LEA ECX,[EBP + 0xffffeec8]
00404281  51                   PUSH ECX
00404282  8b0d28384100         MOV ECX,dword ptr [0x00413828]
00404288  8b0401               MOV EAX,dword ptr [ECX + EAX*0x1]
0040428b  0504010000           ADD EAX,0x104
00404290  e9fc080000           JMP 0x00404b91
00404295  6a10                 PUSH 0x10
00404297  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
0040429d  68f8034100           PUSH 0x4103f8
004042a2  50                   PUSH EAX
004042a3  e8b8990000           CALL 0x0040dc60
004042a8  83c40c               ADD ESP,0xc
004042ab  85c0                 TEST EAX,EAX
004042ad  0f85ae000000         JNZ 0x00404361
004042b3  33ff                 XOR EDI,EDI
004042b5  393dc03b4100         CMP dword ptr [0x00413bc0],EDI
004042bb  7e22                 JLE 0x004042df
004042bd  a1d83c4100           MOV EAX,[0x00413cd8]
004042c2  ff34b8               PUSH dword ptr [EAX + EDI*0x4]
004042c5  8d85dcf7ffff         LEA EAX,[EBP + 0xfffff7dc]
004042cb  50                   PUSH EAX
004042cc  ff1538e14000         CALL dword ptr [0x0040e138]
004042d2  85c0                 TEST EAX,EAX
004042d4  7409                 JZ 0x004042df
004042d6  47                   INC EDI
004042d7  3b3dc03b4100         CMP EDI,dword ptr [0x00413bc0]
004042dd  7cde                 JL 0x004042bd
004042df  3b3dc03b4100         CMP EDI,dword ptr [0x00413bc0]
004042e5  7c6d                 JL 0x00404354
004042e7  680c010000           PUSH 0x10c
004042ec  e8f2550000           CALL 0x004098e3
004042f1  8b15c03b4100         MOV EDX,dword ptr [0x00413bc0]
004042f7  59                   POP ECX
004042f8  8b0dd83c4100         MOV ECX,dword ptr [0x00413cd8]
004042fe  890491               MOV dword ptr [ECX + EDX*0x4],EAX
00404301  a1d83c4100           MOV EAX,[0x00413cd8]
00404306  8b0dc03b4100         MOV ECX,dword ptr [0x00413bc0]
0040430c  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
0040430f  83a00401000000       AND dword ptr [EAX + 0x104],0x0
00404316  a1d83c4100           MOV EAX,[0x00413cd8]
0040431b  8b0dc03b4100         MOV ECX,dword ptr [0x00413bc0]
00404321  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00404324  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
0040432b  66898808010000       MOV word ptr [EAX + 0x108],CX
00404332  8b0dd83c4100         MOV ECX,dword ptr [0x00413cd8]
00404338  8d85dcf7ffff         LEA EAX,[EBP + 0xfffff7dc]
0040433e  50                   PUSH EAX
0040433f  a1c03b4100           MOV EAX,[0x00413bc0]
00404344  ff3481               PUSH dword ptr [ECX + EAX*0x4]
00404347  ffd6                 CALL ESI
00404349  ff05c03b4100         INC dword ptr [0x00413bc0]
0040434f  e9111a0000           JMP 0x00405d65
00404354  a1d83c4100           MOV EAX,[0x00413cd8]
00404359  8b04b8               MOV EAX,dword ptr [EAX + EDI*0x4]
0040435c  e9f20d0000           JMP 0x00405153
00404361  6a0c                 PUSH 0xc
00404363  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00404369  68e8034100           PUSH 0x4103e8
0040436e  50                   PUSH EAX
0040436f  e8ec980000           CALL 0x0040dc60
00404374  83c40c               ADD ESP,0xc
00404377  85c0                 TEST EAX,EAX
00404379  0f8591000000         JNZ 0x00404410
0040437f  33ff                 XOR EDI,EDI
00404381  393dec3b4100         CMP dword ptr [0x00413bec],EDI
00404387  7e3c                 JLE 0x004043c5
00404389  8d85d8f7ffff         LEA EAX,[EBP + 0xfffff7d8]
0040438f  50                   PUSH EAX
00404390  a158384100           MOV EAX,[0x00413858]
00404395  8b04b8               MOV EAX,dword ptr [EAX + EDI*0x4]
00404398  83c008               ADD EAX,0x8
0040439b  50                   PUSH EAX
0040439c  ff1538e14000         CALL dword ptr [0x0040e138]
004043a2  85c0                 TEST EAX,EAX
004043a4  7516                 JNZ 0x004043bc
004043a6  a158384100           MOV EAX,[0x00413858]
004043ab  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
004043b2  8b04b8               MOV EAX,dword ptr [EAX + EDI*0x4]
004043b5  6689881a020000       MOV word ptr [EAX + 0x21a],CX
004043bc  47                   INC EDI
004043bd  3b3dec3b4100         CMP EDI,dword ptr [0x00413bec]
004043c3  7cc4                 JL 0x00404389
004043c5  33ff                 XOR EDI,EDI
004043c7  393dc0384100         CMP dword ptr [0x004138c0],EDI
004043cd  0f8e92190000         JLE 0x00405d65
004043d3  8d85d8f7ffff         LEA EAX,[EBP + 0xfffff7d8]
004043d9  50                   PUSH EAX
004043da  a14c3c4100           MOV EAX,[0x00413c4c]
004043df  ff34b8               PUSH dword ptr [EAX + EDI*0x4]
004043e2  ff1538e14000         CALL dword ptr [0x0040e138]
004043e8  85c0                 TEST EAX,EAX
004043ea  7516                 JNZ 0x00404402
004043ec  a14c3c4100           MOV EAX,[0x00413c4c]
004043f1  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
004043f8  8b04b8               MOV EAX,dword ptr [EAX + EDI*0x4]
004043fb  66898812020000       MOV word ptr [EAX + 0x212],CX
00404402  47                   INC EDI
00404403  3b3dc0384100         CMP EDI,dword ptr [0x004138c0]
00404409  7cc8                 JL 0x004043d3
0040440b  e955190000           JMP 0x00405d65
00404410  6a0f                 PUSH 0xf
00404412  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00404418  68d8034100           PUSH 0x4103d8
0040441d  50                   PUSH EAX
0040441e  e83d980000           CALL 0x0040dc60
00404423  83c40c               ADD ESP,0xc
00404426  85c0                 TEST EAX,EAX
00404428  0f85f1000000         JNZ 0x0040451f
0040442e  8d85dbf7ffff         LEA EAX,[EBP + 0xfffff7db]
00404434  50                   PUSH EAX
00404435  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
0040443b  50                   PUSH EAX
0040443c  ffd6                 CALL ESI
0040443e  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
00404444  6a01                 PUSH 0x1
00404446  50                   PUSH EAX
00404447  e8ed450000           CALL 0x00408a39
0040444c  33ff                 XOR EDI,EDI
0040444e  59                   POP ECX
0040444f  393dec3b4100         CMP dword ptr [0x00413bec],EDI
00404455  59                   POP ECX
00404456  7e5c                 JLE 0x004044b4
00404458  a158384100           MOV EAX,[0x00413858]
0040445d  8b04b8               MOV EAX,dword ptr [EAX + EDI*0x4]
00404460  83c008               ADD EAX,0x8
00404463  50                   PUSH EAX
00404464  8d85c8efffff         LEA EAX,[EBP + 0xffffefc8]
0040446a  50                   PUSH EAX
0040446b  ffd6                 CALL ESI
0040446d  8d85c8efffff         LEA EAX,[EBP + 0xffffefc8]
00404473  6a01                 PUSH 0x1
00404475  50                   PUSH EAX
00404476  e8be450000           CALL 0x00408a39
0040447b  59                   POP ECX
0040447c  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
00404482  59                   POP ECX
00404483  50                   PUSH EAX
00404484  8d85c8efffff         LEA EAX,[EBP + 0xffffefc8]
0040448a  50                   PUSH EAX
0040448b  ff1538e14000         CALL dword ptr [0x0040e138]
00404491  85c0                 TEST EAX,EAX
00404493  7516                 JNZ 0x004044ab
00404495  a158384100           MOV EAX,[0x00413858]
0040449a  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
004044a1  8b04b8               MOV EAX,dword ptr [EAX + EDI*0x4]
004044a4  66898818020000       MOV word ptr [EAX + 0x218],CX
004044ab  47                   INC EDI
004044ac  3b3dec3b4100         CMP EDI,dword ptr [0x00413bec]
004044b2  7ca4                 JL 0x00404458
004044b4  33ff                 XOR EDI,EDI
004044b6  393dc0384100         CMP dword ptr [0x004138c0],EDI
004044bc  0f8ea3180000         JLE 0x00405d65
004044c2  a14c3c4100           MOV EAX,[0x00413c4c]
004044c7  ff34b8               PUSH dword ptr [EAX + EDI*0x4]
004044ca  8d85c8efffff         LEA EAX,[EBP + 0xffffefc8]
004044d0  50                   PUSH EAX
004044d1  ffd6                 CALL ESI
004044d3  8d85c8efffff         LEA EAX,[EBP + 0xffffefc8]
004044d9  6a01                 PUSH 0x1
004044db  50                   PUSH EAX
004044dc  e858450000           CALL 0x00408a39
004044e1  59                   POP ECX
004044e2  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
004044e8  59                   POP ECX
004044e9  50                   PUSH EAX
004044ea  8d85c8efffff         LEA EAX,[EBP + 0xffffefc8]
004044f0  50                   PUSH EAX
004044f1  ff1538e14000         CALL dword ptr [0x0040e138]
004044f7  85c0                 TEST EAX,EAX
004044f9  7516                 JNZ 0x00404511
004044fb  a14c3c4100           MOV EAX,[0x00413c4c]
00404500  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
00404507  8b04b8               MOV EAX,dword ptr [EAX + EDI*0x4]
0040450a  66898810020000       MOV word ptr [EAX + 0x210],CX
00404511  47                   INC EDI
00404512  3b3dc0384100         CMP EDI,dword ptr [0x004138c0]
00404518  7ca8                 JL 0x004044c2
0040451a  e946180000           JMP 0x00405d65
0040451f  6a09                 PUSH 0x9
00404521  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00404527  68cc034100           PUSH 0x4103cc
0040452c  50                   PUSH EAX
0040452d  e82e970000           CALL 0x0040dc60
00404532  83c40c               ADD ESP,0xc
00404535  85c0                 TEST EAX,EAX
00404537  0f85c0010000         JNZ 0x004046fd
0040453d  57                   PUSH EDI
0040453e  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00404544  ff7508               PUSH dword ptr [EBP + 0x8]
00404547  897df4               MOV dword ptr [EBP + -0xc],EDI
0040454a  53                   PUSH EBX
0040454b  50                   PUSH EAX
0040454c  e8b0180000           CALL 0x00405e01
00404551  83c410               ADD ESP,0x10
00404554  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
0040455a  6a0a                 PUSH 0xa
0040455c  68c0034100           PUSH 0x4103c0
00404561  50                   PUSH EAX
00404562  e8f9960000           CALL 0x0040dc60
00404567  83c40c               ADD ESP,0xc
0040456a  85c0                 TEST EAX,EAX
0040456c  0f85f3170000         JNZ 0x00405d65
00404572  6a02                 PUSH 0x2
00404574  8d85d6f7ffff         LEA EAX,[EBP + 0xfffff7d6]
0040457a  5f                   POP EDI
0040457b  57                   PUSH EDI
0040457c  6810044100           PUSH 0x410410
00404581  50                   PUSH EAX
00404582  e8d9960000           CALL 0x0040dc60
00404587  83c40c               ADD ESP,0xc
0040458a  85c0                 TEST EAX,EAX
0040458c  7509                 JNZ 0x00404597
0040458e  397de8               CMP dword ptr [EBP + -0x18],EDI
00404591  0f8418010000         JZ 0x004046af
00404597  57                   PUSH EDI
00404598  8d85d6f7ffff         LEA EAX,[EBP + 0xfffff7d6]
0040459e  680c044100           PUSH 0x41040c
004045a3  50                   PUSH EAX
004045a4  e8b7960000           CALL 0x0040dc60
004045a9  83c40c               ADD ESP,0xc
004045ac  85c0                 TEST EAX,EAX
004045ae  7509                 JNZ 0x004045b9
004045b0  397de4               CMP dword ptr [EBP + -0x1c],EDI
004045b3  0f84f6000000         JZ 0x004046af
004045b9  8d85d6f7ffff         LEA EAX,[EBP + 0xfffff7d6]
004045bf  6a00                 PUSH 0x0
004045c1  50                   PUSH EAX
004045c2  e806460000           CALL 0x00408bcd
004045c7  59                   POP ECX
004045c8  85c0                 TEST EAX,EAX
004045ca  59                   POP ECX
004045cb  0f85de000000         JNZ 0x004046af
004045d1  33ff                 XOR EDI,EDI
004045d3  3b3dcc384100         CMP EDI,dword ptr [0x004138cc]
004045d9  7d2e                 JGE 0x00404609
004045db  a12c384100           MOV EAX,[0x0041382c]
004045e0  ff34b8               PUSH dword ptr [EAX + EDI*0x4]
004045e3  8d85d6f7ffff         LEA EAX,[EBP + 0xfffff7d6]
004045e9  50                   PUSH EAX
004045ea  ff1538e14000         CALL dword ptr [0x0040e138]
004045f0  85c0                 TEST EAX,EAX
004045f2  7409                 JZ 0x004045fd
004045f4  47                   INC EDI
004045f5  3b3dcc384100         CMP EDI,dword ptr [0x004138cc]
004045fb  7cde                 JL 0x004045db
004045fd  3b3dcc384100         CMP EDI,dword ptr [0x004138cc]
00404603  0f8c90000000         JL 0x00404699
00404609  680c010000           PUSH 0x10c
0040460e  e8d0520000           CALL 0x004098e3
00404613  8b15cc384100         MOV EDX,dword ptr [0x004138cc]
00404619  59                   POP ECX
0040461a  8b0d2c384100         MOV ECX,dword ptr [0x0041382c]
00404620  890491               MOV dword ptr [ECX + EDX*0x4],EAX
00404623  a1cc384100           MOV EAX,[0x004138cc]
00404628  8b0d2c384100         MOV ECX,dword ptr [0x0041382c]
0040462e  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00404631  83a00401000000       AND dword ptr [EAX + 0x104],0x0
00404638  833d7c38410000       CMP dword ptr [0x0041387c],0x0
0040463f  7419                 JZ 0x0040465a
00404641  8b0d2c384100         MOV ECX,dword ptr [0x0041382c]
00404647  8d85d6f7ffff         LEA EAX,[EBP + 0xfffff7d6]
0040464d  50                   PUSH EAX
0040464e  a1cc384100           MOV EAX,[0x004138cc]
00404653  ff3481               PUSH dword ptr [ECX + EAX*0x4]
00404656  ffd6                 CALL ESI
00404658  eb1b                 JMP 0x00404675
0040465a  a1cc384100           MOV EAX,[0x004138cc]
0040465f  8b0d2c384100         MOV ECX,dword ptr [0x0041382c]
00404665  ff3481               PUSH dword ptr [ECX + EAX*0x4]
00404668  8d85d6f7ffff         LEA EAX,[EBP + 0xfffff7d6]
0040466e  50                   PUSH EAX
0040466f  ff15ece24000         CALL dword ptr [0x0040e2ec]
00404675  a1cc384100           MOV EAX,[0x004138cc]
0040467a  8b0d2c384100         MOV ECX,dword ptr [0x0041382c]
00404680  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00404683  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
0040468a  66898808010000       MOV word ptr [EAX + 0x108],CX
00404691  ff05cc384100         INC dword ptr [0x004138cc]
00404697  eb16                 JMP 0x004046af
00404699  a12c384100           MOV EAX,[0x0041382c]
0040469e  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
004046a5  8b04b8               MOV EAX,dword ptr [EAX + EDI*0x4]
004046a8  66898808010000       MOV word ptr [EAX + 0x108],CX
004046af  6a00                 PUSH 0x0
004046b1  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
004046b7  ff7508               PUSH dword ptr [EBP + 0x8]
004046ba  53                   PUSH EBX
004046bb  50                   PUSH EAX
004046bc  e840170000           CALL 0x00405e01
004046c1  83c410               ADD ESP,0x10
004046c4  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
004046ca  6a04                 PUSH 0x4
004046cc  68b8034100           PUSH 0x4103b8
004046d1  50                   PUSH EAX
004046d2  e889950000           CALL 0x0040dc60
004046d7  83c40c               ADD ESP,0xc
004046da  85c0                 TEST EAX,EAX
004046dc  0f8583160000         JNZ 0x00405d65
004046e2  80bdd0f7ffff46       CMP byte ptr [EBP + 0xfffff7d0],0x46
004046e9  0f8476160000         JZ 0x00405d65
004046ef  80bdd0f7ffff4e       CMP byte ptr [EBP + 0xfffff7d0],0x4e
004046f6  75b7                 JNZ 0x004046af
004046f8  e968160000           JMP 0x00405d65
004046fd  6a0a                 PUSH 0xa
004046ff  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00404705  68c0034100           PUSH 0x4103c0
0040470a  50                   PUSH EAX
0040470b  e850950000           CALL 0x0040dc60
00404710  83c40c               ADD ESP,0xc
00404713  85c0                 TEST EAX,EAX
00404715  0f8588020000         JNZ 0x004049a3
0040471b  6a02                 PUSH 0x2
0040471d  8d85d6f7ffff         LEA EAX,[EBP + 0xfffff7d6]
00404723  5f                   POP EDI
00404724  57                   PUSH EDI
00404725  6810044100           PUSH 0x410410
0040472a  50                   PUSH EAX
0040472b  e830950000           CALL 0x0040dc60
00404730  83c40c               ADD ESP,0xc
00404733  85c0                 TEST EAX,EAX
00404735  7505                 JNZ 0x0040473c
00404737  397de8               CMP dword ptr [EBP + -0x18],EDI
0040473a  741e                 JZ 0x0040475a
0040473c  57                   PUSH EDI
0040473d  8d85d6f7ffff         LEA EAX,[EBP + 0xfffff7d6]
00404743  680c044100           PUSH 0x41040c
00404748  50                   PUSH EAX
00404749  e812950000           CALL 0x0040dc60
0040474e  83c40c               ADD ESP,0xc
00404751  85c0                 TEST EAX,EAX
00404753  7509                 JNZ 0x0040475e
00404755  397de4               CMP dword ptr [EBP + -0x1c],EDI
00404758  7504                 JNZ 0x0040475e
0040475a  33ff                 XOR EDI,EDI
0040475c  eb03                 JMP 0x00404761
0040475e  6a01                 PUSH 0x1
00404760  5f                   POP EDI
00404761  833d7c38410000       CMP dword ptr [0x0041387c],0x0
00404768  7412                 JZ 0x0040477c
0040476a  8d85d6f7ffff         LEA EAX,[EBP + 0xfffff7d6]
00404770  50                   PUSH EAX
00404771  8d85c4ebffff         LEA EAX,[EBP + 0xffffebc4]
00404777  50                   PUSH EAX
00404778  ffd6                 CALL ESI
0040477a  eb14                 JMP 0x00404790
0040477c  8d85c4ebffff         LEA EAX,[EBP + 0xffffebc4]
00404782  50                   PUSH EAX
00404783  8d85d6f7ffff         LEA EAX,[EBP + 0xfffff7d6]
00404789  50                   PUSH EAX
0040478a  ff15ece24000         CALL dword ptr [0x0040e2ec]
00404790  6a00                 PUSH 0x0
00404792  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00404798  ff7508               PUSH dword ptr [EBP + 0x8]
0040479b  53                   PUSH EBX
0040479c  50                   PUSH EAX
0040479d  e85f160000           CALL 0x00405e01
004047a2  83c410               ADD ESP,0x10
004047a5  85ff                 TEST EDI,EDI
004047a7  0f84b8150000         JZ 0x00405d65
004047ad  8365f400             AND dword ptr [EBP + -0xc],0x0
004047b1  6a0a                 PUSH 0xa
004047b3  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
004047b9  68ac034100           PUSH 0x4103ac
004047be  50                   PUSH EAX
004047bf  e89c940000           CALL 0x0040dc60
004047c4  83c40c               ADD ESP,0xc
004047c7  85c0                 TEST EAX,EAX
004047c9  0f8596150000         JNZ 0x00405d65
004047cf  8d85d6f7ffff         LEA EAX,[EBP + 0xfffff7d6]
004047d5  50                   PUSH EAX
004047d6  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
004047dc  50                   PUSH EAX
004047dd  ffd6                 CALL ESI
004047df  6a00                 PUSH 0x0
004047e1  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
004047e7  ff7508               PUSH dword ptr [EBP + 0x8]
004047ea  53                   PUSH EBX
004047eb  50                   PUSH EAX
004047ec  e810160000           CALL 0x00405e01
004047f1  83c410               ADD ESP,0x10
004047f4  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
004047fa  6a0a                 PUSH 0xa
004047fc  68a0034100           PUSH 0x4103a0
00404801  50                   PUSH EAX
00404802  e859940000           CALL 0x0040dc60
00404807  83c40c               ADD ESP,0xc
0040480a  85c0                 TEST EAX,EAX
0040480c  0f8553150000         JNZ 0x00405d65
00404812  8d85d6f7ffff         LEA EAX,[EBP + 0xfffff7d6]
00404818  50                   PUSH EAX
00404819  8d85c8efffff         LEA EAX,[EBP + 0xffffefc8]
0040481f  50                   PUSH EAX
00404820  ffd6                 CALL ESI
00404822  6a00                 PUSH 0x0
00404824  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
0040482a  ff7508               PUSH dword ptr [EBP + 0x8]
0040482d  53                   PUSH EBX
0040482e  50                   PUSH EAX
0040482f  e8cd150000           CALL 0x00405e01
00404834  83c410               ADD ESP,0x10
00404837  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
0040483d  6a09                 PUSH 0x9
0040483f  6894034100           PUSH 0x410394
00404844  50                   PUSH EAX
00404845  e816940000           CALL 0x0040dc60
0040484a  83c40c               ADD ESP,0xc
0040484d  85c0                 TEST EAX,EAX
0040484f  0f8510150000         JNZ 0x00405d65
00404855  50                   PUSH EAX
00404856  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
0040485c  ff7508               PUSH dword ptr [EBP + 0x8]
0040485f  53                   PUSH EBX
00404860  50                   PUSH EAX
00404861  e89b150000           CALL 0x00405e01
00404866  83c410               ADD ESP,0x10
00404869  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
0040486f  6a09                 PUSH 0x9
00404871  6888034100           PUSH 0x410388
00404876  50                   PUSH EAX
00404877  e8e4930000           CALL 0x0040dc60
0040487c  83c40c               ADD ESP,0xc
0040487f  85c0                 TEST EAX,EAX
00404881  750f                 JNZ 0x00404892
00404883  c745f401000000       MOV dword ptr [EBP + -0xc],0x1
0040488a  8dbdd5f7ffff         LEA EDI,[EBP + 0xfffff7d5]
00404890  eb05                 JMP 0x00404897
00404892  bf20344100           MOV EDI,0x413420
00404897  8b0d84384100         MOV ECX,dword ptr [0x00413884]
0040489d  8d85c8efffff         LEA EAX,[EBP + 0xffffefc8]
004048a3  50                   PUSH EAX
004048a4  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
004048aa  50                   PUSH EAX
004048ab  8d85c4ebffff         LEA EAX,[EBP + 0xffffebc4]
004048b1  50                   PUSH EAX
004048b2  a1fc384100           MOV EAX,[0x004138fc]
004048b7  51                   PUSH ECX
004048b8  6814070000           PUSH 0x714
004048bd  ff30                 PUSH dword ptr [EAX]
004048bf  8d0488               LEA EAX,[EAX + ECX*0x4]
004048c2  50                   PUSH EAX
004048c3  e832510000           CALL 0x004099fa
004048c8  83c41c               ADD ESP,0x1c
004048cb  85c0                 TEST EAX,EAX
004048cd  0f85c5000000         JNZ 0x00404998
004048d3  a1fc384100           MOV EAX,[0x004138fc]
004048d8  8b0d84384100         MOV ECX,dword ptr [0x00413884]
004048de  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
004048e1  83a00c07000000       AND dword ptr [EAX + 0x70c],0x0
004048e8  a1fc384100           MOV EAX,[0x004138fc]
004048ed  8b0d84384100         MOV ECX,dword ptr [0x00413884]
004048f3  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
004048f6  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
004048fd  66898810070000       MOV word ptr [EAX + 0x710],CX
00404904  8b0d84384100         MOV ECX,dword ptr [0x00413884]
0040490a  8d85c4ebffff         LEA EAX,[EBP + 0xffffebc4]
00404910  50                   PUSH EAX
00404911  a1fc384100           MOV EAX,[0x004138fc]
00404916  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00404919  83c008               ADD EAX,0x8
0040491c  50                   PUSH EAX
0040491d  ffd6                 CALL ESI
0040491f  8b0d84384100         MOV ECX,dword ptr [0x00413884]
00404925  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
0040492b  50                   PUSH EAX
0040492c  a1fc384100           MOV EAX,[0x004138fc]
00404931  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00404934  050c010000           ADD EAX,0x10c
00404939  50                   PUSH EAX
0040493a  ffd6                 CALL ESI
0040493c  8b0d84384100         MOV ECX,dword ptr [0x00413884]
00404942  8d85c8efffff         LEA EAX,[EBP + 0xffffefc8]
00404948  50                   PUSH EAX
00404949  a1fc384100           MOV EAX,[0x004138fc]
0040494e  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00404951  050c020000           ADD EAX,0x20c
00404956  50                   PUSH EAX
00404957  ffd6                 CALL ESI
00404959  a1fc384100           MOV EAX,[0x004138fc]
0040495e  8b0d84384100         MOV ECX,dword ptr [0x00413884]
00404964  57                   PUSH EDI
00404965  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00404968  050c030000           ADD EAX,0x30c
0040496d  50                   PUSH EAX
0040496e  ffd6                 CALL ESI
00404970  a184384100           MOV EAX,[0x00413884]
00404975  8b0dfc384100         MOV ECX,dword ptr [0x004138fc]
0040497b  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
0040497e  8d880c030000         LEA ECX,[EAX + 0x30c]
00404984  050c050000           ADD EAX,0x50c
00404989  51                   PUSH ECX
0040498a  50                   PUSH EAX
0040498b  ffd6                 CALL ESI
0040498d  ff0584384100         INC dword ptr [0x00413884]
00404993  e9cd130000           JMP 0x00405d65
00404998  57                   PUSH EDI
00404999  050c050000           ADD EAX,0x50c
0040499e  e9ee010000           JMP 0x00404b91
004049a3  6a0e                 PUSH 0xe
004049a5  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
004049ab  6878034100           PUSH 0x410378
004049b0  50                   PUSH EAX
004049b1  e8aa920000           CALL 0x0040dc60
004049b6  83c40c               ADD ESP,0xc
004049b9  85c0                 TEST EAX,EAX
004049bb  0f842b0b0000         JZ 0x004054ec
004049c1  6a11                 PUSH 0x11
004049c3  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
004049c9  6864034100           PUSH 0x410364
004049ce  50                   PUSH EAX
004049cf  e88c920000           CALL 0x0040dc60
004049d4  83c40c               ADD ESP,0xc
004049d7  85c0                 TEST EAX,EAX
004049d9  0f840d0b0000         JZ 0x004054ec
004049df  6a0c                 PUSH 0xc
004049e1  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
004049e7  6854034100           PUSH 0x410354
004049ec  50                   PUSH EAX
004049ed  e86e920000           CALL 0x0040dc60
004049f2  83c40c               ADD ESP,0xc
004049f5  85c0                 TEST EAX,EAX
004049f7  0f85a2010000         JNZ 0x00404b9f
004049fd  8d85d8f7ffff         LEA EAX,[EBP + 0xfffff7d8]
00404a03  50                   PUSH EAX
00404a04  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
00404a0a  50                   PUSH EAX
00404a0b  ffd6                 CALL ESI
00404a0d  57                   PUSH EDI
00404a0e  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00404a14  ff7508               PUSH dword ptr [EBP + 0x8]
00404a17  53                   PUSH EBX
00404a18  50                   PUSH EAX
00404a19  e8e3130000           CALL 0x00405e01
00404a1e  83c410               ADD ESP,0x10
00404a21  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00404a27  6a0b                 PUSH 0xb
00404a29  6848034100           PUSH 0x410348
00404a2e  50                   PUSH EAX
00404a2f  e82c920000           CALL 0x0040dc60
00404a34  83c40c               ADD ESP,0xc
00404a37  85c0                 TEST EAX,EAX
00404a39  0f8558010000         JNZ 0x00404b97
00404a3f  8d85d7f7ffff         LEA EAX,[EBP + 0xfffff7d7]
00404a45  50                   PUSH EAX
00404a46  8d85c8efffff         LEA EAX,[EBP + 0xffffefc8]
00404a4c  50                   PUSH EAX
00404a4d  ffd6                 CALL ESI
00404a4f  57                   PUSH EDI
00404a50  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00404a56  ff7508               PUSH dword ptr [EBP + 0x8]
00404a59  53                   PUSH EBX
00404a5a  50                   PUSH EAX
00404a5b  e8a1130000           CALL 0x00405e01
00404a60  83c410               ADD ESP,0x10
00404a63  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00404a69  6a0a                 PUSH 0xa
00404a6b  683c034100           PUSH 0x41033c
00404a70  50                   PUSH EAX
00404a71  e8ea910000           CALL 0x0040dc60
00404a76  83c40c               ADD ESP,0xc
00404a79  85c0                 TEST EAX,EAX
00404a7b  0f8516010000         JNZ 0x00404b97
00404a81  33ff                 XOR EDI,EDI
00404a83  3b3d44384100         CMP EDI,dword ptr [0x00413844]
00404a89  7d4b                 JGE 0x00404ad6
00404a8b  8b1d38e14000         MOV EBX,dword ptr [0x0040e138]
00404a91  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
00404a97  50                   PUSH EAX
00404a98  a198384100           MOV EAX,[0x00413898]
00404a9d  ff34b8               PUSH dword ptr [EAX + EDI*0x4]
00404aa0  ffd3                 CALL EBX
00404aa2  85c0                 TEST EAX,EAX
00404aa4  751b                 JNZ 0x00404ac1
00404aa6  8d85c8efffff         LEA EAX,[EBP + 0xffffefc8]
00404aac  50                   PUSH EAX
00404aad  a198384100           MOV EAX,[0x00413898]
00404ab2  8b04b8               MOV EAX,dword ptr [EAX + EDI*0x4]
00404ab5  0500010000           ADD EAX,0x100
00404aba  50                   PUSH EAX
00404abb  ffd3                 CALL EBX
00404abd  85c0                 TEST EAX,EAX
00404abf  7409                 JZ 0x00404aca
00404ac1  47                   INC EDI
00404ac2  3b3d44384100         CMP EDI,dword ptr [0x00413844]
00404ac8  7cc7                 JL 0x00404a91
00404aca  3b3d44384100         CMP EDI,dword ptr [0x00413844]
00404ad0  0f8ca7000000         JL 0x00404b7d
00404ad6  6808030000           PUSH 0x308
00404adb  e8034e0000           CALL 0x004098e3
00404ae0  8b1544384100         MOV EDX,dword ptr [0x00413844]
00404ae6  59                   POP ECX
00404ae7  8b0d98384100         MOV ECX,dword ptr [0x00413898]
00404aed  890491               MOV dword ptr [ECX + EDX*0x4],EAX
00404af0  a198384100           MOV EAX,[0x00413898]
00404af5  8b0d44384100         MOV ECX,dword ptr [0x00413844]
00404afb  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00404afe  83a00003000000       AND dword ptr [EAX + 0x300],0x0
00404b05  a198384100           MOV EAX,[0x00413898]
00404b0a  8b0d44384100         MOV ECX,dword ptr [0x00413844]
00404b10  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00404b13  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
00404b1a  66898804030000       MOV word ptr [EAX + 0x304],CX
00404b21  8b0d44384100         MOV ECX,dword ptr [0x00413844]
00404b27  8d85c8efffff         LEA EAX,[EBP + 0xffffefc8]
00404b2d  50                   PUSH EAX
00404b2e  a198384100           MOV EAX,[0x00413898]
00404b33  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00404b36  0500010000           ADD EAX,0x100
00404b3b  50                   PUSH EAX
00404b3c  ffd6                 CALL ESI
00404b3e  8b0d44384100         MOV ECX,dword ptr [0x00413844]
00404b44  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
00404b4a  50                   PUSH EAX
00404b4b  a198384100           MOV EAX,[0x00413898]
00404b50  ff3488               PUSH dword ptr [EAX + ECX*0x4]
00404b53  ffd6                 CALL ESI
00404b55  8b0d98384100         MOV ECX,dword ptr [0x00413898]
00404b5b  8d85d6f7ffff         LEA EAX,[EBP + 0xfffff7d6]
00404b61  50                   PUSH EAX
00404b62  a144384100           MOV EAX,[0x00413844]
00404b67  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00404b6a  0500020000           ADD EAX,0x200
00404b6f  50                   PUSH EAX
00404b70  ffd6                 CALL ESI
00404b72  ff0544384100         INC dword ptr [0x00413844]
00404b78  e9e8110000           JMP 0x00405d65
00404b7d  8d85d6f7ffff         LEA EAX,[EBP + 0xfffff7d6]
00404b83  50                   PUSH EAX
00404b84  a198384100           MOV EAX,[0x00413898]
00404b89  8b04b8               MOV EAX,dword ptr [EAX + EDI*0x4]
00404b8c  0500020000           ADD EAX,0x200
00404b91  50                   PUSH EAX
00404b92  e9f3060000           JMP 0x0040528a
00404b97  897df4               MOV dword ptr [EBP + -0xc],EDI
00404b9a  e9c6110000           JMP 0x00405d65
00404b9f  6a0c                 PUSH 0xc
00404ba1  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00404ba7  682c034100           PUSH 0x41032c
00404bac  50                   PUSH EAX
00404bad  e8ae900000           CALL 0x0040dc60
00404bb2  83c40c               ADD ESP,0xc
00404bb5  85c0                 TEST EAX,EAX
00404bb7  752f                 JNZ 0x00404be8
00404bb9  8d85d7f7ffff         LEA EAX,[EBP + 0xfffff7d7]
00404bbf  50                   PUSH EAX
00404bc0  ff1540e14000         CALL dword ptr [0x0040e140]
00404bc6  40                   INC EAX
00404bc7  50                   PUSH EAX
00404bc8  e8164d0000           CALL 0x004098e3
00404bcd  59                   POP ECX
00404bce  a3f0384100           MOV [0x004138f0],EAX
00404bd3  8d8dd7f7ffff         LEA ECX,[EBP + 0xfffff7d7]
00404bd9  51                   PUSH ECX
00404bda  50                   PUSH EAX
00404bdb  ffd6                 CALL ESI
00404bdd  893d4c384100         MOV dword ptr [0x0041384c],EDI
00404be3  e97d110000           JMP 0x00405d65
00404be8  6a0a                 PUSH 0xa
00404bea  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00404bf0  6820034100           PUSH 0x410320
00404bf5  50                   PUSH EAX
00404bf6  e865900000           CALL 0x0040dc60
00404bfb  83c40c               ADD ESP,0xc
00404bfe  85c0                 TEST EAX,EAX
00404c00  0f852b020000         JNZ 0x00404e31
00404c06  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00404c0c  68cc004100           PUSH 0x4100cc
00404c11  50                   PUSH EAX
00404c12  ff15f8e04000         CALL dword ptr [0x0040e0f8]
00404c18  8d85d6f7ffff         LEA EAX,[EBP + 0xfffff7d6]
00404c1e  50                   PUSH EAX
00404c1f  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
00404c25  50                   PUSH EAX
00404c26  ffd6                 CALL ESI
00404c28  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
00404c2e  57                   PUSH EDI
00404c2f  50                   PUSH EAX
00404c30  e8043e0000           CALL 0x00408a39
00404c35  8b3d40e14000         MOV EDI,dword ptr [0x0040e140]
00404c3b  59                   POP ECX
00404c3c  59                   POP ECX
00404c3d  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
00404c43  50                   PUSH EAX
00404c44  ffd7                 CALL EDI
00404c46  8b5d0c               MOV EBX,dword ptr [EBP + 0xc]
00404c49  50                   PUSH EAX
00404c4a  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
00404c50  53                   PUSH EBX
00404c51  50                   PUSH EAX
00404c52  e809900000           CALL 0x0040dc60
00404c57  83c40c               ADD ESP,0xc
00404c5a  85c0                 TEST EAX,EAX
00404c5c  750d                 JNZ 0x00404c6b
00404c5e  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
00404c64  50                   PUSH EAX
00404c65  ffd7                 CALL EDI
00404c67  80241800             AND byte ptr [EAX + EBX*0x1],0x0
00404c6b  8d85d6f7ffff         LEA EAX,[EBP + 0xfffff7d6]
00404c71  50                   PUSH EAX
00404c72  ff1540e14000         CALL dword ptr [0x0040e140]
00404c78  8bd8                 MOV EBX,EAX
00404c7a  83fb03               CMP EBX,0x3
00404c7d  0f8ee2100000         JLE 0x00405d65
00404c83  80bdd6f7ffff5c       CMP byte ptr [EBP + 0xfffff7d6],0x5c
00404c8a  7509                 JNZ 0x00404c95
00404c8c  80bdd7f7ffff5c       CMP byte ptr [EBP + 0xfffff7d7],0x5c
00404c93  7457                 JZ 0x00404cec
00404c95  833d3c10410001       CMP dword ptr [0x0041103c],0x1
00404c9c  7e16                 JLE 0x00404cb4
00404c9e  0fbe85d6f7ffff       MOVSX EAX,byte ptr [EBP + 0xfffff7d6]
00404ca5  6803010000           PUSH 0x103
00404caa  50                   PUSH EAX
00404cab  e800570000           CALL 0x0040a3b0
00404cb0  59                   POP ECX
00404cb1  59                   POP ECX
00404cb2  eb16                 JMP 0x00404cca
00404cb4  0fbe85d6f7ffff       MOVSX EAX,byte ptr [EBP + 0xfffff7d6]
00404cbb  8b0d300e4100         MOV ECX,dword ptr [0x00410e30]
00404cc1  668b0441             MOV AX,word ptr [ECX + EAX*0x2]
00404cc5  2503010000           AND EAX,0x103
00404cca  85c0                 TEST EAX,EAX
00404ccc  0f8493100000         JZ 0x00405d65
00404cd2  80bdd7f7ffff3a       CMP byte ptr [EBP + 0xfffff7d7],0x3a
00404cd9  0f8586100000         JNZ 0x00405d65
00404cdf  80bdd8f7ffff5c       CMP byte ptr [EBP + 0xfffff7d8],0x5c
00404ce6  0f8579100000         JNZ 0x00405d65
00404cec  33ff                 XOR EDI,EDI
00404cee  3b3dc83c4100         CMP EDI,dword ptr [0x00413cc8]
00404cf4  7d55                 JGE 0x00404d4b
00404cf6  a16c384100           MOV EAX,[0x0041386c]
00404cfb  ff34b8               PUSH dword ptr [EAX + EDI*0x4]
00404cfe  ff1540e14000         CALL dword ptr [0x0040e140]
00404d04  3bd8                 CMP EBX,EAX
00404d06  7d04                 JGE 0x00404d0c
00404d08  8bc3                 MOV EAX,EBX
00404d0a  eb0e                 JMP 0x00404d1a
00404d0c  a16c384100           MOV EAX,[0x0041386c]
00404d11  ff34b8               PUSH dword ptr [EAX + EDI*0x4]
00404d14  ff1540e14000         CALL dword ptr [0x0040e140]
00404d1a  50                   PUSH EAX
00404d1b  a16c384100           MOV EAX,[0x0041386c]
00404d20  ff34b8               PUSH dword ptr [EAX + EDI*0x4]
00404d23  8d85d6f7ffff         LEA EAX,[EBP + 0xfffff7d6]
00404d29  50                   PUSH EAX
00404d2a  e8318f0000           CALL 0x0040dc60
00404d2f  83c40c               ADD ESP,0xc
00404d32  85c0                 TEST EAX,EAX
00404d34  7409                 JZ 0x00404d3f
00404d36  47                   INC EDI
00404d37  3b3dc83c4100         CMP EDI,dword ptr [0x00413cc8]
00404d3d  7cb7                 JL 0x00404cf6
00404d3f  3b3dc83c4100         CMP EDI,dword ptr [0x00413cc8]
00404d45  0f8ca5000000         JL 0x00404df0
00404d4b  680c010000           PUSH 0x10c
00404d50  e88e4b0000           CALL 0x004098e3
00404d55  8b15c83c4100         MOV EDX,dword ptr [0x00413cc8]
00404d5b  59                   POP ECX
00404d5c  8b0d6c384100         MOV ECX,dword ptr [0x0041386c]
00404d62  890491               MOV dword ptr [ECX + EDX*0x4],EAX
00404d65  a16c384100           MOV EAX,[0x0041386c]
00404d6a  8b0dc83c4100         MOV ECX,dword ptr [0x00413cc8]
00404d70  8b0c88               MOV ECX,dword ptr [EAX + ECX*0x4]
00404d73  33c0                 XOR EAX,EAX
00404d75  898104010000         MOV dword ptr [ECX + 0x104],EAX
00404d7b  8b0d6c384100         MOV ECX,dword ptr [0x0041386c]
00404d81  8b15c83c4100         MOV EDX,dword ptr [0x00413cc8]
00404d87  8b0c91               MOV ECX,dword ptr [ECX + EDX*0x4]
00404d8a  66898108010000       MOV word ptr [ECX + 0x108],AX
00404d91  8b0d6c384100         MOV ECX,dword ptr [0x0041386c]
00404d97  8b15c83c4100         MOV EDX,dword ptr [0x00413cc8]
00404d9d  8b0c91               MOV ECX,dword ptr [ECX + EDX*0x4]
00404da0  668b15d43c4100       MOV DX,word ptr [0x00413cd4]
00404da7  6689910a010000       MOV word ptr [ECX + 0x10a],DX
00404dae  39057c384100         CMP dword ptr [0x0041387c],EAX
00404db4  741a                 JZ 0x00404dd0
00404db6  8b0dc83c4100         MOV ECX,dword ptr [0x00413cc8]
00404dbc  8d85d6f7ffff         LEA EAX,[EBP + 0xfffff7d6]
00404dc2  50                   PUSH EAX
00404dc3  a16c384100           MOV EAX,[0x0041386c]
00404dc8  ff3488               PUSH dword ptr [EAX + ECX*0x4]
00404dcb  e9e8010000           JMP 0x00404fb8
00404dd0  a16c384100           MOV EAX,[0x0041386c]
00404dd5  8b0dc83c4100         MOV ECX,dword ptr [0x00413cc8]
00404ddb  ff3488               PUSH dword ptr [EAX + ECX*0x4]
00404dde  8d85d6f7ffff         LEA EAX,[EBP + 0xfffff7d6]
00404de4  50                   PUSH EAX
00404de5  ff15ece24000         CALL dword ptr [0x0040e2ec]
00404deb  e9ca010000           JMP 0x00404fba
00404df0  a16c384100           MOV EAX,[0x0041386c]
00404df5  c1e702               SHL EDI,0x2
00404df8  ff3438               PUSH dword ptr [EAX + EDI*0x1]
00404dfb  ff1540e14000         CALL dword ptr [0x0040e140]
00404e01  3bd8                 CMP EBX,EAX
00404e03  7d04                 JGE 0x00404e09
00404e05  8bc3                 MOV EAX,EBX
00404e07  eb0e                 JMP 0x00404e17
00404e09  a16c384100           MOV EAX,[0x0041386c]
00404e0e  ff3438               PUSH dword ptr [EAX + EDI*0x1]
00404e11  ff1540e14000         CALL dword ptr [0x0040e140]
00404e17  8b0d6c384100         MOV ECX,dword ptr [0x0041386c]
00404e1d  8b0c39               MOV ECX,dword ptr [ECX + EDI*0x1]
00404e20  80240100             AND byte ptr [ECX + EAX*0x1],0x0
00404e24  a16c384100           MOV EAX,[0x0041386c]
00404e29  8b0438               MOV EAX,dword ptr [EAX + EDI*0x1]
00404e2c  e9b9010000           JMP 0x00404fea
00404e31  6a0b                 PUSH 0xb
00404e33  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00404e39  6814034100           PUSH 0x410314
00404e3e  50                   PUSH EAX
00404e3f  e81c8e0000           CALL 0x0040dc60
00404e44  83c40c               ADD ESP,0xc
00404e47  85c0                 TEST EAX,EAX
00404e49  0f85ae010000         JNZ 0x00404ffd
00404e4f  8b1d40e14000         MOV EBX,dword ptr [0x0040e140]
00404e55  8d85d7f7ffff         LEA EAX,[EBP + 0xfffff7d7]
00404e5b  50                   PUSH EAX
00404e5c  ffd3                 CALL EBX
00404e5e  8dbc05d3f7ffff       LEA EDI,[EBP + EAX*0x1 + 0xfffff7d3]
00404e65  680c034100           PUSH 0x41030c
00404e6a  57                   PUSH EDI
00404e6b  ff1534e14000         CALL dword ptr [0x0040e134]
00404e71  85c0                 TEST EAX,EAX
00404e73  7502                 JNZ 0x00404e77
00404e75  2007                 AND byte ptr [EDI],AL
00404e77  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00404e7d  68cc004100           PUSH 0x4100cc
00404e82  50                   PUSH EAX
00404e83  ff15f8e04000         CALL dword ptr [0x0040e0f8]
00404e89  8d85d7f7ffff         LEA EAX,[EBP + 0xfffff7d7]
00404e8f  50                   PUSH EAX
00404e90  ffd3                 CALL EBX
00404e92  83f803               CMP EAX,0x3
00404e95  0f8eca0e0000         JLE 0x00405d65
00404e9b  80bdd7f7ffff5c       CMP byte ptr [EBP + 0xfffff7d7],0x5c
00404ea2  7509                 JNZ 0x00404ead
00404ea4  80bdd8f7ffff5c       CMP byte ptr [EBP + 0xfffff7d8],0x5c
00404eab  7457                 JZ 0x00404f04
00404ead  833d3c10410001       CMP dword ptr [0x0041103c],0x1
00404eb4  7e16                 JLE 0x00404ecc
00404eb6  0fbe85d7f7ffff       MOVSX EAX,byte ptr [EBP + 0xfffff7d7]
00404ebd  6803010000           PUSH 0x103
00404ec2  50                   PUSH EAX
00404ec3  e8e8540000           CALL 0x0040a3b0
00404ec8  59                   POP ECX
00404ec9  59                   POP ECX
00404eca  eb16                 JMP 0x00404ee2
00404ecc  0fbe85d7f7ffff       MOVSX EAX,byte ptr [EBP + 0xfffff7d7]
00404ed3  8b0d300e4100         MOV ECX,dword ptr [0x00410e30]
00404ed9  668b0441             MOV AX,word ptr [ECX + EAX*0x2]
00404edd  2503010000           AND EAX,0x103
00404ee2  85c0                 TEST EAX,EAX
00404ee4  0f847b0e0000         JZ 0x00405d65
00404eea  80bdd8f7ffff3a       CMP byte ptr [EBP + 0xfffff7d8],0x3a
00404ef1  0f856e0e0000         JNZ 0x00405d65
00404ef7  80bdd9f7ffff5c       CMP byte ptr [EBP + 0xfffff7d9],0x5c
00404efe  0f85610e0000         JNZ 0x00405d65
00404f04  33ff                 XOR EDI,EDI
00404f06  393dc83c4100         CMP dword ptr [0x00413cc8],EDI
00404f0c  7e22                 JLE 0x00404f30
00404f0e  a16c384100           MOV EAX,[0x0041386c]
00404f13  ff34b8               PUSH dword ptr [EAX + EDI*0x4]
00404f16  8d85d7f7ffff         LEA EAX,[EBP + 0xfffff7d7]
00404f1c  50                   PUSH EAX
00404f1d  ff1538e14000         CALL dword ptr [0x0040e138]
00404f23  85c0                 TEST EAX,EAX
00404f25  7409                 JZ 0x00404f30
00404f27  47                   INC EDI
00404f28  3b3dc83c4100         CMP EDI,dword ptr [0x00413cc8]
00404f2e  7cde                 JL 0x00404f0e
00404f30  3b3dc83c4100         CMP EDI,dword ptr [0x00413cc8]
00404f36  0f8c89000000         JL 0x00404fc5
00404f3c  680c010000           PUSH 0x10c
00404f41  e89d490000           CALL 0x004098e3
00404f46  8b15c83c4100         MOV EDX,dword ptr [0x00413cc8]
00404f4c  59                   POP ECX
00404f4d  8b0d6c384100         MOV ECX,dword ptr [0x0041386c]
00404f53  890491               MOV dword ptr [ECX + EDX*0x4],EAX
00404f56  a16c384100           MOV EAX,[0x0041386c]
00404f5b  8b0dc83c4100         MOV ECX,dword ptr [0x00413cc8]
00404f61  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00404f64  83a00401000000       AND dword ptr [EAX + 0x104],0x0
00404f6b  a16c384100           MOV EAX,[0x0041386c]
00404f70  8b0dc83c4100         MOV ECX,dword ptr [0x00413cc8]
00404f76  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00404f79  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
00404f80  66898808010000       MOV word ptr [EAX + 0x108],CX
00404f87  a16c384100           MOV EAX,[0x0041386c]
00404f8c  8b0dc83c4100         MOV ECX,dword ptr [0x00413cc8]
00404f92  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00404f95  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
00404f9c  6689880a010000       MOV word ptr [EAX + 0x10a],CX
00404fa3  8b0d6c384100         MOV ECX,dword ptr [0x0041386c]
00404fa9  8d85d7f7ffff         LEA EAX,[EBP + 0xfffff7d7]
00404faf  50                   PUSH EAX
00404fb0  a1c83c4100           MOV EAX,[0x00413cc8]
00404fb5  ff3481               PUSH dword ptr [ECX + EAX*0x4]
00404fb8  ffd6                 CALL ESI
00404fba  ff05c83c4100         INC dword ptr [0x00413cc8]
00404fc0  e9a00d0000           JMP 0x00405d65
00404fc5  8b0d6c384100         MOV ECX,dword ptr [0x0041386c]
00404fcb  668b15d43c4100       MOV DX,word ptr [0x00413cd4]
00404fd2  8bc7                 MOV EAX,EDI
00404fd4  c1e002               SHL EAX,0x2
00404fd7  8b0c01               MOV ECX,dword ptr [ECX + EAX*0x1]
00404fda  66899108010000       MOV word ptr [ECX + 0x108],DX
00404fe1  8b0d6c384100         MOV ECX,dword ptr [0x0041386c]
00404fe7  8b0401               MOV EAX,dword ptr [ECX + EAX*0x1]
00404fea  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
00404ff1  6689880a010000       MOV word ptr [EAX + 0x10a],CX
00404ff8  e9680d0000           JMP 0x00405d65
00404ffd  6a0c                 PUSH 0xc
00404fff  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00405005  68fc024100           PUSH 0x4102fc
0040500a  50                   PUSH EAX
0040500b  e8508c0000           CALL 0x0040dc60
00405010  83c40c               ADD ESP,0xc
00405013  85c0                 TEST EAX,EAX
00405015  0f854b010000         JNZ 0x00405166
0040501b  8d85d8f7ffff         LEA EAX,[EBP + 0xfffff7d8]
00405021  50                   PUSH EAX
00405022  8d85c8efffff         LEA EAX,[EBP + 0xffffefc8]
00405028  50                   PUSH EAX
00405029  ffd6                 CALL ESI
0040502b  33ff                 XOR EDI,EDI
0040502d  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00405033  57                   PUSH EDI
00405034  897df4               MOV dword ptr [EBP + -0xc],EDI
00405037  ff7508               PUSH dword ptr [EBP + 0x8]
0040503a  53                   PUSH EBX
0040503b  50                   PUSH EAX
0040503c  e8c00d0000           CALL 0x00405e01
00405041  83c410               ADD ESP,0x10
00405044  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
0040504a  6a0c                 PUSH 0xc
0040504c  683c044100           PUSH 0x41043c
00405051  50                   PUSH EAX
00405052  e8098c0000           CALL 0x0040dc60
00405057  83c40c               ADD ESP,0xc
0040505a  85c0                 TEST EAX,EAX
0040505c  7524                 JNZ 0x00405082
0040505e  8d85d8f7ffff         LEA EAX,[EBP + 0xfffff7d8]
00405064  50                   PUSH EAX
00405065  e886540000           CALL 0x0040a4f0
0040506a  59                   POP ECX
0040506b  8bf8                 MOV EDI,EAX
0040506d  6a00                 PUSH 0x0
0040506f  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00405075  ff7508               PUSH dword ptr [EBP + 0x8]
00405078  53                   PUSH EBX
00405079  50                   PUSH EAX
0040507a  e8820d0000           CALL 0x00405e01
0040507f  83c410               ADD ESP,0x10
00405082  33db                 XOR EBX,EBX
00405084  3b1d443c4100         CMP EBX,dword ptr [0x00413c44]
0040508a  7d3e                 JGE 0x004050ca
0040508c  a110394100           MOV EAX,[0x00413910]
00405091  ff3498               PUSH dword ptr [EAX + EBX*0x4]
00405094  8d85c8efffff         LEA EAX,[EBP + 0xffffefc8]
0040509a  50                   PUSH EAX
0040509b  ff1538e14000         CALL dword ptr [0x0040e138]
004050a1  85c0                 TEST EAX,EAX
004050a3  7510                 JNZ 0x004050b5
004050a5  a110394100           MOV EAX,[0x00413910]
004050aa  8b0498               MOV EAX,dword ptr [EAX + EBX*0x4]
004050ad  3bb800010000         CMP EDI,dword ptr [EAX + 0x100]
004050b3  7409                 JZ 0x004050be
004050b5  43                   INC EBX
004050b6  3b1d443c4100         CMP EBX,dword ptr [0x00413c44]
004050bc  7cce                 JL 0x0040508c
004050be  3b1d443c4100         CMP EBX,dword ptr [0x00413c44]
004050c4  0f8c81000000         JL 0x0040514b
004050ca  680c010000           PUSH 0x10c
004050cf  e80f480000           CALL 0x004098e3
004050d4  8b15443c4100         MOV EDX,dword ptr [0x00413c44]
004050da  59                   POP ECX
004050db  8b0d10394100         MOV ECX,dword ptr [0x00413910]
004050e1  890491               MOV dword ptr [ECX + EDX*0x4],EAX
004050e4  a110394100           MOV EAX,[0x00413910]
004050e9  8b0d443c4100         MOV ECX,dword ptr [0x00413c44]
004050ef  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
004050f2  83a00401000000       AND dword ptr [EAX + 0x104],0x0
004050f9  a110394100           MOV EAX,[0x00413910]
004050fe  8b0d443c4100         MOV ECX,dword ptr [0x00413c44]
00405104  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00405107  89b800010000         MOV dword ptr [EAX + 0x100],EDI
0040510d  a110394100           MOV EAX,[0x00413910]
00405112  8b0d443c4100         MOV ECX,dword ptr [0x00413c44]
00405118  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
0040511b  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
00405122  66898808010000       MOV word ptr [EAX + 0x108],CX
00405129  8b0d10394100         MOV ECX,dword ptr [0x00413910]
0040512f  8d85c8efffff         LEA EAX,[EBP + 0xffffefc8]
00405135  50                   PUSH EAX
00405136  a1443c4100           MOV EAX,[0x00413c44]
0040513b  ff3481               PUSH dword ptr [ECX + EAX*0x4]
0040513e  ffd6                 CALL ESI
00405140  ff05443c4100         INC dword ptr [0x00413c44]
00405146  e91a0c0000           JMP 0x00405d65
0040514b  a110394100           MOV EAX,[0x00413910]
00405150  8b0498               MOV EAX,dword ptr [EAX + EBX*0x4]
00405153  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
0040515a  66898808010000       MOV word ptr [EAX + 0x108],CX
00405161  e9ff0b0000           JMP 0x00405d65
00405166  6a04                 PUSH 0x4
00405168  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
0040516e  6810054100           PUSH 0x410510
00405173  50                   PUSH EAX
00405174  e8e78a0000           CALL 0x0040dc60
00405179  83c40c               ADD ESP,0xc
0040517c  85c0                 TEST EAX,EAX
0040517e  7541                 JNZ 0x004051c1
00405180  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00405186  50                   PUSH EAX
00405187  ff1540e14000         CALL dword ptr [0x0040e140]
0040518d  8b0de0384100         MOV ECX,dword ptr [0x004138e0]
00405193  8b15c4384100         MOV EDX,dword ptr [0x004138c4]
00405199  03ca                 ADD ECX,EDX
0040519b  2bc8                 SUB ECX,EAX
0040519d  33c0                 XOR EAX,EAX
0040519f  49                   DEC ECX
004051a0  66ff05d43c4100       INC word ptr [0x00413cd4]
004051a7  80bdd0f7ffff20       CMP byte ptr [EBP + 0xfffff7d0],0x20
004051ae  890de8384100         MOV dword ptr [0x004138e8],ECX
004051b4  0f94c0               SETZ AL
004051b7  a37c384100           MOV [0x0041387c],EAX
004051bc  e9a40b0000           JMP 0x00405d65
004051c1  6a0f                 PUSH 0xf
004051c3  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
004051c9  68ec024100           PUSH 0x4102ec
004051ce  50                   PUSH EAX
004051cf  e88c8a0000           CALL 0x0040dc60
004051d4  83c40c               ADD ESP,0xc
004051d7  85c0                 TEST EAX,EAX
004051d9  7511                 JNZ 0x004051ec
004051db  8d85dbf7ffff         LEA EAX,[EBP + 0xfffff7db]
004051e1  50                   PUSH EAX
004051e2  6820394100           PUSH 0x413920
004051e7  e99e000000           JMP 0x0040528a
004051ec  6a0e                 PUSH 0xe
004051ee  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
004051f4  68dc024100           PUSH 0x4102dc
004051f9  50                   PUSH EAX
004051fa  e8618a0000           CALL 0x0040dc60
004051ff  83c40c               ADD ESP,0xc
00405202  85c0                 TEST EAX,EAX
00405204  750e                 JNZ 0x00405214
00405206  8d85daf7ffff         LEA EAX,[EBP + 0xfffff7da]
0040520c  50                   PUSH EAX
0040520d  68a0394100           PUSH 0x4139a0
00405212  eb76                 JMP 0x0040528a
00405214  6a09                 PUSH 0x9
00405216  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
0040521c  68d0024100           PUSH 0x4102d0
00405221  50                   PUSH EAX
00405222  e8398a0000           CALL 0x0040dc60
00405227  83c40c               ADD ESP,0xc
0040522a  85c0                 TEST EAX,EAX
0040522c  750e                 JNZ 0x0040523c
0040522e  8d85d5f7ffff         LEA EAX,[EBP + 0xfffff7d5]
00405234  50                   PUSH EAX
00405235  68203a4100           PUSH 0x413a20
0040523a  eb4e                 JMP 0x0040528a
0040523c  6a10                 PUSH 0x10
0040523e  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00405244  68bc024100           PUSH 0x4102bc
00405249  50                   PUSH EAX
0040524a  e8118a0000           CALL 0x0040dc60
0040524f  83c40c               ADD ESP,0xc
00405252  85c0                 TEST EAX,EAX
00405254  750e                 JNZ 0x00405264
00405256  8d85dcf7ffff         LEA EAX,[EBP + 0xfffff7dc]
0040525c  50                   PUSH EAX
0040525d  68a03a4100           PUSH 0x413aa0
00405262  eb26                 JMP 0x0040528a
00405264  6a0f                 PUSH 0xf
00405266  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
0040526c  68ac024100           PUSH 0x4102ac
00405271  50                   PUSH EAX
00405272  e8e9890000           CALL 0x0040dc60
00405277  83c40c               ADD ESP,0xc
0040527a  85c0                 TEST EAX,EAX
0040527c  7513                 JNZ 0x00405291
0040527e  8d85dbf7ffff         LEA EAX,[EBP + 0xfffff7db]
00405284  50                   PUSH EAX
00405285  68203b4100           PUSH 0x413b20
0040528a  ffd6                 CALL ESI
0040528c  e9d40a0000           JMP 0x00405d65
00405291  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00405297  6898024100           PUSH 0x410298
0040529c  50                   PUSH EAX
0040529d  e86e8a0000           CALL 0x0040dd10
004052a2  59                   POP ECX
004052a3  85c0                 TEST EAX,EAX
004052a5  59                   POP ECX
004052a6  753f                 JNZ 0x004052e7
004052a8  397ddc               CMP dword ptr [EBP + -0x24],EDI
004052ab  0f85b40a0000         JNZ 0x00405d65
004052b1  833d3438410001       CMP dword ptr [0x00413834],0x1
004052b8  0f85a70a0000         JNZ 0x00405d65
004052be  6a01                 PUSH 0x1
004052c0  33db                 XOR EBX,EBX
004052c2  5f                   POP EDI
004052c3  68000000e0           PUSH 0xe0000000
004052c8  53                   PUSH EBX
004052c9  53                   PUSH EBX
004052ca  897ddc               MOV dword ptr [EBP + -0x24],EDI
004052cd  ff1514e04000         CALL dword ptr [0x0040e014]
004052d3  3bc3                 CMP EAX,EBX
004052d5  0f84a90a0000         JZ 0x00405d84
004052db  50                   PUSH EAX
004052dc  ff1510e04000         CALL dword ptr [0x0040e010]
004052e2  e97e0a0000           JMP 0x00405d65
004052e7  6a0d                 PUSH 0xd
004052e9  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
004052ef  6888024100           PUSH 0x410288
004052f4  50                   PUSH EAX
004052f5  e866890000           CALL 0x0040dc60
004052fa  83c40c               ADD ESP,0xc
004052fd  85c0                 TEST EAX,EAX
004052ff  0f8577010000         JNZ 0x0040547c
00405305  6800010000           PUSH 0x100
0040530a  e8d4450000           CALL 0x004098e3
0040530f  59                   POP ECX
00405310  a3d8384100           MOV [0x004138d8],EAX
00405315  8d8dd9f7ffff         LEA ECX,[EBP + 0xfffff7d9]
0040531b  51                   PUSH ECX
0040531c  50                   PUSH EAX
0040531d  ffd6                 CALL ESI
0040531f  393d5c384100         CMP dword ptr [0x0041385c],EDI
00405325  0f843a0a0000         JZ 0x00405d65
0040532b  8b3d0ce04000         MOV EDI,dword ptr [0x0040e00c]
00405331  8d45ec               LEA EAX,[EBP + -0x14]
00405334  50                   PUSH EAX
00405335  6a13                 PUSH 0x13
00405337  bb44024100           MOV EBX,0x410244
0040533c  6a00                 PUSH 0x0
0040533e  53                   PUSH EBX
0040533f  6801000080           PUSH 0x80000001
00405344  ffd7                 CALL EDI
00405346  85c0                 TEST EAX,EAX
00405348  0f858f000000         JNZ 0x004053dd
0040534e  8d45f0               LEA EAX,[EBP + -0x10]
00405351  c745f000010000       MOV dword ptr [EBP + -0x10],0x100
00405358  50                   PUSH EAX
00405359  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
0040535f  50                   PUSH EAX
00405360  8d45cc               LEA EAX,[EBP + -0x34]
00405363  50                   PUSH EAX
00405364  6a00                 PUSH 0x0
00405366  6838024100           PUSH 0x410238
0040536b  ff75ec               PUSH dword ptr [EBP + -0x14]
0040536e  ff1508e04000         CALL dword ptr [0x0040e008]
00405374  85c0                 TEST EAX,EAX
00405376  755c                 JNZ 0x004053d4
00405378  3885ccf4ffff         CMP byte ptr [EBP + 0xfffff4cc],AL
0040537e  7454                 JZ 0x004053d4
00405380  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
00405386  50                   PUSH EAX
00405387  8d85c8f2ffff         LEA EAX,[EBP + 0xfffff2c8]
0040538d  50                   PUSH EAX
0040538e  ffd6                 CALL ESI
00405390  8d85c8f2ffff         LEA EAX,[EBP + 0xfffff2c8]
00405396  50                   PUSH EAX
00405397  ff1540e14000         CALL dword ptr [0x0040e140]
0040539d  8d8405c8f2ffff       LEA EAX,[EBP + EAX*0x1 + 0xfffff2c8]
004053a4  8d8dc8f2ffff         LEA ECX,[EBP + 0xfffff2c8]
004053aa  3bc1                 CMP EAX,ECX
004053ac  7608                 JBE 0x004053b6
004053ae  80385c               CMP byte ptr [EAX],0x5c
004053b1  7403                 JZ 0x004053b6
004053b3  48                   DEC EAX
004053b4  ebee                 JMP 0x004053a4
004053b6  8d8dc8f2ffff         LEA ECX,[EBP + 0xfffff2c8]
004053bc  3bc1                 CMP EAX,ECX
004053be  7601                 JBE 0x004053c1
004053c0  48                   DEC EAX
004053c1  8d8dc8f2ffff         LEA ECX,[EBP + 0xfffff2c8]
004053c7  3bc1                 CMP EAX,ECX
004053c9  7605                 JBE 0x004053d0
004053cb  80385c               CMP byte ptr [EAX],0x5c
004053ce  75f0                 JNZ 0x004053c0
004053d0  80600100             AND byte ptr [EAX + 0x1],0x0
004053d4  ff75ec               PUSH dword ptr [EBP + -0x14]
004053d7  ff1504e04000         CALL dword ptr [0x0040e004]
004053dd  833d3438410001       CMP dword ptr [0x00413834],0x1
004053e4  0f857b090000         JNZ 0x00405d65
004053ea  8d45ec               LEA EAX,[EBP + -0x14]
004053ed  50                   PUSH EAX
004053ee  6a13                 PUSH 0x13
004053f0  6a00                 PUSH 0x0
004053f2  53                   PUSH EBX
004053f3  6802000080           PUSH 0x80000002
004053f8  ffd7                 CALL EDI
004053fa  85c0                 TEST EAX,EAX
004053fc  0f8563090000         JNZ 0x00405d65
00405402  8d45f0               LEA EAX,[EBP + -0x10]
00405405  c745f000010000       MOV dword ptr [EBP + -0x10],0x100
0040540c  50                   PUSH EAX
0040540d  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
00405413  50                   PUSH EAX
00405414  8d45d4               LEA EAX,[EBP + -0x2c]
00405417  50                   PUSH EAX
00405418  6a00                 PUSH 0x0
0040541a  6824024100           PUSH 0x410224
0040541f  ff75ec               PUSH dword ptr [EBP + -0x14]
00405422  ff1508e04000         CALL dword ptr [0x0040e008]
00405428  85c0                 TEST EAX,EAX
0040542a  7542                 JNZ 0x0040546e
0040542c  3885ccf4ffff         CMP byte ptr [EBP + 0xfffff4cc],AL
00405432  743a                 JZ 0x0040546e
00405434  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
0040543a  50                   PUSH EAX
0040543b  8d85c4edffff         LEA EAX,[EBP + 0xffffedc4]
00405441  50                   PUSH EAX
00405442  ffd6                 CALL ESI
00405444  8d85c4edffff         LEA EAX,[EBP + 0xffffedc4]
0040544a  50                   PUSH EAX
0040544b  ff1540e14000         CALL dword ptr [0x0040e140]
00405451  8d8405c4edffff       LEA EAX,[EBP + EAX*0x1 + 0xffffedc4]
00405458  8d8dc4edffff         LEA ECX,[EBP + 0xffffedc4]
0040545e  3bc1                 CMP EAX,ECX
00405460  7608                 JBE 0x0040546a
00405462  80385c               CMP byte ptr [EAX],0x5c
00405465  7403                 JZ 0x0040546a
00405467  48                   DEC EAX
00405468  ebee                 JMP 0x00405458
0040546a  80600100             AND byte ptr [EAX + 0x1],0x0
0040546e  ff75ec               PUSH dword ptr [EBP + -0x14]
00405471  ff1504e04000         CALL dword ptr [0x0040e004]
00405477  e9e9080000           JMP 0x00405d65
0040547c  6a15                 PUSH 0x15
0040547e  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00405484  680c024100           PUSH 0x41020c
00405489  50                   PUSH EAX
0040548a  e8d1870000           CALL 0x0040dc60
0040548f  83c40c               ADD ESP,0xc
00405492  85c0                 TEST EAX,EAX
00405494  0f85cb080000         JNZ 0x00405d65
0040549a  6a02                 PUSH 0x2
0040549c  8d85e1f7ffff         LEA EAX,[EBP + 0xfffff7e1]
004054a2  6808024100           PUSH 0x410208
004054a7  50                   PUSH EAX
004054a8  e8b3870000           CALL 0x0040dc60
004054ad  83c40c               ADD ESP,0xc
004054b0  85c0                 TEST EAX,EAX
004054b2  750f                 JNZ 0x004054c3
004054b4  c705ec38410001000000 MOV dword ptr [0x004138ec],0x1
004054be  e9a2080000           JMP 0x00405d65
004054c3  6a02                 PUSH 0x2
004054c5  8d85e1f7ffff         LEA EAX,[EBP + 0xfffff7e1]
004054cb  6804024100           PUSH 0x410204
004054d0  50                   PUSH EAX
004054d1  e88a870000           CALL 0x0040dc60
004054d6  83c40c               ADD ESP,0xc
004054d9  85c0                 TEST EAX,EAX
004054db  0f8584080000         JNZ 0x00405d65
004054e1  2105ec384100         AND dword ptr [0x004138ec],EAX
004054e7  e979080000           JMP 0x00405d65
004054ec  33c0                 XOR EAX,EAX
004054ee  80bdd5f7ffff72       CMP byte ptr [EBP + 0xfffff7d5],0x72
004054f5  0f95c0               SETNZ AL
004054f8  48                   DEC EAX
004054f9  33db                 XOR EBX,EBX
004054fb  83e003               AND EAX,0x3
004054fe  83c00e               ADD EAX,0xe
00405501  3b1dd83b4100         CMP EBX,dword ptr [0x00413bd8]
00405507  8bf8                 MOV EDI,EAX
00405509  7d2f                 JGE 0x0040553a
0040550b  a1a4384100           MOV EAX,[0x004138a4]
00405510  ff3498               PUSH dword ptr [EAX + EBX*0x4]
00405513  8d843dccf7ffff       LEA EAX,[EBP + EDI*0x1 + 0xfffff7cc]
0040551a  50                   PUSH EAX
0040551b  ff1538e14000         CALL dword ptr [0x0040e138]
00405521  85c0                 TEST EAX,EAX
00405523  7409                 JZ 0x0040552e
00405525  43                   INC EBX
00405526  3b1dd83b4100         CMP EBX,dword ptr [0x00413bd8]
0040552c  7cdd                 JL 0x0040550b
0040552e  3b1dd83b4100         CMP EBX,dword ptr [0x00413bd8]
00405534  0f8cd7000000         JL 0x00405611
0040553a  680c020000           PUSH 0x20c
0040553f  e89f430000           CALL 0x004098e3
00405544  8b15d83b4100         MOV EDX,dword ptr [0x00413bd8]
0040554a  59                   POP ECX
0040554b  8b0da4384100         MOV ECX,dword ptr [0x004138a4]
00405551  33db                 XOR EBX,EBX
00405553  890491               MOV dword ptr [ECX + EDX*0x4],EAX
00405556  a1a4384100           MOV EAX,[0x004138a4]
0040555b  8b0dd83b4100         MOV ECX,dword ptr [0x00413bd8]
00405561  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00405564  899804020000         MOV dword ptr [EAX + 0x204],EBX
0040556a  a1a4384100           MOV EAX,[0x004138a4]
0040556f  8b0dd83b4100         MOV ECX,dword ptr [0x00413bd8]
00405575  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00405578  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
0040557f  66898808020000       MOV word ptr [EAX + 0x208],CX
00405586  8b0dd83b4100         MOV ECX,dword ptr [0x00413bd8]
0040558c  8d843dccf7ffff       LEA EAX,[EBP + EDI*0x1 + 0xfffff7cc]
00405593  50                   PUSH EAX
00405594  a1a4384100           MOV EAX,[0x004138a4]
00405599  ff3488               PUSH dword ptr [EAX + ECX*0x4]
0040559c  ffd6                 CALL ESI
0040559e  a1d83b4100           MOV EAX,[0x00413bd8]
004055a3  8b0da4384100         MOV ECX,dword ptr [0x004138a4]
004055a9  53                   PUSH EBX
004055aa  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
004055ad  ff7508               PUSH dword ptr [EBP + 0x8]
004055b0  209804010000         AND byte ptr [EAX + 0x104],BL
004055b6  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
004055bc  6800080000           PUSH 0x800
004055c1  50                   PUSH EAX
004055c2  e83a080000           CALL 0x00405e01
004055c7  83c410               ADD ESP,0x10
004055ca  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
004055d0  6a0e                 PUSH 0xe
004055d2  68f4014100           PUSH 0x4101f4
004055d7  50                   PUSH EAX
004055d8  e883860000           CALL 0x0040dc60
004055dd  83c40c               ADD ESP,0xc
004055e0  85c0                 TEST EAX,EAX
004055e2  751f                 JNZ 0x00405603
004055e4  8b0da4384100         MOV ECX,dword ptr [0x004138a4]
004055ea  8d85daf7ffff         LEA EAX,[EBP + 0xfffff7da]
004055f0  50                   PUSH EAX
004055f1  a1d83b4100           MOV EAX,[0x00413bd8]
004055f6  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
004055f9  0504010000           ADD EAX,0x104
004055fe  50                   PUSH EAX
004055ff  ffd6                 CALL ESI
00405601  eb03                 JMP 0x00405606
00405603  895df4               MOV dword ptr [EBP + -0xc],EBX
00405606  ff05d83b4100         INC dword ptr [0x00413bd8]
0040560c  e954070000           JMP 0x00405d65
00405611  a1a4384100           MOV EAX,[0x004138a4]
00405616  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
0040561d  8b0498               MOV EAX,dword ptr [EAX + EBX*0x4]
00405620  66898808020000       MOV word ptr [EAX + 0x208],CX
00405627  e939070000           JMP 0x00405d65
0040562c  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00405632  6a7c                 PUSH 0x7c
00405634  50                   PUSH EAX
00405635  897dfc               MOV dword ptr [EBP + -0x4],EDI
00405638  e8b34a0000           CALL 0x0040a0f0
0040563d  59                   POP ECX
0040563e  3bc7                 CMP EAX,EDI
00405640  59                   POP ECX
00405641  740e                 JZ 0x00405651
00405643  8078ff20             CMP byte ptr [EAX + -0x1],0x20
00405647  8d48ff               LEA ECX,[EAX + -0x1]
0040564a  7502                 JNZ 0x0040564e
0040564c  8bc1                 MOV EAX,ECX
0040564e  802000               AND byte ptr [EAX],0x0
00405651  80bdccf7ffff53       CMP byte ptr [EBP + 0xfffff7cc],0x53
00405658  0f8580000000         JNZ 0x004056de
0040565e  8d85d8f7ffff         LEA EAX,[EBP + 0xfffff7d8]
00405664  50                   PUSH EAX
00405665  8d85ccf6ffff         LEA EAX,[EBP + 0xfffff6cc]
0040566b  50                   PUSH EAX
0040566c  ffd6                 CALL ESI
0040566e  393dd8384100         CMP dword ptr [0x004138d8],EDI
00405674  0f84f1000000         JZ 0x0040576b
0040567a  8d85c8f2ffff         LEA EAX,[EBP + 0xfffff2c8]
00405680  50                   PUSH EAX
00405681  ff1540e14000         CALL dword ptr [0x0040e140]
00405687  50                   PUSH EAX
00405688  8d85c8f2ffff         LEA EAX,[EBP + 0xfffff2c8]
0040568e  50                   PUSH EAX
0040568f  8d85ccf6ffff         LEA EAX,[EBP + 0xfffff6cc]
00405695  50                   PUSH EAX
00405696  e8c5850000           CALL 0x0040dc60
0040569b  83c40c               ADD ESP,0xc
0040569e  85c0                 TEST EAX,EAX
004056a0  0f85c5000000         JNZ 0x0040576b
004056a6  8d85c4edffff         LEA EAX,[EBP + 0xffffedc4]
004056ac  50                   PUSH EAX
004056ad  ff1540e14000         CALL dword ptr [0x0040e140]
004056b3  50                   PUSH EAX
004056b4  8d85c4edffff         LEA EAX,[EBP + 0xffffedc4]
004056ba  50                   PUSH EAX
004056bb  8d85ccf6ffff         LEA EAX,[EBP + 0xfffff6cc]
004056c1  50                   PUSH EAX
004056c2  e899850000           CALL 0x0040dc60
004056c7  83c40c               ADD ESP,0xc
004056ca  85c0                 TEST EAX,EAX
004056cc  0f8499000000         JZ 0x0040576b
004056d2  80a5ccf6ffff00       AND byte ptr [EBP + 0xfffff6cc],0x0
004056d9  e98d000000           JMP 0x0040576b
004056de  80bdd1f7ffff43       CMP byte ptr [EBP + 0xfffff7d1],0x43
004056e5  7512                 JNZ 0x004056f9
004056e7  8d85d7f7ffff         LEA EAX,[EBP + 0xfffff7d7]
004056ed  50                   PUSH EAX
004056ee  8d85ccf6ffff         LEA EAX,[EBP + 0xfffff6cc]
004056f4  50                   PUSH EAX
004056f5  ffd6                 CALL ESI
004056f7  eb72                 JMP 0x0040576b
004056f9  8d85dcf7ffff         LEA EAX,[EBP + 0xfffff7dc]
004056ff  50                   PUSH EAX
00405700  8d85ccf6ffff         LEA EAX,[EBP + 0xfffff6cc]
00405706  50                   PUSH EAX
00405707  ffd6                 CALL ESI
00405709  393d5c384100         CMP dword ptr [0x0041385c],EDI
0040570f  c745fc01000000       MOV dword ptr [EBP + -0x4],0x1
00405716  7453                 JZ 0x0040576b
00405718  8d45e0               LEA EAX,[EBP + -0x20]
0040571b  50                   PUSH EAX
0040571c  6a1f                 PUSH 0x1f
0040571e  57                   PUSH EDI
0040571f  ff354c004100         PUSH dword ptr [0x0041004c]
00405725  6802000080           PUSH 0x80000002
0040572a  ff150ce04000         CALL dword ptr [0x0040e00c]
00405730  85c0                 TEST EAX,EAX
00405732  7537                 JNZ 0x0040576b
00405734  8d45d8               LEA EAX,[EBP + -0x28]
00405737  c745d800010000       MOV dword ptr [EBP + -0x28],0x100
0040573e  50                   PUSH EAX
0040573f  8d85c0e9ffff         LEA EAX,[EBP + 0xffffe9c0]
00405745  50                   PUSH EAX
00405746  8d45d0               LEA EAX,[EBP + -0x30]
00405749  50                   PUSH EAX
0040574a  8d85ccf6ffff         LEA EAX,[EBP + 0xfffff6cc]
00405750  57                   PUSH EDI
00405751  50                   PUSH EAX
00405752  ff75e0               PUSH dword ptr [EBP + -0x20]
00405755  ff1508e04000         CALL dword ptr [0x0040e008]
0040575b  85c0                 TEST EAX,EAX
0040575d  7503                 JNZ 0x00405762
0040575f  897dfc               MOV dword ptr [EBP + -0x4],EDI
00405762  ff75e0               PUSH dword ptr [EBP + -0x20]
00405765  ff1504e04000         CALL dword ptr [0x0040e004]
0040576b  57                   PUSH EDI
0040576c  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
00405772  ff7508               PUSH dword ptr [EBP + 0x8]
00405775  53                   PUSH EBX
00405776  50                   PUSH EAX
00405777  e885060000           CALL 0x00405e01
0040577c  80a5ccf3ffff00       AND byte ptr [EBP + 0xfffff3cc],0x0
00405783  83c410               ADD ESP,0x10
00405786  8d85ccf7ffff         LEA EAX,[EBP + 0xfffff7cc]
0040578c  6a0d                 PUSH 0xd
0040578e  6814044100           PUSH 0x410414
00405793  50                   PUSH EAX
00405794  e8c7840000           CALL 0x0040dc60
00405799  83c40c               ADD ESP,0xc
0040579c  85c0                 TEST EAX,EAX
0040579e  751c                 JNZ 0x004057bc
004057a0  8d85d9f7ffff         LEA EAX,[EBP + 0xfffff7d9]
004057a6  50                   PUSH EAX
004057a7  8d85ccf3ffff         LEA EAX,[EBP + 0xfffff3cc]
004057ad  50                   PUSH EAX
004057ae  ffd6                 CALL ESI
004057b0  c705d43b410001000000 MOV dword ptr [0x00413bd4],0x1
004057ba  eb03                 JMP 0x004057bf
004057bc  897df4               MOV dword ptr [EBP + -0xc],EDI
004057bf  6a02                 PUSH 0x2
004057c1  8d85ccf6ffff         LEA EAX,[EBP + 0xfffff6cc]
004057c7  5b                   POP EBX
004057c8  53                   PUSH EBX
004057c9  6810044100           PUSH 0x410410
004057ce  50                   PUSH EAX
004057cf  e88c840000           CALL 0x0040dc60
004057d4  83c40c               ADD ESP,0xc
004057d7  85c0                 TEST EAX,EAX
004057d9  750b                 JNZ 0x004057e6
004057db  395de8               CMP dword ptr [EBP + -0x18],EBX
004057de  0f8481050000         JZ 0x00405d65
004057e4  33ff                 XOR EDI,EDI
004057e6  53                   PUSH EBX
004057e7  8d85ccf6ffff         LEA EAX,[EBP + 0xfffff6cc]
004057ed  680c044100           PUSH 0x41040c
004057f2  50                   PUSH EAX
004057f3  e868840000           CALL 0x0040dc60
004057f8  83c40c               ADD ESP,0xc
004057fb  85c0                 TEST EAX,EAX
004057fd  750b                 JNZ 0x0040580a
004057ff  395de4               CMP dword ptr [EBP + -0x1c],EBX
00405802  0f845d050000         JZ 0x00405d65
00405808  33ff                 XOR EDI,EDI
0040580a  397dfc               CMP dword ptr [EBP + -0x4],EDI
0040580d  740d                 JZ 0x0040581c
0040580f  80bdccf3ffff00       CMP byte ptr [EBP + 0xfffff3cc],0x0
00405816  0f8449050000         JZ 0x00405d65
0040581c  80bdccf6ffff00       CMP byte ptr [EBP + 0xfffff6cc],0x0
00405823  0f843c050000         JZ 0x00405d65
00405829  8d85ccf6ffff         LEA EAX,[EBP + 0xfffff6cc]
0040582f  6a00                 PUSH 0x0
00405831  50                   PUSH EAX
00405832  e896330000           CALL 0x00408bcd
00405837  59                   POP ECX
00405838  85c0                 TEST EAX,EAX
0040583a  59                   POP ECX
0040583b  0f8524050000         JNZ 0x00405d65
00405841  8d85ccf6ffff         LEA EAX,[EBP + 0xfffff6cc]
00405847  50                   PUSH EAX
00405848  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
0040584e  50                   PUSH EAX
0040584f  ffd6                 CALL ESI
00405851  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
00405857  50                   PUSH EAX
00405858  ff1540e14000         CALL dword ptr [0x0040e140]
0040585e  8d8405cbf4ffff       LEA EAX,[EBP + EAX*0x1 + 0xfffff4cb]
00405865  8d8dccf4ffff         LEA ECX,[EBP + 0xfffff4cc]
0040586b  3bc1                 CMP EAX,ECX
0040586d  760b                 JBE 0x0040587a
0040586f  80385c               CMP byte ptr [EAX],0x5c
00405872  740b                 JZ 0x0040587f
00405874  802000               AND byte ptr [EAX],0x0
00405877  48                   DEC EAX
00405878  ebeb                 JMP 0x00405865
0040587a  80385c               CMP byte ptr [EAX],0x5c
0040587d  7503                 JNZ 0x00405882
0040587f  802000               AND byte ptr [EAX],0x0
00405882  8b3d38e14000         MOV EDI,dword ptr [0x0040e138]
00405888  8d85b4e7ffff         LEA EAX,[EBP + 0xffffe7b4]
0040588e  50                   PUSH EAX
0040588f  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
00405895  50                   PUSH EAX
00405896  ffd7                 CALL EDI
00405898  85c0                 TEST EAX,EAX
0040589a  0f8468020000         JZ 0x00405b08
004058a0  8d85c0eaffff         LEA EAX,[EBP + 0xffffeac0]
004058a6  50                   PUSH EAX
004058a7  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
004058ad  50                   PUSH EAX
004058ae  ffd7                 CALL EDI
004058b0  85c0                 TEST EAX,EAX
004058b2  0f8450020000         JZ 0x00405b08
004058b8  ff359c384100         PUSH dword ptr [0x0041389c]
004058be  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
004058c4  50                   PUSH EAX
004058c5  ffd7                 CALL EDI
004058c7  85c0                 TEST EAX,EAX
004058c9  0f8439020000         JZ 0x00405b08
004058cf  8d85b8e8ffff         LEA EAX,[EBP + 0xffffe8b8]
004058d5  50                   PUSH EAX
004058d6  8d85ccf4ffff         LEA EAX,[EBP + 0xfffff4cc]
004058dc  50                   PUSH EAX
004058dd  ffd7                 CALL EDI
004058df  85c0                 TEST EAX,EAX
004058e1  0f8421020000         JZ 0x00405b08
004058e7  8b0dec3b4100         MOV ECX,dword ptr [0x00413bec]
004058ed  33db                 XOR EBX,EBX
004058ef  53                   PUSH EBX
004058f0  8d85ccf6ffff         LEA EAX,[EBP + 0xfffff6cc]
004058f6  53                   PUSH EBX
004058f7  50                   PUSH EAX
004058f8  a158384100           MOV EAX,[0x00413858]
004058fd  51                   PUSH ECX
004058fe  6828020000           PUSH 0x228
00405903  ff30                 PUSH dword ptr [EAX]
00405905  8d0488               LEA EAX,[EAX + ECX*0x4]
00405908  50                   PUSH EAX
00405909  e8ec400000           CALL 0x004099fa
0040590e  8bf8                 MOV EDI,EAX
00405910  83c41c               ADD ESP,0x1c
00405913  3bfb                 CMP EDI,EBX
00405915  0f8599010000         JNZ 0x00405ab4
0040591b  a1ec3b4100           MOV EAX,[0x00413bec]
00405920  8b0d58384100         MOV ECX,dword ptr [0x00413858]
00405926  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00405929  899810020000         MOV dword ptr [EAX + 0x210],EBX
0040592f  391d7c384100         CMP dword ptr [0x0041387c],EBX
00405935  741d                 JZ 0x00405954
00405937  8b0d58384100         MOV ECX,dword ptr [0x00413858]
0040593d  8d85ccf6ffff         LEA EAX,[EBP + 0xfffff6cc]
00405943  50                   PUSH EAX
00405944  a1ec3b4100           MOV EAX,[0x00413bec]
00405949  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
0040594c  83c008               ADD EAX,0x8
0040594f  50                   PUSH EAX
00405950  ffd6                 CALL ESI
00405952  eb1f                 JMP 0x00405973
00405954  a1ec3b4100           MOV EAX,[0x00413bec]
00405959  8b0d58384100         MOV ECX,dword ptr [0x00413858]
0040595f  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00405962  83c008               ADD EAX,0x8
00405965  50                   PUSH EAX
00405966  8d85ccf6ffff         LEA EAX,[EBP + 0xfffff6cc]
0040596c  50                   PUSH EAX
0040596d  ff15ece24000         CALL dword ptr [0x0040e2ec]
00405973  391d7c384100         CMP dword ptr [0x0041387c],EBX
00405979  741f                 JZ 0x0040599a
0040597b  8b0d58384100         MOV ECX,dword ptr [0x00413858]
00405981  8d85ccf3ffff         LEA EAX,[EBP + 0xfffff3cc]
00405987  50                   PUSH EAX
00405988  a1ec3b4100           MOV EAX,[0x00413bec]
0040598d  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00405990  050c010000           ADD EAX,0x10c
00405995  50                   PUSH EAX
00405996  ffd6                 CALL ESI
00405998  eb21                 JMP 0x004059bb
0040599a  a1ec3b4100           MOV EAX,[0x00413bec]
0040599f  8b0d58384100         MOV ECX,dword ptr [0x00413858]
004059a5  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
004059a8  050c010000           ADD EAX,0x10c
004059ad  50                   PUSH EAX
004059ae  8d85ccf3ffff         LEA EAX,[EBP + 0xfffff3cc]
004059b4  50                   PUSH EAX
004059b5  ff15ece24000         CALL dword ptr [0x0040e2ec]
004059bb  a158384100           MOV EAX,[0x00413858]
004059c0  8b0dec3b4100         MOV ECX,dword ptr [0x00413bec]
004059c6  395df8               CMP dword ptr [EBP + -0x8],EBX
004059c9  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
004059cc  6689981a020000       MOV word ptr [EAX + 0x21a],BX
004059d3  a158384100           MOV EAX,[0x00413858]
004059d8  8b0dec3b4100         MOV ECX,dword ptr [0x00413bec]
004059de  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
004059e1  66899818020000       MOV word ptr [EAX + 0x218],BX
004059e8  a158384100           MOV EAX,[0x00413858]
004059ed  8b0dec3b4100         MOV ECX,dword ptr [0x00413bec]
004059f3  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
004059f6  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
004059fd  6689881c020000       MOV word ptr [EAX + 0x21c],CX
00405a04  a1ec3b4100           MOV EAX,[0x00413bec]
00405a09  8b0d58384100         MOV ECX,dword ptr [0x00413858]
00405a0f  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00405a12  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
00405a19  6689881e020000       MOV word ptr [EAX + 0x21e],CX
00405a20  7536                 JNZ 0x00405a58
00405a22  a158384100           MOV EAX,[0x00413858]
00405a27  8b0dec3b4100         MOV ECX,dword ptr [0x00413bec]
00405a2d  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00405a30  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
00405a37  66898820020000       MOV word ptr [EAX + 0x220],CX
00405a3e  a1ec3b4100           MOV EAX,[0x00413bec]
00405a43  8b0d58384100         MOV ECX,dword ptr [0x00413858]
00405a49  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00405a4c  c7802402000001000000 MOV dword ptr [EAX + 0x224],0x1
00405a56  eb15                 JMP 0x00405a6d
00405a58  a1ec3b4100           MOV EAX,[0x00413bec]
00405a5d  8b0d58384100         MOV ECX,dword ptr [0x00413858]
00405a63  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00405a66  66899820020000       MOV word ptr [EAX + 0x220],BX
00405a6d  395dfc               CMP dword ptr [EBP + -0x4],EBX
00405a70  7523                 JNZ 0x00405a95
00405a72  80bdccf3ffff00       CMP byte ptr [EBP + 0xfffff3cc],0x0
00405a79  751a                 JNZ 0x00405a95
00405a7b  a1ec3b4100           MOV EAX,[0x00413bec]
00405a80  8b0d58384100         MOV ECX,dword ptr [0x00413858]
00405a86  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00405a89  c7801402000001000000 MOV dword ptr [EAX + 0x214],0x1
00405a93  eb14                 JMP 0x00405aa9
00405a95  a1ec3b4100           MOV EAX,[0x00413bec]
00405a9a  8b0d58384100         MOV ECX,dword ptr [0x00413858]
00405aa0  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00405aa3  899814020000         MOV dword ptr [EAX + 0x214],EBX
00405aa9  ff05ec3b4100         INC dword ptr [0x00413bec]
00405aaf  e9b1020000           JMP 0x00405d65
00405ab4  66a1d43c4100         MOV AX,[0x00413cd4]
00405aba  395df8               CMP dword ptr [EBP + -0x8],EBX
00405abd  6689871c020000       MOV word ptr [EDI + 0x21c],AX
00405ac4  7513                 JNZ 0x00405ad9
00405ac6  66a1d43c4100         MOV AX,[0x00413cd4]
00405acc  ff8724020000         INC dword ptr [EDI + 0x224]
00405ad2  66898720020000       MOV word ptr [EDI + 0x220],AX
00405ad9  80bdccf3ffff00       CMP byte ptr [EBP + 0xfffff3cc],0x0
00405ae0  0f847f020000         JZ 0x00405d65
00405ae6  8d85ccf3ffff         LEA EAX,[EBP + 0xfffff3cc]
00405aec  50                   PUSH EAX
00405aed  8d870c010000         LEA EAX,[EDI + 0x10c]
00405af3  50                   PUSH EAX
00405af4  ffd6                 CALL ESI
00405af6  66a1d43c4100         MOV AX,[0x00413cd4]
00405afc  6689871e020000       MOV word ptr [EDI + 0x21e],AX
00405b03  e95d020000           JMP 0x00405d65
00405b08  33db                 XOR EBX,EBX
00405b0a  33ff                 XOR EDI,EDI
00405b0c  391dc0384100         CMP dword ptr [0x004138c0],EBX
00405b12  7e22                 JLE 0x00405b36
00405b14  a14c3c4100           MOV EAX,[0x00413c4c]
00405b19  ff34b8               PUSH dword ptr [EAX + EDI*0x4]
00405b1c  8d85ccf6ffff         LEA EAX,[EBP + 0xfffff6cc]
00405b22  50                   PUSH EAX
00405b23  ff1538e14000         CALL dword ptr [0x0040e138]
00405b29  85c0                 TEST EAX,EAX
00405b2b  7409                 JZ 0x00405b36
00405b2d  47                   INC EDI
00405b2e  3b3dc0384100         CMP EDI,dword ptr [0x004138c0]
00405b34  7cde                 JL 0x00405b14
00405b36  3b3dc0384100         CMP EDI,dword ptr [0x004138c0]
00405b3c  0f8cab010000         JL 0x00405ced
00405b42  6820020000           PUSH 0x220
00405b47  e8973d0000           CALL 0x004098e3
00405b4c  8b15c0384100         MOV EDX,dword ptr [0x004138c0]
00405b52  59                   POP ECX
00405b53  8b0d4c3c4100         MOV ECX,dword ptr [0x00413c4c]
00405b59  890491               MOV dword ptr [ECX + EDX*0x4],EAX
00405b5c  a1c0384100           MOV EAX,[0x004138c0]
00405b61  8b0d4c3c4100         MOV ECX,dword ptr [0x00413c4c]
00405b67  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00405b6a  8b4df0               MOV ECX,dword ptr [EBP + -0x10]
00405b6d  898808020000         MOV dword ptr [EAX + 0x208],ECX
00405b73  391d7c384100         CMP dword ptr [0x0041387c],EBX
00405b79  7419                 JZ 0x00405b94
00405b7b  8b0d4c3c4100         MOV ECX,dword ptr [0x00413c4c]
00405b81  8d85ccf6ffff         LEA EAX,[EBP + 0xfffff6cc]
00405b87  50                   PUSH EAX
00405b88  a1c0384100           MOV EAX,[0x004138c0]
00405b8d  ff3481               PUSH dword ptr [ECX + EAX*0x4]
00405b90  ffd6                 CALL ESI
00405b92  eb1b                 JMP 0x00405baf
00405b94  a1c0384100           MOV EAX,[0x004138c0]
00405b99  8b0d4c3c4100         MOV ECX,dword ptr [0x00413c4c]
00405b9f  ff3481               PUSH dword ptr [ECX + EAX*0x4]
00405ba2  8d85ccf6ffff         LEA EAX,[EBP + 0xfffff6cc]
00405ba8  50                   PUSH EAX
00405ba9  ff15ece24000         CALL dword ptr [0x0040e2ec]
00405baf  391d7c384100         CMP dword ptr [0x0041387c],EBX
00405bb5  741f                 JZ 0x00405bd6
00405bb7  8b0d4c3c4100         MOV ECX,dword ptr [0x00413c4c]
00405bbd  8d85ccf3ffff         LEA EAX,[EBP + 0xfffff3cc]
00405bc3  50                   PUSH EAX
00405bc4  a1c0384100           MOV EAX,[0x004138c0]
00405bc9  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00405bcc  0504010000           ADD EAX,0x104
00405bd1  50                   PUSH EAX
00405bd2  ffd6                 CALL ESI
00405bd4  eb21                 JMP 0x00405bf7
00405bd6  a1c0384100           MOV EAX,[0x004138c0]
00405bdb  8b0d4c3c4100         MOV ECX,dword ptr [0x00413c4c]
00405be1  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00405be4  0504010000           ADD EAX,0x104
00405be9  50                   PUSH EAX
00405bea  8d85ccf3ffff         LEA EAX,[EBP + 0xfffff3cc]
00405bf0  50                   PUSH EAX
00405bf1  ff15ece24000         CALL dword ptr [0x0040e2ec]
00405bf7  a14c3c4100           MOV EAX,[0x00413c4c]
00405bfc  8b0dc0384100         MOV ECX,dword ptr [0x004138c0]
00405c02  395df8               CMP dword ptr [EBP + -0x8],EBX
00405c05  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00405c08  66899812020000       MOV word ptr [EAX + 0x212],BX
00405c0f  a14c3c4100           MOV EAX,[0x00413c4c]
00405c14  8b0dc0384100         MOV ECX,dword ptr [0x004138c0]
00405c1a  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00405c1d  66899810020000       MOV word ptr [EAX + 0x210],BX
00405c24  a14c3c4100           MOV EAX,[0x00413c4c]
00405c29  8b0dc0384100         MOV ECX,dword ptr [0x004138c0]
00405c2f  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00405c32  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
00405c39  66898814020000       MOV word ptr [EAX + 0x214],CX
00405c40  a1c0384100           MOV EAX,[0x004138c0]
00405c45  8b0d4c3c4100         MOV ECX,dword ptr [0x00413c4c]
00405c4b  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00405c4e  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
00405c55  66898816020000       MOV word ptr [EAX + 0x216],CX
00405c5c  7536                 JNZ 0x00405c94
00405c5e  a14c3c4100           MOV EAX,[0x00413c4c]
00405c63  8b0dc0384100         MOV ECX,dword ptr [0x004138c0]
00405c69  8b0488               MOV EAX,dword ptr [EAX + ECX*0x4]
00405c6c  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
00405c73  66898818020000       MOV word ptr [EAX + 0x218],CX
00405c7a  a1c0384100           MOV EAX,[0x004138c0]
00405c7f  8b0d4c3c4100         MOV ECX,dword ptr [0x00413c4c]
00405c85  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00405c88  c7801c02000001000000 MOV dword ptr [EAX + 0x21c],0x1
00405c92  eb15                 JMP 0x00405ca9
00405c94  a1c0384100           MOV EAX,[0x004138c0]
00405c99  8b0d4c3c4100         MOV ECX,dword ptr [0x00413c4c]
00405c9f  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00405ca2  66899818020000       MOV word ptr [EAX + 0x218],BX
00405ca9  395dfc               CMP dword ptr [EBP + -0x4],EBX
00405cac  7523                 JNZ 0x00405cd1
00405cae  80bdccf3ffff00       CMP byte ptr [EBP + 0xfffff3cc],0x0
00405cb5  751a                 JNZ 0x00405cd1
00405cb7  a1c0384100           MOV EAX,[0x004138c0]
00405cbc  8b0d4c3c4100         MOV ECX,dword ptr [0x00413c4c]
00405cc2  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00405cc5  c7800c02000001000000 MOV dword ptr [EAX + 0x20c],0x1
00405ccf  eb14                 JMP 0x00405ce5
00405cd1  a1c0384100           MOV EAX,[0x004138c0]
00405cd6  8b0d4c3c4100         MOV ECX,dword ptr [0x00413c4c]
00405cdc  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00405cdf  89980c020000         MOV dword ptr [EAX + 0x20c],EBX
00405ce5  ff05c0384100         INC dword ptr [0x004138c0]
00405ceb  eb78                 JMP 0x00405d65
00405ced  a14c3c4100           MOV EAX,[0x00413c4c]
00405cf2  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
00405cf9  c1e702               SHL EDI,0x2
00405cfc  395df8               CMP dword ptr [EBP + -0x8],EBX
00405cff  8b0438               MOV EAX,dword ptr [EAX + EDI*0x1]
00405d02  66898814020000       MOV word ptr [EAX + 0x214],CX
00405d09  7524                 JNZ 0x00405d2f
00405d0b  a14c3c4100           MOV EAX,[0x00413c4c]
00405d10  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
00405d17  8b0438               MOV EAX,dword ptr [EAX + EDI*0x1]
00405d1a  66898818020000       MOV word ptr [EAX + 0x218],CX
00405d21  a14c3c4100           MOV EAX,[0x00413c4c]
00405d26  8b0438               MOV EAX,dword ptr [EAX + EDI*0x1]
00405d29  ff801c020000         INC dword ptr [EAX + 0x21c]
00405d2f  80bdccf3ffff00       CMP byte ptr [EBP + 0xfffff3cc],0x0
00405d36  742d                 JZ 0x00405d65
00405d38  8d85ccf3ffff         LEA EAX,[EBP + 0xfffff3cc]
00405d3e  50                   PUSH EAX
00405d3f  a14c3c4100           MOV EAX,[0x00413c4c]
00405d44  8b0438               MOV EAX,dword ptr [EAX + EDI*0x1]
00405d47  0504010000           ADD EAX,0x104
00405d4c  50                   PUSH EAX
00405d4d  ffd6                 CALL ESI
00405d4f  a14c3c4100           MOV EAX,[0x00413c4c]
00405d54  668b0dd43c4100       MOV CX,word ptr [0x00413cd4]
00405d5b  8b0438               MOV EAX,dword ptr [EAX + EDI*0x1]
00405d5e  66898816020000       MOV word ptr [EAX + 0x216],CX
00405d65  837df400             CMP dword ptr [EBP + -0xc],0x0
00405d69  740f                 JZ 0x00405d7a
00405d6b  6a00                 PUSH 0x0
00405d6d  bb00080000           MOV EBX,0x800
00405d72  ff7508               PUSH dword ptr [EBP + 0x8]
00405d75  e90cdeffff           JMP 0x00403b86
00405d7a  bb00080000           MOV EBX,0x800
00405d7f  e912deffff           JMP 0x00403b96
00405d84  be00010000           MOV ESI,0x100
00405d89  8d85b4e5ffff         LEA EAX,[EBP + 0xffffe5b4]
00405d8f  56                   PUSH ESI
00405d90  50                   PUSH EAX
00405d91  6a19                 PUSH 0x19
00405d93  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00405d99  e895300000           CALL 0x00408e33
00405d9e  83c410               ADD ESP,0x10
00405da1  8d85b4e6ffff         LEA EAX,[EBP + 0xffffe6b4]
00405da7  56                   PUSH ESI
00405da8  50                   PUSH EAX
00405da9  6a43                 PUSH 0x43
00405dab  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00405db1  e87d300000           CALL 0x00408e33
00405db6  a11c384100           MOV EAX,[0x0041381c]
00405dbb  83c410               ADD ESP,0x10
00405dbe  3bc3                 CMP EAX,EBX
00405dc0  7407                 JZ 0x00405dc9
00405dc2  50                   PUSH EAX
00405dc3  ff15e8e24000         CALL dword ptr [0x0040e2e8]
00405dc9  8d85b4e5ffff         LEA EAX,[EBP + 0xffffe5b4]
00405dcf  53                   PUSH EBX
00405dd0  50                   PUSH EAX
00405dd1  8d85b4e6ffff         LEA EAX,[EBP + 0xffffe6b4]
00405dd7  50                   PUSH EAX
00405dd8  ff3520384100         PUSH dword ptr [0x00413820]
00405dde  ff1568e24000         CALL dword ptr [0x0040e268]
00405de4  ff7508               PUSH dword ptr [EBP + 0x8]
00405de7  ff1504e14000         CALL dword ptr [0x0040e104]
00405ded  8bc7                 MOV EAX,EDI
00405def  eb0b                 JMP 0x00405dfc
00405df1  ff7508               PUSH dword ptr [EBP + 0x8]
00405df4  ff1504e14000         CALL dword ptr [0x0040e104]
00405dfa  33c0                 XOR EAX,EAX
00405dfc  5f                   POP EDI
00405dfd  5e                   POP ESI
00405dfe  5b                   POP EBX
00405dff  c9                   LEAVE
00405e00  c3                   RET

; ==== FUNCTION FUN_00405e01 entry=00405e01 sig=undefined4 __cdecl FUN_00405e01(char * param_1, int param_2, HFILE param_3, int param_4)
00405e01  ff4c2408             DEC dword ptr [ESP + 0x8]
00405e05  53                   PUSH EBX
00405e06  55                   PUSH EBP
00405e07  8b6c240c             MOV EBP,dword ptr [ESP + 0xc]
00405e0b  56                   PUSH ESI
00405e0c  8b3524e14000         MOV ESI,dword ptr [0x0040e124]
00405e12  57                   PUSH EDI
00405e13  33db                 XOR EBX,EBX
00405e15  bf00400000           MOV EDI,0x4000
00405e1a  a1c4384100           MOV EAX,[0x004138c4]
00405e1f  3b05dc3b4100         CMP EAX,dword ptr [0x00413bdc]
00405e25  7c22                 JL 0x00405e49
00405e27  0105e0384100         ADD dword ptr [0x004138e0],EAX
00405e2d  57                   PUSH EDI
00405e2e  ff3508384100         PUSH dword ptr [0x00413808]
00405e34  891dc4384100         MOV dword ptr [0x004138c4],EBX
00405e3a  ff742424             PUSH dword ptr [ESP + 0x24]
00405e3e  ffd6                 CALL ESI
00405e40  3bc3                 CMP EAX,EBX
00405e42  a3dc3b4100           MOV [0x00413bdc],EAX
00405e47  7e45                 JLE 0x00405e8e
00405e49  a108384100           MOV EAX,[0x00413808]
00405e4e  8b0dc4384100         MOV ECX,dword ptr [0x004138c4]
00405e54  8a0401               MOV AL,byte ptr [ECX + EAX*0x1]
00405e57  3c0d                 CMP AL,0xd
00405e59  741f                 JZ 0x00405e7a
00405e5b  3c0a                 CMP AL,0xa
00405e5d  740e                 JZ 0x00405e6d
00405e5f  395c2418             CMP dword ptr [ESP + 0x18],EBX
00405e63  7e08                 JLE 0x00405e6d
00405e65  ff4c2418             DEC dword ptr [ESP + 0x18]
00405e69  884500               MOV byte ptr [EBP],AL
00405e6c  45                   INC EBP
00405e6d  a1c4384100           MOV EAX,[0x004138c4]
00405e72  40                   INC EAX
00405e73  a3c4384100           MOV [0x004138c4],EAX
00405e78  eba5                 JMP 0x00405e1f
00405e7a  ff05c4384100         INC dword ptr [0x004138c4]
00405e80  3b6c2414             CMP EBP,dword ptr [ESP + 0x14]
00405e84  750f                 JNZ 0x00405e95
00405e86  395c2420             CMP dword ptr [ESP + 0x20],EBX
00405e8a  7509                 JNZ 0x00405e95
00405e8c  eb8c                 JMP 0x00405e1a
00405e8e  885d00               MOV byte ptr [EBP],BL
00405e91  33c0                 XOR EAX,EAX
00405e93  eb06                 JMP 0x00405e9b
00405e95  6a01                 PUSH 0x1
00405e97  885d00               MOV byte ptr [EBP],BL
00405e9a  58                   POP EAX
00405e9b  5f                   POP EDI
00405e9c  5e                   POP ESI
00405e9d  5d                   POP EBP
00405e9e  5b                   POP EBX
00405e9f  c3                   RET

; ==== FUNCTION FUN_00405ea0 entry=00405ea0 sig=undefined __cdecl FUN_00405ea0(LPCSTR param_1)
00405ea0  81ecec0b0000         SUB ESP,0xbec
00405ea6  813d40384100e9030000 CMP dword ptr [0x00413840],0x3e9
00405eb0  53                   PUSH EBX
00405eb1  55                   PUSH EBP
00405eb2  56                   PUSH ESI
00405eb3  57                   PUSH EDI
00405eb4  c74424281d000000     MOV dword ptr [ESP + 0x28],0x1d
00405ebc  c744242c1e000000     MOV dword ptr [ESP + 0x2c],0x1e
00405ec4  c74424301f000000     MOV dword ptr [ESP + 0x30],0x1f
00405ecc  c744243420000000     MOV dword ptr [ESP + 0x34],0x20
00405ed4  c744243821000000     MOV dword ptr [ESP + 0x38],0x21
00405edc  c744243c22000000     MOV dword ptr [ESP + 0x3c],0x22
00405ee4  c744244023000000     MOV dword ptr [ESP + 0x40],0x23
00405eec  c744244424000000     MOV dword ptr [ESP + 0x44],0x24
00405ef4  c744244825000000     MOV dword ptr [ESP + 0x48],0x25
00405efc  c744244c28000000     MOV dword ptr [ESP + 0x4c],0x28
00405f04  c74424502c000000     MOV dword ptr [ESP + 0x50],0x2c
00405f0c  c744245438000000     MOV dword ptr [ESP + 0x54],0x38
00405f14  c744245839000000     MOV dword ptr [ESP + 0x58],0x39
00405f1c  c744245c3a000000     MOV dword ptr [ESP + 0x5c],0x3a
00405f24  7510                 JNZ 0x00405f36
00405f26  833dc838410000       CMP dword ptr [0x004138c8],0x0
00405f2d  7407                 JZ 0x00405f36
00405f2f  8325c838410000       AND dword ptr [0x004138c8],0x0
00405f36  833dc838410000       CMP dword ptr [0x004138c8],0x0
00405f3d  6a01                 PUSH 0x1
00405f3f  5b                   POP EBX
00405f40  740d                 JZ 0x00405f4f
00405f42  66a1d43c4100         MOV AX,[0x00413cd4]
00405f48  6689442410           MOV word ptr [ESP + 0x10],AX
00405f4d  eb04                 JMP 0x00405f53
00405f4f  895c2410             MOV dword ptr [ESP + 0x10],EBX
00405f53  6a0e                 PUSH 0xe
00405f55  8d74242c             LEA ESI,[ESP + 0x2c]
00405f59  8dbc2480000000       LEA EDI,[ESP + 0x80]
00405f60  5d                   POP EBP
00405f61  6a40                 PUSH 0x40
00405f63  57                   PUSH EDI
00405f64  ff36                 PUSH dword ptr [ESI]
00405f66  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00405f6c  e8c22e0000           CALL 0x00408e33
00405f71  83c410               ADD ESP,0x10
00405f74  83c740               ADD EDI,0x40
00405f77  83c604               ADD ESI,0x4
00405f7a  4d                   DEC EBP
00405f7b  75e4                 JNZ 0x00405f61
00405f7d  a1c03b4100           MOV EAX,[0x00413bc0]
00405f82  8b0d44384100         MOV ECX,dword ptr [0x00413844]
00405f88  03c1                 ADD EAX,ECX
00405f8a  83256838410000       AND dword ptr [0x00413868],0x0
00405f91  03053c3c4100         ADD EAX,dword ptr [0x00413c3c]
00405f97  0305443c4100         ADD EAX,dword ptr [0x00413c44]
00405f9d  0305dc3c4100         ADD EAX,dword ptr [0x00413cdc]
00405fa3  030584384100         ADD EAX,dword ptr [0x00413884]
00405fa9  0305cc384100         ADD EAX,dword ptr [0x004138cc]
00405faf  0305c83c4100         ADD EAX,dword ptr [0x00413cc8]
00405fb5  0305c0384100         ADD EAX,dword ptr [0x004138c0]
00405fbb  0305ec3b4100         ADD EAX,dword ptr [0x00413bec]
00405fc1  a3383c4100           MOV [0x00413c38],EAX
00405fc6  7506                 JNZ 0x00405fce
00405fc8  891d383c4100         MOV dword ptr [0x00413c38],EBX
00405fce  833dcc3b410000       CMP dword ptr [0x00413bcc],0x0
00405fd5  8b2d44e14000         MOV EBP,dword ptr [0x0040e144]
00405fdb  8b1df8e04000         MOV EBX,dword ptr [0x0040e0f8]
00405fe1  0f853a020000         JNZ 0x00406221
00405fe7  6a44                 PUSH 0x44
00405fe9  33ff                 XOR EDI,EDI
00405feb  5e                   POP ESI
00405fec  8d442428             LEA EAX,[ESP + 0x28]
00405ff0  56                   PUSH ESI
00405ff1  57                   PUSH EDI
00405ff2  50                   PUSH EAX
00405ff3  e888400000           CALL 0x0040a080
00405ff8  83c40c               ADD ESP,0xc
00405ffb  89742428             MOV dword ptr [ESP + 0x28],ESI
00405fff  57                   PUSH EDI
00406000  68ea030000           PUSH 0x3ea
00406005  e898cbffff           CALL 0x00402ba2
0040600a  59                   POP ECX
0040600b  59                   POP ECX
0040600c  57                   PUSH EDI
0040600d  68ec030000           PUSH 0x3ec
00406012  e88bcbffff           CALL 0x00402ba2
00406017  59                   POP ECX
00406018  beed030000           MOV ESI,0x3ed
0040601d  59                   POP ECX
0040601e  6a01                 PUSH 0x1
00406020  56                   PUSH ESI
00406021  e87ccbffff           CALL 0x00402ba2
00406026  59                   POP ECX
00406027  59                   POP ECX
00406028  6a01                 PUSH 0x1
0040602a  68ef030000           PUSH 0x3ef
0040602f  e86ecbffff           CALL 0x00402ba2
00406034  59                   POP ECX
00406035  8d842400040000       LEA EAX,[ESP + 0x400]
0040603c  59                   POP ECX
0040603d  6800010000           PUSH 0x100
00406042  50                   PUSH EAX
00406043  6a2d                 PUSH 0x2d
00406045  ff35d03b4100         PUSH dword ptr [0x00413bd0]
0040604b  e8e32d0000           CALL 0x00408e33
00406050  83c410               ADD ESP,0x10
00406053  8d8424fc030000       LEA EAX,[ESP + 0x3fc]
0040605a  ff35e03b4100         PUSH dword ptr [0x00413be0]
00406060  50                   PUSH EAX
00406061  8d842404080000       LEA EAX,[ESP + 0x804]
00406068  50                   PUSH EAX
00406069  ff156ce24000         CALL dword ptr [0x0040e26c]
0040606f  83c40c               ADD ESP,0xc
00406072  8d8424fc070000       LEA EAX,[ESP + 0x7fc]
00406079  50                   PUSH EAX
0040607a  56                   PUSH ESI
0040607b  ff3518384100         PUSH dword ptr [0x00413818]
00406081  ff15a4e24000         CALL dword ptr [0x0040e2a4]
00406087  57                   PUSH EDI
00406088  8b3dfce24000         MOV EDI,dword ptr [0x0040e2fc]
0040608e  6a01                 PUSH 0x1
00406090  ff3518384100         PUSH dword ptr [0x00413818]
00406096  ffd7                 CALL EDI
00406098  8b3554e24000         MOV ESI,dword ptr [0x0040e254]
0040609e  50                   PUSH EAX
0040609f  ffd6                 CALL ESI
004060a1  6a00                 PUSH 0x0
004060a3  6a05                 PUSH 0x5
004060a5  ff3518384100         PUSH dword ptr [0x00413818]
004060ab  ffd7                 CALL EDI
004060ad  50                   PUSH EAX
004060ae  ffd6                 CALL ESI
004060b0  33ff                 XOR EDI,EDI
004060b2  be603c4100           MOV ESI,0x413c60
004060b7  8d476b               LEA EAX,[EDI + 0x6b]
004060ba  0fb7c0               MOVZX EAX,AX
004060bd  50                   PUSH EAX
004060be  ff35d03b4100         PUSH dword ptr [0x00413bd0]
004060c4  ff1520e24000         CALL dword ptr [0x0040e220]
004060ca  8906                 MOV dword ptr [ESI],EAX
004060cc  83c604               ADD ESI,0x4
004060cf  47                   INC EDI
004060d0  81feb43c4100         CMP ESI,0x413cb4
004060d6  7cdf                 JL 0x004060b7
004060d8  33ff                 XOR EDI,EDI
004060da  393dd4384100         CMP dword ptr [0x004138d4],EDI
004060e0  741a                 JZ 0x004060fc
004060e2  6a05                 PUSH 0x5
004060e4  68f60e0000           PUSH 0xef6
004060e9  ff3518384100         PUSH dword ptr [0x00413818]
004060ef  ff15fce24000         CALL dword ptr [0x0040e2fc]
004060f5  50                   PUSH EAX
004060f6  ff1528e24000         CALL dword ptr [0x0040e228]
004060fc  57                   PUSH EDI
004060fd  e8c3120000           CALL 0x004073c5
00406102  393dd83b4100         CMP dword ptr [0x00413bd8],EDI
00406108  59                   POP ECX
00406109  c705cc3b410001000000 MOV dword ptr [0x00413bcc],0x1
00406113  0f8e08010000         JLE 0x00406221
00406119  833d8c38410000       CMP dword ptr [0x0041388c],0x0
00406120  0f85fb000000         JNZ 0x00406221
00406126  813d40384100e8030000 CMP dword ptr [0x00413840],0x3e8
00406130  7415                 JZ 0x00406147
00406132  a1a4384100           MOV EAX,[0x004138a4]
00406137  8b04b8               MOV EAX,dword ptr [EAX + EDI*0x4]
0040613a  83b80402000000       CMP dword ptr [EAX + 0x204],0x0
00406141  0f84cd000000         JZ 0x00406214
00406147  a1a4384100           MOV EAX,[0x004138a4]
0040614c  668b4c2410           MOV CX,word ptr [ESP + 0x10]
00406151  8bf7                 MOV ESI,EDI
00406153  c1e602               SHL ESI,0x2
00406156  8b0430               MOV EAX,dword ptr [EAX + ESI*0x1]
00406159  66398808020000       CMP word ptr [EAX + 0x208],CX
00406160  0f82ae000000         JC 0x00406214
00406166  6a5c                 PUSH 0x5c
00406168  50                   PUSH EAX
00406169  e8823f0000           CALL 0x0040a0f0
0040616e  59                   POP ECX
0040616f  85c0                 TEST EAX,EAX
00406171  59                   POP ECX
00406172  7411                 JZ 0x00406185
00406174  a1a4384100           MOV EAX,[0x004138a4]
00406179  6a00                 PUSH 0x0
0040617b  ff3430               PUSH dword ptr [EAX + ESI*0x1]
0040617e  e8b6280000           CALL 0x00408a39
00406183  59                   POP ECX
00406184  59                   POP ECX
00406185  8d8424fc030000       LEA EAX,[ESP + 0x3fc]
0040618c  6864054100           PUSH 0x410564
00406191  50                   PUSH EAX
00406192  ffd5                 CALL EBP
00406194  6a00                 PUSH 0x0
00406196  e8de330000           CALL 0x00409579
0040619b  88842400040000       MOV byte ptr [ESP + 0x400],AL
004061a2  59                   POP ECX
004061a3  8d84247c030000       LEA EAX,[ESP + 0x37c]
004061aa  50                   PUSH EAX
004061ab  ff35b0384100         PUSH dword ptr [0x004138b0]
004061b1  ffd5                 CALL EBP
004061b3  a1a4384100           MOV EAX,[0x004138a4]
004061b8  8b0430               MOV EAX,dword ptr [EAX + ESI*0x1]
004061bb  80b80401000000       CMP byte ptr [EAX + 0x104],0x0
004061c2  8d8804010000         LEA ECX,[EAX + 0x104]
004061c8  7403                 JZ 0x004061cd
004061ca  51                   PUSH ECX
004061cb  eb01                 JMP 0x004061ce
004061cd  50                   PUSH EAX
004061ce  ff35b0384100         PUSH dword ptr [0x004138b0]
004061d4  ffd3                 CALL EBX
004061d6  ff35b0384100         PUSH dword ptr [0x004138b0]
004061dc  e8e4110000           CALL 0x004073c5
004061e1  59                   POP ECX
004061e2  8d44246c             LEA EAX,[ESP + 0x6c]
004061e6  50                   PUSH EAX
004061e7  8d44242c             LEA EAX,[ESP + 0x2c]
004061eb  8b0da4384100         MOV ECX,dword ptr [0x004138a4]
004061f1  50                   PUSH EAX
004061f2  33c0                 XOR EAX,EAX
004061f4  50                   PUSH EAX
004061f5  50                   PUSH EAX
004061f6  50                   PUSH EAX
004061f7  50                   PUSH EAX
004061f8  50                   PUSH EAX
004061f9  50                   PUSH EAX
004061fa  ff3431               PUSH dword ptr [ECX + ESI*0x1]
004061fd  50                   PUSH EAX
004061fe  ff1518e14000         CALL dword ptr [0x0040e118]
00406204  85c0                 TEST EAX,EAX
00406206  740c                 JZ 0x00406214
00406208  6aff                 PUSH -0x1
0040620a  ff742470             PUSH dword ptr [ESP + 0x70]
0040620e  ff151ce14000         CALL dword ptr [0x0040e11c]
00406214  47                   INC EDI
00406215  3b3dd83b4100         CMP EDI,dword ptr [0x00413bd8]
0040621b  0f8cf8feffff         JL 0x00406119
00406221  33f6                 XOR ESI,ESI
00406223  3935c03b4100         CMP dword ptr [0x00413bc0],ESI
00406229  0f8e98000000         JLE 0x004062c7
0040622f  833d8c38410000       CMP dword ptr [0x0041388c],0x0
00406236  0f858b000000         JNZ 0x004062c7
0040623c  813d40384100e8030000 CMP dword ptr [0x00413840],0x3e8
00406246  7411                 JZ 0x00406259
00406248  a1d83c4100           MOV EAX,[0x00413cd8]
0040624d  8b04b0               MOV EAX,dword ptr [EAX + ESI*0x4]
00406250  83b80401000000       CMP dword ptr [EAX + 0x104],0x0
00406257  745b                 JZ 0x004062b4
00406259  a1d83c4100           MOV EAX,[0x00413cd8]
0040625e  8b04b0               MOV EAX,dword ptr [EAX + ESI*0x4]
00406261  668b8008010000       MOV AX,word ptr [EAX + 0x108]
00406268  663b442410           CMP AX,word ptr [ESP + 0x10]
0040626d  7245                 JC 0x004062b4
0040626f  8d8424bc030000       LEA EAX,[ESP + 0x3bc]
00406276  50                   PUSH EAX
00406277  ff35b0384100         PUSH dword ptr [0x004138b0]
0040627d  ffd5                 CALL EBP
0040627f  a1d83c4100           MOV EAX,[0x00413cd8]
00406284  ff34b0               PUSH dword ptr [EAX + ESI*0x4]
00406287  ff35b0384100         PUSH dword ptr [0x004138b0]
0040628d  ffd3                 CALL EBX
0040628f  ff35b0384100         PUSH dword ptr [0x004138b0]
00406295  e82b110000           CALL 0x004073c5
0040629a  a1d83c4100           MOV EAX,[0x00413cd8]
0040629f  59                   POP ECX
004062a0  ff34b0               PUSH dword ptr [EAX + ESI*0x4]
004062a3  e83c2c0000           CALL 0x00408ee4
004062a8  59                   POP ECX
004062a9  68ac0d0000           PUSH 0xdac
004062ae  e818120000           CALL 0x004074cb
004062b3  59                   POP ECX
004062b4  ff0568384100         INC dword ptr [0x00413868]
004062ba  46                   INC ESI
004062bb  3b35c03b4100         CMP ESI,dword ptr [0x00413bc0]
004062c1  0f8c68ffffff         JL 0x0040622f
004062c7  833df038410000       CMP dword ptr [0x004138f0],0x0
004062ce  744c                 JZ 0x0040631c
004062d0  813d40384100e8030000 CMP dword ptr [0x00413840],0x3e8
004062da  7409                 JZ 0x004062e5
004062dc  833d4c38410000       CMP dword ptr [0x0041384c],0x0
004062e3  7437                 JZ 0x0040631c
004062e5  8d8424fc020000       LEA EAX,[ESP + 0x2fc]
004062ec  50                   PUSH EAX
004062ed  ff35b0384100         PUSH dword ptr [0x004138b0]
004062f3  ffd5                 CALL EBP
004062f5  ff35f0384100         PUSH dword ptr [0x004138f0]
004062fb  ff35b0384100         PUSH dword ptr [0x004138b0]
00406301  ffd3                 CALL EBX
00406303  ff35b0384100         PUSH dword ptr [0x004138b0]
00406309  e8b7100000           CALL 0x004073c5
0040630e  59                   POP ECX
0040630f  e85b200000           CALL 0x0040836f
00406314  85c0                 TEST EAX,EAX
00406316  0f859e100000         JNZ 0x004073ba
0040631c  33ff                 XOR EDI,EDI
0040631e  393dcc384100         CMP dword ptr [0x004138cc],EDI
00406324  0f8ea3000000         JLE 0x004063cd
0040632a  833d8c38410000       CMP dword ptr [0x0041388c],0x0
00406331  0f8596000000         JNZ 0x004063cd
00406337  813d40384100e8030000 CMP dword ptr [0x00413840],0x3e8
00406341  7411                 JZ 0x00406354
00406343  a12c384100           MOV EAX,[0x0041382c]
00406348  8b04b8               MOV EAX,dword ptr [EAX + EDI*0x4]
0040634b  83b80401000000       CMP dword ptr [EAX + 0x104],0x0
00406352  7466                 JZ 0x004063ba
00406354  a12c384100           MOV EAX,[0x0041382c]
00406359  668b4c2410           MOV CX,word ptr [ESP + 0x10]
0040635e  8bf7                 MOV ESI,EDI
00406360  c1e602               SHL ESI,0x2
00406363  8b0430               MOV EAX,dword ptr [EAX + ESI*0x1]
00406366  66398808010000       CMP word ptr [EAX + 0x108],CX
0040636d  724b                 JC 0x004063ba
0040636f  8d84247c010000       LEA EAX,[ESP + 0x17c]
00406376  50                   PUSH EAX
00406377  ff35b0384100         PUSH dword ptr [0x004138b0]
0040637d  ffd5                 CALL EBP
0040637f  a12c384100           MOV EAX,[0x0041382c]
00406384  ff3430               PUSH dword ptr [EAX + ESI*0x1]
00406387  ff35b0384100         PUSH dword ptr [0x004138b0]
0040638d  ffd3                 CALL EBX
0040638f  ff35b0384100         PUSH dword ptr [0x004138b0]
00406395  e82b100000           CALL 0x004073c5
0040639a  a12c384100           MOV EAX,[0x0041382c]
0040639f  59                   POP ECX
004063a0  6a00                 PUSH 0x0
004063a2  ff3430               PUSH dword ptr [EAX + ESI*0x1]
004063a5  e8d6250000           CALL 0x00408980
004063aa  a12c384100           MOV EAX,[0x0041382c]
004063af  59                   POP ECX
004063b0  59                   POP ECX
004063b1  ff3430               PUSH dword ptr [EAX + ESI*0x1]
004063b4  e85a230000           CALL 0x00408713
004063b9  59                   POP ECX
004063ba  ff0568384100         INC dword ptr [0x00413868]
004063c0  47                   INC EDI
004063c1  3b3dcc384100         CMP EDI,dword ptr [0x004138cc]
004063c7  0f8c5dffffff         JL 0x0040632a
004063cd  33ff                 XOR EDI,EDI
004063cf  393d84384100         CMP dword ptr [0x00413884],EDI
004063d5  0f8eda000000         JLE 0x004064b5
004063db  833d8c38410000       CMP dword ptr [0x0041388c],0x0
004063e2  0f85cd000000         JNZ 0x004064b5
004063e8  813d40384100e8030000 CMP dword ptr [0x00413840],0x3e8
004063f2  7415                 JZ 0x00406409
004063f4  a1fc384100           MOV EAX,[0x004138fc]
004063f9  8b04b8               MOV EAX,dword ptr [EAX + EDI*0x4]
004063fc  83b80c07000000       CMP dword ptr [EAX + 0x70c],0x0
00406403  0f8499000000         JZ 0x004064a2
00406409  a1fc384100           MOV EAX,[0x004138fc]
0040640e  668b4c2410           MOV CX,word ptr [ESP + 0x10]
00406413  8bf7                 MOV ESI,EDI
00406415  c1e602               SHL ESI,0x2
00406418  8b0430               MOV EAX,dword ptr [EAX + ESI*0x1]
0040641b  66398810070000       CMP word ptr [EAX + 0x710],CX
00406422  727e                 JC 0x004064a2
00406424  83c008               ADD EAX,0x8
00406427  6a00                 PUSH 0x0
00406429  50                   PUSH EAX
0040642a  e89e270000           CALL 0x00408bcd
0040642f  59                   POP ECX
00406430  85c0                 TEST EAX,EAX
00406432  59                   POP ECX
00406433  756d                 JNZ 0x004064a2
00406435  8d8424bc010000       LEA EAX,[ESP + 0x1bc]
0040643c  50                   PUSH EAX
0040643d  ff35b0384100         PUSH dword ptr [0x004138b0]
00406443  ffd5                 CALL EBP
00406445  a1fc384100           MOV EAX,[0x004138fc]
0040644a  8b0430               MOV EAX,dword ptr [EAX + ESI*0x1]
0040644d  83c008               ADD EAX,0x8
00406450  50                   PUSH EAX
00406451  ff35b0384100         PUSH dword ptr [0x004138b0]
00406457  ffd3                 CALL EBX
00406459  ff35b0384100         PUSH dword ptr [0x004138b0]
0040645f  e8610f0000           CALL 0x004073c5
00406464  a1fc384100           MOV EAX,[0x004138fc]
00406469  833dc838410000       CMP dword ptr [0x004138c8],0x0
00406470  59                   POP ECX
00406471  8b0430               MOV EAX,dword ptr [EAX + ESI*0x1]
00406474  8d880c050000         LEA ECX,[EAX + 0x50c]
0040647a  7506                 JNZ 0x00406482
0040647c  8d880c030000         LEA ECX,[EAX + 0x30c]
00406482  8d5008               LEA EDX,[EAX + 0x8]
00406485  52                   PUSH EDX
00406486  8a11                 MOV DL,byte ptr [ECX]
00406488  f6da                 NEG DL
0040648a  1bd2                 SBB EDX,EDX
0040648c  23d1                 AND EDX,ECX
0040648e  8d880c020000         LEA ECX,[EAX + 0x20c]
00406494  52                   PUSH EDX
00406495  050c010000           ADD EAX,0x10c
0040649a  51                   PUSH ECX
0040649b  50                   PUSH EAX
0040649c  ff1520e14000         CALL dword ptr [0x0040e120]
004064a2  ff0568384100         INC dword ptr [0x00413868]
004064a8  47                   INC EDI
004064a9  3b3d84384100         CMP EDI,dword ptr [0x00413884]
004064af  0f8c26ffffff         JL 0x004063db
004064b5  33f6                 XOR ESI,ESI
004064b7  3935e83b4100         CMP dword ptr [0x00413be8],ESI
004064bd  7e55                 JLE 0x00406514
004064bf  833dc838410000       CMP dword ptr [0x004138c8],0x0
004064c6  7443                 JZ 0x0040650b
004064c8  a128384100           MOV EAX,[0x00413828]
004064cd  668b4c2410           MOV CX,word ptr [ESP + 0x10]
004064d2  8b04b0               MOV EAX,dword ptr [EAX + ESI*0x4]
004064d5  66398808020000       CMP word ptr [EAX + 0x208],CX
004064dc  722d                 JC 0x0040650b
004064de  0504010000           ADD EAX,0x104
004064e3  6a00                 PUSH 0x0
004064e5  50                   PUSH EAX
004064e6  e8e2260000           CALL 0x00408bcd
004064eb  59                   POP ECX
004064ec  85c0                 TEST EAX,EAX
004064ee  59                   POP ECX
004064ef  751a                 JNZ 0x0040650b
004064f1  a128384100           MOV EAX,[0x00413828]
004064f6  6a01                 PUSH 0x1
004064f8  8b04b0               MOV EAX,dword ptr [EAX + ESI*0x4]
004064fb  8d8804010000         LEA ECX,[EAX + 0x104]
00406501  51                   PUSH ECX
00406502  50                   PUSH EAX
00406503  e8b21a0000           CALL 0x00407fba
00406508  83c40c               ADD ESP,0xc
0040650b  46                   INC ESI
0040650c  3b35e83b4100         CMP ESI,dword ptr [0x00413be8]
00406512  7cab                 JL 0x004064bf
00406514  a1ec3b4100           MOV EAX,[0x00413bec]
00406519  8d70ff               LEA ESI,[EAX + -0x1]
0040651c  85f6                 TEST ESI,ESI
0040651e  0f8c23010000         JL 0x00406647
00406524  813d40384100e8030000 CMP dword ptr [0x00413840],0x3e8
0040652e  7524                 JNZ 0x00406554
00406530  a158384100           MOV EAX,[0x00413858]
00406535  8b04b0               MOV EAX,dword ptr [EAX + ESI*0x4]
00406538  83b81402000000       CMP dword ptr [EAX + 0x214],0x0
0040653f  7528                 JNZ 0x00406569
00406541  833dc838410000       CMP dword ptr [0x004138c8],0x0
00406548  740a                 JZ 0x00406554
0040654a  8d880c010000         LEA ECX,[EAX + 0x10c]
00406550  85c9                 TEST ECX,ECX
00406552  7515                 JNZ 0x00406569
00406554  a158384100           MOV EAX,[0x00413858]
00406559  8b04b0               MOV EAX,dword ptr [EAX + ESI*0x4]
0040655c  83b81002000000       CMP dword ptr [EAX + 0x210],0x0
00406563  0f84d7000000         JZ 0x00406640
00406569  668b4c2410           MOV CX,word ptr [ESP + 0x10]
0040656e  6639881c020000       CMP word ptr [EAX + 0x21c],CX
00406575  0f82c5000000         JC 0x00406640
0040657b  66398820020000       CMP word ptr [EAX + 0x220],CX
00406582  7216                 JC 0x0040659a
00406584  ffb024020000         PUSH dword ptr [EAX + 0x224]
0040658a  83c008               ADD EAX,0x8
0040658d  6a01                 PUSH 0x1
0040658f  50                   PUSH EAX
00406590  e81e180000           CALL 0x00407db3
00406595  83c40c               ADD ESP,0xc
00406598  eb02                 JMP 0x0040659c
0040659a  33c0                 XOR EAX,EAX
0040659c  83f801               CMP EAX,0x1
0040659f  7536                 JNZ 0x004065d7
004065a1  833dc838410000       CMP dword ptr [0x004138c8],0x0
004065a8  741f                 JZ 0x004065c9
004065aa  a158384100           MOV EAX,[0x00413858]
004065af  668b4c2410           MOV CX,word ptr [ESP + 0x10]
004065b4  8b04b0               MOV EAX,dword ptr [EAX + ESI*0x4]
004065b7  6639881e020000       CMP word ptr [EAX + 0x21e],CX
004065be  7509                 JNZ 0x004065c9
004065c0  80b80c01000000       CMP byte ptr [EAX + 0x10c],0x0
004065c7  7577                 JNZ 0x00406640
004065c9  a158384100           MOV EAX,[0x00413858]
004065ce  8b04b0               MOV EAX,dword ptr [EAX + ESI*0x4]
004065d1  80600800             AND byte ptr [EAX + 0x8],0x0
004065d5  eb69                 JMP 0x00406640
004065d7  a158384100           MOV EAX,[0x00413858]
004065dc  8b04b0               MOV EAX,dword ptr [EAX + ESI*0x4]
004065df  668b881e020000       MOV CX,word ptr [EAX + 0x21e]
004065e6  663b881c020000       CMP CX,word ptr [EAX + 0x21c]
004065ed  7509                 JNZ 0x004065f8
004065ef  80b80c01000000       CMP byte ptr [EAX + 0x10c],0x0
004065f6  7409                 JZ 0x00406601
004065f8  833dc838410000       CMP dword ptr [0x004138c8],0x0
004065ff  753f                 JNZ 0x00406640
00406601  668b7c2410           MOV DI,word ptr [ESP + 0x10]
00406606  6639b818020000       CMP word ptr [EAX + 0x218],DI
0040660d  7216                 JC 0x00406625
0040660f  83c008               ADD EAX,0x8
00406612  6a00                 PUSH 0x0
00406614  50                   PUSH EAX
00406615  8d8424c4020000       LEA EAX,[ESP + 0x2c4]
0040661c  50                   PUSH EAX
0040661d  e8981b0000           CALL 0x004081ba
00406622  83c40c               ADD ESP,0xc
00406625  a158384100           MOV EAX,[0x00413858]
0040662a  8b04b0               MOV EAX,dword ptr [EAX + ESI*0x4]
0040662d  6639b81a020000       CMP word ptr [EAX + 0x21a],DI
00406634  720a                 JC 0x00406640
00406636  83c008               ADD EAX,0x8
00406639  50                   PUSH EAX
0040663a  e8fa280000           CALL 0x00408f39
0040663f  59                   POP ECX
00406640  4e                   DEC ESI
00406641  0f89ddfeffff         JNS 0x00406524
00406647  a1c0384100           MOV EAX,[0x004138c0]
0040664c  8d78ff               LEA EDI,[EAX + -0x1]
0040664f  85ff                 TEST EDI,EDI
00406651  0f8c1a010000         JL 0x00406771
00406657  a14c3c4100           MOV EAX,[0x00413c4c]
0040665c  668b542410           MOV DX,word ptr [ESP + 0x10]
00406661  8bf7                 MOV ESI,EDI
00406663  c1e602               SHL ESI,0x2
00406666  8b0430               MOV EAX,dword ptr [EAX + ESI*0x1]
00406669  66399014020000       CMP word ptr [EAX + 0x214],DX
00406670  0f82f4000000         JC 0x0040676a
00406676  8b8808020000         MOV ECX,dword ptr [EAX + 0x208]
0040667c  85c9                 TEST ECX,ECX
0040667e  7508                 JNZ 0x00406688
00406680  390d5c384100         CMP dword ptr [0x0041385c],ECX
00406686  746c                 JZ 0x004066f4
00406688  66399018020000       CMP word ptr [EAX + 0x218],DX
0040668f  7212                 JC 0x004066a3
00406691  ffb01c020000         PUSH dword ptr [EAX + 0x21c]
00406697  51                   PUSH ECX
00406698  50                   PUSH EAX
00406699  e815170000           CALL 0x00407db3
0040669e  83c40c               ADD ESP,0xc
004066a1  eb02                 JMP 0x004066a5
004066a3  33c0                 XOR EAX,EAX
004066a5  6a01                 PUSH 0x1
004066a7  59                   POP ECX
004066a8  3bc1                 CMP EAX,ECX
004066aa  7535                 JNZ 0x004066e1
004066ac  833dc838410000       CMP dword ptr [0x004138c8],0x0
004066b3  741f                 JZ 0x004066d4
004066b5  a14c3c4100           MOV EAX,[0x00413c4c]
004066ba  8b0430               MOV EAX,dword ptr [EAX + ESI*0x1]
004066bd  668b8816020000       MOV CX,word ptr [EAX + 0x216]
004066c4  663b4c2410           CMP CX,word ptr [ESP + 0x10]
004066c9  7509                 JNZ 0x004066d4
004066cb  80b80401000000       CMP byte ptr [EAX + 0x104],0x0
004066d2  7520                 JNZ 0x004066f4
004066d4  a14c3c4100           MOV EAX,[0x00413c4c]
004066d9  8b0430               MOV EAX,dword ptr [EAX + ESI*0x1]
004066dc  802000               AND byte ptr [EAX],0x0
004066df  eb13                 JMP 0x004066f4
004066e1  83f802               CMP EAX,0x2
004066e4  750e                 JNZ 0x004066f4
004066e6  a14c3c4100           MOV EAX,[0x00413c4c]
004066eb  8b0430               MOV EAX,dword ptr [EAX + ESI*0x1]
004066ee  898808020000         MOV dword ptr [EAX + 0x208],ECX
004066f4  a14c3c4100           MOV EAX,[0x00413c4c]
004066f9  8b0430               MOV EAX,dword ptr [EAX + ESI*0x1]
004066fc  83b80802000000       CMP dword ptr [EAX + 0x208],0x0
00406703  7465                 JZ 0x0040676a
00406705  803800               CMP byte ptr [EAX],0x0
00406708  7460                 JZ 0x0040676a
0040670a  668b8816020000       MOV CX,word ptr [EAX + 0x216]
00406711  663b8814020000       CMP CX,word ptr [EAX + 0x214]
00406718  7509                 JNZ 0x00406723
0040671a  80b80401000000       CMP byte ptr [EAX + 0x104],0x0
00406721  7409                 JZ 0x0040672c
00406723  833dc838410000       CMP dword ptr [0x004138c8],0x0
0040672a  753e                 JNZ 0x0040676a
0040672c  668b4c2410           MOV CX,word ptr [ESP + 0x10]
00406731  66398810020000       CMP word ptr [EAX + 0x210],CX
00406738  7213                 JC 0x0040674d
0040673a  6a00                 PUSH 0x0
0040673c  50                   PUSH EAX
0040673d  8d8424c4020000       LEA EAX,[ESP + 0x2c4]
00406744  50                   PUSH EAX
00406745  e8701a0000           CALL 0x004081ba
0040674a  83c40c               ADD ESP,0xc
0040674d  a14c3c4100           MOV EAX,[0x00413c4c]
00406752  8b3430               MOV ESI,dword ptr [EAX + ESI*0x1]
00406755  668b442410           MOV AX,word ptr [ESP + 0x10]
0040675a  66398612020000       CMP word ptr [ESI + 0x212],AX
00406761  7207                 JC 0x0040676a
00406763  56                   PUSH ESI
00406764  e8d0270000           CALL 0x00408f39
00406769  59                   POP ECX
0040676a  4f                   DEC EDI
0040676b  0f89e6feffff         JNS 0x00406657
00406771  33f6                 XOR ESI,ESI
00406773  3935ec3b4100         CMP dword ptr [0x00413bec],ESI
00406779  0f8efe000000         JLE 0x0040687d
0040677f  833d8c38410000       CMP dword ptr [0x0041388c],0x0
00406786  0f85f1000000         JNZ 0x0040687d
0040678c  a158384100           MOV EAX,[0x00413858]
00406791  8b04b0               MOV EAX,dword ptr [EAX + ESI*0x4]
00406794  80780800             CMP byte ptr [EAX + 0x8],0x0
00406798  8d4808               LEA ECX,[EAX + 0x8]
0040679b  0f84c9000000         JZ 0x0040686a
004067a1  813d40384100e8030000 CMP dword ptr [0x00413840],0x3e8
004067ab  7529                 JNZ 0x004067d6
004067ad  83b81402000000       CMP dword ptr [EAX + 0x214],0x0
004067b4  752d                 JNZ 0x004067e3
004067b6  833dc838410000       CMP dword ptr [0x004138c8],0x0
004067bd  7417                 JZ 0x004067d6
004067bf  80b80c01000000       CMP byte ptr [EAX + 0x10c],0x0
004067c6  740e                 JZ 0x004067d6
004067c8  668b901e020000       MOV DX,word ptr [EAX + 0x21e]
004067cf  663b542410           CMP DX,word ptr [ESP + 0x10]
004067d4  740d                 JZ 0x004067e3
004067d6  83b81002000000       CMP dword ptr [EAX + 0x210],0x0
004067dd  0f8487000000         JZ 0x0040686a
004067e3  668b542410           MOV DX,word ptr [ESP + 0x10]
004067e8  6639901c020000       CMP word ptr [EAX + 0x21c],DX
004067ef  7279                 JC 0x0040686a
004067f1  6639901e020000       CMP word ptr [EAX + 0x21e],DX
004067f8  750e                 JNZ 0x00406808
004067fa  833dc838410000       CMP dword ptr [0x004138c8],0x0
00406801  7405                 JZ 0x00406808
00406803  6a01                 PUSH 0x1
00406805  5a                   POP EDX
00406806  eb02                 JMP 0x0040680a
00406808  33d2                 XOR EDX,EDX
0040680a  050c010000           ADD EAX,0x10c
0040680f  52                   PUSH EDX
00406810  50                   PUSH EAX
00406811  51                   PUSH ECX
00406812  e8a3170000           CALL 0x00407fba
00406817  83c40c               ADD ESP,0xc
0040681a  85c0                 TEST EAX,EAX
0040681c  744c                 JZ 0x0040686a
0040681e  8d44247c             LEA EAX,[ESP + 0x7c]
00406822  50                   PUSH EAX
00406823  ff35b0384100         PUSH dword ptr [0x004138b0]
00406829  ffd5                 CALL EBP
0040682b  a158384100           MOV EAX,[0x00413858]
00406830  8b04b0               MOV EAX,dword ptr [EAX + ESI*0x4]
00406833  83c008               ADD EAX,0x8
00406836  50                   PUSH EAX
00406837  ff35b0384100         PUSH dword ptr [0x004138b0]
0040683d  ffd3                 CALL EBX
0040683f  ff35b0384100         PUSH dword ptr [0x004138b0]
00406845  68ef030000           PUSH 0x3ef
0040684a  ff3518384100         PUSH dword ptr [0x00413818]
00406850  ff15fce24000         CALL dword ptr [0x0040e2fc]
00406856  50                   PUSH EAX
00406857  e86b130000           CALL 0x00407bc7
0040685c  59                   POP ECX
0040685d  59                   POP ECX
0040685e  ff35b0384100         PUSH dword ptr [0x004138b0]
00406864  e85c0b0000           CALL 0x004073c5
00406869  59                   POP ECX
0040686a  ff0568384100         INC dword ptr [0x00413868]
00406870  46                   INC ESI
00406871  3b35ec3b4100         CMP ESI,dword ptr [0x00413bec]
00406877  0f8c02ffffff         JL 0x0040677f
0040687d  33f6                 XOR ESI,ESI
0040687f  3935c0384100         CMP dword ptr [0x004138c0],ESI
00406885  0f8eed000000         JLE 0x00406978
0040688b  833d8c38410000       CMP dword ptr [0x0041388c],0x0
00406892  0f85e0000000         JNZ 0x00406978
00406898  a14c3c4100           MOV EAX,[0x00413c4c]
0040689d  8b04b0               MOV EAX,dword ptr [EAX + ESI*0x4]
004068a0  803800               CMP byte ptr [EAX],0x0
004068a3  0f84bc000000         JZ 0x00406965
004068a9  83b80802000000       CMP dword ptr [EAX + 0x208],0x0
004068b0  752c                 JNZ 0x004068de
004068b2  833dc838410000       CMP dword ptr [0x004138c8],0x0
004068b9  0f84a6000000         JZ 0x00406965
004068bf  80b80401000000       CMP byte ptr [EAX + 0x104],0x0
004068c6  0f8499000000         JZ 0x00406965
004068cc  668b4c2410           MOV CX,word ptr [ESP + 0x10]
004068d1  66398816020000       CMP word ptr [EAX + 0x216],CX
004068d8  0f8587000000         JNZ 0x00406965
004068de  668b4c2410           MOV CX,word ptr [ESP + 0x10]
004068e3  66398814020000       CMP word ptr [EAX + 0x214],CX
004068ea  7279                 JC 0x00406965
004068ec  66398816020000       CMP word ptr [EAX + 0x216],CX
004068f3  750e                 JNZ 0x00406903
004068f5  833dc838410000       CMP dword ptr [0x004138c8],0x0
004068fc  7405                 JZ 0x00406903
004068fe  6a01                 PUSH 0x1
00406900  59                   POP ECX
00406901  eb02                 JMP 0x00406905
00406903  33c9                 XOR ECX,ECX
00406905  51                   PUSH ECX
00406906  8d8804010000         LEA ECX,[EAX + 0x104]
0040690c  51                   PUSH ECX
0040690d  50                   PUSH EAX
0040690e  e8a7160000           CALL 0x00407fba
00406913  83c40c               ADD ESP,0xc
00406916  85c0                 TEST EAX,EAX
00406918  744b                 JZ 0x00406965
0040691a  8d8424bc000000       LEA EAX,[ESP + 0xbc]
00406921  50                   PUSH EAX
00406922  ff35b0384100         PUSH dword ptr [0x004138b0]
00406928  ffd5                 CALL EBP
0040692a  a14c3c4100           MOV EAX,[0x00413c4c]
0040692f  ff34b0               PUSH dword ptr [EAX + ESI*0x4]
00406932  ff35b0384100         PUSH dword ptr [0x004138b0]
00406938  ffd3                 CALL EBX
0040693a  ff35b0384100         PUSH dword ptr [0x004138b0]
00406940  68ef030000           PUSH 0x3ef
00406945  ff3518384100         PUSH dword ptr [0x00413818]
0040694b  ff15fce24000         CALL dword ptr [0x0040e2fc]
00406951  50                   PUSH EAX
00406952  e870120000           CALL 0x00407bc7
00406957  59                   POP ECX
00406958  59                   POP ECX
00406959  ff35b0384100         PUSH dword ptr [0x004138b0]
0040695f  e8610a0000           CALL 0x004073c5
00406964  59                   POP ECX
00406965  ff0568384100         INC dword ptr [0x00413868]
0040696b  46                   INC ESI
0040696c  3b35c0384100         CMP ESI,dword ptr [0x004138c0]
00406972  0f8c13ffffff         JL 0x0040688b
00406978  33f6                 XOR ESI,ESI
0040697a  3935c8384100         CMP dword ptr [0x004138c8],ESI
00406980  0f8420010000         JZ 0x00406aa6
00406986  3935ec3b4100         CMP dword ptr [0x00413bec],ESI
0040698c  0f8e97000000         JLE 0x00406a29
00406992  833d8c38410000       CMP dword ptr [0x0041388c],0x0
00406999  0f858a000000         JNZ 0x00406a29
0040699f  a158384100           MOV EAX,[0x00413858]
004069a4  8b04b0               MOV EAX,dword ptr [EAX + ESI*0x4]
004069a7  80780800             CMP byte ptr [EAX + 0x8],0x0
004069ab  8d4808               LEA ECX,[EAX + 0x8]
004069ae  746c                 JZ 0x00406a1c
004069b0  813d40384100e8030000 CMP dword ptr [0x00413840],0x3e8
004069ba  751b                 JNZ 0x004069d7
004069bc  83b81402000000       CMP dword ptr [EAX + 0x214],0x0
004069c3  751b                 JNZ 0x004069e0
004069c5  833dc838410000       CMP dword ptr [0x004138c8],0x0
004069cc  7409                 JZ 0x004069d7
004069ce  80b80c01000000       CMP byte ptr [EAX + 0x10c],0x0
004069d5  7509                 JNZ 0x004069e0
004069d7  83b81002000000       CMP dword ptr [EAX + 0x210],0x0
004069de  743c                 JZ 0x00406a1c
004069e0  668b542410           MOV DX,word ptr [ESP + 0x10]
004069e5  6639901c020000       CMP word ptr [EAX + 0x21c],DX
004069ec  722e                 JC 0x00406a1c
004069ee  80b80c01000000       CMP byte ptr [EAX + 0x10c],0x0
004069f5  7425                 JZ 0x00406a1c
004069f7  6639901e020000       CMP word ptr [EAX + 0x21e],DX
004069fe  751c                 JNZ 0x00406a1c
00406a00  66399018020000       CMP word ptr [EAX + 0x218],DX
00406a07  7213                 JC 0x00406a1c
00406a09  6a01                 PUSH 0x1
00406a0b  8d8424c0020000       LEA EAX,[ESP + 0x2c0]
00406a12  51                   PUSH ECX
00406a13  50                   PUSH EAX
00406a14  e8a1170000           CALL 0x004081ba
00406a19  83c40c               ADD ESP,0xc
00406a1c  46                   INC ESI
00406a1d  3b35ec3b4100         CMP ESI,dword ptr [0x00413bec]
00406a23  0f8c69ffffff         JL 0x00406992
00406a29  33f6                 XOR ESI,ESI
00406a2b  3935c0384100         CMP dword ptr [0x004138c0],ESI
00406a31  7e73                 JLE 0x00406aa6
00406a33  33c9                 XOR ECX,ECX
00406a35  390d8c384100         CMP dword ptr [0x0041388c],ECX
00406a3b  7569                 JNZ 0x00406aa6
00406a3d  a14c3c4100           MOV EAX,[0x00413c4c]
00406a42  8b04b0               MOV EAX,dword ptr [EAX + ESI*0x4]
00406a45  3808                 CMP byte ptr [EAX],CL
00406a47  7454                 JZ 0x00406a9d
00406a49  398808020000         CMP dword ptr [EAX + 0x208],ECX
00406a4f  7510                 JNZ 0x00406a61
00406a51  390dc8384100         CMP dword ptr [0x004138c8],ECX
00406a57  7444                 JZ 0x00406a9d
00406a59  388804010000         CMP byte ptr [EAX + 0x104],CL
00406a5f  743c                 JZ 0x00406a9d
00406a61  668b4c2410           MOV CX,word ptr [ESP + 0x10]
00406a66  66398814020000       CMP word ptr [EAX + 0x214],CX
00406a6d  722e                 JC 0x00406a9d
00406a6f  80b80401000000       CMP byte ptr [EAX + 0x104],0x0
00406a76  7425                 JZ 0x00406a9d
00406a78  66398816020000       CMP word ptr [EAX + 0x216],CX
00406a7f  751c                 JNZ 0x00406a9d
00406a81  66398810020000       CMP word ptr [EAX + 0x210],CX
00406a88  7213                 JC 0x00406a9d
00406a8a  6a01                 PUSH 0x1
00406a8c  50                   PUSH EAX
00406a8d  8d8424c4020000       LEA EAX,[ESP + 0x2c4]
00406a94  50                   PUSH EAX
00406a95  e820170000           CALL 0x004081ba
00406a9a  83c40c               ADD ESP,0xc
00406a9d  46                   INC ESI
00406a9e  3b35c0384100         CMP ESI,dword ptr [0x004138c0]
00406aa4  7c8d                 JL 0x00406a33
00406aa6  813d40384100e8030000 CMP dword ptr [0x00413840],0x3e8
00406ab0  8bac24000c0000       MOV EBP,dword ptr [ESP + 0xc00]
00406ab7  7519                 JNZ 0x00406ad2
00406ab9  833d8c38410000       CMP dword ptr [0x0041388c],0x0
00406ac0  7510                 JNZ 0x00406ad2
00406ac2  833dc838410000       CMP dword ptr [0x004138c8],0x0
00406ac9  7507                 JNZ 0x00406ad2
00406acb  55                   PUSH EBP
00406acc  e8421c0000           CALL 0x00408713
00406ad1  59                   POP ECX
00406ad2  8b1d40e14000         MOV EBX,dword ptr [0x0040e140]
00406ad8  33ff                 XOR EDI,EDI
00406ada  393dc83c4100         CMP dword ptr [0x00413cc8],EDI
00406ae0  0f8e19010000         JLE 0x00406bff
00406ae6  833d8c38410000       CMP dword ptr [0x0041388c],0x0
00406aed  0f850c010000         JNZ 0x00406bff
00406af3  8b1540384100         MOV EDX,dword ptr [0x00413840]
00406af9  81fae8030000         CMP EDX,0x3e8
00406aff  7415                 JZ 0x00406b16
00406b01  a16c384100           MOV EAX,[0x0041386c]
00406b06  8b04b8               MOV EAX,dword ptr [EAX + EDI*0x4]
00406b09  83b80401000000       CMP dword ptr [EAX + 0x104],0x0
00406b10  0f84d6000000         JZ 0x00406bec
00406b16  a16c384100           MOV EAX,[0x0041386c]
00406b1b  668b4c2410           MOV CX,word ptr [ESP + 0x10]
00406b20  8bf7                 MOV ESI,EDI
00406b22  c1e602               SHL ESI,0x2
00406b25  8b0430               MOV EAX,dword ptr [EAX + ESI*0x1]
00406b28  6639880a010000       CMP word ptr [EAX + 0x10a],CX
00406b2f  0f82b7000000         JC 0x00406bec
00406b35  81fae9030000         CMP EDX,0x3e9
00406b3b  7410                 JZ 0x00406b4d
00406b3d  66398808010000       CMP word ptr [EAX + 0x108],CX
00406b44  8d84243c010000       LEA EAX,[ESP + 0x13c]
00406b4b  7207                 JC 0x00406b54
00406b4d  8d8424fc000000       LEA EAX,[ESP + 0xfc]
00406b54  50                   PUSH EAX
00406b55  ff35b0384100         PUSH dword ptr [0x004138b0]
00406b5b  ff1544e14000         CALL dword ptr [0x0040e144]
00406b61  a16c384100           MOV EAX,[0x0041386c]
00406b66  ff3430               PUSH dword ptr [EAX + ESI*0x1]
00406b69  ffd3                 CALL EBX
00406b6b  8b0d6c384100         MOV ECX,dword ptr [0x0041386c]
00406b71  8b0c31               MOV ECX,dword ptr [ECX + ESI*0x1]
00406b74  806408ff00           AND byte ptr [EAX + ECX*0x1 + -0x1],0x0
00406b79  a16c384100           MOV EAX,[0x0041386c]
00406b7e  ff3430               PUSH dword ptr [EAX + ESI*0x1]
00406b81  ff35b0384100         PUSH dword ptr [0x004138b0]
00406b87  ff15f8e04000         CALL dword ptr [0x0040e0f8]
00406b8d  ff35b0384100         PUSH dword ptr [0x004138b0]
00406b93  68ef030000           PUSH 0x3ef
00406b98  ff3518384100         PUSH dword ptr [0x00413818]
00406b9e  ff15fce24000         CALL dword ptr [0x0040e2fc]
00406ba4  50                   PUSH EAX
00406ba5  e81d100000           CALL 0x00407bc7
00406baa  59                   POP ECX
00406bab  59                   POP ECX
00406bac  ff35b0384100         PUSH dword ptr [0x004138b0]
00406bb2  e80e080000           CALL 0x004073c5
00406bb7  813d40384100e9030000 CMP dword ptr [0x00413840],0x3e9
00406bc1  a16c384100           MOV EAX,[0x0041386c]
00406bc6  59                   POP ECX
00406bc7  7415                 JZ 0x00406bde
00406bc9  8b0c30               MOV ECX,dword ptr [EAX + ESI*0x1]
00406bcc  668b542410           MOV DX,word ptr [ESP + 0x10]
00406bd1  66399108010000       CMP word ptr [ECX + 0x108],DX
00406bd8  7304                 JNC 0x00406bde
00406bda  33c9                 XOR ECX,ECX
00406bdc  eb03                 JMP 0x00406be1
00406bde  6a01                 PUSH 0x1
00406be0  59                   POP ECX
00406be1  51                   PUSH ECX
00406be2  ff3430               PUSH dword ptr [EAX + ESI*0x1]
00406be5  e864090000           CALL 0x0040754e
00406bea  59                   POP ECX
00406beb  59                   POP ECX
00406bec  ff0568384100         INC dword ptr [0x00413868]
00406bf2  47                   INC EDI
00406bf3  3b3dc83c4100         CMP EDI,dword ptr [0x00413cc8]
00406bf9  0f8ce7feffff         JL 0x00406ae6
00406bff  833dc838410000       CMP dword ptr [0x004138c8],0x0
00406c06  7437                 JZ 0x00406c3f
00406c08  833de838410000       CMP dword ptr [0x004138e8],0x0
00406c0f  7508                 JNZ 0x00406c19
00406c11  55                   PUSH EBP
00406c12  e8fc1a0000           CALL 0x00408713
00406c17  eb25                 JMP 0x00406c3e
00406c19  6a01                 PUSH 0x1
00406c1b  55                   PUSH EBP
00406c1c  e86f3b0000           CALL 0x0040a790
00406c21  8bf0                 MOV ESI,EAX
00406c23  59                   POP ECX
00406c24  83feff               CMP ESI,-0x1
00406c27  59                   POP ECX
00406c28  7415                 JZ 0x00406c3f
00406c2a  ff35e8384100         PUSH dword ptr [0x004138e8]
00406c30  56                   PUSH ESI
00406c31  e8da390000           CALL 0x0040a610
00406c36  59                   POP ECX
00406c37  59                   POP ECX
00406c38  56                   PUSH ESI
00406c39  e8f2380000           CALL 0x0040a530
00406c3e  59                   POP ECX
00406c3f  33ff                 XOR EDI,EDI
00406c41  393d3c3c4100         CMP dword ptr [0x00413c3c],EDI
00406c47  897c2424             MOV dword ptr [ESP + 0x24],EDI
00406c4b  0f8e91020000         JLE 0x00406ee2
00406c51  833d8c38410000       CMP dword ptr [0x0041388c],0x0
00406c58  0f8584020000         JNZ 0x00406ee2
00406c5e  813d40384100e8030000 CMP dword ptr [0x00413840],0x3e8
00406c68  7415                 JZ 0x00406c7f
00406c6a  a1c43b4100           MOV EAX,[0x00413bc4]
00406c6f  8b04b8               MOV EAX,dword ptr [EAX + EDI*0x4]
00406c72  83b81012000000       CMP dword ptr [EAX + 0x1210],0x0
00406c79  0f844c020000         JZ 0x00406ecb
00406c7f  a1c43b4100           MOV EAX,[0x00413bc4]
00406c84  668b4c2410           MOV CX,word ptr [ESP + 0x10]
00406c89  8bef                 MOV EBP,EDI
00406c8b  c1e502               SHL EBP,0x2
00406c8e  8b0428               MOV EAX,dword ptr [EAX + EBP*0x1]
00406c91  66398814120000       CMP word ptr [EAX + 0x1214],CX
00406c98  0f822d020000         JC 0x00406ecb
00406c9e  8d84243c020000       LEA EAX,[ESP + 0x23c]
00406ca5  50                   PUSH EAX
00406ca6  ff35b0384100         PUSH dword ptr [0x004138b0]
00406cac  ff1544e14000         CALL dword ptr [0x0040e144]
00406cb2  ff35b0384100         PUSH dword ptr [0x004138b0]
00406cb8  ffd3                 CALL EBX
00406cba  8b0dc43b4100         MOV ECX,dword ptr [0x00413bc4]
00406cc0  8bf0                 MOV ESI,EAX
00406cc2  a1b0384100           MOV EAX,[0x004138b0]
00406cc7  8b0c29               MOV ECX,dword ptr [ECX + EBP*0x1]
00406cca  03f0                 ADD ESI,EAX
00406ccc  83c108               ADD ECX,0x8
00406ccf  51                   PUSH ECX
00406cd0  50                   PUSH EAX
00406cd1  ff15f8e04000         CALL dword ptr [0x0040e0f8]
00406cd7  56                   PUSH ESI
00406cd8  ffd3                 CALL EBX
00406cda  83f830               CMP EAX,0x30
00406cdd  7e0f                 JLE 0x00406cee
00406cdf  83c62d               ADD ESI,0x2d
00406ce2  6860054100           PUSH 0x410560
00406ce7  56                   PUSH ESI
00406ce8  ff1544e14000         CALL dword ptr [0x0040e144]
00406cee  ff35b0384100         PUSH dword ptr [0x004138b0]
00406cf4  e8cc060000           CALL 0x004073c5
00406cf9  a1c43b4100           MOV EAX,[0x00413bc4]
00406cfe  833dc838410000       CMP dword ptr [0x004138c8],0x0
00406d05  59                   POP ECX
00406d06  8d0c28               LEA ECX,[EAX + EBP*0x1]
00406d09  8b0428               MOV EAX,dword ptr [EAX + EBP*0x1]
00406d0c  8db0080a0000         LEA ESI,[EAX + 0xa08]
00406d12  7506                 JNZ 0x00406d1a
00406d14  8db008020000         LEA ESI,[EAX + 0x208]
00406d1a  833d3438410000       CMP dword ptr [0x00413834],0x0
00406d21  0f847e010000         JZ 0x00406ea5
00406d27  8b09                 MOV ECX,dword ptr [ECX]
00406d29  8d442420             LEA EAX,[ESP + 0x20]
00406d2d  50                   PUSH EAX
00406d2e  6a1f                 PUSH 0x1f
00406d30  8d4108               LEA EAX,[ECX + 0x8]
00406d33  6a00                 PUSH 0x0
00406d35  50                   PUSH EAX
00406d36  8b8108120000         MOV EAX,dword ptr [ECX + 0x1208]
00406d3c  ff348520004100       PUSH dword ptr [EAX*0x4 + 0x410020]
00406d43  ff150ce04000         CALL dword ptr [0x0040e00c]
00406d49  85c0                 TEST EAX,EAX
00406d4b  0f857a010000         JNZ 0x00406ecb
00406d51  56                   PUSH ESI
00406d52  ffd3                 CALL EBX
00406d54  8bf8                 MOV EDI,EAX
00406d56  a1c43b4100           MOV EAX,[0x00413bc4]
00406d5b  47                   INC EDI
00406d5c  8b0428               MOV EAX,dword ptr [EAX + EBP*0x1]
00406d5f  8b800c120000         MOV EAX,dword ptr [EAX + 0x120c]
00406d65  83f803               CMP EAX,0x3
00406d68  7511                 JNZ 0x00406d7b
00406d6a  56                   PUSH ESI
00406d6b  e8e0360000           CALL 0x0040a450
00406d70  59                   POP ECX
00406d71  8906                 MOV dword ptr [ESI],EAX
00406d73  6a04                 PUSH 0x4
00406d75  5f                   POP EDI
00406d76  e9eb000000           JMP 0x00406e66
00406d7b  83f802               CMP EAX,0x2
00406d7e  752f                 JNZ 0x00406daf
00406d80  33ff                 XOR EDI,EDI
00406d82  803e00               CMP byte ptr [ESI],0x0
00406d85  8bde                 MOV EBX,ESI
00406d87  0f84d9000000         JZ 0x00406e66
00406d8d  53                   PUSH EBX
00406d8e  ff1540e14000         CALL dword ptr [0x0040e140]
00406d94  53                   PUSH EBX
00406d95  8d7c0701             LEA EDI,[EDI + EAX*0x1 + 0x1]
00406d99  ff1540e14000         CALL dword ptr [0x0040e140]
00406d9f  807c030100           CMP byte ptr [EBX + EAX*0x1 + 0x1],0x0
00406da4  8d5c0301             LEA EBX,[EBX + EAX*0x1 + 0x1]
00406da8  75e3                 JNZ 0x00406d8d
00406daa  e9b7000000           JMP 0x00406e66
00406daf  83f804               CMP EAX,0x4
00406db2  0f85ae000000         JNZ 0x00406e66
00406db8  8064241700           AND byte ptr [ESP + 0x17],0x0
00406dbd  33ff                 XOR EDI,EDI
00406dbf  803e00               CMP byte ptr [ESI],0x0
00406dc2  897c241c             MOV dword ptr [ESP + 0x1c],EDI
00406dc6  8bde                 MOV EBX,ESI
00406dc8  89742418             MOV dword ptr [ESP + 0x18],ESI
00406dcc  0f8494000000         JZ 0x00406e66
00406dd2  0fbe03               MOVSX EAX,byte ptr [EBX]
00406dd5  50                   PUSH EAX
00406dd6  e8d5330000           CALL 0x0040a1b0
00406ddb  8803                 MOV byte ptr [EBX],AL
00406ddd  833d3c10410001       CMP dword ptr [0x0041103c],0x1
00406de4  59                   POP ECX
00406de5  7e0f                 JLE 0x00406df6
00406de7  0fbec0               MOVSX EAX,AL
00406dea  6a04                 PUSH 0x4
00406dec  50                   PUSH EAX
00406ded  e8be350000           CALL 0x0040a3b0
00406df2  59                   POP ECX
00406df3  59                   POP ECX
00406df4  eb0f                 JMP 0x00406e05
00406df6  8b0d300e4100         MOV ECX,dword ptr [0x00410e30]
00406dfc  0fbec0               MOVSX EAX,AL
00406dff  8a0441               MOV AL,byte ptr [ECX + EAX*0x2]
00406e02  83e004               AND EAX,0x4
00406e05  85c0                 TEST EAX,EAX
00406e07  750a                 JNZ 0x00406e13
00406e09  8a03                 MOV AL,byte ptr [EBX]
00406e0b  3c41                 CMP AL,0x41
00406e0d  7c4d                 JL 0x00406e5c
00406e0f  3c46                 CMP AL,0x46
00406e11  7f49                 JG 0x00406e5c
00406e13  837c241c00           CMP dword ptr [ESP + 0x1c],0x0
00406e18  8a03                 MOV AL,byte ptr [EBX]
00406e1a  742a                 JZ 0x00406e46
00406e1c  3c39                 CMP AL,0x39
00406e1e  0fbec0               MOVSX EAX,AL
00406e21  7f05                 JG 0x00406e28
00406e23  83e830               SUB EAX,0x30
00406e26  eb03                 JMP 0x00406e2b
00406e28  83e837               SUB EAX,0x37
00406e2b  8a4c2417             MOV CL,byte ptr [ESP + 0x17]
00406e2f  c0e104               SHL CL,0x4
00406e32  0ac8                 OR CL,AL
00406e34  8b442418             MOV EAX,dword ptr [ESP + 0x18]
00406e38  ff442418             INC dword ptr [ESP + 0x18]
00406e3c  47                   INC EDI
00406e3d  8364241c00           AND dword ptr [ESP + 0x1c],0x0
00406e42  8808                 MOV byte ptr [EAX],CL
00406e44  eb16                 JMP 0x00406e5c
00406e46  3c39                 CMP AL,0x39
00406e48  7f04                 JG 0x00406e4e
00406e4a  2c30                 SUB AL,0x30
00406e4c  eb02                 JMP 0x00406e50
00406e4e  2c37                 SUB AL,0x37
00406e50  88442417             MOV byte ptr [ESP + 0x17],AL
00406e54  c744241c01000000     MOV dword ptr [ESP + 0x1c],0x1
00406e5c  43                   INC EBX
00406e5d  803b00               CMP byte ptr [EBX],0x0
00406e60  0f856cffffff         JNZ 0x00406dd2
00406e66  a1c43b4100           MOV EAX,[0x00413bc4]
00406e6b  57                   PUSH EDI
00406e6c  56                   PUSH ESI
00406e6d  8b0428               MOV EAX,dword ptr [EAX + EBP*0x1]
00406e70  8b880c120000         MOV ECX,dword ptr [EAX + 0x120c]
00406e76  0508010000           ADD EAX,0x108
00406e7b  ff348d38004100       PUSH dword ptr [ECX*0x4 + 0x410038]
00406e82  6a00                 PUSH 0x0
00406e84  50                   PUSH EAX
00406e85  ff742434             PUSH dword ptr [ESP + 0x34]
00406e89  ff1528e04000         CALL dword ptr [0x0040e028]
00406e8f  ff742420             PUSH dword ptr [ESP + 0x20]
00406e93  ff1504e04000         CALL dword ptr [0x0040e004]
00406e99  8b7c2424             MOV EDI,dword ptr [ESP + 0x24]
00406e9d  8b1d40e14000         MOV EBX,dword ptr [0x0040e140]
00406ea3  eb26                 JMP 0x00406ecb
00406ea5  80b80801000000       CMP byte ptr [EAX + 0x108],0x0
00406eac  751d                 JNZ 0x00406ecb
00406eae  83b80812000000       CMP dword ptr [EAX + 0x1208],0x0
00406eb5  7514                 JNZ 0x00406ecb
00406eb7  6a00                 PUSH 0x0
00406eb9  56                   PUSH ESI
00406eba  83c008               ADD EAX,0x8
00406ebd  6a01                 PUSH 0x1
00406ebf  50                   PUSH EAX
00406ec0  6800000080           PUSH 0x80000000
00406ec5  ff1524e04000         CALL dword ptr [0x0040e024]
00406ecb  ff0568384100         INC dword ptr [0x00413868]
00406ed1  47                   INC EDI
00406ed2  3b3d3c3c4100         CMP EDI,dword ptr [0x00413c3c]
00406ed8  897c2424             MOV dword ptr [ESP + 0x24],EDI
00406edc  0f8c6ffdffff         JL 0x00406c51
00406ee2  a1dc3c4100           MOV EAX,[0x00413cdc]
00406ee7  48                   DEC EAX
00406ee8  85c0                 TEST EAX,EAX
00406eea  89442424             MOV dword ptr [ESP + 0x24],EAX
00406eee  0f8c23020000         JL 0x00407117
00406ef4  eb04                 JMP 0x00406efa
00406ef6  8b442424             MOV EAX,dword ptr [ESP + 0x24]
00406efa  833d8c38410000       CMP dword ptr [0x0041388c],0x0
00406f01  0f8510020000         JNZ 0x00407117
00406f07  813d40384100e8030000 CMP dword ptr [0x00413840],0x3e8
00406f11  7416                 JZ 0x00406f29
00406f13  8b0d48384100         MOV ECX,dword ptr [0x00413848]
00406f19  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
00406f1c  83b81002000000       CMP dword ptr [EAX + 0x210],0x0
00406f23  0f84de010000         JZ 0x00407107
00406f29  8b442424             MOV EAX,dword ptr [ESP + 0x24]
00406f2d  668b4c2410           MOV CX,word ptr [ESP + 0x10]
00406f32  8bf0                 MOV ESI,EAX
00406f34  a148384100           MOV EAX,[0x00413848]
00406f39  c1e602               SHL ESI,0x2
00406f3c  8b0430               MOV EAX,dword ptr [EAX + ESI*0x1]
00406f3f  66398814020000       CMP word ptr [EAX + 0x214],CX
00406f46  0f82bb010000         JC 0x00407107
00406f4c  8b2d44e14000         MOV EBP,dword ptr [0x0040e144]
00406f52  8d8424fc010000       LEA EAX,[ESP + 0x1fc]
00406f59  50                   PUSH EAX
00406f5a  ff35b0384100         PUSH dword ptr [0x004138b0]
00406f60  ffd5                 CALL EBP
00406f62  ff35b0384100         PUSH dword ptr [0x004138b0]
00406f68  ffd3                 CALL EBX
00406f6a  8b0d48384100         MOV ECX,dword ptr [0x00413848]
00406f70  8bf8                 MOV EDI,EAX
00406f72  a1b0384100           MOV EAX,[0x004138b0]
00406f77  8b0c31               MOV ECX,dword ptr [ECX + ESI*0x1]
00406f7a  03f8                 ADD EDI,EAX
00406f7c  83c108               ADD ECX,0x8
00406f7f  51                   PUSH ECX
00406f80  50                   PUSH EAX
00406f81  ff15f8e04000         CALL dword ptr [0x0040e0f8]
00406f87  57                   PUSH EDI
00406f88  ffd3                 CALL EBX
00406f8a  83f830               CMP EAX,0x30
00406f8d  7e0b                 JLE 0x00406f9a
00406f8f  83c72d               ADD EDI,0x2d
00406f92  6860054100           PUSH 0x410560
00406f97  57                   PUSH EDI
00406f98  ffd5                 CALL EBP
00406f9a  ff35b0384100         PUSH dword ptr [0x004138b0]
00406fa0  e820040000           CALL 0x004073c5
00406fa5  833d3438410000       CMP dword ptr [0x00413834],0x0
00406fac  59                   POP ECX
00406fad  0f842b010000         JZ 0x004070de
00406fb3  c744242001000000     MOV dword ptr [ESP + 0x20],0x1
00406fbb  a148384100           MOV EAX,[0x00413848]
00406fc0  8d4c2418             LEA ECX,[ESP + 0x18]
00406fc4  51                   PUSH ECX
00406fc5  6a1f                 PUSH 0x1f
00406fc7  8b0430               MOV EAX,dword ptr [EAX + ESI*0x1]
00406fca  6a00                 PUSH 0x0
00406fcc  8d4808               LEA ECX,[EAX + 0x8]
00406fcf  8b800c020000         MOV EAX,dword ptr [EAX + 0x20c]
00406fd5  51                   PUSH ECX
00406fd6  ff348520004100       PUSH dword ptr [EAX*0x4 + 0x410020]
00406fdd  ff150ce04000         CALL dword ptr [0x0040e00c]
00406fe3  85c0                 TEST EAX,EAX
00406fe5  0f85d9000000         JNZ 0x004070c4
00406feb  39442420             CMP dword ptr [ESP + 0x20],EAX
00406fef  7418                 JZ 0x00407009
00406ff1  a148384100           MOV EAX,[0x00413848]
00406ff6  8b0430               MOV EAX,dword ptr [EAX + ESI*0x1]
00406ff9  050c010000           ADD EAX,0x10c
00406ffe  50                   PUSH EAX
00406fff  ff74241c             PUSH dword ptr [ESP + 0x1c]
00407003  ff1520e04000         CALL dword ptr [0x0040e020]
00407009  33ff                 XOR EDI,EDI
0040700b  8d44241c             LEA EAX,[ESP + 0x1c]
0040700f  57                   PUSH EDI
00407010  57                   PUSH EDI
00407011  57                   PUSH EDI
00407012  57                   PUSH EDI
00407013  50                   PUSH EAX
00407014  8d842410040000       LEA EAX,[ESP + 0x410]
0040701b  50                   PUSH EAX
0040701c  57                   PUSH EDI
0040701d  ff742434             PUSH dword ptr [ESP + 0x34]
00407021  897c2440             MOV dword ptr [ESP + 0x40],EDI
00407025  c744243c00010000     MOV dword ptr [ESP + 0x3c],0x100
0040702d  ff1500e04000         CALL dword ptr [0x0040e000]
00407033  8be8                 MOV EBP,EAX
00407035  3bef                 CMP EBP,EDI
00407037  7455                 JZ 0x0040708e
00407039  57                   PUSH EDI
0040703a  57                   PUSH EDI
0040703b  57                   PUSH EDI
0040703c  8d442428             LEA EAX,[ESP + 0x28]
00407040  57                   PUSH EDI
00407041  50                   PUSH EAX
00407042  8d842410040000       LEA EAX,[ESP + 0x410]
00407049  c744243000010000     MOV dword ptr [ESP + 0x30],0x100
00407051  50                   PUSH EAX
00407052  57                   PUSH EDI
00407053  ff742434             PUSH dword ptr [ESP + 0x34]
00407057  ff151ce04000         CALL dword ptr [0x0040e01c]
0040705d  ff742418             PUSH dword ptr [ESP + 0x18]
00407061  8be8                 MOV EBP,EAX
00407063  ff1504e04000         CALL dword ptr [0x0040e004]
00407069  3bef                 CMP EBP,EDI
0040706b  7459                 JZ 0x004070c6
0040706d  a148384100           MOV EAX,[0x00413848]
00407072  8b0430               MOV EAX,dword ptr [EAX + ESI*0x1]
00407075  8d4808               LEA ECX,[EAX + 0x8]
00407078  8b800c020000         MOV EAX,dword ptr [EAX + 0x20c]
0040707e  51                   PUSH ECX
0040707f  ff348520004100       PUSH dword ptr [EAX*0x4 + 0x410020]
00407086  ff1518e04000         CALL dword ptr [0x0040e018]
0040708c  eb0a                 JMP 0x00407098
0040708e  ff742418             PUSH dword ptr [ESP + 0x18]
00407092  ff1504e04000         CALL dword ptr [0x0040e004]
00407098  3bef                 CMP EBP,EDI
0040709a  742a                 JZ 0x004070c6
0040709c  a148384100           MOV EAX,[0x00413848]
004070a1  8b3c30               MOV EDI,dword ptr [EAX + ESI*0x1]
004070a4  8bc7                 MOV EAX,EDI
004070a6  83c008               ADD EAX,0x8
004070a9  50                   PUSH EAX
004070aa  ffd3                 CALL EBX
004070ac  8d443807             LEA EAX,[EAX + EDI*0x1 + 0x7]
004070b0  83c708               ADD EDI,0x8
004070b3  3bc7                 CMP EAX,EDI
004070b5  7608                 JBE 0x004070bf
004070b7  80385c               CMP byte ptr [EAX],0x5c
004070ba  7403                 JZ 0x004070bf
004070bc  48                   DEC EAX
004070bd  ebf4                 JMP 0x004070b3
004070bf  802000               AND byte ptr [EAX],0x0
004070c2  eb02                 JMP 0x004070c6
004070c4  33ed                 XOR EBP,EBP
004070c6  85ed                 TEST EBP,EBP
004070c8  743d                 JZ 0x00407107
004070ca  a148384100           MOV EAX,[0x00413848]
004070cf  8b0430               MOV EAX,dword ptr [EAX + ESI*0x1]
004070d2  80780800             CMP byte ptr [EAX + 0x8],0x0
004070d6  0f85dffeffff         JNZ 0x00406fbb
004070dc  eb29                 JMP 0x00407107
004070de  a148384100           MOV EAX,[0x00413848]
004070e3  8b3430               MOV ESI,dword ptr [EAX + ESI*0x1]
004070e6  80be0c01000000       CMP byte ptr [ESI + 0x10c],0x0
004070ed  7518                 JNZ 0x00407107
004070ef  83be0c02000000       CMP dword ptr [ESI + 0x20c],0x0
004070f6  750f                 JNZ 0x00407107
004070f8  83c608               ADD ESI,0x8
004070fb  56                   PUSH ESI
004070fc  6800000080           PUSH 0x80000000
00407101  ff1518e04000         CALL dword ptr [0x0040e018]
00407107  ff0568384100         INC dword ptr [0x00413868]
0040710d  ff4c2424             DEC dword ptr [ESP + 0x24]
00407111  0f89dffdffff         JNS 0x00406ef6
00407117  a1443c4100           MOV EAX,[0x00413c44]
0040711c  8d78ff               LEA EDI,[EAX + -0x1]
0040711f  85ff                 TEST EDI,EDI
00407121  0f8cbd000000         JL 0x004071e4
00407127  833d8c38410000       CMP dword ptr [0x0041388c],0x0
0040712e  0f8586020000         JNZ 0x004073ba
00407134  813d40384100e8030000 CMP dword ptr [0x00413840],0x3e8
0040713e  7415                 JZ 0x00407155
00407140  a110394100           MOV EAX,[0x00413910]
00407145  8b04b8               MOV EAX,dword ptr [EAX + EDI*0x4]
00407148  83b80401000000       CMP dword ptr [EAX + 0x104],0x0
0040714f  0f8482000000         JZ 0x004071d7
00407155  a110394100           MOV EAX,[0x00413910]
0040715a  8b04b8               MOV EAX,dword ptr [EAX + EDI*0x4]
0040715d  668b8008010000       MOV AX,word ptr [EAX + 0x108]
00407164  663b442410           CMP AX,word ptr [ESP + 0x10]
00407169  726c                 JC 0x004071d7
0040716b  8b2d44e14000         MOV EBP,dword ptr [0x0040e144]
00407171  8d84243c030000       LEA EAX,[ESP + 0x33c]
00407178  50                   PUSH EAX
00407179  ff35b0384100         PUSH dword ptr [0x004138b0]
0040717f  ffd5                 CALL EBP
00407181  ff35b0384100         PUSH dword ptr [0x004138b0]
00407187  ffd3                 CALL EBX
00407189  8b0d10394100         MOV ECX,dword ptr [0x00413910]
0040718f  8bf0                 MOV ESI,EAX
00407191  a1b0384100           MOV EAX,[0x004138b0]
00407196  ff34b9               PUSH dword ptr [ECX + EDI*0x4]
00407199  03f0                 ADD ESI,EAX
0040719b  50                   PUSH EAX
0040719c  ff15f8e04000         CALL dword ptr [0x0040e0f8]
004071a2  56                   PUSH ESI
004071a3  ffd3                 CALL EBX
004071a5  83f830               CMP EAX,0x30
004071a8  7e0b                 JLE 0x004071b5
004071aa  83c62d               ADD ESI,0x2d
004071ad  6860054100           PUSH 0x410560
004071b2  56                   PUSH ESI
004071b3  ffd5                 CALL EBP
004071b5  ff35b0384100         PUSH dword ptr [0x004138b0]
004071bb  e805020000           CALL 0x004073c5
004071c0  a110394100           MOV EAX,[0x00413910]
004071c5  59                   POP ECX
004071c6  8b04b8               MOV EAX,dword ptr [EAX + EDI*0x4]
004071c9  ffb000010000         PUSH dword ptr [EAX + 0x100]
004071cf  50                   PUSH EAX
004071d0  e89e130000           CALL 0x00408573
004071d5  59                   POP ECX
004071d6  59                   POP ECX
004071d7  ff0568384100         INC dword ptr [0x00413868]
004071dd  4f                   DEC EDI
004071de  0f8943ffffff         JNS 0x00407127
004071e4  833d8c38410000       CMP dword ptr [0x0041388c],0x0
004071eb  0f85c9010000         JNZ 0x004073ba
004071f1  8b1df8e04000         MOV EBX,dword ptr [0x0040e0f8]
004071f7  33ed                 XOR EBP,EBP
004071f9  6a01                 PUSH 0x1
004071fb  33f6                 XOR ESI,ESI
004071fd  392d44384100         CMP dword ptr [0x00413844],EBP
00407203  5f                   POP EDI
00407204  0f8ea1000000         JLE 0x004072ab
0040720a  392d8c384100         CMP dword ptr [0x0041388c],EBP
00407210  0f8595000000         JNZ 0x004072ab
00407216  813d40384100e8030000 CMP dword ptr [0x00413840],0x3e8
00407220  7410                 JZ 0x00407232
00407222  a198384100           MOV EAX,[0x00413898]
00407227  8b04b0               MOV EAX,dword ptr [EAX + ESI*0x4]
0040722a  39a800030000         CMP dword ptr [EAX + 0x300],EBP
00407230  7466                 JZ 0x00407298
00407232  a198384100           MOV EAX,[0x00413898]
00407237  8b04b0               MOV EAX,dword ptr [EAX + ESI*0x4]
0040723a  668b8004030000       MOV AX,word ptr [EAX + 0x304]
00407241  663b442410           CMP AX,word ptr [ESP + 0x10]
00407246  7408                 JZ 0x00407250
00407248  392dc8384100         CMP dword ptr [0x004138c8],EBP
0040724e  7548                 JNZ 0x00407298
00407250  3bfd                 CMP EDI,EBP
00407252  7407                 JZ 0x0040725b
00407254  e8ab040000           CALL 0x00407704
00407259  33ff                 XOR EDI,EDI
0040725b  8d84247c020000       LEA EAX,[ESP + 0x27c]
00407262  50                   PUSH EAX
00407263  ff35b0384100         PUSH dword ptr [0x004138b0]
00407269  ff1544e14000         CALL dword ptr [0x0040e144]
0040726f  a198384100           MOV EAX,[0x00413898]
00407274  8b04b0               MOV EAX,dword ptr [EAX + ESI*0x4]
00407277  0500010000           ADD EAX,0x100
0040727c  50                   PUSH EAX
0040727d  ff35b0384100         PUSH dword ptr [0x004138b0]
00407283  ffd3                 CALL EBX
00407285  ff35b0384100         PUSH dword ptr [0x004138b0]
0040728b  e835010000           CALL 0x004073c5
00407290  59                   POP ECX
00407291  56                   PUSH ESI
00407292  e83e060000           CALL 0x004078d5
00407297  59                   POP ECX
00407298  ff0568384100         INC dword ptr [0x00413868]
0040729e  46                   INC ESI
0040729f  3b3544384100         CMP ESI,dword ptr [0x00413844]
004072a5  0f8c5fffffff         JL 0x0040720a
004072ab  3bfd                 CMP EDI,EBP
004072ad  7521                 JNZ 0x004072d0
004072af  a190384100           MOV EAX,[0x00413890]
004072b4  3bc5                 CMP EAX,EBP
004072b6  7406                 JZ 0x004072be
004072b8  50                   PUSH EAX
004072b9  e8ec2c0000           CALL 0x00409faa
004072be  55                   PUSH EBP
004072bf  e801010000           CALL 0x004073c5
004072c4  59                   POP ECX
004072c5  ff353c384100         PUSH dword ptr [0x0041383c]
004072cb  e8d42c0000           CALL 0x00409fa4
004072d0  392dd8384100         CMP dword ptr [0x004138d8],EBP
004072d6  0f84de000000         JZ 0x004073ba
004072dc  813d40384100e8030000 CMP dword ptr [0x00413840],0x3e8
004072e6  7508                 JNZ 0x004072f0
004072e8  392dc8384100         CMP dword ptr [0x004138c8],EBP
004072ee  7418                 JZ 0x00407308
004072f0  392dc8384100         CMP dword ptr [0x004138c8],EBP
004072f6  0f84be000000         JZ 0x004073ba
004072fc  392de8384100         CMP dword ptr [0x004138e8],EBP
00407302  0f85b2000000         JNZ 0x004073ba
00407308  392d34384100         CMP dword ptr [0x00413834],EBP
0040730e  0f84a6000000         JZ 0x004073ba
00407314  8d442420             LEA EAX,[ESP + 0x20]
00407318  50                   PUSH EAX
00407319  6a1f                 PUSH 0x1f
0040731b  55                   PUSH EBP
0040731c  6840054100           PUSH 0x410540
00407321  6802000080           PUSH 0x80000002
00407326  ff150ce04000         CALL dword ptr [0x0040e00c]
0040732c  85c0                 TEST EAX,EAX
0040732e  0f8586000000         JNZ 0x004073ba
00407334  8d44241c             LEA EAX,[ESP + 0x1c]
00407338  c744241c00010000     MOV dword ptr [ESP + 0x1c],0x100
00407340  50                   PUSH EAX
00407341  8d842400040000       LEA EAX,[ESP + 0x400]
00407348  50                   PUSH EAX
00407349  8d442420             LEA EAX,[ESP + 0x20]
0040734d  50                   PUSH EAX
0040734e  55                   PUSH EBP
0040734f  6838054100           PUSH 0x410538
00407354  ff742434             PUSH dword ptr [ESP + 0x34]
00407358  ff1508e04000         CALL dword ptr [0x0040e008]
0040735e  85c0                 TEST EAX,EAX
00407360  754e                 JNZ 0x004073b0
00407362  8d8424fc030000       LEA EAX,[ESP + 0x3fc]
00407369  55                   PUSH EBP
0040736a  50                   PUSH EAX
0040736b  e8c9160000           CALL 0x00408a39
00407370  59                   POP ECX
00407371  8d842400040000       LEA EAX,[ESP + 0x400]
00407378  59                   POP ECX
00407379  6830054100           PUSH 0x410530
0040737e  50                   PUSH EAX
0040737f  ffd3                 CALL EBX
00407381  ff35d8384100         PUSH dword ptr [0x004138d8]
00407387  8d842400040000       LEA EAX,[ESP + 0x400]
0040738e  50                   PUSH EAX
0040738f  ffd3                 CALL EBX
00407391  8d8424fc030000       LEA EAX,[ESP + 0x3fc]
00407398  682c054100           PUSH 0x41052c
0040739d  50                   PUSH EAX
0040739e  ffd3                 CALL EBX
004073a0  8d8424fc030000       LEA EAX,[ESP + 0x3fc]
004073a7  6a05                 PUSH 0x5
004073a9  50                   PUSH EAX
004073aa  ff158ce14000         CALL dword ptr [0x0040e18c]
004073b0  ff742420             PUSH dword ptr [ESP + 0x20]
004073b4  ff1504e04000         CALL dword ptr [0x0040e004]
004073ba  5f                   POP EDI
004073bb  5e                   POP ESI
004073bc  5d                   POP EBP
004073bd  5b                   POP EBX
004073be  81c4ec0b0000         ADD ESP,0xbec
004073c4  c3                   RET

; ==== FUNCTION FUN_004073c5 entry=004073c5 sig=undefined __cdecl FUN_004073c5(int param_1)
004073c5  55                   PUSH EBP
004073c6  8bec                 MOV EBP,ESP
004073c8  81ec18080000         SUB ESP,0x818
004073ce  833d1838410000       CMP dword ptr [0x00413818],0x0
004073d5  0f84e6000000         JZ 0x004074c1
004073db  837d0800             CMP dword ptr [EBP + 0x8],0x0
004073df  56                   PUSH ESI
004073e0  7462                 JZ 0x00407444
004073e2  ff7508               PUSH dword ptr [EBP + 0x8]
004073e5  8d85e8fbffff         LEA EAX,[EBP + 0xfffffbe8]
004073eb  6868054100           PUSH 0x410568
004073f0  50                   PUSH EAX
004073f1  ff156ce24000         CALL dword ptr [0x0040e26c]
004073f7  83c40c               ADD ESP,0xc
004073fa  8d85e8f7ffff         LEA EAX,[EBP + 0xfffff7e8]
00407400  beef030000           MOV ESI,0x3ef
00407405  6800040000           PUSH 0x400
0040740a  50                   PUSH EAX
0040740b  56                   PUSH ESI
0040740c  ff3518384100         PUSH dword ptr [0x00413818]
00407412  ff150ce34000         CALL dword ptr [0x0040e30c]
00407418  8d85e8fbffff         LEA EAX,[EBP + 0xfffffbe8]
0040741e  50                   PUSH EAX
0040741f  8d85e8f7ffff         LEA EAX,[EBP + 0xfffff7e8]
00407425  50                   PUSH EAX
00407426  ff1534e14000         CALL dword ptr [0x0040e134]
0040742c  85c0                 TEST EAX,EAX
0040742e  7414                 JZ 0x00407444
00407430  8d85e8fbffff         LEA EAX,[EBP + 0xfffffbe8]
00407436  50                   PUSH EAX
00407437  56                   PUSH ESI
00407438  ff3518384100         PUSH dword ptr [0x00413818]
0040743e  ff15a4e24000         CALL dword ptr [0x0040e2a4]
00407444  8d45e8               LEA EAX,[EBP + -0x18]
00407447  50                   PUSH EAX
00407448  68f60e0000           PUSH 0xef6
0040744d  ff3518384100         PUSH dword ptr [0x00413818]
00407453  ff15fce24000         CALL dword ptr [0x0040e2fc]
00407459  50                   PUSH EAX
0040745a  ff15a0e24000         CALL dword ptr [0x0040e2a0]
00407460  8b45e8               MOV EAX,dword ptr [EBP + -0x18]
00407463  8b3500e34000         MOV ESI,dword ptr [0x0040e300]
00407469  8945f8               MOV dword ptr [EBP + -0x8],EAX
0040746c  8b45ec               MOV EAX,dword ptr [EBP + -0x14]
0040746f  8945fc               MOV dword ptr [EBP + -0x4],EAX
00407472  8d45f8               LEA EAX,[EBP + -0x8]
00407475  50                   PUSH EAX
00407476  ff3518384100         PUSH dword ptr [0x00413818]
0040747c  ffd6                 CALL ESI
0040747e  8b45f8               MOV EAX,dword ptr [EBP + -0x8]
00407481  8945e8               MOV dword ptr [EBP + -0x18],EAX
00407484  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
00407487  8945ec               MOV dword ptr [EBP + -0x14],EAX
0040748a  8b45f0               MOV EAX,dword ptr [EBP + -0x10]
0040748d  8945f8               MOV dword ptr [EBP + -0x8],EAX
00407490  8b45f4               MOV EAX,dword ptr [EBP + -0xc]
00407493  8945fc               MOV dword ptr [EBP + -0x4],EAX
00407496  8d45f8               LEA EAX,[EBP + -0x8]
00407499  50                   PUSH EAX
0040749a  ff3518384100         PUSH dword ptr [0x00413818]
004074a0  ffd6                 CALL ESI
004074a2  8b45f8               MOV EAX,dword ptr [EBP + -0x8]
004074a5  6a00                 PUSH 0x0
004074a7  8945f0               MOV dword ptr [EBP + -0x10],EAX
004074aa  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
004074ad  8945f4               MOV dword ptr [EBP + -0xc],EAX
004074b0  8d45e8               LEA EAX,[EBP + -0x18]
004074b3  50                   PUSH EAX
004074b4  ff3518384100         PUSH dword ptr [0x00413818]
004074ba  ff1580e24000         CALL dword ptr [0x0040e280]
004074c0  5e                   POP ESI
004074c1  6a01                 PUSH 0x1
004074c3  e803000000           CALL 0x004074cb
004074c8  59                   POP ECX
004074c9  c9                   LEAVE
004074ca  c3                   RET

; ==== FUNCTION FUN_004074cb entry=004074cb sig=undefined __cdecl FUN_004074cb(UINT param_1)
004074cb  55                   PUSH EBP
004074cc  8bec                 MOV EBP,ESP
004074ce  83ec1c               SUB ESP,0x1c
004074d1  56                   PUSH ESI
004074d2  57                   PUSH EDI
004074d3  33ff                 XOR EDI,EDI
004074d5  397d08               CMP dword ptr [EBP + 0x8],EDI
004074d8  7421                 JZ 0x004074fb
004074da  57                   PUSH EDI
004074db  c705e43b410001000000 MOV dword ptr [0x00413be4],0x1
004074e5  ff7508               PUSH dword ptr [EBP + 0x8]
004074e8  686a200000           PUSH 0x206a
004074ed  ff3520384100         PUSH dword ptr [0x00413820]
004074f3  ff1530e24000         CALL dword ptr [0x0040e230]
004074f9  eb06                 JMP 0x00407501
004074fb  893de43b4100         MOV dword ptr [0x00413be4],EDI
00407501  8b352ce24000         MOV ESI,dword ptr [0x0040e22c]
00407507  6a01                 PUSH 0x1
00407509  57                   PUSH EDI
0040750a  57                   PUSH EDI
0040750b  8d45e4               LEA EAX,[EBP + -0x1c]
0040750e  57                   PUSH EDI
0040750f  50                   PUSH EAX
00407510  ffd6                 CALL ESI
00407512  85c0                 TEST EAX,EAX
00407514  7416                 JZ 0x0040752c
00407516  8d45e4               LEA EAX,[EBP + -0x1c]
00407519  50                   PUSH EAX
0040751a  ff1534e24000         CALL dword ptr [0x0040e234]
00407520  8d45e4               LEA EAX,[EBP + -0x1c]
00407523  50                   PUSH EAX
00407524  ff1504e34000         CALL dword ptr [0x0040e304]
0040752a  ebdb                 JMP 0x00407507
0040752c  393de43b4100         CMP dword ptr [0x00413be4],EDI
00407532  75d3                 JNZ 0x00407507
00407534  397d08               CMP dword ptr [EBP + 0x8],EDI
00407537  7411                 JZ 0x0040754a
00407539  686a200000           PUSH 0x206a
0040753e  ff3520384100         PUSH dword ptr [0x00413820]
00407544  ff1508e34000         CALL dword ptr [0x0040e308]
0040754a  5f                   POP EDI
0040754b  5e                   POP ESI
0040754c  c9                   LEAVE
0040754d  c3                   RET

; ==== FUNCTION FUN_0040754e entry=0040754e sig=undefined __cdecl FUN_0040754e(LPCSTR param_1, int param_2)
0040754e  55                   PUSH EBP
0040754f  8bec                 MOV EBP,ESP
00407551  81ec48030000         SUB ESP,0x348
00407557  53                   PUSH EBX
00407558  8b5d08               MOV EBX,dword ptr [EBP + 0x8]
0040755b  56                   PUSH ESI
0040755c  57                   PUSH EDI
0040755d  53                   PUSH EBX
0040755e  ff1540e14000         CALL dword ptr [0x0040e140]
00407564  83f804               CMP EAX,0x4
00407567  0f8c92010000         JL 0x004076ff
0040756d  bf00010000           MOV EDI,0x100
00407572  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
00407578  57                   PUSH EDI
00407579  50                   PUSH EAX
0040757a  ff15f4e04000         CALL dword ptr [0x0040e0f4]
00407580  8b3538e14000         MOV ESI,dword ptr [0x0040e138]
00407586  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
0040758c  50                   PUSH EAX
0040758d  53                   PUSH EBX
0040758e  ffd6                 CALL ESI
00407590  85c0                 TEST EAX,EAX
00407592  0f8467010000         JZ 0x004076ff
00407598  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
0040759e  57                   PUSH EDI
0040759f  50                   PUSH EAX
004075a0  ff152ce14000         CALL dword ptr [0x0040e12c]
004075a6  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
004075ac  50                   PUSH EAX
004075ad  53                   PUSH EBX
004075ae  ffd6                 CALL ESI
004075b0  85c0                 TEST EAX,EAX
004075b2  0f8447010000         JZ 0x004076ff
004075b8  a19c384100           MOV EAX,[0x0041389c]
004075bd  85c0                 TEST EAX,EAX
004075bf  740c                 JZ 0x004075cd
004075c1  50                   PUSH EAX
004075c2  53                   PUSH EBX
004075c3  ffd6                 CALL ESI
004075c5  85c0                 TEST EAX,EAX
004075c7  0f8432010000         JZ 0x004076ff
004075cd  8b3d44e14000         MOV EDI,dword ptr [0x0040e144]
004075d3  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
004075d9  53                   PUSH EBX
004075da  50                   PUSH EAX
004075db  ffd7                 CALL EDI
004075dd  8b35f8e04000         MOV ESI,dword ptr [0x0040e0f8]
004075e3  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
004075e9  680c034100           PUSH 0x41030c
004075ee  50                   PUSH EAX
004075ef  ffd6                 CALL ESI
004075f1  8d85b8fcffff         LEA EAX,[EBP + 0xfffffcb8]
004075f7  50                   PUSH EAX
004075f8  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
004075fe  6a17                 PUSH 0x17
00407600  50                   PUSH EAX
00407601  e89d130000           CALL 0x004089a3
00407606  83c40c               ADD ESP,0xc
00407609  85c0                 TEST EAX,EAX
0040760b  0f85d8000000         JNZ 0x004076e9
00407611  bbcc004100           MOV EBX,0x4100cc
00407616  f685b8fdffff10       TEST byte ptr [EBP + 0xfffffdb8],0x10
0040761d  746c                 JZ 0x0040768b
0040761f  80bdb8fcffff2e       CMP byte ptr [EBP + 0xfffffcb8],0x2e
00407626  0f84a8000000         JZ 0x004076d4
0040762c  ff7508               PUSH dword ptr [EBP + 0x8]
0040762f  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
00407635  50                   PUSH EAX
00407636  ffd7                 CALL EDI
00407638  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
0040763e  53                   PUSH EBX
0040763f  50                   PUSH EAX
00407640  ffd6                 CALL ESI
00407642  8d85b8fcffff         LEA EAX,[EBP + 0xfffffcb8]
00407648  50                   PUSH EAX
00407649  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
0040764f  50                   PUSH EAX
00407650  ffd6                 CALL ESI
00407652  ff750c               PUSH dword ptr [EBP + 0xc]
00407655  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
0040765b  50                   PUSH EAX
0040765c  e8edfeffff           CALL 0x0040754e
00407661  59                   POP ECX
00407662  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
00407668  59                   POP ECX
00407669  50                   PUSH EAX
0040766a  ff1540e14000         CALL dword ptr [0x0040e140]
00407670  8d8d00ffffff         LEA ECX,[EBP + 0xffffff00]
00407676  83e904               SUB ECX,0x4
00407679  80240800             AND byte ptr [EAX + ECX*0x1],0x0
0040767d  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
00407683  50                   PUSH EAX
00407684  e849100000           CALL 0x004086d2
00407689  eb48                 JMP 0x004076d3
0040768b  837d0c00             CMP dword ptr [EBP + 0xc],0x0
0040768f  7443                 JZ 0x004076d4
00407691  ff7508               PUSH dword ptr [EBP + 0x8]
00407694  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
0040769a  50                   PUSH EAX
0040769b  ffd7                 CALL EDI
0040769d  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
004076a3  53                   PUSH EBX
004076a4  50                   PUSH EAX
004076a5  ffd6                 CALL ESI
004076a7  8d85b8fcffff         LEA EAX,[EBP + 0xfffffcb8]
004076ad  50                   PUSH EAX
004076ae  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
004076b4  50                   PUSH EAX
004076b5  ffd6                 CALL ESI
004076b7  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
004076bd  6a00                 PUSH 0x0
004076bf  50                   PUSH EAX
004076c0  e8bb120000           CALL 0x00408980
004076c5  59                   POP ECX
004076c6  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
004076cc  59                   POP ECX
004076cd  50                   PUSH EAX
004076ce  e840100000           CALL 0x00408713
004076d3  59                   POP ECX
004076d4  8d85b8fcffff         LEA EAX,[EBP + 0xfffffcb8]
004076da  50                   PUSH EAX
004076db  e805130000           CALL 0x004089e5
004076e0  85c0                 TEST EAX,EAX
004076e2  59                   POP ECX
004076e3  0f842dffffff         JZ 0x00407616
004076e9  8d85b8fcffff         LEA EAX,[EBP + 0xfffffcb8]
004076ef  50                   PUSH EAX
004076f0  e82d130000           CALL 0x00408a22
004076f5  59                   POP ECX
004076f6  ff7508               PUSH dword ptr [EBP + 0x8]
004076f9  e8d40f0000           CALL 0x004086d2
004076fe  59                   POP ECX
004076ff  5f                   POP EDI
00407700  5e                   POP ESI
00407701  5b                   POP EBX
00407702  c9                   LEAVE
00407703  c3                   RET

; ==== FUNCTION FUN_00407704 entry=00407704 sig=undefined __stdcall FUN_00407704(void)
00407704  55                   PUSH EBP
00407705  8bec                 MOV EBP,ESP
00407707  81ec08010000         SUB ESP,0x108
0040770d  53                   PUSH EBX
0040770e  56                   PUSH ESI
0040770f  33db                 XOR EBX,EBX
00407711  57                   PUSH EDI
00407712  53                   PUSH EBX
00407713  6800f00300           PUSH 0x3f000
00407718  68bc364000           PUSH 0x4036bc
0040771d  683c384100           PUSH 0x41383c
00407722  e8a7280000           CALL 0x00409fce
00407727  3bc3                 CMP EAX,EBX
00407729  0f85a1010000         JNZ 0x004078d0
0040772f  bfec030000           MOV EDI,0x3ec
00407734  57                   PUSH EDI
00407735  6878054100           PUSH 0x410578
0040773a  ff353c384100         PUSH dword ptr [0x0041383c]
00407740  e883280000           CALL 0x00409fc8
00407745  53                   PUSH EBX
00407746  50                   PUSH EAX
00407747  50                   PUSH EAX
00407748  ff353c384100         PUSH dword ptr [0x0041383c]
0040774e  e86f280000           CALL 0x00409fc2
00407753  3bc3                 CMP EAX,EBX
00407755  a390384100           MOV [0x00413890],EAX
0040775a  0f8470010000         JZ 0x004078d0
00407760  57                   PUSH EDI
00407761  6870054100           PUSH 0x410570
00407766  ff353c384100         PUSH dword ptr [0x0041383c]
0040776c  e857280000           CALL 0x00409fc8
00407771  53                   PUSH EBX
00407772  6888130000           PUSH 0x1388
00407777  68b0200000           PUSH 0x20b0
0040777c  6a01                 PUSH 0x1
0040777e  50                   PUSH EAX
0040777f  ff3590384100         PUSH dword ptr [0x00413890]
00407785  53                   PUSH EBX
00407786  53                   PUSH EBX
00407787  e830280000           CALL 0x00409fbc
0040778c  8bf0                 MOV ESI,EAX
0040778e  3bf3                 CMP ESI,EBX
00407790  0f843a010000         JZ 0x004078d0
00407796  53                   PUSH EBX
00407797  6800400000           PUSH 0x4000
0040779c  ff35503c4100         PUSH dword ptr [0x00413c50]
004077a2  56                   PUSH ESI
004077a3  e80e280000           CALL 0x00409fb6
004077a8  ff35503c4100         PUSH dword ptr [0x00413c50]
004077ae  ff1540e14000         CALL dword ptr [0x0040e140]
004077b4  40                   INC EAX
004077b5  50                   PUSH EAX
004077b6  e828210000           CALL 0x004098e3
004077bb  59                   POP ECX
004077bc  a350384100           MOV [0x00413850],EAX
004077c1  ff35503c4100         PUSH dword ptr [0x00413c50]
004077c7  50                   PUSH EAX
004077c8  ff1544e14000         CALL dword ptr [0x0040e144]
004077ce  56                   PUSH ESI
004077cf  e8dc270000           CALL 0x00409fb0
004077d4  8b3550384100         MOV ESI,dword ptr [0x00413850]
004077da  381e                 CMP byte ptr [ESI],BL
004077dc  0f84ee000000         JZ 0x004078d0
004077e2  895df8               MOV dword ptr [EBP + -0x8],EBX
004077e5  6a0d                 PUSH 0xd
004077e7  56                   PUSH ESI
004077e8  e803290000           CALL 0x0040a0f0
004077ed  59                   POP ECX
004077ee  3bc3                 CMP EAX,EBX
004077f0  59                   POP ECX
004077f1  8945fc               MOV dword ptr [EBP + -0x4],EAX
004077f4  7510                 JNZ 0x00407806
004077f6  8d85f8feffff         LEA EAX,[EBP + 0xfffffef8]
004077fc  56                   PUSH ESI
004077fd  50                   PUSH EAX
004077fe  ff1544e14000         CALL dword ptr [0x0040e144]
00407804  eb21                 JMP 0x00407827
00407806  2bc6                 SUB EAX,ESI
00407808  50                   PUSH EAX
00407809  8d85f8feffff         LEA EAX,[EBP + 0xfffffef8]
0040780f  56                   PUSH ESI
00407810  50                   PUSH EAX
00407811  e89a2a0000           CALL 0x0040a2b0
00407816  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
00407819  83c40c               ADD ESP,0xc
0040781c  8d8405f8feffff       LEA EAX,[EBP + EAX*0x1 + 0xfffffef8]
00407823  2bc6                 SUB EAX,ESI
00407825  8818                 MOV byte ptr [EAX],BL
00407827  8d85f8feffff         LEA EAX,[EBP + 0xfffffef8]
0040782d  57                   PUSH EDI
0040782e  50                   PUSH EAX
0040782f  ff353c384100         PUSH dword ptr [0x0041383c]
00407835  e88e270000           CALL 0x00409fc8
0040783a  53                   PUSH EBX
0040783b  6888130000           PUSH 0x1388
00407840  68b0200000           PUSH 0x20b0
00407845  6a01                 PUSH 0x1
00407847  50                   PUSH EAX
00407848  ff3590384100         PUSH dword ptr [0x00413890]
0040784e  53                   PUSH EBX
0040784f  53                   PUSH EBX
00407850  e867270000           CALL 0x00409fbc
00407855  3bc3                 CMP EAX,EBX
00407857  8945fc               MOV dword ptr [EBP + -0x4],EAX
0040785a  7452                 JZ 0x004078ae
0040785c  53                   PUSH EBX
0040785d  6800400000           PUSH 0x4000
00407862  ff35503c4100         PUSH dword ptr [0x00413c50]
00407868  50                   PUSH EAX
00407869  e848270000           CALL 0x00409fb6
0040786e  ff35503c4100         PUSH dword ptr [0x00413c50]
00407874  ff1540e14000         CALL dword ptr [0x0040e140]
0040787a  40                   INC EAX
0040787b  50                   PUSH EAX
0040787c  e862200000           CALL 0x004098e3
00407881  8b15e4384100         MOV EDX,dword ptr [0x004138e4]
00407887  59                   POP ECX
00407888  8b4df8               MOV ECX,dword ptr [EBP + -0x8]
0040788b  89040a               MOV dword ptr [EDX + ECX*0x1],EAX
0040788e  ff35503c4100         PUSH dword ptr [0x00413c50]
00407894  a1e4384100           MOV EAX,[0x004138e4]
00407899  ff3408               PUSH dword ptr [EAX + ECX*0x1]
0040789c  ff1544e14000         CALL dword ptr [0x0040e144]
004078a2  ff75fc               PUSH dword ptr [EBP + -0x4]
004078a5  8345f804             ADD dword ptr [EBP + -0x8],0x4
004078a9  e802270000           CALL 0x00409fb0
004078ae  8a06                 MOV AL,byte ptr [ESI]
004078b0  3ac3                 CMP AL,BL
004078b2  7407                 JZ 0x004078bb
004078b4  3c0d                 CMP AL,0xd
004078b6  7403                 JZ 0x004078bb
004078b8  46                   INC ESI
004078b9  ebf3                 JMP 0x004078ae
004078bb  8a06                 MOV AL,byte ptr [ESI]
004078bd  3c0d                 CMP AL,0xd
004078bf  7404                 JZ 0x004078c5
004078c1  3c0a                 CMP AL,0xa
004078c3  7503                 JNZ 0x004078c8
004078c5  46                   INC ESI
004078c6  ebf3                 JMP 0x004078bb
004078c8  381e                 CMP byte ptr [ESI],BL
004078ca  0f8515ffffff         JNZ 0x004077e5
004078d0  5f                   POP EDI
004078d1  5e                   POP ESI
004078d2  5b                   POP EBX
004078d3  c9                   LEAVE
004078d4  c3                   RET

; ==== FUNCTION FUN_004078d5 entry=004078d5 sig=undefined __cdecl FUN_004078d5(int param_1)
004078d5  55                   PUSH EBP
004078d6  8bec                 MOV EBP,ESP
004078d8  81ec04040000         SUB ESP,0x404
004078de  a1e4384100           MOV EAX,[0x004138e4]
004078e3  833800               CMP dword ptr [EAX],0x0
004078e6  0f8450020000         JZ 0x00407b3c
004078ec  8365fc00             AND dword ptr [EBP + -0x4],0x0
004078f0  57                   PUSH EDI
004078f1  56                   PUSH ESI
004078f2  53                   PUSH EBX
004078f3  8b4dfc               MOV ECX,dword ptr [EBP + -0x4]
004078f6  8b0c08               MOV ECX,dword ptr [EAX + ECX*0x1]
004078f9  803922               CMP byte ptr [ECX],0x22
004078fc  0f8526020000         JNZ 0x00407b28
00407902  8d7101               LEA ESI,[ECX + 0x1]
00407905  6a22                 PUSH 0x22
00407907  56                   PUSH ESI
00407908  e8e3270000           CALL 0x0040a0f0
0040790d  8bf8                 MOV EDI,EAX
0040790f  59                   POP ECX
00407910  85ff                 TEST EDI,EDI
00407912  59                   POP ECX
00407913  0f840a020000         JZ 0x00407b23
00407919  2bc6                 SUB EAX,ESI
0040791b  50                   PUSH EAX
0040791c  8d85fcfdffff         LEA EAX,[EBP + 0xfffffdfc]
00407922  56                   PUSH ESI
00407923  50                   PUSH EAX
00407924  e887290000           CALL 0x0040a2b0
00407929  8d843dfcfdffff       LEA EAX,[EBP + EDI*0x1 + 0xfffffdfc]
00407930  83c40c               ADD ESP,0xc
00407933  2bc6                 SUB EAX,ESI
00407935  802000               AND byte ptr [EAX],0x0
00407938  8a06                 MOV AL,byte ptr [ESI]
0040793a  84c0                 TEST AL,AL
0040793c  7407                 JZ 0x00407945
0040793e  3c0d                 CMP AL,0xd
00407940  7403                 JZ 0x00407945
00407942  46                   INC ESI
00407943  ebf3                 JMP 0x00407938
00407945  803e00               CMP byte ptr [ESI],0x0
00407948  7402                 JZ 0x0040794c
0040794a  46                   INC ESI
0040794b  46                   INC ESI
0040794c  8a06                 MOV AL,byte ptr [ESI]
0040794e  84c0                 TEST AL,AL
00407950  0f84cd010000         JZ 0x00407b23
00407956  3c22                 CMP AL,0x22
00407958  0f85b0010000         JNZ 0x00407b0e
0040795e  8bde                 MOV EBX,ESI
00407960  46                   INC ESI
00407961  6a22                 PUSH 0x22
00407963  56                   PUSH ESI
00407964  e887270000           CALL 0x0040a0f0
00407969  8bf8                 MOV EDI,EAX
0040796b  59                   POP ECX
0040796c  85ff                 TEST EDI,EDI
0040796e  59                   POP ECX
0040796f  0f8499010000         JZ 0x00407b0e
00407975  2bc6                 SUB EAX,ESI
00407977  50                   PUSH EAX
00407978  8d85fcfcffff         LEA EAX,[EBP + 0xfffffcfc]
0040797e  56                   PUSH ESI
0040797f  50                   PUSH EAX
00407980  e82b290000           CALL 0x0040a2b0
00407985  8d843dfcfcffff       LEA EAX,[EBP + EDI*0x1 + 0xfffffcfc]
0040798c  83c40c               ADD ESP,0xc
0040798f  2bc6                 SUB EAX,ESI
00407991  8d7701               LEA ESI,[EDI + 0x1]
00407994  802000               AND byte ptr [EAX],0x0
00407997  803e2c               CMP byte ptr [ESI],0x2c
0040799a  0f856e010000         JNZ 0x00407b0e
004079a0  807e0122             CMP byte ptr [ESI + 0x1],0x22
004079a4  0f8564010000         JNZ 0x00407b0e
004079aa  46                   INC ESI
004079ab  6a22                 PUSH 0x22
004079ad  46                   INC ESI
004079ae  56                   PUSH ESI
004079af  e83c270000           CALL 0x0040a0f0
004079b4  8bf8                 MOV EDI,EAX
004079b6  59                   POP ECX
004079b7  85ff                 TEST EDI,EDI
004079b9  59                   POP ECX
004079ba  0f844e010000         JZ 0x00407b0e
004079c0  2bc6                 SUB EAX,ESI
004079c2  50                   PUSH EAX
004079c3  8d85fcfbffff         LEA EAX,[EBP + 0xfffffbfc]
004079c9  56                   PUSH ESI
004079ca  50                   PUSH EAX
004079cb  e8e0280000           CALL 0x0040a2b0
004079d0  8d843dfcfbffff       LEA EAX,[EBP + EDI*0x1 + 0xfffffbfc]
004079d7  83c40c               ADD ESP,0xc
004079da  2bc6                 SUB EAX,ESI
004079dc  802000               AND byte ptr [EAX],0x0
004079df  8b4508               MOV EAX,dword ptr [EBP + 0x8]
004079e2  8bf8                 MOV EDI,EAX
004079e4  a198384100           MOV EAX,[0x00413898]
004079e9  c1e702               SHL EDI,0x2
004079ec  8b0438               MOV EAX,dword ptr [EAX + EDI*0x1]
004079ef  0500020000           ADD EAX,0x200
004079f4  50                   PUSH EAX
004079f5  8d85fcfbffff         LEA EAX,[EBP + 0xfffffbfc]
004079fb  50                   PUSH EAX
004079fc  ff1538e14000         CALL dword ptr [0x0040e138]
00407a02  85c0                 TEST EAX,EAX
00407a04  7440                 JZ 0x00407a46
00407a06  a198384100           MOV EAX,[0x00413898]
00407a0b  ff3438               PUSH dword ptr [EAX + EDI*0x1]
00407a0e  8d85fcfdffff         LEA EAX,[EBP + 0xfffffdfc]
00407a14  50                   PUSH EAX
00407a15  ff1538e14000         CALL dword ptr [0x0040e138]
00407a1b  85c0                 TEST EAX,EAX
00407a1d  0f85eb000000         JNZ 0x00407b0e
00407a23  a198384100           MOV EAX,[0x00413898]
00407a28  8b0438               MOV EAX,dword ptr [EAX + EDI*0x1]
00407a2b  0500010000           ADD EAX,0x100
00407a30  50                   PUSH EAX
00407a31  8d85fcfcffff         LEA EAX,[EBP + 0xfffffcfc]
00407a37  50                   PUSH EAX
00407a38  ff1538e14000         CALL dword ptr [0x0040e138]
00407a3e  85c0                 TEST EAX,EAX
00407a40  0f85c8000000         JNZ 0x00407b0e
00407a46  8b3d6ce24000         MOV EDI,dword ptr [0x0040e26c]
00407a4c  8d85fcfdffff         LEA EAX,[EBP + 0xfffffdfc]
00407a52  50                   PUSH EAX
00407a53  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
00407a59  68c4054100           PUSH 0x4105c4
00407a5e  50                   PUSH EAX
00407a5f  c6032a               MOV byte ptr [EBX],0x2a
00407a62  ffd7                 CALL EDI
00407a64  83c40c               ADD ESP,0xc
00407a67  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
00407a6d  50                   PUSH EAX
00407a6e  e8cb000000           CALL 0x00407b3e
00407a73  59                   POP ECX
00407a74  8d85fcfdffff         LEA EAX,[EBP + 0xfffffdfc]
00407a7a  50                   PUSH EAX
00407a7b  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
00407a81  68b0054100           PUSH 0x4105b0
00407a86  50                   PUSH EAX
00407a87  ffd7                 CALL EDI
00407a89  83c40c               ADD ESP,0xc
00407a8c  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
00407a92  50                   PUSH EAX
00407a93  e8a6000000           CALL 0x00407b3e
00407a98  59                   POP ECX
00407a99  8d85fcfcffff         LEA EAX,[EBP + 0xfffffcfc]
00407a9f  50                   PUSH EAX
00407aa0  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
00407aa6  689c054100           PUSH 0x41059c
00407aab  50                   PUSH EAX
00407aac  ffd7                 CALL EDI
00407aae  83c40c               ADD ESP,0xc
00407ab1  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
00407ab7  50                   PUSH EAX
00407ab8  e881000000           CALL 0x00407b3e
00407abd  a1e4384100           MOV EAX,[0x004138e4]
00407ac2  59                   POP ECX
00407ac3  8b4dfc               MOV ECX,dword ptr [EBP + -0x4]
00407ac6  ff3408               PUSH dword ptr [EAX + ECX*0x1]
00407ac9  e8b7000000           CALL 0x00407b85
00407ace  85c0                 TEST EAX,EAX
00407ad0  59                   POP ECX
00407ad1  743b                 JZ 0x00407b0e
00407ad3  8d85fcfdffff         LEA EAX,[EBP + 0xfffffdfc]
00407ad9  6894054100           PUSH 0x410594
00407ade  50                   PUSH EAX
00407adf  ff1538e14000         CALL dword ptr [0x0040e138]
00407ae5  85c0                 TEST EAX,EAX
00407ae7  7425                 JZ 0x00407b0e
00407ae9  8d85fcfdffff         LEA EAX,[EBP + 0xfffffdfc]
00407aef  50                   PUSH EAX
00407af0  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
00407af6  6880054100           PUSH 0x410580
00407afb  50                   PUSH EAX
00407afc  ffd7                 CALL EDI
00407afe  83c40c               ADD ESP,0xc
00407b01  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
00407b07  50                   PUSH EAX
00407b08  e831000000           CALL 0x00407b3e
00407b0d  59                   POP ECX
00407b0e  8a06                 MOV AL,byte ptr [ESI]
00407b10  84c0                 TEST AL,AL
00407b12  0f842dfeffff         JZ 0x00407945
00407b18  3c0d                 CMP AL,0xd
00407b1a  0f8425feffff         JZ 0x00407945
00407b20  46                   INC ESI
00407b21  ebeb                 JMP 0x00407b0e
00407b23  a1e4384100           MOV EAX,[0x004138e4]
00407b28  8345fc04             ADD dword ptr [EBP + -0x4],0x4
00407b2c  8b4dfc               MOV ECX,dword ptr [EBP + -0x4]
00407b2f  833c0800             CMP dword ptr [EAX + ECX*0x1],0x0
00407b33  0f85bafdffff         JNZ 0x004078f3
00407b39  5b                   POP EBX
00407b3a  5e                   POP ESI
00407b3b  5f                   POP EDI
00407b3c  c9                   LEAVE
00407b3d  c3                   RET

; ==== FUNCTION FUN_00407b3e entry=00407b3e sig=undefined __cdecl FUN_00407b3e(LPBYTE param_1)
00407b3e  56                   PUSH ESI
00407b3f  33f6                 XOR ESI,ESI
00407b41  393590384100         CMP dword ptr [0x00413890],ESI
00407b47  743a                 JZ 0x00407b83
00407b49  56                   PUSH ESI
00407b4a  56                   PUSH ESI
00407b4b  56                   PUSH ESI
00407b4c  56                   PUSH ESI
00407b4d  ff742418             PUSH dword ptr [ESP + 0x18]
00407b51  ff1540e14000         CALL dword ptr [0x0040e140]
00407b57  40                   INC EAX
00407b58  50                   PUSH EAX
00407b59  ff74241c             PUSH dword ptr [ESP + 0x1c]
00407b5d  ff353c384100         PUSH dword ptr [0x0041383c]
00407b63  e86c240000           CALL 0x00409fd4
00407b68  56                   PUSH ESI
00407b69  68e8030000           PUSH 0x3e8
00407b6e  6850400000           PUSH 0x4050
00407b73  56                   PUSH ESI
00407b74  56                   PUSH ESI
00407b75  ff3590384100         PUSH dword ptr [0x00413890]
00407b7b  6aff                 PUSH -0x1
00407b7d  50                   PUSH EAX
00407b7e  e839240000           CALL 0x00409fbc
00407b83  5e                   POP ESI
00407b84  c3                   RET

; ==== FUNCTION FUN_00407b85 entry=00407b85 sig=undefined4 __cdecl FUN_00407b85(char * param_1)
00407b85  8b542404             MOV EDX,dword ptr [ESP + 0x4]
00407b89  8bc2                 MOV EAX,EDX
00407b8b  8a0a                 MOV CL,byte ptr [EDX]
00407b8d  84c9                 TEST CL,CL
00407b8f  740b                 JZ 0x00407b9c
00407b91  80f90d               CMP CL,0xd
00407b94  7406                 JZ 0x00407b9c
00407b96  8a4801               MOV CL,byte ptr [EAX + 0x1]
00407b99  40                   INC EAX
00407b9a  ebf1                 JMP 0x00407b8d
00407b9c  803800               CMP byte ptr [EAX],0x0
00407b9f  7402                 JZ 0x00407ba3
00407ba1  40                   INC EAX
00407ba2  40                   INC EAX
00407ba3  8a08                 MOV CL,byte ptr [EAX]
00407ba5  84c9                 TEST CL,CL
00407ba7  7417                 JZ 0x00407bc0
00407ba9  80f922               CMP CL,0x22
00407bac  740f                 JZ 0x00407bbd
00407bae  84c9                 TEST CL,CL
00407bb0  74ea                 JZ 0x00407b9c
00407bb2  80f90d               CMP CL,0xd
00407bb5  74e5                 JZ 0x00407b9c
00407bb7  8a4801               MOV CL,byte ptr [EAX + 0x1]
00407bba  40                   INC EAX
00407bbb  ebf1                 JMP 0x00407bae
00407bbd  33c0                 XOR EAX,EAX
00407bbf  c3                   RET
00407bc0  6a01                 PUSH 0x1
00407bc2  c6022a               MOV byte ptr [EDX],0x2a
00407bc5  58                   POP EAX
00407bc6  c3                   RET

; ==== FUNCTION FUN_00407bc7 entry=00407bc7 sig=undefined __cdecl FUN_00407bc7(HWND param_1, LPCSTR param_2)
00407bc7  55                   PUSH EBP
00407bc8  8bec                 MOV EBP,ESP
00407bca  81ec28030000         SUB ESP,0x328
00407bd0  53                   PUSH EBX
00407bd1  56                   PUSH ESI
00407bd2  8b750c               MOV ESI,dword ptr [EBP + 0xc]
00407bd5  57                   PUSH EDI
00407bd6  8bce                 MOV ECX,ESI
00407bd8  8a06                 MOV AL,byte ptr [ESI]
00407bda  894dfc               MOV dword ptr [EBP + -0x4],ECX
00407bdd  3c0a                 CMP AL,0xa
00407bdf  7411                 JZ 0x00407bf2
00407be1  3c0d                 CMP AL,0xd
00407be3  740d                 JZ 0x00407bf2
00407be5  84c0                 TEST AL,AL
00407be7  7409                 JZ 0x00407bf2
00407be9  8a4101               MOV AL,byte ptr [ECX + 0x1]
00407bec  41                   INC ECX
00407bed  894dfc               MOV dword ptr [EBP + -0x4],ECX
00407bf0  ebeb                 JMP 0x00407bdd
00407bf2  8a01                 MOV AL,byte ptr [ECX]
00407bf4  3c0d                 CMP AL,0xd
00407bf6  7404                 JZ 0x00407bfc
00407bf8  3c0a                 CMP AL,0xa
00407bfa  7503                 JNZ 0x00407bff
00407bfc  41                   INC ECX
00407bfd  ebf3                 JMP 0x00407bf2
00407bff  803900               CMP byte ptr [ECX],0x0
00407c02  894dfc               MOV dword ptr [EBP + -0x4],ECX
00407c05  7412                 JZ 0x00407c19
00407c07  8b3d44e14000         MOV EDI,dword ptr [0x0040e144]
00407c0d  8d85d8fdffff         LEA EAX,[EBP + 0xfffffdd8]
00407c13  51                   PUSH ECX
00407c14  50                   PUSH EAX
00407c15  ffd7                 CALL EDI
00407c17  eb13                 JMP 0x00407c2c
00407c19  8b3d44e14000         MOV EDI,dword ptr [0x0040e144]
00407c1f  8d85d8fdffff         LEA EAX,[EBP + 0xfffffdd8]
00407c25  56                   PUSH ESI
00407c26  50                   PUSH EAX
00407c27  ffd7                 CALL EDI
00407c29  8975fc               MOV dword ptr [EBP + -0x4],ESI
00407c2c  8b5d08               MOV EBX,dword ptr [EBP + 0x8]
00407c2f  85db                 TEST EBX,EBX
00407c31  0f8477010000         JZ 0x00407dae
00407c37  8d45dc               LEA EAX,[EBP + -0x24]
00407c3a  50                   PUSH EAX
00407c3b  53                   PUSH EBX
00407c3c  ff15a0e24000         CALL dword ptr [0x0040e2a0]
00407c42  8b45dc               MOV EAX,dword ptr [EBP + -0x24]
00407c45  6a00                 PUSH 0x0
00407c47  2945e4               SUB dword ptr [EBP + -0x1c],EAX
00407c4a  6a00                 PUSH 0x0
00407c4c  6a31                 PUSH 0x31
00407c4e  53                   PUSH EBX
00407c4f  ff15d0e24000         CALL dword ptr [0x0040e2d0]
00407c55  53                   PUSH EBX
00407c56  8945f8               MOV dword ptr [EBP + -0x8],EAX
00407c59  ff1598e24000         CALL dword ptr [0x0040e298]
00407c5f  837df800             CMP dword ptr [EBP + -0x8],0x0
00407c63  89450c               MOV dword ptr [EBP + 0xc],EAX
00407c66  740d                 JZ 0x00407c75
00407c68  ff75f8               PUSH dword ptr [EBP + -0x8]
00407c6b  50                   PUSH EAX
00407c6c  ff1560e04000         CALL dword ptr [0x0040e060]
00407c72  8945ec               MOV dword ptr [EBP + -0x14],EAX
00407c75  8d45f0               LEA EAX,[EBP + -0x10]
00407c78  50                   PUSH EAX
00407c79  56                   PUSH ESI
00407c7a  ff1540e14000         CALL dword ptr [0x0040e140]
00407c80  50                   PUSH EAX
00407c81  8d85d8fdffff         LEA EAX,[EBP + 0xfffffdd8]
00407c87  50                   PUSH EAX
00407c88  ff750c               PUSH dword ptr [EBP + 0xc]
00407c8b  ff1574e04000         CALL dword ptr [0x0040e074]
00407c91  8b45f0               MOV EAX,dword ptr [EBP + -0x10]
00407c94  3b45e4               CMP EAX,dword ptr [EBP + -0x1c]
00407c97  0f8cf3000000         JL 0x00407d90
00407c9d  8d85d8fdffff         LEA EAX,[EBP + 0xfffffdd8]
00407ca3  6800010000           PUSH 0x100
00407ca8  50                   PUSH EAX
00407ca9  8d85dcfeffff         LEA EAX,[EBP + 0xfffffedc]
00407caf  50                   PUSH EAX
00407cb0  ff1514e14000         CALL dword ptr [0x0040e114]
00407cb6  8065db00             AND byte ptr [EBP + -0x25],0x0
00407cba  8a85dcfeffff         MOV AL,byte ptr [EBP + 0xfffffedc]
00407cc0  8db5dcfeffff         LEA ESI,[EBP + 0xfffffedc]
00407cc6  84c0                 TEST AL,AL
00407cc8  740a                 JZ 0x00407cd4
00407cca  3c5c                 CMP AL,0x5c
00407ccc  7406                 JZ 0x00407cd4
00407cce  8a4601               MOV AL,byte ptr [ESI + 0x1]
00407cd1  46                   INC ESI
00407cd2  ebf2                 JMP 0x00407cc6
00407cd4  803e5c               CMP byte ptr [ESI],0x5c
00407cd7  7501                 JNZ 0x00407cda
00407cd9  46                   INC ESI
00407cda  8b45f0               MOV EAX,dword ptr [EBP + -0x10]
00407cdd  3b45e4               CMP EAX,dword ptr [EBP + -0x1c]
00407ce0  0f8c9e000000         JL 0x00407d84
00407ce6  bb60054100           MOV EBX,0x410560
00407ceb  803e2e               CMP byte ptr [ESI],0x2e
00407cee  8bc6                 MOV EAX,ESI
00407cf0  7515                 JNZ 0x00407d07
00407cf2  b12e                 MOV CL,0x2e
00407cf4  80f95c               CMP CL,0x5c
00407cf7  7408                 JZ 0x00407d01
00407cf9  8a4801               MOV CL,byte ptr [EAX + 0x1]
00407cfc  40                   INC EAX
00407cfd  84c9                 TEST CL,CL
00407cff  75f3                 JNZ 0x00407cf4
00407d01  80385c               CMP byte ptr [EAX],0x5c
00407d04  7501                 JNZ 0x00407d07
00407d06  40                   INC EAX
00407d07  8a08                 MOV CL,byte ptr [EAX]
00407d09  84c9                 TEST CL,CL
00407d0b  7405                 JZ 0x00407d12
00407d0d  80f95c               CMP CL,0x5c
00407d10  75f4                 JNZ 0x00407d06
00407d12  803800               CMP byte ptr [EAX],0x0
00407d15  7423                 JZ 0x00407d3a
00407d17  8bc8                 MOV ECX,EAX
00407d19  2bce                 SUB ECX,ESI
00407d1b  83f903               CMP ECX,0x3
00407d1e  7e1a                 JLE 0x00407d3a
00407d20  50                   PUSH EAX
00407d21  8d85d8fcffff         LEA EAX,[EBP + 0xfffffcd8]
00407d27  50                   PUSH EAX
00407d28  ffd7                 CALL EDI
00407d2a  53                   PUSH EBX
00407d2b  56                   PUSH ESI
00407d2c  ffd7                 CALL EDI
00407d2e  8d85d8fcffff         LEA EAX,[EBP + 0xfffffcd8]
00407d34  50                   PUSH EAX
00407d35  8d4603               LEA EAX,[ESI + 0x3]
00407d38  eb19                 JMP 0x00407d53
00407d3a  8d85dcfeffff         LEA EAX,[EBP + 0xfffffedc]
00407d40  53                   PUSH EBX
00407d41  50                   PUSH EAX
00407d42  ff1540e14000         CALL dword ptr [0x0040e140]
00407d48  8d8ddcfeffff         LEA ECX,[EBP + 0xfffffedc]
00407d4e  83e904               SUB ECX,0x4
00407d51  03c1                 ADD EAX,ECX
00407d53  50                   PUSH EAX
00407d54  ffd7                 CALL EDI
00407d56  8d45f0               LEA EAX,[EBP + -0x10]
00407d59  50                   PUSH EAX
00407d5a  8d85dcfeffff         LEA EAX,[EBP + 0xfffffedc]
00407d60  50                   PUSH EAX
00407d61  ff1540e14000         CALL dword ptr [0x0040e140]
00407d67  50                   PUSH EAX
00407d68  8d85dcfeffff         LEA EAX,[EBP + 0xfffffedc]
00407d6e  50                   PUSH EAX
00407d6f  ff750c               PUSH dword ptr [EBP + 0xc]
00407d72  ff1574e04000         CALL dword ptr [0x0040e074]
00407d78  8b45f0               MOV EAX,dword ptr [EBP + -0x10]
00407d7b  3b45e4               CMP EAX,dword ptr [EBP + -0x1c]
00407d7e  0f8d67ffffff         JGE 0x00407ceb
00407d84  8d85dcfeffff         LEA EAX,[EBP + 0xfffffedc]
00407d8a  50                   PUSH EAX
00407d8b  ff75fc               PUSH dword ptr [EBP + -0x4]
00407d8e  ffd7                 CALL EDI
00407d90  837df800             CMP dword ptr [EBP + -0x8],0x0
00407d94  740c                 JZ 0x00407da2
00407d96  ff75ec               PUSH dword ptr [EBP + -0x14]
00407d99  ff750c               PUSH dword ptr [EBP + 0xc]
00407d9c  ff1560e04000         CALL dword ptr [0x0040e060]
00407da2  ff750c               PUSH dword ptr [EBP + 0xc]
00407da5  ff7508               PUSH dword ptr [EBP + 0x8]
00407da8  ff157ce24000         CALL dword ptr [0x0040e27c]
00407dae  5f                   POP EDI
00407daf  5e                   POP ESI
00407db0  5b                   POP EBX
00407db1  c9                   LEAVE
00407db2  c3                   RET

; ==== FUNCTION FUN_00407db3 entry=00407db3 sig=char __cdecl FUN_00407db3(LPCSTR param_1, undefined4 param_2, int param_3)
00407db3  55                   PUSH EBP
00407db4  8bec                 MOV EBP,ESP
00407db6  81ec0c020000         SUB ESP,0x20c
00407dbc  53                   PUSH EBX
00407dbd  33db                 XOR EBX,EBX
00407dbf  391d5c384100         CMP dword ptr [0x0041385c],EBX
00407dc5  56                   PUSH ESI
00407dc6  57                   PUSH EDI
00407dc7  0f84e6010000         JZ 0x00407fb3
00407dcd  8d45fc               LEA EAX,[EBP + -0x4]
00407dd0  50                   PUSH EAX
00407dd1  6a1f                 PUSH 0x1f
00407dd3  53                   PUSH EBX
00407dd4  ff354c004100         PUSH dword ptr [0x0041004c]
00407dda  6802000080           PUSH 0x80000002
00407ddf  ff150ce04000         CALL dword ptr [0x0040e00c]
00407de5  85c0                 TEST EAX,EAX
00407de7  0f85c6010000         JNZ 0x00407fb3
00407ded  8d45f4               LEA EAX,[EBP + -0xc]
00407df0  be00010000           MOV ESI,0x100
00407df5  50                   PUSH EAX
00407df6  8d85f4feffff         LEA EAX,[EBP + 0xfffffef4]
00407dfc  50                   PUSH EAX
00407dfd  8d45f8               LEA EAX,[EBP + -0x8]
00407e00  50                   PUSH EAX
00407e01  53                   PUSH EBX
00407e02  ff7508               PUSH dword ptr [EBP + 0x8]
00407e05  8975f4               MOV dword ptr [EBP + -0xc],ESI
00407e08  ff75fc               PUSH dword ptr [EBP + -0x4]
00407e0b  ff1508e04000         CALL dword ptr [0x0040e008]
00407e11  85c0                 TEST EAX,EAX
00407e13  0f8591010000         JNZ 0x00407faa
00407e19  83c8ff               OR EAX,0xffffffff
00407e1c  837df801             CMP dword ptr [EBP + -0x8],0x1
00407e20  6a04                 PUSH 0x4
00407e22  5f                   POP EDI
00407e23  750f                 JNZ 0x00407e34
00407e25  8d85f4feffff         LEA EAX,[EBP + 0xfffffef4]
00407e2b  50                   PUSH EAX
00407e2c  e8bf260000           CALL 0x0040a4f0
00407e31  59                   POP ECX
00407e32  eb16                 JMP 0x00407e4a
00407e34  397df8               CMP dword ptr [EBP + -0x8],EDI
00407e37  740b                 JZ 0x00407e44
00407e39  837df803             CMP dword ptr [EBP + -0x8],0x3
00407e3d  750b                 JNZ 0x00407e4a
00407e3f  397df4               CMP dword ptr [EBP + -0xc],EDI
00407e42  7506                 JNZ 0x00407e4a
00407e44  8b85f4feffff         MOV EAX,dword ptr [EBP + 0xfffffef4]
00407e4a  3bc3                 CMP EAX,EBX
00407e4c  7f05                 JG 0x00407e53
00407e4e  83c8ff               OR EAX,0xffffffff
00407e51  eb14                 JMP 0x00407e67
00407e53  391dc8384100         CMP dword ptr [0x004138c8],EBX
00407e59  7403                 JZ 0x00407e5e
00407e5b  48                   DEC EAX
00407e5c  eb03                 JMP 0x00407e61
00407e5e  2b4510               SUB EAX,dword ptr [EBP + 0x10]
00407e61  3bc3                 CMP EAX,EBX
00407e63  7d04                 JGE 0x00407e69
00407e65  33c0                 XOR EAX,EAX
00407e67  3bc3                 CMP EAX,EBX
00407e69  0f8515010000         JNZ 0x00407f84
00407e6f  8d85f4fdffff         LEA EAX,[EBP + 0xfffffdf4]
00407e75  56                   PUSH ESI
00407e76  50                   PUSH EAX
00407e77  6a26                 PUSH 0x26
00407e79  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00407e7f  e8af0f0000           CALL 0x00408e33
00407e84  83c410               ADD ESP,0x10
00407e87  8d85f4fdffff         LEA EAX,[EBP + 0xfffffdf4]
00407e8d  ff7508               PUSH dword ptr [EBP + 0x8]
00407e90  50                   PUSH EAX
00407e91  ff35b0384100         PUSH dword ptr [0x004138b0]
00407e97  ff156ce24000         CALL dword ptr [0x0040e26c]
00407e9d  83c40c               ADD ESP,0xc
00407ea0  8d85f4fdffff         LEA EAX,[EBP + 0xfffffdf4]
00407ea6  56                   PUSH ESI
00407ea7  50                   PUSH EAX
00407ea8  6a27                 PUSH 0x27
00407eaa  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00407eb0  e87e0f0000           CALL 0x00408e33
00407eb5  83c410               ADD ESP,0x10
00407eb8  8d85f4fdffff         LEA EAX,[EBP + 0xfffffdf4]
00407ebe  50                   PUSH EAX
00407ebf  ff35b0384100         PUSH dword ptr [0x004138b0]
00407ec5  ff15f8e04000         CALL dword ptr [0x0040e0f8]
00407ecb  391d78384100         CMP dword ptr [0x00413878],EBX
00407ed1  beed030000           MOV ESI,0x3ed
00407ed6  0f858f000000         JNZ 0x00407f6b
00407edc  391dd03c4100         CMP dword ptr [0x00413cd0],EBX
00407ee2  0f8583000000         JNZ 0x00407f6b
00407ee8  391d94384100         CMP dword ptr [0x00413894],EBX
00407eee  7404                 JZ 0x00407ef4
00407ef0  8bfe                 MOV EDI,ESI
00407ef2  eb7a                 JMP 0x00407f6e
00407ef4  391dcc3b4100         CMP dword ptr [0x00413bcc],EBX
00407efa  740e                 JZ 0x00407f0a
00407efc  6a19                 PUSH 0x19
00407efe  ff3518384100         PUSH dword ptr [0x00413818]
00407f04  ff1508e34000         CALL dword ptr [0x0040e308]
00407f0a  53                   PUSH EBX
00407f0b  6899224000           PUSH 0x402299
00407f10  ff3518384100         PUSH dword ptr [0x00413818]
00407f16  6a68                 PUSH 0x68
00407f18  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00407f1e  ff15cce24000         CALL dword ptr [0x0040e2cc]
00407f24  391dcc3b4100         CMP dword ptr [0x00413bcc],EBX
00407f2a  8bf8                 MOV EDI,EAX
00407f2c  7414                 JZ 0x00407f42
00407f2e  53                   PUSH EBX
00407f2f  6896000000           PUSH 0x96
00407f34  6a19                 PUSH 0x19
00407f36  ff3518384100         PUSH dword ptr [0x00413818]
00407f3c  ff1530e24000         CALL dword ptr [0x0040e230]
00407f42  6a01                 PUSH 0x1
00407f44  58                   POP EAX
00407f45  3bf8                 CMP EDI,EAX
00407f47  7505                 JNZ 0x00407f4e
00407f49  a3d03c4100           MOV [0x00413cd0],EAX
00407f4e  81ffef030000         CMP EDI,0x3ef
00407f54  7507                 JNZ 0x00407f5d
00407f56  8bfe                 MOV EDI,ESI
00407f58  a394384100           MOV [0x00413894],EAX
00407f5d  ff3518384100         PUSH dword ptr [0x00413818]
00407f63  ff15f0e24000         CALL dword ptr [0x0040e2f0]
00407f69  eb03                 JMP 0x00407f6e
00407f6b  6a07                 PUSH 0x7
00407f6d  5f                   POP EDI
00407f6e  ff7508               PUSH dword ptr [EBP + 0x8]
00407f71  ff75fc               PUSH dword ptr [EBP + -0x4]
00407f74  ff1520e04000         CALL dword ptr [0x0040e020]
00407f7a  33c0                 XOR EAX,EAX
00407f7c  3bfe                 CMP EDI,ESI
00407f7e  0f94c0               SETZ AL
00407f81  40                   INC EAX
00407f82  eb31                 JMP 0x00407fb5
00407f84  83f801               CMP EAX,0x1
00407f87  7c21                 JL 0x00407faa
00407f89  8985f4feffff         MOV dword ptr [EBP + 0xfffffef4],EAX
00407f8f  8d85f4feffff         LEA EAX,[EBP + 0xfffffef4]
00407f95  57                   PUSH EDI
00407f96  50                   PUSH EAX
00407f97  57                   PUSH EDI
00407f98  53                   PUSH EBX
00407f99  ff7508               PUSH dword ptr [EBP + 0x8]
00407f9c  ff75fc               PUSH dword ptr [EBP + -0x4]
00407f9f  ff1528e04000         CALL dword ptr [0x0040e028]
00407fa5  6a01                 PUSH 0x1
00407fa7  58                   POP EAX
00407fa8  eb0b                 JMP 0x00407fb5
00407faa  ff75fc               PUSH dword ptr [EBP + -0x4]
00407fad  ff1504e04000         CALL dword ptr [0x0040e004]
00407fb3  33c0                 XOR EAX,EAX
00407fb5  5f                   POP EDI
00407fb6  5e                   POP ESI
00407fb7  5b                   POP EBX
00407fb8  c9                   LEAVE
00407fb9  c3                   RET

; ==== FUNCTION FUN_00407fba entry=00407fba sig=undefined4 __cdecl FUN_00407fba(char * param_1, LPCSTR param_2, int param_3)
00407fba  55                   PUSH EBP
00407fbb  8bec                 MOV EBP,ESP
00407fbd  81ec48030000         SUB ESP,0x348
00407fc3  53                   PUSH EBX
00407fc4  8b5d08               MOV EBX,dword ptr [EBP + 0x8]
00407fc7  56                   PUSH ESI
00407fc8  57                   PUSH EDI
00407fc9  6a2a                 PUSH 0x2a
00407fcb  53                   PUSH EBX
00407fcc  e81f210000           CALL 0x0040a0f0
00407fd1  59                   POP ECX
00407fd2  85c0                 TEST EAX,EAX
00407fd4  59                   POP ECX
00407fd5  7538                 JNZ 0x0040800f
00407fd7  6a3f                 PUSH 0x3f
00407fd9  53                   PUSH EBX
00407fda  e811210000           CALL 0x0040a0f0
00407fdf  59                   POP ECX
00407fe0  85c0                 TEST EAX,EAX
00407fe2  59                   POP ECX
00407fe3  752a                 JNZ 0x0040800f
00407fe5  53                   PUSH EBX
00407fe6  e840010000           CALL 0x0040812b
00407feb  837d1000             CMP dword ptr [EBP + 0x10],0x0
00407fef  59                   POP ECX
00407ff0  0f842d010000         JZ 0x00408123
00407ff6  8b450c               MOV EAX,dword ptr [EBP + 0xc]
00407ff9  803800               CMP byte ptr [EAX],0x0
00407ffc  0f8421010000         JZ 0x00408123
00408002  53                   PUSH EBX
00408003  50                   PUSH EAX
00408004  e893150000           CALL 0x0040959c
00408009  59                   POP ECX
0040800a  e913010000           JMP 0x00408122
0040800f  8b3d40e14000         MOV EDI,dword ptr [0x0040e140]
00408015  53                   PUSH EBX
00408016  ffd7                 CALL EDI
00408018  83f803               CMP EAX,0x3
0040801b  7c76                 JL 0x00408093
0040801d  8d4418fd             LEA EAX,[EAX + EBX*0x1 + -0x3]
00408021  68d8054100           PUSH 0x4105d8
00408026  50                   PUSH EAX
00408027  ff1534e14000         CALL dword ptr [0x0040e134]
0040802d  85c0                 TEST EAX,EAX
0040802f  7562                 JNZ 0x00408093
00408031  53                   PUSH EBX
00408032  ffd7                 CALL EDI
00408034  83f804               CMP EAX,0x4
00408037  7c53                 JL 0x0040808c
00408039  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
0040803f  6800010000           PUSH 0x100
00408044  50                   PUSH EAX
00408045  ff15f4e04000         CALL dword ptr [0x0040e0f4]
0040804b  8b3538e14000         MOV ESI,dword ptr [0x0040e138]
00408051  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
00408057  50                   PUSH EAX
00408058  53                   PUSH EBX
00408059  ffd6                 CALL ESI
0040805b  85c0                 TEST EAX,EAX
0040805d  742d                 JZ 0x0040808c
0040805f  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
00408065  6800010000           PUSH 0x100
0040806a  50                   PUSH EAX
0040806b  ff152ce14000         CALL dword ptr [0x0040e12c]
00408071  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
00408077  50                   PUSH EAX
00408078  53                   PUSH EBX
00408079  ffd6                 CALL ESI
0040807b  85c0                 TEST EAX,EAX
0040807d  740d                 JZ 0x0040808c
0040807f  ff359c384100         PUSH dword ptr [0x0041389c]
00408085  53                   PUSH EBX
00408086  ffd6                 CALL ESI
00408088  85c0                 TEST EAX,EAX
0040808a  7507                 JNZ 0x00408093
0040808c  33c0                 XOR EAX,EAX
0040808e  e993000000           JMP 0x00408126
00408093  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
00408099  53                   PUSH EBX
0040809a  8b1d44e14000         MOV EBX,dword ptr [0x0040e144]
004080a0  50                   PUSH EAX
004080a1  ffd3                 CALL EBX
004080a3  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
004080a9  50                   PUSH EAX
004080aa  ffd7                 CALL EDI
004080ac  8db405fffeffff       LEA ESI,[EBP + EAX*0x1 + 0xfffffeff]
004080b3  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
004080b9  3bf0                 CMP ESI,EAX
004080bb  7608                 JBE 0x004080c5
004080bd  803e5c               CMP byte ptr [ESI],0x5c
004080c0  7408                 JZ 0x004080ca
004080c2  4e                   DEC ESI
004080c3  ebee                 JMP 0x004080b3
004080c5  803e5c               CMP byte ptr [ESI],0x5c
004080c8  7501                 JNZ 0x004080cb
004080ca  46                   INC ESI
004080cb  8d85b8fcffff         LEA EAX,[EBP + 0xfffffcb8]
004080d1  50                   PUSH EAX
004080d2  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
004080d8  6a07                 PUSH 0x7
004080da  50                   PUSH EAX
004080db  e8c3080000           CALL 0x004089a3
004080e0  83c40c               ADD ESP,0xc
004080e3  85c0                 TEST EAX,EAX
004080e5  752f                 JNZ 0x00408116
004080e7  f685b8fdffff10       TEST byte ptr [EBP + 0xfffffdb8],0x10
004080ee  7517                 JNZ 0x00408107
004080f0  8d85b8fcffff         LEA EAX,[EBP + 0xfffffcb8]
004080f6  50                   PUSH EAX
004080f7  56                   PUSH ESI
004080f8  ffd3                 CALL EBX
004080fa  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
00408100  50                   PUSH EAX
00408101  e825000000           CALL 0x0040812b
00408106  59                   POP ECX
00408107  8d85b8fcffff         LEA EAX,[EBP + 0xfffffcb8]
0040810d  50                   PUSH EAX
0040810e  e8d2080000           CALL 0x004089e5
00408113  59                   POP ECX
00408114  ebcd                 JMP 0x004080e3
00408116  8d85b8fcffff         LEA EAX,[EBP + 0xfffffcb8]
0040811c  50                   PUSH EAX
0040811d  e800090000           CALL 0x00408a22
00408122  59                   POP ECX
00408123  6a01                 PUSH 0x1
00408125  58                   POP EAX
00408126  5f                   POP EDI
00408127  5e                   POP ESI
00408128  5b                   POP EBX
00408129  c9                   LEAVE
0040812a  c3                   RET

; ==== FUNCTION FUN_0040812b entry=0040812b sig=undefined __cdecl FUN_0040812b(LPCSTR param_1)
0040812b  55                   PUSH EBP
0040812c  8bec                 MOV EBP,ESP
0040812e  81ec00010000         SUB ESP,0x100
00408134  56                   PUSH ESI
00408135  8b7508               MOV ESI,dword ptr [EBP + 0x8]
00408138  57                   PUSH EDI
00408139  6a00                 PUSH 0x0
0040813b  56                   PUSH ESI
0040813c  e83f080000           CALL 0x00408980
00408141  59                   POP ECX
00408142  59                   POP ECX
00408143  56                   PUSH ESI
00408144  e8ca050000           CALL 0x00408713
00408149  59                   POP ECX
0040814a  56                   PUSH ESI
0040814b  ff1540e14000         CALL dword ptr [0x0040e140]
00408151  8bf8                 MOV EDI,EAX
00408153  83ff04               CMP EDI,0x4
00408156  7e5e                 JLE 0x004081b6
00408158  833d3438410000       CMP dword ptr [0x00413834],0x0
0040815f  7455                 JZ 0x004081b6
00408161  8d4437fc             LEA EAX,[EDI + ESI*0x1 + -0x4]
00408165  68ec054100           PUSH 0x4105ec
0040816a  50                   PUSH EAX
0040816b  ff1538e14000         CALL dword ptr [0x0040e138]
00408171  85c0                 TEST EAX,EAX
00408173  7541                 JNZ 0x004081b6
00408175  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
0040817b  56                   PUSH ESI
0040817c  8b3544e14000         MOV ESI,dword ptr [0x0040e144]
00408182  50                   PUSH EAX
00408183  ffd6                 CALL ESI
00408185  8dbc3dfcfeffff       LEA EDI,[EBP + EDI*0x1 + 0xfffffefc]
0040818c  68e4054100           PUSH 0x4105e4
00408191  57                   PUSH EDI
00408192  ffd6                 CALL ESI
00408194  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
0040819a  50                   PUSH EAX
0040819b  e873050000           CALL 0x00408713
004081a0  59                   POP ECX
004081a1  68dc054100           PUSH 0x4105dc
004081a6  57                   PUSH EDI
004081a7  ffd6                 CALL ESI
004081a9  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
004081af  50                   PUSH EAX
004081b0  e85e050000           CALL 0x00408713
004081b5  59                   POP ECX
004081b6  5f                   POP EDI
004081b7  5e                   POP ESI
004081b8  c9                   LEAVE
004081b9  c3                   RET

; ==== FUNCTION FUN_004081ba entry=004081ba sig=undefined __cdecl FUN_004081ba(LPCSTR param_1, LPCSTR param_2, int param_3)
004081ba  55                   PUSH EBP
004081bb  8bec                 MOV EBP,ESP
004081bd  81ec54040000         SUB ESP,0x454
004081c3  53                   PUSH EBX
004081c4  56                   PUSH ESI
004081c5  8b3544e14000         MOV ESI,dword ptr [0x0040e144]
004081cb  57                   PUSH EDI
004081cc  ff7508               PUSH dword ptr [EBP + 0x8]
004081cf  ff35b0384100         PUSH dword ptr [0x004138b0]
004081d5  ffd6                 CALL ESI
004081d7  8b7d0c               MOV EDI,dword ptr [EBP + 0xc]
004081da  57                   PUSH EDI
004081db  ff35b0384100         PUSH dword ptr [0x004138b0]
004081e1  ff15f8e04000         CALL dword ptr [0x0040e0f8]
004081e7  ff35b0384100         PUSH dword ptr [0x004138b0]
004081ed  68ef030000           PUSH 0x3ef
004081f2  ff3518384100         PUSH dword ptr [0x00413818]
004081f8  ff15fce24000         CALL dword ptr [0x0040e2fc]
004081fe  50                   PUSH EAX
004081ff  e8c3f9ffff           CALL 0x00407bc7
00408204  59                   POP ECX
00408205  59                   POP ECX
00408206  ff35b0384100         PUSH dword ptr [0x004138b0]
0040820c  e8b4f1ffff           CALL 0x004073c5
00408211  59                   POP ECX
00408212  8d85acfeffff         LEA EAX,[EBP + 0xfffffeac]
00408218  57                   PUSH EDI
00408219  50                   PUSH EAX
0040821a  ffd6                 CALL ESI
0040821c  8d85acfeffff         LEA EAX,[EBP + 0xfffffeac]
00408222  50                   PUSH EAX
00408223  e889150000           CALL 0x004097b1
00408228  59                   POP ECX
00408229  33db                 XOR EBX,EBX
0040822b  8d8dacfeffff         LEA ECX,[EBP + 0xfffffeac]
00408231  3bc1                 CMP EAX,ECX
00408233  7603                 JBE 0x00408238
00408235  8858ff               MOV byte ptr [EAX + -0x1],BL
00408238  8d85acfeffff         LEA EAX,[EBP + 0xfffffeac]
0040823e  53                   PUSH EBX
0040823f  50                   PUSH EAX
00408240  e8f4070000           CALL 0x00408a39
00408245  59                   POP ECX
00408246  8d85acfeffff         LEA EAX,[EBP + 0xfffffeac]
0040824c  59                   POP ECX
0040824d  50                   PUSH EAX
0040824e  e88d1d0000           CALL 0x00409fe0
00408253  59                   POP ECX
00408254  57                   PUSH EDI
00408255  ff1540e14000         CALL dword ptr [0x0040e140]
0040825b  8d4438fd             LEA EAX,[EAX + EDI*0x1 + -0x3]
0040825f  3bc7                 CMP EAX,EDI
00408261  7302                 JNC 0x00408265
00408263  8bc7                 MOV EAX,EDI
00408265  6890014100           PUSH 0x410190
0040826a  50                   PUSH EAX
0040826b  ff1538e14000         CALL dword ptr [0x0040e138]
00408271  85c0                 TEST EAX,EAX
00408273  57                   PUSH EDI
00408274  7579                 JNZ 0x004082ef
00408276  8d85acfdffff         LEA EAX,[EBP + 0xfffffdac]
0040827c  50                   PUSH EAX
0040827d  ffd6                 CALL ESI
0040827f  8d85acfdffff         LEA EAX,[EBP + 0xfffffdac]
00408285  53                   PUSH EBX
00408286  50                   PUSH EAX
00408287  e8ad070000           CALL 0x00408a39
0040828c  59                   POP ECX
0040828d  8d45ac               LEA EAX,[EBP + -0x54]
00408290  59                   POP ECX
00408291  6a44                 PUSH 0x44
00408293  5e                   POP ESI
00408294  56                   PUSH ESI
00408295  53                   PUSH EBX
00408296  50                   PUSH EAX
00408297  e8e41d0000           CALL 0x0040a080
0040829c  83c40c               ADD ESP,0xc
0040829f  8d85acfdffff         LEA EAX,[EBP + 0xfffffdac]
004082a5  8975ac               MOV dword ptr [EBP + -0x54],ESI
004082a8  50                   PUSH EAX
004082a9  8d85acfbffff         LEA EAX,[EBP + 0xfffffbac]
004082af  6848064100           PUSH 0x410648
004082b4  50                   PUSH EAX
004082b5  ff156ce24000         CALL dword ptr [0x0040e26c]
004082bb  83c40c               ADD ESP,0xc
004082be  8d45f0               LEA EAX,[EBP + -0x10]
004082c1  50                   PUSH EAX
004082c2  8d45ac               LEA EAX,[EBP + -0x54]
004082c5  50                   PUSH EAX
004082c6  53                   PUSH EBX
004082c7  53                   PUSH EBX
004082c8  53                   PUSH EBX
004082c9  53                   PUSH EBX
004082ca  53                   PUSH EBX
004082cb  8d85acfbffff         LEA EAX,[EBP + 0xfffffbac]
004082d1  53                   PUSH EBX
004082d2  50                   PUSH EAX
004082d3  53                   PUSH EBX
004082d4  ff1518e14000         CALL dword ptr [0x0040e118]
004082da  85c0                 TEST EAX,EAX
004082dc  0f8488000000         JZ 0x0040836a
004082e2  6aff                 PUSH -0x1
004082e4  ff75f0               PUSH dword ptr [EBP + -0x10]
004082e7  ff151ce14000         CALL dword ptr [0x0040e11c]
004082ed  eb7b                 JMP 0x0040836a
004082ef  e8ef080000           CALL 0x00408be3
004082f4  3bc3                 CMP EAX,EBX
004082f6  59                   POP ECX
004082f7  7471                 JZ 0x0040836a
004082f9  683c064100           PUSH 0x41063c
004082fe  ff15e4e04000         CALL dword ptr [0x0040e0e4]
00408304  3bc3                 CMP EAX,EBX
00408306  894508               MOV dword ptr [EBP + 0x8],EAX
00408309  745f                 JZ 0x0040836a
0040830b  8b35e8e04000         MOV ESI,dword ptr [0x0040e0e8]
00408311  682c064100           PUSH 0x41062c
00408316  50                   PUSH EAX
00408317  ffd6                 CALL ESI
00408319  3bc3                 CMP EAX,EBX
0040831b  7434                 JZ 0x00408351
0040831d  53                   PUSH EBX
0040831e  ffd0                 CALL EAX
00408320  85c0                 TEST EAX,EAX
00408322  752d                 JNZ 0x00408351
00408324  57                   PUSH EDI
00408325  ff15e4e04000         CALL dword ptr [0x0040e0e4]
0040832b  8bf8                 MOV EDI,EAX
0040832d  3bfb                 CMP EDI,EBX
0040832f  7420                 JZ 0x00408351
00408331  395d10               CMP dword ptr [EBP + 0x10],EBX
00408334  b818064100           MOV EAX,0x410618
00408339  7505                 JNZ 0x00408340
0040833b  b804064100           MOV EAX,0x410604
00408340  50                   PUSH EAX
00408341  57                   PUSH EDI
00408342  ffd6                 CALL ESI
00408344  3bc3                 CMP EAX,EBX
00408346  7402                 JZ 0x0040834a
00408348  ffd0                 CALL EAX
0040834a  57                   PUSH EDI
0040834b  ff15ece04000         CALL dword ptr [0x0040e0ec]
00408351  68f4054100           PUSH 0x4105f4
00408356  ff7508               PUSH dword ptr [EBP + 0x8]
00408359  ffd6                 CALL ESI
0040835b  3bc3                 CMP EAX,EBX
0040835d  7402                 JZ 0x00408361
0040835f  ffd0                 CALL EAX
00408361  ff7508               PUSH dword ptr [EBP + 0x8]
00408364  ff15ece04000         CALL dword ptr [0x0040e0ec]
0040836a  5f                   POP EDI
0040836b  5e                   POP ESI
0040836c  5b                   POP EBX
0040836d  c9                   LEAVE
0040836e  c3                   RET

; ==== FUNCTION FUN_0040836f entry=0040836f sig=undefined4 __stdcall FUN_0040836f(void)
0040836f  55                   PUSH EBP
00408370  8bec                 MOV EBP,ESP
00408372  81ec0c030000         SUB ESP,0x30c
00408378  53                   PUSH EBX
00408379  56                   PUSH ESI
0040837a  33f6                 XOR ESI,ESI
0040837c  57                   PUSH EDI
0040837d  393534384100         CMP dword ptr [0x00413834],ESI
00408383  0f84e3010000         JZ 0x0040856c
00408389  8d45fc               LEA EAX,[EBP + -0x4]
0040838c  bfa0064100           MOV EDI,0x4106a0
00408391  50                   PUSH EAX
00408392  6a1f                 PUSH 0x1f
00408394  56                   PUSH ESI
00408395  57                   PUSH EDI
00408396  6802000080           PUSH 0x80000002
0040839b  ff150ce04000         CALL dword ptr [0x0040e00c]
004083a1  85c0                 TEST EAX,EAX
004083a3  0f85c3010000         JNZ 0x0040856c
004083a9  8d45f8               LEA EAX,[EBP + -0x8]
004083ac  bb00010000           MOV EBX,0x100
004083b1  50                   PUSH EAX
004083b2  8d85f4feffff         LEA EAX,[EBP + 0xfffffef4]
004083b8  50                   PUSH EAX
004083b9  8d45f4               LEA EAX,[EBP + -0xc]
004083bc  50                   PUSH EAX
004083bd  56                   PUSH ESI
004083be  be94064100           MOV ESI,0x410694
004083c3  895df8               MOV dword ptr [EBP + -0x8],EBX
004083c6  56                   PUSH ESI
004083c7  ff75fc               PUSH dword ptr [EBP + -0x4]
004083ca  ff1508e04000         CALL dword ptr [0x0040e008]
004083d0  85c0                 TEST EAX,EAX
004083d2  0f858b010000         JNZ 0x00408563
004083d8  83c8ff               OR EAX,0xffffffff
004083db  837df401             CMP dword ptr [EBP + -0xc],0x1
004083df  750f                 JNZ 0x004083f0
004083e1  8d85f4feffff         LEA EAX,[EBP + 0xfffffef4]
004083e7  50                   PUSH EAX
004083e8  e803210000           CALL 0x0040a4f0
004083ed  59                   POP ECX
004083ee  eb18                 JMP 0x00408408
004083f0  837df404             CMP dword ptr [EBP + -0xc],0x4
004083f4  740c                 JZ 0x00408402
004083f6  837df403             CMP dword ptr [EBP + -0xc],0x3
004083fa  750c                 JNZ 0x00408408
004083fc  837df804             CMP dword ptr [EBP + -0x8],0x4
00408400  7506                 JNZ 0x00408408
00408402  8b85f4feffff         MOV EAX,dword ptr [EBP + 0xfffffef4]
00408408  83f801               CMP EAX,0x1
0040840b  0f8515010000         JNZ 0x00408526
00408411  6a00                 PUSH 0x0
00408413  6888064100           PUSH 0x410688
00408418  ff15bce24000         CALL dword ptr [0x0040e2bc]
0040841e  85c0                 TEST EAX,EAX
00408420  7453                 JZ 0x00408475
00408422  8d85f4fcffff         LEA EAX,[EBP + 0xfffffcf4]
00408428  53                   PUSH EBX
00408429  50                   PUSH EAX
0040842a  6a1c                 PUSH 0x1c
0040842c  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00408432  e8fc090000           CALL 0x00408e33
00408437  83c410               ADD ESP,0x10
0040843a  8d85f4fdffff         LEA EAX,[EBP + 0xfffffdf4]
00408440  53                   PUSH EBX
00408441  50                   PUSH EAX
00408442  6a19                 PUSH 0x19
00408444  ff35d03b4100         PUSH dword ptr [0x00413bd0]
0040844a  e8e4090000           CALL 0x00408e33
0040844f  83c410               ADD ESP,0x10
00408452  8d85f4fdffff         LEA EAX,[EBP + 0xfffffdf4]
00408458  6a02                 PUSH 0x2
0040845a  50                   PUSH EAX
0040845b  8d85f4fcffff         LEA EAX,[EBP + 0xfffffcf4]
00408461  50                   PUSH EAX
00408462  ff3518384100         PUSH dword ptr [0x00413818]
00408468  ff1568e24000         CALL dword ptr [0x0040e268]
0040846e  83f803               CMP EAX,0x3
00408471  740c                 JZ 0x0040847f
00408473  eb03                 JMP 0x00408478
00408475  6a05                 PUSH 0x5
00408477  58                   POP EAX
00408478  83f805               CMP EAX,0x5
0040847b  740a                 JZ 0x00408487
0040847d  eb92                 JMP 0x00408411
0040847f  6a01                 PUSH 0x1
00408481  58                   POP EAX
00408482  e9e7000000           JMP 0x0040856e
00408487  ff75fc               PUSH dword ptr [EBP + -0x4]
0040848a  8b3504e04000         MOV ESI,dword ptr [0x0040e004]
00408490  ffd6                 CALL ESI
00408492  6a02                 PUSH 0x2
00408494  57                   PUSH EDI
00408495  e8d9000000           CALL 0x00408573
0040849a  59                   POP ECX
0040849b  59                   POP ECX
0040849c  6a02                 PUSH 0x2
0040849e  6870064100           PUSH 0x410670
004084a3  e8cb000000           CALL 0x00408573
004084a8  59                   POP ECX
004084a9  8d45fc               LEA EAX,[EBP + -0x4]
004084ac  59                   POP ECX
004084ad  bf5c064100           MOV EDI,0x41065c
004084b2  50                   PUSH EAX
004084b3  6a1f                 PUSH 0x1f
004084b5  6a00                 PUSH 0x0
004084b7  57                   PUSH EDI
004084b8  6802000080           PUSH 0x80000002
004084bd  ff150ce04000         CALL dword ptr [0x0040e00c]
004084c3  85c0                 TEST EAX,EAX
004084c5  0f85a1000000         JNZ 0x0040856c
004084cb  50                   PUSH EAX
004084cc  50                   PUSH EAX
004084cd  50                   PUSH EAX
004084ce  8d4df8               LEA ECX,[EBP + -0x8]
004084d1  50                   PUSH EAX
004084d2  51                   PUSH ECX
004084d3  8d8df4feffff         LEA ECX,[EBP + 0xfffffef4]
004084d9  51                   PUSH ECX
004084da  50                   PUSH EAX
004084db  ff75fc               PUSH dword ptr [EBP + -0x4]
004084de  ff1500e04000         CALL dword ptr [0x0040e000]
004084e4  33c9                 XOR ECX,ECX
004084e6  3bc1                 CMP EAX,ECX
004084e8  7435                 JZ 0x0040851f
004084ea  51                   PUSH ECX
004084eb  51                   PUSH ECX
004084ec  51                   PUSH ECX
004084ed  8d45f8               LEA EAX,[EBP + -0x8]
004084f0  51                   PUSH ECX
004084f1  50                   PUSH EAX
004084f2  8d85f4feffff         LEA EAX,[EBP + 0xfffffef4]
004084f8  895df8               MOV dword ptr [EBP + -0x8],EBX
004084fb  50                   PUSH EAX
004084fc  51                   PUSH ECX
004084fd  ff75fc               PUSH dword ptr [EBP + -0x4]
00408500  ff151ce04000         CALL dword ptr [0x0040e01c]
00408506  ff75fc               PUSH dword ptr [EBP + -0x4]
00408509  8bd8                 MOV EBX,EAX
0040850b  ffd6                 CALL ESI
0040850d  85db                 TEST EBX,EBX
0040850f  745b                 JZ 0x0040856c
00408511  57                   PUSH EDI
00408512  6802000080           PUSH 0x80000002
00408517  ff1518e04000         CALL dword ptr [0x0040e018]
0040851d  eb4d                 JMP 0x0040856c
0040851f  ff75fc               PUSH dword ptr [EBP + -0x4]
00408522  ffd6                 CALL ESI
00408524  eb46                 JMP 0x0040856c
00408526  7e44                 JLE 0x0040856c
00408528  48                   DEC EAX
00408529  50                   PUSH EAX
0040852a  8d85f4feffff         LEA EAX,[EBP + 0xfffffef4]
00408530  6858064100           PUSH 0x410658
00408535  50                   PUSH EAX
00408536  ff156ce24000         CALL dword ptr [0x0040e26c]
0040853c  83c40c               ADD ESP,0xc
0040853f  8d85f4feffff         LEA EAX,[EBP + 0xfffffef4]
00408545  50                   PUSH EAX
00408546  ff1540e14000         CALL dword ptr [0x0040e140]
0040854c  40                   INC EAX
0040854d  50                   PUSH EAX
0040854e  8d85f4feffff         LEA EAX,[EBP + 0xfffffef4]
00408554  50                   PUSH EAX
00408555  6a01                 PUSH 0x1
00408557  6a00                 PUSH 0x0
00408559  56                   PUSH ESI
0040855a  ff75fc               PUSH dword ptr [EBP + -0x4]
0040855d  ff1528e04000         CALL dword ptr [0x0040e028]
00408563  ff75fc               PUSH dword ptr [EBP + -0x4]
00408566  ff1504e04000         CALL dword ptr [0x0040e004]
0040856c  33c0                 XOR EAX,EAX
0040856e  5f                   POP EDI
0040856f  5e                   POP ESI
00408570  5b                   POP EBX
00408571  c9                   LEAVE
00408572  c3                   RET

; ==== FUNCTION FUN_00408573 entry=00408573 sig=undefined __cdecl FUN_00408573(LPCSTR param_1, int param_2)
00408573  55                   PUSH EBP
00408574  8bec                 MOV EBP,ESP
00408576  81ec90010000         SUB ESP,0x190
0040857c  53                   PUSH EBX
0040857d  56                   PUSH ESI
0040857e  33db                 XOR EBX,EBX
00408580  57                   PUSH EDI
00408581  8b3d04e04000         MOV EDI,dword ptr [0x0040e004]
00408587  895dfc               MOV dword ptr [EBP + -0x4],EBX
0040858a  ff7508               PUSH dword ptr [EBP + 0x8]
0040858d  8d8570feffff         LEA EAX,[EBP + 0xfffffe70]
00408593  50                   PUSH EAX
00408594  ff1544e14000         CALL dword ptr [0x0040e144]
0040859a  8d8570feffff         LEA EAX,[EBP + 0xfffffe70]
004085a0  68cc004100           PUSH 0x4100cc
004085a5  50                   PUSH EAX
004085a6  ff15f8e04000         CALL dword ptr [0x0040e0f8]
004085ac  ff7508               PUSH dword ptr [EBP + 0x8]
004085af  ff1540e14000         CALL dword ptr [0x0040e140]
004085b5  391d34384100         CMP dword ptr [0x00413834],EBX
004085bb  8db40571feffff       LEA ESI,[EBP + EAX*0x1 + 0xfffffe71]
004085c2  7445                 JZ 0x00408609
004085c4  8d45f4               LEA EAX,[EBP + -0xc]
004085c7  50                   PUSH EAX
004085c8  8b450c               MOV EAX,dword ptr [EBP + 0xc]
004085cb  6a1f                 PUSH 0x1f
004085cd  53                   PUSH EBX
004085ce  ff7508               PUSH dword ptr [EBP + 0x8]
004085d1  ff348520004100       PUSH dword ptr [EAX*0x4 + 0x410020]
004085d8  ff150ce04000         CALL dword ptr [0x0040e00c]
004085de  85c0                 TEST EAX,EAX
004085e0  756b                 JNZ 0x0040864d
004085e2  53                   PUSH EBX
004085e3  53                   PUSH EBX
004085e4  53                   PUSH EBX
004085e5  8d45f0               LEA EAX,[EBP + -0x10]
004085e8  53                   PUSH EBX
004085e9  50                   PUSH EAX
004085ea  56                   PUSH ESI
004085eb  53                   PUSH EBX
004085ec  ff75f4               PUSH dword ptr [EBP + -0xc]
004085ef  c745f000010000       MOV dword ptr [EBP + -0x10],0x100
004085f6  ff151ce04000         CALL dword ptr [0x0040e01c]
004085fc  ff75f4               PUSH dword ptr [EBP + -0xc]
004085ff  8bf0                 MOV ESI,EAX
00408601  ffd7                 CALL EDI
00408603  3bf3                 CMP ESI,EBX
00408605  7546                 JNZ 0x0040864d
00408607  eb31                 JMP 0x0040863a
00408609  8d45f8               LEA EAX,[EBP + -0x8]
0040860c  50                   PUSH EAX
0040860d  ff7508               PUSH dword ptr [EBP + 0x8]
00408610  6800000080           PUSH 0x80000000
00408615  ff1530e04000         CALL dword ptr [0x0040e030]
0040861b  85c0                 TEST EAX,EAX
0040861d  752e                 JNZ 0x0040864d
0040861f  6800010000           PUSH 0x100
00408624  56                   PUSH ESI
00408625  53                   PUSH EBX
00408626  ff75f8               PUSH dword ptr [EBP + -0x8]
00408629  ff152ce04000         CALL dword ptr [0x0040e02c]
0040862f  ff75f8               PUSH dword ptr [EBP + -0x8]
00408632  8bf0                 MOV ESI,EAX
00408634  ffd7                 CALL EDI
00408636  3bf3                 CMP ESI,EBX
00408638  7513                 JNZ 0x0040864d
0040863a  ff750c               PUSH dword ptr [EBP + 0xc]
0040863d  8d8570feffff         LEA EAX,[EBP + 0xfffffe70]
00408643  50                   PUSH EAX
00408644  e82affffff           CALL 0x00408573
00408649  59                   POP ECX
0040864a  59                   POP ECX
0040864b  eb07                 JMP 0x00408654
0040864d  c745fc00080000       MOV dword ptr [EBP + -0x4],0x800
00408654  ff45fc               INC dword ptr [EBP + -0x4]
00408657  817dfc00080000       CMP dword ptr [EBP + -0x4],0x800
0040865e  0f8c26ffffff         JL 0x0040858a
00408664  391d34384100         CMP dword ptr [0x00413834],EBX
0040866a  ff7508               PUSH dword ptr [EBP + 0x8]
0040866d  740c                 JZ 0x0040867b
0040866f  8b450c               MOV EAX,dword ptr [EBP + 0xc]
00408672  ff348520004100       PUSH dword ptr [EAX*0x4 + 0x410020]
00408679  eb05                 JMP 0x00408680
0040867b  6800000080           PUSH 0x80000000
00408680  ff1518e04000         CALL dword ptr [0x0040e018]
00408686  5f                   POP EDI
00408687  5e                   POP ESI
00408688  5b                   POP EBX
00408689  c9                   LEAVE
0040868a  c3                   RET

; ==== FUNCTION FUN_0040868b entry=0040868b sig=undefined __stdcall FUN_0040868b(void)
0040868b  55                   PUSH EBP
0040868c  8bec                 MOV EBP,ESP
0040868e  81ec94000000         SUB ESP,0x94
00408694  8d856cffffff         LEA EAX,[EBP + 0xffffff6c]
0040869a  c7856cffffff94000000 MOV dword ptr [EBP + 0xffffff6c],0x94
004086a4  50                   PUSH EAX
004086a5  ff1510e14000         CALL dword ptr [0x0040e110]
004086ab  33c0                 XOR EAX,EAX
004086ad  83bd7cffffff02       CMP dword ptr [EBP + 0xffffff7c],0x2
004086b4  0f95c0               SETNZ AL
004086b7  40                   INC EAX
004086b8  83bd70ffffff04       CMP dword ptr [EBP + 0xffffff70],0x4
004086bf  a334384100           MOV [0x00413834],EAX
004086c4  720a                 JC 0x004086d0
004086c6  c7055c38410001000000 MOV dword ptr [0x0041385c],0x1
004086d0  c9                   LEAVE
004086d1  c3                   RET

; ==== FUNCTION FUN_004086d2 entry=004086d2 sig=bool __cdecl FUN_004086d2(LPCSTR param_1)
004086d2  56                   PUSH ESI
004086d3  57                   PUSH EDI
004086d4  8b7c240c             MOV EDI,dword ptr [ESP + 0xc]
004086d8  6a00                 PUSH 0x0
004086da  57                   PUSH EDI
004086db  e8a0020000           CALL 0x00408980
004086e0  59                   POP ECX
004086e1  59                   POP ECX
004086e2  57                   PUSH EDI
004086e3  ff150ce14000         CALL dword ptr [0x0040e10c]
004086e9  8bf0                 MOV ESI,EAX
004086eb  f7de                 NEG ESI
004086ed  1bf6                 SBB ESI,ESI
004086ef  46                   INC ESI
004086f0  833d5c38410000       CMP dword ptr [0x0041385c],0x0
004086f7  7415                 JZ 0x0040870e
004086f9  85f6                 TEST ESI,ESI
004086fb  7511                 JNZ 0x0040870e
004086fd  a1cc3c4100           MOV EAX,[0x00413ccc]
00408702  85c0                 TEST EAX,EAX
00408704  7408                 JZ 0x0040870e
00408706  56                   PUSH ESI
00408707  57                   PUSH EDI
00408708  6a01                 PUSH 0x1
0040870a  6a10                 PUSH 0x10
0040870c  ffd0                 CALL EAX
0040870e  8bc6                 MOV EAX,ESI
00408710  5f                   POP EDI
00408711  5e                   POP ESI
00408712  c3                   RET

; ==== FUNCTION FUN_00408713 entry=00408713 sig=uint __cdecl FUN_00408713(LPCSTR param_1)
00408713  55                   PUSH EBP
00408714  8bec                 MOV EBP,ESP
00408716  81ec04030000         SUB ESP,0x304
0040871c  53                   PUSH EBX
0040871d  56                   PUSH ESI
0040871e  8b3544e14000         MOV ESI,dword ptr [0x0040e144]
00408724  57                   PUSH EDI
00408725  ff7508               PUSH dword ptr [EBP + 0x8]
00408728  8d85fcfcffff         LEA EAX,[EBP + 0xfffffcfc]
0040872e  50                   PUSH EAX
0040872f  ffd6                 CALL ESI
00408731  6a01                 PUSH 0x1
00408733  8d85fcfcffff         LEA EAX,[EBP + 0xfffffcfc]
00408739  5f                   POP EDI
0040873a  57                   PUSH EDI
0040873b  50                   PUSH EAX
0040873c  e8f8020000           CALL 0x00408a39
00408741  59                   POP ECX
00408742  8d85fcfcffff         LEA EAX,[EBP + 0xfffffcfc]
00408748  59                   POP ECX
00408749  ff35b8384100         PUSH dword ptr [0x004138b8]
0040874f  50                   PUSH EAX
00408750  ff1538e14000         CALL dword ptr [0x0040e138]
00408756  85c0                 TEST EAX,EAX
00408758  7506                 JNZ 0x00408760
0040875a  893dc83b4100         MOV dword ptr [0x00413bc8],EDI
00408760  ff7508               PUSH dword ptr [EBP + 0x8]
00408763  ff15d8e04000         CALL dword ptr [0x0040e0d8]
00408769  f7d8                 NEG EAX
0040876b  1bc0                 SBB EAX,EAX
0040876d  33db                 XOR EBX,EBX
0040876f  40                   INC EAX
00408770  391d5c384100         CMP dword ptr [0x0041385c],EBX
00408776  8945fc               MOV dword ptr [EBP + -0x4],EAX
00408779  7416                 JZ 0x00408791
0040877b  3bc3                 CMP EAX,EBX
0040877d  7512                 JNZ 0x00408791
0040877f  a1cc3c4100           MOV EAX,[0x00413ccc]
00408784  3bc3                 CMP EAX,EBX
00408786  7409                 JZ 0x00408791
00408788  53                   PUSH EBX
00408789  ff7508               PUSH dword ptr [EBP + 0x8]
0040878c  57                   PUSH EDI
0040878d  6a04                 PUSH 0x4
0040878f  ffd0                 CALL EAX
00408791  395dfc               CMP dword ptr [EBP + -0x4],EBX
00408794  0f84de010000         JZ 0x00408978
0040879a  391dec384100         CMP dword ptr [0x004138ec],EBX
004087a0  0f84d2010000         JZ 0x00408978
004087a6  ff7508               PUSH dword ptr [EBP + 0x8]
004087a9  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
004087af  893d64384100         MOV dword ptr [0x00413864],EDI
004087b5  50                   PUSH EAX
004087b6  ffd6                 CALL ESI
004087b8  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
004087be  53                   PUSH EBX
004087bf  50                   PUSH EAX
004087c0  e874020000           CALL 0x00408a39
004087c5  a134384100           MOV EAX,[0x00413834]
004087ca  59                   POP ECX
004087cb  83f802               CMP EAX,0x2
004087ce  59                   POP ECX
004087cf  0f85ce000000         JNZ 0x004088a3
004087d5  8d85fcfdffff         LEA EAX,[EBP + 0xfffffdfc]
004087db  6800010000           PUSH 0x100
004087e0  50                   PUSH EAX
004087e1  ff15f4e04000         CALL dword ptr [0x0040e0f4]
004087e7  8d85fcfdffff         LEA EAX,[EBP + 0xfffffdfc]
004087ed  50                   PUSH EAX
004087ee  ff1540e14000         CALL dword ptr [0x0040e140]
004087f4  80bc05fbfdffff5c     CMP byte ptr [EBP + EAX*0x1 + 0xfffffdfb],0x5c
004087fc  8b35f8e04000         MOV ESI,dword ptr [0x0040e0f8]
00408802  740e                 JZ 0x00408812
00408804  8d85fcfdffff         LEA EAX,[EBP + 0xfffffdfc]
0040880a  68cc004100           PUSH 0x4100cc
0040880f  50                   PUSH EAX
00408810  ffd6                 CALL ESI
00408812  8d85fcfdffff         LEA EAX,[EBP + 0xfffffdfc]
00408818  68f8064100           PUSH 0x4106f8
0040881d  50                   PUSH EAX
0040881e  ffd6                 CALL ESI
00408820  8d85fcfdffff         LEA EAX,[EBP + 0xfffffdfc]
00408826  57                   PUSH EDI
00408827  50                   PUSH EAX
00408828  ff1530e14000         CALL dword ptr [0x0040e130]
0040882e  8b3d00e14000         MOV EDI,dword ptr [0x0040e100]
00408834  8bf0                 MOV ESI,EAX
00408836  83feff               CMP ESI,-0x1
00408839  751c                 JNZ 0x00408857
0040883b  8d85fcfdffff         LEA EAX,[EBP + 0xfffffdfc]
00408841  53                   PUSH EBX
00408842  50                   PUSH EAX
00408843  ff15fce04000         CALL dword ptr [0x0040e0fc]
00408849  8bf0                 MOV ESI,EAX
0040884b  6a0a                 PUSH 0xa
0040884d  68ec064100           PUSH 0x4106ec
00408852  56                   PUSH ESI
00408853  ffd7                 CALL EDI
00408855  eb0a                 JMP 0x00408861
00408857  6a02                 PUSH 0x2
00408859  53                   PUSH EBX
0040885a  56                   PUSH ESI
0040885b  ff15cce04000         CALL dword ptr [0x0040e0cc]
00408861  83feff               CMP ESI,-0x1
00408864  0f840e010000         JZ 0x00408978
0040886a  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
00408870  50                   PUSH EAX
00408871  8d85fcfdffff         LEA EAX,[EBP + 0xfffffdfc]
00408877  68e0064100           PUSH 0x4106e0
0040887c  50                   PUSH EAX
0040887d  ff156ce24000         CALL dword ptr [0x0040e26c]
00408883  83c40c               ADD ESP,0xc
00408886  8d85fcfdffff         LEA EAX,[EBP + 0xfffffdfc]
0040888c  50                   PUSH EAX
0040888d  ff1540e14000         CALL dword ptr [0x0040e140]
00408893  50                   PUSH EAX
00408894  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
0040889a  50                   PUSH EAX
0040889b  56                   PUSH ESI
0040889c  ffd7                 CALL EDI
0040889e  e9ce000000           JMP 0x00408971
004088a3  3bc7                 CMP EAX,EDI
004088a5  7511                 JNZ 0x004088b8
004088a7  6a04                 PUSH 0x4
004088a9  53                   PUSH EBX
004088aa  ff7508               PUSH dword ptr [EBP + 0x8]
004088ad  ff15b0e04000         CALL dword ptr [0x0040e0b0]
004088b3  e9c0000000           JMP 0x00408978
004088b8  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
004088be  50                   PUSH EAX
004088bf  8d85fcfdffff         LEA EAX,[EBP + 0xfffffdfc]
004088c5  68d4064100           PUSH 0x4106d4
004088ca  50                   PUSH EAX
004088cb  ff156ce24000         CALL dword ptr [0x0040e26c]
004088d1  83c40c               ADD ESP,0xc
004088d4  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
004088da  6800010000           PUSH 0x100
004088df  50                   PUSH EAX
004088e0  ff15f4e04000         CALL dword ptr [0x0040e0f4]
004088e6  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
004088ec  50                   PUSH EAX
004088ed  ff1540e14000         CALL dword ptr [0x0040e140]
004088f3  80bc05fbfeffff5c     CMP byte ptr [EBP + EAX*0x1 + 0xfffffefb],0x5c
004088fb  8b35f8e04000         MOV ESI,dword ptr [0x0040e0f8]
00408901  740e                 JZ 0x00408911
00408903  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
00408909  68cc004100           PUSH 0x4100cc
0040890e  50                   PUSH EAX
0040890f  ffd6                 CALL ESI
00408911  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
00408917  68c4064100           PUSH 0x4106c4
0040891c  50                   PUSH EAX
0040891d  ffd6                 CALL ESI
0040891f  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
00408925  57                   PUSH EDI
00408926  50                   PUSH EAX
00408927  ff1530e14000         CALL dword ptr [0x0040e130]
0040892d  8bf0                 MOV ESI,EAX
0040892f  83feff               CMP ESI,-0x1
00408932  7512                 JNZ 0x00408946
00408934  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
0040893a  53                   PUSH EBX
0040893b  50                   PUSH EAX
0040893c  ff15fce04000         CALL dword ptr [0x0040e0fc]
00408942  8bf0                 MOV ESI,EAX
00408944  eb0a                 JMP 0x00408950
00408946  6a02                 PUSH 0x2
00408948  53                   PUSH EBX
00408949  56                   PUSH ESI
0040894a  ff15cce04000         CALL dword ptr [0x0040e0cc]
00408950  83feff               CMP ESI,-0x1
00408953  7423                 JZ 0x00408978
00408955  8d85fcfdffff         LEA EAX,[EBP + 0xfffffdfc]
0040895b  50                   PUSH EAX
0040895c  ff1540e14000         CALL dword ptr [0x0040e140]
00408962  50                   PUSH EAX
00408963  8d85fcfcffff         LEA EAX,[EBP + 0xfffffcfc]
00408969  50                   PUSH EAX
0040896a  56                   PUSH ESI
0040896b  ff1500e14000         CALL dword ptr [0x0040e100]
00408971  56                   PUSH ESI
00408972  ff1504e14000         CALL dword ptr [0x0040e104]
00408978  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
0040897b  5f                   POP EDI
0040897c  5e                   POP ESI
0040897d  5b                   POP EBX
0040897e  c9                   LEAVE
0040897f  c3                   RET

; ==== FUNCTION FUN_00408980 entry=00408980 sig=bool __cdecl FUN_00408980(LPCSTR param_1, DWORD param_2)
00408980  837c240800           CMP dword ptr [ESP + 0x8],0x0
00408985  7508                 JNZ 0x0040898f
00408987  c744240880000000     MOV dword ptr [ESP + 0x8],0x80
0040898f  ff742408             PUSH dword ptr [ESP + 0x8]
00408993  ff742408             PUSH dword ptr [ESP + 0x8]
00408997  ff15d0e04000         CALL dword ptr [0x0040e0d0]
0040899d  f7d8                 NEG EAX
0040899f  1bc0                 SBB EAX,EAX
004089a1  40                   INC EAX
004089a2  c3                   RET

; ==== FUNCTION FUN_004089a3 entry=004089a3 sig=bool __cdecl FUN_004089a3(LPCSTR param_1, undefined4 param_2, LPSTR param_3)
004089a3  56                   PUSH ESI
004089a4  8b742410             MOV ESI,dword ptr [ESP + 0x10]
004089a8  57                   PUSH EDI
004089a9  8dbe08010000         LEA EDI,[ESI + 0x108]
004089af  57                   PUSH EDI
004089b0  ff742410             PUSH dword ptr [ESP + 0x10]
004089b4  ff15ace04000         CALL dword ptr [0x0040e0ac]
004089ba  83f8ff               CMP EAX,-0x1
004089bd  898604010000         MOV dword ptr [ESI + 0x104],EAX
004089c3  7505                 JNZ 0x004089ca
004089c5  6a01                 PUSH 0x1
004089c7  58                   POP EAX
004089c8  eb18                 JMP 0x004089e2
004089ca  8d8634010000         LEA EAX,[ESI + 0x134]
004089d0  50                   PUSH EAX
004089d1  56                   PUSH ESI
004089d2  ff1544e14000         CALL dword ptr [0x0040e144]
004089d8  8b07                 MOV EAX,dword ptr [EDI]
004089da  898600010000         MOV dword ptr [ESI + 0x100],EAX
004089e0  33c0                 XOR EAX,EAX
004089e2  5f                   POP EDI
004089e3  5e                   POP ESI
004089e4  c3                   RET

; ==== FUNCTION FUN_004089e5 entry=004089e5 sig=bool __cdecl FUN_004089e5(LPSTR param_1)
004089e5  56                   PUSH ESI
004089e6  8b742408             MOV ESI,dword ptr [ESP + 0x8]
004089ea  57                   PUSH EDI
004089eb  8dbe08010000         LEA EDI,[ESI + 0x108]
004089f1  57                   PUSH EDI
004089f2  ffb604010000         PUSH dword ptr [ESI + 0x104]
004089f8  ff159ce04000         CALL dword ptr [0x0040e09c]
004089fe  85c0                 TEST EAX,EAX
00408a00  741a                 JZ 0x00408a1c
00408a02  8d8634010000         LEA EAX,[ESI + 0x134]
00408a08  50                   PUSH EAX
00408a09  56                   PUSH ESI
00408a0a  ff1544e14000         CALL dword ptr [0x0040e144]
00408a10  8b07                 MOV EAX,dword ptr [EDI]
00408a12  898600010000         MOV dword ptr [ESI + 0x100],EAX
00408a18  33c0                 XOR EAX,EAX
00408a1a  eb03                 JMP 0x00408a1f
00408a1c  6a01                 PUSH 0x1
00408a1e  58                   POP EAX
00408a1f  5f                   POP EDI
00408a20  5e                   POP ESI
00408a21  c3                   RET

; ==== FUNCTION FUN_00408a22 entry=00408a22 sig=undefined __cdecl FUN_00408a22(int param_1)
00408a22  8b442404             MOV EAX,dword ptr [ESP + 0x4]
00408a26  8b8004010000         MOV EAX,dword ptr [EAX + 0x104]
00408a2c  83f8ff               CMP EAX,-0x1
00408a2f  7407                 JZ 0x00408a38
00408a31  50                   PUSH EAX
00408a32  ff15a0e04000         CALL dword ptr [0x0040e0a0]
00408a38  c3                   RET

; ==== FUNCTION FUN_00408a39 entry=00408a39 sig=undefined __cdecl FUN_00408a39(char * param_1, int param_2)
00408a39  81ec48030000         SUB ESP,0x348
00408a3f  53                   PUSH EBX
00408a40  55                   PUSH EBP
00408a41  56                   PUSH ESI
00408a42  57                   PUSH EDI
00408a43  8bbc245c030000       MOV EDI,dword ptr [ESP + 0x35c]
00408a4a  6a7e                 PUSH 0x7e
00408a4c  57                   PUSH EDI
00408a4d  e89e160000           CALL 0x0040a0f0
00408a52  59                   POP ECX
00408a53  85c0                 TEST EAX,EAX
00408a55  59                   POP ECX
00408a56  750d                 JNZ 0x00408a65
00408a58  39842460030000       CMP dword ptr [ESP + 0x360],EAX
00408a5f  0f855d010000         JNZ 0x00408bc2
00408a65  833d3438410000       CMP dword ptr [0x00413834],0x0
00408a6c  0f8450010000         JZ 0x00408bc2
00408a72  6a5c                 PUSH 0x5c
00408a74  57                   PUSH EDI
00408a75  e876160000           CALL 0x0040a0f0
00408a7a  8b1d44e14000         MOV EBX,dword ptr [0x0040e144]
00408a80  59                   POP ECX
00408a81  85c0                 TEST EAX,EAX
00408a83  59                   POP ECX
00408a84  753b                 JNZ 0x00408ac1
00408a86  8d442410             LEA EAX,[ESP + 0x10]
00408a8a  57                   PUSH EDI
00408a8b  50                   PUSH EAX
00408a8c  ffd3                 CALL EBX
00408a8e  6800010000           PUSH 0x100
00408a93  57                   PUSH EDI
00408a94  e8d7200000           CALL 0x0040ab70
00408a99  59                   POP ECX
00408a9a  59                   POP ECX
00408a9b  57                   PUSH EDI
00408a9c  ff1540e14000         CALL dword ptr [0x0040e140]
00408aa2  807c38ff5c           CMP byte ptr [EAX + EDI*0x1 + -0x1],0x5c
00408aa7  740c                 JZ 0x00408ab5
00408aa9  68cc004100           PUSH 0x4100cc
00408aae  57                   PUSH EDI
00408aaf  ff15f8e04000         CALL dword ptr [0x0040e0f8]
00408ab5  8d442410             LEA EAX,[ESP + 0x10]
00408ab9  50                   PUSH EAX
00408aba  57                   PUSH EDI
00408abb  ff15f8e04000         CALL dword ptr [0x0040e0f8]
00408ac1  833d3c10410001       CMP dword ptr [0x0041103c],0x1
00408ac8  8bf7                 MOV ESI,EDI
00408aca  7e12                 JLE 0x00408ade
00408acc  0fbe07               MOVSX EAX,byte ptr [EDI]
00408acf  6803010000           PUSH 0x103
00408ad4  50                   PUSH EAX
00408ad5  e8d6180000           CALL 0x0040a3b0
00408ada  59                   POP ECX
00408adb  59                   POP ECX
00408adc  eb12                 JMP 0x00408af0
00408ade  0fbe07               MOVSX EAX,byte ptr [EDI]
00408ae1  8b0d300e4100         MOV ECX,dword ptr [0x00410e30]
00408ae7  668b0441             MOV AX,word ptr [ECX + EAX*0x2]
00408aeb  2503010000           AND EAX,0x103
00408af0  85c0                 TEST EAX,EAX
00408af2  7412                 JZ 0x00408b06
00408af4  807f013a             CMP byte ptr [EDI + 0x1],0x3a
00408af8  750c                 JNZ 0x00408b06
00408afa  0fbe07               MOVSX EAX,byte ptr [EDI]
00408afd  50                   PUSH EAX
00408afe  e8ad160000           CALL 0x0040a1b0
00408b03  59                   POP ECX
00408b04  8807                 MOV byte ptr [EDI],AL
00408b06  803f5c               CMP byte ptr [EDI],0x5c
00408b09  751c                 JNZ 0x00408b27
00408b0b  807f015c             CMP byte ptr [EDI + 0x1],0x5c
00408b0f  7516                 JNZ 0x00408b27
00408b11  8d7702               LEA ESI,[EDI + 0x2]
00408b14  8a06                 MOV AL,byte ptr [ESI]
00408b16  84c0                 TEST AL,AL
00408b18  7407                 JZ 0x00408b21
00408b1a  3c5c                 CMP AL,0x5c
00408b1c  7403                 JZ 0x00408b21
00408b1e  46                   INC ESI
00408b1f  ebf3                 JMP 0x00408b14
00408b21  803e5c               CMP byte ptr [ESI],0x5c
00408b24  7501                 JNZ 0x00408b27
00408b26  46                   INC ESI
00408b27  8a06                 MOV AL,byte ptr [ESI]
00408b29  84c0                 TEST AL,AL
00408b2b  7404                 JZ 0x00408b31
00408b2d  3c5c                 CMP AL,0x5c
00408b2f  75f5                 JNZ 0x00408b26
00408b31  803e5c               CMP byte ptr [ESI],0x5c
00408b34  7501                 JNZ 0x00408b37
00408b36  46                   INC ESI
00408b37  8a06                 MOV AL,byte ptr [ESI]
00408b39  84c0                 TEST AL,AL
00408b3b  0f8481000000         JZ 0x00408bc2
00408b41  8bee                 MOV EBP,ESI
00408b43  84c0                 TEST AL,AL
00408b45  740a                 JZ 0x00408b51
00408b47  3c5c                 CMP AL,0x5c
00408b49  7406                 JZ 0x00408b51
00408b4b  8a4501               MOV AL,byte ptr [EBP + 0x1]
00408b4e  45                   INC EBP
00408b4f  ebf2                 JMP 0x00408b43
00408b51  8d442410             LEA EAX,[ESP + 0x10]
00408b55  55                   PUSH EBP
00408b56  50                   PUSH EAX
00408b57  ffd3                 CALL EBX
00408b59  80650000             AND byte ptr [EBP],0x0
00408b5d  8d842410010000       LEA EAX,[ESP + 0x110]
00408b64  50                   PUSH EAX
00408b65  6a17                 PUSH 0x17
00408b67  57                   PUSH EDI
00408b68  e836feffff           CALL 0x004089a3
00408b6d  83c40c               ADD ESP,0xc
00408b70  85c0                 TEST EAX,EAX
00408b72  7532                 JNZ 0x00408ba6
00408b74  39842460030000       CMP dword ptr [ESP + 0x360],EAX
00408b7b  7510                 JNZ 0x00408b8d
00408b7d  38842448030000       CMP byte ptr [ESP + 0x348],AL
00408b84  8d842448030000       LEA EAX,[ESP + 0x348]
00408b8b  7507                 JNZ 0x00408b94
00408b8d  8d842410010000       LEA EAX,[ESP + 0x110]
00408b94  50                   PUSH EAX
00408b95  56                   PUSH ESI
00408b96  ffd3                 CALL EBX
00408b98  8d842410010000       LEA EAX,[ESP + 0x110]
00408b9f  50                   PUSH EAX
00408ba0  e87dfeffff           CALL 0x00408a22
00408ba5  59                   POP ECX
00408ba6  57                   PUSH EDI
00408ba7  ff1540e14000         CALL dword ptr [0x0040e140]
00408bad  8bf0                 MOV ESI,EAX
00408baf  8d442410             LEA EAX,[ESP + 0x10]
00408bb3  50                   PUSH EAX
00408bb4  57                   PUSH EDI
00408bb5  03f7                 ADD ESI,EDI
00408bb7  ff15f8e04000         CALL dword ptr [0x0040e0f8]
00408bbd  e96fffffff           JMP 0x00408b31
00408bc2  5f                   POP EDI
00408bc3  5e                   POP ESI
00408bc4  5d                   POP EBP
00408bc5  5b                   POP EBX
00408bc6  81c448030000         ADD ESP,0x348
00408bcc  c3                   RET

; ==== FUNCTION FUN_00408bcd entry=00408bcd sig=int __cdecl FUN_00408bcd(LPCSTR param_1)
00408bcd  ff742404             PUSH dword ptr [ESP + 0x4]
00408bd1  ff15a4e04000         CALL dword ptr [0x0040e0a4]
00408bd7  33c9                 XOR ECX,ECX
00408bd9  83f8ff               CMP EAX,-0x1
00408bdc  0f95c1               SETNZ CL
00408bdf  49                   DEC ECX
00408be0  8bc1                 MOV EAX,ECX
00408be2  c3                   RET

; ==== FUNCTION FUN_00408be3 entry=00408be3 sig=undefined4 __cdecl FUN_00408be3(LPCSTR param_1)
00408be3  55                   PUSH EBP
00408be4  8bec                 MOV EBP,ESP
00408be6  81ec08010000         SUB ESP,0x108
00408bec  53                   PUSH EBX
00408bed  57                   PUSH EDI
00408bee  ff7508               PUSH dword ptr [EBP + 0x8]
00408bf1  8d85f8feffff         LEA EAX,[EBP + 0xfffffef8]
00408bf7  50                   PUSH EAX
00408bf8  ff1544e14000         CALL dword ptr [0x0040e144]
00408bfe  33ff                 XOR EDI,EDI
00408c00  8d85f8feffff         LEA EAX,[EBP + 0xfffffef8]
00408c06  57                   PUSH EDI
00408c07  50                   PUSH EAX
00408c08  e82cfeffff           CALL 0x00408a39
00408c0d  393d34384100         CMP dword ptr [0x00413834],EDI
00408c13  59                   POP ECX
00408c14  59                   POP ECX
00408c15  897dfc               MOV dword ptr [EBP + -0x4],EDI
00408c18  7465                 JZ 0x00408c7f
00408c1a  57                   PUSH EDI
00408c1b  ff7508               PUSH dword ptr [EBP + 0x8]
00408c1e  ff1530e14000         CALL dword ptr [0x0040e130]
00408c24  8bd8                 MOV EBX,EAX
00408c26  3bdf                 CMP EBX,EDI
00408c28  7c55                 JL 0x00408c7f
00408c2a  56                   PUSH ESI
00408c2b  8b3524e14000         MOV ESI,dword ptr [0x0040e124]
00408c31  8d450a               LEA EAX,[EBP + 0xa]
00408c34  6a02                 PUSH 0x2
00408c36  50                   PUSH EAX
00408c37  53                   PUSH EBX
00408c38  ffd6                 CALL ESI
00408c3a  66817d0a4d5a         CMP word ptr [EBP + 0xa],0x5a4d
00408c40  7535                 JNZ 0x00408c77
00408c42  57                   PUSH EDI
00408c43  8b3dcce04000         MOV EDI,dword ptr [0x0040e0cc]
00408c49  6a3c                 PUSH 0x3c
00408c4b  53                   PUSH EBX
00408c4c  ffd7                 CALL EDI
00408c4e  8d45f8               LEA EAX,[EBP + -0x8]
00408c51  6a04                 PUSH 0x4
00408c53  50                   PUSH EAX
00408c54  53                   PUSH EBX
00408c55  ffd6                 CALL ESI
00408c57  6a00                 PUSH 0x0
00408c59  ff75f8               PUSH dword ptr [EBP + -0x8]
00408c5c  53                   PUSH EBX
00408c5d  ffd7                 CALL EDI
00408c5f  8d450a               LEA EAX,[EBP + 0xa]
00408c62  6a02                 PUSH 0x2
00408c64  50                   PUSH EAX
00408c65  53                   PUSH EBX
00408c66  ffd6                 CALL ESI
00408c68  66817d0a5045         CMP word ptr [EBP + 0xa],0x4550
00408c6e  7507                 JNZ 0x00408c77
00408c70  c745fc01000000       MOV dword ptr [EBP + -0x4],0x1
00408c77  53                   PUSH EBX
00408c78  ff1504e14000         CALL dword ptr [0x0040e104]
00408c7e  5e                   POP ESI
00408c7f  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
00408c82  5f                   POP EDI
00408c83  5b                   POP EBX
00408c84  c9                   LEAVE
00408c85  c3                   RET

; ==== FUNCTION FUN_00408c86 entry=00408c86 sig=undefined __cdecl FUN_00408c86(HWND param_1)
00408c86  55                   PUSH EBP
00408c87  8bec                 MOV EBP,ESP
00408c89  83ec4c               SUB ESP,0x4c
00408c8c  53                   PUSH EBX
00408c8d  56                   PUSH ESI
00408c8e  8b7508               MOV ESI,dword ptr [EBP + 0x8]
00408c91  8d45f0               LEA EAX,[EBP + -0x10]
00408c94  57                   PUSH EDI
00408c95  50                   PUSH EAX
00408c96  56                   PUSH ESI
00408c97  ff15a0e24000         CALL dword ptr [0x0040e2a0]
00408c9d  8b45f0               MOV EAX,dword ptr [EBP + -0x10]
00408ca0  6a06                 PUSH 0x6
00408ca2  99                   CDQ
00408ca3  59                   POP ECX
00408ca4  f7f9                 IDIV ECX
00408ca6  8b4df8               MOV ECX,dword ptr [EBP + -0x8]
00408ca9  6a06                 PUSH 0x6
00408cab  5f                   POP EDI
00408cac  0145f0               ADD dword ptr [EBP + -0x10],EAX
00408caf  8bc1                 MOV EAX,ECX
00408cb1  99                   CDQ
00408cb2  f7ff                 IDIV EDI
00408cb4  33ff                 XOR EDI,EDI
00408cb6  57                   PUSH EDI
00408cb7  03c8                 ADD ECX,EAX
00408cb9  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
00408cbc  2b45f4               SUB EAX,dword ptr [EBP + -0xc]
00408cbf  894df8               MOV dword ptr [EBP + -0x8],ECX
00408cc2  2b4df0               SUB ECX,dword ptr [EBP + -0x10]
00408cc5  50                   PUSH EAX
00408cc6  51                   PUSH ECX
00408cc7  ff75f4               PUSH dword ptr [EBP + -0xc]
00408cca  ff75f0               PUSH dword ptr [EBP + -0x10]
00408ccd  56                   PUSH ESI
00408cce  ff1590e24000         CALL dword ptr [0x0040e290]
00408cd4  393d5c384100         CMP dword ptr [0x0041385c],EDI
00408cda  740e                 JZ 0x00408cea
00408cdc  a1f03b4100           MOV EAX,[0x00413bf0]
00408ce1  3bc7                 CMP EAX,EDI
00408ce3  7405                 JZ 0x00408cea
00408ce5  6a38                 PUSH 0x38
00408ce7  56                   PUSH ESI
00408ce8  ffd0                 CALL EAX
00408cea  393d483c4100         CMP dword ptr [0x00413c48],EDI
00408cf0  0f8588000000         JNZ 0x00408d7e
00408cf6  57                   PUSH EDI
00408cf7  57                   PUSH EDI
00408cf8  6a31                 PUSH 0x31
00408cfa  56                   PUSH ESI
00408cfb  893d483c4100         MOV dword ptr [0x00413c48],EDI
00408d01  ff15d0e24000         CALL dword ptr [0x0040e2d0]
00408d07  3bc7                 CMP EAX,EDI
00408d09  7473                 JZ 0x00408d7e
00408d0b  8d4db4               LEA ECX,[EBP + -0x4c]
00408d0e  51                   PUSH ECX
00408d0f  6a3c                 PUSH 0x3c
00408d11  50                   PUSH EAX
00408d12  ff1548e04000         CALL dword ptr [0x0040e048]
00408d18  85c0                 TEST EAX,EAX
00408d1a  7462                 JZ 0x00408d7e
00408d1c  a054384100           MOV AL,[0x00413854]
00408d21  56                   PUSH ESI
00408d22  c745c42c010000       MOV dword ptr [EBP + -0x3c],0x12c
00408d29  8845cb               MOV byte ptr [EBP + -0x35],AL
00408d2c  ff1598e24000         CALL dword ptr [0x0040e298]
00408d32  8bd8                 MOV EBX,EAX
00408d34  6a48                 PUSH 0x48
00408d36  6a5a                 PUSH 0x5a
00408d38  53                   PUSH EBX
00408d39  ff157ce04000         CALL dword ptr [0x0040e07c]
00408d3f  50                   PUSH EAX
00408d40  0fb605a0384100       MOVZX EAX,byte ptr [0x004138a0]
00408d47  50                   PUSH EAX
00408d48  ff15a8e04000         CALL dword ptr [0x0040e0a8]
00408d4e  f7d8                 NEG EAX
00408d50  53                   PUSH EBX
00408d51  56                   PUSH ESI
00408d52  8945b4               MOV dword ptr [EBP + -0x4c],EAX
00408d55  ff157ce24000         CALL dword ptr [0x0040e27c]
00408d5b  a124384100           MOV EAX,[0x00413824]
00408d60  3bc7                 CMP EAX,EDI
00408d62  740b                 JZ 0x00408d6f
00408d64  50                   PUSH EAX
00408d65  8d45d0               LEA EAX,[EBP + -0x30]
00408d68  50                   PUSH EAX
00408d69  ff1544e14000         CALL dword ptr [0x0040e144]
00408d6f  8d45b4               LEA EAX,[EBP + -0x4c]
00408d72  50                   PUSH EAX
00408d73  ff1578e04000         CALL dword ptr [0x0040e078]
00408d79  a3483c4100           MOV [0x00413c48],EAX
00408d7e  a1483c4100           MOV EAX,[0x00413c48]
00408d83  3bc7                 CMP EAX,EDI
00408d85  740d                 JZ 0x00408d94
00408d87  50                   PUSH EAX
00408d88  68998d4000           PUSH 0x408d99
00408d8d  56                   PUSH ESI
00408d8e  ff15c4e24000         CALL dword ptr [0x0040e2c4]
00408d94  5f                   POP EDI
00408d95  5e                   POP ESI
00408d96  5b                   POP EBX
00408d97  c9                   LEAVE
00408d98  c3                   RET

; ==== FUNCTION FUN_00408d99 entry=00408d99 sig=undefined4 __stdcall FUN_00408d99(HWND param_1, WPARAM param_2)
00408d99  55                   PUSH EBP
00408d9a  8bec                 MOV EBP,ESP
00408d9c  83ec20               SUB ESP,0x20
00408d9f  53                   PUSH EBX
00408da0  56                   PUSH ESI
00408da1  57                   PUSH EDI
00408da2  8b7d08               MOV EDI,dword ptr [EBP + 0x8]
00408da5  8d45e0               LEA EAX,[EBP + -0x20]
00408da8  50                   PUSH EAX
00408da9  57                   PUSH EDI
00408daa  ff15a0e24000         CALL dword ptr [0x0040e2a0]
00408db0  57                   PUSH EDI
00408db1  ff15c0e24000         CALL dword ptr [0x0040e2c0]
00408db7  8bd8                 MOV EBX,EAX
00408db9  8b45e0               MOV EAX,dword ptr [EBP + -0x20]
00408dbc  8b3500e34000         MOV ESI,dword ptr [0x0040e300]
00408dc2  8945f8               MOV dword ptr [EBP + -0x8],EAX
00408dc5  8b45e4               MOV EAX,dword ptr [EBP + -0x1c]
00408dc8  8945fc               MOV dword ptr [EBP + -0x4],EAX
00408dcb  8d45f8               LEA EAX,[EBP + -0x8]
00408dce  50                   PUSH EAX
00408dcf  53                   PUSH EBX
00408dd0  ffd6                 CALL ESI
00408dd2  8b45e8               MOV EAX,dword ptr [EBP + -0x18]
00408dd5  8945f0               MOV dword ptr [EBP + -0x10],EAX
00408dd8  8b45ec               MOV EAX,dword ptr [EBP + -0x14]
00408ddb  8945f4               MOV dword ptr [EBP + -0xc],EAX
00408dde  8d45f0               LEA EAX,[EBP + -0x10]
00408de1  50                   PUSH EAX
00408de2  53                   PUSH EBX
00408de3  ffd6                 CALL ESI
00408de5  8b45f8               MOV EAX,dword ptr [EBP + -0x8]
00408de8  6a06                 PUSH 0x6
00408dea  99                   CDQ
00408deb  59                   POP ECX
00408dec  f7f9                 IDIV ECX
00408dee  8b4df0               MOV ECX,dword ptr [EBP + -0x10]
00408df1  6a06                 PUSH 0x6
00408df3  5e                   POP ESI
00408df4  6a00                 PUSH 0x0
00408df6  0145f8               ADD dword ptr [EBP + -0x8],EAX
00408df9  8bc1                 MOV EAX,ECX
00408dfb  99                   CDQ
00408dfc  f7fe                 IDIV ESI
00408dfe  03c8                 ADD ECX,EAX
00408e00  8b45f4               MOV EAX,dword ptr [EBP + -0xc]
00408e03  2b45fc               SUB EAX,dword ptr [EBP + -0x4]
00408e06  894df0               MOV dword ptr [EBP + -0x10],ECX
00408e09  2b4df8               SUB ECX,dword ptr [EBP + -0x8]
00408e0c  50                   PUSH EAX
00408e0d  51                   PUSH ECX
00408e0e  ff75fc               PUSH dword ptr [EBP + -0x4]
00408e11  ff75f8               PUSH dword ptr [EBP + -0x8]
00408e14  57                   PUSH EDI
00408e15  ff1590e24000         CALL dword ptr [0x0040e290]
00408e1b  6a00                 PUSH 0x0
00408e1d  ff750c               PUSH dword ptr [EBP + 0xc]
00408e20  6a30                 PUSH 0x30
00408e22  57                   PUSH EDI
00408e23  ff15d0e24000         CALL dword ptr [0x0040e2d0]
00408e29  6a01                 PUSH 0x1
00408e2b  58                   POP EAX
00408e2c  5f                   POP EDI
00408e2d  5e                   POP ESI
00408e2e  5b                   POP EBX
00408e2f  c9                   LEAVE
00408e30  c20800               RET 0x8

; ==== FUNCTION FUN_00408e33 entry=00408e33 sig=DWORD __cdecl FUN_00408e33(HINSTANCE param_1, UINT param_2, char * param_3, DWORD param_4)
00408e33  55                   PUSH EBP
00408e34  8bec                 MOV EBP,ESP
00408e36  81ec20020000         SUB ESP,0x220
00408e3c  53                   PUSH EBX
00408e3d  56                   PUSH ESI
00408e3e  57                   PUSH EDI
00408e3f  8d45e0               LEA EAX,[EBP + -0x20]
00408e42  ff750c               PUSH dword ptr [EBP + 0xc]
00408e45  6818074100           PUSH 0x410718
00408e4a  50                   PUSH EAX
00408e4b  ff156ce24000         CALL dword ptr [0x0040e26c]
00408e51  8b5d10               MOV EBX,dword ptr [EBP + 0x10]
00408e54  83c40c               ADD ESP,0xc
00408e57  8d45e0               LEA EAX,[EBP + -0x20]
00408e5a  ff35f43b4100         PUSH dword ptr [0x00413bf4]
00408e60  ff7514               PUSH dword ptr [EBP + 0x14]
00408e63  53                   PUSH EBX
00408e64  6814074100           PUSH 0x410714
00408e69  50                   PUSH EAX
00408e6a  6808074100           PUSH 0x410708
00408e6f  ff155ce14000         CALL dword ptr [0x0040e15c]
00408e75  803b7f               CMP byte ptr [EBX],0x7f
00408e78  894510               MOV dword ptr [EBP + 0x10],EAX
00408e7b  7517                 JNZ 0x00408e94
00408e7d  83f801               CMP EAX,0x1
00408e80  7512                 JNZ 0x00408e94
00408e82  ff7514               PUSH dword ptr [EBP + 0x14]
00408e85  53                   PUSH EBX
00408e86  ff750c               PUSH dword ptr [EBP + 0xc]
00408e89  ff7508               PUSH dword ptr [EBP + 0x8]
00408e8c  ff15b0e24000         CALL dword ptr [0x0040e2b0]
00408e92  eb48                 JMP 0x00408edc
00408e94  6a7c                 PUSH 0x7c
00408e96  53                   PUSH EBX
00408e97  e854120000           CALL 0x0040a0f0
00408e9c  8bf8                 MOV EDI,EAX
00408e9e  59                   POP ECX
00408e9f  85ff                 TEST EDI,EDI
00408ea1  59                   POP ECX
00408ea2  7438                 JZ 0x00408edc
00408ea4  8b3544e14000         MOV ESI,dword ptr [0x0040e144]
00408eaa  8d4701               LEA EAX,[EDI + 0x1]
00408ead  50                   PUSH EAX
00408eae  8d85e0fdffff         LEA EAX,[EBP + 0xfffffde0]
00408eb4  50                   PUSH EAX
00408eb5  ffd6                 CALL ESI
00408eb7  6804074100           PUSH 0x410704
00408ebc  57                   PUSH EDI
00408ebd  ffd6                 CALL ESI
00408ebf  8d85e0fdffff         LEA EAX,[EBP + 0xfffffde0]
00408ec5  83c702               ADD EDI,0x2
00408ec8  50                   PUSH EAX
00408ec9  57                   PUSH EDI
00408eca  ffd6                 CALL ESI
00408ecc  6a7c                 PUSH 0x7c
00408ece  53                   PUSH EBX
00408ecf  e81c120000           CALL 0x0040a0f0
00408ed4  8bf8                 MOV EDI,EAX
00408ed6  59                   POP ECX
00408ed7  85ff                 TEST EDI,EDI
00408ed9  59                   POP ECX
00408eda  75ce                 JNZ 0x00408eaa
00408edc  8b4510               MOV EAX,dword ptr [EBP + 0x10]
00408edf  5f                   POP EDI
00408ee0  5e                   POP ESI
00408ee1  5b                   POP EBX
00408ee2  c9                   LEAVE
00408ee3  c3                   RET

; ==== FUNCTION FUN_00408ee4 entry=00408ee4 sig=undefined __cdecl FUN_00408ee4(LPCSTR param_1)
00408ee4  55                   PUSH EBP
00408ee5  8bec                 MOV EBP,ESP
00408ee7  83ec1c               SUB ESP,0x1c
00408eea  53                   PUSH EBX
00408eeb  6a01                 PUSH 0x1
00408eed  6a00                 PUSH 0x0
00408eef  6a00                 PUSH 0x0
00408ef1  ff1514e04000         CALL dword ptr [0x0040e014]
00408ef7  8bd8                 MOV EBX,EAX
00408ef9  85db                 TEST EBX,EBX
00408efb  7439                 JZ 0x00408f36
00408efd  57                   PUSH EDI
00408efe  56                   PUSH ESI
00408eff  6820000100           PUSH 0x10020
00408f04  ff7508               PUSH dword ptr [EBP + 0x8]
00408f07  53                   PUSH EBX
00408f08  ff153ce04000         CALL dword ptr [0x0040e03c]
00408f0e  8b3510e04000         MOV ESI,dword ptr [0x0040e010]
00408f14  8bf8                 MOV EDI,EAX
00408f16  85ff                 TEST EDI,EDI
00408f18  7417                 JZ 0x00408f31
00408f1a  8d45e4               LEA EAX,[EBP + -0x1c]
00408f1d  50                   PUSH EAX
00408f1e  6a01                 PUSH 0x1
00408f20  57                   PUSH EDI
00408f21  ff1538e04000         CALL dword ptr [0x0040e038]
00408f27  57                   PUSH EDI
00408f28  ff1534e04000         CALL dword ptr [0x0040e034]
00408f2e  57                   PUSH EDI
00408f2f  ffd6                 CALL ESI
00408f31  53                   PUSH EBX
00408f32  ffd6                 CALL ESI
00408f34  5e                   POP ESI
00408f35  5f                   POP EDI
00408f36  5b                   POP EBX
00408f37  c9                   LEAVE
00408f38  c3                   RET

; ==== FUNCTION FUN_00408f39 entry=00408f39 sig=undefined __cdecl FUN_00408f39(char * param_1)
00408f39  55                   PUSH EBP
00408f3a  8bec                 MOV EBP,ESP
00408f3c  81ec24050000         SUB ESP,0x524
00408f42  53                   PUSH EBX
00408f43  56                   PUSH ESI
00408f44  bb04010000           MOV EBX,0x104
00408f49  57                   PUSH EDI
00408f4a  8d85e0fbffff         LEA EAX,[EBP + 0xfffffbe0]
00408f50  53                   PUSH EBX
00408f51  50                   PUSH EAX
00408f52  ff15f4e04000         CALL dword ptr [0x0040e0f4]
00408f58  8d85e0fbffff         LEA EAX,[EBP + 0xfffffbe0]
00408f5e  6844074100           PUSH 0x410744
00408f63  50                   PUSH EAX
00408f64  ff15f8e04000         CALL dword ptr [0x0040e0f8]
00408f6a  8b3544e14000         MOV ESI,dword ptr [0x0040e144]
00408f70  8d85e0fbffff         LEA EAX,[EBP + 0xfffffbe0]
00408f76  50                   PUSH EAX
00408f77  8d85e4fcffff         LEA EAX,[EBP + 0xfffffce4]
00408f7d  50                   PUSH EAX
00408f7e  ffd6                 CALL ESI
00408f80  8b3d40e14000         MOV EDI,dword ptr [0x0040e140]
00408f86  8d85e4fcffff         LEA EAX,[EBP + 0xfffffce4]
00408f8c  6834074100           PUSH 0x410734
00408f91  50                   PUSH EAX
00408f92  ffd7                 CALL EDI
00408f94  8d8de4fcffff         LEA ECX,[EBP + 0xfffffce4]
00408f9a  83e90a               SUB ECX,0xa
00408f9d  03c1                 ADD EAX,ECX
00408f9f  50                   PUSH EAX
00408fa0  ffd6                 CALL ESI
00408fa2  8d85e0fbffff         LEA EAX,[EBP + 0xfffffbe0]
00408fa8  6a00                 PUSH 0x0
00408faa  50                   PUSH EAX
00408fab  ff1530e14000         CALL dword ptr [0x0040e130]
00408fb1  83f8ff               CMP EAX,-0x1
00408fb4  8945fc               MOV dword ptr [EBP + -0x4],EAX
00408fb7  0f84ec010000         JZ 0x004091a9
00408fbd  8d85e4fcffff         LEA EAX,[EBP + 0xfffffce4]
00408fc3  6a00                 PUSH 0x0
00408fc5  50                   PUSH EAX
00408fc6  ff15fce04000         CALL dword ptr [0x0040e0fc]
00408fcc  83f8ff               CMP EAX,-0x1
00408fcf  8945f4               MOV dword ptr [EBP + -0xc],EAX
00408fd2  750e                 JNZ 0x00408fe2
00408fd4  ff75fc               PUSH dword ptr [EBP + -0x4]
00408fd7  ff1504e14000         CALL dword ptr [0x0040e104]
00408fdd  e9c7010000           JMP 0x004091a9
00408fe2  33c0                 XOR EAX,EAX
00408fe4  6800400000           PUSH 0x4000
00408fe9  50                   PUSH EAX
00408fea  8945f8               MOV dword ptr [EBP + -0x8],EAX
00408fed  ff3508384100         PUSH dword ptr [0x00413808]
00408ff3  8945f0               MOV dword ptr [EBP + -0x10],EAX
00408ff6  e885100000           CALL 0x0040a080
00408ffb  8325dc3b410000       AND dword ptr [0x00413bdc],0x0
00409002  8325c438410000       AND dword ptr [0x004138c4],0x0
00409009  83c40c               ADD ESP,0xc
0040900c  8d85ecfeffff         LEA EAX,[EBP + 0xfffffeec]
00409012  53                   PUSH EBX
00409013  50                   PUSH EAX
00409014  ff152ce14000         CALL dword ptr [0x0040e12c]
0040901a  8d85ecfeffff         LEA EAX,[EBP + 0xfffffeec]
00409020  50                   PUSH EAX
00409021  ffd7                 CALL EDI
00409023  80bc05ebfeffff5c     CMP byte ptr [EBP + EAX*0x1 + 0xfffffeeb],0x5c
0040902b  7412                 JZ 0x0040903f
0040902d  8d85ecfeffff         LEA EAX,[EBP + 0xfffffeec]
00409033  68cc004100           PUSH 0x4100cc
00409038  50                   PUSH EAX
00409039  ff15f8e04000         CALL dword ptr [0x0040e0f8]
0040903f  8d85ecfeffff         LEA EAX,[EBP + 0xfffffeec]
00409045  50                   PUSH EAX
00409046  ffd7                 CALL EDI
00409048  50                   PUSH EAX
00409049  8d85ecfeffff         LEA EAX,[EBP + 0xfffffeec]
0040904f  ff7508               PUSH dword ptr [EBP + 0x8]
00409052  50                   PUSH EAX
00409053  e8084c0000           CALL 0x0040dc60
00409058  83c40c               ADD ESP,0xc
0040905b  85c0                 TEST EAX,EAX
0040905d  750f                 JNZ 0x0040906e
0040905f  8d85ecfeffff         LEA EAX,[EBP + 0xfffffeec]
00409065  50                   PUSH EAX
00409066  ffd7                 CALL EDI
00409068  034508               ADD EAX,dword ptr [EBP + 0x8]
0040906b  50                   PUSH EAX
0040906c  eb03                 JMP 0x00409071
0040906e  ff7508               PUSH dword ptr [EBP + 0x8]
00409071  8d85ecfeffff         LEA EAX,[EBP + 0xfffffeec]
00409077  50                   PUSH EAX
00409078  ffd6                 CALL ESI
0040907a  6a01                 PUSH 0x1
0040907c  ff75fc               PUSH dword ptr [EBP + -0x4]
0040907f  53                   PUSH EBX
00409080  8d85e8fdffff         LEA EAX,[EBP + 0xfffffde8]
00409086  50                   PUSH EAX
00409087  e875cdffff           CALL 0x00405e01
0040908c  83c410               ADD ESP,0x10
0040908f  85c0                 TEST EAX,EAX
00409091  0f8417010000         JZ 0x004091ae
00409097  8a85e8fdffff         MOV AL,byte ptr [EBP + 0xfffffde8]
0040909d  8d9de8fdffff         LEA EBX,[EBP + 0xfffffde8]
004090a3  84c0                 TEST AL,AL
004090a5  740e                 JZ 0x004090b5
004090a7  3c20                 CMP AL,0x20
004090a9  7404                 JZ 0x004090af
004090ab  3c09                 CMP AL,0x9
004090ad  7506                 JNZ 0x004090b5
004090af  8a4301               MOV AL,byte ptr [EBX + 0x1]
004090b2  43                   INC EBX
004090b3  ebee                 JMP 0x004090a3
004090b5  837df800             CMP dword ptr [EBP + -0x8],0x0
004090b9  7475                 JZ 0x00409130
004090bb  803b5b               CMP byte ptr [EBX],0x5b
004090be  7509                 JNZ 0x004090c9
004090c0  8365f800             AND dword ptr [EBP + -0x8],0x0
004090c4  e982000000           JMP 0x0040914b
004090c9  6a07                 PUSH 0x7
004090cb  682c074100           PUSH 0x41072c
004090d0  53                   PUSH EBX
004090d1  e88a4b0000           CALL 0x0040dc60
004090d6  83c40c               ADD ESP,0xc
004090d9  85c0                 TEST EAX,EAX
004090db  756e                 JNZ 0x0040914b
004090dd  8d85ecfeffff         LEA EAX,[EBP + 0xfffffeec]
004090e3  83c307               ADD EBX,0x7
004090e6  50                   PUSH EAX
004090e7  53                   PUSH EBX
004090e8  ff1538e14000         CALL dword ptr [0x0040e138]
004090ee  85c0                 TEST EAX,EAX
004090f0  740e                 JZ 0x00409100
004090f2  ff7508               PUSH dword ptr [EBP + 0x8]
004090f5  53                   PUSH EBX
004090f6  ff1538e14000         CALL dword ptr [0x0040e138]
004090fc  85c0                 TEST EAX,EAX
004090fe  754b                 JNZ 0x0040914b
00409100  8d85e8fdffff         LEA EAX,[EBP + 0xfffffde8]
00409106  50                   PUSH EAX
00409107  8d85dcfaffff         LEA EAX,[EBP + 0xfffffadc]
0040910d  50                   PUSH EAX
0040910e  ffd6                 CALL ESI
00409110  8d85dcfaffff         LEA EAX,[EBP + 0xfffffadc]
00409116  c685e8fdffff3b       MOV byte ptr [EBP + 0xfffffde8],0x3b
0040911d  50                   PUSH EAX
0040911e  8d85e9fdffff         LEA EAX,[EBP + 0xfffffde9]
00409124  50                   PUSH EAX
00409125  ffd6                 CALL ESI
00409127  c745f001000000       MOV dword ptr [EBP + -0x10],0x1
0040912e  eb1b                 JMP 0x0040914b
00409130  6a08                 PUSH 0x8
00409132  6820074100           PUSH 0x410720
00409137  53                   PUSH EBX
00409138  e8234b0000           CALL 0x0040dc60
0040913d  83c40c               ADD ESP,0xc
00409140  85c0                 TEST EAX,EAX
00409142  7507                 JNZ 0x0040914b
00409144  c745f801000000       MOV dword ptr [EBP + -0x8],0x1
0040914b  8d85e8fdffff         LEA EAX,[EBP + 0xfffffde8]
00409151  6804074100           PUSH 0x410704
00409156  50                   PUSH EAX
00409157  ff15f8e04000         CALL dword ptr [0x0040e0f8]
0040915d  8d85e8fdffff         LEA EAX,[EBP + 0xfffffde8]
00409163  50                   PUSH EAX
00409164  ffd7                 CALL EDI
00409166  8bd8                 MOV EBX,EAX
00409168  8d85e8fdffff         LEA EAX,[EBP + 0xfffffde8]
0040916e  53                   PUSH EBX
0040916f  50                   PUSH EAX
00409170  ff75f4               PUSH dword ptr [EBP + -0xc]
00409173  ff1500e14000         CALL dword ptr [0x0040e100]
00409179  3bc3                 CMP EAX,EBX
0040917b  750f                 JNZ 0x0040918c
0040917d  6a01                 PUSH 0x1
0040917f  ff75fc               PUSH dword ptr [EBP + -0x4]
00409182  6804010000           PUSH 0x104
00409187  e9f4feffff           JMP 0x00409080
0040918c  ff75fc               PUSH dword ptr [EBP + -0x4]
0040918f  8b3504e14000         MOV ESI,dword ptr [0x0040e104]
00409195  ffd6                 CALL ESI
00409197  ff75f4               PUSH dword ptr [EBP + -0xc]
0040919a  ffd6                 CALL ESI
0040919c  8d85e4fcffff         LEA EAX,[EBP + 0xfffffce4]
004091a2  50                   PUSH EAX
004091a3  e86bf5ffff           CALL 0x00408713
004091a8  59                   POP ECX
004091a9  5f                   POP EDI
004091aa  5e                   POP ESI
004091ab  5b                   POP EBX
004091ac  c9                   LEAVE
004091ad  c3                   RET
004091ae  ff75fc               PUSH dword ptr [EBP + -0x4]
004091b1  8b3504e14000         MOV ESI,dword ptr [0x0040e104]
004091b7  ffd6                 CALL ESI
004091b9  ff75f4               PUSH dword ptr [EBP + -0xc]
004091bc  ffd6                 CALL ESI
004091be  837df000             CMP dword ptr [EBP + -0x10],0x0
004091c2  74d8                 JZ 0x0040919c
004091c4  8d85e0fbffff         LEA EAX,[EBP + 0xfffffbe0]
004091ca  50                   PUSH EAX
004091cb  e843f5ffff           CALL 0x00408713
004091d0  59                   POP ECX
004091d1  8d85e0fbffff         LEA EAX,[EBP + 0xfffffbe0]
004091d7  50                   PUSH EAX
004091d8  8d85e4fcffff         LEA EAX,[EBP + 0xfffffce4]
004091de  50                   PUSH EAX
004091df  e81c1b0000           CALL 0x0040ad00
004091e4  59                   POP ECX
004091e5  ebc1                 JMP 0x004091a8

; ==== FUNCTION FUN_004091e7 entry=004091e7 sig=undefined __stdcall FUN_004091e7(void)
004091e7  55                   PUSH EBP
004091e8  8bec                 MOV EBP,ESP
004091ea  81ec04010000         SUB ESP,0x104
004091f0  53                   PUSH EBX
004091f1  56                   PUSH ESI
004091f2  57                   PUSH EDI
004091f3  ff3520384100         PUSH dword ptr [0x00413820]
004091f9  ff1598e24000         CALL dword ptr [0x0040e298]
004091ff  ff35f43b4100         PUSH dword ptr [0x00413bf4]
00409205  8945fc               MOV dword ptr [EBP + -0x4],EAX
00409208  bf00010000           MOV EDI,0x100
0040920d  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
00409213  57                   PUSH EDI
00409214  50                   PUSH EAX
00409215  6820344100           PUSH 0x413420
0040921a  be78014100           MOV ESI,0x410178
0040921f  6894074100           PUSH 0x410794
00409224  56                   PUSH ESI
00409225  ff155ce14000         CALL dword ptr [0x0040e15c]
0040922b  33db                 XOR EBX,EBX
0040922d  389dfcfeffff         CMP byte ptr [EBP + 0xfffffefc],BL
00409233  741a                 JZ 0x0040924f
00409235  57                   PUSH EDI
00409236  e8a8060000           CALL 0x004098e3
0040923b  59                   POP ECX
0040923c  a324384100           MOV [0x00413824],EAX
00409241  8d8dfcfeffff         LEA ECX,[EBP + 0xfffffefc]
00409247  51                   PUSH ECX
00409248  50                   PUSH EAX
00409249  ff1544e14000         CALL dword ptr [0x0040e144]
0040924f  ff35f43b4100         PUSH dword ptr [0x00413bf4]
00409255  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
0040925b  57                   PUSH EDI
0040925c  50                   PUSH EAX
0040925d  6884074100           PUSH 0x410784
00409262  6878074100           PUSH 0x410778
00409267  56                   PUSH ESI
00409268  ff155ce14000         CALL dword ptr [0x0040e15c]
0040926e  ff35f43b4100         PUSH dword ptr [0x00413bf4]
00409274  8b3dd4e04000         MOV EDI,dword ptr [0x0040e0d4]
0040927a  53                   PUSH EBX
0040927b  6864074100           PUSH 0x410764
00409280  56                   PUSH ESI
00409281  ffd7                 CALL EDI
00409283  ff35f43b4100         PUSH dword ptr [0x00413bf4]
00409289  a254384100           MOV [0x00413854],AL
0040928e  6a08                 PUSH 0x8
00409290  6850074100           PUSH 0x410750
00409295  56                   PUSH ESI
00409296  ffd7                 CALL EDI
00409298  a2a0384100           MOV [0x004138a0],AL
0040929d  8d85fcfeffff         LEA EAX,[EBP + 0xfffffefc]
004092a3  50                   PUSH EAX
004092a4  6a10                 PUSH 0x10
004092a6  0fb60554384100       MOVZX EAX,byte ptr [0x00413854]
004092ad  53                   PUSH EBX
004092ae  53                   PUSH EBX
004092af  53                   PUSH EBX
004092b0  50                   PUSH EAX
004092b1  8b7dfc               MOV EDI,dword ptr [EBP + -0x4]
004092b4  53                   PUSH EBX
004092b5  53                   PUSH EBX
004092b6  8b357ce04000         MOV ESI,dword ptr [0x0040e07c]
004092bc  6a01                 PUSH 0x1
004092be  68bc020000           PUSH 0x2bc
004092c3  53                   PUSH EBX
004092c4  53                   PUSH EBX
004092c5  53                   PUSH EBX
004092c6  6a48                 PUSH 0x48
004092c8  6a5a                 PUSH 0x5a
004092ca  57                   PUSH EDI
004092cb  ffd6                 CALL ESI
004092cd  50                   PUSH EAX
004092ce  6a10                 PUSH 0x10
004092d0  ff15a8e04000         CALL dword ptr [0x0040e0a8]
004092d6  f7d8                 NEG EAX
004092d8  50                   PUSH EAX
004092d9  ff1580e04000         CALL dword ptr [0x0040e080]
004092df  6a0c                 PUSH 0xc
004092e1  57                   PUSH EDI
004092e2  a388384100           MOV [0x00413888],EAX
004092e7  ffd6                 CALL ESI
004092e9  6a0e                 PUSH 0xe
004092eb  57                   PUSH EDI
004092ec  ffd6                 CALL ESI
004092ee  6a08                 PUSH 0x8
004092f0  57                   PUSH EDI
004092f1  ffd6                 CALL ESI
004092f3  6a0a                 PUSH 0xa
004092f5  57                   PUSH EDI
004092f6  a3f4384100           MOV [0x004138f4],EAX
004092fb  ffd6                 CALL ESI
004092fd  5f                   POP EDI
004092fe  5e                   POP ESI
004092ff  a3f8384100           MOV [0x004138f8],EAX
00409304  5b                   POP EBX
00409305  c9                   LEAVE
00409306  c3                   RET

; ==== FUNCTION FUN_00409307 entry=00409307 sig=undefined __stdcall FUN_00409307(void)
00409307  55                   PUSH EBP
00409308  8bec                 MOV EBP,ESP
0040930a  81ec44010000         SUB ESP,0x144
00409310  53                   PUSH EBX
00409311  33db                 XOR EBX,EBX
00409313  381d20394100         CMP byte ptr [0x00413920],BL
00409319  56                   PUSH ESI
0040931a  57                   PUSH EDI
0040931b  0f84d7010000         JZ 0x004094f8
00409321  8d85bcfeffff         LEA EAX,[EBP + 0xfffffebc]
00409327  6800010000           PUSH 0x100
0040932c  50                   PUSH EAX
0040932d  ff15f4e04000         CALL dword ptr [0x0040e0f4]
00409333  8d85bcfeffff         LEA EAX,[EBP + 0xfffffebc]
00409339  50                   PUSH EAX
0040933a  ff1540e14000         CALL dword ptr [0x0040e140]
00409340  80bc05bbfeffff5c     CMP byte ptr [EBP + EAX*0x1 + 0xfffffebb],0x5c
00409348  8b35f8e04000         MOV ESI,dword ptr [0x0040e0f8]
0040934e  740e                 JZ 0x0040935e
00409350  8d85bcfeffff         LEA EAX,[EBP + 0xfffffebc]
00409356  68cc004100           PUSH 0x4100cc
0040935b  50                   PUSH EAX
0040935c  ffd6                 CALL ESI
0040935e  8d85bcfeffff         LEA EAX,[EBP + 0xfffffebc]
00409364  6820394100           PUSH 0x413920
00409369  50                   PUSH EAX
0040936a  ffd6                 CALL ESI
0040936c  8d85bcfeffff         LEA EAX,[EBP + 0xfffffebc]
00409372  53                   PUSH EBX
00409373  50                   PUSH EAX
00409374  ff15fce04000         CALL dword ptr [0x0040e0fc]
0040937a  83f8ff               CMP EAX,-0x1
0040937d  8945fc               MOV dword ptr [EBP + -0x4],EAX
00409380  0f8472010000         JZ 0x004094f8
00409386  ff35f43b4100         PUSH dword ptr [0x00413bf4]
0040938c  6800400000           PUSH 0x4000
00409391  ff35503c4100         PUSH dword ptr [0x00413c50]
00409397  6814074100           PUSH 0x410714
0040939c  68c40d4100           PUSH 0x410dc4
004093a1  6808074100           PUSH 0x410708
004093a6  ff155ce14000         CALL dword ptr [0x0040e15c]
004093ac  8b0d503c4100         MOV ECX,dword ptr [0x00413c50]
004093b2  80397f               CMP byte ptr [ECX],0x7f
004093b5  0f8542010000         JNZ 0x004094fd
004093bb  83f801               CMP EAX,0x1
004093be  0f8539010000         JNZ 0x004094fd
004093c4  68dc074100           PUSH 0x4107dc
004093c9  51                   PUSH ECX
004093ca  ff1544e14000         CALL dword ptr [0x0040e144]
004093d0  8d45bc               LEA EAX,[EBP + -0x44]
004093d3  50                   PUSH EAX
004093d4  e85e010000           CALL 0x00409537
004093d9  8b35503c4100         MOV ESI,dword ptr [0x00413c50]
004093df  59                   POP ECX
004093e0  8a06                 MOV AL,byte ptr [ESI]
004093e2  3ac3                 CMP AL,BL
004093e4  0f84e9000000         JZ 0x004094d3
004093ea  8b7dfc               MOV EDI,dword ptr [EBP + -0x4]
004093ed  3c25                 CMP AL,0x25
004093ef  0f85d2000000         JNZ 0x004094c7
004093f5  8a4601               MOV AL,byte ptr [ESI + 0x1]
004093f8  3c31                 CMP AL,0x31
004093fa  0f8cc7000000         JL 0x004094c7
00409400  3c38                 CMP AL,0x38
00409402  0f8fbf000000         JG 0x004094c7
00409408  807e0225             CMP byte ptr [ESI + 0x2],0x25
0040940c  0f85b5000000         JNZ 0x004094c7
00409412  3c34                 CMP AL,0x34
00409414  7f11                 JG 0x00409427
00409416  0fbef8               MOVSX EDI,AL
00409419  83ef30               SUB EDI,0x30
0040941c  c1e707               SHL EDI,0x7
0040941f  81c720394100         ADD EDI,0x413920
00409425  eb53                 JMP 0x0040947a
00409427  3c35                 CMP AL,0x35
00409429  7516                 JNZ 0x00409441
0040942b  391dc8384100         CMP dword ptr [0x004138c8],EBX
00409431  7407                 JZ 0x0040943a
00409433  bfd0074100           MOV EDI,0x4107d0
00409438  eb40                 JMP 0x0040947a
0040943a  bfc4074100           MOV EDI,0x4107c4
0040943f  eb39                 JMP 0x0040947a
00409441  3c36                 CMP AL,0x36
00409443  7505                 JNZ 0x0040944a
00409445  8d7dbc               LEA EDI,[EBP + -0x44]
00409448  eb30                 JMP 0x0040947a
0040944a  3c37                 CMP AL,0x37
0040944c  7516                 JNZ 0x00409464
0040944e  391d8c384100         CMP dword ptr [0x0041388c],EBX
00409454  7407                 JZ 0x0040945d
00409456  bfbc074100           MOV EDI,0x4107bc
0040945b  eb1d                 JMP 0x0040947a
0040945d  bfb4074100           MOV EDI,0x4107b4
00409462  eb16                 JMP 0x0040947a
00409464  3c38                 CMP AL,0x38
00409466  7512                 JNZ 0x0040947a
00409468  391d8c384100         CMP dword ptr [0x0041388c],EBX
0040946e  bfa0074100           MOV EDI,0x4107a0
00409473  7505                 JNZ 0x0040947a
00409475  bf20344100           MOV EDI,0x413420
0040947a  57                   PUSH EDI
0040947b  ff1540e14000         CALL dword ptr [0x0040e140]
00409481  83e803               SUB EAX,0x3
00409484  3bc3                 CMP EAX,EBX
00409486  7e1e                 JLE 0x004094a6
00409488  8d5603               LEA EDX,[ESI + 0x3]
0040948b  8bca                 MOV ECX,EDX
0040948d  3819                 CMP byte ptr [ECX],BL
0040948f  7403                 JZ 0x00409494
00409491  41                   INC ECX
00409492  ebf9                 JMP 0x0040948d
00409494  3bca                 CMP ECX,EDX
00409496  7222                 JC 0x004094ba
00409498  8a19                 MOV BL,byte ptr [ECX]
0040949a  881c01               MOV byte ptr [ECX + EAX*0x1],BL
0040949d  49                   DEC ECX
0040949e  3bca                 CMP ECX,EDX
004094a0  73f6                 JNC 0x00409498
004094a2  33db                 XOR EBX,EBX
004094a4  eb14                 JMP 0x004094ba
004094a6  7d12                 JGE 0x004094ba
004094a8  8d4e03               LEA ECX,[ESI + 0x3]
004094ab  8a11                 MOV DL,byte ptr [ECX]
004094ad  3ad3                 CMP DL,BL
004094af  7406                 JZ 0x004094b7
004094b1  881401               MOV byte ptr [ECX + EAX*0x1],DL
004094b4  41                   INC ECX
004094b5  ebf4                 JMP 0x004094ab
004094b7  881c01               MOV byte ptr [ECX + EAX*0x1],BL
004094ba  8a07                 MOV AL,byte ptr [EDI]
004094bc  3ac3                 CMP AL,BL
004094be  7406                 JZ 0x004094c6
004094c0  8806                 MOV byte ptr [ESI],AL
004094c2  46                   INC ESI
004094c3  47                   INC EDI
004094c4  ebf4                 JMP 0x004094ba
004094c6  4e                   DEC ESI
004094c7  8a4601               MOV AL,byte ptr [ESI + 0x1]
004094ca  46                   INC ESI
004094cb  3ac3                 CMP AL,BL
004094cd  0f851affffff         JNZ 0x004093ed
004094d3  ff35503c4100         PUSH dword ptr [0x00413c50]
004094d9  ff1540e14000         CALL dword ptr [0x0040e140]
004094df  50                   PUSH EAX
004094e0  ff35503c4100         PUSH dword ptr [0x00413c50]
004094e6  ff75fc               PUSH dword ptr [EBP + -0x4]
004094e9  ff1500e14000         CALL dword ptr [0x0040e100]
004094ef  ff75fc               PUSH dword ptr [EBP + -0x4]
004094f2  ff1504e14000         CALL dword ptr [0x0040e104]
004094f8  5f                   POP EDI
004094f9  5e                   POP ESI
004094fa  5b                   POP EBX
004094fb  c9                   LEAVE
004094fc  c3                   RET
004094fd  6a5e                 PUSH 0x5e
004094ff  51                   PUSH ECX
00409500  e8eb0b0000           CALL 0x0040a0f0
00409505  59                   POP ECX
00409506  3bc3                 CMP EAX,EBX
00409508  59                   POP ECX
00409509  0f84c1feffff         JZ 0x004093d0
0040950f  3818                 CMP byte ptr [EAX],BL
00409511  8bc8                 MOV ECX,EAX
00409513  7405                 JZ 0x0040951a
00409515  41                   INC ECX
00409516  3819                 CMP byte ptr [ECX],BL
00409518  75fb                 JNZ 0x00409515
0040951a  3bc8                 CMP ECX,EAX
0040951c  7208                 JC 0x00409526
0040951e  8a11                 MOV DL,byte ptr [ECX]
00409520  885101               MOV byte ptr [ECX + 0x1],DL
00409523  49                   DEC ECX
00409524  ebf4                 JMP 0x0040951a
00409526  6a5e                 PUSH 0x5e
00409528  c6000d               MOV byte ptr [EAX],0xd
0040952b  c640010a             MOV byte ptr [EAX + 0x1],0xa
0040952f  ff35503c4100         PUSH dword ptr [0x00413c50]
00409535  ebc9                 JMP 0x00409500

; ==== FUNCTION FUN_00409537 entry=00409537 sig=undefined __cdecl FUN_00409537(LPSTR param_1)
00409537  55                   PUSH EBP
00409538  8bec                 MOV EBP,ESP
0040953a  83ec10               SUB ESP,0x10
0040953d  8d45f0               LEA EAX,[EBP + -0x10]
00409540  50                   PUSH EAX
00409541  ff15b4e04000         CALL dword ptr [0x0040e0b4]
00409547  0fb745fa             MOVZX EAX,word ptr [EBP + -0x6]
0040954b  50                   PUSH EAX
0040954c  0fb745f8             MOVZX EAX,word ptr [EBP + -0x8]
00409550  50                   PUSH EAX
00409551  6a64                 PUSH 0x64
00409553  0fb745f0             MOVZX EAX,word ptr [EBP + -0x10]
00409557  99                   CDQ
00409558  59                   POP ECX
00409559  f7f9                 IDIV ECX
0040955b  0fb745f6             MOVZX EAX,word ptr [EBP + -0xa]
0040955f  52                   PUSH EDX
00409560  50                   PUSH EAX
00409561  0fb745f2             MOVZX EAX,word ptr [EBP + -0xe]
00409565  50                   PUSH EAX
00409566  68cc0d4100           PUSH 0x410dcc
0040956b  ff7508               PUSH dword ptr [EBP + 0x8]
0040956e  ff156ce24000         CALL dword ptr [0x0040e26c]
00409574  83c41c               ADD ESP,0x1c
00409577  c9                   LEAVE
00409578  c3                   RET

; ==== FUNCTION FUN_00409579 entry=00409579 sig=CHAR __stdcall FUN_00409579(void)
00409579  55                   PUSH EBP
0040957a  8bec                 MOV EBP,ESP
0040957c  81ec00010000         SUB ESP,0x100
00409582  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
00409588  50                   PUSH EAX
00409589  6800010000           PUSH 0x100
0040958e  ff1548e14000         CALL dword ptr [0x0040e148]
00409594  8a8500ffffff         MOV AL,byte ptr [EBP + 0xffffff00]
0040959a  c9                   LEAVE
0040959b  c3                   RET

; ==== FUNCTION FUN_0040959c entry=0040959c sig=undefined __cdecl FUN_0040959c(LPCSTR param_1, LPCSTR param_2)
0040959c  55                   PUSH EBP
0040959d  8bec                 MOV EBP,ESP
0040959f  81ec00050000         SUB ESP,0x500
004095a5  53                   PUSH EBX
004095a6  8b5d0c               MOV EBX,dword ptr [EBP + 0xc]
004095a9  56                   PUSH ESI
004095aa  8b3550e14000         MOV ESI,dword ptr [0x0040e150]
004095b0  57                   PUSH EDI
004095b1  6a00                 PUSH 0x0
004095b3  53                   PUSH EBX
004095b4  ff7508               PUSH dword ptr [EBP + 0x8]
004095b7  ffd6                 CALL ESI
004095b9  85c0                 TEST EAX,EAX
004095bb  7405                 JZ 0x004095c2
004095bd  ff7508               PUSH dword ptr [EBP + 0x8]
004095c0  eb22                 JMP 0x004095e4
004095c2  8d8500fdffff         LEA EAX,[EBP + 0xfffffd00]
004095c8  53                   PUSH EBX
004095c9  50                   PUSH EAX
004095ca  e89a010000           CALL 0x00409769
004095cf  59                   POP ECX
004095d0  8d8500fdffff         LEA EAX,[EBP + 0xfffffd00]
004095d6  59                   POP ECX
004095d7  6a00                 PUSH 0x0
004095d9  50                   PUSH EAX
004095da  ff7508               PUSH dword ptr [EBP + 0x8]
004095dd  ffd6                 CALL ESI
004095df  85c0                 TEST EAX,EAX
004095e1  750c                 JNZ 0x004095ef
004095e3  53                   PUSH EBX
004095e4  e842ebffff           CALL 0x0040812b
004095e9  59                   POP ECX
004095ea  e975010000           JMP 0x00409764
004095ef  6a01                 PUSH 0x1
004095f1  5f                   POP EDI
004095f2  ff7508               PUSH dword ptr [EBP + 0x8]
004095f5  893d64384100         MOV dword ptr [0x00413864],EDI
004095fb  e82bebffff           CALL 0x0040812b
00409600  8b3544e14000         MOV ESI,dword ptr [0x0040e144]
00409606  59                   POP ECX
00409607  8d8500fdffff         LEA EAX,[EBP + 0xfffffd00]
0040960d  50                   PUSH EAX
0040960e  8d8500feffff         LEA EAX,[EBP + 0xfffffe00]
00409614  50                   PUSH EAX
00409615  ffd6                 CALL ESI
00409617  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
0040961d  53                   PUSH EBX
0040961e  50                   PUSH EAX
0040961f  ffd6                 CALL ESI
00409621  33f6                 XOR ESI,ESI
00409623  8d8500feffff         LEA EAX,[EBP + 0xfffffe00]
00409629  56                   PUSH ESI
0040962a  50                   PUSH EAX
0040962b  e809f4ffff           CALL 0x00408a39
00409630  59                   POP ECX
00409631  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
00409637  59                   POP ECX
00409638  56                   PUSH ESI
00409639  50                   PUSH EAX
0040963a  e8faf3ffff           CALL 0x00408a39
0040963f  a134384100           MOV EAX,[0x00413834]
00409644  59                   POP ECX
00409645  83f802               CMP EAX,0x2
00409648  59                   POP ECX
00409649  7523                 JNZ 0x0040966e
0040964b  8d8500feffff         LEA EAX,[EBP + 0xfffffe00]
00409651  68f8064100           PUSH 0x4106f8
00409656  50                   PUSH EAX
00409657  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
0040965d  50                   PUSH EAX
0040965e  68fc0d4100           PUSH 0x410dfc
00409663  ff1520e14000         CALL dword ptr [0x0040e120]
00409669  e9f6000000           JMP 0x00409764
0040966e  3bc7                 CMP EAX,EDI
00409670  751d                 JNZ 0x0040968f
00409672  6a04                 PUSH 0x4
00409674  56                   PUSH ESI
00409675  8b35b0e04000         MOV ESI,dword ptr [0x0040e0b0]
0040967b  53                   PUSH EBX
0040967c  ffd6                 CALL ESI
0040967e  6a04                 PUSH 0x4
00409680  8d8500feffff         LEA EAX,[EBP + 0xfffffe00]
00409686  53                   PUSH EBX
00409687  50                   PUSH EAX
00409688  ffd6                 CALL ESI
0040968a  e9d5000000           JMP 0x00409764
0040968f  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
00409695  50                   PUSH EAX
00409696  e816010000           CALL 0x004097b1
0040969b  59                   POP ECX
0040969c  50                   PUSH EAX
0040969d  8d8500feffff         LEA EAX,[EBP + 0xfffffe00]
004096a3  50                   PUSH EAX
004096a4  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
004096aa  50                   PUSH EAX
004096ab  8d8500fbffff         LEA EAX,[EBP + 0xfffffb00]
004096b1  68e40d4100           PUSH 0x410de4
004096b6  50                   PUSH EAX
004096b7  ff156ce24000         CALL dword ptr [0x0040e26c]
004096bd  83c414               ADD ESP,0x14
004096c0  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
004096c6  6800010000           PUSH 0x100
004096cb  50                   PUSH EAX
004096cc  ff15f4e04000         CALL dword ptr [0x0040e0f4]
004096d2  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
004096d8  50                   PUSH EAX
004096d9  ff1540e14000         CALL dword ptr [0x0040e140]
004096df  80bc05fffeffff5c     CMP byte ptr [EBP + EAX*0x1 + 0xfffffeff],0x5c
004096e7  8b1df8e04000         MOV EBX,dword ptr [0x0040e0f8]
004096ed  740e                 JZ 0x004096fd
004096ef  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
004096f5  68cc004100           PUSH 0x4100cc
004096fa  50                   PUSH EAX
004096fb  ffd3                 CALL EBX
004096fd  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
00409703  68c4064100           PUSH 0x4106c4
00409708  50                   PUSH EAX
00409709  ffd3                 CALL EBX
0040970b  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
00409711  57                   PUSH EDI
00409712  50                   PUSH EAX
00409713  ff1530e14000         CALL dword ptr [0x0040e130]
00409719  8bf8                 MOV EDI,EAX
0040971b  83ffff               CMP EDI,-0x1
0040971e  7512                 JNZ 0x00409732
00409720  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
00409726  56                   PUSH ESI
00409727  50                   PUSH EAX
00409728  ff15fce04000         CALL dword ptr [0x0040e0fc]
0040972e  8bf8                 MOV EDI,EAX
00409730  eb0a                 JMP 0x0040973c
00409732  6a02                 PUSH 0x2
00409734  56                   PUSH ESI
00409735  57                   PUSH EDI
00409736  ff15cce04000         CALL dword ptr [0x0040e0cc]
0040973c  83ffff               CMP EDI,-0x1
0040973f  7423                 JZ 0x00409764
00409741  8d8500fbffff         LEA EAX,[EBP + 0xfffffb00]
00409747  50                   PUSH EAX
00409748  ff1540e14000         CALL dword ptr [0x0040e140]
0040974e  50                   PUSH EAX
0040974f  8d8500fbffff         LEA EAX,[EBP + 0xfffffb00]
00409755  50                   PUSH EAX
00409756  57                   PUSH EDI
00409757  ff1500e14000         CALL dword ptr [0x0040e100]
0040975d  57                   PUSH EDI
0040975e  ff1504e14000         CALL dword ptr [0x0040e104]
00409764  5f                   POP EDI
00409765  5e                   POP ESI
00409766  5b                   POP EBX
00409767  c9                   LEAVE
00409768  c3                   RET

; ==== FUNCTION FUN_00409769 entry=00409769 sig=undefined __cdecl FUN_00409769(LPSTR param_1, LPCSTR param_2)
00409769  ff742408             PUSH dword ptr [ESP + 0x8]
0040976d  ff742408             PUSH dword ptr [ESP + 0x8]
00409771  ff1544e14000         CALL dword ptr [0x0040e144]
00409777  ff742404             PUSH dword ptr [ESP + 0x4]
0040977b  e831000000           CALL 0x004097b1
00409780  59                   POP ECX
00409781  0fb70d70384100       MOVZX ECX,word ptr [0x00413870]
00409788  51                   PUSH ECX
00409789  68040e4100           PUSH 0x410e04
0040978e  50                   PUSH EAX
0040978f  ff156ce24000         CALL dword ptr [0x0040e26c]
00409795  83c40c               ADD ESP,0xc
00409798  66ff0570384100       INC word ptr [0x00413870]
0040979f  6a00                 PUSH 0x0
004097a1  ff742408             PUSH dword ptr [ESP + 0x8]
004097a5  e823f4ffff           CALL 0x00408bcd
004097aa  59                   POP ECX
004097ab  85c0                 TEST EAX,EAX
004097ad  59                   POP ECX
004097ae  74b9                 JZ 0x00409769
004097b0  c3                   RET

; ==== FUNCTION FUN_004097b1 entry=004097b1 sig=char * __cdecl FUN_004097b1(LPCSTR param_1)
004097b1  56                   PUSH ESI
004097b2  8b742408             MOV ESI,dword ptr [ESP + 0x8]
004097b6  56                   PUSH ESI
004097b7  ff1540e14000         CALL dword ptr [0x0040e140]
004097bd  03c6                 ADD EAX,ESI
004097bf  3bc6                 CMP EAX,ESI
004097c1  7608                 JBE 0x004097cb
004097c3  80385c               CMP byte ptr [EAX],0x5c
004097c6  7408                 JZ 0x004097d0
004097c8  48                   DEC EAX
004097c9  ebf4                 JMP 0x004097bf
004097cb  80385c               CMP byte ptr [EAX],0x5c
004097ce  7501                 JNZ 0x004097d1
004097d0  40                   INC EAX
004097d1  5e                   POP ESI
004097d2  c3                   RET

; ==== FUNCTION FUN_004097d3 entry=004097d3 sig=undefined __cdecl FUN_004097d3(LPCSTR param_1)
004097d3  55                   PUSH EBP
004097d4  8bec                 MOV EBP,ESP
004097d6  81ec00030000         SUB ESP,0x300
004097dc  833d3438410002       CMP dword ptr [0x00413834],0x2
004097e3  56                   PUSH ESI
004097e4  57                   PUSH EDI
004097e5  0f85e7000000         JNZ 0x004098d2
004097eb  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
004097f1  6800010000           PUSH 0x100
004097f6  50                   PUSH EAX
004097f7  ff15f4e04000         CALL dword ptr [0x0040e0f4]
004097fd  8b3540e14000         MOV ESI,dword ptr [0x0040e140]
00409803  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
00409809  50                   PUSH EAX
0040980a  ffd6                 CALL ESI
0040980c  80bc05fffeffff5c     CMP byte ptr [EBP + EAX*0x1 + 0xfffffeff],0x5c
00409814  8b3df8e04000         MOV EDI,dword ptr [0x0040e0f8]
0040981a  740e                 JZ 0x0040982a
0040981c  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
00409822  68cc004100           PUSH 0x4100cc
00409827  50                   PUSH EAX
00409828  ffd7                 CALL EDI
0040982a  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
00409830  68f8064100           PUSH 0x4106f8
00409835  50                   PUSH EAX
00409836  ffd7                 CALL EDI
00409838  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
0040983e  6a01                 PUSH 0x1
00409840  50                   PUSH EAX
00409841  ff1530e14000         CALL dword ptr [0x0040e130]
00409847  8bf8                 MOV EDI,EAX
00409849  83ffff               CMP EDI,-0x1
0040984c  7435                 JZ 0x00409883
0040984e  ff7508               PUSH dword ptr [EBP + 0x8]
00409851  8d8500fdffff         LEA EAX,[EBP + 0xfffffd00]
00409857  68e0064100           PUSH 0x4106e0
0040985c  50                   PUSH EAX
0040985d  ff156ce24000         CALL dword ptr [0x0040e26c]
00409863  83c40c               ADD ESP,0xc
00409866  6a02                 PUSH 0x2
00409868  6a00                 PUSH 0x0
0040986a  57                   PUSH EDI
0040986b  ff15cce04000         CALL dword ptr [0x0040e0cc]
00409871  8d8500fdffff         LEA EAX,[EBP + 0xfffffd00]
00409877  50                   PUSH EAX
00409878  ffd6                 CALL ESI
0040987a  50                   PUSH EAX
0040987b  8d8500fdffff         LEA EAX,[EBP + 0xfffffd00]
00409881  eb3e                 JMP 0x004098c1
00409883  8d8500ffffff         LEA EAX,[EBP + 0xffffff00]
00409889  6a00                 PUSH 0x0
0040988b  50                   PUSH EAX
0040988c  ff15fce04000         CALL dword ptr [0x0040e0fc]
00409892  8bf8                 MOV EDI,EAX
00409894  83ffff               CMP EDI,-0x1
00409897  7446                 JZ 0x004098df
00409899  ff7508               PUSH dword ptr [EBP + 0x8]
0040989c  8d8500fdffff         LEA EAX,[EBP + 0xfffffd00]
004098a2  68140e4100           PUSH 0x410e14
004098a7  50                   PUSH EAX
004098a8  ff156ce24000         CALL dword ptr [0x0040e26c]
004098ae  83c40c               ADD ESP,0xc
004098b1  8d8500fdffff         LEA EAX,[EBP + 0xfffffd00]
004098b7  50                   PUSH EAX
004098b8  ffd6                 CALL ESI
004098ba  50                   PUSH EAX
004098bb  8d8500fdffff         LEA EAX,[EBP + 0xfffffd00]
004098c1  50                   PUSH EAX
004098c2  57                   PUSH EDI
004098c3  ff1500e14000         CALL dword ptr [0x0040e100]
004098c9  57                   PUSH EDI
004098ca  ff1504e14000         CALL dword ptr [0x0040e104]
004098d0  eb0d                 JMP 0x004098df
004098d2  6a04                 PUSH 0x4
004098d4  6a00                 PUSH 0x0
004098d6  ff7508               PUSH dword ptr [EBP + 0x8]
004098d9  ff15b0e04000         CALL dword ptr [0x0040e0b0]
004098df  5f                   POP EDI
004098e0  5e                   POP ESI
004098e1  c9                   LEAVE
004098e2  c3                   RET

; ==== FUNCTION FUN_004098e3 entry=004098e3 sig=undefined4 * __cdecl FUN_004098e3(uint param_1)
004098e3  833dd038410000       CMP dword ptr [0x004138d0],0x0
004098ea  56                   PUSH ESI
004098eb  7526                 JNZ 0x00409913
004098ed  6800fc0000           PUSH 0xfc00
004098f2  e849140000           CALL 0x0040ad40
004098f7  a3003c4100           MOV [0x00413c00],EAX
004098fc  a3d0384100           MOV [0x004138d0],EAX
00409901  832000               AND dword ptr [EAX],0x0
00409904  8b44240c             MOV EAX,dword ptr [ESP + 0xc]
00409908  83c004               ADD EAX,0x4
0040990b  59                   POP ECX
0040990c  a374384100           MOV [0x00413874],EAX
00409911  eb48                 JMP 0x0040995b
00409913  8b0d74384100         MOV ECX,dword ptr [0x00413874]
00409919  8b742408             MOV ESI,dword ptr [ESP + 0x8]
0040991d  b800fc0000           MOV EAX,0xfc00
00409922  8bd0                 MOV EDX,EAX
00409924  2bd1                 SUB EDX,ECX
00409926  3bd6                 CMP EDX,ESI
00409928  7211                 JC 0x0040993b
0040992a  a1003c4100           MOV EAX,[0x00413c00]
0040992f  03c1                 ADD EAX,ECX
00409931  03ce                 ADD ECX,ESI
00409933  890d74384100         MOV dword ptr [0x00413874],ECX
00409939  5e                   POP ESI
0040993a  c3                   RET
0040993b  50                   PUSH EAX
0040993c  e8ff130000           CALL 0x0040ad40
00409941  59                   POP ECX
00409942  8b0d003c4100         MOV ECX,dword ptr [0x00413c00]
00409948  8901                 MOV dword ptr [ECX],EAX
0040994a  a3003c4100           MOV [0x00413c00],EAX
0040994f  832000               AND dword ptr [EAX],0x0
00409952  83c604               ADD ESI,0x4
00409955  893574384100         MOV dword ptr [0x00413874],ESI
0040995b  a1003c4100           MOV EAX,[0x00413c00]
00409960  5e                   POP ESI
00409961  83c004               ADD EAX,0x4
00409964  c3                   RET

; ==== FUNCTION FUN_00409965 entry=00409965 sig=undefined __stdcall FUN_00409965(void)
00409965  a1d0384100           MOV EAX,[0x004138d0]
0040996a  85c0                 TEST EAX,EAX
0040996c  7411                 JZ 0x0040997f
0040996e  56                   PUSH ESI
0040996f  8b30                 MOV ESI,dword ptr [EAX]
00409971  50                   PUSH EAX
00409972  e879140000           CALL 0x0040adf0
00409977  85f6                 TEST ESI,ESI
00409979  59                   POP ECX
0040997a  8bc6                 MOV EAX,ESI
0040997c  75f1                 JNZ 0x0040996f
0040997e  5e                   POP ESI
0040997f  c3                   RET

; ==== FUNCTION FUN_00409980 entry=00409980 sig=uint __cdecl FUN_00409980(char * param_1, char * param_2)
00409980  55                   PUSH EBP
00409981  8bec                 MOV EBP,ESP
00409983  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
00409986  53                   PUSH EBX
00409987  32c0                 XOR AL,AL
00409989  56                   PUSH ESI
0040998a  3801                 CMP byte ptr [ECX],AL
0040998c  57                   PUSH EDI
0040998d  8bf9                 MOV EDI,ECX
0040998f  7405                 JZ 0x00409996
00409991  47                   INC EDI
00409992  3807                 CMP byte ptr [EDI],AL
00409994  75fb                 JNZ 0x00409991
00409996  8b750c               MOV ESI,dword ptr [EBP + 0xc]
00409999  3806                 CMP byte ptr [ESI],AL
0040999b  7403                 JZ 0x004099a0
0040999d  46                   INC ESI
0040999e  ebf9                 JMP 0x00409999
004099a0  4f                   DEC EDI
004099a1  4e                   DEC ESI
004099a2  3bf9                 CMP EDI,ECX
004099a4  7249                 JC 0x004099ef
004099a6  3b750c               CMP ESI,dword ptr [EBP + 0xc]
004099a9  723b                 JC 0x004099e6
004099ab  0fbe06               MOVSX EAX,byte ptr [ESI]
004099ae  50                   PUSH EAX
004099af  e8fc070000           CALL 0x0040a1b0
004099b4  8bd8                 MOV EBX,EAX
004099b6  59                   POP ECX
004099b7  0fbe07               MOVSX EAX,byte ptr [EDI]
004099ba  50                   PUSH EAX
004099bb  e8f0070000           CALL 0x0040a1b0
004099c0  3bc3                 CMP EAX,EBX
004099c2  59                   POP ECX
004099c3  7507                 JNZ 0x004099cc
004099c5  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
004099c8  4f                   DEC EDI
004099c9  4e                   DEC ESI
004099ca  ebd6                 JMP 0x004099a2
004099cc  0fbe06               MOVSX EAX,byte ptr [ESI]
004099cf  50                   PUSH EAX
004099d0  e8db070000           CALL 0x0040a1b0
004099d5  8bf0                 MOV ESI,EAX
004099d7  59                   POP ECX
004099d8  0fbe07               MOVSX EAX,byte ptr [EDI]
004099db  50                   PUSH EAX
004099dc  e8cf070000           CALL 0x0040a1b0
004099e1  59                   POP ECX
004099e2  2bc6                 SUB EAX,ESI
004099e4  eb0f                 JMP 0x004099f5
004099e6  3bf9                 CMP EDI,ECX
004099e8  7205                 JC 0x004099ef
004099ea  83c8ff               OR EAX,0xffffffff
004099ed  eb06                 JMP 0x004099f5
004099ef  3b750c               CMP ESI,dword ptr [EBP + 0xc]
004099f2  1bc0                 SBB EAX,EAX
004099f4  40                   INC EAX
004099f5  5f                   POP EDI
004099f6  5e                   POP ESI
004099f7  5b                   POP EBX
004099f8  5d                   POP EBP
004099f9  c3                   RET

; ==== FUNCTION FUN_004099fa entry=004099fa sig=int * __cdecl FUN_004099fa(int * param_1, int * param_2, uint param_3, int param_4, char * param_5, LPCSTR param_6, LPCSTR param_7)
004099fa  55                   PUSH EBP
004099fb  8bec                 MOV EBP,ESP
004099fd  53                   PUSH EBX
004099fe  33db                 XOR EBX,EBX
00409a00  395d14               CMP dword ptr [EBP + 0x14],EBX
00409a03  56                   PUSH ESI
00409a04  57                   PUSH EDI
00409a05  751a                 JNZ 0x00409a21
00409a07  ff7510               PUSH dword ptr [EBP + 0x10]
00409a0a  e8d4feffff           CALL 0x004098e3
00409a0f  59                   POP ECX
00409a10  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
00409a13  8901                 MOV dword ptr [ECX],EAX
00409a15  895804               MOV dword ptr [EAX + 0x4],EBX
00409a18  8b01                 MOV EAX,dword ptr [ECX]
00409a1a  8918                 MOV dword ptr [EAX],EBX
00409a1c  e993000000           JMP 0x00409ab4
00409a21  8b3d38e14000         MOV EDI,dword ptr [0x0040e138]
00409a27  8b750c               MOV ESI,dword ptr [EBP + 0xc]
00409a2a  ff7518               PUSH dword ptr [EBP + 0x18]
00409a2d  8d4608               LEA EAX,[ESI + 0x8]
00409a30  50                   PUSH EAX
00409a31  e84affffff           CALL 0x00409980
00409a36  59                   POP ECX
00409a37  3bc3                 CMP EAX,EBX
00409a39  59                   POP ECX
00409a3a  752a                 JNZ 0x00409a66
00409a3c  395d1c               CMP dword ptr [EBP + 0x1c],EBX
00409a3f  740c                 JZ 0x00409a4d
00409a41  ff751c               PUSH dword ptr [EBP + 0x1c]
00409a44  8d860c010000         LEA EAX,[ESI + 0x10c]
00409a4a  50                   PUSH EAX
00409a4b  ffd7                 CALL EDI
00409a4d  3bc3                 CMP EAX,EBX
00409a4f  7515                 JNZ 0x00409a66
00409a51  395d20               CMP dword ptr [EBP + 0x20],EBX
00409a54  740c                 JZ 0x00409a62
00409a56  ff7520               PUSH dword ptr [EBP + 0x20]
00409a59  8d860c020000         LEA EAX,[ESI + 0x20c]
00409a5f  50                   PUSH EAX
00409a60  ffd7                 CALL EDI
00409a62  3bc3                 CMP EAX,EBX
00409a64  7415                 JZ 0x00409a7b
00409a66  7d08                 JGE 0x00409a70
00409a68  8b06                 MOV EAX,dword ptr [ESI]
00409a6a  3bc3                 CMP EAX,EBX
00409a6c  7411                 JZ 0x00409a7f
00409a6e  eb07                 JMP 0x00409a77
00409a70  8b4604               MOV EAX,dword ptr [ESI + 0x4]
00409a73  3bc3                 CMP EAX,EBX
00409a75  7423                 JZ 0x00409a9a
00409a77  8bf0                 MOV ESI,EAX
00409a79  ebaf                 JMP 0x00409a2a
00409a7b  8bc6                 MOV EAX,ESI
00409a7d  eb37                 JMP 0x00409ab6
00409a7f  ff7510               PUSH dword ptr [EBP + 0x10]
00409a82  e85cfeffff           CALL 0x004098e3
00409a87  59                   POP ECX
00409a88  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
00409a8b  8901                 MOV dword ptr [ECX],EAX
00409a8d  895804               MOV dword ptr [EAX + 0x4],EBX
00409a90  8b01                 MOV EAX,dword ptr [ECX]
00409a92  8918                 MOV dword ptr [EAX],EBX
00409a94  8b01                 MOV EAX,dword ptr [ECX]
00409a96  8906                 MOV dword ptr [ESI],EAX
00409a98  eb1a                 JMP 0x00409ab4
00409a9a  ff7510               PUSH dword ptr [EBP + 0x10]
00409a9d  e841feffff           CALL 0x004098e3
00409aa2  59                   POP ECX
00409aa3  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
00409aa6  8901                 MOV dword ptr [ECX],EAX
00409aa8  895804               MOV dword ptr [EAX + 0x4],EBX
00409aab  8b01                 MOV EAX,dword ptr [ECX]
00409aad  8918                 MOV dword ptr [EAX],EBX
00409aaf  8b01                 MOV EAX,dword ptr [ECX]
00409ab1  894604               MOV dword ptr [ESI + 0x4],EAX
00409ab4  33c0                 XOR EAX,EAX
00409ab6  5f                   POP EDI
00409ab7  5e                   POP ESI
00409ab8  5b                   POP EBX
00409ab9  5d                   POP EBP
00409aba  c3                   RET

; ==== FUNCTION FUN_00409abb entry=00409abb sig=undefined __cdecl FUN_00409abb(HDC param_1, HWND param_2)
00409abb  55                   PUSH EBP
00409abc  8bec                 MOV EBP,ESP
00409abe  81ec00010000         SUB ESP,0x100
00409ac4  53                   PUSH EBX
00409ac5  56                   PUSH ESI
00409ac6  57                   PUSH EDI
00409ac7  6a63                 PUSH 0x63
00409ac9  58                   POP EAX
00409aca  33ff                 XOR EDI,EDI
00409acc  6a0a                 PUSH 0xa
00409ace  898500ffffff         MOV dword ptr [EBP + 0xffffff00],EAX
00409ad4  5a                   POP EDX
00409ad5  898504ffffff         MOV dword ptr [EBP + 0xffffff04],EAX
00409adb  6a05                 PUSH 0x5
00409add  89bd08ffffff         MOV dword ptr [EBP + 0xffffff08],EDI
00409ae3  59                   POP ECX
00409ae4  89950cffffff         MOV dword ptr [EBP + 0xffffff0c],EDX
00409aea  6a08                 PUSH 0x8
00409aec  898d10ffffff         MOV dword ptr [EBP + 0xffffff10],ECX
00409af2  5b                   POP EBX
00409af3  c7851cffffff06000000 MOV dword ptr [EBP + 0xffffff1c],0x6
00409afd  6a02                 PUSH 0x2
00409aff  899d14ffffff         MOV dword ptr [EBP + 0xffffff14],EBX
00409b05  58                   POP EAX
00409b06  899d18ffffff         MOV dword ptr [EBP + 0xffffff18],EBX
00409b0c  6a7e                 PUSH 0x7e
00409b0e  89852cffffff         MOV dword ptr [EBP + 0xffffff2c],EAX
00409b14  898534ffffff         MOV dword ptr [EBP + 0xffffff34],EAX
00409b1a  89853cffffff         MOV dword ptr [EBP + 0xffffff3c],EAX
00409b20  898544ffffff         MOV dword ptr [EBP + 0xffffff44],EAX
00409b26  89854cffffff         MOV dword ptr [EBP + 0xffffff4c],EAX
00409b2c  898574ffffff         MOV dword ptr [EBP + 0xffffff74],EAX
00409b32  58                   POP EAX
00409b33  68ee030000           PUSH 0x3ee
00409b38  c78520ffffff0e000000 MOV dword ptr [EBP + 0xffffff20],0xe
00409b42  ff750c               PUSH dword ptr [EBP + 0xc]
00409b45  898d24ffffff         MOV dword ptr [EBP + 0xffffff24],ECX
00409b4b  c78528ffffff13000000 MOV dword ptr [EBP + 0xffffff28],0x13
00409b55  c78530ffffff1a000000 MOV dword ptr [EBP + 0xffffff30],0x1a
00409b5f  c78538ffffff1e000000 MOV dword ptr [EBP + 0xffffff38],0x1e
00409b69  c78540ffffff26000000 MOV dword ptr [EBP + 0xffffff40],0x26
00409b73  c78548ffffff2a000000 MOV dword ptr [EBP + 0xffffff48],0x2a
00409b7d  c78550ffffff32000000 MOV dword ptr [EBP + 0xffffff50],0x32
00409b87  89bd54ffffff         MOV dword ptr [EBP + 0xffffff54],EDI
00409b8d  c78558ffffff39000000 MOV dword ptr [EBP + 0xffffff58],0x39
00409b97  89bd5cffffff         MOV dword ptr [EBP + 0xffffff5c],EDI
00409b9d  c78560ffffff3e000000 MOV dword ptr [EBP + 0xffffff60],0x3e
00409ba7  89bd64ffffff         MOV dword ptr [EBP + 0xffffff64],EDI
00409bad  c78568ffffff48000000 MOV dword ptr [EBP + 0xffffff68],0x48
00409bb7  89bd6cffffff         MOV dword ptr [EBP + 0xffffff6c],EDI
00409bbd  c78570ffffff4e000000 MOV dword ptr [EBP + 0xffffff70],0x4e
00409bc7  c78578ffffff57000000 MOV dword ptr [EBP + 0xffffff78],0x57
00409bd1  c7857cffffff03000000 MOV dword ptr [EBP + 0xffffff7c],0x3
00409bdb  c745805e000000       MOV dword ptr [EBP + -0x80],0x5e
00409be2  c7458404000000       MOV dword ptr [EBP + -0x7c],0x4
00409be9  c7458866000000       MOV dword ptr [EBP + -0x78],0x66
00409bf0  895d8c               MOV dword ptr [EBP + -0x74],EBX
00409bf3  c745906e000000       MOV dword ptr [EBP + -0x70],0x6e
00409bfa  895594               MOV dword ptr [EBP + -0x6c],EDX
00409bfd  c7459872000000       MOV dword ptr [EBP + -0x68],0x72
00409c04  c7459c0b000000       MOV dword ptr [EBP + -0x64],0xb
00409c0b  c745a076000000       MOV dword ptr [EBP + -0x60],0x76
00409c12  c745a40d000000       MOV dword ptr [EBP + -0x5c],0xd
00409c19  c745a879000000       MOV dword ptr [EBP + -0x58],0x79
00409c20  894dac               MOV dword ptr [EBP + -0x54],ECX
00409c23  8945b0               MOV dword ptr [EBP + -0x50],EAX
00409c26  c745b410000000       MOV dword ptr [EBP + -0x4c],0x10
00409c2d  8945b8               MOV dword ptr [EBP + -0x48],EAX
00409c30  c745bc11000000       MOV dword ptr [EBP + -0x44],0x11
00409c37  ff15fce24000         CALL dword ptr [0x0040e2fc]
00409c3d  3bc7                 CMP EAX,EDI
00409c3f  0f84b9010000         JZ 0x00409dfe
00409c45  8d4dd0               LEA ECX,[EBP + -0x30]
00409c48  51                   PUSH ECX
00409c49  50                   PUSH EAX
00409c4a  ff15a0e24000         CALL dword ptr [0x0040e2a0]
00409c50  8b45d0               MOV EAX,dword ptr [EBP + -0x30]
00409c53  8b3500e34000         MOV ESI,dword ptr [0x0040e300]
00409c59  8945ec               MOV dword ptr [EBP + -0x14],EAX
00409c5c  8b45d4               MOV EAX,dword ptr [EBP + -0x2c]
00409c5f  8945f0               MOV dword ptr [EBP + -0x10],EAX
00409c62  8b45d8               MOV EAX,dword ptr [EBP + -0x28]
00409c65  8945e4               MOV dword ptr [EBP + -0x1c],EAX
00409c68  8b45dc               MOV EAX,dword ptr [EBP + -0x24]
00409c6b  8945e8               MOV dword ptr [EBP + -0x18],EAX
00409c6e  8d45ec               LEA EAX,[EBP + -0x14]
00409c71  50                   PUSH EAX
00409c72  ff750c               PUSH dword ptr [EBP + 0xc]
00409c75  ffd6                 CALL ESI
00409c77  8d45e4               LEA EAX,[EBP + -0x1c]
00409c7a  50                   PUSH EAX
00409c7b  ff750c               PUSH dword ptr [EBP + 0xc]
00409c7e  ffd6                 CALL ESI
00409c80  8b45ec               MOV EAX,dword ptr [EBP + -0x14]
00409c83  6a0f                 PUSH 0xf
00409c85  a3b03b4100           MOV [0x00413bb0],EAX
00409c8a  8b45f0               MOV EAX,dword ptr [EBP + -0x10]
00409c8d  a3b43b4100           MOV [0x00413bb4],EAX
00409c92  8b45e4               MOV EAX,dword ptr [EBP + -0x1c]
00409c95  a3b83b4100           MOV [0x00413bb8],EAX
00409c9a  8b45e8               MOV EAX,dword ptr [EBP + -0x18]
00409c9d  a3bc3b4100           MOV [0x00413bbc],EAX
00409ca2  ff1548e24000         CALL dword ptr [0x0040e248]
00409ca8  50                   PUSH EAX
00409ca9  ff155ce04000         CALL dword ptr [0x0040e05c]
00409caf  8945f4               MOV dword ptr [EBP + -0xc],EAX
00409cb2  ff15a8e24000         CALL dword ptr [0x0040e2a8]
00409cb8  8945f8               MOV dword ptr [EBP + -0x8],EAX
00409cbb  a1bc3b4100           MOV EAX,[0x00413bbc]
00409cc0  2b05b43b4100         SUB EAX,dword ptr [0x00413bb4]
00409cc6  40                   INC EAX
00409cc7  50                   PUSH EAX
00409cc8  a1b83b4100           MOV EAX,[0x00413bb8]
00409ccd  2b05b03b4100         SUB EAX,dword ptr [0x00413bb0]
00409cd3  40                   INC EAX
00409cd4  50                   PUSH EAX
00409cd5  ff7508               PUSH dword ptr [EBP + 0x8]
00409cd8  ff1588e04000         CALL dword ptr [0x0040e088]
00409cde  3bc7                 CMP EAX,EDI
00409ce0  8945fc               MOV dword ptr [EBP + -0x4],EAX
00409ce3  0f8415010000         JZ 0x00409dfe
00409ce9  ff7508               PUSH dword ptr [EBP + 0x8]
00409cec  ff1554e04000         CALL dword ptr [0x0040e054]
00409cf2  8bf0                 MOV ESI,EAX
00409cf4  3bf7                 CMP ESI,EDI
00409cf6  89750c               MOV dword ptr [EBP + 0xc],ESI
00409cf9  0f84ff000000         JZ 0x00409dfe
00409cff  ff75fc               PUSH dword ptr [EBP + -0x4]
00409d02  56                   PUSH ESI
00409d03  ff1560e04000         CALL dword ptr [0x0040e060]
00409d09  8945e0               MOV dword ptr [EBP + -0x20],EAX
00409d0c  a1b83b4100           MOV EAX,[0x00413bb8]
00409d11  2b05b03b4100         SUB EAX,dword ptr [0x00413bb0]
00409d17  ff75f4               PUSH dword ptr [EBP + -0xc]
00409d1a  897dc0               MOV dword ptr [EBP + -0x40],EDI
00409d1d  897dc4               MOV dword ptr [EBP + -0x3c],EDI
00409d20  40                   INC EAX
00409d21  8945c8               MOV dword ptr [EBP + -0x38],EAX
00409d24  a1bc3b4100           MOV EAX,[0x00413bbc]
00409d29  2b05b43b4100         SUB EAX,dword ptr [0x00413bb4]
00409d2f  40                   INC EAX
00409d30  8945cc               MOV dword ptr [EBP + -0x34],EAX
00409d33  8d45c0               LEA EAX,[EBP + -0x40]
00409d36  50                   PUSH EAX
00409d37  56                   PUSH ESI
00409d38  ff15b4e24000         CALL dword ptr [0x0040e2b4]
00409d3e  8b75f8               MOV ESI,dword ptr [EBP + -0x8]
00409d41  8bcb                 MOV ECX,EBX
00409d43  c1ee10               SHR ESI,0x10
00409d46  ff35603c4100         PUSH dword ptr [0x00413c60]
00409d4c  8d04b6               LEA EAX,[ESI + ESI*0x4]
00409d4f  d1e0                 SHL EAX,0x1
00409d51  99                   CDQ
00409d52  f7f9                 IDIV ECX
00409d54  50                   PUSH EAX
00409d55  57                   PUSH EDI
00409d56  ff750c               PUSH dword ptr [EBP + 0xc]
00409d59  ff15b8e24000         CALL dword ptr [0x0040e2b8]
00409d5f  a154004100           MOV EAX,[0x00410054]
00409d64  83f817               CMP EAX,0x17
00409d67  7f38                 JG 0x00409da1
00409d69  ff3485603c4100       PUSH dword ptr [EAX*0x4 + 0x413c60]
00409d70  8bc8                 MOV ECX,EAX
00409d72  c1e103               SHL ECX,0x3
00409d75  8b840d04ffffff       MOV EAX,dword ptr [EBP + ECX*0x1 + 0xffffff04]
00409d7c  0fafc6               IMUL EAX,ESI
00409d7f  99                   CDQ
00409d80  f7fb                 IDIV EBX
00409d82  0fb755f8             MOVZX EDX,word ptr [EBP + -0x8]
00409d86  50                   PUSH EAX
00409d87  8b840d00ffffff       MOV EAX,dword ptr [EBP + ECX*0x1 + 0xffffff00]
00409d8e  0fafc2               IMUL EAX,EDX
00409d91  6a04                 PUSH 0x4
00409d93  99                   CDQ
00409d94  59                   POP ECX
00409d95  f7f9                 IDIV ECX
00409d97  50                   PUSH EAX
00409d98  ff750c               PUSH dword ptr [EBP + 0xc]
00409d9b  ff15b8e24000         CALL dword ptr [0x0040e2b8]
00409da1  8b0dbc3b4100         MOV ECX,dword ptr [0x00413bbc]
00409da7  a1b43b4100           MOV EAX,[0x00413bb4]
00409dac  8b35b83b4100         MOV ESI,dword ptr [0x00413bb8]
00409db2  2bc8                 SUB ECX,EAX
00409db4  682000cc00           PUSH 0xcc0020
00409db9  8d5101               LEA EDX,[ECX + 0x1]
00409dbc  8b0db03b4100         MOV ECX,dword ptr [0x00413bb0]
00409dc2  2bf1                 SUB ESI,ECX
00409dc4  52                   PUSH EDX
00409dc5  46                   INC ESI
00409dc6  56                   PUSH ESI
00409dc7  57                   PUSH EDI
00409dc8  57                   PUSH EDI
00409dc9  ff750c               PUSH dword ptr [EBP + 0xc]
00409dcc  52                   PUSH EDX
00409dcd  56                   PUSH ESI
00409dce  50                   PUSH EAX
00409dcf  51                   PUSH ECX
00409dd0  ff7508               PUSH dword ptr [EBP + 0x8]
00409dd3  ff1584e04000         CALL dword ptr [0x0040e084]
00409dd9  ff75e0               PUSH dword ptr [EBP + -0x20]
00409ddc  ff750c               PUSH dword ptr [EBP + 0xc]
00409ddf  ff1560e04000         CALL dword ptr [0x0040e060]
00409de5  ff75fc               PUSH dword ptr [EBP + -0x4]
00409de8  8b3544e04000         MOV ESI,dword ptr [0x0040e044]
00409dee  ffd6                 CALL ESI
00409df0  ff75f4               PUSH dword ptr [EBP + -0xc]
00409df3  ffd6                 CALL ESI
00409df5  ff750c               PUSH dword ptr [EBP + 0xc]
00409df8  ff154ce04000         CALL dword ptr [0x0040e04c]
00409dfe  5f                   POP EDI
00409dff  5e                   POP ESI
00409e00  5b                   POP EBX
00409e01  c9                   LEAVE
00409e02  c3                   RET

; ==== FUNCTION FUN_00409e03 entry=00409e03 sig=HBITMAP __cdecl FUN_00409e03(uint param_1, undefined4 * param_2)
00409e03  55                   PUSH EBP
00409e04  8bec                 MOV EBP,ESP
00409e06  51                   PUSH ECX
00409e07  0fb74508             MOVZX EAX,word ptr [EBP + 0x8]
00409e0b  56                   PUSH ESI
00409e0c  6a02                 PUSH 0x2
00409e0e  50                   PUSH EAX
00409e0f  33f6                 XOR ESI,ESI
00409e11  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00409e17  ff15c8e04000         CALL dword ptr [0x0040e0c8]
00409e1d  85c0                 TEST EAX,EAX
00409e1f  7477                 JZ 0x00409e98
00409e21  57                   PUSH EDI
00409e22  50                   PUSH EAX
00409e23  ff35d03b4100         PUSH dword ptr [0x00413bd0]
00409e29  ff1554e14000         CALL dword ptr [0x0040e154]
00409e2f  50                   PUSH EAX
00409e30  8945fc               MOV dword ptr [EBP + -0x4],EAX
00409e33  ff1558e14000         CALL dword ptr [0x0040e158]
00409e39  6a00                 PUSH 0x0
00409e3b  8bf0                 MOV ESI,EAX
00409e3d  ff1598e24000         CALL dword ptr [0x0040e298]
00409e43  8bf8                 MOV EDI,EAX
00409e45  8d4508               LEA EAX,[EBP + 0x8]
00409e48  50                   PUSH EAX
00409e49  56                   PUSH ESI
00409e4a  e84e000000           CALL 0x00409e9d
00409e4f  59                   POP ECX
00409e50  59                   POP ECX
00409e51  8b4d0c               MOV ECX,dword ptr [EBP + 0xc]
00409e54  85c0                 TEST EAX,EAX
00409e56  8901                 MOV dword ptr [ECX],EAX
00409e58  7411                 JZ 0x00409e6b
00409e5a  6a00                 PUSH 0x0
00409e5c  50                   PUSH EAX
00409e5d  57                   PUSH EDI
00409e5e  ff1568e04000         CALL dword ptr [0x0040e068]
00409e64  57                   PUSH EDI
00409e65  ff1564e04000         CALL dword ptr [0x0040e064]
00409e6b  8b06                 MOV EAX,dword ptr [ESI]
00409e6d  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
00409e70  6a00                 PUSH 0x0
00409e72  56                   PUSH ESI
00409e73  8d0488               LEA EAX,[EAX + ECX*0x4]
00409e76  03c6                 ADD EAX,ESI
00409e78  50                   PUSH EAX
00409e79  6a04                 PUSH 0x4
00409e7b  56                   PUSH ESI
00409e7c  57                   PUSH EDI
00409e7d  ff158ce04000         CALL dword ptr [0x0040e08c]
00409e83  57                   PUSH EDI
00409e84  6a00                 PUSH 0x0
00409e86  8bf0                 MOV ESI,EAX
00409e88  ff157ce24000         CALL dword ptr [0x0040e27c]
00409e8e  ff75fc               PUSH dword ptr [EBP + -0x4]
00409e91  ff15dce04000         CALL dword ptr [0x0040e0dc]
00409e97  5f                   POP EDI
00409e98  8bc6                 MOV EAX,ESI
00409e9a  5e                   POP ESI
00409e9b  c9                   LEAVE
00409e9c  c3                   RET

; ==== FUNCTION FUN_00409e9d entry=00409e9d sig=HPALETTE __cdecl FUN_00409e9d(int param_1, WORD * param_2)
00409e9d  55                   PUSH EBP
00409e9e  8bec                 MOV EBP,ESP
00409ea0  53                   PUSH EBX
00409ea1  8b5d08               MOV EBX,dword ptr [EBP + 0x8]
00409ea4  56                   PUSH ESI
00409ea5  57                   PUSH EDI
00409ea6  668b4b0e             MOV CX,word ptr [EBX + 0xe]
00409eaa  33ff                 XOR EDI,EDI
00409eac  6683f908             CMP CX,0x8
00409eb0  770c                 JA 0x00409ebe
00409eb2  8b750c               MOV ESI,dword ptr [EBP + 0xc]
00409eb5  6a01                 PUSH 0x1
00409eb7  58                   POP EAX
00409eb8  d3e0                 SHL EAX,CL
00409eba  8906                 MOV dword ptr [ESI],EAX
00409ebc  eb05                 JMP 0x00409ec3
00409ebe  8b750c               MOV ESI,dword ptr [EBP + 0xc]
00409ec1  893e                 MOV dword ptr [ESI],EDI
00409ec3  8b4320               MOV EAX,dword ptr [EBX + 0x20]
00409ec6  3bc7                 CMP EAX,EDI
00409ec8  7602                 JBE 0x00409ecc
00409eca  8906                 MOV dword ptr [ESI],EAX
00409ecc  8b06                 MOV EAX,dword ptr [ESI]
00409ece  3bc7                 CMP EAX,EDI
00409ed0  746e                 JZ 0x00409f40
00409ed2  8d048508000000       LEA EAX,[EAX*0x4 + 0x8]
00409ed9  50                   PUSH EAX
00409eda  6a42                 PUSH 0x42
00409edc  ff15c4e04000         CALL dword ptr [0x0040e0c4]
00409ee2  50                   PUSH EAX
00409ee3  89450c               MOV dword ptr [EBP + 0xc],EAX
00409ee6  ff15c0e04000         CALL dword ptr [0x0040e0c0]
00409eec  8bf8                 MOV EDI,EAX
00409eee  66c7070003           MOV word ptr [EDI],0x300
00409ef3  668b06               MOV AX,word ptr [ESI]
00409ef6  66894702             MOV word ptr [EDI + 0x2],AX
00409efa  33c0                 XOR EAX,EAX
00409efc  3906                 CMP dword ptr [ESI],EAX
00409efe  7e25                 JLE 0x00409f25
00409f00  8d4f05               LEA ECX,[EDI + 0x5]
00409f03  8d5329               LEA EDX,[EBX + 0x29]
00409f06  8a5a01               MOV BL,byte ptr [EDX + 0x1]
00409f09  8859ff               MOV byte ptr [ECX + -0x1],BL
00409f0c  8a1a                 MOV BL,byte ptr [EDX]
00409f0e  8819                 MOV byte ptr [ECX],BL
00409f10  8a5aff               MOV BL,byte ptr [EDX + -0x1]
00409f13  885901               MOV byte ptr [ECX + 0x1],BL
00409f16  80610200             AND byte ptr [ECX + 0x2],0x0
00409f1a  40                   INC EAX
00409f1b  83c204               ADD EDX,0x4
00409f1e  83c104               ADD ECX,0x4
00409f21  3b06                 CMP EAX,dword ptr [ESI]
00409f23  7ce1                 JL 0x00409f06
00409f25  57                   PUSH EDI
00409f26  ff1590e04000         CALL dword ptr [0x0040e090]
00409f2c  ff750c               PUSH dword ptr [EBP + 0xc]
00409f2f  8bf8                 MOV EDI,EAX
00409f31  ff15bce04000         CALL dword ptr [0x0040e0bc]
00409f37  ff750c               PUSH dword ptr [EBP + 0xc]
00409f3a  ff15b8e04000         CALL dword ptr [0x0040e0b8]
00409f40  8bc7                 MOV EAX,EDI
00409f42  5f                   POP EDI
00409f43  5e                   POP ESI
00409f44  5b                   POP EBX
00409f45  5d                   POP EBP
00409f46  c3                   RET

; ==== FUNCTION FUN_00409f47 entry=00409f47 sig=undefined __stdcall FUN_00409f47(void)
00409f47  55                   PUSH EBP
00409f48  8bec                 MOV EBP,ESP
00409f4a  83ec1c               SUB ESP,0x1c
00409f4d  57                   PUSH EDI
00409f4e  33ff                 XOR EDI,EDI
00409f50  393d1c384100         CMP dword ptr [0x0041381c],EDI
00409f56  7449                 JZ 0x00409fa1
00409f58  56                   PUSH ESI
00409f59  8b352ce24000         MOV ESI,dword ptr [0x0040e22c]
00409f5f  393d80384100         CMP dword ptr [0x00413880],EDI
00409f65  740c                 JZ 0x00409f73
00409f67  ff351c384100         PUSH dword ptr [0x0041381c]
00409f6d  ff15e8e24000         CALL dword ptr [0x0040e2e8]
00409f73  6a01                 PUSH 0x1
00409f75  57                   PUSH EDI
00409f76  57                   PUSH EDI
00409f77  8d45e4               LEA EAX,[EBP + -0x1c]
00409f7a  57                   PUSH EDI
00409f7b  50                   PUSH EAX
00409f7c  ffd6                 CALL ESI
00409f7e  85c0                 TEST EAX,EAX
00409f80  7416                 JZ 0x00409f98
00409f82  8d45e4               LEA EAX,[EBP + -0x1c]
00409f85  50                   PUSH EAX
00409f86  ff1534e24000         CALL dword ptr [0x0040e234]
00409f8c  8d45e4               LEA EAX,[EBP + -0x1c]
00409f8f  50                   PUSH EAX
00409f90  ff1504e34000         CALL dword ptr [0x0040e304]
00409f96  ebdb                 JMP 0x00409f73
00409f98  393d1c384100         CMP dword ptr [0x0041381c],EDI
00409f9e  75bf                 JNZ 0x00409f5f
00409fa0  5e                   POP ESI
00409fa1  5f                   POP EDI
00409fa2  c9                   LEAVE
00409fa3  c3                   RET

; ==== FUNCTION USER32.DLL::DdeUninitialize entry=00409fa4 sig=BOOL __stdcall DdeUninitialize(DWORD idInst)
00409fa4  ff25e0e24000         JMP dword ptr [0x0040e2e0]

; ==== FUNCTION USER32.DLL::DdeDisconnect entry=00409faa sig=BOOL __stdcall DdeDisconnect(HCONV hConv)
00409faa  ff2538e24000         JMP dword ptr [0x0040e238]

; ==== FUNCTION USER32.DLL::DdeFreeDataHandle entry=00409fb0 sig=BOOL __stdcall DdeFreeDataHandle(HDDEDATA hData)
00409fb0  ff2510e34000         JMP dword ptr [0x0040e310]

; ==== FUNCTION USER32.DLL::DdeGetData entry=00409fb6 sig=DWORD __stdcall DdeGetData(HDDEDATA hData, LPBYTE pDst, DWORD cbMax, DWORD cbOff)
00409fb6  ff2514e34000         JMP dword ptr [0x0040e314]

; ==== FUNCTION USER32.DLL::DdeClientTransaction entry=00409fbc sig=HDDEDATA __stdcall DdeClientTransaction(LPBYTE pData, DWORD cbData, HCONV hConv, HSZ hszItem, UINT wFmt, UINT wType, DWORD dwTimeout, LPDWORD pdwResult)
00409fbc  ff25e4e24000         JMP dword ptr [0x0040e2e4]

; ==== FUNCTION USER32.DLL::DdeConnect entry=00409fc2 sig=HCONV __stdcall DdeConnect(DWORD idInst, HSZ hszService, HSZ hszTopic, PCONVCONTEXT pCC)
00409fc2  ff25d4e24000         JMP dword ptr [0x0040e2d4]

; ==== FUNCTION USER32.DLL::DdeCreateStringHandleA entry=00409fc8 sig=HSZ __stdcall DdeCreateStringHandleA(DWORD idInst, LPCSTR psz, int iCodePage)
00409fc8  ff25dce24000         JMP dword ptr [0x0040e2dc]

; ==== FUNCTION USER32.DLL::DdeInitializeA entry=00409fce sig=UINT __stdcall DdeInitializeA(LPDWORD pidInst, PFNCALLBACK pfnCallback, DWORD afCmd, DWORD ulRes)
00409fce  ff25d8e24000         JMP dword ptr [0x0040e2d8]

; ==== FUNCTION USER32.DLL::DdeCreateDataHandle entry=00409fd4 sig=HDDEDATA __stdcall DdeCreateDataHandle(DWORD idInst, LPBYTE pSrc, DWORD cb, DWORD cbOff, HSZ hszItem, UINT wFmt, UINT afCmd)
00409fd4  ff25c8e24000         JMP dword ptr [0x0040e2c8]

; ==== FUNCTION COMDLG32.DLL::GetOpenFileNameA entry=00409fda sig=BOOL __stdcall GetOpenFileNameA(LPOPENFILENAMEA param_1)
00409fda  ff251ce34000         JMP dword ptr [0x0040e31c]

; ==== FUNCTION FUN_00409fe0 entry=00409fe0 sig=undefined4 __cdecl FUN_00409fe0(LPCSTR param_1)
00409fe0  8b442404             MOV EAX,dword ptr [ESP + 0x4]
00409fe4  81ec0c010000         SUB ESP,0x10c
00409fea  50                   PUSH EAX
00409feb  ff1504e24000         CALL dword ptr [0x0040e204]
00409ff1  85c0                 TEST EAX,EAX
00409ff3  746b                 JZ 0x0040a060
00409ff5  8d4c2404             LEA ECX,[ESP + 0x4]
00409ff9  51                   PUSH ECX
00409ffa  6805010000           PUSH 0x105
00409fff  ff15fce14000         CALL dword ptr [0x0040e1fc]
0040a005  85c0                 TEST EAX,EAX
0040a007  7457                 JZ 0x0040a060
0040a009  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040a00d  3c5c                 CMP AL,0x5c
0040a00f  7404                 JZ 0x0040a015
0040a011  3c2f                 CMP AL,0x2f
0040a013  750d                 JNZ 0x0040a022
0040a015  3ac4                 CMP AL,AH
0040a017  7509                 JNZ 0x0040a022
0040a019  33c0                 XOR EAX,EAX
0040a01b  81c40c010000         ADD ESP,0x10c
0040a021  c3                   RET
0040a022  25ff000000           AND EAX,0xff
0040a027  c64424003d           MOV byte ptr [ESP],0x3d
0040a02c  50                   PUSH EAX
0040a02d  e87e100000           CALL 0x0040b0b0
0040a032  83c404               ADD ESP,0x4
0040a035  88442401             MOV byte ptr [ESP + 0x1],AL
0040a039  8d542404             LEA EDX,[ESP + 0x4]
0040a03d  8d442400             LEA EAX,[ESP]
0040a041  52                   PUSH EDX
0040a042  50                   PUSH EAX
0040a043  c644240a3a           MOV byte ptr [ESP + 0xa],0x3a
0040a048  c644240b00           MOV byte ptr [ESP + 0xb],0x0
0040a04d  ff1500e24000         CALL dword ptr [0x0040e200]
0040a053  85c0                 TEST EAX,EAX
0040a055  7409                 JZ 0x0040a060
0040a057  33c0                 XOR EAX,EAX
0040a059  81c40c010000         ADD ESP,0x10c
0040a05f  c3                   RET
0040a060  ff150ce24000         CALL dword ptr [0x0040e20c]
0040a066  50                   PUSH EAX
0040a067  e8d40f0000           CALL 0x0040b040
0040a06c  83c404               ADD ESP,0x4
0040a06f  83c8ff               OR EAX,0xffffffff
0040a072  81c40c010000         ADD ESP,0x10c
0040a078  c3                   RET
; undefined 7 bytes at 0040a079

; ==== FUNCTION _memset entry=0040a080 sig=void * __cdecl _memset(void * _Dst, int _Val, size_t _Size)
0040a080  8b54240c             MOV EDX,dword ptr [ESP + 0xc]
0040a084  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
0040a088  85d2                 TEST EDX,EDX
0040a08a  7447                 JZ 0x0040a0d3
0040a08c  33c0                 XOR EAX,EAX
0040a08e  8a442408             MOV AL,byte ptr [ESP + 0x8]
0040a092  57                   PUSH EDI
0040a093  8bf9                 MOV EDI,ECX
0040a095  83fa04               CMP EDX,0x4
0040a098  722d                 JC 0x0040a0c7
0040a09a  f7d9                 NEG ECX
0040a09c  83e103               AND ECX,0x3
0040a09f  7408                 JZ 0x0040a0a9
0040a0a1  2bd1                 SUB EDX,ECX
0040a0a3  8807                 MOV byte ptr [EDI],AL
0040a0a5  47                   INC EDI
0040a0a6  49                   DEC ECX
0040a0a7  75fa                 JNZ 0x0040a0a3
0040a0a9  8bc8                 MOV ECX,EAX
0040a0ab  c1e008               SHL EAX,0x8
0040a0ae  03c1                 ADD EAX,ECX
0040a0b0  8bc8                 MOV ECX,EAX
0040a0b2  c1e010               SHL EAX,0x10
0040a0b5  03c1                 ADD EAX,ECX
0040a0b7  8bca                 MOV ECX,EDX
0040a0b9  83e203               AND EDX,0x3
0040a0bc  c1e902               SHR ECX,0x2
0040a0bf  7406                 JZ 0x0040a0c7
0040a0c1  f3ab                 STOSD.REP ES:EDI
0040a0c3  85d2                 TEST EDX,EDX
0040a0c5  7406                 JZ 0x0040a0cd
0040a0c7  8807                 MOV byte ptr [EDI],AL
0040a0c9  47                   INC EDI
0040a0ca  4a                   DEC EDX
0040a0cb  75fa                 JNZ 0x0040a0c7
0040a0cd  8b442408             MOV EAX,dword ptr [ESP + 0x8]
0040a0d1  5f                   POP EDI
0040a0d2  c3                   RET
0040a0d3  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040a0d7  c3                   RET
; undefined 8 bytes at 0040a0d8
0040a0e0  8d42ff               LEA EAX,[EDX + -0x1]
0040a0e3  5b                   POP EBX
0040a0e4  c3                   RET

; ==== FUNCTION FUN_0040a0e5 entry=0040a0e5 sig=uint * __stdcall FUN_0040a0e5(uint * param_1, char param_2)
0040a0e5  2e8bc0               MOV EAX,EAX
0040a0e8  2e8bc0               MOV EAX,EAX
0040a0eb  2e8bc0               MOV EAX,EAX
0040a0ee  8bc0                 MOV EAX,EAX

; ==== FUNCTION _strchr entry=0040a0f0 sig=char * __cdecl _strchr(char * _Str, int _Val)
0040a0f0  33c0                 XOR EAX,EAX
0040a0f2  8a442408             MOV AL,byte ptr [ESP + 0x8]
0040a0f6  53                   PUSH EBX
0040a0f7  8bd8                 MOV EBX,EAX
0040a0f9  c1e008               SHL EAX,0x8
0040a0fc  8b542408             MOV EDX,dword ptr [ESP + 0x8]
0040a100  f7c203000000         TEST EDX,0x3
0040a106  7413                 JZ 0x0040a11b
0040a108  8a0a                 MOV CL,byte ptr [EDX]
0040a10a  42                   INC EDX
0040a10b  38d9                 CMP CL,BL
0040a10d  74d1                 JZ 0x0040a0e0
0040a10f  84c9                 TEST CL,CL
0040a111  7451                 JZ 0x0040a164
0040a113  f7c203000000         TEST EDX,0x3
0040a119  75ed                 JNZ 0x0040a108
0040a11b  0bd8                 OR EBX,EAX
0040a11d  57                   PUSH EDI
0040a11e  8bc3                 MOV EAX,EBX
0040a120  c1e310               SHL EBX,0x10
0040a123  56                   PUSH ESI
0040a124  0bd8                 OR EBX,EAX
0040a126  8b0a                 MOV ECX,dword ptr [EDX]
0040a128  bffffefe7e           MOV EDI,0x7efefeff
0040a12d  8bc1                 MOV EAX,ECX
0040a12f  8bf7                 MOV ESI,EDI
0040a131  33cb                 XOR ECX,EBX
0040a133  03f0                 ADD ESI,EAX
0040a135  03f9                 ADD EDI,ECX
0040a137  83f1ff               XOR ECX,0xffffffff
0040a13a  83f0ff               XOR EAX,0xffffffff
0040a13d  33cf                 XOR ECX,EDI
0040a13f  33c6                 XOR EAX,ESI
0040a141  83c204               ADD EDX,0x4
0040a144  81e100010181         AND ECX,0x81010100
0040a14a  751c                 JNZ 0x0040a168
0040a14c  2500010181           AND EAX,0x81010100
0040a151  74d3                 JZ 0x0040a126
0040a153  2500010101           AND EAX,0x1010100
0040a158  7508                 JNZ 0x0040a162
0040a15a  81e600000080         AND ESI,0x80000000
0040a160  75c4                 JNZ 0x0040a126
0040a162  5e                   POP ESI
0040a163  5f                   POP EDI
0040a164  5b                   POP EBX
0040a165  33c0                 XOR EAX,EAX
0040a167  c3                   RET
0040a168  8b42fc               MOV EAX,dword ptr [EDX + -0x4]
0040a16b  38d8                 CMP AL,BL
0040a16d  7436                 JZ 0x0040a1a5
0040a16f  84c0                 TEST AL,AL
0040a171  74ef                 JZ 0x0040a162
0040a173  38dc                 CMP AH,BL
0040a175  7427                 JZ 0x0040a19e
0040a177  84e4                 TEST AH,AH
0040a179  74e7                 JZ 0x0040a162
0040a17b  c1e810               SHR EAX,0x10
0040a17e  38d8                 CMP AL,BL
0040a180  7415                 JZ 0x0040a197
0040a182  84c0                 TEST AL,AL
0040a184  74dc                 JZ 0x0040a162
0040a186  38dc                 CMP AH,BL
0040a188  7406                 JZ 0x0040a190
0040a18a  84e4                 TEST AH,AH
0040a18c  74d4                 JZ 0x0040a162
0040a18e  eb96                 JMP 0x0040a126
0040a190  5e                   POP ESI
0040a191  5f                   POP EDI
0040a192  8d42ff               LEA EAX,[EDX + -0x1]
0040a195  5b                   POP EBX
0040a196  c3                   RET
0040a197  8d42fe               LEA EAX,[EDX + -0x2]
0040a19a  5e                   POP ESI
0040a19b  5f                   POP EDI
0040a19c  5b                   POP EBX
0040a19d  c3                   RET
0040a19e  8d42fd               LEA EAX,[EDX + -0x3]
0040a1a1  5e                   POP ESI
0040a1a2  5f                   POP EDI
0040a1a3  5b                   POP EBX
0040a1a4  c3                   RET
0040a1a5  8d42fc               LEA EAX,[EDX + -0x4]
0040a1a8  5e                   POP ESI
0040a1a9  5f                   POP EDI
0040a1aa  5b                   POP EBX
0040a1ab  c3                   RET
; undefined 4 bytes at 0040a1ac

; ==== FUNCTION FUN_0040a1b0 entry=0040a1b0 sig=uint __cdecl FUN_0040a1b0(uint param_1)
0040a1b0  a148344100           MOV EAX,[0x00413448]
0040a1b5  83ec08               SUB ESP,0x8
0040a1b8  85c0                 TEST EAX,EAX
0040a1ba  53                   PUSH EBX
0040a1bb  751e                 JNZ 0x0040a1db
0040a1bd  8b442410             MOV EAX,dword ptr [ESP + 0x10]
0040a1c1  83f861               CMP EAX,0x61
0040a1c4  0f8cdf000000         JL 0x0040a2a9
0040a1ca  83f87a               CMP EAX,0x7a
0040a1cd  0f8fd6000000         JG 0x0040a2a9
0040a1d3  83e820               SUB EAX,0x20
0040a1d6  5b                   POP EBX
0040a1d7  83c408               ADD ESP,0x8
0040a1da  c3                   RET
0040a1db  8b5c2410             MOV EBX,dword ptr [ESP + 0x10]
0040a1df  81fb00010000         CMP EBX,0x100
0040a1e5  7d2c                 JGE 0x0040a213
0040a1e7  833d3c10410001       CMP dword ptr [0x0041103c],0x1
0040a1ee  7e0d                 JLE 0x0040a1fd
0040a1f0  6a02                 PUSH 0x2
0040a1f2  53                   PUSH EBX
0040a1f3  e8b8010000           CALL 0x0040a3b0
0040a1f8  83c408               ADD ESP,0x8
0040a1fb  eb0b                 JMP 0x0040a208
0040a1fd  a1300e4100           MOV EAX,[0x00410e30]
0040a202  8a0458               MOV AL,byte ptr [EAX + EBX*0x2]
0040a205  83e002               AND EAX,0x2
0040a208  85c0                 TEST EAX,EAX
0040a20a  7507                 JNZ 0x0040a213
0040a20c  8bc3                 MOV EAX,EBX
0040a20e  5b                   POP EBX
0040a20f  83c408               ADD ESP,0x8
0040a212  c3                   RET
0040a213  8b15300e4100         MOV EDX,dword ptr [0x00410e30]
0040a219  8bc3                 MOV EAX,EBX
0040a21b  c1f808               SAR EAX,0x8
0040a21e  8bc8                 MOV ECX,EAX
0040a220  81e1ff000000         AND ECX,0xff
0040a226  f6444a0180           TEST byte ptr [EDX + ECX*0x2 + 0x1],0x80
0040a22b  7414                 JZ 0x0040a241
0040a22d  88442410             MOV byte ptr [ESP + 0x10],AL
0040a231  885c2411             MOV byte ptr [ESP + 0x11],BL
0040a235  c644241200           MOV byte ptr [ESP + 0x12],0x0
0040a23a  b802000000           MOV EAX,0x2
0040a23f  eb0e                 JMP 0x0040a24f
0040a241  885c2410             MOV byte ptr [ESP + 0x10],BL
0040a245  c644241100           MOV byte ptr [ESP + 0x11],0x0
0040a24a  b801000000           MOV EAX,0x1
0040a24f  6a01                 PUSH 0x1
0040a251  6a00                 PUSH 0x0
0040a253  8d4c240c             LEA ECX,[ESP + 0xc]
0040a257  6a03                 PUSH 0x3
0040a259  51                   PUSH ECX
0040a25a  8d542420             LEA EDX,[ESP + 0x20]
0040a25e  50                   PUSH EAX
0040a25f  a148344100           MOV EAX,[0x00413448]
0040a264  52                   PUSH EDX
0040a265  6800020000           PUSH 0x200
0040a26a  50                   PUSH EAX
0040a26b  e8e00e0000           CALL 0x0040b150
0040a270  83c420               ADD ESP,0x20
0040a273  85c0                 TEST EAX,EAX
0040a275  7507                 JNZ 0x0040a27e
0040a277  8bc3                 MOV EAX,EBX
0040a279  5b                   POP EBX
0040a27a  83c408               ADD ESP,0x8
0040a27d  c3                   RET
0040a27e  83f801               CMP EAX,0x1
0040a281  750e                 JNZ 0x0040a291
0040a283  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040a287  25ff000000           AND EAX,0xff
0040a28c  5b                   POP EBX
0040a28d  83c408               ADD ESP,0x8
0040a290  c3                   RET
0040a291  8b442405             MOV EAX,dword ptr [ESP + 0x5]
0040a295  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
0040a299  25ff000000           AND EAX,0xff
0040a29e  81e1ff000000         AND ECX,0xff
0040a2a4  c1e008               SHL EAX,0x8
0040a2a7  0bc1                 OR EAX,ECX
0040a2a9  5b                   POP EBX
0040a2aa  83c408               ADD ESP,0x8
0040a2ad  c3                   RET
; undefined 2 bytes at 0040a2ae

; ==== FUNCTION _strncpy entry=0040a2b0 sig=char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count)
0040a2b0  8b4c240c             MOV ECX,dword ptr [ESP + 0xc]
0040a2b4  57                   PUSH EDI
0040a2b5  85c9                 TEST ECX,ECX
0040a2b7  747a                 JZ 0x0040a333
0040a2b9  56                   PUSH ESI
0040a2ba  53                   PUSH EBX
0040a2bb  8bd9                 MOV EBX,ECX
0040a2bd  8b742414             MOV ESI,dword ptr [ESP + 0x14]
0040a2c1  f7c603000000         TEST ESI,0x3
0040a2c7  8b7c2410             MOV EDI,dword ptr [ESP + 0x10]
0040a2cb  7507                 JNZ 0x0040a2d4
0040a2cd  c1e902               SHR ECX,0x2
0040a2d0  756f                 JNZ 0x0040a341
0040a2d2  eb21                 JMP 0x0040a2f5
0040a2d4  8a06                 MOV AL,byte ptr [ESI]
0040a2d6  46                   INC ESI
0040a2d7  8807                 MOV byte ptr [EDI],AL
0040a2d9  47                   INC EDI
0040a2da  49                   DEC ECX
0040a2db  7425                 JZ 0x0040a302
0040a2dd  84c0                 TEST AL,AL
0040a2df  7429                 JZ 0x0040a30a
0040a2e1  f7c603000000         TEST ESI,0x3
0040a2e7  75eb                 JNZ 0x0040a2d4
0040a2e9  8bd9                 MOV EBX,ECX
0040a2eb  c1e902               SHR ECX,0x2
0040a2ee  7551                 JNZ 0x0040a341
0040a2f0  83e303               AND EBX,0x3
0040a2f3  740d                 JZ 0x0040a302
0040a2f5  8a06                 MOV AL,byte ptr [ESI]
0040a2f7  46                   INC ESI
0040a2f8  8807                 MOV byte ptr [EDI],AL
0040a2fa  47                   INC EDI
0040a2fb  84c0                 TEST AL,AL
0040a2fd  742f                 JZ 0x0040a32e
0040a2ff  4b                   DEC EBX
0040a300  75f3                 JNZ 0x0040a2f5
0040a302  8b442410             MOV EAX,dword ptr [ESP + 0x10]
0040a306  5b                   POP EBX
0040a307  5e                   POP ESI
0040a308  5f                   POP EDI
0040a309  c3                   RET
0040a30a  f7c703000000         TEST EDI,0x3
0040a310  7412                 JZ 0x0040a324
0040a312  8807                 MOV byte ptr [EDI],AL
0040a314  47                   INC EDI
0040a315  49                   DEC ECX
0040a316  0f848a000000         JZ 0x0040a3a6
0040a31c  f7c703000000         TEST EDI,0x3
0040a322  75ee                 JNZ 0x0040a312
0040a324  8bd9                 MOV EBX,ECX
0040a326  c1e902               SHR ECX,0x2
0040a329  756c                 JNZ 0x0040a397
0040a32b  8807                 MOV byte ptr [EDI],AL
0040a32d  47                   INC EDI
0040a32e  4b                   DEC EBX
0040a32f  75fa                 JNZ 0x0040a32b
0040a331  5b                   POP EBX
0040a332  5e                   POP ESI
0040a333  8b442408             MOV EAX,dword ptr [ESP + 0x8]
0040a337  5f                   POP EDI
0040a338  c3                   RET
0040a339  8917                 MOV dword ptr [EDI],EDX
0040a33b  83c704               ADD EDI,0x4
0040a33e  49                   DEC ECX
0040a33f  74af                 JZ 0x0040a2f0
0040a341  bafffefe7e           MOV EDX,0x7efefeff
0040a346  8b06                 MOV EAX,dword ptr [ESI]
0040a348  03d0                 ADD EDX,EAX
0040a34a  83f0ff               XOR EAX,0xffffffff
0040a34d  33c2                 XOR EAX,EDX
0040a34f  8b16                 MOV EDX,dword ptr [ESI]
0040a351  83c604               ADD ESI,0x4
0040a354  a900010181           TEST EAX,0x81010100
0040a359  74de                 JZ 0x0040a339
0040a35b  84d2                 TEST DL,DL
0040a35d  742c                 JZ 0x0040a38b
0040a35f  84f6                 TEST DH,DH
0040a361  741e                 JZ 0x0040a381
0040a363  f7c20000ff00         TEST EDX,0xff0000
0040a369  740c                 JZ 0x0040a377
0040a36b  f7c2000000ff         TEST EDX,0xff000000
0040a371  75c6                 JNZ 0x0040a339
0040a373  8917                 MOV dword ptr [EDI],EDX
0040a375  eb18                 JMP 0x0040a38f
0040a377  81e2ffff0000         AND EDX,0xffff
0040a37d  8917                 MOV dword ptr [EDI],EDX
0040a37f  eb0e                 JMP 0x0040a38f
0040a381  81e2ff000000         AND EDX,0xff
0040a387  8917                 MOV dword ptr [EDI],EDX
0040a389  eb04                 JMP 0x0040a38f
0040a38b  33d2                 XOR EDX,EDX
0040a38d  8917                 MOV dword ptr [EDI],EDX
0040a38f  83c704               ADD EDI,0x4
0040a392  33c0                 XOR EAX,EAX
0040a394  49                   DEC ECX
0040a395  740a                 JZ 0x0040a3a1
0040a397  33c0                 XOR EAX,EAX
0040a399  8907                 MOV dword ptr [EDI],EAX
0040a39b  83c704               ADD EDI,0x4
0040a39e  49                   DEC ECX
0040a39f  75f8                 JNZ 0x0040a399
0040a3a1  83e303               AND EBX,0x3
0040a3a4  7585                 JNZ 0x0040a32b
0040a3a6  8b442410             MOV EAX,dword ptr [ESP + 0x10]
0040a3aa  5b                   POP EBX
0040a3ab  5e                   POP ESI
0040a3ac  5f                   POP EDI
0040a3ad  c3                   RET
; undefined 2 bytes at 0040a3ae

; ==== FUNCTION FUN_0040a3b0 entry=0040a3b0 sig=uint __cdecl FUN_0040a3b0(int param_1, uint param_2)
0040a3b0  51                   PUSH ECX
0040a3b1  8b4c2408             MOV ECX,dword ptr [ESP + 0x8]
0040a3b5  56                   PUSH ESI
0040a3b6  8d4101               LEA EAX,[ECX + 0x1]
0040a3b9  3d00010000           CMP EAX,0x100
0040a3be  7715                 JA 0x0040a3d5
0040a3c0  8b15300e4100         MOV EDX,dword ptr [0x00410e30]
0040a3c6  33c0                 XOR EAX,EAX
0040a3c8  668b044a             MOV AX,word ptr [EDX + ECX*0x2]
0040a3cc  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
0040a3d0  23c1                 AND EAX,ECX
0040a3d2  5e                   POP ESI
0040a3d3  59                   POP ECX
0040a3d4  c3                   RET
0040a3d5  8b35300e4100         MOV ESI,dword ptr [0x00410e30]
0040a3db  8bc1                 MOV EAX,ECX
0040a3dd  c1f808               SAR EAX,0x8
0040a3e0  8bd0                 MOV EDX,EAX
0040a3e2  81e2ff000000         AND EDX,0xff
0040a3e8  f644560180           TEST byte ptr [ESI + EDX*0x2 + 0x1],0x80
0040a3ed  7414                 JZ 0x0040a403
0040a3ef  8844240c             MOV byte ptr [ESP + 0xc],AL
0040a3f3  884c240d             MOV byte ptr [ESP + 0xd],CL
0040a3f7  c644240e00           MOV byte ptr [ESP + 0xe],0x0
0040a3fc  b802000000           MOV EAX,0x2
0040a401  eb0e                 JMP 0x0040a411
0040a403  884c240c             MOV byte ptr [ESP + 0xc],CL
0040a407  c644240d00           MOV byte ptr [ESP + 0xd],0x0
0040a40c  b801000000           MOV EAX,0x1
0040a411  6a01                 PUSH 0x1
0040a413  6a00                 PUSH 0x0
0040a415  8d4c240c             LEA ECX,[ESP + 0xc]
0040a419  6a00                 PUSH 0x0
0040a41b  51                   PUSH ECX
0040a41c  8d54241c             LEA EDX,[ESP + 0x1c]
0040a420  50                   PUSH EAX
0040a421  52                   PUSH EDX
0040a422  6a01                 PUSH 0x1
0040a424  e8870f0000           CALL 0x0040b3b0
0040a429  83c41c               ADD ESP,0x1c
0040a42c  85c0                 TEST EAX,EAX
0040a42e  7503                 JNZ 0x0040a433
0040a430  5e                   POP ESI
0040a431  59                   POP ECX
0040a432  c3                   RET
0040a433  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040a437  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
0040a43b  25ffff0000           AND EAX,0xffff
0040a440  5e                   POP ESI
0040a441  23c1                 AND EAX,ECX
0040a443  59                   POP ECX
0040a444  c3                   RET
; undefined 11 bytes at 0040a445

; ==== FUNCTION FUN_0040a450 entry=0040a450 sig=int __cdecl FUN_0040a450(byte * param_1)
0040a450  53                   PUSH EBX
0040a451  55                   PUSH EBP
0040a452  56                   PUSH ESI
0040a453  57                   PUSH EDI
0040a454  8b7c2414             MOV EDI,dword ptr [ESP + 0x14]
0040a458  833d3c10410001       CMP dword ptr [0x0041103c],0x1
0040a45f  7e11                 JLE 0x0040a472
0040a461  33c0                 XOR EAX,EAX
0040a463  6a08                 PUSH 0x8
0040a465  8a07                 MOV AL,byte ptr [EDI]
0040a467  50                   PUSH EAX
0040a468  e843ffffff           CALL 0x0040a3b0
0040a46d  83c408               ADD ESP,0x8
0040a470  eb10                 JMP 0x0040a482
0040a472  8b15300e4100         MOV EDX,dword ptr [0x00410e30]
0040a478  33c9                 XOR ECX,ECX
0040a47a  8a0f                 MOV CL,byte ptr [EDI]
0040a47c  8a044a               MOV AL,byte ptr [EDX + ECX*0x2]
0040a47f  83e008               AND EAX,0x8
0040a482  85c0                 TEST EAX,EAX
0040a484  7403                 JZ 0x0040a489
0040a486  47                   INC EDI
0040a487  ebcf                 JMP 0x0040a458
0040a489  33c0                 XOR EAX,EAX
0040a48b  8a07                 MOV AL,byte ptr [EDI]
0040a48d  47                   INC EDI
0040a48e  8bf0                 MOV ESI,EAX
0040a490  83fe2d               CMP ESI,0x2d
0040a493  8bee                 MOV EBP,ESI
0040a495  7405                 JZ 0x0040a49c
0040a497  83fe2b               CMP ESI,0x2b
0040a49a  7507                 JNZ 0x0040a4a3
0040a49c  33c9                 XOR ECX,ECX
0040a49e  8a0f                 MOV CL,byte ptr [EDI]
0040a4a0  47                   INC EDI
0040a4a1  8bf1                 MOV ESI,ECX
0040a4a3  33db                 XOR EBX,EBX
0040a4a5  833d3c10410001       CMP dword ptr [0x0041103c],0x1
0040a4ac  7e0d                 JLE 0x0040a4bb
0040a4ae  6a04                 PUSH 0x4
0040a4b0  56                   PUSH ESI
0040a4b1  e8fafeffff           CALL 0x0040a3b0
0040a4b6  83c408               ADD ESP,0x8
0040a4b9  eb0c                 JMP 0x0040a4c7
0040a4bb  8b15300e4100         MOV EDX,dword ptr [0x00410e30]
0040a4c1  8a0472               MOV AL,byte ptr [EDX + ESI*0x2]
0040a4c4  83e004               AND EAX,0x4
0040a4c7  85c0                 TEST EAX,EAX
0040a4c9  7410                 JZ 0x0040a4db
0040a4cb  8d049b               LEA EAX,[EBX + EBX*0x4]
0040a4ce  33c9                 XOR ECX,ECX
0040a4d0  8a0f                 MOV CL,byte ptr [EDI]
0040a4d2  47                   INC EDI
0040a4d3  8d5c46d0             LEA EBX,[ESI + EAX*0x2 + -0x30]
0040a4d7  8bf1                 MOV ESI,ECX
0040a4d9  ebca                 JMP 0x0040a4a5
0040a4db  83fd2d               CMP EBP,0x2d
0040a4de  8bc3                 MOV EAX,EBX
0040a4e0  7502                 JNZ 0x0040a4e4
0040a4e2  f7d8                 NEG EAX
0040a4e4  5f                   POP EDI
0040a4e5  5e                   POP ESI
0040a4e6  5d                   POP EBP
0040a4e7  5b                   POP EBX
0040a4e8  c3                   RET
; undefined 7 bytes at 0040a4e9

; ==== FUNCTION FUN_0040a4f0 entry=0040a4f0 sig=undefined __cdecl FUN_0040a4f0(byte * param_1)
0040a4f0  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040a4f4  50                   PUSH EAX
0040a4f5  e856ffffff           CALL 0x0040a450
0040a4fa  83c404               ADD ESP,0x4
0040a4fd  c3                   RET
; undefined 2 bytes at 0040a4fe

; ==== FUNCTION FUN_0040a500 entry=0040a500 sig=undefined __stdcall FUN_0040a500(void)
0040a500  51                   PUSH ECX
0040a501  3d00100000           CMP EAX,0x1000
0040a506  8d4c2408             LEA ECX,[ESP + 0x8]
0040a50a  7214                 JC 0x0040a520
0040a50c  81e900100000         SUB ECX,0x1000
0040a512  2d00100000           SUB EAX,0x1000
0040a517  8501                 TEST dword ptr [ECX],EAX
0040a519  3d00100000           CMP EAX,0x1000
0040a51e  73ec                 JNC 0x0040a50c
0040a520  2bc8                 SUB ECX,EAX
0040a522  8bc4                 MOV EAX,ESP
0040a524  8501                 TEST dword ptr [ECX],EAX
0040a526  8be1                 MOV ESP,ECX
0040a528  8b08                 MOV ECX,dword ptr [EAX]
0040a52a  8b4004               MOV EAX,dword ptr [EAX + 0x4]
0040a52d  50                   PUSH EAX
0040a52e  c3                   RET
; undefined 1 bytes at 0040a52f

; ==== FUNCTION FUN_0040a530 entry=0040a530 sig=undefined4 __cdecl FUN_0040a530(uint param_1)
0040a530  a1003e4100           MOV EAX,[0x00413e00]
0040a535  53                   PUSH EBX
0040a536  55                   PUSH EBP
0040a537  56                   PUSH ESI
0040a538  8b742410             MOV ESI,dword ptr [ESP + 0x10]
0040a53c  57                   PUSH EDI
0040a53d  3bf0                 CMP ESI,EAX
0040a53f  0f83a1000000         JNC 0x0040a5e6
0040a545  8bc6                 MOV EAX,ESI
0040a547  8bfe                 MOV EDI,ESI
0040a549  c1f805               SAR EAX,0x5
0040a54c  83e71f               AND EDI,0x1f
0040a54f  8b0c85003d4100       MOV ECX,dword ptr [EAX*0x4 + 0x413d00]
0040a556  8d2c85003d4100       LEA EBP,[EAX*0x4 + 0x413d00]
0040a55d  c1e703               SHL EDI,0x3
0040a560  f644390401           TEST byte ptr [ECX + EDI*0x1 + 0x4],0x1
0040a565  747f                 JZ 0x0040a5e6
0040a567  56                   PUSH ESI
0040a568  e813130000           CALL 0x0040b880
0040a56d  83c404               ADD ESP,0x4
0040a570  83f8ff               CMP EAX,-0x1
0040a573  7442                 JZ 0x0040a5b7
0040a575  83fe01               CMP ESI,0x1
0040a578  7405                 JZ 0x0040a57f
0040a57a  83fe02               CMP ESI,0x2
0040a57d  751a                 JNZ 0x0040a599
0040a57f  6a02                 PUSH 0x2
0040a581  e8fa120000           CALL 0x0040b880
0040a586  83c404               ADD ESP,0x4
0040a589  8bd8                 MOV EBX,EAX
0040a58b  6a01                 PUSH 0x1
0040a58d  e8ee120000           CALL 0x0040b880
0040a592  83c404               ADD ESP,0x4
0040a595  3bc3                 CMP EAX,EBX
0040a597  741e                 JZ 0x0040a5b7
0040a599  56                   PUSH ESI
0040a59a  e8e1120000           CALL 0x0040b880
0040a59f  83c404               ADD ESP,0x4
0040a5a2  50                   PUSH EAX
0040a5a3  ff15f4e14000         CALL dword ptr [0x0040e1f4]
0040a5a9  85c0                 TEST EAX,EAX
0040a5ab  750a                 JNZ 0x0040a5b7
0040a5ad  ff150ce24000         CALL dword ptr [0x0040e20c]
0040a5b3  8bd8                 MOV EBX,EAX
0040a5b5  eb02                 JMP 0x0040a5b9
0040a5b7  33db                 XOR EBX,EBX
0040a5b9  56                   PUSH ESI
0040a5ba  e821120000           CALL 0x0040b7e0
0040a5bf  8b5500               MOV EDX,dword ptr [EBP]
0040a5c2  83c404               ADD ESP,0x4
0040a5c5  85db                 TEST EBX,EBX
0040a5c7  c6443a0400           MOV byte ptr [EDX + EDI*0x1 + 0x4],0x0
0040a5cc  7411                 JZ 0x0040a5df
0040a5ce  53                   PUSH EBX
0040a5cf  e86c0a0000           CALL 0x0040b040
0040a5d4  83c404               ADD ESP,0x4
0040a5d7  83c8ff               OR EAX,0xffffffff
0040a5da  5f                   POP EDI
0040a5db  5e                   POP ESI
0040a5dc  5d                   POP EBP
0040a5dd  5b                   POP EBX
0040a5de  c3                   RET
0040a5df  33c0                 XOR EAX,EAX
0040a5e1  5f                   POP EDI
0040a5e2  5e                   POP ESI
0040a5e3  5d                   POP EBP
0040a5e4  5b                   POP EBX
0040a5e5  c3                   RET
0040a5e6  5f                   POP EDI
0040a5e7  5e                   POP ESI
0040a5e8  5d                   POP EBP
0040a5e9  c7056434410009000000 MOV dword ptr [0x00413464],0x9
0040a5f3  c7056834410000000000 MOV dword ptr [0x00413468],0x0
0040a5fd  83c8ff               OR EAX,0xffffffff
0040a600  5b                   POP EBX
0040a601  c3                   RET
; undefined 14 bytes at 0040a602

; ==== FUNCTION FUN_0040a610 entry=0040a610 sig=int __stdcall FUN_0040a610(void)
0040a610  b804100000           MOV EAX,0x1004
0040a615  e8e6feffff           CALL 0x0040a500
0040a61a  a1003e4100           MOV EAX,[0x00413e00]
0040a61f  53                   PUSH EBX
0040a620  8b9c240c100000       MOV EBX,dword ptr [ESP + 0x100c]
0040a627  55                   PUSH EBP
0040a628  33ed                 XOR EBP,EBP
0040a62a  56                   PUSH ESI
0040a62b  3bd8                 CMP EBX,EAX
0040a62d  57                   PUSH EDI
0040a62e  0f833e010000         JNC 0x0040a772
0040a634  8bc3                 MOV EAX,EBX
0040a636  8bcb                 MOV ECX,EBX
0040a638  c1f805               SAR EAX,0x5
0040a63b  83e11f               AND ECX,0x1f
0040a63e  8b1485003d4100       MOV EDX,dword ptr [EAX*0x4 + 0x413d00]
0040a645  f644ca0401           TEST byte ptr [EDX + ECX*0x8 + 0x4],0x1
0040a64a  0f8422010000         JZ 0x0040a772
0040a650  6a01                 PUSH 0x1
0040a652  55                   PUSH EBP
0040a653  53                   PUSH EBX
0040a654  e817170000           CALL 0x0040bd70
0040a659  8bf8                 MOV EDI,EAX
0040a65b  83c40c               ADD ESP,0xc
0040a65e  83ffff               CMP EDI,-0x1
0040a661  897c2410             MOV dword ptr [ESP + 0x10],EDI
0040a665  0f8411010000         JZ 0x0040a77c
0040a66b  6a02                 PUSH 0x2
0040a66d  55                   PUSH EBP
0040a66e  53                   PUSH EBX
0040a66f  e8fc160000           CALL 0x0040bd70
0040a674  83c40c               ADD ESP,0xc
0040a677  83f8ff               CMP EAX,-0x1
0040a67a  0f84fc000000         JZ 0x0040a77c
0040a680  8b8c241c100000       MOV ECX,dword ptr [ESP + 0x101c]
0040a687  8bf1                 MOV ESI,ECX
0040a689  2bf0                 SUB ESI,EAX
0040a68b  85f6                 TEST ESI,ESI
0040a68d  0f8e85000000         JLE 0x0040a718
0040a693  b900040000           MOV ECX,0x400
0040a698  33c0                 XOR EAX,EAX
0040a69a  8d7c2414             LEA EDI,[ESP + 0x14]
0040a69e  6800800000           PUSH 0x8000
0040a6a3  f3ab                 STOSD.REP ES:EDI
0040a6a5  53                   PUSH EBX
0040a6a6  e845160000           CALL 0x0040bcf0
0040a6ab  83c408               ADD ESP,0x8
0040a6ae  8bf8                 MOV EDI,EAX
0040a6b0  81fe00100000         CMP ESI,0x1000
0040a6b6  b800100000           MOV EAX,0x1000
0040a6bb  7d02                 JGE 0x0040a6bf
0040a6bd  8bc6                 MOV EAX,ESI
0040a6bf  50                   PUSH EAX
0040a6c0  8d442418             LEA EAX,[ESP + 0x18]
0040a6c4  50                   PUSH EAX
0040a6c5  53                   PUSH EBX
0040a6c6  e805140000           CALL 0x0040bad0
0040a6cb  83c40c               ADD ESP,0xc
0040a6ce  83f8ff               CMP EAX,-0x1
0040a6d1  7408                 JZ 0x0040a6db
0040a6d3  2bf0                 SUB ESI,EAX
0040a6d5  85f6                 TEST ESI,ESI
0040a6d7  7e18                 JLE 0x0040a6f1
0040a6d9  ebd5                 JMP 0x0040a6b0
0040a6db  833d6834410005       CMP dword ptr [0x00413468],0x5
0040a6e2  750a                 JNZ 0x0040a6ee
0040a6e4  c705643441000d000000 MOV dword ptr [0x00413464],0xd
0040a6ee  83cdff               OR EBP,0xffffffff
0040a6f1  57                   PUSH EDI
0040a6f2  53                   PUSH EBX
0040a6f3  e8f8150000           CALL 0x0040bcf0
0040a6f8  8b7c2418             MOV EDI,dword ptr [ESP + 0x18]
0040a6fc  83c408               ADD ESP,0x8
0040a6ff  6a00                 PUSH 0x0
0040a701  57                   PUSH EDI
0040a702  53                   PUSH EBX
0040a703  e868160000           CALL 0x0040bd70
0040a708  83c40c               ADD ESP,0xc
0040a70b  8bc5                 MOV EAX,EBP
0040a70d  5f                   POP EDI
0040a70e  5e                   POP ESI
0040a70f  5d                   POP EBP
0040a710  5b                   POP EBX
0040a711  81c404100000         ADD ESP,0x1004
0040a717  c3                   RET
0040a718  7d3f                 JGE 0x0040a759
0040a71a  6a00                 PUSH 0x0
0040a71c  51                   PUSH ECX
0040a71d  53                   PUSH EBX
0040a71e  e84d160000           CALL 0x0040bd70
0040a723  83c40c               ADD ESP,0xc
0040a726  53                   PUSH EBX
0040a727  e854110000           CALL 0x0040b880
0040a72c  83c404               ADD ESP,0x4
0040a72f  50                   PUSH EAX
0040a730  ff15f0e14000         CALL dword ptr [0x0040e1f0]
0040a736  8be8                 MOV EBP,EAX
0040a738  f7dd                 NEG EBP
0040a73a  1bed                 SBB EBP,EBP
0040a73c  f7dd                 NEG EBP
0040a73e  4d                   DEC EBP
0040a73f  83fdff               CMP EBP,-0x1
0040a742  7515                 JNZ 0x0040a759
0040a744  c705643441000d000000 MOV dword ptr [0x00413464],0xd
0040a74e  ff150ce24000         CALL dword ptr [0x0040e20c]
0040a754  a368344100           MOV [0x00413468],EAX
0040a759  6a00                 PUSH 0x0
0040a75b  57                   PUSH EDI
0040a75c  53                   PUSH EBX
0040a75d  e80e160000           CALL 0x0040bd70
0040a762  83c40c               ADD ESP,0xc
0040a765  8bc5                 MOV EAX,EBP
0040a767  5f                   POP EDI
0040a768  5e                   POP ESI
0040a769  5d                   POP EBP
0040a76a  5b                   POP EBX
0040a76b  81c404100000         ADD ESP,0x1004
0040a771  c3                   RET
0040a772  c7056434410009000000 MOV dword ptr [0x00413464],0x9
0040a77c  5f                   POP EDI
0040a77d  5e                   POP ESI
0040a77e  5d                   POP EBP
0040a77f  83c8ff               OR EAX,0xffffffff
0040a782  5b                   POP EBX
0040a783  81c404100000         ADD ESP,0x1004
0040a789  c3                   RET
; undefined 6 bytes at 0040a78a

; ==== FUNCTION FUN_0040a790 entry=0040a790 sig=undefined __cdecl FUN_0040a790(LPCSTR param_1, uint param_2, undefined4 param_3)
0040a790  8b44240c             MOV EAX,dword ptr [ESP + 0xc]
0040a794  8b4c2408             MOV ECX,dword ptr [ESP + 0x8]
0040a798  8b542404             MOV EDX,dword ptr [ESP + 0x4]
0040a79c  50                   PUSH EAX
0040a79d  6a40                 PUSH 0x40
0040a79f  51                   PUSH ECX
0040a7a0  52                   PUSH EDX
0040a7a1  e80a000000           CALL 0x0040a7b0
0040a7a6  83c410               ADD ESP,0x10
0040a7a9  c3                   RET
; undefined 6 bytes at 0040a7aa

; ==== FUNCTION FUN_0040a7b0 entry=0040a7b0 sig=uint __cdecl FUN_0040a7b0(LPCSTR param_1, uint param_2, uint param_3, undefined4 param_4)
0040a7b0  83ec14               SUB ESP,0x14
0040a7b3  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
0040a7b7  53                   PUSH EBX
0040a7b8  55                   PUSH EBP
0040a7b9  56                   PUSH ESI
0040a7ba  b280                 MOV DL,0x80
0040a7bc  33f6                 XOR ESI,ESI
0040a7be  84ca                 TEST DL,CL
0040a7c0  57                   PUSH EDI
0040a7c1  c74424180c000000     MOV dword ptr [ESP + 0x18],0xc
0040a7c9  8974241c             MOV dword ptr [ESP + 0x1c],ESI
0040a7cd  740b                 JZ 0x0040a7da
0040a7cf  89742420             MOV dword ptr [ESP + 0x20],ESI
0040a7d3  c644241310           MOV byte ptr [ESP + 0x13],0x10
0040a7d8  eb0d                 JMP 0x0040a7e7
0040a7da  c744242001000000     MOV dword ptr [ESP + 0x20],0x1
0040a7e2  c644241300           MOV byte ptr [ESP + 0x13],0x0
0040a7e7  f6c580               TEST CH,0x80
0040a7ea  7515                 JNZ 0x0040a801
0040a7ec  f6c540               TEST CH,0x40
0040a7ef  750c                 JNZ 0x0040a7fd
0040a7f1  813db034410000800000 CMP dword ptr [0x004134b0],0x8000
0040a7fb  7404                 JZ 0x0040a801
0040a7fd  08542413             OR byte ptr [ESP + 0x13],DL
0040a801  8bc1                 MOV EAX,ECX
0040a803  83e003               AND EAX,0x3
0040a806  2bc6                 SUB EAX,ESI
0040a808  741e                 JZ 0x0040a828
0040a80a  48                   DEC EAX
0040a80b  7411                 JZ 0x0040a81e
0040a80d  48                   DEC EAX
0040a80e  0f85ed020000         JNZ 0x0040ab01
0040a814  c7442414000000c0     MOV dword ptr [ESP + 0x14],0xc0000000
0040a81c  eb12                 JMP 0x0040a830
0040a81e  c744241400000040     MOV dword ptr [ESP + 0x14],0x40000000
0040a826  eb08                 JMP 0x0040a830
0040a828  c744241400000080     MOV dword ptr [ESP + 0x14],0x80000000
0040a830  8b442430             MOV EAX,dword ptr [ESP + 0x30]
0040a834  83c0f0               ADD EAX,-0x10
0040a837  83f830               CMP EAX,0x30
0040a83a  0f87c1020000         JA 0x0040ab01
0040a840  33db                 XOR EBX,EBX
0040a842  8a9830ab4000         MOV BL,byte ptr [EAX + 0x40ab30]
switchD_0040a848::switchD:
0040a848  ff249d1cab4000       JMP dword ptr [EBX*0x4 + 0x40ab1c]
switchD_0040a848::caseD_10:
0040a84f  33db                 XOR EBX,EBX
0040a851  eb13                 JMP 0x0040a866
switchD_0040a848::caseD_20:
0040a853  bb01000000           MOV EBX,0x1
0040a858  eb0c                 JMP 0x0040a866
switchD_0040a848::caseD_30:
0040a85a  bb02000000           MOV EBX,0x2
0040a85f  eb05                 JMP 0x0040a866
switchD_0040a848::caseD_40:
0040a861  bb03000000           MOV EBX,0x3
0040a866  8bc1                 MOV EAX,ECX
0040a868  2500070000           AND EAX,0x700
0040a86d  3d00010000           CMP EAX,0x100
0040a872  7f12                 JG 0x0040a886
0040a874  7409                 JZ 0x0040a87f
0040a876  3bc6                 CMP EAX,ESI
0040a878  743c                 JZ 0x0040a8b6
0040a87a  e982020000           JMP 0x0040ab01
0040a87f  bd04000000           MOV EBP,0x4
0040a884  eb55                 JMP 0x0040a8db
0040a886  3d00030000           CMP EAX,0x300
0040a88b  7f15                 JG 0x0040a8a2
0040a88d  740c                 JZ 0x0040a89b
0040a88f  3d00020000           CMP EAX,0x200
0040a894  7440                 JZ 0x0040a8d6
0040a896  e966020000           JMP 0x0040ab01
0040a89b  bd02000000           MOV EBP,0x2
0040a8a0  eb39                 JMP 0x0040a8db
0040a8a2  3d00050000           CMP EAX,0x500
0040a8a7  7f14                 JG 0x0040a8bd
0040a8a9  7424                 JZ 0x0040a8cf
0040a8ab  3d00040000           CMP EAX,0x400
0040a8b0  0f854b020000         JNZ 0x0040ab01
0040a8b6  bd03000000           MOV EBP,0x3
0040a8bb  eb1e                 JMP 0x0040a8db
0040a8bd  3d00060000           CMP EAX,0x600
0040a8c2  7412                 JZ 0x0040a8d6
0040a8c4  3d00070000           CMP EAX,0x700
0040a8c9  0f8532020000         JNZ 0x0040ab01
0040a8cf  bd01000000           MOV EBP,0x1
0040a8d4  eb05                 JMP 0x0040a8db
0040a8d6  bd05000000           MOV EBP,0x5
0040a8db  f6c501               TEST CH,0x1
0040a8de  bf80000000           MOV EDI,0x80
0040a8e3  7417                 JZ 0x0040a8fc
0040a8e5  8b356c344100         MOV ESI,dword ptr [0x0041346c]
0040a8eb  8b442434             MOV EAX,dword ptr [ESP + 0x34]
0040a8ef  f7d6                 NOT ESI
0040a8f1  23c6                 AND EAX,ESI
0040a8f3  84c2                 TEST DL,AL
0040a8f5  7505                 JNZ 0x0040a8fc
0040a8f7  bf01000000           MOV EDI,0x1
0040a8fc  f6c140               TEST CL,0x40
0040a8ff  7413                 JZ 0x0040a914
0040a901  8b442414             MOV EAX,dword ptr [ESP + 0x14]
0040a905  81cf00000004         OR EDI,0x4000000
0040a90b  0d00000100           OR EAX,0x10000
0040a910  89442414             MOV dword ptr [ESP + 0x14],EAX
0040a914  f6c510               TEST CH,0x10
0040a917  7406                 JZ 0x0040a91f
0040a919  81cf00010000         OR EDI,0x100
0040a91f  f6c120               TEST CL,0x20
0040a922  7408                 JZ 0x0040a92c
0040a924  81cf00000008         OR EDI,0x8000000
0040a92a  eb0b                 JMP 0x0040a937
0040a92c  f6c110               TEST CL,0x10
0040a92f  7406                 JZ 0x0040a937
0040a931  81cf00000010         OR EDI,0x10000000
0040a937  e8340d0000           CALL 0x0040b670
0040a93c  8bf0                 MOV ESI,EAX
0040a93e  83feff               CMP ESI,-0x1
0040a941  751e                 JNZ 0x0040a961
0040a943  c7056434410018000000 MOV dword ptr [0x00413464],0x18
0040a94d  c7056834410000000000 MOV dword ptr [0x00413468],0x0
0040a957  0bc0                 OR EAX,EAX
0040a959  5f                   POP EDI
0040a95a  5e                   POP ESI
0040a95b  5d                   POP EBP
0040a95c  5b                   POP EBX
0040a95d  83c414               ADD ESP,0x14
0040a960  c3                   RET
0040a961  8b542414             MOV EDX,dword ptr [ESP + 0x14]
0040a965  8b442428             MOV EAX,dword ptr [ESP + 0x28]
0040a969  6a00                 PUSH 0x0
0040a96b  57                   PUSH EDI
0040a96c  8d4c2420             LEA ECX,[ESP + 0x20]
0040a970  55                   PUSH EBP
0040a971  51                   PUSH ECX
0040a972  53                   PUSH EBX
0040a973  52                   PUSH EDX
0040a974  50                   PUSH EAX
0040a975  ff15e8e14000         CALL dword ptr [0x0040e1e8]
0040a97b  8bf8                 MOV EDI,EAX
0040a97d  83ffff               CMP EDI,-0x1
0040a980  7519                 JNZ 0x0040a99b
0040a982  ff150ce24000         CALL dword ptr [0x0040e20c]
0040a988  50                   PUSH EAX
0040a989  e8b2060000           CALL 0x0040b040
0040a98e  83c404               ADD ESP,0x4
0040a991  0bc7                 OR EAX,EDI
0040a993  5f                   POP EDI
0040a994  5e                   POP ESI
0040a995  5d                   POP EBP
0040a996  5b                   POP EBX
0040a997  83c414               ADD ESP,0x14
0040a99a  c3                   RET
0040a99b  57                   PUSH EDI
0040a99c  ff15f8e14000         CALL dword ptr [0x0040e1f8]
0040a9a2  85c0                 TEST EAX,EAX
0040a9a4  7521                 JNZ 0x0040a9c7
0040a9a6  57                   PUSH EDI
0040a9a7  ff15f4e14000         CALL dword ptr [0x0040e1f4]
0040a9ad  ff150ce24000         CALL dword ptr [0x0040e20c]
0040a9b3  50                   PUSH EAX
0040a9b4  e887060000           CALL 0x0040b040
0040a9b9  83c404               ADD ESP,0x4
0040a9bc  83c8ff               OR EAX,0xffffffff
0040a9bf  5f                   POP EDI
0040a9c0  5e                   POP ESI
0040a9c1  5d                   POP EBP
0040a9c2  5b                   POP EBX
0040a9c3  83c414               ADD ESP,0x14
0040a9c6  c3                   RET
0040a9c7  83f802               CMP EAX,0x2
0040a9ca  7508                 JNZ 0x0040a9d4
0040a9cc  8a442413             MOV AL,byte ptr [ESP + 0x13]
0040a9d0  0c40                 OR AL,0x40
0040a9d2  eb0b                 JMP 0x0040a9df
0040a9d4  83f803               CMP EAX,0x3
0040a9d7  750a                 JNZ 0x0040a9e3
0040a9d9  8a442413             MOV AL,byte ptr [ESP + 0x13]
0040a9dd  0c08                 OR AL,0x8
0040a9df  88442413             MOV byte ptr [ESP + 0x13],AL
0040a9e3  57                   PUSH EDI
0040a9e4  56                   PUSH ESI
0040a9e5  e8460d0000           CALL 0x0040b730
0040a9ea  8a5c241b             MOV BL,byte ptr [ESP + 0x1b]
0040a9ee  8bce                 MOV ECX,ESI
0040a9f0  80cb01               OR BL,0x1
0040a9f3  8bfe                 MOV EDI,ESI
0040a9f5  c1f905               SAR ECX,0x5
0040a9f8  885c241b             MOV byte ptr [ESP + 0x1b],BL
0040a9fc  83e71f               AND EDI,0x1f
0040a9ff  8a44241b             MOV AL,byte ptr [ESP + 0x1b]
0040aa03  8b148d003d4100       MOV EDX,dword ptr [ECX*0x4 + 0x413d00]
0040aa0a  8d1c8d003d4100       LEA EBX,[ECX*0x4 + 0x413d00]
0040aa11  8ac8                 MOV CL,AL
0040aa13  83c408               ADD ESP,0x8
0040aa16  c1e703               SHL EDI,0x3
0040aa19  80e148               AND CL,0x48
0040aa1c  88441704             MOV byte ptr [EDI + EDX*0x1 + 0x4],AL
0040aa20  884c2428             MOV byte ptr [ESP + 0x28],CL
0040aa24  0f85af000000         JNZ 0x0040aad9
0040aa2a  a880                 TEST AL,0x80
0040aa2c  0f84a7000000         JZ 0x0040aad9
0040aa32  f644242c02           TEST byte ptr [ESP + 0x2c],0x2
0040aa37  0f849c000000         JZ 0x0040aad9
0040aa3d  6a02                 PUSH 0x2
0040aa3f  6aff                 PUSH -0x1
0040aa41  56                   PUSH ESI
0040aa42  e829130000           CALL 0x0040bd70
0040aa47  8be8                 MOV EBP,EAX
0040aa49  83c40c               ADD ESP,0xc
0040aa4c  83fdff               CMP EBP,-0x1
0040aa4f  751f                 JNZ 0x0040aa70
0040aa51  813d6834410083000000 CMP dword ptr [0x00413468],0x83
0040aa5b  747c                 JZ 0x0040aad9
0040aa5d  56                   PUSH ESI
0040aa5e  e8cdfaffff           CALL 0x0040a530
0040aa63  83c404               ADD ESP,0x4
0040aa66  0bc5                 OR EAX,EBP
0040aa68  5f                   POP EDI
0040aa69  5e                   POP ESI
0040aa6a  5d                   POP EBP
0040aa6b  5b                   POP EBX
0040aa6c  83c414               ADD ESP,0x14
0040aa6f  c3                   RET
0040aa70  8d442430             LEA EAX,[ESP + 0x30]
0040aa74  6a01                 PUSH 0x1
0040aa76  50                   PUSH EAX
0040aa77  56                   PUSH ESI
0040aa78  c644243c00           MOV byte ptr [ESP + 0x3c],0x0
0040aa7d  e8ae130000           CALL 0x0040be30
0040aa82  83c40c               ADD ESP,0xc
0040aa85  85c0                 TEST EAX,EAX
0040aa87  752a                 JNZ 0x0040aab3
0040aa89  807c24301a           CMP byte ptr [ESP + 0x30],0x1a
0040aa8e  7523                 JNZ 0x0040aab3
0040aa90  55                   PUSH EBP
0040aa91  56                   PUSH ESI
0040aa92  e879fbffff           CALL 0x0040a610
0040aa97  83c408               ADD ESP,0x8
0040aa9a  83f8ff               CMP EAX,-0x1
0040aa9d  7514                 JNZ 0x0040aab3
0040aa9f  56                   PUSH ESI
0040aaa0  e88bfaffff           CALL 0x0040a530
0040aaa5  83c404               ADD ESP,0x4
0040aaa8  83c8ff               OR EAX,0xffffffff
0040aaab  5f                   POP EDI
0040aaac  5e                   POP ESI
0040aaad  5d                   POP EBP
0040aaae  5b                   POP EBX
0040aaaf  83c414               ADD ESP,0x14
0040aab2  c3                   RET
0040aab3  6a00                 PUSH 0x0
0040aab5  6a00                 PUSH 0x0
0040aab7  56                   PUSH ESI
0040aab8  e8b3120000           CALL 0x0040bd70
0040aabd  83c40c               ADD ESP,0xc
0040aac0  83f8ff               CMP EAX,-0x1
0040aac3  7514                 JNZ 0x0040aad9
0040aac5  56                   PUSH ESI
0040aac6  e865faffff           CALL 0x0040a530
0040aacb  83c404               ADD ESP,0x4
0040aace  83c8ff               OR EAX,0xffffffff
0040aad1  5f                   POP EDI
0040aad2  5e                   POP ESI
0040aad3  5d                   POP EBP
0040aad4  5b                   POP EBX
0040aad5  83c414               ADD ESP,0x14
0040aad8  c3                   RET
0040aad9  8a442428             MOV AL,byte ptr [ESP + 0x28]
0040aadd  84c0                 TEST AL,AL
0040aadf  7516                 JNZ 0x0040aaf7
0040aae1  f644242c08           TEST byte ptr [ESP + 0x2c],0x8
0040aae6  740f                 JZ 0x0040aaf7
0040aae8  8b0b                 MOV ECX,dword ptr [EBX]
0040aaea  8d440f04             LEA EAX,[EDI + ECX*0x1 + 0x4]
0040aaee  8a4c0f04             MOV CL,byte ptr [EDI + ECX*0x1 + 0x4]
0040aaf2  80c920               OR CL,0x20
0040aaf5  8808                 MOV byte ptr [EAX],CL
0040aaf7  8bc6                 MOV EAX,ESI
0040aaf9  5f                   POP EDI
0040aafa  5e                   POP ESI
0040aafb  5d                   POP EBP
0040aafc  5b                   POP EBX
0040aafd  83c414               ADD ESP,0x14
0040ab00  c3                   RET
switchD_0040a848::caseD_11:
0040ab01  893568344100         MOV dword ptr [0x00413468],ESI
0040ab07  5f                   POP EDI
0040ab08  5e                   POP ESI
0040ab09  5d                   POP EBP
0040ab0a  c7056434410016000000 MOV dword ptr [0x00413464],0x16
0040ab14  83c8ff               OR EAX,0xffffffff
0040ab17  5b                   POP EBX
0040ab18  83c414               ADD ESP,0x14
0040ab1b  c3                   RET
switchD_0040a848::switchdataD_0040ab1c:
0040ab1c  addr 0040a84f
0040ab20  addr 0040a853
0040ab24  addr 0040a85a
0040ab28  addr 0040a861
0040ab2c  addr 0040ab01
switchD_0040a848::switchdataD_0040ab30:
0040ab30  db 0h
0040ab31  db 4h
0040ab32  db 4h
0040ab33  db 4h
0040ab34  db 4h
0040ab35  db 4h
0040ab36  db 4h
0040ab37  db 4h
0040ab38  db 4h
0040ab39  db 4h
0040ab3a  db 4h
0040ab3b  db 4h
0040ab3c  db 4h
0040ab3d  db 4h
0040ab3e  db 4h
0040ab3f  db 4h
0040ab40  db 1h
0040ab41  db 4h
0040ab42  db 4h
0040ab43  db 4h
0040ab44  db 4h
0040ab45  db 4h
0040ab46  db 4h
0040ab47  db 4h
0040ab48  db 4h
0040ab49  db 4h
0040ab4a  db 4h
0040ab4b  db 4h
0040ab4c  db 4h
0040ab4d  db 4h
0040ab4e  db 4h
0040ab4f  db 4h
0040ab50  db 2h
0040ab51  db 4h
0040ab52  db 4h
0040ab53  db 4h
0040ab54  db 4h
0040ab55  db 4h
0040ab56  db 4h
0040ab57  db 4h
0040ab58  db 4h
0040ab59  db 4h
0040ab5a  db 4h
0040ab5b  db 4h
0040ab5c  db 4h
0040ab5d  db 4h
0040ab5e  db 4h
0040ab5f  db 4h
0040ab60  db 3h
; undefined 15 bytes at 0040ab61

; ==== FUNCTION FUN_0040ab70 entry=0040ab70 sig=undefined __cdecl FUN_0040ab70(char * param_1, uint param_2)
0040ab70  8b442408             MOV EAX,dword ptr [ESP + 0x8]
0040ab74  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
0040ab78  50                   PUSH EAX
0040ab79  51                   PUSH ECX
0040ab7a  6a00                 PUSH 0x0
0040ab7c  e80f000000           CALL 0x0040ab90
0040ab81  83c40c               ADD ESP,0xc
0040ab84  c3                   RET
; undefined 11 bytes at 0040ab85

; ==== FUNCTION FUN_0040ab90 entry=0040ab90 sig=char * __cdecl FUN_0040ab90(uint param_1, char * param_2, uint param_3)
0040ab90  81ec0c010000         SUB ESP,0x10c
0040ab96  53                   PUSH EBX
0040ab97  8b9c2414010000       MOV EBX,dword ptr [ESP + 0x114]
0040ab9e  56                   PUSH ESI
0040ab9f  57                   PUSH EDI
0040aba0  85db                 TEST EBX,EBX
0040aba2  745d                 JZ 0x0040ac01
0040aba4  53                   PUSH EBX
0040aba5  e816010000           CALL 0x0040acc0
0040abaa  83c404               ADD ESP,0x4
0040abad  85c0                 TEST EAX,EAX
0040abaf  751e                 JNZ 0x0040abcf
0040abb1  c705683441000f000000 MOV dword ptr [0x00413468],0xf
0040abbb  c705643441000d000000 MOV dword ptr [0x00413464],0xd
0040abc5  5f                   POP EDI
0040abc6  5e                   POP ESI
0040abc7  5b                   POP EBX
0040abc8  81c40c010000         ADD ESP,0x10c
0040abce  c3                   RET
0040abcf  8d442410             LEA EAX,[ESP + 0x10]
0040abd3  8d4c2414             LEA ECX,[ESP + 0x14]
0040abd7  50                   PUSH EAX
0040abd8  51                   PUSH ECX
0040abd9  8d542414             LEA EDX,[ESP + 0x14]
0040abdd  80c340               ADD BL,0x40
0040abe0  6804010000           PUSH 0x104
0040abe5  52                   PUSH EDX
0040abe6  885c241c             MOV byte ptr [ESP + 0x1c],BL
0040abea  c644241d3a           MOV byte ptr [ESP + 0x1d],0x3a
0040abef  c644241e2e           MOV byte ptr [ESP + 0x1e],0x2e
0040abf4  c644241f00           MOV byte ptr [ESP + 0x1f],0x0
0040abf9  ff15e4e14000         CALL dword ptr [0x0040e1e4]
0040abff  eb10                 JMP 0x0040ac11
0040ac01  8d442414             LEA EAX,[ESP + 0x14]
0040ac05  50                   PUSH EAX
0040ac06  6804010000           PUSH 0x104
0040ac0b  ff15fce14000         CALL dword ptr [0x0040e1fc]
0040ac11  85c0                 TEST EAX,EAX
0040ac13  0f848e000000         JZ 0x0040aca7
0040ac19  40                   INC EAX
0040ac1a  3d04010000           CMP EAX,0x104
0040ac1f  0f8782000000         JA 0x0040aca7
0040ac25  8b942420010000       MOV EDX,dword ptr [ESP + 0x120]
0040ac2c  8b8c2424010000       MOV ECX,dword ptr [ESP + 0x124]
0040ac33  85d2                 TEST EDX,EDX
0040ac35  7529                 JNZ 0x0040ac60
0040ac37  3bc1                 CMP EAX,ECX
0040ac39  7f02                 JG 0x0040ac3d
0040ac3b  8bc1                 MOV EAX,ECX
0040ac3d  50                   PUSH EAX
0040ac3e  e8fd000000           CALL 0x0040ad40
0040ac43  8bd0                 MOV EDX,EAX
0040ac45  83c404               ADD ESP,0x4
0040ac48  85d2                 TEST EDX,EDX
0040ac4a  752e                 JNZ 0x0040ac7a
0040ac4c  c705643441000c000000 MOV dword ptr [0x00413464],0xc
0040ac56  5f                   POP EDI
0040ac57  5e                   POP ESI
0040ac58  5b                   POP EBX
0040ac59  81c40c010000         ADD ESP,0x10c
0040ac5f  c3                   RET
0040ac60  3bc1                 CMP EAX,ECX
0040ac62  7e16                 JLE 0x0040ac7a
0040ac64  c7056434410022000000 MOV dword ptr [0x00413464],0x22
0040ac6e  33c0                 XOR EAX,EAX
0040ac70  5f                   POP EDI
0040ac71  5e                   POP ESI
0040ac72  5b                   POP EBX
0040ac73  81c40c010000         ADD ESP,0x10c
0040ac79  c3                   RET
0040ac7a  8d7c2414             LEA EDI,[ESP + 0x14]
0040ac7e  83c9ff               OR ECX,0xffffffff
0040ac81  33c0                 XOR EAX,EAX
0040ac83  f2ae                 SCASB.REPNE ES:EDI
0040ac85  f7d1                 NOT ECX
0040ac87  2bf9                 SUB EDI,ECX
0040ac89  8bf7                 MOV ESI,EDI
0040ac8b  8bd9                 MOV EBX,ECX
0040ac8d  8bfa                 MOV EDI,EDX
0040ac8f  8bc7                 MOV EAX,EDI
0040ac91  c1e902               SHR ECX,0x2
0040ac94  f3a5                 MOVSD.REP ES:EDI,ESI
0040ac96  8bcb                 MOV ECX,EBX
0040ac98  83e103               AND ECX,0x3
0040ac9b  f3a4                 MOVSB.REP ES:EDI,ESI
0040ac9d  5f                   POP EDI
0040ac9e  5e                   POP ESI
0040ac9f  5b                   POP EBX
0040aca0  81c40c010000         ADD ESP,0x10c
0040aca6  c3                   RET
0040aca7  5f                   POP EDI
0040aca8  5e                   POP ESI
0040aca9  33c0                 XOR EAX,EAX
0040acab  5b                   POP EBX
0040acac  81c40c010000         ADD ESP,0x10c
0040acb2  c3                   RET
; undefined 13 bytes at 0040acb3

; ==== FUNCTION FUN_0040acc0 entry=0040acc0 sig=undefined4 __cdecl FUN_0040acc0(uint param_1)
0040acc0  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040acc4  85c0                 TEST EAX,EAX
0040acc6  7506                 JNZ 0x0040acce
0040acc8  b801000000           MOV EAX,0x1
0040accd  c3                   RET
0040acce  0440                 ADD AL,0x40
0040acd0  c64424053a           MOV byte ptr [ESP + 0x5],0x3a
0040acd5  88442404             MOV byte ptr [ESP + 0x4],AL
0040acd9  8d442404             LEA EAX,[ESP + 0x4]
0040acdd  50                   PUSH EAX
0040acde  c644240a5c           MOV byte ptr [ESP + 0xa],0x5c
0040ace3  c644240b00           MOV byte ptr [ESP + 0xb],0x0
0040ace8  ff1528e14000         CALL dword ptr [0x0040e128]
0040acee  85c0                 TEST EAX,EAX
0040acf0  740b                 JZ 0x0040acfd
0040acf2  83f801               CMP EAX,0x1
0040acf5  7406                 JZ 0x0040acfd
0040acf7  b801000000           MOV EAX,0x1
0040acfc  c3                   RET
0040acfd  33c0                 XOR EAX,EAX
0040acff  c3                   RET

; ==== FUNCTION FUN_0040ad00 entry=0040ad00 sig=undefined4 __cdecl FUN_0040ad00(LPCSTR param_1, LPCSTR param_2)
0040ad00  8b442408             MOV EAX,dword ptr [ESP + 0x8]
0040ad04  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
0040ad08  50                   PUSH EAX
0040ad09  51                   PUSH ECX
0040ad0a  ff15ece14000         CALL dword ptr [0x0040e1ec]
0040ad10  85c0                 TEST EAX,EAX
0040ad12  7508                 JNZ 0x0040ad1c
0040ad14  ff150ce24000         CALL dword ptr [0x0040e20c]
0040ad1a  eb02                 JMP 0x0040ad1e
0040ad1c  33c0                 XOR EAX,EAX
0040ad1e  85c0                 TEST EAX,EAX
0040ad20  740d                 JZ 0x0040ad2f
0040ad22  50                   PUSH EAX
0040ad23  e818030000           CALL 0x0040b040
0040ad28  83c404               ADD ESP,0x4
0040ad2b  83c8ff               OR EAX,0xffffffff
0040ad2e  c3                   RET
0040ad2f  33c0                 XOR EAX,EAX
0040ad31  c3                   RET
; undefined 14 bytes at 0040ad32

; ==== FUNCTION FUN_0040ad40 entry=0040ad40 sig=undefined __cdecl FUN_0040ad40(uint param_1)
0040ad40  a1b4344100           MOV EAX,[0x004134b4]
0040ad45  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
0040ad49  50                   PUSH EAX
0040ad4a  51                   PUSH ECX
0040ad4b  e810000000           CALL 0x0040ad60
0040ad50  83c408               ADD ESP,0x8
0040ad53  c3                   RET
; undefined 12 bytes at 0040ad54

; ==== FUNCTION FUN_0040ad60 entry=0040ad60 sig=int __cdecl FUN_0040ad60(uint param_1, int param_2)
0040ad60  56                   PUSH ESI
0040ad61  8b742408             MOV ESI,dword ptr [ESP + 0x8]
0040ad65  83fee0               CMP ESI,-0x20
0040ad68  57                   PUSH EDI
0040ad69  7734                 JA 0x0040ad9f
0040ad6b  85f6                 TEST ESI,ESI
0040ad6d  7505                 JNZ 0x0040ad74
0040ad6f  be01000000           MOV ESI,0x1
0040ad74  8b7c2410             MOV EDI,dword ptr [ESP + 0x10]
0040ad78  83fee0               CMP ESI,-0x20
0040ad7b  770b                 JA 0x0040ad88
0040ad7d  56                   PUSH ESI
0040ad7e  e82d000000           CALL 0x0040adb0
0040ad83  83c404               ADD ESP,0x4
0040ad86  eb02                 JMP 0x0040ad8a
0040ad88  33c0                 XOR EAX,EAX
0040ad8a  85c0                 TEST EAX,EAX
0040ad8c  7513                 JNZ 0x0040ada1
0040ad8e  85ff                 TEST EDI,EDI
0040ad90  740f                 JZ 0x0040ada1
0040ad92  56                   PUSH ESI
0040ad93  e8f8120000           CALL 0x0040c090
0040ad98  83c404               ADD ESP,0x4
0040ad9b  85c0                 TEST EAX,EAX
0040ad9d  75d9                 JNZ 0x0040ad78
0040ad9f  33c0                 XOR EAX,EAX
0040ada1  5f                   POP EDI
0040ada2  5e                   POP ESI
0040ada3  c3                   RET
; undefined 12 bytes at 0040ada4

; ==== FUNCTION FUN_0040adb0 entry=0040adb0 sig=undefined __cdecl FUN_0040adb0(int param_1)
0040adb0  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040adb4  56                   PUSH ESI
0040adb5  8d700f               LEA ESI,[EAX + 0xf]
0040adb8  a1f4314100           MOV EAX,[0x004131f4]
0040adbd  83e6f0               AND ESI,0xfffffff0
0040adc0  3bf0                 CMP ESI,EAX
0040adc2  7712                 JA 0x0040add6
0040adc4  8bce                 MOV ECX,ESI
0040adc6  c1e904               SHR ECX,0x4
0040adc9  51                   PUSH ECX
0040adca  e881160000           CALL 0x0040c450
0040adcf  83c404               ADD ESP,0x4
0040add2  85c0                 TEST EAX,EAX
0040add4  7510                 JNZ 0x0040ade6
0040add6  8b15e43c4100         MOV EDX,dword ptr [0x00413ce4]
0040addc  56                   PUSH ESI
0040addd  6a00                 PUSH 0x0
0040addf  52                   PUSH EDX
0040ade0  ff15dce14000         CALL dword ptr [0x0040e1dc]
0040ade6  5e                   POP ESI
0040ade7  c3                   RET
; undefined 8 bytes at 0040ade8

; ==== FUNCTION FUN_0040adf0 entry=0040adf0 sig=undefined __cdecl FUN_0040adf0(undefined * param_1)
0040adf0  51                   PUSH ECX
0040adf1  56                   PUSH ESI
0040adf2  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
0040adf6  85f6                 TEST ESI,ESI
0040adf8  743d                 JZ 0x0040ae37
0040adfa  8d44240c             LEA EAX,[ESP + 0xc]
0040adfe  8d4c2404             LEA ECX,[ESP + 0x4]
0040ae02  50                   PUSH EAX
0040ae03  51                   PUSH ECX
0040ae04  56                   PUSH ESI
0040ae05  e886150000           CALL 0x0040c390
0040ae0a  83c40c               ADD ESP,0xc
0040ae0d  85c0                 TEST EAX,EAX
0040ae0f  7416                 JZ 0x0040ae27
0040ae11  8b54240c             MOV EDX,dword ptr [ESP + 0xc]
0040ae15  50                   PUSH EAX
0040ae16  8b442408             MOV EAX,dword ptr [ESP + 0x8]
0040ae1a  52                   PUSH EDX
0040ae1b  50                   PUSH EAX
0040ae1c  e8cf150000           CALL 0x0040c3f0
0040ae21  83c40c               ADD ESP,0xc
0040ae24  5e                   POP ESI
0040ae25  59                   POP ECX
0040ae26  c3                   RET
0040ae27  8b0de43c4100         MOV ECX,dword ptr [0x00413ce4]
0040ae2d  56                   PUSH ESI
0040ae2e  6a00                 PUSH 0x0
0040ae30  51                   PUSH ECX
0040ae31  ff15d8e14000         CALL dword ptr [0x0040e1d8]
0040ae37  5e                   POP ESI
0040ae38  59                   POP ECX
0040ae39  c3                   RET
; undefined 6 bytes at 0040ae3a

; ==== FUNCTION entry entry=0040ae40 sig=undefined __stdcall entry(void)
0040ae40  55                   PUSH EBP
0040ae41  8bec                 MOV EBP,ESP
0040ae43  6aff                 PUSH -0x1
0040ae45  6828e34000           PUSH 0x40e328
0040ae4a  68e8d44000           PUSH 0x40d4e8
0040ae4f  64a100000000         MOV EAX,FS:[0x0]
0040ae55  50                   PUSH EAX
0040ae56  64892500000000       MOV dword ptr FS:[0x0],ESP
0040ae5d  83c4a8               ADD ESP,-0x58
0040ae60  53                   PUSH EBX
0040ae61  56                   PUSH ESI
0040ae62  57                   PUSH EDI
0040ae63  8965e8               MOV dword ptr [EBP + -0x18],ESP
0040ae66  ff15d4e14000         CALL dword ptr [0x0040e1d4]
0040ae6c  33d2                 XOR EDX,EDX
0040ae6e  8ad4                 MOV DL,AH
0040ae70  89157c344100         MOV dword ptr [0x0041347c],EDX
0040ae76  8bc8                 MOV ECX,EAX
0040ae78  81e1ff000000         AND ECX,0xff
0040ae7e  890d78344100         MOV dword ptr [0x00413478],ECX
0040ae84  c1e108               SHL ECX,0x8
0040ae87  03ca                 ADD ECX,EDX
0040ae89  890d74344100         MOV dword ptr [0x00413474],ECX
0040ae8f  c1e810               SHR EAX,0x10
0040ae92  a370344100           MOV [0x00413470],EAX
0040ae97  e814120000           CALL 0x0040c0b0
0040ae9c  85c0                 TEST EAX,EAX
0040ae9e  750a                 JNZ 0x0040aeaa
0040aea0  6a1c                 PUSH 0x1c
0040aea2  e869010000           CALL 0x0040b010
0040aea7  83c404               ADD ESP,0x4
0040aeaa  c745fc00000000       MOV dword ptr [EBP + -0x4],0x0
0040aeb1  e81a0a0000           CALL 0x0040b8d0
0040aeb6  e825250000           CALL 0x0040d3e0
0040aebb  ff15cce14000         CALL dword ptr [0x0040e1cc]
0040aec1  a3103e4100           MOV [0x00413e10],EAX
0040aec6  e8d51e0000           CALL 0x0040cda0
0040aecb  a328344100           MOV [0x00413428],EAX
0040aed0  85c0                 TEST EAX,EAX
0040aed2  7409                 JZ 0x0040aedd
0040aed4  a1103e4100           MOV EAX,[0x00413e10]
0040aed9  85c0                 TEST EAX,EAX
0040aedb  750a                 JNZ 0x0040aee7
0040aedd  6aff                 PUSH -0x1
0040aedf  e87c060000           CALL 0x0040b560
0040aee4  83c404               ADD ESP,0x4
0040aee7  e8041c0000           CALL 0x0040caf0
0040aeec  e80f1b0000           CALL 0x0040ca00
0040aef1  e83a060000           CALL 0x0040b530
0040aef6  8b35103e4100         MOV ESI,dword ptr [0x00413e10]
0040aefc  89759c               MOV dword ptr [EBP + -0x64],ESI
0040aeff  803e22               CMP byte ptr [ESI],0x22
0040af02  0f85be000000         JNZ 0x0040afc6
0040af08  46                   INC ESI
0040af09  89759c               MOV dword ptr [EBP + -0x64],ESI
0040af0c  8a06                 MOV AL,byte ptr [ESI]
0040af0e  3c22                 CMP AL,0x22
0040af10  741c                 JZ 0x0040af2e
0040af12  84c0                 TEST AL,AL
0040af14  7418                 JZ 0x0040af2e
0040af16  25ff000000           AND EAX,0xff
0040af1b  50                   PUSH EAX
0040af1c  e87f1a0000           CALL 0x0040c9a0
0040af21  83c404               ADD ESP,0x4
0040af24  85c0                 TEST EAX,EAX
0040af26  74e0                 JZ 0x0040af08
0040af28  46                   INC ESI
0040af29  89759c               MOV dword ptr [EBP + -0x64],ESI
0040af2c  ebda                 JMP 0x0040af08
0040af2e  803e22               CMP byte ptr [ESI],0x22
0040af31  7504                 JNZ 0x0040af37
0040af33  46                   INC ESI
0040af34  89759c               MOV dword ptr [EBP + -0x64],ESI
0040af37  8a06                 MOV AL,byte ptr [ESI]
0040af39  84c0                 TEST AL,AL
0040af3b  740a                 JZ 0x0040af47
0040af3d  3c20                 CMP AL,0x20
0040af3f  7706                 JA 0x0040af47
0040af41  46                   INC ESI
0040af42  89759c               MOV dword ptr [EBP + -0x64],ESI
0040af45  ebf0                 JMP 0x0040af37
0040af47  c745d000000000       MOV dword ptr [EBP + -0x30],0x0
0040af4e  8d45a4               LEA EAX,[EBP + -0x5c]
0040af51  50                   PUSH EAX
0040af52  ff15d0e14000         CALL dword ptr [0x0040e1d0]
0040af58  f645d001             TEST byte ptr [EBP + -0x30],0x1
0040af5c  740a                 JZ 0x0040af68
0040af5e  8b45d4               MOV EAX,dword ptr [EBP + -0x2c]
0040af61  25ffff0000           AND EAX,0xffff
0040af66  eb05                 JMP 0x0040af6d
0040af68  b80a000000           MOV EAX,0xa
0040af6d  50                   PUSH EAX
0040af6e  56                   PUSH ESI
0040af6f  6a00                 PUSH 0x0
0040af71  6a00                 PUSH 0x0
0040af73  ff15e0e14000         CALL dword ptr [0x0040e1e0]
0040af79  50                   PUSH EAX
0040af7a  e88160ffff           CALL 0x00401000
0040af7f  8945a0               MOV dword ptr [EBP + -0x60],EAX
0040af82  50                   PUSH EAX
0040af83  e8d8050000           CALL 0x0040b560
0040af88  eb21                 JMP 0x0040afab

; ==== FUNCTION FUN_0040af8a entry=0040af8a sig=undefined __stdcall FUN_0040af8a(void)
0040af8a  8b45ec               MOV EAX,dword ptr [EBP + -0x14]
0040af8d  8b08                 MOV ECX,dword ptr [EAX]
0040af8f  8b09                 MOV ECX,dword ptr [ECX]
0040af91  894d98               MOV dword ptr [EBP + -0x68],ECX
0040af94  50                   PUSH EAX
0040af95  51                   PUSH ECX
0040af96  e875180000           CALL 0x0040c810
0040af9b  83c408               ADD ESP,0x8
0040af9e  c3                   RET

; ==== FUNCTION FUN_0040af9f entry=0040af9f sig=undefined FUN_0040af9f(void)
0040af9f  8b65e8               MOV ESP,dword ptr [EBP + -0x18]
0040afa2  8b5598               MOV EDX,dword ptr [EBP + -0x68]
0040afa5  52                   PUSH EDX
0040afa6  e8d5050000           CALL 0x0040b580
0040afab  83c404               ADD ESP,0x4
0040afae  c745fcffffffff       MOV dword ptr [EBP + -0x4],0xffffffff
0040afb5  8b4df0               MOV ECX,dword ptr [EBP + -0x10]
0040afb8  64890d00000000       MOV dword ptr FS:[0x0],ECX
0040afbf  5f                   POP EDI
0040afc0  5e                   POP ESI
0040afc1  5b                   POP EBX
0040afc2  8be5                 MOV ESP,EBP
0040afc4  5d                   POP EBP
0040afc5  c3                   RET
0040afc6  803e20               CMP byte ptr [ESI],0x20
0040afc9  0f8668ffffff         JBE 0x0040af37
0040afcf  46                   INC ESI
0040afd0  89759c               MOV dword ptr [EBP + -0x64],ESI
0040afd3  ebf1                 JMP 0x0040afc6
; undefined 11 bytes at 0040afd5

; ==== FUNCTION __amsg_exit entry=0040afe0 sig=void __cdecl __amsg_exit(int param_1)
0040afe0  833d3034410001       CMP dword ptr [0x00413430],0x1
0040afe7  7505                 JNZ 0x0040afee
0040afe9  e8d2250000           CALL 0x0040d5c0
0040afee  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040aff2  50                   PUSH EAX
0040aff3  e808260000           CALL 0x0040d600
0040aff8  83c404               ADD ESP,0x4
0040affb  68ff000000           PUSH 0xff
0040b000  ff1550104100         CALL dword ptr [0x00411050]
0040b006  83c404               ADD ESP,0x4
0040b009  c3                   RET
; undefined 6 bytes at 0040b00a

; ==== FUNCTION FUN_0040b010 entry=0040b010 sig=undefined __cdecl FUN_0040b010(int param_1)
0040b010  833d3034410001       CMP dword ptr [0x00413430],0x1
0040b017  7505                 JNZ 0x0040b01e
0040b019  e8a2250000           CALL 0x0040d5c0
0040b01e  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040b022  50                   PUSH EAX
0040b023  e8d8250000           CALL 0x0040d600
0040b028  83c404               ADD ESP,0x4
0040b02b  68ff000000           PUSH 0xff
0040b030  ff15c4e14000         CALL dword ptr [0x0040e1c4]
0040b036  c3                   RET
; undefined 9 bytes at 0040b037

; ==== FUNCTION FUN_0040b040 entry=0040b040 sig=undefined __cdecl FUN_0040b040(uint param_1)
0040b040  8b542404             MOV EDX,dword ptr [ESP + 0x4]
0040b044  891568344100         MOV dword ptr [0x00413468],EDX
0040b04a  33c9                 XOR ECX,ECX
0040b04c  b858104100           MOV EAX,0x411058
0040b051  3b10                 CMP EDX,dword ptr [EAX]
0040b053  7445                 JZ 0x0040b09a
0040b055  83c008               ADD EAX,0x8
0040b058  41                   INC ECX
0040b059  3dc0114100           CMP EAX,0x4111c0
0040b05e  72f1                 JC 0x0040b051
0040b060  83fa13               CMP EDX,0x13
0040b063  7210                 JC 0x0040b075
0040b065  83fa24               CMP EDX,0x24
0040b068  770b                 JA 0x0040b075
0040b06a  c705643441000d000000 MOV dword ptr [0x00413464],0xd
0040b074  c3                   RET
0040b075  81fabc000000         CMP EDX,0xbc
0040b07b  7212                 JC 0x0040b08f
0040b07d  81faca000000         CMP EDX,0xca
0040b083  c7056434410008000000 MOV dword ptr [0x00413464],0x8
0040b08d  760a                 JBE 0x0040b099
0040b08f  c7056434410016000000 MOV dword ptr [0x00413464],0x16
0040b099  c3                   RET
0040b09a  8b04cd5c104100       MOV EAX,dword ptr [ECX*0x8 + 0x41105c]
0040b0a1  a364344100           MOV [0x00413464],EAX
0040b0a6  c3                   RET
; undefined 9 bytes at 0040b0a7

; ==== FUNCTION FUN_0040b0b0 entry=0040b0b0 sig=uint __cdecl FUN_0040b0b0(uint param_1)
0040b0b0  83ec08               SUB ESP,0x8
0040b0b3  53                   PUSH EBX
0040b0b4  8b5c2410             MOV EBX,dword ptr [ESP + 0x10]
0040b0b8  81fbff000000         CMP EBX,0xff
0040b0be  766c                 JBE 0x0040b12c
0040b0c0  8bc3                 MOV EAX,EBX
0040b0c2  885c2411             MOV byte ptr [ESP + 0x11],BL
0040b0c6  c1e808               SHR EAX,0x8
0040b0c9  88442410             MOV byte ptr [ESP + 0x10],AL
0040b0cd  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
0040b0d1  81e1ff000000         AND ECX,0xff
0040b0d7  f681d935410004       TEST byte ptr [ECX + 0x4135d9],0x4
0040b0de  7467                 JZ 0x0040b147
0040b0e0  8b15e0374100         MOV EDX,dword ptr [0x004137e0]
0040b0e6  6a01                 PUSH 0x1
0040b0e8  52                   PUSH EDX
0040b0e9  8b15e4374100         MOV EDX,dword ptr [0x004137e4]
0040b0ef  8d44240c             LEA EAX,[ESP + 0xc]
0040b0f3  6a02                 PUSH 0x2
0040b0f5  50                   PUSH EAX
0040b0f6  8d4c2420             LEA ECX,[ESP + 0x20]
0040b0fa  6a02                 PUSH 0x2
0040b0fc  51                   PUSH ECX
0040b0fd  6800020000           PUSH 0x200
0040b102  52                   PUSH EDX
0040b103  e848000000           CALL 0x0040b150
0040b108  83c420               ADD ESP,0x20
0040b10b  85c0                 TEST EAX,EAX
0040b10d  7438                 JZ 0x0040b147
0040b10f  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040b113  8b4c2405             MOV ECX,dword ptr [ESP + 0x5]
0040b117  25ff000000           AND EAX,0xff
0040b11c  81e1ff000000         AND ECX,0xff
0040b122  c1e008               SHL EAX,0x8
0040b125  03c1                 ADD EAX,ECX
0040b127  5b                   POP EBX
0040b128  83c408               ADD ESP,0x8
0040b12b  c3                   RET
0040b12c  8a93d9354100         MOV DL,byte ptr [EBX + 0x4135d9]
0040b132  80e220               AND DL,0x20
0040b135  80fa20               CMP DL,0x20
0040b138  750d                 JNZ 0x0040b147
0040b13a  33c0                 XOR EAX,EAX
0040b13c  8a83e0364100         MOV AL,byte ptr [EBX + 0x4136e0]
0040b142  5b                   POP EBX
0040b143  83c408               ADD ESP,0x8
0040b146  c3                   RET
0040b147  8bc3                 MOV EAX,EBX
0040b149  5b                   POP EBX
0040b14a  83c408               ADD ESP,0x8
0040b14d  c3                   RET
; undefined 2 bytes at 0040b14e

; ==== FUNCTION FUN_0040b150 entry=0040b150 sig=int __cdecl FUN_0040b150(LCID param_1, uint param_2, char * param_3, LPCWSTR param_4, LPWSTR param_5, int param_6, UINT param_7, int param_8)
0040b150  a138344100           MOV EAX,[0x00413438]
0040b155  53                   PUSH EBX
0040b156  8b1db8e14000         MOV EBX,dword ptr [0x0040e1b8]
0040b15c  55                   PUSH EBP
0040b15d  56                   PUSH ESI
0040b15e  57                   PUSH EDI
0040b15f  85c0                 TEST EAX,EAX
0040b161  7549                 JNZ 0x0040b1ac
0040b163  6a00                 PUSH 0x0
0040b165  6a00                 PUSH 0x0
0040b167  6a01                 PUSH 0x1
0040b169  6838e34000           PUSH 0x40e338
0040b16e  6800010000           PUSH 0x100
0040b173  6a00                 PUSH 0x0
0040b175  ff15b4e14000         CALL dword ptr [0x0040e1b4]
0040b17b  85c0                 TEST EAX,EAX
0040b17d  7407                 JZ 0x0040b186
0040b17f  b801000000           MOV EAX,0x1
0040b184  eb21                 JMP 0x0040b1a7
0040b186  6a00                 PUSH 0x0
0040b188  6a00                 PUSH 0x0
0040b18a  6a01                 PUSH 0x1
0040b18c  6834e34000           PUSH 0x40e334
0040b191  6800010000           PUSH 0x100
0040b196  6a00                 PUSH 0x0
0040b198  ffd3                 CALL EBX
0040b19a  85c0                 TEST EAX,EAX
0040b19c  0f84cc010000         JZ 0x0040b36e
0040b1a2  b802000000           MOV EAX,0x2
0040b1a7  a338344100           MOV [0x00413438],EAX
0040b1ac  8b742420             MOV ESI,dword ptr [ESP + 0x20]
0040b1b0  85f6                 TEST ESI,ESI
0040b1b2  7e17                 JLE 0x0040b1cb
0040b1b4  8b7c241c             MOV EDI,dword ptr [ESP + 0x1c]
0040b1b8  56                   PUSH ESI
0040b1b9  57                   PUSH EDI
0040b1ba  e8c1010000           CALL 0x0040b380
0040b1bf  8bf0                 MOV ESI,EAX
0040b1c1  a138344100           MOV EAX,[0x00413438]
0040b1c6  83c408               ADD ESP,0x8
0040b1c9  eb04                 JMP 0x0040b1cf
0040b1cb  8b7c241c             MOV EDI,dword ptr [ESP + 0x1c]
0040b1cf  83f802               CMP EAX,0x2
0040b1d2  751d                 JNZ 0x0040b1f1
0040b1d4  8b442428             MOV EAX,dword ptr [ESP + 0x28]
0040b1d8  8b4c2424             MOV ECX,dword ptr [ESP + 0x24]
0040b1dc  8b542418             MOV EDX,dword ptr [ESP + 0x18]
0040b1e0  50                   PUSH EAX
0040b1e1  8b442418             MOV EAX,dword ptr [ESP + 0x18]
0040b1e5  51                   PUSH ECX
0040b1e6  56                   PUSH ESI
0040b1e7  57                   PUSH EDI
0040b1e8  52                   PUSH EDX
0040b1e9  50                   PUSH EAX
0040b1ea  ffd3                 CALL EBX
0040b1ec  5f                   POP EDI
0040b1ed  5e                   POP ESI
0040b1ee  5d                   POP EBP
0040b1ef  5b                   POP EBX
0040b1f0  c3                   RET
0040b1f1  83f801               CMP EAX,0x1
0040b1f4  0f85dd000000         JNZ 0x0040b2d7
0040b1fa  8b6c242c             MOV EBP,dword ptr [ESP + 0x2c]
0040b1fe  c744242000000000     MOV dword ptr [ESP + 0x20],0x0
0040b206  85ed                 TEST EBP,EBP
0040b208  750c                 JNZ 0x0040b216
0040b20a  8b0d58344100         MOV ECX,dword ptr [0x00413458]
0040b210  894c242c             MOV dword ptr [ESP + 0x2c],ECX
0040b214  8be9                 MOV EBP,ECX
0040b216  8b542430             MOV EDX,dword ptr [ESP + 0x30]
0040b21a  6a00                 PUSH 0x0
0040b21c  f7da                 NEG EDX
0040b21e  1bd2                 SBB EDX,EDX
0040b220  6a00                 PUSH 0x0
0040b222  83e208               AND EDX,0x8
0040b225  56                   PUSH ESI
0040b226  42                   INC EDX
0040b227  57                   PUSH EDI
0040b228  52                   PUSH EDX
0040b229  55                   PUSH EBP
0040b22a  ff15c0e14000         CALL dword ptr [0x0040e1c0]
0040b230  8bf8                 MOV EDI,EAX
0040b232  85ff                 TEST EDI,EDI
0040b234  7505                 JNZ 0x0040b23b
0040b236  5f                   POP EDI
0040b237  5e                   POP ESI
0040b238  5d                   POP EBP
0040b239  5b                   POP EBX
0040b23a  c3                   RET
0040b23b  8d043f               LEA EAX,[EDI + EDI*0x1]
0040b23e  50                   PUSH EAX
0040b23f  e8fcfaffff           CALL 0x0040ad40
0040b244  8bd8                 MOV EBX,EAX
0040b246  83c404               ADD ESP,0x4
0040b249  85db                 TEST EBX,EBX
0040b24b  7505                 JNZ 0x0040b252
0040b24d  5f                   POP EDI
0040b24e  5e                   POP ESI
0040b24f  5d                   POP EBP
0040b250  5b                   POP EBX
0040b251  c3                   RET
0040b252  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
0040b256  57                   PUSH EDI
0040b257  53                   PUSH EBX
0040b258  56                   PUSH ESI
0040b259  51                   PUSH ECX
0040b25a  6a01                 PUSH 0x1
0040b25c  55                   PUSH EBP
0040b25d  ff15c0e14000         CALL dword ptr [0x0040e1c0]
0040b263  85c0                 TEST EAX,EAX
0040b265  0f84ed000000         JZ 0x0040b358
0040b26b  8b6c2418             MOV EBP,dword ptr [ESP + 0x18]
0040b26f  8b542414             MOV EDX,dword ptr [ESP + 0x14]
0040b273  6a00                 PUSH 0x0
0040b275  6a00                 PUSH 0x0
0040b277  57                   PUSH EDI
0040b278  53                   PUSH EBX
0040b279  55                   PUSH EBP
0040b27a  52                   PUSH EDX
0040b27b  ff15b4e14000         CALL dword ptr [0x0040e1b4]
0040b281  8bf0                 MOV ESI,EAX
0040b283  85f6                 TEST ESI,ESI
0040b285  0f84cd000000         JZ 0x0040b358
0040b28b  f7c500040000         TEST EBP,0x400
0040b291  7449                 JZ 0x0040b2dc
0040b293  8b442428             MOV EAX,dword ptr [ESP + 0x28]
0040b297  85c0                 TEST EAX,EAX
0040b299  7424                 JZ 0x0040b2bf
0040b29b  3bf0                 CMP ESI,EAX
0040b29d  0f8fb5000000         JG 0x0040b358
0040b2a3  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
0040b2a7  50                   PUSH EAX
0040b2a8  8b442428             MOV EAX,dword ptr [ESP + 0x28]
0040b2ac  50                   PUSH EAX
0040b2ad  57                   PUSH EDI
0040b2ae  53                   PUSH EBX
0040b2af  55                   PUSH EBP
0040b2b0  51                   PUSH ECX
0040b2b1  ff15b4e14000         CALL dword ptr [0x0040e1b4]
0040b2b7  85c0                 TEST EAX,EAX
0040b2b9  0f8499000000         JZ 0x0040b358
0040b2bf  53                   PUSH EBX
0040b2c0  e82bfbffff           CALL 0x0040adf0
0040b2c5  8b542424             MOV EDX,dword ptr [ESP + 0x24]
0040b2c9  83c404               ADD ESP,0x4
0040b2cc  52                   PUSH EDX
0040b2cd  e81efbffff           CALL 0x0040adf0
0040b2d2  83c404               ADD ESP,0x4
0040b2d5  8bc6                 MOV EAX,ESI
0040b2d7  5f                   POP EDI
0040b2d8  5e                   POP ESI
0040b2d9  5d                   POP EBP
0040b2da  5b                   POP EBX
0040b2db  c3                   RET
0040b2dc  8d1436               LEA EDX,[ESI + ESI*0x1]
0040b2df  52                   PUSH EDX
0040b2e0  e85bfaffff           CALL 0x0040ad40
0040b2e5  83c404               ADD ESP,0x4
0040b2e8  89442420             MOV dword ptr [ESP + 0x20],EAX
0040b2ec  85c0                 TEST EAX,EAX
0040b2ee  7468                 JZ 0x0040b358
0040b2f0  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
0040b2f4  56                   PUSH ESI
0040b2f5  50                   PUSH EAX
0040b2f6  57                   PUSH EDI
0040b2f7  53                   PUSH EBX
0040b2f8  55                   PUSH EBP
0040b2f9  51                   PUSH ECX
0040b2fa  ff15b4e14000         CALL dword ptr [0x0040e1b4]
0040b300  85c0                 TEST EAX,EAX
0040b302  7454                 JZ 0x0040b358
0040b304  8b442428             MOV EAX,dword ptr [ESP + 0x28]
0040b308  6a00                 PUSH 0x0
0040b30a  85c0                 TEST EAX,EAX
0040b30c  6a00                 PUSH 0x0
0040b30e  7522                 JNZ 0x0040b332
0040b310  8b542428             MOV EDX,dword ptr [ESP + 0x28]
0040b314  8b442434             MOV EAX,dword ptr [ESP + 0x34]
0040b318  6a00                 PUSH 0x0
0040b31a  6a00                 PUSH 0x0
0040b31c  56                   PUSH ESI
0040b31d  52                   PUSH EDX
0040b31e  6820020000           PUSH 0x220
0040b323  50                   PUSH EAX
0040b324  ff15c8e14000         CALL dword ptr [0x0040e1c8]
0040b32a  8bf0                 MOV ESI,EAX
0040b32c  85f6                 TEST ESI,ESI
0040b32e  7428                 JZ 0x0040b358
0040b330  eb8d                 JMP 0x0040b2bf
0040b332  8b4c242c             MOV ECX,dword ptr [ESP + 0x2c]
0040b336  8b542428             MOV EDX,dword ptr [ESP + 0x28]
0040b33a  50                   PUSH EAX
0040b33b  8b442438             MOV EAX,dword ptr [ESP + 0x38]
0040b33f  51                   PUSH ECX
0040b340  56                   PUSH ESI
0040b341  52                   PUSH EDX
0040b342  6820020000           PUSH 0x220
0040b347  50                   PUSH EAX
0040b348  ff15c8e14000         CALL dword ptr [0x0040e1c8]
0040b34e  8bf0                 MOV ESI,EAX
0040b350  85f6                 TEST ESI,ESI
0040b352  0f8567ffffff         JNZ 0x0040b2bf
0040b358  53                   PUSH EBX
0040b359  e892faffff           CALL 0x0040adf0
0040b35e  8b4c2424             MOV ECX,dword ptr [ESP + 0x24]
0040b362  83c404               ADD ESP,0x4
0040b365  51                   PUSH ECX
0040b366  e885faffff           CALL 0x0040adf0
0040b36b  83c404               ADD ESP,0x4
0040b36e  5f                   POP EDI
0040b36f  5e                   POP ESI
0040b370  5d                   POP EBP
0040b371  33c0                 XOR EAX,EAX
0040b373  5b                   POP EBX
0040b374  c3                   RET
; undefined 11 bytes at 0040b375

; ==== FUNCTION FUN_0040b380 entry=0040b380 sig=int __cdecl FUN_0040b380(char * param_1, int param_2)
0040b380  8b542408             MOV EDX,dword ptr [ESP + 0x8]
0040b384  56                   PUSH ESI
0040b385  8b742408             MOV ESI,dword ptr [ESP + 0x8]
0040b389  85d2                 TEST EDX,EDX
0040b38b  57                   PUSH EDI
0040b38c  8bc6                 MOV EAX,ESI
0040b38e  8d4aff               LEA ECX,[EDX + -0x1]
0040b391  740d                 JZ 0x0040b3a0
0040b393  803800               CMP byte ptr [EAX],0x0
0040b396  7408                 JZ 0x0040b3a0
0040b398  40                   INC EAX
0040b399  8bf9                 MOV EDI,ECX
0040b39b  49                   DEC ECX
0040b39c  85ff                 TEST EDI,EDI
0040b39e  75f3                 JNZ 0x0040b393
0040b3a0  803800               CMP byte ptr [EAX],0x0
0040b3a3  7505                 JNZ 0x0040b3aa
0040b3a5  2bc6                 SUB EAX,ESI
0040b3a7  5f                   POP EDI
0040b3a8  5e                   POP ESI
0040b3a9  c3                   RET
0040b3aa  5f                   POP EDI
0040b3ab  5e                   POP ESI
0040b3ac  8bc2                 MOV EAX,EDX
0040b3ae  c3                   RET
; undefined 1 bytes at 0040b3af

; ==== FUNCTION FUN_0040b3b0 entry=0040b3b0 sig=BOOL __cdecl FUN_0040b3b0(DWORD param_1, LPCSTR param_2, int param_3, LPWORD param_4, UINT param_5, LCID param_6, int param_7)
0040b3b0  51                   PUSH ECX
0040b3b1  a160344100           MOV EAX,[0x00413460]
0040b3b6  53                   PUSH EBX
0040b3b7  55                   PUSH EBP
0040b3b8  56                   PUSH ESI
0040b3b9  8b35bce14000         MOV ESI,dword ptr [0x0040e1bc]
0040b3bf  57                   PUSH EDI
0040b3c0  33ff                 XOR EDI,EDI
0040b3c2  3bc7                 CMP EAX,EDI
0040b3c4  7526                 JNZ 0x0040b3ec
0040b3c6  8d442412             LEA EAX,[ESP + 0x12]
0040b3ca  50                   PUSH EAX
0040b3cb  6a01                 PUSH 0x1
0040b3cd  6838e34000           PUSH 0x40e338
0040b3d2  6a01                 PUSH 0x1
0040b3d4  ff15ace14000         CALL dword ptr [0x0040e1ac]
0040b3da  85c0                 TEST EAX,EAX
0040b3dc  0f84da000000         JZ 0x0040b4bc
0040b3e2  b801000000           MOV EAX,0x1
0040b3e7  a360344100           MOV [0x00413460],EAX
0040b3ec  83f802               CMP EAX,0x2
0040b3ef  752a                 JNZ 0x0040b41b
0040b3f1  8b44242c             MOV EAX,dword ptr [ESP + 0x2c]
0040b3f5  3bc7                 CMP EAX,EDI
0040b3f7  7505                 JNZ 0x0040b3fe
0040b3f9  a148344100           MOV EAX,[0x00413448]
0040b3fe  8b542424             MOV EDX,dword ptr [ESP + 0x24]
0040b402  8b4c2420             MOV ECX,dword ptr [ESP + 0x20]
0040b406  52                   PUSH EDX
0040b407  8b542420             MOV EDX,dword ptr [ESP + 0x20]
0040b40b  51                   PUSH ECX
0040b40c  8b4c2420             MOV ECX,dword ptr [ESP + 0x20]
0040b410  52                   PUSH EDX
0040b411  51                   PUSH ECX
0040b412  50                   PUSH EAX
0040b413  ffd6                 CALL ESI
0040b415  5f                   POP EDI
0040b416  5e                   POP ESI
0040b417  5d                   POP EBP
0040b418  5b                   POP EBX
0040b419  59                   POP ECX
0040b41a  c3                   RET
0040b41b  83f801               CMP EAX,0x1
0040b41e  0f8592000000         JNZ 0x0040b4b6
0040b424  8b5c2428             MOV EBX,dword ptr [ESP + 0x28]
0040b428  897c242c             MOV dword ptr [ESP + 0x2c],EDI
0040b42c  3bdf                 CMP EBX,EDI
0040b42e  7506                 JNZ 0x0040b436
0040b430  8b1d58344100         MOV EBX,dword ptr [0x00413458]
0040b436  8b442430             MOV EAX,dword ptr [ESP + 0x30]
0040b43a  8b6c2420             MOV EBP,dword ptr [ESP + 0x20]
0040b43e  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
0040b442  57                   PUSH EDI
0040b443  f7d8                 NEG EAX
0040b445  1bc0                 SBB EAX,EAX
0040b447  57                   PUSH EDI
0040b448  83e008               AND EAX,0x8
0040b44b  55                   PUSH EBP
0040b44c  40                   INC EAX
0040b44d  52                   PUSH EDX
0040b44e  50                   PUSH EAX
0040b44f  53                   PUSH EBX
0040b450  ff15c0e14000         CALL dword ptr [0x0040e1c0]
0040b456  8bf0                 MOV ESI,EAX
0040b458  85f6                 TEST ESI,ESI
0040b45a  744b                 JZ 0x0040b4a7
0040b45c  56                   PUSH ESI
0040b45d  6a02                 PUSH 0x2
0040b45f  e8bc260000           CALL 0x0040db20
0040b464  8bf8                 MOV EDI,EAX
0040b466  83c408               ADD ESP,0x8
0040b469  85ff                 TEST EDI,EDI
0040b46b  743a                 JZ 0x0040b4a7
0040b46d  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
0040b471  56                   PUSH ESI
0040b472  57                   PUSH EDI
0040b473  55                   PUSH EBP
0040b474  51                   PUSH ECX
0040b475  6a01                 PUSH 0x1
0040b477  53                   PUSH EBX
0040b478  ff15c0e14000         CALL dword ptr [0x0040e1c0]
0040b47e  85c0                 TEST EAX,EAX
0040b480  7425                 JZ 0x0040b4a7
0040b482  8b542424             MOV EDX,dword ptr [ESP + 0x24]
0040b486  52                   PUSH EDX
0040b487  50                   PUSH EAX
0040b488  8b442420             MOV EAX,dword ptr [ESP + 0x20]
0040b48c  57                   PUSH EDI
0040b48d  50                   PUSH EAX
0040b48e  ff15ace14000         CALL dword ptr [0x0040e1ac]
0040b494  57                   PUSH EDI
0040b495  8bf0                 MOV ESI,EAX
0040b497  e854f9ffff           CALL 0x0040adf0
0040b49c  83c404               ADD ESP,0x4
0040b49f  8bc6                 MOV EAX,ESI
0040b4a1  5f                   POP EDI
0040b4a2  5e                   POP ESI
0040b4a3  5d                   POP EBP
0040b4a4  5b                   POP EBX
0040b4a5  59                   POP ECX
0040b4a6  c3                   RET
0040b4a7  8b74242c             MOV ESI,dword ptr [ESP + 0x2c]
0040b4ab  57                   PUSH EDI
0040b4ac  e83ff9ffff           CALL 0x0040adf0
0040b4b1  83c404               ADD ESP,0x4
0040b4b4  8bc6                 MOV EAX,ESI
0040b4b6  5f                   POP EDI
0040b4b7  5e                   POP ESI
0040b4b8  5d                   POP EBP
0040b4b9  5b                   POP EBX
0040b4ba  59                   POP ECX
0040b4bb  c3                   RET
0040b4bc  8d4c2412             LEA ECX,[ESP + 0x12]
0040b4c0  51                   PUSH ECX
0040b4c1  6a01                 PUSH 0x1
0040b4c3  6834e34000           PUSH 0x40e334
0040b4c8  6a01                 PUSH 0x1
0040b4ca  57                   PUSH EDI
0040b4cb  ffd6                 CALL ESI
0040b4cd  85c0                 TEST EAX,EAX
0040b4cf  740f                 JZ 0x0040b4e0
0040b4d1  b802000000           MOV EAX,0x2
0040b4d6  a360344100           MOV [0x00413460],EAX
0040b4db  e90cffffff           JMP 0x0040b3ec
0040b4e0  5f                   POP EDI
0040b4e1  5e                   POP ESI
0040b4e2  5d                   POP EBP
0040b4e3  33c0                 XOR EAX,EAX
0040b4e5  5b                   POP EBX
0040b4e6  59                   POP ECX
0040b4e7  c3                   RET
; undefined 8 bytes at 0040b4e8

; ==== FUNCTION FUN_0040b4f0 entry=0040b4f0 sig=longlong __stdcall FUN_0040b4f0(uint param_1, int param_2, uint param_3, int param_4)
0040b4f0  8b442408             MOV EAX,dword ptr [ESP + 0x8]
0040b4f4  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
0040b4f8  0bc8                 OR ECX,EAX
0040b4fa  8b4c240c             MOV ECX,dword ptr [ESP + 0xc]
0040b4fe  7509                 JNZ 0x0040b509
0040b500  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040b504  f7e1                 MUL ECX
0040b506  c21000               RET 0x10
0040b509  53                   PUSH EBX
0040b50a  f7e1                 MUL ECX
0040b50c  8bd8                 MOV EBX,EAX
0040b50e  8b442408             MOV EAX,dword ptr [ESP + 0x8]
0040b512  f7642414             MUL dword ptr [ESP + 0x14]
0040b516  03d8                 ADD EBX,EAX
0040b518  8b442408             MOV EAX,dword ptr [ESP + 0x8]
0040b51c  f7e1                 MUL ECX
0040b51e  03d3                 ADD EDX,EBX
0040b520  5b                   POP EBX
0040b521  c21000               RET 0x10

; ==== FUNCTION FUN_0040b524 entry=0040b524 sig=undefined FUN_0040b524(void)
0040b524  cc                   INT3

; ==== FUNCTION FUN_0040b525 entry=0040b525 sig=undefined FUN_0040b525(void)
0040b525  cc                   INT3

; ==== FUNCTION FUN_0040b526 entry=0040b526 sig=undefined FUN_0040b526(void)
0040b526  cc                   INT3

; ==== FUNCTION FUN_0040b527 entry=0040b527 sig=undefined FUN_0040b527(void)
0040b527  cc                   INT3

; ==== FUNCTION FUN_0040b528 entry=0040b528 sig=undefined FUN_0040b528(void)
0040b528  cc                   INT3

; ==== FUNCTION FUN_0040b529 entry=0040b529 sig=undefined FUN_0040b529(void)
0040b529  cc                   INT3

; ==== FUNCTION FUN_0040b52a entry=0040b52a sig=undefined FUN_0040b52a(void)
0040b52a  cc                   INT3

; ==== FUNCTION FUN_0040b52b entry=0040b52b sig=undefined FUN_0040b52b(void)
0040b52b  cc                   INT3

; ==== FUNCTION FUN_0040b52c entry=0040b52c sig=undefined FUN_0040b52c(void)
0040b52c  cc                   INT3

; ==== FUNCTION FUN_0040b52d entry=0040b52d sig=undefined FUN_0040b52d(void)
0040b52d  cc                   INT3

; ==== FUNCTION FUN_0040b52e entry=0040b52e sig=undefined FUN_0040b52e(void)
0040b52e  cc                   INT3

; ==== FUNCTION FUN_0040b52f entry=0040b52f sig=undefined FUN_0040b52f(void)
0040b52f  cc                   INT3

; ==== FUNCTION FUN_0040b530 entry=0040b530 sig=undefined __stdcall FUN_0040b530(void)
0040b530  a10c3e4100           MOV EAX,[0x00413e0c]
0040b535  85c0                 TEST EAX,EAX
0040b537  7402                 JZ 0x0040b53b
0040b539  ffd0                 CALL EAX
0040b53b  680c004100           PUSH 0x41000c
0040b540  6808004100           PUSH 0x410008
0040b545  e806010000           CALL 0x0040b650
0040b54a  83c408               ADD ESP,0x8
0040b54d  6804004100           PUSH 0x410004
0040b552  6800004100           PUSH 0x410000
0040b557  e8f4000000           CALL 0x0040b650
0040b55c  83c408               ADD ESP,0x8
0040b55f  c3                   RET

; ==== FUNCTION FUN_0040b560 entry=0040b560 sig=undefined __cdecl FUN_0040b560(UINT param_1)
0040b560  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040b564  6a00                 PUSH 0x0
0040b566  6a00                 PUSH 0x0
0040b568  50                   PUSH EAX
0040b569  e832000000           CALL 0x0040b5a0
0040b56e  83c40c               ADD ESP,0xc
0040b571  c3                   RET
; undefined 14 bytes at 0040b572

; ==== FUNCTION __exit entry=0040b580 sig=noreturn void __cdecl __exit(int _Code)
0040b580  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040b584  6a00                 PUSH 0x0
0040b586  6a01                 PUSH 0x1
0040b588  50                   PUSH EAX
0040b589  e812000000           CALL 0x0040b5a0
0040b58e  83c40c               ADD ESP,0xc
0040b591  c3                   RET
; undefined 14 bytes at 0040b592

; ==== FUNCTION FUN_0040b5a0 entry=0040b5a0 sig=undefined __cdecl FUN_0040b5a0(UINT param_1, int param_2, int param_3)
0040b5a0  a1ac344100           MOV EAX,[0x004134ac]
0040b5a5  53                   PUSH EBX
0040b5a6  55                   PUSH EBP
0040b5a7  8b6c240c             MOV EBP,dword ptr [ESP + 0xc]
0040b5ab  83f801               CMP EAX,0x1
0040b5ae  56                   PUSH ESI
0040b5af  750e                 JNZ 0x0040b5bf
0040b5b1  55                   PUSH EBP
0040b5b2  ff15b0e14000         CALL dword ptr [0x0040e1b0]
0040b5b8  50                   PUSH EAX
0040b5b9  ff15a8e14000         CALL dword ptr [0x0040e1a8]
0040b5bf  8b442414             MOV EAX,dword ptr [ESP + 0x14]
0040b5c3  8b5c2418             MOV EBX,dword ptr [ESP + 0x18]
0040b5c7  85c0                 TEST EAX,EAX
0040b5c9  c705a834410001000000 MOV dword ptr [0x004134a8],0x1
0040b5d3  881da4344100         MOV byte ptr [0x004134a4],BL
0040b5d9  753e                 JNZ 0x0040b619
0040b5db  8b0d083e4100         MOV ECX,dword ptr [0x00413e08]
0040b5e1  85c9                 TEST ECX,ECX
0040b5e3  7422                 JZ 0x0040b607
0040b5e5  8b35043e4100         MOV ESI,dword ptr [0x00413e04]
0040b5eb  83ee04               SUB ESI,0x4
0040b5ee  3bf1                 CMP ESI,ECX
0040b5f0  7215                 JC 0x0040b607
0040b5f2  8b06                 MOV EAX,dword ptr [ESI]
0040b5f4  85c0                 TEST EAX,EAX
0040b5f6  7408                 JZ 0x0040b600
0040b5f8  ffd0                 CALL EAX
0040b5fa  8b0d083e4100         MOV ECX,dword ptr [0x00413e08]
0040b600  83ee04               SUB ESI,0x4
0040b603  3bf1                 CMP ESI,ECX
0040b605  73eb                 JNC 0x0040b5f2
0040b607  6814004100           PUSH 0x410014
0040b60c  6810004100           PUSH 0x410010
0040b611  e83a000000           CALL 0x0040b650
0040b616  83c408               ADD ESP,0x8
0040b619  681c004100           PUSH 0x41001c
0040b61e  6818004100           PUSH 0x410018
0040b623  e828000000           CALL 0x0040b650
0040b628  83c408               ADD ESP,0x8
0040b62b  85db                 TEST EBX,EBX
0040b62d  7511                 JNZ 0x0040b640
0040b62f  55                   PUSH EBP
0040b630  c705ac34410001000000 MOV dword ptr [0x004134ac],0x1
0040b63a  ff15c4e14000         CALL dword ptr [0x0040e1c4]
0040b640  5e                   POP ESI
0040b641  5d                   POP EBP
0040b642  5b                   POP EBX
0040b643  c3                   RET
; undefined 12 bytes at 0040b644

; ==== FUNCTION FUN_0040b650 entry=0040b650 sig=undefined __cdecl FUN_0040b650(undefined4 * param_1, undefined4 * param_2)
0040b650  56                   PUSH ESI
0040b651  8b742408             MOV ESI,dword ptr [ESP + 0x8]
0040b655  57                   PUSH EDI
0040b656  8b7c2410             MOV EDI,dword ptr [ESP + 0x10]
0040b65a  3bf7                 CMP ESI,EDI
0040b65c  730f                 JNC 0x0040b66d
0040b65e  8b06                 MOV EAX,dword ptr [ESI]
0040b660  85c0                 TEST EAX,EAX
0040b662  7402                 JZ 0x0040b666
0040b664  ffd0                 CALL EAX
0040b666  83c604               ADD ESI,0x4
0040b669  3bf7                 CMP ESI,EDI
0040b66b  72f1                 JC 0x0040b65e
0040b66d  5f                   POP EDI
0040b66e  5e                   POP ESI
0040b66f  c3                   RET

; ==== FUNCTION FUN_0040b670 entry=0040b670 sig=int __stdcall FUN_0040b670(void)
0040b670  53                   PUSH EBX
0040b671  55                   PUSH EBP
0040b672  56                   PUSH ESI
0040b673  57                   PUSH EDI
0040b674  83cdff               OR EBP,0xffffffff
0040b677  33f6                 XOR ESI,ESI
0040b679  33ff                 XOR EDI,EDI
0040b67b  b9003d4100           MOV ECX,0x413d00
0040b680  b301                 MOV BL,0x1
0040b682  8b01                 MOV EAX,dword ptr [ECX]
0040b684  85c0                 TEST EAX,EAX
0040b686  7444                 JZ 0x0040b6cc
0040b688  8d9000010000         LEA EDX,[EAX + 0x100]
0040b68e  3bc2                 CMP EAX,EDX
0040b690  731f                 JNC 0x0040b6b1
0040b692  845804               TEST byte ptr [EAX + 0x4],BL
0040b695  7409                 JZ 0x0040b6a0
0040b697  83c008               ADD EAX,0x8
0040b69a  3bc2                 CMP EAX,EDX
0040b69c  72f4                 JC 0x0040b692
0040b69e  eb11                 JMP 0x0040b6b1
0040b6a0  c700ffffffff         MOV dword ptr [EAX],0xffffffff
0040b6a6  8b11                 MOV EDX,dword ptr [ECX]
0040b6a8  2bc2                 SUB EAX,EDX
0040b6aa  c1f803               SAR EAX,0x3
0040b6ad  03c7                 ADD EAX,EDI
0040b6af  8be8                 MOV EBP,EAX
0040b6b1  83fdff               CMP EBP,-0x1
0040b6b4  756f                 JNZ 0x0040b725
0040b6b6  83c104               ADD ECX,0x4
0040b6b9  46                   INC ESI
0040b6ba  83c720               ADD EDI,0x20
0040b6bd  81f9003e4100         CMP ECX,0x413e00
0040b6c3  7cbd                 JL 0x0040b682
0040b6c5  8bc5                 MOV EAX,EBP
0040b6c7  5f                   POP EDI
0040b6c8  5e                   POP ESI
0040b6c9  5d                   POP EBP
0040b6ca  5b                   POP EBX
0040b6cb  c3                   RET
0040b6cc  6800010000           PUSH 0x100
0040b6d1  e86af6ffff           CALL 0x0040ad40
0040b6d6  83c404               ADD ESP,0x4
0040b6d9  85c0                 TEST EAX,EAX
0040b6db  7448                 JZ 0x0040b725
0040b6dd  8b3d003e4100         MOV EDI,dword ptr [0x00413e00]
0040b6e3  8d8800010000         LEA ECX,[EAX + 0x100]
0040b6e9  83c720               ADD EDI,0x20
0040b6ec  3bc1                 CMP EAX,ECX
0040b6ee  8904b5003d4100       MOV dword ptr [ESI*0x4 + 0x413d00],EAX
0040b6f5  893d003e4100         MOV dword ptr [0x00413e00],EDI
0040b6fb  7323                 JNC 0x0040b720
0040b6fd  b10a                 MOV CL,0xa
0040b6ff  c6400400             MOV byte ptr [EAX + 0x4],0x0
0040b703  c700ffffffff         MOV dword ptr [EAX],0xffffffff
0040b709  884805               MOV byte ptr [EAX + 0x5],CL
0040b70c  8b14b5003d4100       MOV EDX,dword ptr [ESI*0x4 + 0x413d00]
0040b713  83c008               ADD EAX,0x8
0040b716  81c200010000         ADD EDX,0x100
0040b71c  3bc2                 CMP EAX,EDX
0040b71e  72df                 JC 0x0040b6ff
0040b720  c1e605               SHL ESI,0x5
0040b723  8bee                 MOV EBP,ESI
0040b725  5f                   POP EDI
0040b726  8bc5                 MOV EAX,EBP
0040b728  5e                   POP ESI
0040b729  5d                   POP EBP
0040b72a  5b                   POP EBX
0040b72b  c3                   RET
; undefined 4 bytes at 0040b72c

; ==== FUNCTION FUN_0040b730 entry=0040b730 sig=undefined4 __cdecl FUN_0040b730(uint param_1, HANDLE param_2)
0040b730  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040b734  8b0d003e4100         MOV ECX,dword ptr [0x00413e00]
0040b73a  53                   PUSH EBX
0040b73b  56                   PUSH ESI
0040b73c  3bc1                 CMP EAX,ECX
0040b73e  57                   PUSH EDI
0040b73f  7377                 JNC 0x0040b7b8
0040b741  8bc8                 MOV ECX,EAX
0040b743  8bf0                 MOV ESI,EAX
0040b745  c1f905               SAR ECX,0x5
0040b748  83e61f               AND ESI,0x1f
0040b74b  8b148d003d4100       MOV EDX,dword ptr [ECX*0x4 + 0x413d00]
0040b752  8d3c8d003d4100       LEA EDI,[ECX*0x4 + 0x413d00]
0040b759  c1e603               SHL ESI,0x3
0040b75c  833c32ff             CMP dword ptr [EDX + ESI*0x1],-0x1
0040b760  7556                 JNZ 0x0040b7b8
0040b762  8b0d54104100         MOV ECX,dword ptr [0x00411054]
0040b768  8b5c2414             MOV EBX,dword ptr [ESP + 0x14]
0040b76c  83f901               CMP ECX,0x1
0040b76f  753c                 JNZ 0x0040b7ad
0040b771  83e800               SUB EAX,0x0
0040b774  742e                 JZ 0x0040b7a4
0040b776  48                   DEC EAX
0040b777  7417                 JZ 0x0040b790
0040b779  48                   DEC EAX
0040b77a  7531                 JNZ 0x0040b7ad
0040b77c  53                   PUSH EBX
0040b77d  6af4                 PUSH -0xc
0040b77f  ff15a0e14000         CALL dword ptr [0x0040e1a0]
0040b785  8b07                 MOV EAX,dword ptr [EDI]
0040b787  891c30               MOV dword ptr [EAX + ESI*0x1],EBX
0040b78a  33c0                 XOR EAX,EAX
0040b78c  5f                   POP EDI
0040b78d  5e                   POP ESI
0040b78e  5b                   POP EBX
0040b78f  c3                   RET
0040b790  53                   PUSH EBX
0040b791  6af5                 PUSH -0xb
0040b793  ff15a0e14000         CALL dword ptr [0x0040e1a0]
0040b799  8b07                 MOV EAX,dword ptr [EDI]
0040b79b  891c30               MOV dword ptr [EAX + ESI*0x1],EBX
0040b79e  33c0                 XOR EAX,EAX
0040b7a0  5f                   POP EDI
0040b7a1  5e                   POP ESI
0040b7a2  5b                   POP EBX
0040b7a3  c3                   RET
0040b7a4  53                   PUSH EBX
0040b7a5  6af6                 PUSH -0xa
0040b7a7  ff15a0e14000         CALL dword ptr [0x0040e1a0]
0040b7ad  8b07                 MOV EAX,dword ptr [EDI]
0040b7af  891c30               MOV dword ptr [EAX + ESI*0x1],EBX
0040b7b2  33c0                 XOR EAX,EAX
0040b7b4  5f                   POP EDI
0040b7b5  5e                   POP ESI
0040b7b6  5b                   POP EBX
0040b7b7  c3                   RET
0040b7b8  5f                   POP EDI
0040b7b9  5e                   POP ESI
0040b7ba  c7056434410009000000 MOV dword ptr [0x00413464],0x9
0040b7c4  c7056834410000000000 MOV dword ptr [0x00413468],0x0
0040b7ce  83c8ff               OR EAX,0xffffffff
0040b7d1  5b                   POP EBX
0040b7d2  c3                   RET
; undefined 13 bytes at 0040b7d3

; ==== FUNCTION FUN_0040b7e0 entry=0040b7e0 sig=undefined4 __cdecl FUN_0040b7e0(uint param_1)
0040b7e0  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040b7e4  8b0d003e4100         MOV ECX,dword ptr [0x00413e00]
0040b7ea  53                   PUSH EBX
0040b7eb  56                   PUSH ESI
0040b7ec  3bc1                 CMP EAX,ECX
0040b7ee  57                   PUSH EDI
0040b7ef  7368                 JNC 0x0040b859
0040b7f1  8bc8                 MOV ECX,EAX
0040b7f3  8bf0                 MOV ESI,EAX
0040b7f5  c1f905               SAR ECX,0x5
0040b7f8  83e61f               AND ESI,0x1f
0040b7fb  8b148d003d4100       MOV EDX,dword ptr [ECX*0x4 + 0x413d00]
0040b802  8d3c8d003d4100       LEA EDI,[ECX*0x4 + 0x413d00]
0040b809  c1e603               SHL ESI,0x3
0040b80c  8a5c3204             MOV BL,byte ptr [EDX + ESI*0x1 + 0x4]
0040b810  8d0c32               LEA ECX,[EDX + ESI*0x1]
0040b813  ba01000000           MOV EDX,0x1
0040b818  84da                 TEST DL,BL
0040b81a  743d                 JZ 0x0040b859
0040b81c  8339ff               CMP dword ptr [ECX],-0x1
0040b81f  7438                 JZ 0x0040b859
0040b821  391554104100         CMP dword ptr [0x00411054],EDX
0040b827  7521                 JNZ 0x0040b84a
0040b829  83e800               SUB EAX,0x0
0040b82c  7412                 JZ 0x0040b840
0040b82e  48                   DEC EAX
0040b82f  7409                 JZ 0x0040b83a
0040b831  48                   DEC EAX
0040b832  7516                 JNZ 0x0040b84a
0040b834  6a00                 PUSH 0x0
0040b836  6af4                 PUSH -0xc
0040b838  eb0a                 JMP 0x0040b844
0040b83a  6a00                 PUSH 0x0
0040b83c  6af5                 PUSH -0xb
0040b83e  eb04                 JMP 0x0040b844
0040b840  6a00                 PUSH 0x0
0040b842  6af6                 PUSH -0xa
0040b844  ff15a0e14000         CALL dword ptr [0x0040e1a0]
0040b84a  8b07                 MOV EAX,dword ptr [EDI]
0040b84c  c70430ffffffff       MOV dword ptr [EAX + ESI*0x1],0xffffffff
0040b853  33c0                 XOR EAX,EAX
0040b855  5f                   POP EDI
0040b856  5e                   POP ESI
0040b857  5b                   POP EBX
0040b858  c3                   RET
0040b859  5f                   POP EDI
0040b85a  5e                   POP ESI
0040b85b  c7056434410009000000 MOV dword ptr [0x00413464],0x9
0040b865  c7056834410000000000 MOV dword ptr [0x00413468],0x0
0040b86f  83c8ff               OR EAX,0xffffffff
0040b872  5b                   POP EBX
0040b873  c3                   RET
; undefined 12 bytes at 0040b874

; ==== FUNCTION FUN_0040b880 entry=0040b880 sig=undefined4 __cdecl FUN_0040b880(uint param_1)
0040b880  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040b884  8b0d003e4100         MOV ECX,dword ptr [0x00413e00]
0040b88a  3bc1                 CMP EAX,ECX
0040b88c  731e                 JNC 0x0040b8ac
0040b88e  8bc8                 MOV ECX,EAX
0040b890  83e01f               AND EAX,0x1f
0040b893  c1f905               SAR ECX,0x5
0040b896  8b148d003d4100       MOV EDX,dword ptr [ECX*0x4 + 0x413d00]
0040b89d  8a4cc204             MOV CL,byte ptr [EDX + EAX*0x8 + 0x4]
0040b8a1  f6c101               TEST CL,0x1
0040b8a4  8d04c2               LEA EAX,[EDX + EAX*0x8]
0040b8a7  7403                 JZ 0x0040b8ac
0040b8a9  8b00                 MOV EAX,dword ptr [EAX]
0040b8ab  c3                   RET
0040b8ac  c7056434410009000000 MOV dword ptr [0x00413464],0x9
0040b8b6  c7056834410000000000 MOV dword ptr [0x00413468],0x0
0040b8c0  83c8ff               OR EAX,0xffffffff
0040b8c3  c3                   RET
; undefined 12 bytes at 0040b8c4

; ==== FUNCTION FUN_0040b8d0 entry=0040b8d0 sig=undefined __stdcall FUN_0040b8d0(void)
0040b8d0  83ec48               SUB ESP,0x48
0040b8d3  53                   PUSH EBX
0040b8d4  55                   PUSH EBP
0040b8d5  56                   PUSH ESI
0040b8d6  57                   PUSH EDI
0040b8d7  6800010000           PUSH 0x100
0040b8dc  e85ff4ffff           CALL 0x0040ad40
0040b8e1  8bf0                 MOV ESI,EAX
0040b8e3  83c404               ADD ESP,0x4
0040b8e6  85f6                 TEST ESI,ESI
0040b8e8  750a                 JNZ 0x0040b8f4
0040b8ea  6a1b                 PUSH 0x1b
0040b8ec  e8eff6ffff           CALL 0x0040afe0
0040b8f1  83c404               ADD ESP,0x4
0040b8f4  8d8600010000         LEA EAX,[ESI + 0x100]
0040b8fa  8935003d4100         MOV dword ptr [0x00413d00],ESI
0040b900  3bf0                 CMP ESI,EAX
0040b902  c705003e410020000000 MOV dword ptr [0x00413e00],0x20
0040b90c  b30a                 MOV BL,0xa
0040b90e  7320                 JNC 0x0040b930
0040b910  c6460400             MOV byte ptr [ESI + 0x4],0x0
0040b914  c706ffffffff         MOV dword ptr [ESI],0xffffffff
0040b91a  885e05               MOV byte ptr [ESI + 0x5],BL
0040b91d  8b0d003d4100         MOV ECX,dword ptr [0x00413d00]
0040b923  83c608               ADD ESI,0x8
0040b926  81c100010000         ADD ECX,0x100
0040b92c  3bf1                 CMP ESI,ECX
0040b92e  72e0                 JC 0x0040b910
0040b930  8d542414             LEA EDX,[ESP + 0x14]
0040b934  52                   PUSH EDX
0040b935  ff15d0e14000         CALL dword ptr [0x0040e1d0]
0040b93b  66837c244600         CMP word ptr [ESP + 0x46],0x0
0040b941  0f84f2000000         JZ 0x0040ba39
0040b947  8b442448             MOV EAX,dword ptr [ESP + 0x48]
0040b94b  85c0                 TEST EAX,EAX
0040b94d  0f84e6000000         JZ 0x0040ba39
0040b953  8b08                 MOV ECX,dword ptr [EAX]
0040b955  8d7804               LEA EDI,[EAX + 0x4]
0040b958  81f900080000         CMP ECX,0x800
0040b95e  894c2410             MOV dword ptr [ESP + 0x10],ECX
0040b962  8d2c0f               LEA EBP,[EDI + ECX*0x1]
0040b965  7c08                 JL 0x0040b96f
0040b967  c744241000080000     MOV dword ptr [ESP + 0x10],0x800
0040b96f  8b442410             MOV EAX,dword ptr [ESP + 0x10]
0040b973  8b0d003e4100         MOV ECX,dword ptr [0x00413e00]
0040b979  3bc8                 CMP ECX,EAX
0040b97b  7d69                 JGE 0x0040b9e6
0040b97d  be043d4100           MOV ESI,0x413d04
0040b982  6800010000           PUSH 0x100
0040b987  e8b4f3ffff           CALL 0x0040ad40
0040b98c  83c404               ADD ESP,0x4
0040b98f  85c0                 TEST EAX,EAX
0040b991  7449                 JZ 0x0040b9dc
0040b993  8b0d003e4100         MOV ECX,dword ptr [0x00413e00]
0040b999  8906                 MOV dword ptr [ESI],EAX
0040b99b  83c120               ADD ECX,0x20
0040b99e  890d003e4100         MOV dword ptr [0x00413e00],ECX
0040b9a4  8d8800010000         LEA ECX,[EAX + 0x100]
0040b9aa  3bc1                 CMP EAX,ECX
0040b9ac  731c                 JNC 0x0040b9ca
0040b9ae  c6400400             MOV byte ptr [EAX + 0x4],0x0
0040b9b2  c700ffffffff         MOV dword ptr [EAX],0xffffffff
0040b9b8  885805               MOV byte ptr [EAX + 0x5],BL
0040b9bb  8b16                 MOV EDX,dword ptr [ESI]
0040b9bd  83c008               ADD EAX,0x8
0040b9c0  81c200010000         ADD EDX,0x100
0040b9c6  3bc2                 CMP EAX,EDX
0040b9c8  72e4                 JC 0x0040b9ae
0040b9ca  a1003e4100           MOV EAX,[0x00413e00]
0040b9cf  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
0040b9d3  83c604               ADD ESI,0x4
0040b9d6  3bc1                 CMP EAX,ECX
0040b9d8  7ca8                 JL 0x0040b982
0040b9da  eb0a                 JMP 0x0040b9e6
0040b9dc  8b0d003e4100         MOV ECX,dword ptr [0x00413e00]
0040b9e2  894c2410             MOV dword ptr [ESP + 0x10],ECX
0040b9e6  8b442410             MOV EAX,dword ptr [ESP + 0x10]
0040b9ea  33f6                 XOR ESI,ESI
0040b9ec  85c0                 TEST EAX,EAX
0040b9ee  7e49                 JLE 0x0040ba39
0040b9f0  8b4d00               MOV ECX,dword ptr [EBP]
0040b9f3  83f9ff               CMP ECX,-0x1
0040b9f6  7434                 JZ 0x0040ba2c
0040b9f8  8a07                 MOV AL,byte ptr [EDI]
0040b9fa  a801                 TEST AL,0x1
0040b9fc  742e                 JZ 0x0040ba2c
0040b9fe  a808                 TEST AL,0x8
0040ba00  750b                 JNZ 0x0040ba0d
0040ba02  51                   PUSH ECX
0040ba03  ff15f8e14000         CALL dword ptr [0x0040e1f8]
0040ba09  85c0                 TEST EAX,EAX
0040ba0b  741f                 JZ 0x0040ba2c
0040ba0d  8bd6                 MOV EDX,ESI
0040ba0f  8bc6                 MOV EAX,ESI
0040ba11  c1fa05               SAR EDX,0x5
0040ba14  83e01f               AND EAX,0x1f
0040ba17  8b0c95003d4100       MOV ECX,dword ptr [EDX*0x4 + 0x413d00]
0040ba1e  8b5500               MOV EDX,dword ptr [EBP]
0040ba21  8914c1               MOV dword ptr [ECX + EAX*0x8],EDX
0040ba24  8d04c1               LEA EAX,[ECX + EAX*0x8]
0040ba27  8a0f                 MOV CL,byte ptr [EDI]
0040ba29  884804               MOV byte ptr [EAX + 0x4],CL
0040ba2c  8b442410             MOV EAX,dword ptr [ESP + 0x10]
0040ba30  46                   INC ESI
0040ba31  47                   INC EDI
0040ba32  83c504               ADD EBP,0x4
0040ba35  3bf0                 CMP ESI,EAX
0040ba37  7cb7                 JL 0x0040b9f0
0040ba39  8b2da4e14000         MOV EBP,dword ptr [0x0040e1a4]
0040ba3f  33db                 XOR EBX,EBX
0040ba41  8b15003d4100         MOV EDX,dword ptr [0x00413d00]
0040ba47  8b04da               MOV EAX,dword ptr [EDX + EBX*0x8]
0040ba4a  8d34da               LEA ESI,[EDX + EBX*0x8]
0040ba4d  83f8ff               CMP EAX,-0x1
0040ba50  7554                 JNZ 0x0040baa6
0040ba52  85db                 TEST EBX,EBX
0040ba54  c6460481             MOV byte ptr [ESI + 0x4],0x81
0040ba58  7507                 JNZ 0x0040ba61
0040ba5a  b8f6ffffff           MOV EAX,0xfffffff6
0040ba5f  eb0a                 JMP 0x0040ba6b
0040ba61  8bc3                 MOV EAX,EBX
0040ba63  48                   DEC EAX
0040ba64  f7d8                 NEG EAX
0040ba66  1bc0                 SBB EAX,EAX
0040ba68  83c0f5               ADD EAX,-0xb
0040ba6b  50                   PUSH EAX
0040ba6c  ffd5                 CALL EBP
0040ba6e  8bf8                 MOV EDI,EAX
0040ba70  83ffff               CMP EDI,-0x1
0040ba73  742a                 JZ 0x0040ba9f
0040ba75  57                   PUSH EDI
0040ba76  ff15f8e14000         CALL dword ptr [0x0040e1f8]
0040ba7c  85c0                 TEST EAX,EAX
0040ba7e  741f                 JZ 0x0040ba9f
0040ba80  25ff000000           AND EAX,0xff
0040ba85  893e                 MOV dword ptr [ESI],EDI
0040ba87  83f802               CMP EAX,0x2
0040ba8a  7507                 JNZ 0x0040ba93
0040ba8c  8a4604               MOV AL,byte ptr [ESI + 0x4]
0040ba8f  0c40                 OR AL,0x40
0040ba91  eb18                 JMP 0x0040baab
0040ba93  83f803               CMP EAX,0x3
0040ba96  7516                 JNZ 0x0040baae
0040ba98  8a4604               MOV AL,byte ptr [ESI + 0x4]
0040ba9b  0c08                 OR AL,0x8
0040ba9d  eb0c                 JMP 0x0040baab
0040ba9f  8a4604               MOV AL,byte ptr [ESI + 0x4]
0040baa2  0c40                 OR AL,0x40
0040baa4  eb05                 JMP 0x0040baab
0040baa6  8a4604               MOV AL,byte ptr [ESI + 0x4]
0040baa9  0c80                 OR AL,0x80
0040baab  884604               MOV byte ptr [ESI + 0x4],AL
0040baae  43                   INC EBX
0040baaf  83fb03               CMP EBX,0x3
0040bab2  7c8d                 JL 0x0040ba41
0040bab4  a1003e4100           MOV EAX,[0x00413e00]
0040bab9  50                   PUSH EAX
0040baba  ff159ce14000         CALL dword ptr [0x0040e19c]
0040bac0  5f                   POP EDI
0040bac1  5e                   POP ESI
0040bac2  5d                   POP EBP
0040bac3  5b                   POP EBX
0040bac4  83c448               ADD ESP,0x48
0040bac7  c3                   RET
; undefined 8 bytes at 0040bac8

; ==== FUNCTION FUN_0040bad0 entry=0040bad0 sig=int __cdecl FUN_0040bad0(uint param_1, char * param_2, uint param_3)
0040bad0  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040bad4  8b0d003e4100         MOV ECX,dword ptr [0x00413e00]
0040bada  81ec1c040000         SUB ESP,0x41c
0040bae0  3bc1                 CMP EAX,ECX
0040bae2  53                   PUSH EBX
0040bae3  55                   PUSH EBP
0040bae4  56                   PUSH ESI
0040bae5  57                   PUSH EDI
0040bae6  0f8391010000         JNC 0x0040bc7d
0040baec  8bc8                 MOV ECX,EAX
0040baee  8bf0                 MOV ESI,EAX
0040baf0  c1f905               SAR ECX,0x5
0040baf3  83e61f               AND ESI,0x1f
0040baf6  8b148d003d4100       MOV EDX,dword ptr [ECX*0x4 + 0x413d00]
0040bafd  8d3c8d003d4100       LEA EDI,[ECX*0x4 + 0x413d00]
0040bb04  c1e603               SHL ESI,0x3
0040bb07  897c2424             MOV dword ptr [ESP + 0x24],EDI
0040bb0b  89742414             MOV dword ptr [ESP + 0x14],ESI
0040bb0f  8a4c1604             MOV CL,byte ptr [ESI + EDX*0x1 + 0x4]
0040bb13  f6c101               TEST CL,0x1
0040bb16  0f8461010000         JZ 0x0040bc7d
0040bb1c  8b9c2438040000       MOV EBX,dword ptr [ESP + 0x438]
0040bb23  33ed                 XOR EBP,EBP
0040bb25  3bdd                 CMP EBX,EBP
0040bb27  896c2410             MOV dword ptr [ESP + 0x10],EBP
0040bb2b  896c2420             MOV dword ptr [ESP + 0x20],EBP
0040bb2f  750d                 JNZ 0x0040bb3e
0040bb31  33c0                 XOR EAX,EAX
0040bb33  5f                   POP EDI
0040bb34  5e                   POP ESI
0040bb35  5d                   POP EBP
0040bb36  5b                   POP EBX
0040bb37  81c41c040000         ADD ESP,0x41c
0040bb3d  c3                   RET
0040bb3e  f6c120               TEST CL,0x20
0040bb41  740c                 JZ 0x0040bb4f
0040bb43  6a02                 PUSH 0x2
0040bb45  55                   PUSH EBP
0040bb46  50                   PUSH EAX
0040bb47  e824020000           CALL 0x0040bd70
0040bb4c  83c40c               ADD ESP,0xc
0040bb4f  8b07                 MOV EAX,dword ptr [EDI]
0040bb51  03c6                 ADD EAX,ESI
0040bb53  f6400480             TEST byte ptr [EAX + 0x4],0x80
0040bb57  0f8451010000         JZ 0x0040bcae
0040bb5d  8bac2434040000       MOV EBP,dword ptr [ESP + 0x434]
0040bb64  c744241800000000     MOV dword ptr [ESP + 0x18],0x0
0040bb6c  85db                 TEST EBX,EBX
0040bb6e  8bfd                 MOV EDI,EBP
0040bb70  0f8683000000         JBE 0x0040bbf9
0040bb76  8d442428             LEA EAX,[ESP + 0x28]
0040bb7a  8bcf                 MOV ECX,EDI
0040bb7c  2bcd                 SUB ECX,EBP
0040bb7e  3bcb                 CMP ECX,EBX
0040bb80  7328                 JNC 0x0040bbaa
0040bb82  8a0f                 MOV CL,byte ptr [EDI]
0040bb84  47                   INC EDI
0040bb85  80f90a               CMP CL,0xa
0040bb88  750d                 JNZ 0x0040bb97
0040bb8a  8b742420             MOV ESI,dword ptr [ESP + 0x20]
0040bb8e  c6000d               MOV byte ptr [EAX],0xd
0040bb91  46                   INC ESI
0040bb92  40                   INC EAX
0040bb93  89742420             MOV dword ptr [ESP + 0x20],ESI
0040bb97  8808                 MOV byte ptr [EAX],CL
0040bb99  40                   INC EAX
0040bb9a  8bd0                 MOV EDX,EAX
0040bb9c  8d4c2428             LEA ECX,[ESP + 0x28]
0040bba0  2bd1                 SUB EDX,ECX
0040bba2  81fa00040000         CMP EDX,0x400
0040bba8  7cd0                 JL 0x0040bb7a
0040bbaa  8bf0                 MOV ESI,EAX
0040bbac  8d542428             LEA EDX,[ESP + 0x28]
0040bbb0  8d44241c             LEA EAX,[ESP + 0x1c]
0040bbb4  2bf2                 SUB ESI,EDX
0040bbb6  8b542424             MOV EDX,dword ptr [ESP + 0x24]
0040bbba  6a00                 PUSH 0x0
0040bbbc  50                   PUSH EAX
0040bbbd  8d4c2430             LEA ECX,[ESP + 0x30]
0040bbc1  8b02                 MOV EAX,dword ptr [EDX]
0040bbc3  56                   PUSH ESI
0040bbc4  51                   PUSH ECX
0040bbc5  8b4c2424             MOV ECX,dword ptr [ESP + 0x24]
0040bbc9  8b1401               MOV EDX,dword ptr [ECX + EAX*0x1]
0040bbcc  52                   PUSH EDX
0040bbcd  ff1594e14000         CALL dword ptr [0x0040e194]
0040bbd3  85c0                 TEST EAX,EAX
0040bbd5  0f84c4000000         JZ 0x0040bc9f
0040bbdb  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
0040bbdf  8b542410             MOV EDX,dword ptr [ESP + 0x10]
0040bbe3  03d0                 ADD EDX,EAX
0040bbe5  3bc6                 CMP EAX,ESI
0040bbe7  89542410             MOV dword ptr [ESP + 0x10],EDX
0040bbeb  7c08                 JL 0x0040bbf5
0040bbed  8bc7                 MOV EAX,EDI
0040bbef  2bc5                 SUB EAX,EBP
0040bbf1  3bc3                 CMP EAX,EBX
0040bbf3  7281                 JC 0x0040bb76
0040bbf5  8b742414             MOV ESI,dword ptr [ESP + 0x14]
0040bbf9  8b442410             MOV EAX,dword ptr [ESP + 0x10]
0040bbfd  85c0                 TEST EAX,EAX
0040bbff  756d                 JNZ 0x0040bc6e
0040bc01  8b442418             MOV EAX,dword ptr [ESP + 0x18]
0040bc05  85c0                 TEST EAX,EAX
0040bc07  7439                 JZ 0x0040bc42
0040bc09  83f805               CMP EAX,0x5
0040bc0c  751d                 JNZ 0x0040bc2b
0040bc0e  a368344100           MOV [0x00413468],EAX
0040bc13  c7056434410009000000 MOV dword ptr [0x00413464],0x9
0040bc1d  83c8ff               OR EAX,0xffffffff
0040bc20  5f                   POP EDI
0040bc21  5e                   POP ESI
0040bc22  5d                   POP EBP
0040bc23  5b                   POP EBX
0040bc24  81c41c040000         ADD ESP,0x41c
0040bc2a  c3                   RET
0040bc2b  50                   PUSH EAX
0040bc2c  e80ff4ffff           CALL 0x0040b040
0040bc31  83c404               ADD ESP,0x4
0040bc34  83c8ff               OR EAX,0xffffffff
0040bc37  5f                   POP EDI
0040bc38  5e                   POP ESI
0040bc39  5d                   POP EBP
0040bc3a  5b                   POP EBX
0040bc3b  81c41c040000         ADD ESP,0x41c
0040bc41  c3                   RET
0040bc42  8b4c2424             MOV ECX,dword ptr [ESP + 0x24]
0040bc46  8b11                 MOV EDX,dword ptr [ECX]
0040bc48  f644160440           TEST byte ptr [ESI + EDX*0x1 + 0x4],0x40
0040bc4d  7413                 JZ 0x0040bc62
0040bc4f  807d001a             CMP byte ptr [EBP],0x1a
0040bc53  750d                 JNZ 0x0040bc62
0040bc55  33c0                 XOR EAX,EAX
0040bc57  5f                   POP EDI
0040bc58  5e                   POP ESI
0040bc59  5d                   POP EBP
0040bc5a  5b                   POP EBX
0040bc5b  81c41c040000         ADD ESP,0x41c
0040bc61  c3                   RET
0040bc62  c705643441001c000000 MOV dword ptr [0x00413464],0x1c
0040bc6c  eb19                 JMP 0x0040bc87
0040bc6e  2b442420             SUB EAX,dword ptr [ESP + 0x20]
0040bc72  5f                   POP EDI
0040bc73  5e                   POP ESI
0040bc74  5d                   POP EBP
0040bc75  5b                   POP EBX
0040bc76  81c41c040000         ADD ESP,0x41c
0040bc7c  c3                   RET
0040bc7d  c7056434410009000000 MOV dword ptr [0x00413464],0x9
0040bc87  5f                   POP EDI
0040bc88  5e                   POP ESI
0040bc89  5d                   POP EBP
0040bc8a  c7056834410000000000 MOV dword ptr [0x00413468],0x0
0040bc94  83c8ff               OR EAX,0xffffffff
0040bc97  5b                   POP EBX
0040bc98  81c41c040000         ADD ESP,0x41c
0040bc9e  c3                   RET
0040bc9f  ff150ce24000         CALL dword ptr [0x0040e20c]
0040bca5  89442418             MOV dword ptr [ESP + 0x18],EAX
0040bca9  e947ffffff           JMP 0x0040bbf5
0040bcae  8b10                 MOV EDX,dword ptr [EAX]
0040bcb0  8d4c241c             LEA ECX,[ESP + 0x1c]
0040bcb4  55                   PUSH EBP
0040bcb5  8bac2438040000       MOV EBP,dword ptr [ESP + 0x438]
0040bcbc  51                   PUSH ECX
0040bcbd  53                   PUSH EBX
0040bcbe  55                   PUSH EBP
0040bcbf  52                   PUSH EDX
0040bcc0  ff1594e14000         CALL dword ptr [0x0040e194]
0040bcc6  85c0                 TEST EAX,EAX
0040bcc8  7415                 JZ 0x0040bcdf
0040bcca  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
0040bcce  c744241800000000     MOV dword ptr [ESP + 0x18],0x0
0040bcd6  89442410             MOV dword ptr [ESP + 0x10],EAX
0040bcda  e91affffff           JMP 0x0040bbf9
0040bcdf  ff150ce24000         CALL dword ptr [0x0040e20c]
0040bce5  89442418             MOV dword ptr [ESP + 0x18],EAX
0040bce9  e90bffffff           JMP 0x0040bbf9
; undefined 2 bytes at 0040bcee

; ==== FUNCTION FUN_0040bcf0 entry=0040bcf0 sig=int __cdecl FUN_0040bcf0(uint param_1, int param_2)
0040bcf0  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040bcf4  8b0d003e4100         MOV ECX,dword ptr [0x00413e00]
0040bcfa  3bc1                 CMP EAX,ECX
0040bcfc  56                   PUSH ESI
0040bcfd  7360                 JNC 0x0040bd5f
0040bcff  8bc8                 MOV ECX,EAX
0040bd01  83e01f               AND EAX,0x1f
0040bd04  c1f905               SAR ECX,0x5
0040bd07  8b148d003d4100       MOV EDX,dword ptr [ECX*0x4 + 0x413d00]
0040bd0e  8a4cc204             MOV CL,byte ptr [EDX + EAX*0x8 + 0x4]
0040bd12  f6c101               TEST CL,0x1
0040bd15  8d54c204             LEA EDX,[EDX + EAX*0x8 + 0x4]
0040bd19  7444                 JZ 0x0040bd5f
0040bd1b  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
0040bd1f  8ac1                 MOV AL,CL
0040bd21  2580000000           AND EAX,0x80
0040bd26  81fe00800000         CMP ESI,0x8000
0040bd2c  7505                 JNZ 0x0040bd33
0040bd2e  80e17f               AND CL,0x7f
0040bd31  eb0b                 JMP 0x0040bd3e
0040bd33  81fe00400000         CMP ESI,0x4000
0040bd39  7515                 JNZ 0x0040bd50
0040bd3b  80c980               OR CL,0x80
0040bd3e  f7d8                 NEG EAX
0040bd40  1bc0                 SBB EAX,EAX
0040bd42  880a                 MOV byte ptr [EDX],CL
0040bd44  2500c0ffff           AND EAX,0xffffc000
0040bd49  0500800000           ADD EAX,0x8000
0040bd4e  5e                   POP ESI
0040bd4f  c3                   RET
0040bd50  c7056434410016000000 MOV dword ptr [0x00413464],0x16
0040bd5a  83c8ff               OR EAX,0xffffffff
0040bd5d  5e                   POP ESI
0040bd5e  c3                   RET
0040bd5f  c7056434410009000000 MOV dword ptr [0x00413464],0x9
0040bd69  83c8ff               OR EAX,0xffffffff
0040bd6c  5e                   POP ESI
0040bd6d  c3                   RET
; undefined 2 bytes at 0040bd6e

; ==== FUNCTION FUN_0040bd70 entry=0040bd70 sig=DWORD __cdecl FUN_0040bd70(uint param_1, LONG param_2, DWORD param_3)
0040bd70  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040bd74  8b0d003e4100         MOV ECX,dword ptr [0x00413e00]
0040bd7a  53                   PUSH EBX
0040bd7b  56                   PUSH ESI
0040bd7c  3bc1                 CMP EAX,ECX
0040bd7e  57                   PUSH EDI
0040bd7f  0f838d000000         JNC 0x0040be12
0040bd85  8bc8                 MOV ECX,EAX
0040bd87  8bf0                 MOV ESI,EAX
0040bd89  c1f905               SAR ECX,0x5
0040bd8c  83e61f               AND ESI,0x1f
0040bd8f  8b148d003d4100       MOV EDX,dword ptr [ECX*0x4 + 0x413d00]
0040bd96  8d1c8d003d4100       LEA EBX,[ECX*0x4 + 0x413d00]
0040bd9d  c1e603               SHL ESI,0x3
0040bda0  f644320401           TEST byte ptr [EDX + ESI*0x1 + 0x4],0x1
0040bda5  746b                 JZ 0x0040be12
0040bda7  50                   PUSH EAX
0040bda8  e8d3faffff           CALL 0x0040b880
0040bdad  83c404               ADD ESP,0x4
0040bdb0  83f8ff               CMP EAX,-0x1
0040bdb3  7510                 JNZ 0x0040bdc5
0040bdb5  c7056434410009000000 MOV dword ptr [0x00413464],0x9
0040bdbf  0bc0                 OR EAX,EAX
0040bdc1  5f                   POP EDI
0040bdc2  5e                   POP ESI
0040bdc3  5b                   POP EBX
0040bdc4  c3                   RET
0040bdc5  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
0040bdc9  8b542414             MOV EDX,dword ptr [ESP + 0x14]
0040bdcd  51                   PUSH ECX
0040bdce  6a00                 PUSH 0x0
0040bdd0  52                   PUSH EDX
0040bdd1  50                   PUSH EAX
0040bdd2  ff1590e14000         CALL dword ptr [0x0040e190]
0040bdd8  8bf8                 MOV EDI,EAX
0040bdda  83ffff               CMP EDI,-0x1
0040bddd  7508                 JNZ 0x0040bde7
0040bddf  ff150ce24000         CALL dword ptr [0x0040e20c]
0040bde5  eb02                 JMP 0x0040bde9
0040bde7  33c0                 XOR EAX,EAX
0040bde9  85c0                 TEST EAX,EAX
0040bdeb  7410                 JZ 0x0040bdfd
0040bded  50                   PUSH EAX
0040bdee  e84df2ffff           CALL 0x0040b040
0040bdf3  83c404               ADD ESP,0x4
0040bdf6  83c8ff               OR EAX,0xffffffff
0040bdf9  5f                   POP EDI
0040bdfa  5e                   POP ESI
0040bdfb  5b                   POP EBX
0040bdfc  c3                   RET
0040bdfd  8b03                 MOV EAX,dword ptr [EBX]
0040bdff  8a4c3004             MOV CL,byte ptr [EAX + ESI*0x1 + 0x4]
0040be03  8d443004             LEA EAX,[EAX + ESI*0x1 + 0x4]
0040be07  80e1fd               AND CL,0xfd
0040be0a  8808                 MOV byte ptr [EAX],CL
0040be0c  8bc7                 MOV EAX,EDI
0040be0e  5f                   POP EDI
0040be0f  5e                   POP ESI
0040be10  5b                   POP EBX
0040be11  c3                   RET
0040be12  5f                   POP EDI
0040be13  5e                   POP ESI
0040be14  c7056434410009000000 MOV dword ptr [0x00413464],0x9
0040be1e  c7056834410000000000 MOV dword ptr [0x00413468],0x0
0040be28  83c8ff               OR EAX,0xffffffff
0040be2b  5b                   POP EBX
0040be2c  c3                   RET
; undefined 3 bytes at 0040be2d

; ==== FUNCTION FUN_0040be30 entry=0040be30 sig=int __cdecl FUN_0040be30(uint param_1, char * param_2, DWORD param_3)
0040be30  a1003e4100           MOV EAX,[0x00413e00]
0040be35  83ec0c               SUB ESP,0xc
0040be38  53                   PUSH EBX
0040be39  8b5c2414             MOV EBX,dword ptr [ESP + 0x14]
0040be3d  55                   PUSH EBP
0040be3e  56                   PUSH ESI
0040be3f  3bd8                 CMP EBX,EAX
0040be41  57                   PUSH EDI
0040be42  0f831d020000         JNC 0x0040c065
0040be48  8bc3                 MOV EAX,EBX
0040be4a  83e31f               AND EBX,0x1f
0040be4d  c1f805               SAR EAX,0x5
0040be50  c1e303               SHL EBX,0x3
0040be53  8b0c85003d4100       MOV ECX,dword ptr [EAX*0x4 + 0x413d00]
0040be5a  8d3485003d4100       LEA ESI,[EAX*0x4 + 0x413d00]
0040be61  89742414             MOV dword ptr [ESP + 0x14],ESI
0040be65  8d040b               LEA EAX,[EBX + ECX*0x1]
0040be68  89442410             MOV dword ptr [ESP + 0x10],EAX
0040be6c  8a5004               MOV DL,byte ptr [EAX + 0x4]
0040be6f  f6c201               TEST DL,0x1
0040be72  0f84ed010000         JZ 0x0040c065
0040be78  8b4c2428             MOV ECX,dword ptr [ESP + 0x28]
0040be7c  8b7c2424             MOV EDI,dword ptr [ESP + 0x24]
0040be80  33ed                 XOR EBP,EBP
0040be82  8bc7                 MOV EAX,EDI
0040be84  85c9                 TEST ECX,ECX
0040be86  0f84cf010000         JZ 0x0040c05b
0040be8c  f6c202               TEST DL,0x2
0040be8f  0f85c6010000         JNZ 0x0040c05b
0040be95  f6c248               TEST DL,0x48
0040be98  741e                 JZ 0x0040beb8
0040be9a  8b542410             MOV EDX,dword ptr [ESP + 0x10]
0040be9e  8a5205               MOV DL,byte ptr [EDX + 0x5]
0040bea1  80fa0a               CMP DL,0xa
0040bea4  7412                 JZ 0x0040beb8
0040bea6  8817                 MOV byte ptr [EDI],DL
0040bea8  8b16                 MOV EDX,dword ptr [ESI]
0040beaa  8d4701               LEA EAX,[EDI + 0x1]
0040bead  bd01000000           MOV EBP,0x1
0040beb2  49                   DEC ECX
0040beb3  c64413050a           MOV byte ptr [EBX + EDX*0x1 + 0x5],0xa
0040beb8  8d542410             LEA EDX,[ESP + 0x10]
0040bebc  6a00                 PUSH 0x0
0040bebe  52                   PUSH EDX
0040bebf  51                   PUSH ECX
0040bec0  50                   PUSH EAX
0040bec1  8b06                 MOV EAX,dword ptr [ESI]
0040bec3  8b0c03               MOV ECX,dword ptr [EBX + EAX*0x1]
0040bec6  51                   PUSH ECX
0040bec7  ff1598e14000         CALL dword ptr [0x0040e198]
0040becd  85c0                 TEST EAX,EAX
0040becf  7548                 JNZ 0x0040bf19
0040bed1  ff150ce24000         CALL dword ptr [0x0040e20c]
0040bed7  83f805               CMP EAX,0x5
0040beda  751a                 JNZ 0x0040bef6
0040bedc  a368344100           MOV [0x00413468],EAX
0040bee1  c7056434410009000000 MOV dword ptr [0x00413464],0x9
0040beeb  83c8ff               OR EAX,0xffffffff
0040beee  5f                   POP EDI
0040beef  5e                   POP ESI
0040bef0  5d                   POP EBP
0040bef1  5b                   POP EBX
0040bef2  83c40c               ADD ESP,0xc
0040bef5  c3                   RET
0040bef6  83f86d               CMP EAX,0x6d
0040bef9  750a                 JNZ 0x0040bf05
0040befb  33c0                 XOR EAX,EAX
0040befd  5f                   POP EDI
0040befe  5e                   POP ESI
0040beff  5d                   POP EBP
0040bf00  5b                   POP EBX
0040bf01  83c40c               ADD ESP,0xc
0040bf04  c3                   RET
0040bf05  50                   PUSH EAX
0040bf06  e835f1ffff           CALL 0x0040b040
0040bf0b  83c404               ADD ESP,0x4
0040bf0e  83c8ff               OR EAX,0xffffffff
0040bf11  5f                   POP EDI
0040bf12  5e                   POP ESI
0040bf13  5d                   POP EBP
0040bf14  5b                   POP EBX
0040bf15  83c40c               ADD ESP,0xc
0040bf18  c3                   RET
0040bf19  8b06                 MOV EAX,dword ptr [ESI]
0040bf1b  8b542410             MOV EDX,dword ptr [ESP + 0x10]
0040bf1f  03ea                 ADD EBP,EDX
0040bf21  8d4c0304             LEA ECX,[EBX + EAX*0x1 + 0x4]
0040bf25  8a440304             MOV AL,byte ptr [EBX + EAX*0x1 + 0x4]
0040bf29  a880                 TEST AL,0x80
0040bf2b  0f8420010000         JZ 0x0040c051
0040bf31  85d2                 TEST EDX,EDX
0040bf33  7409                 JZ 0x0040bf3e
0040bf35  803f0a               CMP byte ptr [EDI],0xa
0040bf38  7504                 JNZ 0x0040bf3e
0040bf3a  0c04                 OR AL,0x4
0040bf3c  eb02                 JMP 0x0040bf40
0040bf3e  24fb                 AND AL,0xfb
0040bf40  8801                 MOV byte ptr [ECX],AL
0040bf42  8b442424             MOV EAX,dword ptr [ESP + 0x24]
0040bf46  03e8                 ADD EBP,EAX
0040bf48  8bf7                 MOV ESI,EDI
0040bf4a  3bc5                 CMP EAX,EBP
0040bf4c  896c2418             MOV dword ptr [ESP + 0x18],EBP
0040bf50  0f83f5000000         JNC 0x0040c04b
0040bf56  8a07                 MOV AL,byte ptr [EDI]
0040bf58  3c1a                 CMP AL,0x1a
0040bf5a  0f84d5000000         JZ 0x0040c035
0040bf60  3c0d                 CMP AL,0xd
0040bf62  7409                 JZ 0x0040bf6d
0040bf64  8806                 MOV byte ptr [ESI],AL
0040bf66  46                   INC ESI
0040bf67  47                   INC EDI
0040bf68  e9ac000000           JMP 0x0040c019
0040bf6d  4d                   DEC EBP
0040bf6e  3bfd                 CMP EDI,EBP
0040bf70  731b                 JNC 0x0040bf8d
0040bf72  807f010a             CMP byte ptr [EDI + 0x1],0xa
0040bf76  750b                 JNZ 0x0040bf83
0040bf78  83c702               ADD EDI,0x2
0040bf7b  c6060a               MOV byte ptr [ESI],0xa
0040bf7e  e995000000           JMP 0x0040c018
0040bf83  c6060d               MOV byte ptr [ESI],0xd
0040bf86  46                   INC ESI
0040bf87  47                   INC EDI
0040bf88  e98c000000           JMP 0x0040c019
0040bf8d  8b442414             MOV EAX,dword ptr [ESP + 0x14]
0040bf91  33ed                 XOR EBP,EBP
0040bf93  8d4c2410             LEA ECX,[ESP + 0x10]
0040bf97  55                   PUSH EBP
0040bf98  51                   PUSH ECX
0040bf99  8b08                 MOV ECX,dword ptr [EAX]
0040bf9b  8d542430             LEA EDX,[ESP + 0x30]
0040bf9f  6a01                 PUSH 0x1
0040bfa1  52                   PUSH EDX
0040bfa2  8b140b               MOV EDX,dword ptr [EBX + ECX*0x1]
0040bfa5  52                   PUSH EDX
0040bfa6  47                   INC EDI
0040bfa7  ff1598e14000         CALL dword ptr [0x0040e198]
0040bfad  85c0                 TEST EAX,EAX
0040bfaf  7508                 JNZ 0x0040bfb9
0040bfb1  ff150ce24000         CALL dword ptr [0x0040e20c]
0040bfb7  8be8                 MOV EBP,EAX
0040bfb9  85ed                 TEST EBP,EBP
0040bfbb  7558                 JNZ 0x0040c015
0040bfbd  8b442410             MOV EAX,dword ptr [ESP + 0x10]
0040bfc1  85c0                 TEST EAX,EAX
0040bfc3  7450                 JZ 0x0040c015
0040bfc5  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
0040bfc9  8b01                 MOV EAX,dword ptr [ECX]
0040bfcb  f644030448           TEST byte ptr [EBX + EAX*0x1 + 0x4],0x48
0040bfd0  7418                 JZ 0x0040bfea
0040bfd2  8a442428             MOV AL,byte ptr [ESP + 0x28]
0040bfd6  3c0a                 CMP AL,0xa
0040bfd8  7504                 JNZ 0x0040bfde
0040bfda  8806                 MOV byte ptr [ESI],AL
0040bfdc  eb3a                 JMP 0x0040c018
0040bfde  c6060d               MOV byte ptr [ESI],0xd
0040bfe1  8b09                 MOV ECX,dword ptr [ECX]
0040bfe3  46                   INC ESI
0040bfe4  88440b05             MOV byte ptr [EBX + ECX*0x1 + 0x5],AL
0040bfe8  eb2f                 JMP 0x0040c019
0040bfea  3b742424             CMP ESI,dword ptr [ESP + 0x24]
0040bfee  750c                 JNZ 0x0040bffc
0040bff0  807c24280a           CMP byte ptr [ESP + 0x28],0xa
0040bff5  7505                 JNZ 0x0040bffc
0040bff7  c6060a               MOV byte ptr [ESI],0xa
0040bffa  eb1c                 JMP 0x0040c018
0040bffc  8b542420             MOV EDX,dword ptr [ESP + 0x20]
0040c000  6a01                 PUSH 0x1
0040c002  6aff                 PUSH -0x1
0040c004  52                   PUSH EDX
0040c005  e866fdffff           CALL 0x0040bd70
0040c00a  8a442434             MOV AL,byte ptr [ESP + 0x34]
0040c00e  83c40c               ADD ESP,0xc
0040c011  3c0a                 CMP AL,0xa
0040c013  7404                 JZ 0x0040c019
0040c015  c6060d               MOV byte ptr [ESI],0xd
0040c018  46                   INC ESI
0040c019  8b6c2418             MOV EBP,dword ptr [ESP + 0x18]
0040c01d  3bfd                 CMP EDI,EBP
0040c01f  0f8231ffffff         JC 0x0040bf56
0040c025  2b742424             SUB ESI,dword ptr [ESP + 0x24]
0040c029  8bee                 MOV EBP,ESI
0040c02b  8bc5                 MOV EAX,EBP
0040c02d  5f                   POP EDI
0040c02e  5e                   POP ESI
0040c02f  5d                   POP EBP
0040c030  5b                   POP EBX
0040c031  83c40c               ADD ESP,0xc
0040c034  c3                   RET
0040c035  8b442414             MOV EAX,dword ptr [ESP + 0x14]
0040c039  8b08                 MOV ECX,dword ptr [EAX]
0040c03b  8a440b04             MOV AL,byte ptr [EBX + ECX*0x1 + 0x4]
0040c03f  a840                 TEST AL,0x40
0040c041  8d5c0b04             LEA EBX,[EBX + ECX*0x1 + 0x4]
0040c045  7504                 JNZ 0x0040c04b
0040c047  0c02                 OR AL,0x2
0040c049  8803                 MOV byte ptr [EBX],AL
0040c04b  2b742424             SUB ESI,dword ptr [ESP + 0x24]
0040c04f  8bee                 MOV EBP,ESI
0040c051  8bc5                 MOV EAX,EBP
0040c053  5f                   POP EDI
0040c054  5e                   POP ESI
0040c055  5d                   POP EBP
0040c056  5b                   POP EBX
0040c057  83c40c               ADD ESP,0xc
0040c05a  c3                   RET
0040c05b  33c0                 XOR EAX,EAX
0040c05d  5f                   POP EDI
0040c05e  5e                   POP ESI
0040c05f  5d                   POP EBP
0040c060  5b                   POP EBX
0040c061  83c40c               ADD ESP,0xc
0040c064  c3                   RET
0040c065  5f                   POP EDI
0040c066  5e                   POP ESI
0040c067  5d                   POP EBP
0040c068  c7056434410009000000 MOV dword ptr [0x00413464],0x9
0040c072  c7056834410000000000 MOV dword ptr [0x00413468],0x0
0040c07c  83c8ff               OR EAX,0xffffffff
0040c07f  5b                   POP EBX
0040c080  83c40c               ADD ESP,0xc
0040c083  c3                   RET
; undefined 12 bytes at 0040c084

; ==== FUNCTION FUN_0040c090 entry=0040c090 sig=undefined4 __cdecl FUN_0040c090(undefined4 param_1)
0040c090  a1b8344100           MOV EAX,[0x004134b8]
0040c095  85c0                 TEST EAX,EAX
0040c097  7414                 JZ 0x0040c0ad
0040c099  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
0040c09d  51                   PUSH ECX
0040c09e  ffd0                 CALL EAX
0040c0a0  83c404               ADD ESP,0x4
0040c0a3  85c0                 TEST EAX,EAX
0040c0a5  7406                 JZ 0x0040c0ad
0040c0a7  b801000000           MOV EAX,0x1
0040c0ac  c3                   RET
0040c0ad  33c0                 XOR EAX,EAX
0040c0af  c3                   RET

; ==== FUNCTION FUN_0040c0b0 entry=0040c0b0 sig=undefined4 __stdcall FUN_0040c0b0(void)
0040c0b0  6a00                 PUSH 0x0
0040c0b2  6800100000           PUSH 0x1000
0040c0b7  6a01                 PUSH 0x1
0040c0b9  ff157ce14000         CALL dword ptr [0x0040e17c]
0040c0bf  85c0                 TEST EAX,EAX
0040c0c1  a3e43c4100           MOV [0x00413ce4],EAX
0040c0c6  7501                 JNZ 0x0040c0c9
0040c0c8  c3                   RET
0040c0c9  e822000000           CALL 0x0040c0f0
0040c0ce  85c0                 TEST EAX,EAX
0040c0d0  750f                 JNZ 0x0040c0e1
0040c0d2  a1e43c4100           MOV EAX,[0x00413ce4]
0040c0d7  50                   PUSH EAX
0040c0d8  ff1580e14000         CALL dword ptr [0x0040e180]
0040c0de  33c0                 XOR EAX,EAX
0040c0e0  c3                   RET
0040c0e1  b801000000           MOV EAX,0x1
0040c0e6  c3                   RET
; undefined 9 bytes at 0040c0e7

; ==== FUNCTION FUN_0040c0f0 entry=0040c0f0 sig=undefined * * __stdcall FUN_0040c0f0(void)
0040c0f0  a1e0114100           MOV EAX,[0x004111e0]
0040c0f5  55                   PUSH EBP
0040c0f6  56                   PUSH ESI
0040c0f7  83f8ff               CMP EAX,-0x1
0040c0fa  57                   PUSH EDI
0040c0fb  7507                 JNZ 0x0040c104
0040c0fd  bdd0114100           MOV EBP,0x4111d0
0040c102  eb1d                 JMP 0x0040c121
0040c104  a1e43c4100           MOV EAX,[0x00413ce4]
0040c109  6820200000           PUSH 0x2020
0040c10e  6a00                 PUSH 0x0
0040c110  50                   PUSH EAX
0040c111  ff15dce14000         CALL dword ptr [0x0040e1dc]
0040c117  8be8                 MOV EBP,EAX
0040c119  85ed                 TEST EBP,EBP
0040c11b  0f842b010000         JZ 0x0040c24c
0040c121  8b3d74e14000         MOV EDI,dword ptr [0x0040e174]
0040c127  6a04                 PUSH 0x4
0040c129  6800200000           PUSH 0x2000
0040c12e  6800004000           PUSH 0x400000
0040c133  6a00                 PUSH 0x0
0040c135  ffd7                 CALL EDI
0040c137  8bf0                 MOV ESI,EAX
0040c139  85f6                 TEST ESI,ESI
0040c13b  0f84f4000000         JZ 0x0040c235
0040c141  6a04                 PUSH 0x4
0040c143  6800100000           PUSH 0x1000
0040c148  6800000100           PUSH 0x10000
0040c14d  56                   PUSH ESI
0040c14e  ffd7                 CALL EDI
0040c150  85c0                 TEST EAX,EAX
0040c152  0f84cf000000         JZ 0x0040c227
0040c158  81fdd0114100         CMP EBP,0x4111d0
0040c15e  7528                 JNZ 0x0040c188
0040c160  a1d0114100           MOV EAX,[0x004111d0]
0040c165  85c0                 TEST EAX,EAX
0040c167  750a                 JNZ 0x0040c173
0040c169  c705d0114100d0114100 MOV dword ptr [0x004111d0],0x4111d0
0040c173  a1d4114100           MOV EAX,[0x004111d4]
0040c178  85c0                 TEST EAX,EAX
0040c17a  7527                 JNZ 0x0040c1a3
0040c17c  c705d4114100d0114100 MOV dword ptr [0x004111d4],0x4111d0
0040c186  eb1b                 JMP 0x0040c1a3
0040c188  c74500d0114100       MOV dword ptr [EBP],0x4111d0
0040c18f  8b0dd4114100         MOV ECX,dword ptr [0x004111d4]
0040c195  894d04               MOV dword ptr [EBP + 0x4],ECX
0040c198  892dd4114100         MOV dword ptr [0x004111d4],EBP
0040c19e  8b5504               MOV EDX,dword ptr [EBP + 0x4]
0040c1a1  892a                 MOV dword ptr [EDX],EBP
0040c1a3  8d8600004000         LEA EAX,[ESI + 0x400000]
0040c1a9  8d4d18               LEA ECX,[EBP + 0x18]
0040c1ac  8d9598000000         LEA EDX,[EBP + 0x98]
0040c1b2  894514               MOV dword ptr [EBP + 0x14],EAX
0040c1b5  897510               MOV dword ptr [EBP + 0x10],ESI
0040c1b8  894d08               MOV dword ptr [EBP + 0x8],ECX
0040c1bb  89550c               MOV dword ptr [EBP + 0xc],EDX
0040c1be  33c0                 XOR EAX,EAX
0040c1c0  bff1000000           MOV EDI,0xf1
0040c1c5  33d2                 XOR EDX,EDX
0040c1c7  83f810               CMP EAX,0x10
0040c1ca  0f9dc2               SETGE DL
0040c1cd  4a                   DEC EDX
0040c1ce  83c108               ADD ECX,0x8
0040c1d1  23d7                 AND EDX,EDI
0040c1d3  4a                   DEC EDX
0040c1d4  40                   INC EAX
0040c1d5  8951f8               MOV dword ptr [ECX + -0x8],EDX
0040c1d8  8979fc               MOV dword ptr [ECX + -0x4],EDI
0040c1db  3d00040000           CMP EAX,0x400
0040c1e0  7ce3                 JL 0x0040c1c5
0040c1e2  b900400000           MOV ECX,0x4000
0040c1e7  33c0                 XOR EAX,EAX
0040c1e9  8bfe                 MOV EDI,ESI
0040c1eb  f3ab                 STOSD.REP ES:EDI
0040c1ed  8b4510               MOV EAX,dword ptr [EBP + 0x10]
0040c1f0  0500000100           ADD EAX,0x10000
0040c1f5  3bf0                 CMP ESI,EAX
0040c1f7  7328                 JNC 0x0040c221
0040c1f9  b9f0000000           MOV ECX,0xf0
0040c1fe  b0ff                 MOV AL,0xff
0040c200  8d5608               LEA EDX,[ESI + 0x8]
0040c203  894e04               MOV dword ptr [ESI + 0x4],ECX
0040c206  8916                 MOV dword ptr [ESI],EDX
0040c208  8886f8000000         MOV byte ptr [ESI + 0xf8],AL
0040c20e  8b5510               MOV EDX,dword ptr [EBP + 0x10]
0040c211  81c600100000         ADD ESI,0x1000
0040c217  81c200000100         ADD EDX,0x10000
0040c21d  3bf2                 CMP ESI,EDX
0040c21f  72df                 JC 0x0040c200
0040c221  8bc5                 MOV EAX,EBP
0040c223  5f                   POP EDI
0040c224  5e                   POP ESI
0040c225  5d                   POP EBP
0040c226  c3                   RET
0040c227  6800800000           PUSH 0x8000
0040c22c  6a00                 PUSH 0x0
0040c22e  56                   PUSH ESI
0040c22f  ff1578e14000         CALL dword ptr [0x0040e178]
0040c235  81fdd0114100         CMP EBP,0x4111d0
0040c23b  740f                 JZ 0x0040c24c
0040c23d  a1e43c4100           MOV EAX,[0x00413ce4]
0040c242  55                   PUSH EBP
0040c243  6a00                 PUSH 0x0
0040c245  50                   PUSH EAX
0040c246  ff15d8e14000         CALL dword ptr [0x0040e1d8]
0040c24c  5f                   POP EDI
0040c24d  5e                   POP ESI
0040c24e  33c0                 XOR EAX,EAX
0040c250  5d                   POP EBP
0040c251  c3                   RET
; undefined 14 bytes at 0040c252

; ==== FUNCTION FUN_0040c260 entry=0040c260 sig=undefined __cdecl FUN_0040c260(undefined * * param_1)
0040c260  56                   PUSH ESI
0040c261  8b742408             MOV ESI,dword ptr [ESP + 0x8]
0040c265  6800800000           PUSH 0x8000
0040c26a  6a00                 PUSH 0x0
0040c26c  8b4610               MOV EAX,dword ptr [ESI + 0x10]
0040c26f  50                   PUSH EAX
0040c270  ff1578e14000         CALL dword ptr [0x0040e178]
0040c276  3935f0314100         CMP dword ptr [0x004131f0],ESI
0040c27c  7509                 JNZ 0x0040c287
0040c27e  8b4e04               MOV ECX,dword ptr [ESI + 0x4]
0040c281  890df0314100         MOV dword ptr [0x004131f0],ECX
0040c287  81fed0114100         CMP ESI,0x4111d0
0040c28d  7420                 JZ 0x0040c2af
0040c28f  8b5604               MOV EDX,dword ptr [ESI + 0x4]
0040c292  8b06                 MOV EAX,dword ptr [ESI]
0040c294  56                   PUSH ESI
0040c295  6a00                 PUSH 0x0
0040c297  8902                 MOV dword ptr [EDX],EAX
0040c299  8b0e                 MOV ECX,dword ptr [ESI]
0040c29b  8b5604               MOV EDX,dword ptr [ESI + 0x4]
0040c29e  895104               MOV dword ptr [ECX + 0x4],EDX
0040c2a1  a1e43c4100           MOV EAX,[0x00413ce4]
0040c2a6  50                   PUSH EAX
0040c2a7  ff15d8e14000         CALL dword ptr [0x0040e1d8]
0040c2ad  5e                   POP ESI
0040c2ae  c3                   RET
0040c2af  c705e0114100ffffffff MOV dword ptr [0x004111e0],0xffffffff
0040c2b9  5e                   POP ESI
0040c2ba  c3                   RET
; undefined 5 bytes at 0040c2bb

; ==== FUNCTION FUN_0040c2c0 entry=0040c2c0 sig=undefined __cdecl FUN_0040c2c0(int param_1)
0040c2c0  53                   PUSH EBX
0040c2c1  55                   PUSH EBP
0040c2c2  56                   PUSH ESI
0040c2c3  57                   PUSH EDI
0040c2c4  8b3dd4114100         MOV EDI,dword ptr [0x004111d4]
0040c2ca  837f10ff             CMP dword ptr [EDI + 0x10],-0x1
0040c2ce  0f84a0000000         JZ 0x0040c374
0040c2d4  33ed                 XOR EBP,EBP
0040c2d6  8db710200000         LEA ESI,[EDI + 0x2010]
0040c2dc  bb00f03f00           MOV EBX,0x3ff000
0040c2e1  813ef0000000         CMP dword ptr [ESI],0xf0
0040c2e7  7547                 JNZ 0x0040c330
0040c2e9  8b4710               MOV EAX,dword ptr [EDI + 0x10]
0040c2ec  6800400000           PUSH 0x4000
0040c2f1  03c3                 ADD EAX,EBX
0040c2f3  6800100000           PUSH 0x1000
0040c2f8  50                   PUSH EAX
0040c2f9  ff1578e14000         CALL dword ptr [0x0040e178]
0040c2ff  85c0                 TEST EAX,EAX
0040c301  742d                 JZ 0x0040c330
0040c303  c706ffffffff         MOV dword ptr [ESI],0xffffffff
0040c309  8b15bc344100         MOV EDX,dword ptr [0x004134bc]
0040c30f  4a                   DEC EDX
0040c310  8915bc344100         MOV dword ptr [0x004134bc],EDX
0040c316  8b470c               MOV EAX,dword ptr [EDI + 0xc]
0040c319  85c0                 TEST EAX,EAX
0040c31b  7404                 JZ 0x0040c321
0040c31d  3bc6                 CMP EAX,ESI
0040c31f  7603                 JBE 0x0040c324
0040c321  89770c               MOV dword ptr [EDI + 0xc],ESI
0040c324  8b442414             MOV EAX,dword ptr [ESP + 0x14]
0040c328  45                   INC EBP
0040c329  48                   DEC EAX
0040c32a  89442414             MOV dword ptr [ESP + 0x14],EAX
0040c32e  740d                 JZ 0x0040c33d
0040c330  81eb00100000         SUB EBX,0x1000
0040c336  83ee08               SUB ESI,0x8
0040c339  85db                 TEST EBX,EBX
0040c33b  7da4                 JGE 0x0040c2e1
0040c33d  8bd7                 MOV EDX,EDI
0040c33f  8b7f04               MOV EDI,dword ptr [EDI + 0x4]
0040c342  85ed                 TEST EBP,EBP
0040c344  742e                 JZ 0x0040c374
0040c346  837a18ff             CMP dword ptr [EDX + 0x18],-0x1
0040c34a  7528                 JNZ 0x0040c374
0040c34c  b801000000           MOV EAX,0x1
0040c351  8d4a20               LEA ECX,[EDX + 0x20]
0040c354  8339ff               CMP dword ptr [ECX],-0x1
0040c357  750b                 JNZ 0x0040c364
0040c359  40                   INC EAX
0040c35a  83c108               ADD ECX,0x8
0040c35d  3d00040000           CMP EAX,0x400
0040c362  7cf0                 JL 0x0040c354
0040c364  3d00040000           CMP EAX,0x400
0040c369  7509                 JNZ 0x0040c374
0040c36b  52                   PUSH EDX
0040c36c  e8effeffff           CALL 0x0040c260
0040c371  83c404               ADD ESP,0x4
0040c374  3b3dd4114100         CMP EDI,dword ptr [0x004111d4]
0040c37a  740c                 JZ 0x0040c388
0040c37c  8b442414             MOV EAX,dword ptr [ESP + 0x14]
0040c380  85c0                 TEST EAX,EAX
0040c382  0f8f42ffffff         JG 0x0040c2ca
0040c388  5f                   POP EDI
0040c389  5e                   POP ESI
0040c38a  5d                   POP EBP
0040c38b  5b                   POP EBX
0040c38c  c3                   RET
; undefined 3 bytes at 0040c38d

; ==== FUNCTION FUN_0040c390 entry=0040c390 sig=int __cdecl FUN_0040c390(undefined * param_1, undefined4 * param_2, uint * param_3)
0040c390  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
0040c394  b8d0114100           MOV EAX,0x4111d0
0040c399  3b4810               CMP ECX,dword ptr [EAX + 0x10]
0040c39c  7605                 JBE 0x0040c3a3
0040c39e  3b4814               CMP ECX,dword ptr [EAX + 0x14]
0040c3a1  720b                 JC 0x0040c3ae
0040c3a3  8b00                 MOV EAX,dword ptr [EAX]
0040c3a5  3dd0114100           CMP EAX,0x4111d0
0040c3aa  743a                 JZ 0x0040c3e6
0040c3ac  ebeb                 JMP 0x0040c399
0040c3ae  f6c10f               TEST CL,0xf
0040c3b1  7533                 JNZ 0x0040c3e6
0040c3b3  8bd1                 MOV EDX,ECX
0040c3b5  81e2ff0f0000         AND EDX,0xfff
0040c3bb  81fa00010000         CMP EDX,0x100
0040c3c1  7223                 JC 0x0040c3e6
0040c3c3  8b542408             MOV EDX,dword ptr [ESP + 0x8]
0040c3c7  8902                 MOV dword ptr [EDX],EAX
0040c3c9  8b54240c             MOV EDX,dword ptr [ESP + 0xc]
0040c3cd  8bc1                 MOV EAX,ECX
0040c3cf  2500f0ffff           AND EAX,0xfffff000
0040c3d4  2bc8                 SUB ECX,EAX
0040c3d6  8902                 MOV dword ptr [EDX],EAX
0040c3d8  81e900010000         SUB ECX,0x100
0040c3de  c1f904               SAR ECX,0x4
0040c3e1  8d440108             LEA EAX,[ECX + EAX*0x1 + 0x8]
0040c3e5  c3                   RET
0040c3e6  33c0                 XOR EAX,EAX
0040c3e8  c3                   RET
; undefined 7 bytes at 0040c3e9

; ==== FUNCTION FUN_0040c3f0 entry=0040c3f0 sig=undefined __cdecl FUN_0040c3f0(int param_1, int param_2, byte * param_3)
0040c3f0  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040c3f4  8b4c2408             MOV ECX,dword ptr [ESP + 0x8]
0040c3f8  56                   PUSH ESI
0040c3f9  33d2                 XOR EDX,EDX
0040c3fb  2b4810               SUB ECX,dword ptr [EAX + 0x10]
0040c3fe  c1f90c               SAR ECX,0xc
0040c401  8b74c818             MOV ESI,dword ptr [EAX + ECX*0x8 + 0x18]
0040c405  8d44c818             LEA EAX,[EAX + ECX*0x8 + 0x18]
0040c409  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
0040c40d  8a11                 MOV DL,byte ptr [ECX]
0040c40f  03f2                 ADD ESI,EDX
0040c411  8930                 MOV dword ptr [EAX],ESI
0040c413  c60100               MOV byte ptr [ECX],0x0
0040c416  8b08                 MOV ECX,dword ptr [EAX]
0040c418  c74004f1000000       MOV dword ptr [EAX + 0x4],0xf1
0040c41f  81f9f0000000         CMP ECX,0xf0
0040c425  751a                 JNZ 0x0040c441
0040c427  a1bc344100           MOV EAX,[0x004134bc]
0040c42c  40                   INC EAX
0040c42d  83f820               CMP EAX,0x20
0040c430  a3bc344100           MOV [0x004134bc],EAX
0040c435  750a                 JNZ 0x0040c441
0040c437  6a10                 PUSH 0x10
0040c439  e882feffff           CALL 0x0040c2c0
0040c43e  83c404               ADD ESP,0x4
0040c441  5e                   POP ESI
0040c442  c3                   RET
; undefined 13 bytes at 0040c443

; ==== FUNCTION FUN_0040c450 entry=0040c450 sig=int * __cdecl FUN_0040c450(uint param_1)
0040c450  51                   PUSH ECX
0040c451  8b0df0314100         MOV ECX,dword ptr [0x004131f0]
0040c457  53                   PUSH EBX
0040c458  8b5c240c             MOV EBX,dword ptr [ESP + 0xc]
0040c45c  55                   PUSH EBP
0040c45d  56                   PUSH ESI
0040c45e  57                   PUSH EDI
0040c45f  894c2410             MOV dword ptr [ESP + 0x10],ECX
0040c463  8b4110               MOV EAX,dword ptr [ECX + 0x10]
0040c466  83f8ff               CMP EAX,-0x1
0040c469  0f8485000000         JZ 0x0040c4f4
0040c46f  8b7908               MOV EDI,dword ptr [ECX + 0x8]
0040c472  8da918200000         LEA EBP,[ECX + 0x2018]
0040c478  8bf7                 MOV ESI,EDI
0040c47a  2bf1                 SUB ESI,ECX
0040c47c  83ee18               SUB ESI,0x18
0040c47f  c1fe03               SAR ESI,0x3
0040c482  c1e60c               SHL ESI,0xc
0040c485  03f0                 ADD ESI,EAX
0040c487  3bfd                 CMP EDI,EBP
0040c489  732e                 JNC 0x0040c4b9
0040c48b  8b07                 MOV EAX,dword ptr [EDI]
0040c48d  3bc3                 CMP EAX,EBX
0040c48f  7c1b                 JL 0x0040c4ac
0040c491  395f04               CMP dword ptr [EDI + 0x4],EBX
0040c494  7616                 JBE 0x0040c4ac
0040c496  53                   PUSH EBX
0040c497  50                   PUSH EAX
0040c498  56                   PUSH ESI
0040c499  e8f2010000           CALL 0x0040c690
0040c49e  83c40c               ADD ESP,0xc
0040c4a1  85c0                 TEST EAX,EAX
0040c4a3  7563                 JNZ 0x0040c508
0040c4a5  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
0040c4a9  895f04               MOV dword ptr [EDI + 0x4],EBX
0040c4ac  83c708               ADD EDI,0x8
0040c4af  81c600100000         ADD ESI,0x1000
0040c4b5  3bfd                 CMP EDI,EBP
0040c4b7  72d2                 JC 0x0040c48b
0040c4b9  8b6908               MOV EBP,dword ptr [ECX + 0x8]
0040c4bc  8b7910               MOV EDI,dword ptr [ECX + 0x10]
0040c4bf  8d7118               LEA ESI,[ECX + 0x18]
0040c4c2  3bf5                 CMP ESI,EBP
0040c4c4  732e                 JNC 0x0040c4f4
0040c4c6  8b06                 MOV EAX,dword ptr [ESI]
0040c4c8  3bc3                 CMP EAX,EBX
0040c4ca  7c1b                 JL 0x0040c4e7
0040c4cc  395e04               CMP dword ptr [ESI + 0x4],EBX
0040c4cf  7616                 JBE 0x0040c4e7
0040c4d1  53                   PUSH EBX
0040c4d2  50                   PUSH EAX
0040c4d3  57                   PUSH EDI
0040c4d4  e8b7010000           CALL 0x0040c690
0040c4d9  83c40c               ADD ESP,0xc
0040c4dc  85c0                 TEST EAX,EAX
0040c4de  7541                 JNZ 0x0040c521
0040c4e0  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
0040c4e4  895e04               MOV dword ptr [ESI + 0x4],EBX
0040c4e7  83c608               ADD ESI,0x8
0040c4ea  81c700100000         ADD EDI,0x1000
0040c4f0  3bf5                 CMP ESI,EBP
0040c4f2  72d2                 JC 0x0040c4c6
0040c4f4  8b09                 MOV ECX,dword ptr [ECX]
0040c4f6  a1f0314100           MOV EAX,[0x004131f0]
0040c4fb  3bc8                 CMP ECX,EAX
0040c4fd  894c2410             MOV dword ptr [ESP + 0x10],ECX
0040c501  7437                 JZ 0x0040c53a
0040c503  e95bffffff           JMP 0x0040c463
0040c508  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
0040c50c  890df0314100         MOV dword ptr [0x004131f0],ECX
0040c512  8b17                 MOV EDX,dword ptr [EDI]
0040c514  2bd3                 SUB EDX,EBX
0040c516  8917                 MOV dword ptr [EDI],EDX
0040c518  897908               MOV dword ptr [ECX + 0x8],EDI
0040c51b  5f                   POP EDI
0040c51c  5e                   POP ESI
0040c51d  5d                   POP EBP
0040c51e  5b                   POP EBX
0040c51f  59                   POP ECX
0040c520  c3                   RET
0040c521  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
0040c525  890df0314100         MOV dword ptr [0x004131f0],ECX
0040c52b  8b16                 MOV EDX,dword ptr [ESI]
0040c52d  2bd3                 SUB EDX,EBX
0040c52f  8916                 MOV dword ptr [ESI],EDX
0040c531  897108               MOV dword ptr [ECX + 0x8],ESI
0040c534  5f                   POP EDI
0040c535  5e                   POP ESI
0040c536  5d                   POP EBP
0040c537  5b                   POP EBX
0040c538  59                   POP ECX
0040c539  c3                   RET
0040c53a  bdd0114100           MOV EBP,0x4111d0
0040c53f  83c9ff               OR ECX,0xffffffff
0040c542  394d10               CMP dword ptr [EBP + 0x10],ECX
0040c545  7407                 JZ 0x0040c54e
0040c547  8b450c               MOV EAX,dword ptr [EBP + 0xc]
0040c54a  85c0                 TEST EAX,EAX
0040c54c  7511                 JNZ 0x0040c55f
0040c54e  8b6d00               MOV EBP,dword ptr [EBP]
0040c551  81fdd0114100         CMP EBP,0x4111d0
0040c557  0f84e0000000         JZ 0x0040c63d
0040c55d  ebe3                 JMP 0x0040c542
0040c55f  8b450c               MOV EAX,dword ptr [EBP + 0xc]
0040c562  8b7510               MOV ESI,dword ptr [EBP + 0x10]
0040c565  8bf8                 MOV EDI,EAX
0040c567  89442418             MOV dword ptr [ESP + 0x18],EAX
0040c56b  2bfd                 SUB EDI,EBP
0040c56d  8b10                 MOV EDX,dword ptr [EAX]
0040c56f  83ef18               SUB EDI,0x18
0040c572  c1ff03               SAR EDI,0x3
0040c575  c1e70c               SHL EDI,0xc
0040c578  03fe                 ADD EDI,ESI
0040c57a  33f6                 XOR ESI,ESI
0040c57c  3bd1                 CMP EDX,ECX
0040c57e  7510                 JNZ 0x0040c590
0040c580  83fe10               CMP ESI,0x10
0040c583  7d0b                 JGE 0x0040c590
0040c585  8b5008               MOV EDX,dword ptr [EAX + 0x8]
0040c588  83c008               ADD EAX,0x8
0040c58b  46                   INC ESI
0040c58c  3bd1                 CMP EDX,ECX
0040c58e  74f0                 JZ 0x0040c580
0040c590  8bc6                 MOV EAX,ESI
0040c592  6a04                 PUSH 0x4
0040c594  c1e00c               SHL EAX,0xc
0040c597  6800100000           PUSH 0x1000
0040c59c  50                   PUSH EAX
0040c59d  57                   PUSH EDI
0040c59e  89442420             MOV dword ptr [ESP + 0x20],EAX
0040c5a2  ff1574e14000         CALL dword ptr [0x0040e174]
0040c5a8  3bc7                 CMP EAX,EDI
0040c5aa  0f85cb000000         JNZ 0x0040c67b
0040c5b0  8b542418             MOV EDX,dword ptr [ESP + 0x18]
0040c5b4  8b442410             MOV EAX,dword ptr [ESP + 0x10]
0040c5b8  33c9                 XOR ECX,ECX
0040c5ba  85f6                 TEST ESI,ESI
0040c5bc  8bca                 MOV ECX,EDX
0040c5be  7e32                 JLE 0x0040c5f2
0040c5c0  8d4704               LEA EAX,[EDI + 0x4]
0040c5c3  8d5004               LEA EDX,[EAX + 0x4]
0040c5c6  c700f0000000         MOV dword ptr [EAX],0xf0
0040c5cc  8950fc               MOV dword ptr [EAX + -0x4],EDX
0040c5cf  c680f4000000ff       MOV byte ptr [EAX + 0xf4],0xff
0040c5d6  c701f0000000         MOV dword ptr [ECX],0xf0
0040c5dc  c74104f1000000       MOV dword ptr [ECX + 0x4],0xf1
0040c5e3  0500100000           ADD EAX,0x1000
0040c5e8  83c108               ADD ECX,0x8
0040c5eb  4e                   DEC ESI
0040c5ec  75d5                 JNZ 0x0040c5c3
0040c5ee  8b542418             MOV EDX,dword ptr [ESP + 0x18]
0040c5f2  8d8518200000         LEA EAX,[EBP + 0x2018]
0040c5f8  892df0314100         MOV dword ptr [0x004131f0],EBP
0040c5fe  3bc8                 CMP ECX,EAX
0040c600  730e                 JNC 0x0040c610
0040c602  8339ff               CMP dword ptr [ECX],-0x1
0040c605  7407                 JZ 0x0040c60e
0040c607  83c108               ADD ECX,0x8
0040c60a  3bc8                 CMP ECX,EAX
0040c60c  72f4                 JC 0x0040c602
0040c60e  3bc8                 CMP ECX,EAX
0040c610  1bc0                 SBB EAX,EAX
0040c612  23c1                 AND EAX,ECX
0040c614  89450c               MOV dword ptr [EBP + 0xc],EAX
0040c617  885f08               MOV byte ptr [EDI + 0x8],BL
0040c61a  895508               MOV dword ptr [EBP + 0x8],EDX
0040c61d  8b0a                 MOV ECX,dword ptr [EDX]
0040c61f  2bcb                 SUB ECX,EBX
0040c621  890a                 MOV dword ptr [EDX],ECX
0040c623  8b4704               MOV EAX,dword ptr [EDI + 0x4]
0040c626  2bc3                 SUB EAX,EBX
0040c628  8d4c1f08             LEA ECX,[EDI + EBX*0x1 + 0x8]
0040c62c  894704               MOV dword ptr [EDI + 0x4],EAX
0040c62f  890f                 MOV dword ptr [EDI],ECX
0040c631  8d8700010000         LEA EAX,[EDI + 0x100]
0040c637  5f                   POP EDI
0040c638  5e                   POP ESI
0040c639  5d                   POP EBP
0040c63a  5b                   POP EBX
0040c63b  59                   POP ECX
0040c63c  c3                   RET
0040c63d  e8aefaffff           CALL 0x0040c0f0
0040c642  85c0                 TEST EAX,EAX
0040c644  7435                 JZ 0x0040c67b
0040c646  8b4810               MOV ECX,dword ptr [EAX + 0x10]
0040c649  885908               MOV byte ptr [ECX + 0x8],BL
0040c64c  8d541908             LEA EDX,[ECX + EBX*0x1 + 0x8]
0040c650  a3f0314100           MOV [0x004131f0],EAX
0040c655  8911                 MOV dword ptr [ECX],EDX
0040c657  baf0000000           MOV EDX,0xf0
0040c65c  2bd3                 SUB EDX,EBX
0040c65e  81e3ff000000         AND EBX,0xff
0040c664  895104               MOV dword ptr [ECX + 0x4],EDX
0040c667  8b5018               MOV EDX,dword ptr [EAX + 0x18]
0040c66a  2bd3                 SUB EDX,EBX
0040c66c  895018               MOV dword ptr [EAX + 0x18],EDX
0040c66f  8d8100010000         LEA EAX,[ECX + 0x100]
0040c675  5f                   POP EDI
0040c676  5e                   POP ESI
0040c677  5d                   POP EBP
0040c678  5b                   POP EBX
0040c679  59                   POP ECX
0040c67a  c3                   RET
0040c67b  5f                   POP EDI
0040c67c  5e                   POP ESI
0040c67d  5d                   POP EBP
0040c67e  33c0                 XOR EAX,EAX
0040c680  5b                   POP EBX
0040c681  59                   POP ECX
0040c682  c3                   RET
; undefined 13 bytes at 0040c683

; ==== FUNCTION FUN_0040c690 entry=0040c690 sig=int __cdecl FUN_0040c690(int * param_1, uint param_2, uint param_3)
0040c690  8b54240c             MOV EDX,dword ptr [ESP + 0xc]
0040c694  53                   PUSH EBX
0040c695  55                   PUSH EBP
0040c696  56                   PUSH ESI
0040c697  57                   PUSH EDI
0040c698  8b7c2414             MOV EDI,dword ptr [ESP + 0x14]
0040c69c  8b4704               MOV EAX,dword ptr [EDI + 0x4]
0040c69f  8b0f                 MOV ECX,dword ptr [EDI]
0040c6a1  3bc2                 CMP EAX,EDX
0040c6a3  894c2414             MOV dword ptr [ESP + 0x14],ECX
0040c6a7  8bf1                 MOV ESI,ECX
0040c6a9  8d9ff8000000         LEA EBX,[EDI + 0xf8]
0040c6af  723a                 JC 0x0040c6eb
0040c6b1  8d0411               LEA EAX,[ECX + EDX*0x1]
0040c6b4  8811                 MOV byte ptr [ECX],DL
0040c6b6  3bc3                 CMP EAX,EBX
0040c6b8  7310                 JNC 0x0040c6ca
0040c6ba  8b37                 MOV ESI,dword ptr [EDI]
0040c6bc  8b4704               MOV EAX,dword ptr [EDI + 0x4]
0040c6bf  03f2                 ADD ESI,EDX
0040c6c1  2bc2                 SUB EAX,EDX
0040c6c3  8937                 MOV dword ptr [EDI],ESI
0040c6c5  894704               MOV dword ptr [EDI + 0x4],EAX
0040c6c8  eb0c                 JMP 0x0040c6d6
0040c6ca  8d5708               LEA EDX,[EDI + 0x8]
0040c6cd  c7470400000000       MOV dword ptr [EDI + 0x4],0x0
0040c6d4  8917                 MOV dword ptr [EDI],EDX
0040c6d6  8d047f               LEA EAX,[EDI + EDI*0x2]
0040c6d9  8d0480               LEA EAX,[EAX + EAX*0x4]
0040c6dc  8bd0                 MOV EDX,EAX
0040c6de  8d4108               LEA EAX,[ECX + 0x8]
0040c6e1  c1e004               SHL EAX,0x4
0040c6e4  2bc2                 SUB EAX,EDX
0040c6e6  5f                   POP EDI
0040c6e7  5e                   POP ESI
0040c6e8  5d                   POP EBP
0040c6e9  5b                   POP EBX
0040c6ea  c3                   RET
0040c6eb  03c1                 ADD EAX,ECX
0040c6ed  803800               CMP byte ptr [EAX],0x0
0040c6f0  7402                 JZ 0x0040c6f4
0040c6f2  8bf0                 MOV ESI,EAX
0040c6f4  8d0416               LEA EAX,[ESI + EDX*0x1]
0040c6f7  3bc3                 CMP EAX,EBX
0040c6f9  8b5c2418             MOV EBX,dword ptr [ESP + 0x18]
0040c6fd  7375                 JNC 0x0040c774
0040c6ff  8a06                 MOV AL,byte ptr [ESI]
0040c701  84c0                 TEST AL,AL
0040c703  753c                 JNZ 0x0040c741
0040c705  807e0100             CMP byte ptr [ESI + 0x1],0x0
0040c709  8d4601               LEA EAX,[ESI + 0x1]
0040c70c  b901000000           MOV ECX,0x1
0040c711  7507                 JNZ 0x0040c71a
0040c713  40                   INC EAX
0040c714  41                   INC ECX
0040c715  803800               CMP byte ptr [EAX],0x0
0040c718  74f9                 JZ 0x0040c713
0040c71a  3bca                 CMP ECX,EDX
0040c71c  7339                 JNC 0x0040c757
0040c71e  8b6c2414             MOV EBP,dword ptr [ESP + 0x14]
0040c722  3bf5                 CMP ESI,EBP
0040c724  7509                 JNZ 0x0040c72f
0040c726  894f04               MOV dword ptr [EDI + 0x4],ECX
0040c729  8bf0                 MOV ESI,EAX
0040c72b  8bcd                 MOV ECX,EBP
0040c72d  eb19                 JMP 0x0040c748
0040c72f  2bd9                 SUB EBX,ECX
0040c731  3bda                 CMP EBX,EDX
0040c733  0f82c2000000         JC 0x0040c7fb
0040c739  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
0040c73d  8bf0                 MOV ESI,EAX
0040c73f  eb07                 JMP 0x0040c748
0040c741  25ff000000           AND EAX,0xff
0040c746  03f0                 ADD ESI,EAX
0040c748  8d2c16               LEA EBP,[ESI + EDX*0x1]
0040c74b  8d87f8000000         LEA EAX,[EDI + 0xf8]
0040c751  3be8                 CMP EBP,EAX
0040c753  72aa                 JC 0x0040c6ff
0040c755  eb1d                 JMP 0x0040c774
0040c757  8d0416               LEA EAX,[ESI + EDX*0x1]
0040c75a  8d9ff8000000         LEA EBX,[EDI + 0xf8]
0040c760  3bc3                 CMP EAX,EBX
0040c762  7309                 JNC 0x0040c76d
0040c764  2bca                 SUB ECX,EDX
0040c766  8907                 MOV dword ptr [EDI],EAX
0040c768  894f04               MOV dword ptr [EDI + 0x4],ECX
0040c76b  eb79                 JMP 0x0040c7e6
0040c76d  8d4f08               LEA ECX,[EDI + 0x8]
0040c770  890f                 MOV dword ptr [EDI],ECX
0040c772  eb6b                 JMP 0x0040c7df
0040c774  8d6f08               LEA EBP,[EDI + 0x8]
0040c777  8bf5                 MOV ESI,EBP
0040c779  3bf1                 CMP ESI,ECX
0040c77b  737e                 JNC 0x0040c7fb
0040c77d  8d0c16               LEA ECX,[ESI + EDX*0x1]
0040c780  8d87f8000000         LEA EAX,[EDI + 0xf8]
0040c786  3bc8                 CMP ECX,EAX
0040c788  7371                 JNC 0x0040c7fb
0040c78a  8a06                 MOV AL,byte ptr [ESI]
0040c78c  84c0                 TEST AL,AL
0040c78e  7523                 JNZ 0x0040c7b3
0040c790  807e0100             CMP byte ptr [ESI + 0x1],0x0
0040c794  8d4601               LEA EAX,[ESI + 0x1]
0040c797  b901000000           MOV ECX,0x1
0040c79c  7507                 JNZ 0x0040c7a5
0040c79e  40                   INC EAX
0040c79f  41                   INC ECX
0040c7a0  803800               CMP byte ptr [EAX],0x0
0040c7a3  74f9                 JZ 0x0040c79e
0040c7a5  3bca                 CMP ECX,EDX
0040c7a7  731e                 JNC 0x0040c7c7
0040c7a9  2bd9                 SUB EBX,ECX
0040c7ab  3bda                 CMP EBX,EDX
0040c7ad  724c                 JC 0x0040c7fb
0040c7af  8bf0                 MOV ESI,EAX
0040c7b1  eb07                 JMP 0x0040c7ba
0040c7b3  25ff000000           AND EAX,0xff
0040c7b8  03f0                 ADD ESI,EAX
0040c7ba  3b742414             CMP ESI,dword ptr [ESP + 0x14]
0040c7be  72bd                 JC 0x0040c77d
0040c7c0  33c0                 XOR EAX,EAX
0040c7c2  5f                   POP EDI
0040c7c3  5e                   POP ESI
0040c7c4  5d                   POP EBP
0040c7c5  5b                   POP EBX
0040c7c6  c3                   RET
0040c7c7  8d0416               LEA EAX,[ESI + EDX*0x1]
0040c7ca  8d9ff8000000         LEA EBX,[EDI + 0xf8]
0040c7d0  3bc3                 CMP EAX,EBX
0040c7d2  7309                 JNC 0x0040c7dd
0040c7d4  2bca                 SUB ECX,EDX
0040c7d6  8907                 MOV dword ptr [EDI],EAX
0040c7d8  894f04               MOV dword ptr [EDI + 0x4],ECX
0040c7db  eb09                 JMP 0x0040c7e6
0040c7dd  892f                 MOV dword ptr [EDI],EBP
0040c7df  c7470400000000       MOV dword ptr [EDI + 0x4],0x0
0040c7e6  8d047f               LEA EAX,[EDI + EDI*0x2]
0040c7e9  8816                 MOV byte ptr [ESI],DL
0040c7eb  8d1480               LEA EDX,[EAX + EAX*0x4]
0040c7ee  8d4608               LEA EAX,[ESI + 0x8]
0040c7f1  c1e004               SHL EAX,0x4
0040c7f4  2bc2                 SUB EAX,EDX
0040c7f6  5f                   POP EDI
0040c7f7  5e                   POP ESI
0040c7f8  5d                   POP EBP
0040c7f9  5b                   POP EBX
0040c7fa  c3                   RET
0040c7fb  5f                   POP EDI
0040c7fc  5e                   POP ESI
0040c7fd  5d                   POP EBP
0040c7fe  33c0                 XOR EAX,EAX
0040c800  5b                   POP EBX
0040c801  c3                   RET
; undefined 14 bytes at 0040c802

; ==== FUNCTION FUN_0040c810 entry=0040c810 sig=LONG __cdecl FUN_0040c810(int param_1, _EXCEPTION_POINTERS * param_2)
0040c810  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040c814  53                   PUSH EBX
0040c815  55                   PUSH EBP
0040c816  56                   PUSH ESI
0040c817  50                   PUSH EAX
0040c818  e833010000           CALL 0x0040c950
0040c81d  83c404               ADD ESP,0x4
0040c820  85c0                 TEST EAX,EAX
0040c822  0f8417010000         JZ 0x0040c93f
0040c828  8b5808               MOV EBX,dword ptr [EAX + 0x8]
0040c82b  85db                 TEST EBX,EBX
0040c82d  0f840c010000         JZ 0x0040c93f
0040c833  83fb05               CMP EBX,0x5
0040c836  7510                 JNZ 0x0040c848
0040c838  c7400800000000       MOV dword ptr [EAX + 0x8],0x0
0040c83f  b801000000           MOV EAX,0x1
0040c844  5e                   POP ESI
0040c845  5d                   POP EBP
0040c846  5b                   POP EBX
0040c847  c3                   RET
0040c848  83fb01               CMP EBX,0x1
0040c84b  7507                 JNZ 0x0040c854
0040c84d  83c8ff               OR EAX,0xffffffff
0040c850  5e                   POP ESI
0040c851  5d                   POP EBP
0040c852  5b                   POP EBX
0040c853  c3                   RET
0040c854  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
0040c858  8b2dc0344100         MOV EBP,dword ptr [0x004134c0]
0040c85e  890dc0344100         MOV dword ptr [0x004134c0],ECX
0040c864  8b4804               MOV ECX,dword ptr [EAX + 0x4]
0040c867  83f908               CMP ECX,0x8
0040c86a  0f85b5000000         JNZ 0x0040c925
0040c870  8b3570324100         MOV ESI,dword ptr [0x00413270]
0040c876  8b1574324100         MOV EDX,dword ptr [0x00413274]
0040c87c  03d6                 ADD EDX,ESI
0040c87e  3bf2                 CMP ESI,EDX
0040c880  7d18                 JGE 0x0040c89a
0040c882  8d0c76               LEA ECX,[ESI + ESI*0x2]
0040c885  2bd6                 SUB EDX,ESI
0040c887  8d0c8d00324100       LEA ECX,[ECX*0x4 + 0x413200]
0040c88e  c70100000000         MOV dword ptr [ECX],0x0
0040c894  83c10c               ADD ECX,0xc
0040c897  4a                   DEC EDX
0040c898  75f4                 JNZ 0x0040c88e
0040c89a  8b00                 MOV EAX,dword ptr [EAX]
0040c89c  8b0d7c324100         MOV ECX,dword ptr [0x0041327c]
0040c8a2  3d8e0000c0           CMP EAX,0xc000008e
0040c8a7  8bf1                 MOV ESI,ECX
0040c8a9  7507                 JNZ 0x0040c8b2
0040c8ab  b983000000           MOV ECX,0x83
0040c8b0  eb52                 JMP 0x0040c904
0040c8b2  3d900000c0           CMP EAX,0xc0000090
0040c8b7  7507                 JNZ 0x0040c8c0
0040c8b9  b981000000           MOV ECX,0x81
0040c8be  eb44                 JMP 0x0040c904
0040c8c0  3d910000c0           CMP EAX,0xc0000091
0040c8c5  7507                 JNZ 0x0040c8ce
0040c8c7  b984000000           MOV ECX,0x84
0040c8cc  eb36                 JMP 0x0040c904
0040c8ce  3d930000c0           CMP EAX,0xc0000093
0040c8d3  7507                 JNZ 0x0040c8dc
0040c8d5  b985000000           MOV ECX,0x85
0040c8da  eb28                 JMP 0x0040c904
0040c8dc  3d8d0000c0           CMP EAX,0xc000008d
0040c8e1  7507                 JNZ 0x0040c8ea
0040c8e3  b982000000           MOV ECX,0x82
0040c8e8  eb1a                 JMP 0x0040c904
0040c8ea  3d8f0000c0           CMP EAX,0xc000008f
0040c8ef  7507                 JNZ 0x0040c8f8
0040c8f1  b986000000           MOV ECX,0x86
0040c8f6  eb0c                 JMP 0x0040c904
0040c8f8  3d920000c0           CMP EAX,0xc0000092
0040c8fd  750b                 JNZ 0x0040c90a
0040c8ff  b98a000000           MOV ECX,0x8a
0040c904  890d7c324100         MOV dword ptr [0x0041327c],ECX
0040c90a  51                   PUSH ECX
0040c90b  6a08                 PUSH 0x8
0040c90d  ffd3                 CALL EBX
0040c90f  83c408               ADD ESP,0x8
0040c912  89357c324100         MOV dword ptr [0x0041327c],ESI
0040c918  892dc0344100         MOV dword ptr [0x004134c0],EBP
0040c91e  83c8ff               OR EAX,0xffffffff
0040c921  5e                   POP ESI
0040c922  5d                   POP EBP
0040c923  5b                   POP EBX
0040c924  c3                   RET
0040c925  51                   PUSH ECX
0040c926  c7400800000000       MOV dword ptr [EAX + 0x8],0x0
0040c92d  ffd3                 CALL EBX
0040c92f  83c404               ADD ESP,0x4
0040c932  892dc0344100         MOV dword ptr [0x004134c0],EBP
0040c938  83c8ff               OR EAX,0xffffffff
0040c93b  5e                   POP ESI
0040c93c  5d                   POP EBP
0040c93d  5b                   POP EBX
0040c93e  c3                   RET
0040c93f  8b542414             MOV EDX,dword ptr [ESP + 0x14]
0040c943  52                   PUSH EDX
0040c944  ff1570e14000         CALL dword ptr [0x0040e170]
0040c94a  5e                   POP ESI
0040c94b  5d                   POP EBP
0040c94c  5b                   POP EBX
0040c94d  c3                   RET

; ==== FUNCTION FUN_0040c94e entry=0040c94e sig=undefined FUN_0040c94e(void)
0040c94e  90                   NOP
0040c94f  90                   NOP

; ==== FUNCTION FUN_0040c950 entry=0040c950 sig=int * __cdecl FUN_0040c950(int param_1)
0040c950  8b542404             MOV EDX,dword ptr [ESP + 0x4]
0040c954  8b0df8314100         MOV ECX,dword ptr [0x004131f8]
0040c95a  56                   PUSH ESI
0040c95b  8b3578324100         MOV ESI,dword ptr [0x00413278]
0040c961  3bca                 CMP ECX,EDX
0040c963  b8f8314100           MOV EAX,0x4131f8
0040c968  7415                 JZ 0x0040c97f
0040c96a  8d0c76               LEA ECX,[ESI + ESI*0x2]
0040c96d  8d0c8df8314100       LEA ECX,[ECX*0x4 + 0x4131f8]
0040c974  83c00c               ADD EAX,0xc
0040c977  3bc1                 CMP EAX,ECX
0040c979  7304                 JNC 0x0040c97f
0040c97b  3910                 CMP dword ptr [EAX],EDX
0040c97d  75f5                 JNZ 0x0040c974
0040c97f  8d0c76               LEA ECX,[ESI + ESI*0x2]
0040c982  8d0c8df8314100       LEA ECX,[ECX*0x4 + 0x4131f8]
0040c989  3bc1                 CMP EAX,ECX
0040c98b  7304                 JNC 0x0040c991
0040c98d  3910                 CMP dword ptr [EAX],EDX
0040c98f  7402                 JZ 0x0040c993
0040c991  33c0                 XOR EAX,EAX
0040c993  5e                   POP ESI
0040c994  c3                   RET

; ==== FUNCTION FUN_0040c995 entry=0040c995 sig=undefined FUN_0040c995(void)
0040c995  90                   NOP
0040c996  90                   NOP
0040c997  90                   NOP
0040c998  90                   NOP
0040c999  90                   NOP
0040c99a  90                   NOP
0040c99b  90                   NOP
0040c99c  90                   NOP
0040c99d  90                   NOP
0040c99e  90                   NOP
0040c99f  90                   NOP

; ==== FUNCTION FUN_0040c9a0 entry=0040c9a0 sig=undefined __cdecl FUN_0040c9a0(uint param_1)
0040c9a0  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040c9a4  6a04                 PUSH 0x4
0040c9a6  6a00                 PUSH 0x0
0040c9a8  50                   PUSH EAX
0040c9a9  e812000000           CALL 0x0040c9c0
0040c9ae  83c40c               ADD ESP,0xc
0040c9b1  c3                   RET
; undefined 14 bytes at 0040c9b2

; ==== FUNCTION FUN_0040c9c0 entry=0040c9c0 sig=undefined4 __cdecl FUN_0040c9c0(uint param_1, uint param_2, byte param_3)
0040c9c0  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040c9c4  8a4c240c             MOV CL,byte ptr [ESP + 0xc]
0040c9c8  25ff000000           AND EAX,0xff
0040c9cd  8488d9354100         TEST byte ptr [EAX + 0x4135d9],CL
0040c9d3  751f                 JNZ 0x0040c9f4
0040c9d5  8b4c2408             MOV ECX,dword ptr [ESP + 0x8]
0040c9d9  85c9                 TEST ECX,ECX
0040c9db  7410                 JZ 0x0040c9ed
0040c9dd  33d2                 XOR EDX,EDX
0040c9df  668b14453a0e4100     MOV DX,word ptr [EAX*0x2 + 0x410e3a]
0040c9e7  8bc2                 MOV EAX,EDX
0040c9e9  23c1                 AND EAX,ECX
0040c9eb  eb02                 JMP 0x0040c9ef
0040c9ed  33c0                 XOR EAX,EAX
0040c9ef  85c0                 TEST EAX,EAX
0040c9f1  7501                 JNZ 0x0040c9f4
0040c9f3  c3                   RET
0040c9f4  b801000000           MOV EAX,0x1
0040c9f9  c3                   RET
; undefined 6 bytes at 0040c9fa

; ==== FUNCTION FUN_0040ca00 entry=0040ca00 sig=undefined __stdcall FUN_0040ca00(void)
0040ca00  51                   PUSH ECX
0040ca01  8b1528344100         MOV EDX,dword ptr [0x00413428]
0040ca07  53                   PUSH EBX
0040ca08  55                   PUSH EBP
0040ca09  56                   PUSH ESI
0040ca0a  8a02                 MOV AL,byte ptr [EDX]
0040ca0c  33f6                 XOR ESI,ESI
0040ca0e  84c0                 TEST AL,AL
0040ca10  57                   PUSH EDI
0040ca11  741d                 JZ 0x0040ca30
0040ca13  3c3d                 CMP AL,0x3d
0040ca15  7401                 JZ 0x0040ca18
0040ca17  46                   INC ESI
0040ca18  8bfa                 MOV EDI,EDX
0040ca1a  83c9ff               OR ECX,0xffffffff
0040ca1d  33c0                 XOR EAX,EAX
0040ca1f  f2ae                 SCASB.REPNE ES:EDI
0040ca21  f7d1                 NOT ECX
0040ca23  49                   DEC ECX
0040ca24  8a440a01             MOV AL,byte ptr [EDX + ECX*0x1 + 0x1]
0040ca28  8d540a01             LEA EDX,[EDX + ECX*0x1 + 0x1]
0040ca2c  84c0                 TEST AL,AL
0040ca2e  75e3                 JNZ 0x0040ca13
0040ca30  8d04b504000000       LEA EAX,[ESI*0x4 + 0x4]
0040ca37  50                   PUSH EAX
0040ca38  e803e3ffff           CALL 0x0040ad40
0040ca3d  8bf0                 MOV ESI,EAX
0040ca3f  83c404               ADD ESP,0x4
0040ca42  85f6                 TEST ESI,ESI
0040ca44  89742410             MOV dword ptr [ESP + 0x10],ESI
0040ca48  89358c344100         MOV dword ptr [0x0041348c],ESI
0040ca4e  750a                 JNZ 0x0040ca5a
0040ca50  6a09                 PUSH 0x9
0040ca52  e889e5ffff           CALL 0x0040afe0
0040ca57  83c404               ADD ESP,0x4
0040ca5a  8b2d28344100         MOV EBP,dword ptr [0x00413428]
0040ca60  8a5500               MOV DL,byte ptr [EBP]
0040ca63  84d2                 TEST DL,DL
0040ca65  7463                 JZ 0x0040caca
0040ca67  8bfd                 MOV EDI,EBP
0040ca69  83c9ff               OR ECX,0xffffffff
0040ca6c  33c0                 XOR EAX,EAX
0040ca6e  f2ae                 SCASB.REPNE ES:EDI
0040ca70  f7d1                 NOT ECX
0040ca72  49                   DEC ECX
0040ca73  8bd9                 MOV EBX,ECX
0040ca75  43                   INC EBX
0040ca76  80fa3d               CMP DL,0x3d
0040ca79  7445                 JZ 0x0040cac0
0040ca7b  53                   PUSH EBX
0040ca7c  e8bfe2ffff           CALL 0x0040ad40
0040ca81  83c404               ADD ESP,0x4
0040ca84  8906                 MOV dword ptr [ESI],EAX
0040ca86  85c0                 TEST EAX,EAX
0040ca88  750a                 JNZ 0x0040ca94
0040ca8a  6a09                 PUSH 0x9
0040ca8c  e84fe5ffff           CALL 0x0040afe0
0040ca91  83c404               ADD ESP,0x4
0040ca94  8bfd                 MOV EDI,EBP
0040ca96  83c9ff               OR ECX,0xffffffff
0040ca99  33c0                 XOR EAX,EAX
0040ca9b  f2ae                 SCASB.REPNE ES:EDI
0040ca9d  8b442410             MOV EAX,dword ptr [ESP + 0x10]
0040caa1  f7d1                 NOT ECX
0040caa3  2bf9                 SUB EDI,ECX
0040caa5  8bd1                 MOV EDX,ECX
0040caa7  8bf7                 MOV ESI,EDI
0040caa9  8b38                 MOV EDI,dword ptr [EAX]
0040caab  c1e902               SHR ECX,0x2
0040caae  f3a5                 MOVSD.REP ES:EDI,ESI
0040cab0  8bca                 MOV ECX,EDX
0040cab2  83e103               AND ECX,0x3
0040cab5  83c004               ADD EAX,0x4
0040cab8  f3a4                 MOVSB.REP ES:EDI,ESI
0040caba  89442410             MOV dword ptr [ESP + 0x10],EAX
0040cabe  8bf0                 MOV ESI,EAX
0040cac0  8a541d00             MOV DL,byte ptr [EBP + EBX*0x1]
0040cac4  03eb                 ADD EBP,EBX
0040cac6  84d2                 TEST DL,DL
0040cac8  759d                 JNZ 0x0040ca67
0040caca  a128344100           MOV EAX,[0x00413428]
0040cacf  50                   PUSH EAX
0040cad0  e81be3ffff           CALL 0x0040adf0
0040cad5  83c404               ADD ESP,0x4
0040cad8  c7052834410000000000 MOV dword ptr [0x00413428],0x0
0040cae2  c70600000000         MOV dword ptr [ESI],0x0
0040cae8  5f                   POP EDI
0040cae9  5e                   POP ESI
0040caea  5d                   POP EBP
0040caeb  5b                   POP EBX
0040caec  59                   POP ECX
0040caed  c3                   RET
; undefined 2 bytes at 0040caee

; ==== FUNCTION FUN_0040caf0 entry=0040caf0 sig=undefined __stdcall FUN_0040caf0(void)
0040caf0  83ec08               SUB ESP,0x8
0040caf3  56                   PUSH ESI
0040caf4  57                   PUSH EDI
0040caf5  6804010000           PUSH 0x104
0040cafa  68c8344100           PUSH 0x4134c8
0040caff  6a00                 PUSH 0x0
0040cb01  ff153ce14000         CALL dword ptr [0x0040e13c]
0040cb07  8b3d103e4100         MOV EDI,dword ptr [0x00413e10]
0040cb0d  c7059c344100c8344100 MOV dword ptr [0x0041349c],0x4134c8
0040cb17  803f00               CMP byte ptr [EDI],0x0
0040cb1a  7505                 JNZ 0x0040cb21
0040cb1c  bfc8344100           MOV EDI,0x4134c8
0040cb21  8d44240c             LEA EAX,[ESP + 0xc]
0040cb25  8d4c2408             LEA ECX,[ESP + 0x8]
0040cb29  50                   PUSH EAX
0040cb2a  51                   PUSH ECX
0040cb2b  6a00                 PUSH 0x0
0040cb2d  6a00                 PUSH 0x0
0040cb2f  57                   PUSH EDI
0040cb30  e85b000000           CALL 0x0040cb90
0040cb35  8b542420             MOV EDX,dword ptr [ESP + 0x20]
0040cb39  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
0040cb3d  83c414               ADD ESP,0x14
0040cb40  8d0c82               LEA ECX,[EDX + EAX*0x4]
0040cb43  51                   PUSH ECX
0040cb44  e8f7e1ffff           CALL 0x0040ad40
0040cb49  8bf0                 MOV ESI,EAX
0040cb4b  83c404               ADD ESP,0x4
0040cb4e  85f6                 TEST ESI,ESI
0040cb50  750a                 JNZ 0x0040cb5c
0040cb52  6a08                 PUSH 0x8
0040cb54  e887e4ffff           CALL 0x0040afe0
0040cb59  83c404               ADD ESP,0x4
0040cb5c  8b4c2408             MOV ECX,dword ptr [ESP + 0x8]
0040cb60  8d54240c             LEA EDX,[ESP + 0xc]
0040cb64  52                   PUSH EDX
0040cb65  8d44240c             LEA EAX,[ESP + 0xc]
0040cb69  8d148e               LEA EDX,[ESI + ECX*0x4]
0040cb6c  50                   PUSH EAX
0040cb6d  52                   PUSH EDX
0040cb6e  56                   PUSH ESI
0040cb6f  57                   PUSH EDI
0040cb70  e81b000000           CALL 0x0040cb90
0040cb75  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
0040cb79  83c414               ADD ESP,0x14
0040cb7c  48                   DEC EAX
0040cb7d  893584344100         MOV dword ptr [0x00413484],ESI
0040cb83  5f                   POP EDI
0040cb84  a380344100           MOV [0x00413480],EAX
0040cb89  5e                   POP ESI
0040cb8a  83c408               ADD ESP,0x8
0040cb8d  c3                   RET
; undefined 2 bytes at 0040cb8e

; ==== FUNCTION FUN_0040cb90 entry=0040cb90 sig=undefined __cdecl FUN_0040cb90(byte * param_1, undefined4 * param_2, byte * param_3, int * param_4, int * param_5)
0040cb90  8b442410             MOV EAX,dword ptr [ESP + 0x10]
0040cb94  53                   PUSH EBX
0040cb95  55                   PUSH EBP
0040cb96  8b6c2410             MOV EBP,dword ptr [ESP + 0x10]
0040cb9a  56                   PUSH ESI
0040cb9b  8b742418             MOV ESI,dword ptr [ESP + 0x18]
0040cb9f  57                   PUSH EDI
0040cba0  8b7c2424             MOV EDI,dword ptr [ESP + 0x24]
0040cba4  85ed                 TEST EBP,EBP
0040cba6  c70700000000         MOV dword ptr [EDI],0x0
0040cbac  c70001000000         MOV dword ptr [EAX],0x1
0040cbb2  8b442414             MOV EAX,dword ptr [ESP + 0x14]
0040cbb6  bb04000000           MOV EBX,0x4
0040cbbb  7409                 JZ 0x0040cbc6
0040cbbd  897500               MOV dword ptr [EBP],ESI
0040cbc0  03eb                 ADD EBP,EBX
0040cbc2  896c2418             MOV dword ptr [ESP + 0x18],EBP
0040cbc6  803822               CMP byte ptr [EAX],0x22
0040cbc9  7556                 JNZ 0x0040cc21
0040cbcb  8a4801               MOV CL,byte ptr [EAX + 0x1]
0040cbce  40                   INC EAX
0040cbcf  80f922               CMP CL,0x22
0040cbd2  7438                 JZ 0x0040cc0c
0040cbd4  84c9                 TEST CL,CL
0040cbd6  7434                 JZ 0x0040cc0c
0040cbd8  81e1ff000000         AND ECX,0xff
0040cbde  8499d9354100         TEST byte ptr [ECX + 0x4135d9],BL
0040cbe4  740f                 JZ 0x0040cbf5
0040cbe6  8b17                 MOV EDX,dword ptr [EDI]
0040cbe8  42                   INC EDX
0040cbe9  85f6                 TEST ESI,ESI
0040cbeb  8917                 MOV dword ptr [EDI],EDX
0040cbed  7406                 JZ 0x0040cbf5
0040cbef  8a08                 MOV CL,byte ptr [EAX]
0040cbf1  880e                 MOV byte ptr [ESI],CL
0040cbf3  46                   INC ESI
0040cbf4  40                   INC EAX
0040cbf5  8b17                 MOV EDX,dword ptr [EDI]
0040cbf7  42                   INC EDX
0040cbf8  85f6                 TEST ESI,ESI
0040cbfa  8917                 MOV dword ptr [EDI],EDX
0040cbfc  7405                 JZ 0x0040cc03
0040cbfe  8a10                 MOV DL,byte ptr [EAX]
0040cc00  8816                 MOV byte ptr [ESI],DL
0040cc02  46                   INC ESI
0040cc03  8a4801               MOV CL,byte ptr [EAX + 0x1]
0040cc06  40                   INC EAX
0040cc07  80f922               CMP CL,0x22
0040cc0a  75c8                 JNZ 0x0040cbd4
0040cc0c  8b17                 MOV EDX,dword ptr [EDI]
0040cc0e  42                   INC EDX
0040cc0f  85f6                 TEST ESI,ESI
0040cc11  8917                 MOV dword ptr [EDI],EDX
0040cc13  7404                 JZ 0x0040cc19
0040cc15  c60600               MOV byte ptr [ESI],0x0
0040cc18  46                   INC ESI
0040cc19  803822               CMP byte ptr [EAX],0x22
0040cc1c  7556                 JNZ 0x0040cc74
0040cc1e  40                   INC EAX
0040cc1f  eb53                 JMP 0x0040cc74
0040cc21  8b17                 MOV EDX,dword ptr [EDI]
0040cc23  42                   INC EDX
0040cc24  85f6                 TEST ESI,ESI
0040cc26  8917                 MOV dword ptr [EDI],EDX
0040cc28  7405                 JZ 0x0040cc2f
0040cc2a  8a08                 MOV CL,byte ptr [EAX]
0040cc2c  880e                 MOV byte ptr [ESI],CL
0040cc2e  46                   INC ESI
0040cc2f  8a08                 MOV CL,byte ptr [EAX]
0040cc31  40                   INC EAX
0040cc32  884c2424             MOV byte ptr [ESP + 0x24],CL
0040cc36  8b542424             MOV EDX,dword ptr [ESP + 0x24]
0040cc3a  81e2ff000000         AND EDX,0xff
0040cc40  849ad9354100         TEST byte ptr [EDX + 0x4135d9],BL
0040cc46  740f                 JZ 0x0040cc57
0040cc48  8b17                 MOV EDX,dword ptr [EDI]
0040cc4a  42                   INC EDX
0040cc4b  85f6                 TEST ESI,ESI
0040cc4d  8917                 MOV dword ptr [EDI],EDX
0040cc4f  7405                 JZ 0x0040cc56
0040cc51  8a10                 MOV DL,byte ptr [EAX]
0040cc53  8816                 MOV byte ptr [ESI],DL
0040cc55  46                   INC ESI
0040cc56  40                   INC EAX
0040cc57  80f920               CMP CL,0x20
0040cc5a  7409                 JZ 0x0040cc65
0040cc5c  84c9                 TEST CL,CL
0040cc5e  7409                 JZ 0x0040cc69
0040cc60  80f909               CMP CL,0x9
0040cc63  75bc                 JNZ 0x0040cc21
0040cc65  84c9                 TEST CL,CL
0040cc67  7503                 JNZ 0x0040cc6c
0040cc69  48                   DEC EAX
0040cc6a  eb08                 JMP 0x0040cc74
0040cc6c  85f6                 TEST ESI,ESI
0040cc6e  7404                 JZ 0x0040cc74
0040cc70  c646ff00             MOV byte ptr [ESI + -0x1],0x0
0040cc74  33d2                 XOR EDX,EDX
0040cc76  89542424             MOV dword ptr [ESP + 0x24],EDX
0040cc7a  803800               CMP byte ptr [EAX],0x0
0040cc7d  0f8403010000         JZ 0x0040cd86
0040cc83  8a08                 MOV CL,byte ptr [EAX]
0040cc85  80f920               CMP CL,0x20
0040cc88  7405                 JZ 0x0040cc8f
0040cc8a  80f909               CMP CL,0x9
0040cc8d  7503                 JNZ 0x0040cc92
0040cc8f  40                   INC EAX
0040cc90  ebf1                 JMP 0x0040cc83
0040cc92  803800               CMP byte ptr [EAX],0x0
0040cc95  0f84eb000000         JZ 0x0040cd86
0040cc9b  85ed                 TEST EBP,EBP
0040cc9d  7409                 JZ 0x0040cca8
0040cc9f  897500               MOV dword ptr [EBP],ESI
0040cca2  03eb                 ADD EBP,EBX
0040cca4  896c2418             MOV dword ptr [ESP + 0x18],EBP
0040cca8  8b4c2420             MOV ECX,dword ptr [ESP + 0x20]
0040ccac  ff01                 INC dword ptr [ECX]
0040ccae  8a18                 MOV BL,byte ptr [EAX]
0040ccb0  33c9                 XOR ECX,ECX
0040ccb2  80fb5c               CMP BL,0x5c
0040ccb5  bd01000000           MOV EBP,0x1
0040ccba  750a                 JNZ 0x0040ccc6
0040ccbc  8a5801               MOV BL,byte ptr [EAX + 0x1]
0040ccbf  40                   INC EAX
0040ccc0  41                   INC ECX
0040ccc1  80fb5c               CMP BL,0x5c
0040ccc4  74f6                 JZ 0x0040ccbc
0040ccc6  803822               CMP byte ptr [EAX],0x22
0040ccc9  7525                 JNZ 0x0040ccf0
0040cccb  f6c101               TEST CL,0x1
0040ccce  751e                 JNZ 0x0040ccee
0040ccd0  85d2                 TEST EDX,EDX
0040ccd2  7409                 JZ 0x0040ccdd
0040ccd4  80780122             CMP byte ptr [EAX + 0x1],0x22
0040ccd8  7503                 JNZ 0x0040ccdd
0040ccda  40                   INC EAX
0040ccdb  eb02                 JMP 0x0040ccdf
0040ccdd  33ed                 XOR EBP,EBP
0040ccdf  8b5c2424             MOV EBX,dword ptr [ESP + 0x24]
0040cce3  33d2                 XOR EDX,EDX
0040cce5  85db                 TEST EBX,EBX
0040cce7  0f94c2               SETZ DL
0040ccea  89542424             MOV dword ptr [ESP + 0x24],EDX
0040ccee  d1e9                 SHR ECX,0x1
0040ccf0  8bd9                 MOV EBX,ECX
0040ccf2  49                   DEC ECX
0040ccf3  85db                 TEST EBX,EBX
0040ccf5  7411                 JZ 0x0040cd08
0040ccf7  41                   INC ECX
0040ccf8  85f6                 TEST ESI,ESI
0040ccfa  7404                 JZ 0x0040cd00
0040ccfc  c6065c               MOV byte ptr [ESI],0x5c
0040ccff  46                   INC ESI
0040cd00  8b1f                 MOV EBX,dword ptr [EDI]
0040cd02  43                   INC EBX
0040cd03  49                   DEC ECX
0040cd04  891f                 MOV dword ptr [EDI],EBX
0040cd06  75f0                 JNZ 0x0040ccf8
0040cd08  8a08                 MOV CL,byte ptr [EAX]
0040cd0a  84c9                 TEST CL,CL
0040cd0c  745d                 JZ 0x0040cd6b
0040cd0e  85d2                 TEST EDX,EDX
0040cd10  750a                 JNZ 0x0040cd1c
0040cd12  80f920               CMP CL,0x20
0040cd15  7454                 JZ 0x0040cd6b
0040cd17  80f909               CMP CL,0x9
0040cd1a  744f                 JZ 0x0040cd6b
0040cd1c  85ed                 TEST EBP,EBP
0040cd1e  7445                 JZ 0x0040cd65
0040cd20  85f6                 TEST ESI,ESI
0040cd22  742a                 JZ 0x0040cd4e
0040cd24  8bd9                 MOV EBX,ECX
0040cd26  81e3ff000000         AND EBX,0xff
0040cd2c  f683d935410004       TEST byte ptr [EBX + 0x4135d9],0x4
0040cd33  7409                 JZ 0x0040cd3e
0040cd35  880e                 MOV byte ptr [ESI],CL
0040cd37  8b0f                 MOV ECX,dword ptr [EDI]
0040cd39  46                   INC ESI
0040cd3a  40                   INC EAX
0040cd3b  41                   INC ECX
0040cd3c  890f                 MOV dword ptr [EDI],ECX
0040cd3e  8a08                 MOV CL,byte ptr [EAX]
0040cd40  880e                 MOV byte ptr [ESI],CL
0040cd42  8b0f                 MOV ECX,dword ptr [EDI]
0040cd44  46                   INC ESI
0040cd45  41                   INC ECX
0040cd46  890f                 MOV dword ptr [EDI],ECX
0040cd48  40                   INC EAX
0040cd49  e960ffffff           JMP 0x0040ccae
0040cd4e  81e1ff000000         AND ECX,0xff
0040cd54  f681d935410004       TEST byte ptr [ECX + 0x4135d9],0x4
0040cd5b  7406                 JZ 0x0040cd63
0040cd5d  8b0f                 MOV ECX,dword ptr [EDI]
0040cd5f  40                   INC EAX
0040cd60  41                   INC ECX
0040cd61  890f                 MOV dword ptr [EDI],ECX
0040cd63  ff07                 INC dword ptr [EDI]
0040cd65  40                   INC EAX
0040cd66  e943ffffff           JMP 0x0040ccae
0040cd6b  85f6                 TEST ESI,ESI
0040cd6d  7404                 JZ 0x0040cd73
0040cd6f  c60600               MOV byte ptr [ESI],0x0
0040cd72  46                   INC ESI
0040cd73  8b0f                 MOV ECX,dword ptr [EDI]
0040cd75  8b6c2418             MOV EBP,dword ptr [ESP + 0x18]
0040cd79  41                   INC ECX
0040cd7a  bb04000000           MOV EBX,0x4
0040cd7f  890f                 MOV dword ptr [EDI],ECX
0040cd81  e9f4feffff           JMP 0x0040cc7a
0040cd86  85ed                 TEST EBP,EBP
0040cd88  7407                 JZ 0x0040cd91
0040cd8a  c7450000000000       MOV dword ptr [EBP],0x0
0040cd91  8b442420             MOV EAX,dword ptr [ESP + 0x20]
0040cd95  5f                   POP EDI
0040cd96  5e                   POP ESI
0040cd97  5d                   POP EBP
0040cd98  8b08                 MOV ECX,dword ptr [EAX]
0040cd9a  5b                   POP EBX
0040cd9b  41                   INC ECX
0040cd9c  8908                 MOV dword ptr [EAX],ECX
0040cd9e  c3                   RET
; undefined 1 bytes at 0040cd9f

; ==== FUNCTION FUN_0040cda0 entry=0040cda0 sig=LPSTR __stdcall FUN_0040cda0(void)
0040cda0  a1d0354100           MOV EAX,[0x004135d0]
0040cda5  53                   PUSH EBX
0040cda6  55                   PUSH EBP
0040cda7  8b2d64e14000         MOV EBP,dword ptr [0x0040e164]
0040cdad  56                   PUSH ESI
0040cdae  33f6                 XOR ESI,ESI
0040cdb0  33db                 XOR EBX,EBX
0040cdb2  57                   PUSH EDI
0040cdb3  8b3d84e14000         MOV EDI,dword ptr [0x0040e184]
0040cdb9  85c0                 TEST EAX,EAX
0040cdbb  7525                 JNZ 0x0040cde2
0040cdbd  ffd7                 CALL EDI
0040cdbf  8bf0                 MOV ESI,EAX
0040cdc1  85f6                 TEST ESI,ESI
0040cdc3  7407                 JZ 0x0040cdcc
0040cdc5  b801000000           MOV EAX,0x1
0040cdca  eb11                 JMP 0x0040cddd
0040cdcc  ffd5                 CALL EBP
0040cdce  8bd8                 MOV EBX,EAX
0040cdd0  85db                 TEST EBX,EBX
0040cdd2  0f8417010000         JZ 0x0040ceef
0040cdd8  b802000000           MOV EAX,0x2
0040cddd  a3d0354100           MOV [0x004135d0],EAX
0040cde2  83f801               CMP EAX,0x1
0040cde5  0f8597000000         JNZ 0x0040ce82
0040cdeb  85f6                 TEST ESI,ESI
0040cded  750c                 JNZ 0x0040cdfb
0040cdef  ffd7                 CALL EDI
0040cdf1  8bf0                 MOV ESI,EAX
0040cdf3  85f6                 TEST ESI,ESI
0040cdf5  0f84f4000000         JZ 0x0040ceef
0040cdfb  66833e00             CMP word ptr [ESI],0x0
0040cdff  8bc6                 MOV EAX,ESI
0040ce01  7412                 JZ 0x0040ce15
0040ce03  83c002               ADD EAX,0x2
0040ce06  66833800             CMP word ptr [EAX],0x0
0040ce0a  75f7                 JNZ 0x0040ce03
0040ce0c  83c002               ADD EAX,0x2
0040ce0f  66833800             CMP word ptr [EAX],0x0
0040ce13  75ee                 JNZ 0x0040ce03
0040ce15  2bc6                 SUB EAX,ESI
0040ce17  6a00                 PUSH 0x0
0040ce19  d1f8                 SAR EAX,0x1
0040ce1b  40                   INC EAX
0040ce1c  6a00                 PUSH 0x0
0040ce1e  8be8                 MOV EBP,EAX
0040ce20  6a00                 PUSH 0x0
0040ce22  6a00                 PUSH 0x0
0040ce24  55                   PUSH EBP
0040ce25  56                   PUSH ESI
0040ce26  6a00                 PUSH 0x0
0040ce28  6a00                 PUSH 0x0
0040ce2a  ff15c8e14000         CALL dword ptr [0x0040e1c8]
0040ce30  8bf8                 MOV EDI,EAX
0040ce32  85ff                 TEST EDI,EDI
0040ce34  743e                 JZ 0x0040ce74
0040ce36  57                   PUSH EDI
0040ce37  e804dfffff           CALL 0x0040ad40
0040ce3c  8bd8                 MOV EBX,EAX
0040ce3e  83c404               ADD ESP,0x4
0040ce41  85db                 TEST EBX,EBX
0040ce43  742f                 JZ 0x0040ce74
0040ce45  6a00                 PUSH 0x0
0040ce47  6a00                 PUSH 0x0
0040ce49  57                   PUSH EDI
0040ce4a  53                   PUSH EBX
0040ce4b  55                   PUSH EBP
0040ce4c  56                   PUSH ESI
0040ce4d  6a00                 PUSH 0x0
0040ce4f  6a00                 PUSH 0x0
0040ce51  ff15c8e14000         CALL dword ptr [0x0040e1c8]
0040ce57  85c0                 TEST EAX,EAX
0040ce59  750b                 JNZ 0x0040ce66
0040ce5b  53                   PUSH EBX
0040ce5c  e88fdfffff           CALL 0x0040adf0
0040ce61  83c404               ADD ESP,0x4
0040ce64  33db                 XOR EBX,EBX
0040ce66  56                   PUSH ESI
0040ce67  ff1568e14000         CALL dword ptr [0x0040e168]
0040ce6d  8bc3                 MOV EAX,EBX
0040ce6f  5f                   POP EDI
0040ce70  5e                   POP ESI
0040ce71  5d                   POP EBP
0040ce72  5b                   POP EBX
0040ce73  c3                   RET
0040ce74  56                   PUSH ESI
0040ce75  ff1568e14000         CALL dword ptr [0x0040e168]
0040ce7b  33c0                 XOR EAX,EAX
0040ce7d  5f                   POP EDI
0040ce7e  5e                   POP ESI
0040ce7f  5d                   POP EBP
0040ce80  5b                   POP EBX
0040ce81  c3                   RET
0040ce82  83f802               CMP EAX,0x2
0040ce85  7568                 JNZ 0x0040ceef
0040ce87  85db                 TEST EBX,EBX
0040ce89  7508                 JNZ 0x0040ce93
0040ce8b  ffd5                 CALL EBP
0040ce8d  8bd8                 MOV EBX,EAX
0040ce8f  85db                 TEST EBX,EBX
0040ce91  745c                 JZ 0x0040ceef
0040ce93  8a0b                 MOV CL,byte ptr [EBX]
0040ce95  8bc3                 MOV EAX,EBX
0040ce97  84c9                 TEST CL,CL
0040ce99  7410                 JZ 0x0040ceab
0040ce9b  8a4801               MOV CL,byte ptr [EAX + 0x1]
0040ce9e  40                   INC EAX
0040ce9f  84c9                 TEST CL,CL
0040cea1  75f8                 JNZ 0x0040ce9b
0040cea3  8a4801               MOV CL,byte ptr [EAX + 0x1]
0040cea6  40                   INC EAX
0040cea7  84c9                 TEST CL,CL
0040cea9  75f0                 JNZ 0x0040ce9b
0040ceab  2bc3                 SUB EAX,EBX
0040cead  40                   INC EAX
0040ceae  8bf0                 MOV ESI,EAX
0040ceb0  56                   PUSH ESI
0040ceb1  e88adeffff           CALL 0x0040ad40
0040ceb6  8be8                 MOV EBP,EAX
0040ceb8  83c404               ADD ESP,0x4
0040cebb  85ed                 TEST EBP,EBP
0040cebd  750e                 JNZ 0x0040cecd
0040cebf  53                   PUSH EBX
0040cec0  ff156ce14000         CALL dword ptr [0x0040e16c]
0040cec6  33c0                 XOR EAX,EAX
0040cec8  5f                   POP EDI
0040cec9  5e                   POP ESI
0040ceca  5d                   POP EBP
0040cecb  5b                   POP EBX
0040cecc  c3                   RET
0040cecd  8bce                 MOV ECX,ESI
0040cecf  8bf3                 MOV ESI,EBX
0040ced1  8bc1                 MOV EAX,ECX
0040ced3  8bfd                 MOV EDI,EBP
0040ced5  c1e902               SHR ECX,0x2
0040ced8  f3a5                 MOVSD.REP ES:EDI,ESI
0040ceda  8bc8                 MOV ECX,EAX
0040cedc  53                   PUSH EBX
0040cedd  83e103               AND ECX,0x3
0040cee0  f3a4                 MOVSB.REP ES:EDI,ESI
0040cee2  ff156ce14000         CALL dword ptr [0x0040e16c]
0040cee8  8bc5                 MOV EAX,EBP
0040ceea  5f                   POP EDI
0040ceeb  5e                   POP ESI
0040ceec  5d                   POP EBP
0040ceed  5b                   POP EBX
0040ceee  c3                   RET
0040ceef  5f                   POP EDI
0040cef0  5e                   POP ESI
0040cef1  5d                   POP EBP
0040cef2  33c0                 XOR EAX,EAX
0040cef4  5b                   POP EBX
0040cef5  c3                   RET
; undefined 10 bytes at 0040cef6

; ==== FUNCTION FUN_0040cf00 entry=0040cf00 sig=undefined4 __cdecl FUN_0040cf00(int param_1)
0040cf00  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040cf04  83ec14               SUB ESP,0x14
0040cf07  53                   PUSH EBX
0040cf08  55                   PUSH EBP
0040cf09  56                   PUSH ESI
0040cf0a  57                   PUSH EDI
0040cf0b  50                   PUSH EAX
0040cf0c  e8ff010000           CALL 0x0040d110
0040cf11  8bc8                 MOV ECX,EAX
0040cf13  a1e0374100           MOV EAX,[0x004137e0]
0040cf18  83c404               ADD ESP,0x4
0040cf1b  3bc8                 CMP ECX,EAX
0040cf1d  894c2428             MOV dword ptr [ESP + 0x28],ECX
0040cf21  750a                 JNZ 0x0040cf2d
0040cf23  33c0                 XOR EAX,EAX
0040cf25  5f                   POP EDI
0040cf26  5e                   POP ESI
0040cf27  5d                   POP EBP
0040cf28  5b                   POP EBX
0040cf29  83c414               ADD ESP,0x14
0040cf2c  c3                   RET
0040cf2d  85c9                 TEST ECX,ECX
0040cf2f  7514                 JNZ 0x0040cf45
0040cf31  e88a020000           CALL 0x0040d1c0
0040cf36  e8c5020000           CALL 0x0040d200
0040cf3b  33c0                 XOR EAX,EAX
0040cf3d  5f                   POP EDI
0040cf3e  5e                   POP ESI
0040cf3f  5d                   POP EBP
0040cf40  5b                   POP EBX
0040cf41  83c414               ADD ESP,0x14
0040cf44  c3                   RET
0040cf45  33d2                 XOR EDX,EDX
0040cf47  b888324100           MOV EAX,0x413288
0040cf4c  3908                 CMP dword ptr [EAX],ECX
0040cf4e  0f8407010000         JZ 0x0040d05b
0040cf54  83c030               ADD EAX,0x30
0040cf57  42                   INC EDX
0040cf58  3d78334100           CMP EAX,0x413378
0040cf5d  72ed                 JC 0x0040cf4c
0040cf5f  8d542410             LEA EDX,[ESP + 0x10]
0040cf63  52                   PUSH EDX
0040cf64  51                   PUSH ECX
0040cf65  ff1560e14000         CALL dword ptr [0x0040e160]
0040cf6b  be01000000           MOV ESI,0x1
0040cf70  3bc6                 CMP EAX,ESI
0040cf72  0f85bb000000         JNZ 0x0040d033
0040cf78  b940000000           MOV ECX,0x40
0040cf7d  33c0                 XOR EAX,EAX
0040cf7f  bfd8354100           MOV EDI,0x4135d8
0040cf84  f3ab                 STOSD.REP ES:EDI
0040cf86  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
0040cf8a  aa                   STOSB ES:EDI
0040cf8b  8b7c2428             MOV EDI,dword ptr [ESP + 0x28]
0040cf8f  33c0                 XOR EAX,EAX
0040cf91  3bce                 CMP ECX,ESI
0040cf93  893de0374100         MOV dword ptr [0x004137e0],EDI
0040cf99  a3e4374100           MOV [0x004137e4],EAX
0040cf9e  766e                 JBE 0x0040d00e
0040cfa0  8a442416             MOV AL,byte ptr [ESP + 0x16]
0040cfa4  84c0                 TEST AL,AL
0040cfa6  7437                 JZ 0x0040cfdf
0040cfa8  8d542417             LEA EDX,[ESP + 0x17]
0040cfac  8a0a                 MOV CL,byte ptr [EDX]
0040cfae  84c9                 TEST CL,CL
0040cfb0  742d                 JZ 0x0040cfdf
0040cfb2  33c0                 XOR EAX,EAX
0040cfb4  81e1ff000000         AND ECX,0xff
0040cfba  8a42ff               MOV AL,byte ptr [EDX + -0x1]
0040cfbd  3bc1                 CMP EAX,ECX
0040cfbf  7714                 JA 0x0040cfd5
0040cfc1  8a98d9354100         MOV BL,byte ptr [EAX + 0x4135d9]
0040cfc7  80cb04               OR BL,0x4
0040cfca  8898d9354100         MOV byte ptr [EAX + 0x4135d9],BL
0040cfd0  40                   INC EAX
0040cfd1  3bc1                 CMP EAX,ECX
0040cfd3  76ec                 JBE 0x0040cfc1
0040cfd5  8a4201               MOV AL,byte ptr [EDX + 0x1]
0040cfd8  83c202               ADD EDX,0x2
0040cfdb  84c0                 TEST AL,AL
0040cfdd  75cd                 JNZ 0x0040cfac
0040cfdf  8bc6                 MOV EAX,ESI
0040cfe1  8a98d9354100         MOV BL,byte ptr [EAX + 0x4135d9]
0040cfe7  80cb08               OR BL,0x8
0040cfea  8898d9354100         MOV byte ptr [EAX + 0x4135d9],BL
0040cff0  40                   INC EAX
0040cff1  3dff000000           CMP EAX,0xff
0040cff6  72e9                 JC 0x0040cfe1
0040cff8  57                   PUSH EDI
0040cff9  e862010000           CALL 0x0040d160
0040cffe  83c404               ADD ESP,0x4
0040d001  a3e4374100           MOV [0x004137e4],EAX
0040d006  8935e03c4100         MOV dword ptr [0x00413ce0],ESI
0040d00c  eb05                 JMP 0x0040d013
0040d00e  a3e03c4100           MOV [0x00413ce0],EAX
0040d013  33c0                 XOR EAX,EAX
0040d015  a3e8374100           MOV [0x004137e8],EAX
0040d01a  a3ec374100           MOV [0x004137ec],EAX
0040d01f  a3f0374100           MOV [0x004137f0],EAX
0040d024  e8d7010000           CALL 0x0040d200
0040d029  33c0                 XOR EAX,EAX
0040d02b  5f                   POP EDI
0040d02c  5e                   POP ESI
0040d02d  5d                   POP EBP
0040d02e  5b                   POP EBX
0040d02f  83c414               ADD ESP,0x14
0040d032  c3                   RET
0040d033  a1f4374100           MOV EAX,[0x004137f4]
0040d038  85c0                 TEST EAX,EAX
0040d03a  7414                 JZ 0x0040d050
0040d03c  e87f010000           CALL 0x0040d1c0
0040d041  e8ba010000           CALL 0x0040d200
0040d046  33c0                 XOR EAX,EAX
0040d048  5f                   POP EDI
0040d049  5e                   POP ESI
0040d04a  5d                   POP EBP
0040d04b  5b                   POP EBX
0040d04c  83c414               ADD ESP,0x14
0040d04f  c3                   RET
0040d050  83c8ff               OR EAX,0xffffffff
0040d053  5f                   POP EDI
0040d054  5e                   POP ESI
0040d055  5d                   POP EBP
0040d056  5b                   POP EBX
0040d057  83c414               ADD ESP,0x14
0040d05a  c3                   RET
0040d05b  b940000000           MOV ECX,0x40
0040d060  33c0                 XOR EAX,EAX
0040d062  bfd8354100           MOV EDI,0x4135d8
0040d067  8d1c52               LEA EBX,[EDX + EDX*0x2]
0040d06a  f3ab                 STOSD.REP ES:EDI
0040d06c  aa                   STOSB ES:EDI
0040d06d  33ff                 XOR EDI,EDI
0040d06f  c1e304               SHL EBX,0x4
0040d072  8dab98324100         LEA EBP,[EBX + 0x413298]
0040d078  8a4500               MOV AL,byte ptr [EBP]
0040d07b  8bf5                 MOV ESI,EBP
0040d07d  84c0                 TEST AL,AL
0040d07f  7430                 JZ 0x0040d0b1
0040d081  8a4e01               MOV CL,byte ptr [ESI + 0x1]
0040d084  84c9                 TEST CL,CL
0040d086  7429                 JZ 0x0040d0b1
0040d088  33c0                 XOR EAX,EAX
0040d08a  81e1ff000000         AND ECX,0xff
0040d090  8a06                 MOV AL,byte ptr [ESI]
0040d092  3bc1                 CMP EAX,ECX
0040d094  7711                 JA 0x0040d0a7
0040d096  8a9780324100         MOV DL,byte ptr [EDI + 0x413280]
0040d09c  0890d9354100         OR byte ptr [EAX + 0x4135d9],DL
0040d0a2  40                   INC EAX
0040d0a3  3bc1                 CMP EAX,ECX
0040d0a5  76f5                 JBE 0x0040d09c
0040d0a7  8a4602               MOV AL,byte ptr [ESI + 0x2]
0040d0aa  83c602               ADD ESI,0x2
0040d0ad  84c0                 TEST AL,AL
0040d0af  75d0                 JNZ 0x0040d081
0040d0b1  47                   INC EDI
0040d0b2  83c508               ADD EBP,0x8
0040d0b5  83ff04               CMP EDI,0x4
0040d0b8  72be                 JC 0x0040d078
0040d0ba  8b442428             MOV EAX,dword ptr [ESP + 0x28]
0040d0be  c705e03c410001000000 MOV dword ptr [0x00413ce0],0x1
0040d0c8  50                   PUSH EAX
0040d0c9  a3e0374100           MOV [0x004137e0],EAX
0040d0ce  e88d000000           CALL 0x0040d160
0040d0d3  8b8b8c324100         MOV ECX,dword ptr [EBX + 0x41328c]
0040d0d9  8b9390324100         MOV EDX,dword ptr [EBX + 0x413290]
0040d0df  a3e4374100           MOV [0x004137e4],EAX
0040d0e4  8d838c324100         LEA EAX,[EBX + 0x41328c]
0040d0ea  83c404               ADD ESP,0x4
0040d0ed  890de8374100         MOV dword ptr [0x004137e8],ECX
0040d0f3  8b4008               MOV EAX,dword ptr [EAX + 0x8]
0040d0f6  8915ec374100         MOV dword ptr [0x004137ec],EDX
0040d0fc  a3f0374100           MOV [0x004137f0],EAX
0040d101  e8fa000000           CALL 0x0040d200
0040d106  5f                   POP EDI
0040d107  5e                   POP ESI
0040d108  5d                   POP EBP
0040d109  33c0                 XOR EAX,EAX
0040d10b  5b                   POP EBX
0040d10c  83c414               ADD ESP,0x14
0040d10f  c3                   RET

; ==== FUNCTION FUN_0040d110 entry=0040d110 sig=int __cdecl FUN_0040d110(int param_1)
0040d110  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040d114  c705f437410000000000 MOV dword ptr [0x004137f4],0x0
0040d11e  83f8fe               CMP EAX,-0x2
0040d121  7510                 JNZ 0x0040d133
0040d123  c705f437410001000000 MOV dword ptr [0x004137f4],0x1
0040d12d  ff2510e24000         JMP dword ptr [0x0040e210]
0040d133  83f8fd               CMP EAX,-0x3
0040d136  7510                 JNZ 0x0040d148
0040d138  c705f437410001000000 MOV dword ptr [0x004137f4],0x1
0040d142  ff2588e14000         JMP dword ptr [0x0040e188]
0040d148  83f8fc               CMP EAX,-0x4
0040d14b  750f                 JNZ 0x0040d15c
0040d14d  a158344100           MOV EAX,[0x00413458]
0040d152  c705f437410001000000 MOV dword ptr [0x004137f4],0x1
0040d15c  c3                   RET
; undefined 3 bytes at 0040d15d

; ==== FUNCTION FUN_0040d160 entry=0040d160 sig=undefined4 __cdecl FUN_0040d160(undefined4 param_1)
0040d160  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040d164  055cfcffff           ADD EAX,0xfffffc5c
0040d169  83f812               CMP EAX,0x12
0040d16c  7727                 JA 0x0040d195
0040d16e  33c9                 XOR ECX,ECX
0040d170  8a88acd14000         MOV CL,byte ptr [EAX + 0x40d1ac]
switchD_0040d176::switchD:
0040d176  ff248d98d14000       JMP dword ptr [ECX*0x4 + 0x40d198]
switchD_0040d176::caseD_3a4:
0040d17d  b811040000           MOV EAX,0x411
0040d182  c3                   RET
switchD_0040d176::caseD_3a8:
0040d183  b804080000           MOV EAX,0x804
0040d188  c3                   RET
switchD_0040d176::caseD_3b5:
0040d189  b812040000           MOV EAX,0x412
0040d18e  c3                   RET
switchD_0040d176::caseD_3b6:
0040d18f  b804040000           MOV EAX,0x404
0040d194  c3                   RET
switchD_0040d176::caseD_3a5:
0040d195  33c0                 XOR EAX,EAX
0040d197  c3                   RET
switchD_0040d176::switchdataD_0040d198:
0040d198  addr 0040d17d
0040d19c  addr 0040d183
0040d1a0  addr 0040d189
0040d1a4  addr 0040d18f
0040d1a8  addr 0040d195
switchD_0040d176::switchdataD_0040d1ac:
0040d1ac  db 0h
0040d1ad  db 4h
0040d1ae  db 4h
0040d1af  db 4h
0040d1b0  db 1h
0040d1b1  db 4h
0040d1b2  db 4h
0040d1b3  db 4h
0040d1b4  db 4h
0040d1b5  db 4h
0040d1b6  db 4h
0040d1b7  db 4h
0040d1b8  db 4h
0040d1b9  db 4h
0040d1ba  db 4h
0040d1bb  db 4h
0040d1bc  db 4h
0040d1bd  db 2h
0040d1be  db 3h
; undefined 1 bytes at 0040d1bf

; ==== FUNCTION FUN_0040d1c0 entry=0040d1c0 sig=undefined __stdcall FUN_0040d1c0(void)
0040d1c0  57                   PUSH EDI
0040d1c1  b940000000           MOV ECX,0x40
0040d1c6  33c0                 XOR EAX,EAX
0040d1c8  bfd8354100           MOV EDI,0x4135d8
0040d1cd  f3ab                 STOSD.REP ES:EDI
0040d1cf  aa                   STOSB ES:EDI
0040d1d0  33c0                 XOR EAX,EAX
0040d1d2  5f                   POP EDI
0040d1d3  a3e0374100           MOV [0x004137e0],EAX
0040d1d8  a3e03c4100           MOV [0x00413ce0],EAX
0040d1dd  a3e4374100           MOV [0x004137e4],EAX
0040d1e2  a3e8374100           MOV [0x004137e8],EAX
0040d1e7  a3ec374100           MOV [0x004137ec],EAX
0040d1ec  a3f0374100           MOV [0x004137f0],EAX
0040d1f1  c3                   RET
; undefined 14 bytes at 0040d1f2

; ==== FUNCTION FUN_0040d200 entry=0040d200 sig=undefined __stdcall FUN_0040d200(void)
0040d200  8b0de0374100         MOV ECX,dword ptr [0x004137e0]
0040d206  81ec14050000         SUB ESP,0x514
0040d20c  8d442400             LEA EAX,[ESP]
0040d210  53                   PUSH EBX
0040d211  50                   PUSH EAX
0040d212  51                   PUSH ECX
0040d213  ff1560e14000         CALL dword ptr [0x0040e160]
0040d219  83f801               CMP EAX,0x1
0040d21c  0f8552010000         JNZ 0x0040d374
0040d222  57                   PUSH EDI
0040d223  56                   PUSH ESI
0040d224  33c0                 XOR EAX,EAX
0040d226  88440420             MOV byte ptr [ESP + EAX*0x1 + 0x20],AL
0040d22a  40                   INC EAX
0040d22b  3d00010000           CMP EAX,0x100
0040d230  72f4                 JC 0x0040d226
0040d232  8a442412             MOV AL,byte ptr [ESP + 0x12]
0040d236  c644242020           MOV byte ptr [ESP + 0x20],0x20
0040d23b  84c0                 TEST AL,AL
0040d23d  7435                 JZ 0x0040d274
0040d23f  8d542413             LEA EDX,[ESP + 0x13]
0040d243  33c9                 XOR ECX,ECX
0040d245  25ff000000           AND EAX,0xff
0040d24a  8a0a                 MOV CL,byte ptr [EDX]
0040d24c  3bc1                 CMP EAX,ECX
0040d24e  771a                 JA 0x0040d26a
0040d250  2bc8                 SUB ECX,EAX
0040d252  8d7c0420             LEA EDI,[ESP + EAX*0x1 + 0x20]
0040d256  41                   INC ECX
0040d257  b820202020           MOV EAX,0x20202020
0040d25c  8bf1                 MOV ESI,ECX
0040d25e  c1e902               SHR ECX,0x2
0040d261  f3ab                 STOSD.REP ES:EDI
0040d263  8bce                 MOV ECX,ESI
0040d265  83e103               AND ECX,0x3
0040d268  f3aa                 STOSB.REP ES:EDI
0040d26a  8a4201               MOV AL,byte ptr [EDX + 0x1]
0040d26d  83c202               ADD EDX,0x2
0040d270  84c0                 TEST AL,AL
0040d272  75cf                 JNZ 0x0040d243
0040d274  8b15e4374100         MOV EDX,dword ptr [0x004137e4]
0040d27a  a1e0374100           MOV EAX,[0x004137e0]
0040d27f  6a00                 PUSH 0x0
0040d281  52                   PUSH EDX
0040d282  8d8c2428030000       LEA ECX,[ESP + 0x328]
0040d289  50                   PUSH EAX
0040d28a  51                   PUSH ECX
0040d28b  8d542430             LEA EDX,[ESP + 0x30]
0040d28f  6800010000           PUSH 0x100
0040d294  52                   PUSH EDX
0040d295  6a01                 PUSH 0x1
0040d297  e814e1ffff           CALL 0x0040b3b0
0040d29c  a1e0374100           MOV EAX,[0x004137e0]
0040d2a1  83c41c               ADD ESP,0x1c
0040d2a4  8d8c2420010000       LEA ECX,[ESP + 0x120]
0040d2ab  8d542420             LEA EDX,[ESP + 0x20]
0040d2af  6a00                 PUSH 0x0
0040d2b1  50                   PUSH EAX
0040d2b2  a1e4374100           MOV EAX,[0x004137e4]
0040d2b7  6800010000           PUSH 0x100
0040d2bc  51                   PUSH ECX
0040d2bd  6800010000           PUSH 0x100
0040d2c2  52                   PUSH EDX
0040d2c3  6800010000           PUSH 0x100
0040d2c8  50                   PUSH EAX
0040d2c9  e882deffff           CALL 0x0040b150
0040d2ce  8b0de0374100         MOV ECX,dword ptr [0x004137e0]
0040d2d4  83c420               ADD ESP,0x20
0040d2d7  8d942420020000       LEA EDX,[ESP + 0x220]
0040d2de  8d442420             LEA EAX,[ESP + 0x20]
0040d2e2  6a00                 PUSH 0x0
0040d2e4  51                   PUSH ECX
0040d2e5  8b0de4374100         MOV ECX,dword ptr [0x004137e4]
0040d2eb  6800010000           PUSH 0x100
0040d2f0  52                   PUSH EDX
0040d2f1  6800010000           PUSH 0x100
0040d2f6  50                   PUSH EAX
0040d2f7  6800020000           PUSH 0x200
0040d2fc  51                   PUSH ECX
0040d2fd  e84edeffff           CALL 0x0040b150
0040d302  83c420               ADD ESP,0x20
0040d305  33c0                 XOR EAX,EAX
0040d307  8d942420030000       LEA EDX,[ESP + 0x320]
0040d30e  b310                 MOV BL,0x10
0040d310  668b0a               MOV CX,word ptr [EDX]
0040d313  f6c101               TEST CL,0x1
0040d316  741d                 JZ 0x0040d335
0040d318  8a88d9354100         MOV CL,byte ptr [EAX + 0x4135d9]
0040d31e  0acb                 OR CL,BL
0040d320  8888d9354100         MOV byte ptr [EAX + 0x4135d9],CL
0040d326  8a8c0420010000       MOV CL,byte ptr [ESP + EAX*0x1 + 0x120]
0040d32d  8888e0364100         MOV byte ptr [EAX + 0x4136e0],CL
0040d333  eb2a                 JMP 0x0040d35f
0040d335  f6c102               TEST CL,0x2
0040d338  741e                 JZ 0x0040d358
0040d33a  8a88d9354100         MOV CL,byte ptr [EAX + 0x4135d9]
0040d340  80c920               OR CL,0x20
0040d343  8888d9354100         MOV byte ptr [EAX + 0x4135d9],CL
0040d349  8a8c0420020000       MOV CL,byte ptr [ESP + EAX*0x1 + 0x220]
0040d350  8888e0364100         MOV byte ptr [EAX + 0x4136e0],CL
0040d356  eb07                 JMP 0x0040d35f
0040d358  c680e036410000       MOV byte ptr [EAX + 0x4136e0],0x0
0040d35f  40                   INC EAX
0040d360  83c202               ADD EDX,0x2
0040d363  3d00010000           CMP EAX,0x100
0040d368  72a6                 JC 0x0040d310
0040d36a  5e                   POP ESI
0040d36b  5f                   POP EDI
0040d36c  5b                   POP EBX
0040d36d  81c414050000         ADD ESP,0x514
0040d373  c3                   RET
0040d374  33c0                 XOR EAX,EAX
0040d376  b310                 MOV BL,0x10
0040d378  83f841               CMP EAX,0x41
0040d37b  7220                 JC 0x0040d39d
0040d37d  83f85a               CMP EAX,0x5a
0040d380  771b                 JA 0x0040d39d
0040d382  8a90d9354100         MOV DL,byte ptr [EAX + 0x4135d9]
0040d388  0ad3                 OR DL,BL
0040d38a  8890d9354100         MOV byte ptr [EAX + 0x4135d9],DL
0040d390  8ad0                 MOV DL,AL
0040d392  80c220               ADD DL,0x20
0040d395  8890e0364100         MOV byte ptr [EAX + 0x4136e0],DL
0040d39b  eb2d                 JMP 0x0040d3ca
0040d39d  83f861               CMP EAX,0x61
0040d3a0  7221                 JC 0x0040d3c3
0040d3a2  83f87a               CMP EAX,0x7a
0040d3a5  771c                 JA 0x0040d3c3
0040d3a7  8a88d9354100         MOV CL,byte ptr [EAX + 0x4135d9]
0040d3ad  80c920               OR CL,0x20
0040d3b0  8888d9354100         MOV byte ptr [EAX + 0x4135d9],CL
0040d3b6  8ac8                 MOV CL,AL
0040d3b8  80e920               SUB CL,0x20
0040d3bb  8888e0364100         MOV byte ptr [EAX + 0x4136e0],CL
0040d3c1  eb07                 JMP 0x0040d3ca
0040d3c3  c680e036410000       MOV byte ptr [EAX + 0x4136e0],0x0
0040d3ca  40                   INC EAX
0040d3cb  3d00010000           CMP EAX,0x100
0040d3d0  72a6                 JC 0x0040d378
0040d3d2  5b                   POP EBX
0040d3d3  81c414050000         ADD ESP,0x514
0040d3d9  c3                   RET
; undefined 6 bytes at 0040d3da

; ==== FUNCTION FUN_0040d3e0 entry=0040d3e0 sig=undefined __stdcall FUN_0040d3e0(void)
0040d3e0  6afd                 PUSH -0x3
0040d3e2  e819fbffff           CALL 0x0040cf00
0040d3e7  83c404               ADD ESP,0x4
0040d3ea  c3                   RET
; undefined 5 bytes at 0040d3eb

; ==== FUNCTION __global_unwind2 entry=0040d3f0 sig=undefined __cdecl __global_unwind2(PVOID param_1)
0040d3f0  55                   PUSH EBP
0040d3f1  8bec                 MOV EBP,ESP
0040d3f3  53                   PUSH EBX
0040d3f4  56                   PUSH ESI
0040d3f5  57                   PUSH EDI
0040d3f6  55                   PUSH EBP
0040d3f7  6a00                 PUSH 0x0
0040d3f9  6a00                 PUSH 0x0
0040d3fb  6808d44000           PUSH 0x40d408
0040d400  ff7508               PUSH dword ptr [EBP + 0x8]
0040d403  e848080000           CALL 0x0040dc50
0040d408  5d                   POP EBP
0040d409  5f                   POP EDI
0040d40a  5e                   POP ESI
0040d40b  5b                   POP EBX
0040d40c  8be5                 MOV ESP,EBP
0040d40e  5d                   POP EBP
0040d40f  c3                   RET

; ==== FUNCTION FUN_0040d410 entry=0040d410 sig=undefined4 __cdecl FUN_0040d410(int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
0040d410  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
0040d414  f7410406000000       TEST dword ptr [ECX + 0x4],0x6
0040d41b  b801000000           MOV EAX,0x1
0040d420  740f                 JZ 0x0040d431
0040d422  8b442408             MOV EAX,dword ptr [ESP + 0x8]
0040d426  8b542410             MOV EDX,dword ptr [ESP + 0x10]
0040d42a  8902                 MOV dword ptr [EDX],EAX
0040d42c  b803000000           MOV EAX,0x3
0040d431  c3                   RET

; ==== FUNCTION __local_unwind2 entry=0040d432 sig=undefined __cdecl __local_unwind2(int param_1, int param_2)
0040d432  53                   PUSH EBX
0040d433  56                   PUSH ESI
0040d434  57                   PUSH EDI
0040d435  8b442410             MOV EAX,dword ptr [ESP + 0x10]
0040d439  50                   PUSH EAX
0040d43a  6afe                 PUSH -0x2
0040d43c  6810d44000           PUSH 0x40d410
0040d441  64ff3500000000       PUSH dword ptr FS:[0x0]
0040d448  64892500000000       MOV dword ptr FS:[0x0],ESP
0040d44f  8b442420             MOV EAX,dword ptr [ESP + 0x20]
0040d453  8b5808               MOV EBX,dword ptr [EAX + 0x8]
0040d456  8b700c               MOV ESI,dword ptr [EAX + 0xc]
0040d459  83feff               CMP ESI,-0x1
0040d45c  742e                 JZ 0x0040d48c
0040d45e  3b742424             CMP ESI,dword ptr [ESP + 0x24]
0040d462  7428                 JZ 0x0040d48c
0040d464  8d3476               LEA ESI,[ESI + ESI*0x2]
0040d467  8b0cb3               MOV ECX,dword ptr [EBX + ESI*0x4]
0040d46a  894c2408             MOV dword ptr [ESP + 0x8],ECX
0040d46e  89480c               MOV dword ptr [EAX + 0xc],ECX
0040d471  837cb30400           CMP dword ptr [EBX + ESI*0x4 + 0x4],0x0
0040d476  7512                 JNZ 0x0040d48a
0040d478  6801010000           PUSH 0x101
0040d47d  8b44b308             MOV EAX,dword ptr [EBX + ESI*0x4 + 0x8]
0040d481  e840000000           CALL 0x0040d4c6
0040d486  ff54b308             CALL dword ptr [EBX + ESI*0x4 + 0x8]
0040d48a  ebc3                 JMP 0x0040d44f
0040d48c  648f0500000000       POP dword ptr FS:[0x0]
0040d493  83c40c               ADD ESP,0xc
0040d496  5f                   POP EDI
0040d497  5e                   POP ESI
0040d498  5b                   POP EBX
0040d499  c3                   RET

; ==== FUNCTION FUN_0040d49a entry=0040d49a sig=undefined FUN_0040d49a(void)
0040d49a  33c0                 XOR EAX,EAX
0040d49c  648b0d00000000       MOV ECX,dword ptr FS:[0x0]
0040d4a3  81790410d44000       CMP dword ptr [ECX + 0x4],0x40d410
0040d4aa  7510                 JNZ 0x0040d4bc
0040d4ac  8b510c               MOV EDX,dword ptr [ECX + 0xc]
0040d4af  8b520c               MOV EDX,dword ptr [EDX + 0xc]
0040d4b2  395108               CMP dword ptr [ECX + 0x8],EDX
0040d4b5  7505                 JNZ 0x0040d4bc
0040d4b7  b801000000           MOV EAX,0x1
0040d4bc  c3                   RET

; ==== FUNCTION FUN_0040d4bd entry=0040d4bd sig=undefined FUN_0040d4bd(void)
0040d4bd  53                   PUSH EBX
0040d4be  51                   PUSH ECX
0040d4bf  bb78334100           MOV EBX,0x413378
0040d4c4  eb0a                 JMP 0x0040d4d0

; ==== FUNCTION FUN_0040d4c6 entry=0040d4c6 sig=undefined __stdcall FUN_0040d4c6(void)
0040d4c6  53                   PUSH EBX
0040d4c7  51                   PUSH ECX
0040d4c8  bb78334100           MOV EBX,0x413378
0040d4cd  8b4d08               MOV ECX,dword ptr [EBP + 0x8]
0040d4d0  894b08               MOV dword ptr [EBX + 0x8],ECX
0040d4d3  894304               MOV dword ptr [EBX + 0x4],EAX
0040d4d6  896b0c               MOV dword ptr [EBX + 0xc],EBP
0040d4d9  59                   POP ECX
0040d4da  5b                   POP EBX
0040d4db  c20400               RET 0x4
; undefined 10 bytes at 0040d4de

; ==== FUNCTION FUN_0040d4e8 entry=0040d4e8 sig=undefined4 __cdecl FUN_0040d4e8(int param_1, PVOID param_2, undefined4 param_3)
0040d4e8  55                   PUSH EBP
0040d4e9  8bec                 MOV EBP,ESP
0040d4eb  83ec08               SUB ESP,0x8
0040d4ee  53                   PUSH EBX
0040d4ef  56                   PUSH ESI
0040d4f0  57                   PUSH EDI
0040d4f1  55                   PUSH EBP
0040d4f2  fc                   CLD
0040d4f3  8b5d0c               MOV EBX,dword ptr [EBP + 0xc]
0040d4f6  8b4508               MOV EAX,dword ptr [EBP + 0x8]
0040d4f9  f7400406000000       TEST dword ptr [EAX + 0x4],0x6
0040d500  0f8582000000         JNZ 0x0040d588
0040d506  8945f8               MOV dword ptr [EBP + -0x8],EAX
0040d509  8b4510               MOV EAX,dword ptr [EBP + 0x10]
0040d50c  8945fc               MOV dword ptr [EBP + -0x4],EAX
0040d50f  8d45f8               LEA EAX,[EBP + -0x8]
0040d512  8943fc               MOV dword ptr [EBX + -0x4],EAX
0040d515  8b730c               MOV ESI,dword ptr [EBX + 0xc]
0040d518  8b7b08               MOV EDI,dword ptr [EBX + 0x8]
0040d51b  83feff               CMP ESI,-0x1
0040d51e  7461                 JZ 0x0040d581
0040d520  8d0c76               LEA ECX,[ESI + ESI*0x2]
0040d523  837c8f0400           CMP dword ptr [EDI + ECX*0x4 + 0x4],0x0
0040d528  7445                 JZ 0x0040d56f
0040d52a  56                   PUSH ESI
0040d52b  55                   PUSH EBP
0040d52c  8d6b10               LEA EBP,[EBX + 0x10]
0040d52f  ff548f04             CALL dword ptr [EDI + ECX*0x4 + 0x4]
0040d533  5d                   POP EBP
0040d534  5e                   POP ESI
0040d535  8b5d0c               MOV EBX,dword ptr [EBP + 0xc]
0040d538  0bc0                 OR EAX,EAX
0040d53a  7433                 JZ 0x0040d56f
0040d53c  783c                 JS 0x0040d57a
0040d53e  8b7b08               MOV EDI,dword ptr [EBX + 0x8]
0040d541  53                   PUSH EBX
0040d542  e8a9feffff           CALL 0x0040d3f0
0040d547  83c404               ADD ESP,0x4
0040d54a  8d6b10               LEA EBP,[EBX + 0x10]
0040d54d  56                   PUSH ESI
0040d54e  53                   PUSH EBX
0040d54f  e8defeffff           CALL 0x0040d432
0040d554  83c408               ADD ESP,0x8
0040d557  8d0c76               LEA ECX,[ESI + ESI*0x2]
0040d55a  6a01                 PUSH 0x1
0040d55c  8b448f08             MOV EAX,dword ptr [EDI + ECX*0x4 + 0x8]
0040d560  e861ffffff           CALL 0x0040d4c6
0040d565  8b048f               MOV EAX,dword ptr [EDI + ECX*0x4]
0040d568  89430c               MOV dword ptr [EBX + 0xc],EAX
0040d56b  ff548f08             CALL dword ptr [EDI + ECX*0x4 + 0x8]
0040d56f  8b7b08               MOV EDI,dword ptr [EBX + 0x8]
0040d572  8d0c76               LEA ECX,[ESI + ESI*0x2]
0040d575  8b348f               MOV ESI,dword ptr [EDI + ECX*0x4]
0040d578  eba1                 JMP 0x0040d51b
0040d57a  b800000000           MOV EAX,0x0
0040d57f  eb1c                 JMP 0x0040d59d
0040d581  b801000000           MOV EAX,0x1
0040d586  eb15                 JMP 0x0040d59d
0040d588  55                   PUSH EBP
0040d589  8d6b10               LEA EBP,[EBX + 0x10]
0040d58c  6aff                 PUSH -0x1
0040d58e  53                   PUSH EBX
0040d58f  e89efeffff           CALL 0x0040d432
0040d594  83c408               ADD ESP,0x8
0040d597  5d                   POP EBP
0040d598  b801000000           MOV EAX,0x1
0040d59d  5d                   POP EBP
0040d59e  5f                   POP EDI
0040d59f  5e                   POP ESI
0040d5a0  5b                   POP EBX
0040d5a1  8be5                 MOV ESP,EBP
0040d5a3  5d                   POP EBP
0040d5a4  c3                   RET

; ==== FUNCTION FUN_0040d5a5 entry=0040d5a5 sig=undefined __stdcall FUN_0040d5a5(int param_1)
0040d5a5  55                   PUSH EBP
0040d5a6  8b4c2408             MOV ECX,dword ptr [ESP + 0x8]
0040d5aa  8b29                 MOV EBP,dword ptr [ECX]
0040d5ac  8b411c               MOV EAX,dword ptr [ECX + 0x1c]
0040d5af  50                   PUSH EAX
0040d5b0  8b4118               MOV EAX,dword ptr [ECX + 0x18]
0040d5b3  50                   PUSH EAX
0040d5b4  e879feffff           CALL 0x0040d432
0040d5b9  83c408               ADD ESP,0x8
0040d5bc  5d                   POP EBP
0040d5bd  c20400               RET 0x4

; ==== FUNCTION FUN_0040d5c0 entry=0040d5c0 sig=undefined __stdcall FUN_0040d5c0(void)
0040d5c0  a130344100           MOV EAX,[0x00413430]
0040d5c5  83f801               CMP EAX,0x1
0040d5c8  740d                 JZ 0x0040d5d7
0040d5ca  85c0                 TEST EAX,EAX
0040d5cc  752e                 JNZ 0x0040d5fc
0040d5ce  833d5410410001       CMP dword ptr [0x00411054],0x1
0040d5d5  7525                 JNZ 0x0040d5fc
0040d5d7  68fc000000           PUSH 0xfc
0040d5dc  e81f000000           CALL 0x0040d600
0040d5e1  a1f8374100           MOV EAX,[0x004137f8]
0040d5e6  83c404               ADD ESP,0x4
0040d5e9  85c0                 TEST EAX,EAX
0040d5eb  7402                 JZ 0x0040d5ef
0040d5ed  ffd0                 CALL EAX
0040d5ef  68ff000000           PUSH 0xff
0040d5f4  e807000000           CALL 0x0040d600
0040d5f9  83c404               ADD ESP,0x4
0040d5fc  c3                   RET
; undefined 3 bytes at 0040d5fd

; ==== FUNCTION FUN_0040d600 entry=0040d600 sig=undefined __cdecl FUN_0040d600(int param_1)
0040d600  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
0040d604  81eca8010000         SUB ESP,0x1a8
0040d60a  b888334100           MOV EAX,0x413388
0040d60f  53                   PUSH EBX
0040d610  55                   PUSH EBP
0040d611  56                   PUSH ESI
0040d612  57                   PUSH EDI
0040d613  33ed                 XOR EBP,EBP
0040d615  3b08                 CMP ECX,dword ptr [EAX]
0040d617  740b                 JZ 0x0040d624
0040d619  83c008               ADD EAX,0x8
0040d61c  45                   INC EBP
0040d61d  3d18344100           CMP EAX,0x413418
0040d622  72f1                 JC 0x0040d615
0040d624  3b0ced88334100       CMP ECX,dword ptr [EBP*0x8 + 0x413388]
0040d62b  0f859a010000         JNZ 0x0040d7cb
0040d631  a130344100           MOV EAX,[0x00413430]
0040d636  83f801               CMP EAX,0x1
0040d639  0f844e010000         JZ 0x0040d78d
0040d63f  85c0                 TEST EAX,EAX
0040d641  750d                 JNZ 0x0040d650
0040d643  833d5410410001       CMP dword ptr [0x00411054],0x1
0040d64a  0f843d010000         JZ 0x0040d78d
0040d650  81f9fc000000         CMP ECX,0xfc
0040d656  0f846f010000         JZ 0x0040d7cb
0040d65c  8d8424b4000000       LEA EAX,[ESP + 0xb4]
0040d663  6804010000           PUSH 0x104
0040d668  50                   PUSH EAX
0040d669  6a00                 PUSH 0x0
0040d66b  ff153ce14000         CALL dword ptr [0x0040e13c]
0040d671  85c0                 TEST EAX,EAX
0040d673  7516                 JNZ 0x0040d68b
0040d675  b905000000           MOV ECX,0x5
0040d67a  be0ce64000           MOV ESI,0x40e60c
0040d67f  8dbc24b4000000       LEA EDI,[ESP + 0xb4]
0040d686  f3a5                 MOVSD.REP ES:EDI,ESI
0040d688  66a5                 MOVSW ES:EDI,ESI
0040d68a  a4                   MOVSB ES:EDI,ESI
0040d68b  8dbc24b4000000       LEA EDI,[ESP + 0xb4]
0040d692  83c9ff               OR ECX,0xffffffff
0040d695  33c0                 XOR EAX,EAX
0040d697  8d9c24b4000000       LEA EBX,[ESP + 0xb4]
0040d69e  f2ae                 SCASB.REPNE ES:EDI
0040d6a0  f7d1                 NOT ECX
0040d6a2  83f93c               CMP ECX,0x3c
0040d6a5  762d                 JBE 0x0040d6d4
0040d6a7  8dbc24b4000000       LEA EDI,[ESP + 0xb4]
0040d6ae  83c9ff               OR ECX,0xffffffff
0040d6b1  f2ae                 SCASB.REPNE ES:EDI
0040d6b3  f7d1                 NOT ECX
0040d6b5  49                   DEC ECX
0040d6b6  6a03                 PUSH 0x3
0040d6b8  8bd9                 MOV EBX,ECX
0040d6ba  8d8c24b8000000       LEA ECX,[ESP + 0xb8]
0040d6c1  83e93b               SUB ECX,0x3b
0040d6c4  6860054100           PUSH 0x410560
0040d6c9  03d9                 ADD EBX,ECX
0040d6cb  53                   PUSH EBX
0040d6cc  e8dfcbffff           CALL 0x0040a2b0
0040d6d1  83c40c               ADD ESP,0xc
0040d6d4  b906000000           MOV ECX,0x6
0040d6d9  bef0e54000           MOV ESI,0x40e5f0
0040d6de  8d7c2414             LEA EDI,[ESP + 0x14]
0040d6e2  33c0                 XOR EAX,EAX
0040d6e4  f3a5                 MOVSD.REP ES:EDI,ESI
0040d6e6  66a5                 MOVSW ES:EDI,ESI
0040d6e8  83c9ff               OR ECX,0xffffffff
0040d6eb  8bfb                 MOV EDI,EBX
0040d6ed  f2ae                 SCASB.REPNE ES:EDI
0040d6ef  f7d1                 NOT ECX
0040d6f1  2bf9                 SUB EDI,ECX
0040d6f3  8d542414             LEA EDX,[ESP + 0x14]
0040d6f7  8bd9                 MOV EBX,ECX
0040d6f9  8bf7                 MOV ESI,EDI
0040d6fb  83c9ff               OR ECX,0xffffffff
0040d6fe  8bfa                 MOV EDI,EDX
0040d700  f2ae                 SCASB.REPNE ES:EDI
0040d702  8bcb                 MOV ECX,EBX
0040d704  4f                   DEC EDI
0040d705  c1e902               SHR ECX,0x2
0040d708  f3a5                 MOVSD.REP ES:EDI,ESI
0040d70a  8bcb                 MOV ECX,EBX
0040d70c  8d542414             LEA EDX,[ESP + 0x14]
0040d710  83e103               AND ECX,0x3
0040d713  6810200100           PUSH 0x12010
0040d718  f3a4                 MOVSB.REP ES:EDI,ESI
0040d71a  bfece54000           MOV EDI,0x40e5ec
0040d71f  83c9ff               OR ECX,0xffffffff
0040d722  f2ae                 SCASB.REPNE ES:EDI
0040d724  f7d1                 NOT ECX
0040d726  2bf9                 SUB EDI,ECX
0040d728  68c4e54000           PUSH 0x40e5c4
0040d72d  8bf7                 MOV ESI,EDI
0040d72f  8bd9                 MOV EBX,ECX
0040d731  8bfa                 MOV EDI,EDX
0040d733  83c9ff               OR ECX,0xffffffff
0040d736  f2ae                 SCASB.REPNE ES:EDI
0040d738  8bcb                 MOV ECX,EBX
0040d73a  4f                   DEC EDI
0040d73b  c1e902               SHR ECX,0x2
0040d73e  f3a5                 MOVSD.REP ES:EDI,ESI
0040d740  8bcb                 MOV ECX,EBX
0040d742  8d54241c             LEA EDX,[ESP + 0x1c]
0040d746  83e103               AND ECX,0x3
0040d749  f3a4                 MOVSB.REP ES:EDI,ESI
0040d74b  8b3ced8c334100       MOV EDI,dword ptr [EBP*0x8 + 0x41338c]
0040d752  83c9ff               OR ECX,0xffffffff
0040d755  f2ae                 SCASB.REPNE ES:EDI
0040d757  f7d1                 NOT ECX
0040d759  2bf9                 SUB EDI,ECX
0040d75b  8bf7                 MOV ESI,EDI
0040d75d  8bd9                 MOV EBX,ECX
0040d75f  8bfa                 MOV EDI,EDX
0040d761  83c9ff               OR ECX,0xffffffff
0040d764  f2ae                 SCASB.REPNE ES:EDI
0040d766  8bcb                 MOV ECX,EBX
0040d768  4f                   DEC EDI
0040d769  c1e902               SHR ECX,0x2
0040d76c  f3a5                 MOVSD.REP ES:EDI,ESI
0040d76e  8bcb                 MOV ECX,EBX
0040d770  8d44241c             LEA EAX,[ESP + 0x1c]
0040d774  83e103               AND ECX,0x3
0040d777  50                   PUSH EAX
0040d778  f3a4                 MOVSB.REP ES:EDI,ESI
0040d77a  e841040000           CALL 0x0040dbc0
0040d77f  83c40c               ADD ESP,0xc
0040d782  5f                   POP EDI
0040d783  5e                   POP ESI
0040d784  5d                   POP EBP
0040d785  5b                   POP EBX
0040d786  81c4a8010000         ADD ESP,0x1a8
0040d78c  c3                   RET
0040d78d  a1003d4100           MOV EAX,[0x00413d00]
0040d792  85c0                 TEST EAX,EAX
0040d794  7408                 JZ 0x0040d79e
0040d796  8b7010               MOV ESI,dword ptr [EAX + 0x10]
0040d799  83feff               CMP ESI,-0x1
0040d79c  750a                 JNZ 0x0040d7a8
0040d79e  6af4                 PUSH -0xc
0040d7a0  ff15a4e14000         CALL dword ptr [0x0040e1a4]
0040d7a6  8bf0                 MOV ESI,EAX
0040d7a8  8b14ed8c334100       MOV EDX,dword ptr [EBP*0x8 + 0x41338c]
0040d7af  8d4c2410             LEA ECX,[ESP + 0x10]
0040d7b3  6a00                 PUSH 0x0
0040d7b5  51                   PUSH ECX
0040d7b6  8bfa                 MOV EDI,EDX
0040d7b8  83c9ff               OR ECX,0xffffffff
0040d7bb  33c0                 XOR EAX,EAX
0040d7bd  f2ae                 SCASB.REPNE ES:EDI
0040d7bf  f7d1                 NOT ECX
0040d7c1  49                   DEC ECX
0040d7c2  51                   PUSH ECX
0040d7c3  52                   PUSH EDX
0040d7c4  56                   PUSH ESI
0040d7c5  ff1594e14000         CALL dword ptr [0x0040e194]
0040d7cb  5f                   POP EDI
0040d7cc  5e                   POP ESI
0040d7cd  5d                   POP EBP
0040d7ce  5b                   POP EBX
0040d7cf  81c4a8010000         ADD ESP,0x1a8
0040d7d5  c3                   RET
; undefined 10 bytes at 0040d7d6

; ==== FUNCTION FUN_0040d7e0 entry=0040d7e0 sig=undefined4 * __cdecl FUN_0040d7e0(undefined4 * param_1, undefined4 * param_2, uint param_3)
0040d7e0  55                   PUSH EBP
0040d7e1  8bec                 MOV EBP,ESP
0040d7e3  57                   PUSH EDI
0040d7e4  56                   PUSH ESI
0040d7e5  8b750c               MOV ESI,dword ptr [EBP + 0xc]
0040d7e8  8b4d10               MOV ECX,dword ptr [EBP + 0x10]
0040d7eb  8b7d08               MOV EDI,dword ptr [EBP + 0x8]
0040d7ee  8bc1                 MOV EAX,ECX
0040d7f0  8bd1                 MOV EDX,ECX
0040d7f2  03c6                 ADD EAX,ESI
0040d7f4  3bfe                 CMP EDI,ESI
0040d7f6  7608                 JBE 0x0040d800
0040d7f8  3bf8                 CMP EDI,EAX
0040d7fa  0f8278010000         JC 0x0040d978
0040d800  f7c703000000         TEST EDI,0x3
0040d806  7514                 JNZ 0x0040d81c
0040d808  c1e902               SHR ECX,0x2
0040d80b  83e203               AND EDX,0x3
0040d80e  83f908               CMP ECX,0x8
0040d811  7229                 JC 0x0040d83c
0040d813  f3a5                 MOVSD.REP ES:EDI,ESI
switchD_0040d815::switchD:
0040d815  ff249528d94000       JMP dword ptr [EDX*0x4 + 0x40d928]
0040d81c  8bc7                 MOV EAX,EDI
0040d81e  ba03000000           MOV EDX,0x3
0040d823  83e904               SUB ECX,0x4
0040d826  720c                 JC 0x0040d834
switchD_0040d834::default:
0040d828  83e003               AND EAX,0x3
0040d82b  03c8                 ADD ECX,EAX
switchD_0040d82d::switchD:
0040d82d  ff248540d84000       JMP dword ptr [EAX*0x4 + 0x40d840]
switchD_0040d834::switchD:
0040d834  ff248d38d94000       JMP dword ptr [ECX*0x4 + 0x40d938]
; undefined 1 bytes at 0040d83b
switchD_0040d83c::switchD:
0040d83c  ff248dbcd84000       JMP dword ptr [ECX*0x4 + 0x40d8bc]
; undefined 1 bytes at 0040d843
switchD_0040d82d::switchdataD_0040d844:
0040d844  addr 0040d850
0040d848  addr 0040d87c
0040d84c  addr 0040d8a0
switchD_0040d82d::caseD_1:
0040d850  23d1                 AND EDX,ECX
0040d852  8a06                 MOV AL,byte ptr [ESI]
0040d854  8807                 MOV byte ptr [EDI],AL
0040d856  8a4601               MOV AL,byte ptr [ESI + 0x1]
0040d859  884701               MOV byte ptr [EDI + 0x1],AL
0040d85c  8a4602               MOV AL,byte ptr [ESI + 0x2]
0040d85f  c1e902               SHR ECX,0x2
0040d862  884702               MOV byte ptr [EDI + 0x2],AL
0040d865  83c603               ADD ESI,0x3
0040d868  83c703               ADD EDI,0x3
0040d86b  83f908               CMP ECX,0x8
0040d86e  72cc                 JC 0x0040d83c
0040d870  f3a5                 MOVSD.REP ES:EDI,ESI
switchD_0040d872::switchD:
0040d872  ff249528d94000       JMP dword ptr [EDX*0x4 + 0x40d928]

; ==== FUNCTION FUN_0040d879 entry=0040d879 sig=undefined FUN_0040d879(void)
0040d879  2e8bc0               MOV EAX,EAX
switchD_0040d82d::caseD_2:
0040d87c  23d1                 AND EDX,ECX
0040d87e  8a06                 MOV AL,byte ptr [ESI]
0040d880  8807                 MOV byte ptr [EDI],AL
0040d882  8a4601               MOV AL,byte ptr [ESI + 0x1]
0040d885  c1e902               SHR ECX,0x2
0040d888  884701               MOV byte ptr [EDI + 0x1],AL
0040d88b  83c602               ADD ESI,0x2
0040d88e  83c702               ADD EDI,0x2
0040d891  83f908               CMP ECX,0x8
0040d894  72a6                 JC 0x0040d83c
0040d896  f3a5                 MOVSD.REP ES:EDI,ESI
switchD_0040d898::switchD:
0040d898  ff249528d94000       JMP dword ptr [EDX*0x4 + 0x40d928]
; undefined 1 bytes at 0040d89f

; ==== FUNCTION switchD_0040d82d::caseD_3 entry=0040d8a0 sig=undefined caseD_3(void)
0040d8a0  23d1                 AND EDX,ECX
0040d8a2  8a06                 MOV AL,byte ptr [ESI]
0040d8a4  8807                 MOV byte ptr [EDI],AL
0040d8a6  46                   INC ESI
0040d8a7  c1e902               SHR ECX,0x2
0040d8aa  47                   INC EDI
0040d8ab  83f908               CMP ECX,0x8
0040d8ae  728c                 JC 0x0040d83c
0040d8b0  f3a5                 MOVSD.REP ES:EDI,ESI
switchD_0040d8b2::switchD:
0040d8b2  ff249528d94000       JMP dword ptr [EDX*0x4 + 0x40d928]

; ==== FUNCTION FUN_0040d8b9 entry=0040d8b9 sig=undefined FUN_0040d8b9(void)
0040d8b9  2e8bc0               MOV EAX,EAX
switchD_0040d83c::switchdataD_0040d8bc:
0040d8bc  addr 0040d91f
0040d8c0  addr 0040d90c
0040d8c4  addr 0040d904
0040d8c8  addr 0040d8fc
0040d8cc  addr 0040d8f4
0040d8d0  addr 0040d8ec
0040d8d4  addr 0040d8e4
0040d8d8  addr 0040d8dc
switchD_0040d83c::caseD_7:
0040d8dc  8b448ee4             MOV EAX,dword ptr [ESI + ECX*0x4 + -0x1c]
0040d8e0  89448fe4             MOV dword ptr [EDI + ECX*0x4 + -0x1c],EAX
switchD_0040d83c::caseD_6:
0040d8e4  8b448ee8             MOV EAX,dword ptr [ESI + ECX*0x4 + -0x18]
0040d8e8  89448fe8             MOV dword ptr [EDI + ECX*0x4 + -0x18],EAX
switchD_0040d83c::caseD_5:
0040d8ec  8b448eec             MOV EAX,dword ptr [ESI + ECX*0x4 + -0x14]
0040d8f0  89448fec             MOV dword ptr [EDI + ECX*0x4 + -0x14],EAX
switchD_0040d83c::caseD_4:
0040d8f4  8b448ef0             MOV EAX,dword ptr [ESI + ECX*0x4 + -0x10]
0040d8f8  89448ff0             MOV dword ptr [EDI + ECX*0x4 + -0x10],EAX
switchD_0040d83c::caseD_3:
0040d8fc  8b448ef4             MOV EAX,dword ptr [ESI + ECX*0x4 + -0xc]
0040d900  89448ff4             MOV dword ptr [EDI + ECX*0x4 + -0xc],EAX
switchD_0040d83c::caseD_2:
0040d904  8b448ef8             MOV EAX,dword ptr [ESI + ECX*0x4 + -0x8]
0040d908  89448ff8             MOV dword ptr [EDI + ECX*0x4 + -0x8],EAX
switchD_0040d83c::caseD_1:
0040d90c  8b448efc             MOV EAX,dword ptr [ESI + ECX*0x4 + -0x4]
0040d910  89448ffc             MOV dword ptr [EDI + ECX*0x4 + -0x4],EAX
0040d914  8d048d00000000       LEA EAX,[ECX*0x4 + 0x0]
0040d91b  03f0                 ADD ESI,EAX
0040d91d  03f8                 ADD EDI,EAX
switchD_0040d83c::caseD_0:
0040d91f  ff249528d94000       JMP dword ptr [EDX*0x4 + 0x40d928]

; ==== FUNCTION FUN_0040d926 entry=0040d926 sig=undefined FUN_0040d926(void)
0040d926  8bc0                 MOV EAX,EAX
switchD_0040d815::switchdataD_0040d928:
0040d928  addr 0040d938
0040d92c  addr 0040d940
0040d930  addr 0040d94c
0040d934  addr 0040d960
switchD_0040d815::caseD_0:
0040d938  8b4508               MOV EAX,dword ptr [EBP + 0x8]
0040d93b  5e                   POP ESI
0040d93c  5f                   POP EDI
0040d93d  c9                   LEAVE
0040d93e  c3                   RET
; undefined 1 bytes at 0040d93f
switchD_0040d815::caseD_1:
0040d940  8a06                 MOV AL,byte ptr [ESI]
0040d942  8807                 MOV byte ptr [EDI],AL
0040d944  8b4508               MOV EAX,dword ptr [EBP + 0x8]
0040d947  5e                   POP ESI
0040d948  5f                   POP EDI
0040d949  c9                   LEAVE
0040d94a  c3                   RET
; undefined 1 bytes at 0040d94b
switchD_0040d815::caseD_2:
0040d94c  8a06                 MOV AL,byte ptr [ESI]
0040d94e  8807                 MOV byte ptr [EDI],AL
0040d950  8a4601               MOV AL,byte ptr [ESI + 0x1]
0040d953  884701               MOV byte ptr [EDI + 0x1],AL
0040d956  8b4508               MOV EAX,dword ptr [EBP + 0x8]
0040d959  5e                   POP ESI
0040d95a  5f                   POP EDI
0040d95b  c9                   LEAVE
0040d95c  c3                   RET

; ==== FUNCTION FUN_0040d95d entry=0040d95d sig=undefined FUN_0040d95d(void)
0040d95d  2e8bc0               MOV EAX,EAX
switchD_0040d815::caseD_3:
0040d960  8a06                 MOV AL,byte ptr [ESI]
0040d962  8807                 MOV byte ptr [EDI],AL
0040d964  8a4601               MOV AL,byte ptr [ESI + 0x1]
0040d967  884701               MOV byte ptr [EDI + 0x1],AL
0040d96a  8a4602               MOV AL,byte ptr [ESI + 0x2]
0040d96d  884702               MOV byte ptr [EDI + 0x2],AL
0040d970  8b4508               MOV EAX,dword ptr [EBP + 0x8]
0040d973  5e                   POP ESI
0040d974  5f                   POP EDI
0040d975  c9                   LEAVE
0040d976  c3                   RET
; undefined 1 bytes at 0040d977
0040d978  8d7431fc             LEA ESI,[ECX + ESI*0x1 + -0x4]
0040d97c  8d7c39fc             LEA EDI,[ECX + EDI*0x1 + -0x4]
0040d980  f7c703000000         TEST EDI,0x3
0040d986  7524                 JNZ 0x0040d9ac
0040d988  c1e902               SHR ECX,0x2
0040d98b  83e203               AND EDX,0x3
0040d98e  83f908               CMP ECX,0x8
0040d991  720d                 JC 0x0040d9a0
0040d993  fd                   STD
0040d994  f3a5                 MOVSD.REP ES:EDI,ESI
0040d996  fc                   CLD
switchD_0040d997::switchD:
0040d997  ff2495c0da4000       JMP dword ptr [EDX*0x4 + 0x40dac0]

; ==== FUNCTION FUN_0040d99e entry=0040d99e sig=undefined FUN_0040d99e(void)
0040d99e  8bc0                 MOV EAX,EAX
0040d9a0  f7d9                 NEG ECX
switchD_0040d9a2::switchD:
0040d9a2  ff248d70da4000       JMP dword ptr [ECX*0x4 + 0x40da70]

; ==== FUNCTION FUN_0040d9a9 entry=0040d9a9 sig=undefined FUN_0040d9a9(void)
0040d9a9  2e8bc0               MOV EAX,EAX
0040d9ac  8bc7                 MOV EAX,EDI
0040d9ae  ba03000000           MOV EDX,0x3
0040d9b3  83f904               CMP ECX,0x4
0040d9b6  720c                 JC 0x0040d9c4
switchD_0040d9c4::default:
0040d9b8  83e003               AND EAX,0x3
0040d9bb  2bc8                 SUB ECX,EAX
switchD_0040d9bd::switchD:
0040d9bd  ff2485c8d94000       JMP dword ptr [EAX*0x4 + 0x40d9c8]
switchD_0040d9c4::switchD:
0040d9c4  ff248dc0da4000       JMP dword ptr [ECX*0x4 + 0x40dac0]
; undefined 1 bytes at 0040d9cb
switchD_0040d9bd::switchdataD_0040d9cc:
0040d9cc  addr 0040d9d8
0040d9d0  addr 0040d9f8
0040d9d4  addr 0040da20
switchD_0040d9bd::caseD_1:
0040d9d8  8a4603               MOV AL,byte ptr [ESI + 0x3]
0040d9db  23d1                 AND EDX,ECX
0040d9dd  884703               MOV byte ptr [EDI + 0x3],AL
0040d9e0  4e                   DEC ESI
0040d9e1  c1e902               SHR ECX,0x2
0040d9e4  4f                   DEC EDI
0040d9e5  83f908               CMP ECX,0x8
0040d9e8  72b6                 JC 0x0040d9a0
0040d9ea  fd                   STD
0040d9eb  f3a5                 MOVSD.REP ES:EDI,ESI
0040d9ed  fc                   CLD
switchD_0040d9ee::switchD:
0040d9ee  ff2495c0da4000       JMP dword ptr [EDX*0x4 + 0x40dac0]

; ==== FUNCTION FUN_0040d9f5 entry=0040d9f5 sig=undefined FUN_0040d9f5(void)
0040d9f5  2e8bc0               MOV EAX,EAX
switchD_0040d9bd::caseD_2:
0040d9f8  8a4603               MOV AL,byte ptr [ESI + 0x3]
0040d9fb  23d1                 AND EDX,ECX
0040d9fd  884703               MOV byte ptr [EDI + 0x3],AL
0040da00  8a4602               MOV AL,byte ptr [ESI + 0x2]
0040da03  c1e902               SHR ECX,0x2
0040da06  884702               MOV byte ptr [EDI + 0x2],AL
0040da09  83ee02               SUB ESI,0x2
0040da0c  83ef02               SUB EDI,0x2
0040da0f  83f908               CMP ECX,0x8
0040da12  728c                 JC 0x0040d9a0
0040da14  fd                   STD
0040da15  f3a5                 MOVSD.REP ES:EDI,ESI
0040da17  fc                   CLD
switchD_0040da18::switchD:
0040da18  ff2495c0da4000       JMP dword ptr [EDX*0x4 + 0x40dac0]
; undefined 1 bytes at 0040da1f

; ==== FUNCTION switchD_0040d9bd::caseD_3 entry=0040da20 sig=undefined caseD_3(void)
0040da20  8a4603               MOV AL,byte ptr [ESI + 0x3]
0040da23  23d1                 AND EDX,ECX
0040da25  884703               MOV byte ptr [EDI + 0x3],AL
0040da28  8a4602               MOV AL,byte ptr [ESI + 0x2]
0040da2b  884702               MOV byte ptr [EDI + 0x2],AL
0040da2e  8a4601               MOV AL,byte ptr [ESI + 0x1]
0040da31  c1e902               SHR ECX,0x2
0040da34  884701               MOV byte ptr [EDI + 0x1],AL
0040da37  83ee03               SUB ESI,0x3
0040da3a  83ef03               SUB EDI,0x3
0040da3d  83f908               CMP ECX,0x8
0040da40  0f825affffff         JC 0x0040d9a0
0040da46  fd                   STD
0040da47  f3a5                 MOVSD.REP ES:EDI,ESI
0040da49  fc                   CLD
switchD_0040da4a::switchD:
0040da4a  ff2495c0da4000       JMP dword ptr [EDX*0x4 + 0x40dac0]

; ==== FUNCTION FUN_0040da51 entry=0040da51 sig=undefined FUN_0040da51(void)
0040da51  2e8bc0               MOV EAX,EAX
switchD_0040d9a2::switchdataD_0040da54:
0040da54  addr 0040da74
0040da58  addr 0040da7c
0040da5c  addr 0040da84
0040da60  addr 0040da8c
0040da64  addr 0040da94
0040da68  addr 0040da9c
0040da6c  addr 0040daa4
0040da70  addr 0040dab7
switchD_0040d9a2::caseD_7:
0040da74  8b448e1c             MOV EAX,dword ptr [ESI + ECX*0x4 + 0x1c]
0040da78  89448f1c             MOV dword ptr [EDI + ECX*0x4 + 0x1c],EAX
switchD_0040d9a2::caseD_6:
0040da7c  8b448e18             MOV EAX,dword ptr [ESI + ECX*0x4 + 0x18]
0040da80  89448f18             MOV dword ptr [EDI + ECX*0x4 + 0x18],EAX
switchD_0040d9a2::caseD_5:
0040da84  8b448e14             MOV EAX,dword ptr [ESI + ECX*0x4 + 0x14]
0040da88  89448f14             MOV dword ptr [EDI + ECX*0x4 + 0x14],EAX
switchD_0040d9a2::caseD_4:
0040da8c  8b448e10             MOV EAX,dword ptr [ESI + ECX*0x4 + 0x10]
0040da90  89448f10             MOV dword ptr [EDI + ECX*0x4 + 0x10],EAX
switchD_0040d9a2::caseD_3:
0040da94  8b448e0c             MOV EAX,dword ptr [ESI + ECX*0x4 + 0xc]
0040da98  89448f0c             MOV dword ptr [EDI + ECX*0x4 + 0xc],EAX
switchD_0040d9a2::caseD_2:
0040da9c  8b448e08             MOV EAX,dword ptr [ESI + ECX*0x4 + 0x8]
0040daa0  89448f08             MOV dword ptr [EDI + ECX*0x4 + 0x8],EAX
switchD_0040d9a2::caseD_1:
0040daa4  8b448e04             MOV EAX,dword ptr [ESI + ECX*0x4 + 0x4]
0040daa8  89448f04             MOV dword ptr [EDI + ECX*0x4 + 0x4],EAX
0040daac  8d048d00000000       LEA EAX,[ECX*0x4 + 0x0]
0040dab3  03f0                 ADD ESI,EAX
0040dab5  03f8                 ADD EDI,EAX
switchD_0040d9a2::caseD_0:
0040dab7  ff2495c0da4000       JMP dword ptr [EDX*0x4 + 0x40dac0]

; ==== FUNCTION FUN_0040dabe entry=0040dabe sig=undefined FUN_0040dabe(void)
0040dabe  8bc0                 MOV EAX,EAX
switchD_0040d997::switchdataD_0040dac0:
0040dac0  addr 0040dad0
0040dac4  addr 0040dad8
0040dac8  addr 0040dae8
0040dacc  addr 0040dafc
switchD_0040d997::caseD_0:
0040dad0  8b4508               MOV EAX,dword ptr [EBP + 0x8]
0040dad3  5e                   POP ESI
0040dad4  5f                   POP EDI
0040dad5  c9                   LEAVE
0040dad6  c3                   RET
; undefined 1 bytes at 0040dad7
switchD_0040d997::caseD_1:
0040dad8  8a4603               MOV AL,byte ptr [ESI + 0x3]
0040dadb  884703               MOV byte ptr [EDI + 0x3],AL
0040dade  8b4508               MOV EAX,dword ptr [EBP + 0x8]
0040dae1  5e                   POP ESI
0040dae2  5f                   POP EDI
0040dae3  c9                   LEAVE
0040dae4  c3                   RET

; ==== FUNCTION FUN_0040dae5 entry=0040dae5 sig=undefined FUN_0040dae5(void)
0040dae5  2e8bc0               MOV EAX,EAX
switchD_0040d997::caseD_2:
0040dae8  8a4603               MOV AL,byte ptr [ESI + 0x3]
0040daeb  884703               MOV byte ptr [EDI + 0x3],AL
0040daee  8a4602               MOV AL,byte ptr [ESI + 0x2]
0040daf1  884702               MOV byte ptr [EDI + 0x2],AL
0040daf4  8b4508               MOV EAX,dword ptr [EBP + 0x8]
0040daf7  5e                   POP ESI
0040daf8  5f                   POP EDI
0040daf9  c9                   LEAVE
0040dafa  c3                   RET
; undefined 1 bytes at 0040dafb
switchD_0040d997::caseD_3:
0040dafc  8a4603               MOV AL,byte ptr [ESI + 0x3]
0040daff  884703               MOV byte ptr [EDI + 0x3],AL
0040db02  8a4602               MOV AL,byte ptr [ESI + 0x2]
0040db05  884702               MOV byte ptr [EDI + 0x2],AL
0040db08  8a4601               MOV AL,byte ptr [ESI + 0x1]
0040db0b  884701               MOV byte ptr [EDI + 0x1],AL
0040db0e  8b4508               MOV EAX,dword ptr [EBP + 0x8]
0040db11  5e                   POP ESI
0040db12  5f                   POP EDI
0040db13  c9                   LEAVE
0040db14  c3                   RET
; undefined 11 bytes at 0040db15

; ==== FUNCTION FUN_0040db20 entry=0040db20 sig=int * __cdecl FUN_0040db20(int param_1, int param_2)
0040db20  53                   PUSH EBX
0040db21  55                   PUSH EBP
0040db22  56                   PUSH ESI
0040db23  8b742414             MOV ESI,dword ptr [ESP + 0x14]
0040db27  0faf742410           IMUL ESI,dword ptr [ESP + 0x10]
0040db2c  83fee0               CMP ESI,-0x20
0040db2f  57                   PUSH EDI
0040db30  7711                 JA 0x0040db43
0040db32  85f6                 TEST ESI,ESI
0040db34  7608                 JBE 0x0040db3e
0040db36  83c60f               ADD ESI,0xf
0040db39  83e6f0               AND ESI,0xfffffff0
0040db3c  eb05                 JMP 0x0040db43
0040db3e  be10000000           MOV ESI,0x10
0040db43  8b1ddce14000         MOV EBX,dword ptr [0x0040e1dc]
0040db49  33d2                 XOR EDX,EDX
0040db4b  83fee0               CMP ESI,-0x20
0040db4e  7742                 JA 0x0040db92
0040db50  3b35f4314100         CMP ESI,dword ptr [0x004131f4]
0040db56  7728                 JA 0x0040db80
0040db58  8bc6                 MOV EAX,ESI
0040db5a  c1e804               SHR EAX,0x4
0040db5d  50                   PUSH EAX
0040db5e  e8ede8ffff           CALL 0x0040c450
0040db63  8bd0                 MOV EDX,EAX
0040db65  83c404               ADD ESP,0x4
0040db68  85d2                 TEST EDX,EDX
0040db6a  7418                 JZ 0x0040db84
0040db6c  8bce                 MOV ECX,ESI
0040db6e  33c0                 XOR EAX,EAX
0040db70  8be9                 MOV EBP,ECX
0040db72  8bfa                 MOV EDI,EDX
0040db74  c1e902               SHR ECX,0x2
0040db77  f3ab                 STOSD.REP ES:EDI
0040db79  8bcd                 MOV ECX,EBP
0040db7b  83e103               AND ECX,0x3
0040db7e  f3aa                 STOSB.REP ES:EDI
0040db80  85d2                 TEST EDX,EDX
0040db82  752d                 JNZ 0x0040dbb1
0040db84  8b0de43c4100         MOV ECX,dword ptr [0x00413ce4]
0040db8a  56                   PUSH ESI
0040db8b  6a08                 PUSH 0x8
0040db8d  51                   PUSH ECX
0040db8e  ffd3                 CALL EBX
0040db90  8bd0                 MOV EDX,EAX
0040db92  85d2                 TEST EDX,EDX
0040db94  751b                 JNZ 0x0040dbb1
0040db96  a1b4344100           MOV EAX,[0x004134b4]
0040db9b  85c0                 TEST EAX,EAX
0040db9d  7412                 JZ 0x0040dbb1
0040db9f  56                   PUSH ESI
0040dba0  e8ebe4ffff           CALL 0x0040c090
0040dba5  83c404               ADD ESP,0x4
0040dba8  85c0                 TEST EAX,EAX
0040dbaa  759d                 JNZ 0x0040db49
0040dbac  5f                   POP EDI
0040dbad  5e                   POP ESI
0040dbae  5d                   POP EBP
0040dbaf  5b                   POP EBX
0040dbb0  c3                   RET
0040dbb1  5f                   POP EDI
0040dbb2  5e                   POP ESI
0040dbb3  5d                   POP EBP
0040dbb4  8bc2                 MOV EAX,EDX
0040dbb6  5b                   POP EBX
0040dbb7  c3                   RET
; undefined 8 bytes at 0040dbb8

; ==== FUNCTION FUN_0040dbc0 entry=0040dbc0 sig=int __cdecl FUN_0040dbc0(undefined4 param_1, undefined4 param_2, undefined4 param_3)
0040dbc0  a1fc374100           MOV EAX,[0x004137fc]
0040dbc5  53                   PUSH EBX
0040dbc6  33db                 XOR EBX,EBX
0040dbc8  56                   PUSH ESI
0040dbc9  85c0                 TEST EAX,EAX
0040dbcb  57                   PUSH EDI
0040dbcc  7542                 JNZ 0x0040dc10
0040dbce  6854e64000           PUSH 0x40e654
0040dbd3  ff15e4e04000         CALL dword ptr [0x0040e0e4]
0040dbd9  8bf0                 MOV ESI,EAX
0040dbdb  85f6                 TEST ESI,ESI
0040dbdd  746a                 JZ 0x0040dc49
0040dbdf  8b3de8e04000         MOV EDI,dword ptr [0x0040e0e8]
0040dbe5  6848e64000           PUSH 0x40e648
0040dbea  56                   PUSH ESI
0040dbeb  ffd7                 CALL EDI
0040dbed  85c0                 TEST EAX,EAX
0040dbef  a3fc374100           MOV [0x004137fc],EAX
0040dbf4  7453                 JZ 0x0040dc49
0040dbf6  6838e64000           PUSH 0x40e638
0040dbfb  56                   PUSH ESI
0040dbfc  ffd7                 CALL EDI
0040dbfe  6824e64000           PUSH 0x40e624
0040dc03  56                   PUSH ESI
0040dc04  a300384100           MOV [0x00413800],EAX
0040dc09  ffd7                 CALL EDI
0040dc0b  a304384100           MOV [0x00413804],EAX
0040dc10  a100384100           MOV EAX,[0x00413800]
0040dc15  85c0                 TEST EAX,EAX
0040dc17  7404                 JZ 0x0040dc1d
0040dc19  ffd0                 CALL EAX
0040dc1b  8bd8                 MOV EBX,EAX
0040dc1d  85db                 TEST EBX,EBX
0040dc1f  740e                 JZ 0x0040dc2f
0040dc21  a104384100           MOV EAX,[0x00413804]
0040dc26  85c0                 TEST EAX,EAX
0040dc28  7405                 JZ 0x0040dc2f
0040dc2a  53                   PUSH EBX
0040dc2b  ffd0                 CALL EAX
0040dc2d  8bd8                 MOV EBX,EAX
0040dc2f  8b442418             MOV EAX,dword ptr [ESP + 0x18]
0040dc33  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
0040dc37  8b542410             MOV EDX,dword ptr [ESP + 0x10]
0040dc3b  50                   PUSH EAX
0040dc3c  51                   PUSH ECX
0040dc3d  52                   PUSH EDX
0040dc3e  53                   PUSH EBX
0040dc3f  ff15fc374100         CALL dword ptr [0x004137fc]
0040dc45  5f                   POP EDI
0040dc46  5e                   POP ESI
0040dc47  5b                   POP EBX
0040dc48  c3                   RET
0040dc49  5f                   POP EDI
0040dc4a  5e                   POP ESI
0040dc4b  33c0                 XOR EAX,EAX
0040dc4d  5b                   POP EBX
0040dc4e  c3                   RET
; undefined 1 bytes at 0040dc4f

; ==== FUNCTION KERNEL32.DLL::RtlUnwind entry=0040dc50 sig=void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
0040dc50  ff2508e24000         JMP dword ptr [0x0040e208]
; undefined 10 bytes at 0040dc56

; ==== FUNCTION __strnicmp entry=0040dc60 sig=int __cdecl __strnicmp(char * _Str1, char * _Str2, size_t _MaxCount)
0040dc60  55                   PUSH EBP
0040dc61  8bec                 MOV EBP,ESP
0040dc63  57                   PUSH EDI
0040dc64  56                   PUSH ESI
0040dc65  53                   PUSH EBX
0040dc66  8b4d10               MOV ECX,dword ptr [EBP + 0x10]
0040dc69  0bc9                 OR ECX,ECX
0040dc6b  0f8495000000         JZ 0x0040dd06
0040dc71  8b7508               MOV ESI,dword ptr [EBP + 0x8]
0040dc74  8b7d0c               MOV EDI,dword ptr [EBP + 0xc]
0040dc77  8d0540344100         LEA EAX,[0x413440]
0040dc7d  83780800             CMP dword ptr [EAX + 0x8],0x0
0040dc81  7543                 JNZ 0x0040dcc6
0040dc83  b741                 MOV BH,0x41
0040dc85  b35a                 MOV BL,0x5a
0040dc87  b620                 MOV DH,0x20
0040dc89  2e8bc0               MOV EAX,EAX
0040dc8c  8a26                 MOV AH,byte ptr [ESI]
0040dc8e  0ae4                 OR AH,AH
0040dc90  8a07                 MOV AL,byte ptr [EDI]
0040dc92  7421                 JZ 0x0040dcb5
0040dc94  0ac0                 OR AL,AL
0040dc96  741d                 JZ 0x0040dcb5
0040dc98  46                   INC ESI
0040dc99  47                   INC EDI
0040dc9a  38fc                 CMP AH,BH
0040dc9c  7206                 JC 0x0040dca4
0040dc9e  38dc                 CMP AH,BL
0040dca0  7702                 JA 0x0040dca4
0040dca2  02e6                 ADD AH,DH
0040dca4  38f8                 CMP AL,BH
0040dca6  7206                 JC 0x0040dcae
0040dca8  38d8                 CMP AL,BL
0040dcaa  7702                 JA 0x0040dcae
0040dcac  02c6                 ADD AL,DH
0040dcae  38c4                 CMP AH,AL
0040dcb0  7509                 JNZ 0x0040dcbb
0040dcb2  49                   DEC ECX
0040dcb3  75d7                 JNZ 0x0040dc8c
0040dcb5  33c9                 XOR ECX,ECX
0040dcb7  38c4                 CMP AH,AL
0040dcb9  744b                 JZ 0x0040dd06
0040dcbb  b9ffffffff           MOV ECX,0xffffffff
0040dcc0  7244                 JC 0x0040dd06
0040dcc2  f7d9                 NEG ECX
0040dcc4  eb40                 JMP 0x0040dd06
0040dcc6  33c0                 XOR EAX,EAX
0040dcc8  33db                 XOR EBX,EBX
0040dcca  8bc0                 MOV EAX,EAX
0040dccc  8a06                 MOV AL,byte ptr [ESI]
0040dcce  0bc0                 OR EAX,EAX
0040dcd0  8a1f                 MOV BL,byte ptr [EDI]
0040dcd2  7423                 JZ 0x0040dcf7
0040dcd4  0bdb                 OR EBX,EBX
0040dcd6  741f                 JZ 0x0040dcf7
0040dcd8  46                   INC ESI
0040dcd9  47                   INC EDI
0040dcda  51                   PUSH ECX
0040dcdb  50                   PUSH EAX
0040dcdc  53                   PUSH EBX
0040dcdd  e8be000000           CALL 0x0040dda0
0040dce2  8bd8                 MOV EBX,EAX
0040dce4  83c404               ADD ESP,0x4
0040dce7  e8b4000000           CALL 0x0040dda0
0040dcec  83c404               ADD ESP,0x4
0040dcef  59                   POP ECX
0040dcf0  3bc3                 CMP EAX,EBX
0040dcf2  7509                 JNZ 0x0040dcfd
0040dcf4  49                   DEC ECX
0040dcf5  75d5                 JNZ 0x0040dccc
0040dcf7  33c9                 XOR ECX,ECX
0040dcf9  3bc3                 CMP EAX,EBX
0040dcfb  7409                 JZ 0x0040dd06
0040dcfd  b9ffffffff           MOV ECX,0xffffffff
0040dd02  7202                 JC 0x0040dd06
0040dd04  f7d9                 NEG ECX
0040dd06  8bc1                 MOV EAX,ECX
0040dd08  5b                   POP EBX
0040dd09  5e                   POP ESI
0040dd0a  5f                   POP EDI
0040dd0b  c9                   LEAVE
0040dd0c  c3                   RET
; undefined 3 bytes at 0040dd0d

; ==== FUNCTION __strcmpi entry=0040dd10 sig=int __cdecl __strcmpi(char * _Str1, char * _Str2)
0040dd10  55                   PUSH EBP
0040dd11  8bec                 MOV EBP,ESP
0040dd13  57                   PUSH EDI
0040dd14  56                   PUSH ESI
0040dd15  53                   PUSH EBX
0040dd16  8b750c               MOV ESI,dword ptr [EBP + 0xc]
0040dd19  8b7d08               MOV EDI,dword ptr [EBP + 0x8]
0040dd1c  8d0540344100         LEA EAX,[0x413440]
0040dd22  83780800             CMP dword ptr [EAX + 0x8],0x0
0040dd26  753b                 JNZ 0x0040dd63
0040dd28  b0ff                 MOV AL,0xff
0040dd2a  8bc0                 MOV EAX,EAX
0040dd2c  0ac0                 OR AL,AL
0040dd2e  742e                 JZ 0x0040dd5e
0040dd30  8a06                 MOV AL,byte ptr [ESI]
0040dd32  46                   INC ESI
0040dd33  8a27                 MOV AH,byte ptr [EDI]
0040dd35  47                   INC EDI
0040dd36  38c4                 CMP AH,AL
0040dd38  74f2                 JZ 0x0040dd2c
0040dd3a  2c41                 SUB AL,0x41
0040dd3c  3c1a                 CMP AL,0x1a
0040dd3e  1ac9                 SBB CL,CL
0040dd40  80e120               AND CL,0x20
0040dd43  02c1                 ADD AL,CL
0040dd45  0441                 ADD AL,0x41
0040dd47  86e0                 XCHG AL,AH
0040dd49  2c41                 SUB AL,0x41
0040dd4b  3c1a                 CMP AL,0x1a
0040dd4d  1ac9                 SBB CL,CL
0040dd4f  80e120               AND CL,0x20
0040dd52  02c1                 ADD AL,CL
0040dd54  0441                 ADD AL,0x41
0040dd56  38e0                 CMP AL,AH
0040dd58  74d2                 JZ 0x0040dd2c
0040dd5a  1ac0                 SBB AL,AL
0040dd5c  1cff                 SBB AL,0xff
0040dd5e  0fbec0               MOVSX EAX,AL
0040dd61  eb34                 JMP 0x0040dd97
0040dd63  b8ff000000           MOV EAX,0xff
0040dd68  33db                 XOR EBX,EBX
0040dd6a  8bc0                 MOV EAX,EAX
0040dd6c  0ac0                 OR AL,AL
0040dd6e  7427                 JZ 0x0040dd97
0040dd70  8a06                 MOV AL,byte ptr [ESI]
0040dd72  46                   INC ESI
0040dd73  8a1f                 MOV BL,byte ptr [EDI]
0040dd75  47                   INC EDI
0040dd76  38d8                 CMP AL,BL
0040dd78  74f2                 JZ 0x0040dd6c
0040dd7a  50                   PUSH EAX
0040dd7b  53                   PUSH EBX
0040dd7c  e81f000000           CALL 0x0040dda0
0040dd81  8bd8                 MOV EBX,EAX
0040dd83  83c404               ADD ESP,0x4
0040dd86  e815000000           CALL 0x0040dda0
0040dd8b  83c404               ADD ESP,0x4
0040dd8e  38c3                 CMP BL,AL
0040dd90  74da                 JZ 0x0040dd6c
0040dd92  1bc0                 SBB EAX,EAX
0040dd94  83d8ff               SBB EAX,-0x1
0040dd97  5b                   POP EBX
0040dd98  5e                   POP ESI
0040dd99  5f                   POP EDI
0040dd9a  c9                   LEAVE
0040dd9b  c3                   RET
; undefined 4 bytes at 0040dd9c

; ==== FUNCTION FUN_0040dda0 entry=0040dda0 sig=uint __cdecl FUN_0040dda0(uint param_1)
0040dda0  a148344100           MOV EAX,[0x00413448]
0040dda5  83ec08               SUB ESP,0x8
0040dda8  85c0                 TEST EAX,EAX
0040ddaa  53                   PUSH EBX
0040ddab  751e                 JNZ 0x0040ddcb
0040ddad  8b442410             MOV EAX,dword ptr [ESP + 0x10]
0040ddb1  83f841               CMP EAX,0x41
0040ddb4  0f8cdf000000         JL 0x0040de99
0040ddba  83f85a               CMP EAX,0x5a
0040ddbd  0f8fd6000000         JG 0x0040de99
0040ddc3  83c020               ADD EAX,0x20
0040ddc6  5b                   POP EBX
0040ddc7  83c408               ADD ESP,0x8
0040ddca  c3                   RET
0040ddcb  8b5c2410             MOV EBX,dword ptr [ESP + 0x10]
0040ddcf  81fb00010000         CMP EBX,0x100
0040ddd5  7d2c                 JGE 0x0040de03
0040ddd7  833d3c10410001       CMP dword ptr [0x0041103c],0x1
0040ddde  7e0d                 JLE 0x0040dded
0040dde0  6a01                 PUSH 0x1
0040dde2  53                   PUSH EBX
0040dde3  e8c8c5ffff           CALL 0x0040a3b0
0040dde8  83c408               ADD ESP,0x8
0040ddeb  eb0b                 JMP 0x0040ddf8
0040dded  a1300e4100           MOV EAX,[0x00410e30]
0040ddf2  8a0458               MOV AL,byte ptr [EAX + EBX*0x2]
0040ddf5  83e001               AND EAX,0x1
0040ddf8  85c0                 TEST EAX,EAX
0040ddfa  7507                 JNZ 0x0040de03
0040ddfc  8bc3                 MOV EAX,EBX
0040ddfe  5b                   POP EBX
0040ddff  83c408               ADD ESP,0x8
0040de02  c3                   RET
0040de03  8b15300e4100         MOV EDX,dword ptr [0x00410e30]
0040de09  8bc3                 MOV EAX,EBX
0040de0b  c1f808               SAR EAX,0x8
0040de0e  8bc8                 MOV ECX,EAX
0040de10  81e1ff000000         AND ECX,0xff
0040de16  f6444a0180           TEST byte ptr [EDX + ECX*0x2 + 0x1],0x80
0040de1b  7414                 JZ 0x0040de31
0040de1d  88442410             MOV byte ptr [ESP + 0x10],AL
0040de21  885c2411             MOV byte ptr [ESP + 0x11],BL
0040de25  c644241200           MOV byte ptr [ESP + 0x12],0x0
0040de2a  b802000000           MOV EAX,0x2
0040de2f  eb0e                 JMP 0x0040de3f
0040de31  885c2410             MOV byte ptr [ESP + 0x10],BL
0040de35  c644241100           MOV byte ptr [ESP + 0x11],0x0
0040de3a  b801000000           MOV EAX,0x1
0040de3f  6a01                 PUSH 0x1
0040de41  6a00                 PUSH 0x0
0040de43  8d4c240c             LEA ECX,[ESP + 0xc]
0040de47  6a03                 PUSH 0x3
0040de49  51                   PUSH ECX
0040de4a  8d542420             LEA EDX,[ESP + 0x20]
0040de4e  50                   PUSH EAX
0040de4f  a148344100           MOV EAX,[0x00413448]
0040de54  52                   PUSH EDX
0040de55  6800010000           PUSH 0x100
0040de5a  50                   PUSH EAX
0040de5b  e8f0d2ffff           CALL 0x0040b150
0040de60  83c420               ADD ESP,0x20
0040de63  85c0                 TEST EAX,EAX
0040de65  7507                 JNZ 0x0040de6e
0040de67  8bc3                 MOV EAX,EBX
0040de69  5b                   POP EBX
0040de6a  83c408               ADD ESP,0x8
0040de6d  c3                   RET
0040de6e  83f801               CMP EAX,0x1
0040de71  750e                 JNZ 0x0040de81
0040de73  8b442404             MOV EAX,dword ptr [ESP + 0x4]
0040de77  25ff000000           AND EAX,0xff
0040de7c  5b                   POP EBX
0040de7d  83c408               ADD ESP,0x8
0040de80  c3                   RET
0040de81  8b442405             MOV EAX,dword ptr [ESP + 0x5]
0040de85  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
0040de89  25ff000000           AND EAX,0xff
0040de8e  81e1ff000000         AND ECX,0xff
0040de94  c1e008               SHL EAX,0x8
0040de97  0bc1                 OR EAX,ECX
0040de99  5b                   POP EBX
0040de9a  83c408               ADD ESP,0x8
0040de9d  c3                   RET
; undefined 354 bytes at 0040de9e
0040e000  addr 0000f336
0040e004  addr 0000f2bc
0040e008  addr 0000f2ca
0040e00c  addr 0000f2de
0040e010  addr 0000f2ee
0040e014  addr 0000f304
0040e018  addr 0000f316
0040e01c  addr 0000f326
0040e020  addr 0000f346
0040e024  addr 0000f358
0040e028  addr 0000f368
0040e02c  addr 0000f37a
0040e030  addr 0000f388
0040e034  addr 0000f396
0040e038  addr 0000f3a6
0040e03c  addr 0000f3b8
; undefined 4 bytes at 0040e040
0040e044  addr 0000f134
0040e048  addr 0000f156
0040e04c  addr 0000f164
0040e050  addr 0000f170
0040e054  addr 0000f17a
0040e058  addr 0000f190
0040e05c  addr 0000f19a
0040e060  addr 0000f1ae
0040e064  addr 0000f1be
0040e068  addr 0000f1d0
0040e06c  addr 0000f1e0
0040e070  addr 0000f1ee
0040e074  addr 0000f1fc
0040e078  addr 0000f212
0040e07c  addr 0000f228
0040e080  addr 0000f238
0040e084  addr 0000f246
0040e088  addr 0000f254
0040e08c  addr 0000f26e
0040e090  addr 0000f280
0040e094  addr 0000f144
; undefined 4 bytes at 0040e098
0040e09c  addr 0000ec72
0040e0a0  addr 0000ec82
0040e0a4  addr 0000ec8e
0040e0a8  addr 0000eca4
0040e0ac  addr 0000ec60
0040e0b0  addr 0000ec32
0040e0b4  addr 0000ecca
0040e0b8  addr 0000ecda
0040e0bc  addr 0000ece8
0040e0c0  addr 0000ecf8
0040e0c4  addr 0000ed06
0040e0c8  addr 0000eafc
0040e0cc  addr 0000ec40
0040e0d0  addr 0000ec4a
0040e0d4  addr 0000eac4
0040e0d8  addr 0000eab6
0040e0dc  addr 0000eaa6
0040e0e0  addr 0000ea96
0040e0e4  addr 0000ea86
0040e0e8  addr 0000ea74
0040e0ec  addr 0000ea66
0040e0f0  addr 0000ea54
0040e0f4  addr 0000ea3c
0040e0f8  addr 0000ea30
0040e0fc  addr 0000ea26
0040e100  addr 0000ea1c
0040e104  addr 0000ea12
0040e108  addr 0000ea06
0040e10c  addr 0000ec1e
0040e110  addr 0000ec0e
0040e114  addr 0000ec02
0040e118  addr 0000ebf0
0040e11c  addr 0000ebda
0040e120  addr 0000ebbc
0040e124  addr 0000ebb2
0040e128  addr 0000eba2
0040e12c  addr 0000eb8c
0040e130  addr 0000eb82
0040e134  addr 0000eb76
0040e138  addr 0000eb6a
0040e13c  addr 0000eb54
0040e140  addr 0000eb48
0040e144  addr 0000eb3c
0040e148  addr 0000eb2c
0040e14c  addr 0000eb18
0040e150  addr 0000eb0c
0040e154  addr 0000eaec
0040e158  addr 0000eadc
0040e15c  addr 0000ecae
0040e160  addr 0000f6a6
0040e164  addr 0000f674
0040e168  addr 0000f65a
0040e16c  addr 0000f640
0040e170  addr 0000f624
0040e174  addr 0000f614
0040e178  addr 0000f606
0040e17c  addr 0000f5f8
0040e180  addr 0000f5ea
0040e184  addr 0000f68c
0040e188  addr 0000f6b2
0040e18c  addr 0000e9fc
0040e190  addr 0000f5cc
0040e194  addr 0000f5c0
0040e198  addr 0000f5de
0040e19c  addr 0000f59e
0040e1a0  addr 0000f58e
0040e1a4  addr 0000f5b0
0040e1a8  addr 0000f566
0040e1ac  addr 0000f554
0040e1b0  addr 0000f57a
0040e1b4  addr 0000f532
0040e1b8  addr 0000f522
0040e1bc  addr 0000f542
0040e1c0  addr 0000f4f6
0040e1c4  addr 0000f4e8
0040e1c8  addr 0000f50c
0040e1cc  addr 0000f4c8
0040e1d0  addr 0000f4b6
0040e1d4  addr 0000f4da
0040e1d8  addr 0000f496
0040e1dc  addr 0000f48a
0040e1e0  addr 0000f4a2
0040e1e4  addr 0000f46a
0040e1e8  addr 0000f45c
0040e1ec  addr 0000f47e
0040e1f0  addr 0000f43e
0040e1f4  addr 0000f430
0040e1f8  addr 0000f44e
0040e1fc  addr 0000f400
0040e200  addr 0000f3e6
0040e204  addr 0000f418
0040e208  addr 0000f6c8
0040e20c  addr 0000f3d6
0040e210  addr 0000f6bc
; undefined 4 bytes at 0040e214
0040e218  addr 0000ee4c
0040e21c  addr 0000ee3e
0040e220  addr 0000ee5e
0040e224  addr 0000ee6a
0040e228  addr 0000ee7a
0040e22c  addr 0000ee2e
0040e230  addr 0000ee22
0040e234  addr 0000ee0e
0040e238  addr 0000eff0
0040e23c  addr 0000eeae
0040e240  addr 0000ee88
0040e244  addr 0000edd0
0040e248  addr 0000edc2
0040e24c  addr 0000edb4
0040e250  addr 0000eda8
0040e254  addr 0000ed98
0040e258  addr 0000ed86
0040e25c  addr 0000ed70
0040e260  addr 0000ed5c
0040e264  addr 0000ed4c
0040e268  addr 0000ed3e
0040e26c  addr 0000ed32
0040e270  addr 0000ed22
0040e274  addr 0000ee9a
0040e278  addr 0000eede
0040e27c  addr 0000eec0
0040e280  addr 0000eecc
0040e284  addr 0000ef0e
0040e288  addr 0000eef0
0040e28c  addr 0000ef02
0040e290  addr 0000ef34
0040e294  addr 0000ef1e
0040e298  addr 0000ef2c
0040e29c  addr 0000ef64
0040e2a0  addr 0000ef42
0040e2a4  addr 0000ef52
0040e2a8  addr 0000f112
0040e2ac  addr 0000ef70
0040e2b0  addr 0000f0ec
0040e2b4  addr 0000f106
0040e2b8  addr 0000f0fa
0040e2bc  addr 0000f0be
0040e2c0  addr 0000f0e0
0040e2c4  addr 0000f0cc
0040e2c8  addr 0000f086
0040e2cc  addr 0000f0ac
0040e2d0  addr 0000f09c
0040e2d4  addr 0000f04c
0040e2d8  addr 0000f074
0040e2dc  addr 0000f05a
0040e2e0  addr 0000efde
0040e2e4  addr 0000f034
0040e2e8  addr 0000edde
0040e2ec  addr 0000efd0
0040e2f0  addr 0000efc4
0040e2f4  addr 0000efae
0040e2f8  addr 0000ef9c
0040e2fc  addr 0000ef8e
0040e300  addr 0000ef7c
0040e304  addr 0000edfa
0040e308  addr 0000edee
0040e30c  addr 0000f000
0040e310  addr 0000f012
0040e314  addr 0000f026
; undefined 4 bytes at 0040e318
0040e31c  addr 0000f29a
; undefined 28 bytes at 0040e320
0040e33c  ds "runtime error "
0040e34c  ds "TLOSS error\r\n"
0040e35c  ds "SING error\r\n"
0040e36c  ds "DOMAIN error\r\n"
0040e37c  ds "R6028\r\n- unable to initialize heap\r\n"
0040e3a4  ds "R6027\r\n- not enough space for lowio initialization\r\n"
0040e3dc  ds "R6026\r\n- not enough space for stdio initialization\r\n"
0040e414  ds "R6025\r\n- pure virtual function call\r\n"
0040e43c  ds "R6024\r\n- not enough space for _onexit/atexit table\r\n"
0040e474  ds "R6019\r\n- unable to open console device\r\n"
0040e4a0  ds "R6018\r\n- unexpected heap error\r\n"
0040e4c4  ds "R6017\r\n- unexpected multithread lock error\r\n"
0040e4f4  ds "R6016\r\n- not enough space for thread data\r\n"
0040e520  ds "\r\nabnormal program termination\r\n"
0040e544  ds "R6009\r\n- not enough space for environment\r\n"
0040e570  ds "R6008\r\n- not enough space for arguments\r\n"
0040e59c  ds "R6002\r\n- floating point not loaded\r\n"
0040e5c4  ds "Microsoft Visual C++ Runtime Library"
; undefined 3 bytes at 0040e5e9
0040e5ec  undefined4 00000A0Ah
0040e5f0  ds "Runtime Error!\n\nProgram: "
0040e60c  ds "<program name unknown>"
0040e624  ds "GetLastActivePopup"
; undefined 1 bytes at 0040e637
0040e638  ds "GetActiveWindow"
0040e648  ds "MessageBoxA"
0040e654  ds "user32.dll"
; undefined 1 bytes at 0040e65f
0040e660  ddw E774h
0040e664  ddw 0h
0040e668  ddw 0h
0040e66c  ddw ED14h
0040e670  ddw E09Ch
0040e674  ddw E8F0h
0040e678  ddw 0h
0040e67c  ddw 0h
0040e680  ddw F128h
0040e684  ddw E218h
0040e688  ddw E71Ch
0040e68c  ddw 0h
0040e690  ddw 0h
0040e694  ddw F290h
0040e698  ddw E044h
0040e69c  ddw E9F4h
0040e6a0  ddw 0h
0040e6a4  ddw 0h
0040e6a8  ddw F2AEh
0040e6ac  ddw E31Ch
0040e6b0  ddw E6D8h
0040e6b4  ddw 0h
0040e6b8  ddw 0h
0040e6bc  ddw F3C8h
0040e6c0  ddw E000h
; undefined 20 bytes at 0040e6c4
0040e6d8  ddw F336h
0040e6dc  ddw F2BCh
0040e6e0  ddw F2CAh
0040e6e4  ddw F2DEh
0040e6e8  ddw F2EEh
0040e6ec  ddw F304h
0040e6f0  ddw F316h
0040e6f4  ddw F326h
0040e6f8  ddw F346h
0040e6fc  ddw F358h
0040e700  ddw F368h
0040e704  ddw F37Ah
0040e708  ddw F388h
0040e70c  ddw F396h
0040e710  ddw F3A6h
0040e714  ddw F3B8h
; undefined 4 bytes at 0040e718
0040e71c  ddw F134h
0040e720  ddw F156h
0040e724  ddw F164h
0040e728  ddw F170h
0040e72c  ddw F17Ah
0040e730  ddw F190h
0040e734  ddw F19Ah
0040e738  ddw F1AEh
0040e73c  ddw F1BEh
0040e740  ddw F1D0h
0040e744  ddw F1E0h
0040e748  ddw F1EEh
0040e74c  ddw F1FCh
0040e750  ddw F212h
0040e754  ddw F228h
0040e758  ddw F238h
0040e75c  ddw F246h
0040e760  ddw F254h
0040e764  ddw F26Eh
0040e768  ddw F280h
0040e76c  ddw F144h
; undefined 4 bytes at 0040e770
0040e774  ddw EC72h
0040e778  ddw EC82h
0040e77c  ddw EC8Eh
0040e780  ddw ECA4h
0040e784  ddw EC60h
0040e788  ddw EC32h
0040e78c  ddw ECCAh
0040e790  ddw ECDAh
0040e794  ddw ECE8h
0040e798  ddw ECF8h
0040e79c  ddw ED06h
0040e7a0  ddw EAFCh
0040e7a4  ddw EC40h
0040e7a8  ddw EC4Ah
0040e7ac  ddw EAC4h
0040e7b0  ddw EAB6h
0040e7b4  ddw EAA6h
0040e7b8  ddw EA96h
0040e7bc  ddw EA86h
0040e7c0  ddw EA74h
0040e7c4  ddw EA66h
0040e7c8  ddw EA54h
0040e7cc  ddw EA3Ch
0040e7d0  ddw EA30h
0040e7d4  ddw EA26h
0040e7d8  ddw EA1Ch
0040e7dc  ddw EA12h
0040e7e0  ddw EA06h
0040e7e4  ddw EC1Eh
0040e7e8  ddw EC0Eh
0040e7ec  ddw EC02h
0040e7f0  ddw EBF0h
0040e7f4  ddw EBDAh
0040e7f8  ddw EBBCh
0040e7fc  ddw EBB2h
0040e800  ddw EBA2h
0040e804  ddw EB8Ch
0040e808  ddw EB82h
0040e80c  ddw EB76h
0040e810  ddw EB6Ah
0040e814  ddw EB54h
0040e818  ddw EB48h
0040e81c  ddw EB3Ch
0040e820  ddw EB2Ch
0040e824  ddw EB18h
0040e828  ddw EB0Ch
0040e82c  ddw EAECh
0040e830  ddw EADCh
0040e834  ddw ECAEh
0040e838  ddw F6A6h
0040e83c  ddw F674h
0040e840  ddw F65Ah
0040e844  ddw F640h
0040e848  ddw F624h
0040e84c  ddw F614h
0040e850  ddw F606h
0040e854  ddw F5F8h
0040e858  ddw F5EAh
0040e85c  ddw F68Ch
0040e860  ddw F6B2h
0040e864  ddw E9FCh
0040e868  ddw F5CCh
0040e86c  ddw F5C0h
0040e870  ddw F5DEh
0040e874  ddw F59Eh
0040e878  ddw F58Eh
0040e87c  ddw F5B0h
0040e880  ddw F566h
0040e884  ddw F554h
0040e888  ddw F57Ah
0040e88c  ddw F532h
0040e890  ddw F522h
0040e894  ddw F542h
0040e898  ddw F4F6h
0040e89c  ddw F4E8h
0040e8a0  ddw F50Ch
0040e8a4  ddw F4C8h
0040e8a8  ddw F4B6h
0040e8ac  ddw F4DAh
0040e8b0  ddw F496h
0040e8b4  ddw F48Ah
0040e8b8  ddw F4A2h
0040e8bc  ddw F46Ah
0040e8c0  ddw F45Ch
0040e8c4  ddw F47Eh
0040e8c8  ddw F43Eh
0040e8cc  ddw F430h
0040e8d0  ddw F44Eh
0040e8d4  ddw F400h
0040e8d8  ddw F3E6h
0040e8dc  ddw F418h
0040e8e0  ddw F6C8h
0040e8e4  ddw F3D6h
0040e8e8  ddw F6BCh
; undefined 4 bytes at 0040e8ec
0040e8f0  ddw EE4Ch
0040e8f4  ddw EE3Eh
0040e8f8  ddw EE5Eh
0040e8fc  ddw EE6Ah
0040e900  ddw EE7Ah
0040e904  ddw EE2Eh
0040e908  ddw EE22h
0040e90c  ddw EE0Eh
0040e910  ddw EFF0h
0040e914  ddw EEAEh
0040e918  ddw EE88h
0040e91c  ddw EDD0h
0040e920  ddw EDC2h
0040e924  ddw EDB4h
0040e928  ddw EDA8h
0040e92c  ddw ED98h
0040e930  ddw ED86h
0040e934  ddw ED70h
0040e938  ddw ED5Ch
0040e93c  ddw ED4Ch
0040e940  ddw ED3Eh
0040e944  ddw ED32h
0040e948  ddw ED22h
0040e94c  ddw EE9Ah
0040e950  ddw EEDEh
0040e954  ddw EEC0h
0040e958  ddw EECCh
0040e95c  ddw EF0Eh
0040e960  ddw EEF0h
0040e964  ddw EF02h
0040e968  ddw EF34h
0040e96c  ddw EF1Eh
0040e970  ddw EF2Ch
0040e974  ddw EF64h
0040e978  ddw EF42h
0040e97c  ddw EF52h
0040e980  ddw F112h
0040e984  ddw EF70h
0040e988  ddw F0ECh
0040e98c  ddw F106h
0040e990  ddw F0FAh
0040e994  ddw F0BEh
0040e998  ddw F0E0h
0040e99c  ddw F0CCh
0040e9a0  ddw F086h
0040e9a4  ddw F0ACh
0040e9a8  ddw F09Ch
0040e9ac  ddw F04Ch
0040e9b0  ddw F074h
0040e9b4  ddw F05Ah
0040e9b8  ddw EFDEh
0040e9bc  ddw F034h
0040e9c0  ddw EDDEh
0040e9c4  ddw EFD0h
0040e9c8  ddw EFC4h
0040e9cc  ddw EFAEh
0040e9d0  ddw EF9Ch
0040e9d4  ddw EF8Eh
0040e9d8  ddw EF7Ch
0040e9dc  ddw EDFAh
0040e9e0  ddw EDEEh
0040e9e4  ddw F000h
0040e9e8  ddw F012h
0040e9ec  ddw F026h
; undefined 4 bytes at 0040e9f0
0040e9f4  ddw F29Ah
; undefined 4 bytes at 0040e9f8
0040e9fc  dw 26Fh
0040e9fe  ds "WinExec"
0040ea06  dw 1AFh
0040ea08  ds "OpenFile"
; undefined 1 bytes at 0040ea11
0040ea12  dw 28Bh
0040ea14  ds "_lclose"
0040ea1c  dw 290h
0040ea1e  ds "_lwrite"
0040ea26  dw 28Ch
0040ea28  ds "_lcreat"
0040ea30  dw 292h
0040ea32  ds "lstrcatA"
; undefined 1 bytes at 0040ea3b
0040ea3c  dw 151h
0040ea3e  ds "GetWindowsDirectoryA"
; undefined 1 bytes at 0040ea53
0040ea54  dw 23Eh
0040ea56  ds "SizeofResource"
; undefined 1 bytes at 0040ea65
0040ea66  dw 98h
0040ea68  ds "FreeLibrary"
0040ea74  dw 116h
0040ea76  ds "GetProcAddress"
; undefined 1 bytes at 0040ea85
0040ea86  dw 190h
0040ea88  ds "LoadLibraryA"
; undefined 1 bytes at 0040ea95
0040ea96  dw 213h
0040ea98  ds "SetErrorMode"
; undefined 1 bytes at 0040eaa5
0040eaa6  dw 9Ah
0040eaa8  ds "FreeResource"
; undefined 1 bytes at 0040eab5
0040eab6  dw 4Eh
0040eab8  ds "DeleteFileA"
0040eac4  dw 10Ch
0040eac6  ds "GetPrivateProfileIntA"
0040eadc  dw 1A3h
0040eade  ds "LockResource"
; undefined 1 bytes at 0040eaeb
0040eaec  dw 195h
0040eaee  ds "LoadResource"
; undefined 1 bytes at 0040eafb
0040eafc  dw 89h
0040eafe  ds "FindResourceA"
0040eb0c  dw 25h
0040eb0e  ds "CopyFileA"
0040eb18  dw 13Bh
0040eb1a  ds "GetTempFileNameA"
; undefined 1 bytes at 0040eb2b
0040eb2c  dw 13Dh
0040eb2e  ds "GetTempPathA"
; undefined 1 bytes at 0040eb3b
0040eb3c  dw 29Bh
0040eb3e  ds "lstrcpyA"
; undefined 1 bytes at 0040eb47
0040eb48  dw 2A1h
0040eb4a  ds "lstrlenA"
; undefined 1 bytes at 0040eb53
0040eb54  dw FCh
0040eb56  ds "GetModuleFileNameA"
; undefined 1 bytes at 0040eb69
0040eb6a  dw 298h
0040eb6c  ds "lstrcmpiA"
0040eb76  dw 295h
0040eb78  ds "lstrcmpA"
; undefined 1 bytes at 0040eb81
0040eb82  dw 28Eh
0040eb84  ds "_lopen"
; undefined 1 bytes at 0040eb8b
0040eb8c  dw 131h
0040eb8e  ds "GetSystemDirectoryA"
0040eba2  dw DFh
0040eba4  ds "GetDriveTypeA"
0040ebb2  dw 28Fh
0040ebb4  ds "_lread"
; undefined 1 bytes at 0040ebbb
0040ebbc  dw 27Fh
0040ebbe  ds "WritePrivateProfileStringA"
; undefined 1 bytes at 0040ebd9
0040ebda  dw 26Ah
0040ebdc  ds "WaitForSingleObject"
0040ebf0  dw 3Dh
0040ebf2  ds "CreateProcessA"
; undefined 1 bytes at 0040ec01
0040ec02  dw 29Eh
0040ec04  ds "lstrcpynA"
0040ec0e  dw 14Dh
0040ec10  ds "GetVersionExA"
0040ec1e  dw 1DFh
0040ec20  ds "RemoveDirectoryA"
; undefined 1 bytes at 0040ec31
0040ec32  dw 1A7h
0040ec34  ds "MoveFileExA"
0040ec40  dw 28Dh
0040ec42  ds "_llseek"
0040ec4a  dw 217h
0040ec4c  ds "SetFileAttributesA"
; undefined 1 bytes at 0040ec5f
0040ec60  dw 82h
0040ec62  ds "FindFirstFileA"
; undefined 1 bytes at 0040ec71
0040ec72  dw 87h
0040ec74  ds "FindNextFileA"
0040ec82  dw 7Eh
0040ec84  ds "FindClose"
0040ec8e  dw E8h
0040ec90  ds "GetFileAttributesA"
; undefined 1 bytes at 0040eca3
0040eca4  dw 1AAh
0040eca6  ds "MulDiv"
; undefined 1 bytes at 0040ecad
0040ecae  dw 112h
0040ecb0  ds "GetPrivateProfileStringA"
; undefined 1 bytes at 0040ecc9
0040ecca  dw F5h
0040eccc  ds "GetLocalTime"
; undefined 1 bytes at 0040ecd9
0040ecda  dw 15Ch
0040ecdc  ds "GlobalFree"
; undefined 1 bytes at 0040ece7
0040ece8  dw 166h
0040ecea  ds "GlobalUnlock"
; undefined 1 bytes at 0040ecf7
0040ecf8  dw 160h
0040ecfa  ds "GlobalLock"
; undefined 1 bytes at 0040ed05
0040ed06  dw 155h
0040ed08  ds "GlobalAlloc"
0040ed14  ds "KERNEL32.dll"
; undefined 1 bytes at 0040ed21
0040ed22  dw CBh
0040ed24  ds "ExitWindowsEx"
0040ed32  dw 264h
0040ed34  ds "wsprintfA"
0040ed3e  dw 195h
0040ed40  ds "MessageBoxA"
0040ed4c  dw 1B1h
0040ed4e  ds "PostMessageA"
; undefined 1 bytes at 0040ed5b
0040ed5c  dw 160h
0040ed5e  ds "IsDialogMessageA"
; undefined 1 bytes at 0040ed6f
0040ed70  dw 4Bh
0040ed72  ds "CreateDialogParamA"
; undefined 1 bytes at 0040ed85
0040ed86  dw 16Ah
0040ed88  ds "IsWindowVisible"
0040ed98  dw B2h
0040ed9a  ds "EnableWindow"
; undefined 1 bytes at 0040eda7
0040eda8  dw 1ECh
0040edaa  ds "SetCursor"
0040edb4  dw 172h
0040edb6  ds "LoadCursorA"
0040edc2  dw 129h
0040edc4  ds "GetSysColor"
0040edd0  dw 115h
0040edd2  ds "GetMessageA"
0040edde  dw 8Ah
0040ede0  ds "DestroyWindow"
0040edee  dw 16Dh
0040edf0  ds "KillTimer"
0040edfa  dw 90h
0040edfc  ds "DispatchMessageA"
; undefined 1 bytes at 0040ee0d
0040ee0e  dw 245h
0040ee10  ds "TranslateMessage"
; undefined 1 bytes at 0040ee21
0040ee22  dw 216h
0040ee24  ds "SetTimer"
; undefined 1 bytes at 0040ee2d
0040ee2e  dw 1AFh
0040ee30  ds "PeekMessageA"
; undefined 1 bytes at 0040ee3d
0040ee3e  dw 170h
0040ee40  ds "LoadBitmapA"
0040ee4c  dw 1BEh
0040ee4e  ds "RegisterClassA"
; undefined 1 bytes at 0040ee5d
0040ee5e  dw 176h
0040ee60  ds "LoadIconA"
0040ee6a  dw 251h
0040ee6c  ds "UpdateWindow"
; undefined 1 bytes at 0040ee79
0040ee7a  dw 22Dh
0040ee7c  ds "ShowWindow"
; undefined 1 bytes at 0040ee87
0040ee88  dw 221h
0040ee8a  ds "SetWindowTextA"
; undefined 1 bytes at 0040ee99
0040ee9a  dw 12Ch
0040ee9c  ds "GetSystemMetrics"
; undefined 1 bytes at 0040eead
0040eeae  dw 55h
0040eeb0  ds "CreateWindowExA"
0040eec0  dw 1CDh
0040eec2  ds "ReleaseDC"
0040eecc  dw 152h
0040eece  ds "InvalidateRect"
; undefined 1 bytes at 0040eedd
0040eede  dw 80h
0040eee0  ds "DefWindowProcA"
; undefined 1 bytes at 0040eeef
0040eef0  dw 1B3h
0040eef2  ds "PostQuitMessage"
0040ef02  dw B6h
0040ef04  ds "EndPaint"
; undefined 1 bytes at 0040ef0d
0040ef0e  dw E4h
0040ef10  ds "GetClientRect"
0040ef1e  dw 9h
0040ef20  ds "BeginPaint"
; undefined 1 bytes at 0040ef2b
0040ef2c  dw EEh
0040ef2e  ds "GetDC"
0040ef34  dw 19Dh
0040ef36  ds "MoveWindow"
; undefined 1 bytes at 0040ef41
0040ef42  dw 13Dh
0040ef44  ds "GetWindowRect"
0040ef52  dw 1F2h
0040ef54  ds "SetDlgItemTextA"
0040ef64  dw B4h
0040ef66  ds "EndDialog"
0040ef70  dw D2h
0040ef72  ds "FrameRect"
0040ef7c  dw 1D3h
0040ef7e  ds "ScreenToClient"
; undefined 1 bytes at 0040ef8d
0040ef8e  dw F3h
0040ef90  ds "GetDlgItem"
; undefined 1 bytes at 0040ef9b
0040ef9c  dw 13Fh
0040ef9e  ds "GetWindowTextA"
; undefined 1 bytes at 0040efad
0040efae  dw 1D8h
0040efb0  ds "SendDlgItemMessageA"
0040efc4  dw 1F5h
0040efc6  ds "SetFocus"
; undefined 1 bytes at 0040efcf
0040efd0  dw 1A1h
0040efd2  ds "OemToCharA"
; undefined 1 bytes at 0040efdd
0040efde  dw 79h
0040efe0  ds "DdeUninitialize"
0040eff0  dw 63h
0040eff2  ds "DdeDisconnect"
0040f000  dw F5h
0040f002  ds "GetDlgItemTextA"
0040f012  dw 66h
0040f014  ds "DdeFreeDataHandle"
0040f026  dw 68h
0040f028  ds "DdeGetData"
; undefined 1 bytes at 0040f033
0040f034  dw 5Ch
0040f036  ds "DdeClientTransaction"
; undefined 1 bytes at 0040f04b
0040f04c  dw 5Eh
0040f04e  ds "DdeConnect"
; undefined 1 bytes at 0040f059
0040f05a  dw 61h
0040f05c  ds "DdeCreateStringHandleA"
; undefined 1 bytes at 0040f073
0040f074  dw 6Ch
0040f076  ds "DdeInitializeA"
; undefined 1 bytes at 0040f085
0040f086  dw 60h
0040f088  ds "DdeCreateDataHandle"
0040f09c  dw 1DAh
0040f09e  ds "SendMessageA"
; undefined 1 bytes at 0040f0ab
0040f0ac  dw 8Eh
0040f0ae  ds "DialogBoxParamA"
0040f0be  dw CDh
0040f0c0  ds "FindWindowA"
0040f0cc  dw B8h
0040f0ce  ds "EnumChildWindows"
; undefined 1 bytes at 0040f0df
0040f0e0  dw 11Dh
0040f0e2  ds "GetParent"
0040f0ec  dw 183h
0040f0ee  ds "LoadStringA"
0040f0fa  dw A4h
0040f0fc  ds "DrawIcon"
; undefined 1 bytes at 0040f105
0040f106  dw CCh
0040f108  ds "FillRect"
; undefined 1 bytes at 0040f111
0040f112  dw F1h
0040f114  ds "GetDialogBaseUnits"
; undefined 1 bytes at 0040f127
0040f128  ds "USER32.dll"
; undefined 1 bytes at 0040f133
0040f134  dw 46h
0040f136  ds "DeleteObject"
; undefined 1 bytes at 0040f143
0040f144  dw FAh
0040f146  ds "GetStockObject"
; undefined 1 bytes at 0040f155
0040f156  dw EAh
0040f158  ds "GetObjectA"
; undefined 1 bytes at 0040f163
0040f164  dw 43h
0040f166  ds "DeleteDC"
; undefined 1 bytes at 0040f16f
0040f170  dw Ah
0040f172  ds "BitBlt"
; undefined 1 bytes at 0040f179
0040f17a  dw 1Fh
0040f17c  ds "CreateCompatibleDC"
; undefined 1 bytes at 0040f18f
0040f190  dw 122h
0040f192  ds "PatBlt"
; undefined 1 bytes at 0040f199
0040f19a  dw 40h
0040f19c  ds "CreateSolidBrush"
; undefined 1 bytes at 0040f1ad
0040f1ae  dw 14Ah
0040f1b0  ds "SelectObject"
; undefined 1 bytes at 0040f1bd
0040f1be  dw 137h
0040f1c0  ds "RealizePalette"
; undefined 1 bytes at 0040f1cf
0040f1d0  dw 14Bh
0040f1d2  ds "SelectPalette"
0040f1e0  dw 62h
0040f1e2  ds "ExtTextOutA"
0040f1ee  dw 150h
0040f1f0  ds "SetBkColor"
; undefined 1 bytes at 0040f1fb
0040f1fc  dw 107h
0040f1fe  ds "GetTextExtentPointA"
0040f212  dw 2Ch
0040f214  ds "CreateFontIndirectA"
0040f228  dw C7h
0040f22a  ds "GetDeviceCaps"
0040f238  dw 2Bh
0040f23a  ds "CreateFontA"
0040f246  dw 17Eh
0040f248  ds "StretchBlt"
; undefined 1 bytes at 0040f253
0040f254  dw 1Eh
0040f256  ds "CreateCompatibleBitmap"
; undefined 1 bytes at 0040f26d
0040f26e  dw 25h
0040f270  ds "CreateDIBitmap"
; undefined 1 bytes at 0040f27f
0040f280  dw 35h
0040f282  ds "CreatePalette"
0040f290  ds "GDI32.dll"
0040f29a  dw 9h
0040f29c  ds "GetOpenFileNameA"
; undefined 1 bytes at 0040f2ad
0040f2ae  ds "comdlg32.dll"
; undefined 1 bytes at 0040f2bb
0040f2bc  dw 117h
0040f2be  ds "RegCloseKey"
0040f2ca  dw 136h
0040f2cc  ds "RegQueryValueExA"
; undefined 1 bytes at 0040f2dd
0040f2de  dw 12Eh
0040f2e0  ds "RegOpenKeyExA"
0040f2ee  dw 24h
0040f2f0  ds "CloseServiceHandle"
; undefined 1 bytes at 0040f303
0040f304  dw 105h
0040f306  ds "OpenSCManagerA"
; undefined 1 bytes at 0040f315
0040f316  dw 11Eh
0040f318  ds "RegDeleteKeyA"
0040f326  dw 123h
0040f328  ds "RegEnumKeyExA"
0040f336  dw 126h
0040f338  ds "RegEnumValueA"
0040f346  dw 120h
0040f348  ds "RegDeleteValueA"
0040f358  dw 140h
0040f35a  ds "RegSetValueA"
; undefined 1 bytes at 0040f367
0040f368  dw 141h
0040f36a  ds "RegSetValueExA"
; undefined 1 bytes at 0040f379
0040f37a  dw 122h
0040f37c  ds "RegEnumKeyA"
0040f388  dw 12Dh
0040f38a  ds "RegOpenKeyA"
0040f396  dw 49h
0040f398  ds "DeleteService"
0040f3a6  dw 25h
0040f3a8  ds "ControlService"
; undefined 1 bytes at 0040f3b7
0040f3b8  dw 107h
0040f3ba  ds "OpenServiceA"
; undefined 1 bytes at 0040f3c7
0040f3c8  ds "ADVAPI32.dll"
; undefined 1 bytes at 0040f3d5
0040f3d6  dw F4h
0040f3d8  ds "GetLastError"
; undefined 1 bytes at 0040f3e5
0040f3e6  dw 211h
0040f3e8  ds "SetEnvironmentVariableA"
0040f400  dw D1h
0040f402  ds "GetCurrentDirectoryA"
; undefined 1 bytes at 0040f417
0040f418  dw 20Ch
0040f41a  ds "SetCurrentDirectoryA"
; undefined 1 bytes at 0040f42f
0040f430  dw 18h
0040f432  ds "CloseHandle"
0040f43e  dw 210h
0040f440  ds "SetEndOfFile"
; undefined 1 bytes at 0040f44d
0040f44e  dw EFh
0040f450  ds "GetFileType"
0040f45c  dw 31h
0040f45e  ds "CreateFileA"
0040f46a  dw F0h
0040f46c  ds "GetFullPathNameA"
; undefined 1 bytes at 0040f47d
0040f47e  dw 1A6h
0040f480  ds "MoveFileA"
0040f48a  dw 168h
0040f48c  ds "HeapAlloc"
0040f496  dw 16Eh
0040f498  ds "HeapFree"
; undefined 1 bytes at 0040f4a1
0040f4a2  dw FEh
0040f4a4  ds "GetModuleHandleA"
; undefined 1 bytes at 0040f4b5
0040f4b6  dw 128h
0040f4b8  ds "GetStartupInfoA"
0040f4c8  dw AAh
0040f4ca  ds "GetCommandLineA"
0040f4da  dw 14Ch
0040f4dc  ds "GetVersion"
; undefined 1 bytes at 0040f4e7
0040f4e8  dw 6Bh
0040f4ea  ds "ExitProcess"
0040f4f6  dw 1ABh
0040f4f8  ds "MultiByteToWideChar"
0040f50c  dw 26Eh
0040f50e  ds "WideCharToMultiByte"
0040f522  dw 18Dh
0040f524  ds "LCMapStringA"
; undefined 1 bytes at 0040f531
0040f532  dw 18Eh
0040f534  ds "LCMapStringW"
; undefined 1 bytes at 0040f541
0040f542  dw 12Bh
0040f544  ds "GetStringTypeA"
; undefined 1 bytes at 0040f553
0040f554  dw 12Eh
0040f556  ds "GetStringTypeW"
; undefined 1 bytes at 0040f565
0040f566  dw 246h
0040f568  ds "TerminateProcess"
; undefined 1 bytes at 0040f579
0040f57a  dw D3h
0040f57c  ds "GetCurrentProcess"
0040f58e  dw 229h
0040f590  ds "SetStdHandle"
; undefined 1 bytes at 0040f59d
0040f59e  dw 21Bh
0040f5a0  ds "SetHandleCount"
; undefined 1 bytes at 0040f5af
0040f5b0  dw 12Ah
0040f5b2  ds "GetStdHandle"
; undefined 1 bytes at 0040f5bf
0040f5c0  dw 27Bh
0040f5c2  ds "WriteFile"
0040f5cc  dw 219h
0040f5ce  ds "SetFilePointer"
; undefined 1 bytes at 0040f5dd
0040f5de  dw 1D6h
0040f5e0  ds "ReadFile"
; undefined 1 bytes at 0040f5e9
0040f5ea  dw 16Ch
0040f5ec  ds "HeapDestroy"
0040f5f8  dw 16Ah
0040f5fa  ds "HeapCreate"
; undefined 1 bytes at 0040f605
0040f606  dw 25Eh
0040f608  ds "VirtualFree"
0040f614  dw 25Bh
0040f616  ds "VirtualAlloc"
; undefined 1 bytes at 0040f623
0040f624  dw 250h
0040f626  ds "UnhandledExceptionFilter"
; undefined 1 bytes at 0040f63f
0040f640  dw 96h
0040f642  ds "FreeEnvironmentStringsA"
0040f65a  dw 97h
0040f65c  ds "FreeEnvironmentStringsW"
0040f674  dw E1h
0040f676  ds "GetEnvironmentStrings"
0040f68c  dw E3h
0040f68e  ds "GetEnvironmentStringsW"
; undefined 1 bytes at 0040f6a5
0040f6a6  dw A3h
0040f6a8  ds "GetCPInfo"
0040f6b2  dw 9Dh
0040f6b4  ds "GetACP"
; undefined 1 bytes at 0040f6bb
0040f6bc  dw 109h
0040f6be  ds "GetOEMCP"
; undefined 1 bytes at 0040f6c7
0040f6c8  dw 1E5h
0040f6ca  ds "RtlUnwind"
; undefined 12 bytes at 0040f6d4
0040f6e0  IMAGE_DIRECTORY_ENTRY_EXPORT 
0040f708  ibo32 004023f2
0040f70c  ibo32 00401f76
0040f710  ibo32 00402299
0040f714  ibo32 0040f733
0040f718  ibo32 0040f73f
0040f71c  ibo32 0040f74f
0040f720  dw 0h
0040f722  dw 1h
0040f724  dw 2h
0040f726  ds "UNWISE32.EXE"
0040f733  ds "_ItemDlg@16"
0040f73f  ds "_MainWndProc@16"
0040f74f  ds "_SharedDlg@16"
; undefined 239 bytes at 0040f75d
0041004c  addr 00410068
00410050  addr 00410058
00410054  undefined4 00000001h
00410058  ds "GLBSUninstall"
; undefined 2 bytes at 00410066
00410068  ds "Software\\Microsoft\\Windows\\CurrentVersion\\SharedDLLs"
; undefined 3 bytes at 0041009d
004100a0  ds "%s /z %s %s"
004100ac  ds "_MSRSTRT.EXE"
; undefined 3 bytes at 004100b9
004100bc  ds "_MSSETUP.EXE"
; undefined 7 bytes at 004100c9
004100d0  ds "install.log"
004100dc  ds "Ctl3dSubclassDlgEx"
; undefined 1 bytes at 004100ef
004100f0  ds "Ctl3dAutoSubclass"
; undefined 2 bytes at 00410102
00410104  ds "Ctl3dUnregister"
00410114  ds "Ctl3dRegister"
; undefined 2 bytes at 00410122
00410124  ds "CTL3D32.DLL"
00410130  ds "No Background"
; undefined 2 bytes at 0041013e
00410140  ds "End Blue"
; undefined 3 bytes at 00410149
0041014c  ds "End Green"
; undefined 2 bytes at 00410156
00410158  ds "End Red"
00410160  ds "Start Blue"
; undefined 1 bytes at 0041016b
0041016c  ds "Start Green"
00410178  ds "Settings"
; undefined 3 bytes at 00410181
00410184  ds "Start Red"
; undefined 14 bytes at 0041018e
0041019c  ds "INSTALL.LOG"
; undefined 8 bytes at 004101a8
004101b0  ds "%s=%s"
; undefined 2 bytes at 004101b6
004101b8  ds "%s Value Name: %s=%s"
; undefined 3 bytes at 004101cd
004101d0  ds "%s Value Name: %s"
; undefined 2 bytes at 004101e2
004101e4  ds "%s: [%s] %s=%s"
; undefined 1 bytes at 004101f3
004101f4  ds "Execute Name: "
; undefined 9 bytes at 00410203
0041020c  ds "Delete in-use files: On"
00410224  ds "Common Start Menu"
; undefined 2 bytes at 00410236
00410238  ds "Start Menu"
; undefined 1 bytes at 00410243
00410244  ds "Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Shell Folders"
; undefined 3 bytes at 00410285
00410288  ds "Per-User ID: "
; undefined 2 bytes at 00410296
00410298  ds "User Rights: Admin"
; undefined 1 bytes at 004102ab
004102ac  ds "Serial Number: "
004102bc  ds "Version Number: "
; undefined 3 bytes at 004102cd
004102d0  ds "Product: "
; undefined 2 bytes at 004102da
004102dc  ds "Manufacturer: "
; undefined 1 bytes at 004102eb
004102ec  ds "Uninstall MIF: "
004102fc  ds "RegDB Tree: "
; undefined 11 bytes at 00410309
00410314  ds "File Tree: "
00410320  ds "Made Dir: "
; undefined 1 bytes at 0041032b
0041032c  ds "SubSystem: B"
; undefined 3 bytes at 00410339
0041033c  ds "Icon Cmd: "
; undefined 1 bytes at 00410347
00410348  ds "Icon Name: "
00410354  ds "Icon Group: "
; undefined 3 bytes at 00410361
00410364  ds "Execute Program: "
; undefined 2 bytes at 00410376
00410378  ds "Execute Path: "
; undefined 1 bytes at 00410387
00410388  ds "INI Old: "
; undefined 2 bytes at 00410392
00410394  ds "INI Val: "
; undefined 2 bytes at 0041039e
004103a0  ds "INI Item: "
; undefined 1 bytes at 004103ab
004103ac  ds "INI Sect: "
; undefined 9 bytes at 004103b7
004103c0  ds "INI File: "
; undefined 1 bytes at 004103cb
004103cc  ds "INI New: "
; undefined 2 bytes at 004103d6
004103d8  ds "Self-Register: "
004103e8  ds "Add Device: "
; undefined 3 bytes at 004103f5
004103f8  ds "Create Service: "
; undefined 11 bytes at 00410409
00410414  ds "Backup Copy: "
; undefined 2 bytes at 00410422
00410424  ds "File Edit: "
00410430  ds "RegDB Old: "
0041043c  ds "RegDB Root: "
; undefined 3 bytes at 00410449
0041044c  ds "RegDB Type: "
; undefined 3 bytes at 00410459
0041045c  ds "RegDB Name: "
; undefined 3 bytes at 00410469
0041046c  ds "RegDB Val: "
00410478  ds "RegDB Key: "
00410484  ds "File Overwrite: "
; undefined 3 bytes at 00410495
00410498  ds "Shell Link: "
; undefined 3 bytes at 004104a5
004104a8  ds "File Copy: "
004104b4  ds "Shared DLL counter ignored:"
004104d0  ds "Non-System File:"
; undefined 3 bytes at 004104e1
004104e4  ds "%s %s"
; undefined 2 bytes at 004104ea
004104ec  ds " INSTALL"
; undefined 3 bytes at 004104f5
004104f8  ds " INSTALLATION"
; undefined 2 bytes at 00410506
00410508  ds "Title:"
; undefined 9 bytes at 0041050f
00410518  ds "\\WIN32S"
; undefined 16 bytes at 00410520
00410530  ds " /U \""
; undefined 10 bytes at 00410536
00410540  ds "Software\\Wise Solutions\\WamUser"
; undefined 8 bytes at 00410560
00410568  ds "\r\n\r\n%s"
; undefined 1 bytes at 0041056f
00410570  ds "GROUPS"
; undefined 1 bytes at 00410577
00410578  ds "PROGMAN"
00410580  ds "[DeleteGroup(%s)]"
; undefined 2 bytes at 00410592
00410594  ds "STARTUP"
0041059c  ds "[DeleteItem(%s)]"
; undefined 3 bytes at 004105ad
004105b0  ds "[ShowGroup(%s,1)]"
; undefined 2 bytes at 004105c2
004105c4  ds "[ShowGroup(%s,2)]"
; undefined 30 bytes at 004105d6
004105f4  ds "OleUninitialize"
00410604  ds "DllUnregisterServer"
00410618  ds "DllRegisterServer"
; undefined 2 bytes at 0041062a
0041062c  ds "OleInitialize"
; undefined 2 bytes at 0041063a
0041063c  ds "OLE32.DLL"
; undefined 2 bytes at 00410646
00410648  ds "%s /UNREGSERVER"
; undefined 4 bytes at 00410658
0041065c  ds "Software\\Borland"
; undefined 3 bytes at 0041066d
00410670  ds "Software\\Borland\\BLW32"
; undefined 1 bytes at 00410687
00410688  ds "IB_Server"
; undefined 2 bytes at 00410692
00410694  ds "UseCount"
; undefined 3 bytes at 0041069d
004106a0  ds "Software\\Borland\\Database Engine"
; undefined 3 bytes at 004106c1
004106c4  ds "_MSSETUP.BAT"
; undefined 3 bytes at 004106d1
004106d4  ds "del %s\r\n"
; undefined 3 bytes at 004106dd
004106e0  ds "NUL=%s\r\n"
; undefined 3 bytes at 004106e9
004106ec  ds "[rename]\r\n"
; undefined 1 bytes at 004106f7
004106f8  ds "WININIT.INI"
; undefined 4 bytes at 00410704
00410708  ds "Language"
; undefined 7 bytes at 00410711
00410718  ds "Msg%d"
; undefined 2 bytes at 0041071e
00410720  ds "[386Enh]"
; undefined 3 bytes at 00410729
0041072c  ds "device="
00410734  ds "~GLBS383.TMP"
; undefined 3 bytes at 00410741
00410744  ds "\\SYSTEM.INI"
00410750  ds "Font Character Size"
00410764  ds "Font Character Set"
; undefined 1 bytes at 00410777
00410778  ds "Title Font"
; undefined 1 bytes at 00410783
00410784  ds "Times New Roman"
00410794  ds "Text Font"
; undefined 2 bytes at 0041079e
004107a0  ds "Canceled by user"
; undefined 3 bytes at 004107b1
004107b4  ds "Success"
004107bc  ds "Failed"
; undefined 1 bytes at 004107c3
004107c4  ds "Uninstall"
; undefined 2 bytes at 004107ce
004107d0  ds "Rollback"
; undefined 3 bytes at 004107d9
004107dc  ds "START COMPONENT\r\n  NAME = \"WORKSTATION\"\r\n  START GROUP\r\n    NAME = \"ComponentID\"\r\n    ID = 1\r\n    CLASS = \"DMTF|ComponentID|1.0\"\r\n    STAR...
00410dc4  ds "Msg1000"
00410dcc  ds "%02d/%02d/%02d %d:%02d"
; undefined 1 bytes at 00410de3
00410de4  ds "del %s\r\nrename %s %s\r\n"
; undefined 1 bytes at 00410dfb
00410dfc  ds "rename"
; undefined 1 bytes at 00410e03
00410e04  ds "~GLU%04x.TMP"
; undefined 3 bytes at 00410e11
00410e14  ds "[rename]\r\nNUL=%s\r\n"
; undefined 9 bytes at 00410e27
00410e30  addr 00410e3a
; undefined 520 bytes at 00410e34
0041103c  undefined4 00000001h
; undefined 16 bytes at 00411040
00411050  addr 0040b580
00411054  undefined4 00000002h
00411058  undefined4 00000001h
; undefined 4 bytes at 0041105c
00411060  undefined4 00000002h
00411064  undefined4 00000002h
; undefined 360 bytes at 00411068
004111d0  addr 004111d0
004111d4  addr 004111d0
004111d8  addr 004111e8
004111dc  addr 004111e8
004111e0  undefined4 FFFFFFFFh
004111e4  undefined4 FFFFFFFFh
004111e8  undefined4 000000F0h
004111ec  undefined4 000000F1h
004111f0  undefined4 00000000h
004111f4  undefined4 00000000h
004111f8  undefined4 00000000h
; undefined 8156 bytes at 004111fc
004131d8  undefined4 00000000h
; undefined 4 bytes at 004131dc
004131e0  undefined4 00000000h
; undefined 12 bytes at 004131e4
004131f0  addr 004111d0
004131f4  undefined4 000001E0h
004131f8  undefined4 C0000005h
; undefined 8 bytes at 004131fc
00413204  undefined4 C000001Dh
; undefined 8 bytes at 00413208
00413210  undefined4 C0000096h
; undefined 16 bytes at 00413214
00413224  undefined4 00000000h
; undefined 8 bytes at 00413228
00413230  undefined4 00000000h
; undefined 60 bytes at 00413234
00413270  undefined4 00000003h
00413274  undefined4 00000007h
00413278  undefined4 0000000Ah
0041327c  undefined4 0000008Ch
00413280  undefined1 01h
00413281  undefined1 02h
; undefined 6 bytes at 00413282
00413288  undefined4 000003A4h
; undefined 44 bytes at 0041328c
004132b8  undefined4 000003A8h
004132bc  undefined4 A3DAA3C1h
004132c0  undefined4 00000020h
004132c4  undefined4 00000000h
004132c8  undefined1 00h
004132c9  undefined1 00h
004132ca  undefined1 00h
; undefined 5 bytes at 004132cb
004132d0  undefined1 00h
004132d1  undefined1 00h
004132d2  undefined1 00h
004132d3  undefined1 00h
; undefined 168 bytes at 004132d4
0041337c  undefined4 00000000h
00413380  undefined4 00000000h
00413384  undefined4 00000000h
00413388  undefined4 00000002h
; undefined 4 bytes at 0041338c
00413390  undefined4 00000008h
; undefined 4 bytes at 00413394
00413398  undefined4 00000009h
0041339c  addr 0040e544
; undefined 132 bytes at 004133a0
00413424  undefined4 00000000h
00413428  undefined4 00000000h
; undefined 4 bytes at 0041342c
00413430  undefined4 00000000h
; undefined 4 bytes at 00413434
00413438  undefined4 00000000h
; undefined 12 bytes at 0041343c
00413448  undefined4 00000000h
; undefined 12 bytes at 0041344c
00413458  undefined4 00000000h
; undefined 4 bytes at 0041345c
00413460  undefined4 00000000h
; undefined 4 bytes at 00413464
00413468  undefined4 00000000h
0041346c  undefined4 00000000h
; undefined 60 bytes at 00413470
004134ac  undefined4 00000000h
004134b0  undefined4 00000000h
004134b4  undefined4 00000000h
004134b8  undefined4 00000000h
004134bc  undefined4 00000000h
004134c0  undefined4 00000000h
; undefined 268 bytes at 004134c4
004135d0  undefined4 00000000h
; undefined 4 bytes at 004135d4
004135d8  undefined4 00000000h
004135dc  undefined1 00h
; undefined 259 bytes at 004135dd
004136e0  undefined1 00h
004136e1  undefined1 00h
; undefined 254 bytes at 004136e2
004137e0  undefined4 00000000h
004137e4  undefined4 00000000h
; undefined 12 bytes at 004137e8
004137f4  undefined4 00000000h
004137f8  undefined4 00000000h
004137fc  undefined4 00000000h
00413800  undefined4 00000000h
00413804  undefined4 00000000h
00413808  undefined4 00000000h
; undefined 4 bytes at 0041380c
00413810  undefined4 00000000h
00413814  undefined4 00000000h
00413818  undefined4 00000000h
0041381c  undefined4 00000000h
00413820  undefined4 00000000h
00413824  undefined4 00000000h
00413828  undefined4 00000000h
0041382c  undefined4 00000000h
00413830  undefined4 00000000h
00413834  undefined4 00000000h
00413838  undefined4 00000000h
0041383c  undefined4 00000000h
00413840  undefined4 00000000h
00413844  undefined4 00000000h
00413848  undefined4 00000000h
0041384c  undefined4 00000000h
00413850  undefined4 00000000h
00413854  undefined1 00h
; undefined 3 bytes at 00413855
00413858  undefined4 00000000h
0041385c  undefined4 00000000h
00413860  undefined4 00000000h
00413864  undefined4 00000000h
00413868  undefined4 00000000h
0041386c  undefined4 00000000h
00413870  undefined2 0000h
; undefined 2 bytes at 00413872
00413874  undefined4 00000000h
00413878  undefined4 00000000h
0041387c  undefined4 00000000h
00413880  undefined4 00000000h
00413884  undefined4 00000000h
00413888  undefined4 00000000h
0041388c  undefined4 00000000h
00413890  undefined4 00000000h
00413894  undefined4 00000000h
00413898  undefined4 00000000h
0041389c  undefined4 00000000h
004138a0  undefined1 00h
; undefined 3 bytes at 004138a1
004138a4  undefined4 00000000h
004138a8  undefined4 00000000h
004138ac  undefined4 00000000h
004138b0  undefined4 00000000h
004138b4  undefined4 00000000h
004138b8  undefined4 00000000h
004138bc  undefined4 00000000h
004138c0  undefined4 00000000h
004138c4  undefined4 00000000h
004138c8  undefined4 00000000h
004138cc  undefined4 00000000h
004138d0  undefined4 00000000h
004138d4  undefined4 00000000h
004138d8  undefined4 00000000h
; undefined 4 bytes at 004138dc
004138e0  undefined4 00000000h
004138e4  undefined4 00000000h
004138e8  undefined4 00000000h
004138ec  undefined4 00000000h
004138f0  undefined4 00000000h
004138f4  undefined4 00000000h
004138f8  undefined4 00000000h
004138fc  undefined4 00000000h
; undefined 8 bytes at 00413900
00413908  undefined4 00000000h
0041390c  undefined4 00000000h
00413910  undefined4 00000000h
; undefined 12 bytes at 00413914
00413920  undefined1 00h
; undefined 639 bytes at 00413921
00413ba0  undefined1 00h
; undefined 3 bytes at 00413ba1
00413ba4  undefined4 00000000h
; undefined 8 bytes at 00413ba8
00413bb0  undefined4 00000000h
00413bb4  undefined4 00000000h
00413bb8  undefined4 00000000h
00413bbc  undefined4 00000000h
00413bc0  undefined4 00000000h
00413bc4  undefined4 00000000h
00413bc8  undefined4 00000000h
00413bcc  undefined4 00000000h
00413bd0  undefined4 00000000h
00413bd4  undefined4 00000000h
00413bd8  undefined4 00000000h
00413bdc  undefined4 00000000h
00413be0  undefined4 00000000h
00413be4  undefined4 00000000h
00413be8  undefined4 00000000h
00413bec  undefined4 00000000h
00413bf0  undefined4 00000000h
00413bf4  undefined4 00000000h
00413bf8  undefined4 00000000h
00413bfc  undefined4 00000000h
00413c00  undefined4 00000000h
; undefined 52 bytes at 00413c04
00413c38  undefined4 00000000h
00413c3c  undefined4 00000000h
00413c40  undefined4 00000000h
00413c44  undefined4 00000000h
00413c48  undefined4 00000000h
00413c4c  undefined4 00000000h
00413c50  undefined4 00000000h
; undefined 12 bytes at 00413c54
00413c60  undefined4 00000000h
00413c64  undefined4 00000000h
; undefined 88 bytes at 00413c68
00413cc0  undefined4 00000000h
00413cc4  undefined4 00000000h
00413cc8  undefined4 00000000h
00413ccc  undefined4 00000000h
00413cd0  undefined4 00000000h
00413cd4  undefined2 0000h
; undefined 2 bytes at 00413cd6
00413cd8  undefined4 00000000h
00413cdc  undefined4 00000000h
; undefined 4 bytes at 00413ce0
00413ce4  undefined4 00000000h
; undefined 24 bytes at 00413ce8
00413d00  undefined4 00000000h
00413d04  undefined4 00000000h
; undefined 248 bytes at 00413d08
00413e00  undefined4 00000000h
00413e04  undefined4 00000000h
00413e08  undefined4 00000000h
00413e0c  undefined4 00000000h
00413e10  undefined4 00000000h
00414000  IMAGE_RESOURCE_DIRECTORY 
00414010  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414018  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414020  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414028  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414030  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414038  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414040  IMAGE_RESOURCE_DIRECTORY 
00414050  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414058  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414060  IMAGE_RESOURCE_DIRECTORY 
00414070  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414078  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414080  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414088  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414090  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414098  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004140a0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004140a8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004140b0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004140b8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004140c0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004140c8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004140d0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004140d8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004140e0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004140e8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004140f0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004140f8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414100  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414108  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414110  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414118  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414120  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414128  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414130  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414138  IMAGE_RESOURCE_DIRECTORY 
00414148  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414150  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414158  IMAGE_RESOURCE_DIRECTORY 
00414168  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414170  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414178  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414180  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414188  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414190  IMAGE_RESOURCE_DIRECTORY 
004141a0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004141a8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004141b0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004141b8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004141c0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004141c8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004141d0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004141d8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004141e0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004141e8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004141f0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004141f8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414200  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414208  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414210  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414218  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414220  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414228  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414230  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414238  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414240  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414248  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414250  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414258  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414260  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414268  IMAGE_RESOURCE_DIRECTORY 
00414278  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414280  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414288  IMAGE_RESOURCE_DIRECTORY 
00414298  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004142a0  IMAGE_RESOURCE_DIRECTORY 
004142b0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004142b8  IMAGE_RESOURCE_DIRECTORY 
004142c8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004142d0  IMAGE_RESOURCE_DIRECTORY 
004142e0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004142e8  IMAGE_RESOURCE_DIRECTORY 
004142f8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414300  IMAGE_RESOURCE_DIRECTORY 
00414310  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414318  IMAGE_RESOURCE_DIRECTORY 
00414328  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414330  IMAGE_RESOURCE_DIRECTORY 
00414340  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414348  IMAGE_RESOURCE_DIRECTORY 
00414358  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414360  IMAGE_RESOURCE_DIRECTORY 
00414370  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414378  IMAGE_RESOURCE_DIRECTORY 
00414388  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414390  IMAGE_RESOURCE_DIRECTORY 
004143a0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004143a8  IMAGE_RESOURCE_DIRECTORY 
004143b8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004143c0  IMAGE_RESOURCE_DIRECTORY 
004143d0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004143d8  IMAGE_RESOURCE_DIRECTORY 
004143e8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004143f0  IMAGE_RESOURCE_DIRECTORY 
00414400  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414408  IMAGE_RESOURCE_DIRECTORY 
00414418  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414420  IMAGE_RESOURCE_DIRECTORY 
00414430  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414438  IMAGE_RESOURCE_DIRECTORY 
00414448  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414450  IMAGE_RESOURCE_DIRECTORY 
00414460  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414468  IMAGE_RESOURCE_DIRECTORY 
00414478  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414480  IMAGE_RESOURCE_DIRECTORY 
00414490  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414498  IMAGE_RESOURCE_DIRECTORY 
004144a8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004144b0  IMAGE_RESOURCE_DIRECTORY 
004144c0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004144c8  IMAGE_RESOURCE_DIRECTORY 
004144d8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004144e0  IMAGE_RESOURCE_DIRECTORY 
004144f0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004144f8  IMAGE_RESOURCE_DIRECTORY 
00414508  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414510  IMAGE_RESOURCE_DIRECTORY 
00414520  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414528  IMAGE_RESOURCE_DIRECTORY 
00414538  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414540  IMAGE_RESOURCE_DIRECTORY 
00414550  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414558  IMAGE_RESOURCE_DIRECTORY 
00414568  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414570  IMAGE_RESOURCE_DIRECTORY 
00414580  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414588  IMAGE_RESOURCE_DIRECTORY 
00414598  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004145a0  IMAGE_RESOURCE_DIRECTORY 
004145b0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004145b8  IMAGE_RESOURCE_DIRECTORY 
004145c8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004145d0  IMAGE_RESOURCE_DIRECTORY 
004145e0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004145e8  IMAGE_RESOURCE_DIRECTORY 
004145f8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414600  IMAGE_RESOURCE_DIRECTORY 
00414610  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414618  IMAGE_RESOURCE_DIRECTORY 
00414628  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414630  IMAGE_RESOURCE_DIRECTORY 
00414640  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414648  IMAGE_RESOURCE_DIRECTORY 
00414658  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414660  IMAGE_RESOURCE_DIRECTORY 
00414670  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414678  IMAGE_RESOURCE_DIRECTORY 
00414688  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414690  IMAGE_RESOURCE_DIRECTORY 
004146a0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004146a8  IMAGE_RESOURCE_DIRECTORY 
004146b8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004146c0  IMAGE_RESOURCE_DIRECTORY 
004146d0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004146d8  IMAGE_RESOURCE_DIRECTORY 
004146e8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004146f0  IMAGE_RESOURCE_DIRECTORY 
00414700  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414708  IMAGE_RESOURCE_DIRECTORY 
00414718  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414720  IMAGE_RESOURCE_DIRECTORY 
00414730  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414738  IMAGE_RESOURCE_DIRECTORY 
00414748  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414750  IMAGE_RESOURCE_DIRECTORY 
00414760  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414768  IMAGE_RESOURCE_DIRECTORY 
00414778  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414780  IMAGE_RESOURCE_DIRECTORY 
00414790  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414798  IMAGE_RESOURCE_DIRECTORY 
004147a8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004147b0  IMAGE_RESOURCE_DIRECTORY 
004147c0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004147c8  IMAGE_RESOURCE_DIRECTORY 
004147d8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004147e0  IMAGE_RESOURCE_DIRECTORY 
004147f0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
004147f8  IMAGE_RESOURCE_DIRECTORY 
00414808  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414810  IMAGE_RESOURCE_DIRECTORY 
00414820  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414828  IMAGE_RESOURCE_DIRECTORY 
00414838  IMAGE_RESOURCE_DIRECTORY_ENTRY 
00414840  IMAGE_RESOURCE_DATA_ENTRY 
00414850  IMAGE_RESOURCE_DATA_ENTRY 
00414860  IMAGE_RESOURCE_DATA_ENTRY 
00414870  IMAGE_RESOURCE_DATA_ENTRY 
00414880  IMAGE_RESOURCE_DATA_ENTRY 
00414890  IMAGE_RESOURCE_DATA_ENTRY 
004148a0  IMAGE_RESOURCE_DATA_ENTRY 
004148b0  IMAGE_RESOURCE_DATA_ENTRY 
004148c0  IMAGE_RESOURCE_DATA_ENTRY 
004148d0  IMAGE_RESOURCE_DATA_ENTRY 
004148e0  IMAGE_RESOURCE_DATA_ENTRY 
004148f0  IMAGE_RESOURCE_DATA_ENTRY 
00414900  IMAGE_RESOURCE_DATA_ENTRY 
00414910  IMAGE_RESOURCE_DATA_ENTRY 
00414920  IMAGE_RESOURCE_DATA_ENTRY 
00414930  IMAGE_RESOURCE_DATA_ENTRY 
00414940  IMAGE_RESOURCE_DATA_ENTRY 
00414950  IMAGE_RESOURCE_DATA_ENTRY 
00414960  IMAGE_RESOURCE_DATA_ENTRY 
00414970  IMAGE_RESOURCE_DATA_ENTRY 
00414980  IMAGE_RESOURCE_DATA_ENTRY 
00414990  IMAGE_RESOURCE_DATA_ENTRY 
004149a0  IMAGE_RESOURCE_DATA_ENTRY 
004149b0  IMAGE_RESOURCE_DATA_ENTRY 
004149c0  IMAGE_RESOURCE_DATA_ENTRY 
004149d0  IMAGE_RESOURCE_DATA_ENTRY 
004149e0  IMAGE_RESOURCE_DATA_ENTRY 
004149f0  IMAGE_RESOURCE_DATA_ENTRY 
00414a00  IMAGE_RESOURCE_DATA_ENTRY 
00414a10  IMAGE_RESOURCE_DATA_ENTRY 
00414a20  IMAGE_RESOURCE_DATA_ENTRY 
00414a30  IMAGE_RESOURCE_DATA_ENTRY 
00414a40  IMAGE_RESOURCE_DATA_ENTRY 
00414a50  IMAGE_RESOURCE_DATA_ENTRY 
00414a60  IMAGE_RESOURCE_DATA_ENTRY 
00414a70  IMAGE_RESOURCE_DATA_ENTRY 
00414a80  IMAGE_RESOURCE_DATA_ENTRY 
00414a90  IMAGE_RESOURCE_DATA_ENTRY 
00414aa0  IMAGE_RESOURCE_DATA_ENTRY 
00414ab0  IMAGE_RESOURCE_DATA_ENTRY 
00414ac0  IMAGE_RESOURCE_DATA_ENTRY 
00414ad0  IMAGE_RESOURCE_DATA_ENTRY 
00414ae0  IMAGE_RESOURCE_DATA_ENTRY 
00414af0  IMAGE_RESOURCE_DATA_ENTRY 
00414b00  IMAGE_RESOURCE_DATA_ENTRY 
00414b10  IMAGE_RESOURCE_DATA_ENTRY 
00414b20  IMAGE_RESOURCE_DATA_ENTRY 
00414b30  IMAGE_RESOURCE_DATA_ENTRY 
00414b40  IMAGE_RESOURCE_DATA_ENTRY 
00414b50  IMAGE_RESOURCE_DATA_ENTRY 
00414b60  IMAGE_RESOURCE_DATA_ENTRY 
00414b70  IMAGE_RESOURCE_DATA_ENTRY 
00414b80  IMAGE_RESOURCE_DATA_ENTRY 
00414b90  IMAGE_RESOURCE_DATA_ENTRY 
00414ba0  IMAGE_RESOURCE_DATA_ENTRY 
00414bb0  IMAGE_RESOURCE_DATA_ENTRY 
00414bc0  IMAGE_RESOURCE_DATA_ENTRY 
00414bd0  IMAGE_RESOURCE_DATA_ENTRY 
00414be0  IMAGE_RESOURCE_DATA_ENTRY 
00414bf0  IMAGE_RESOURCE_DATA_ENTRY 
00414c00  IMAGE_RESOURCE_DATA_ENTRY 
Rsrc_Icon_1_409:
00414c10  IconRes <Icon-Image>
Rsrc_GroupIcon_65_409:
00414ef8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 00414f0c
Rsrc_Icon_2_409:
00414f10  IconRes <Icon-Image>
Rsrc_GroupIcon_6b_409:
004151f8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 0041520c
Rsrc_Icon_3_409:
00415210  IconRes <Icon-Image>
Rsrc_GroupIcon_75_409:
004154f8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 0041550c
Rsrc_Icon_4_409:
00415510  IconRes <Icon-Image>
Rsrc_GroupIcon_76_409:
004157f8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 0041580c
Rsrc_Icon_5_409:
00415810  IconRes <Icon-Image>
Rsrc_GroupIcon_77_409:
00415af8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 00415b0c
Rsrc_Icon_6_409:
00415b10  IconRes <Icon-Image>
Rsrc_GroupIcon_78_409:
00415df8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 00415e0c
Rsrc_Icon_7_409:
00415e10  IconRes <Icon-Image>
Rsrc_GroupIcon_79_409:
004160f8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 0041610c
Rsrc_Icon_8_409:
00416110  IconRes <Icon-Image>
Rsrc_GroupIcon_7a_409:
004163f8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 0041640c
Rsrc_Icon_9_409:
00416410  IconRes <Icon-Image>
Rsrc_GroupIcon_7b_409:
004166f8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 0041670c
Rsrc_Icon_a_409:
00416710  IconRes <Icon-Image>
Rsrc_GroupIcon_7c_409:
004169f8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 00416a0c
Rsrc_Icon_b_409:
00416a10  IconRes <Icon-Image>
Rsrc_GroupIcon_7d_409:
00416cf8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 00416d0c
Rsrc_Icon_c_409:
00416d10  IconRes <Icon-Image>
Rsrc_GroupIcon_7e_409:
00416ff8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 0041700c
Rsrc_Icon_d_409:
00417010  IconRes <Icon-Image>
Rsrc_GroupIcon_7f_409:
004172f8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 0041730c
Rsrc_Icon_e_409:
00417310  IconRes <Icon-Image>
Rsrc_GroupIcon_80_409:
004175f8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 0041760c
Rsrc_Icon_f_409:
00417610  IconRes <Icon-Image>
Rsrc_GroupIcon_81_409:
004178f8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 0041790c
Rsrc_Icon_10_409:
00417910  IconRes <Icon-Image>
Rsrc_GroupIcon_82_409:
00417bf8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 00417c0c
Rsrc_Icon_11_409:
00417c10  IconRes <Icon-Image>
Rsrc_GroupIcon_70_409:
00417ef8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 00417f0c
Rsrc_Icon_12_409:
00417f10  IconRes <Icon-Image>
Rsrc_GroupIcon_71_409:
004181f8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 0041820c
Rsrc_Icon_13_409:
00418210  IconRes <Icon-Image>
Rsrc_GroupIcon_72_409:
004184f8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 0041850c
Rsrc_Icon_14_409:
00418510  IconRes <Icon-Image>
Rsrc_GroupIcon_73_409:
004187f8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 0041880c
Rsrc_Icon_15_409:
00418810  IconRes <Icon-Image>
Rsrc_GroupIcon_74_409:
00418af8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 00418b0c
Rsrc_Icon_16_409:
00418b10  IconRes <Icon-Image>
Rsrc_GroupIcon_6c_409:
00418df8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 00418e0c
Rsrc_Icon_17_409:
00418e10  IconRes <Icon-Image>
Rsrc_GroupIcon_6d_409:
004190f8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 0041910c
Rsrc_Icon_18_409:
00419110  IconRes <Icon-Image>
Rsrc_GroupIcon_6e_409:
004193f8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 0041940c
Rsrc_Icon_19_409:
00419410  IconRes <Icon-Image>
Rsrc_GroupIcon_6f_409:
004196f8  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 0041970c
Rsrc_Dialog_68_409:
00419710  DialogRes <Dialog-Resource>
; undefined 6 bytes at 004197d2
Rsrc_Dialog_6a_409:
004197d8  DialogRes <Dialog-Resource>
; undefined 6 bytes at 004199b2
Rsrc_Bitmap_6a_409:
004199b8  BitmapRes <Bitmap-Image>
Rsrc_Bitmap_6f_409:
0041dba0  BitmapRes <Bitmap-Image>
Rsrc_12c_75f9_409:
0043fdc0  db[5607] 
; undefined 1 bytes at 004413a7
Rsrc_12c_75fa_409:
004413a8  db[2560] 
Rsrc_StringTable_1_409:
00441da8  p_unicode u""
00441daa  p_unicode u"Installation Logs"
00441dce  p_unicode u"Wise Uninstall"
00441dec  p_unicode u"Could not open INSTALL.LOG file."
00441e2e  p_unicode u"Invalid INSTALL.LOG file."
00441e62  p_unicode u"Select Private Files to Remove"
00441ea0  p_unicode u"The following files should be deleted to remove the software from your system.  Press the Select All button to remove all of the listed files or sel...
00442000  p_unicode u"Welcome to the %s uninstall program.\n\nYou can choose to automatically uninstall this software or to choose exactly which changes are made to your ...
00442134  p_unicode u"Select System Files to Remove"
00442170  p_unicode u"The following files were copied to your Windows/System directories during the installation.  Use caution when removing these files, they may be in u...
004422c4  p_unicode u"Select the Custom button to select which modifications are to be made during the uninstall. Select the Automatic button for the default uninstall op...
00442440  p_unicode u"Select Directories to Remove"
0044247a  p_unicode u"The following directories were created during the installation.  Selecting a directory will remove it and all files and directories that are contain...
004425be  p_unicode u"You are now ready to uninstall the %s from your system."
0044262e  p_unicode u"Select INI Files to Remove"
00442664  p_unicode u"The following INI files were created during the installation.  Select those INI files that you want to remove."
; undefined 6 bytes at 00442742
Rsrc_StringTable_2_409:
00442748  p_unicode u"Select Uninstall Method"
00442778  p_unicode u"Select INI Items to Edit"
004427aa  p_unicode u"The following INI entries were changed during the installation.  Select those INI entries that you want to change back."
0044289a  p_unicode u"Perform Uninstall"
004428be  p_unicode u"Select Registry Keys to Remove"
004428fc  p_unicode u"The following Registration Database Keys were created during the installation.  Select those keys that you want to remove."
004429f2  p_unicode u"Press the Finish button to perform the uninstall. Press the Back button to change any of the uninstall options. Press the Cancel button to exit the ...
00442b30  p_unicode u"Select Registry Keys to Edit"
00442b6a  p_unicode u"The following Registration Database Keys were changed during the installation.  Select those keys that you want to change back."
00442c6a  p_unicode u"Uninstall"
00442c7e  p_unicode u"Select Icons to Remove"
00442cac  p_unicode u"The following icons were added to the Program Manager during the installation.  Select those icons that you want to remove."
00442da4  p_unicode u"The local interbase server must be stopped before BDE can be uninstalled. Please shutdown the interbase server and press the Retry button."
00442eba  p_unicode u"Removing File:\r\n"
00442edc  p_unicode u"Removing System File:\r\n"
00442f0c  p_unicode u"Removing Directory:\r\n"
Rsrc_StringTable_3_409:
00442f38  p_unicode u"Removing Empty Directories:\r\n"
00442f74  p_unicode u"Removing INI File:\r\n"
00442f9e  p_unicode u"Editing INI File:\r\n"
00442fc6  p_unicode u"Removing Registration Database Key:\r\n"
00443012  p_unicode u"Editing Registration Database Key:\r\n"
0044305c  p_unicode u"Removing Icon:\r\n"
0044307e  p_unicode u"The system indicates that the following shared file is no longer used by any programs and may be deleted.\n\n%s\n\nIf any programs are still using t...
00443218  p_unicode u"Leaving this file will not harm your system. If you are not sure what to do, you should select the No to All button. Do you want to remove the share...
00443350  p_unicode u"Self-Unregistering file:\r\n"
00443386  p_unicode u"The following sub-systems were configured during the installation.  Select those sub-systems that you want to removed."
00443474  p_unicode u"Select Sub-Systems to Remove"
004434ae  p_unicode u"Press the Continue button to remove the selected sub-systems.\nPress Cancel to abort the uninstall."
00443574  p_unicode u"Removing Sub-System:\r\n"
004435a2  p_unicode u"Performing uninstall of the %s...\n\nPress the Cancel button to cancel the uninstall process and exit this program."
00443686  p_unicode u"&Next >"
00443696  p_unicode u"< &Back"
; undefined 2 bytes at 004436a6
Rsrc_StringTable_4_409:
004436a8  p_unicode u"Cancel"
004436b6  p_unicode u"Select &All"
004436ce  p_unicode u"&Select None"
004436e8  p_unicode u"&Yes"
004436f2  p_unicode u"&No"
004436fa  p_unicode u"No to &All"
00443710  p_unicode u"Select Registry Trees to Remove"
00443750  p_unicode u"The following registry trees were added during the installation. Select those registry keys that you want removed, including all of their sub-keys."
00443878  p_unicode u"Removing Registration Database Key Sub-Tree:\r\n"
004438d6  p_unicode u"Executing External Program:\r\n"
00443912  p_unicode u"Deleting Service:\r\n"
0044393a  p_unicode u"Are you sure you want to cancel the uninstall?"
00443998  p_unicode u"&Automatic"
004439ae  p_unicode u"&Custom"
004439be  p_unicode u"Remove Shared Component"
004439ee  p_unicode u"&Finish"
; undefined 2 bytes at 004439fe
Rsrc_StringTable_5_409:
00443a00  p_unicode u"Perform Rollback"
00443a22  p_unicode u"You selected to backup files that were replaced during the installation. Selecting a rollback will return your computer to the state it was before t...
00443bf0  p_unicode u"You should only perform a rollback if no other applications have been installed after the installation for this software. Only the last installation...
00443d98  p_unicode u"This software was installed under an account with administrator rights. You should log onto an account with administrator rights to uninstall this s...
00443ed2  p_unicode u"This uninstall must reboot your computer to replace files that were in-use. Press the OK button to reboot your computer."
00443fc4  p_unicode u"Yes &to All"
00443fdc  p_unicode u""
00443fde  p_unicode u""
00443fe0  p_unicode u""
00443fe2  p_unicode u""
00443fe4  p_unicode u""
00443fe6  p_unicode u""
00443fe8  p_unicode u""
00443fea  p_unicode u""
00443fec  p_unicode u""
00443fee  p_unicode u""
; undefined 16 bytes at 00443ff0
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
