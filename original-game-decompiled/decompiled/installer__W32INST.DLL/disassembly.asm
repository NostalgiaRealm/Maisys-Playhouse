; Ghidra listing for stream_008_000215e3.exe (x86:LE:32:default). Labels and types are tool-generated unless they came from the binary.
10000000  IMAGE_DOS_HEADER 
10000080  IMAGE_RICH_HEADER 
; undefined 8 bytes at 100000a8
100000b0  IMAGE_NT_HEADERS32 
100001a8  IMAGE_SECTION_HEADER 
100001d0  IMAGE_SECTION_HEADER 
100001f8  IMAGE_SECTION_HEADER 
10000220  IMAGE_SECTION_HEADER 
; undefined 440 bytes at 10000248

; ==== FUNCTION entry entry=10001000 sig=undefined4 __stdcall entry(void)
10001000  6a01                 PUSH 0x1
10001002  58                   POP EAX
10001003  c20c00               RET 0xc

; ==== FUNCTION ShellLink entry=10001006 sig=undefined4 __stdcall ShellLink(int param_1)
10001006  55                   PUSH EBP
10001007  8bec                 MOV EBP,ESP
10001009  81ec48080000         SUB ESP,0x848
1000100f  56                   PUSH ESI
10001010  8b7508               MOV ESI,dword ptr [EBP + 0x8]
10001013  837e2001             CMP dword ptr [ESI + 0x20],0x1
10001017  0f84a3040000         JZ 0x100014c0
1000101d  6a00                 PUSH 0x0
1000101f  ff1588200010         CALL dword ptr [0x10002088]
10001025  85c0                 TEST EAX,EAX
10001027  0f8593040000         JNZ 0x100014c0
1000102d  68d0300010           PUSH 0x100030d0
10001032  6898210010           PUSH 0x10002198
10001037  6a01                 PUSH 0x1
10001039  50                   PUSH EAX
1000103a  68a8200010           PUSH 0x100020a8
1000103f  ff158c200010         CALL dword ptr [0x1000208c]
10001045  85c0                 TEST EAX,EAX
10001047  0f856d040000         JNZ 0x100014ba
1000104d  a1d0300010           MOV EAX,[0x100030d0]
10001052  57                   PUSH EDI
10001053  8d55f4               LEA EDX,[EBP + -0xc]
10001056  53                   PUSH EBX
10001057  8b08                 MOV ECX,dword ptr [EAX]
10001059  52                   PUSH EDX
1000105a  6888230010           PUSH 0x10002388
1000105f  50                   PUSH EAX
10001060  ff11                 CALL dword ptr [ECX]
10001062  85c0                 TEST EAX,EAX
10001064  0f8543040000         JNZ 0x100014ad
1000106a  ff7628               PUSH dword ptr [ESI + 0x28]
1000106d  8d85ccfcffff         LEA EAX,[EBP + 0xfffffccc]
10001073  50                   PUSH EAX
10001074  e8d8070000           CALL 0x10001851
10001079  59                   POP ECX
1000107a  8bf0                 MOV ESI,EAX
1000107c  59                   POP ECX
1000107d  8d85ccfcffff         LEA EAX,[EBP + 0xfffffccc]
10001083  50                   PUSH EAX
10001084  e8f0070000           CALL 0x10001879
10001089  8bd8                 MOV EBX,EAX
1000108b  a1d0300010           MOV EAX,[0x100030d0]
10001090  8bd3                 MOV EDX,EBX
10001092  59                   POP ECX
10001093  8b08                 MOV ECX,dword ptr [EAX]
10001095  83e207               AND EDX,0x7
10001098  52                   PUSH EDX
10001099  50                   PUSH EAX
1000109a  ff513c               CALL dword ptr [ECX + 0x3c]
1000109d  8d85ccfcffff         LEA EAX,[EBP + 0xfffffccc]
100010a3  56                   PUSH ESI
100010a4  50                   PUSH EAX
100010a5  e8a7070000           CALL 0x10001851
100010aa  59                   POP ECX
100010ab  8945ec               MOV dword ptr [EBP + -0x14],EAX
100010ae  f6c380               TEST BL,0x80
100010b1  59                   POP ECX
100010b2  be04010000           MOV ESI,0x104
100010b7  0f840d010000         JZ 0x100011ca
100010bd  8d85d4feffff         LEA EAX,[EBP + 0xfffffed4]
100010c3  56                   PUSH ESI
100010c4  50                   PUSH EAX
100010c5  ff155c200010         CALL dword ptr [0x1000205c]
100010cb  8d85d4feffff         LEA EAX,[EBP + 0xfffffed4]
100010d1  687c300010           PUSH 0x1000307c
100010d6  50                   PUSH EAX
100010d7  ff1528200010         CALL dword ptr [0x10002028]
100010dd  8d45fc               LEA EAX,[EBP + -0x4]
100010e0  50                   PUSH EAX
100010e1  8d85d4feffff         LEA EAX,[EBP + 0xfffffed4]
100010e7  50                   PUSH EAX
100010e8  e8f5080000           CALL 0x100019e2
100010ed  8bf8                 MOV EDI,EAX
100010ef  85ff                 TEST EDI,EDI
100010f1  0f86d3000000         JBE 0x100011ca
100010f7  57                   PUSH EDI
100010f8  6a02                 PUSH 0x2
100010fa  ff1524200010         CALL dword ptr [0x10002024]
10001100  50                   PUSH EAX
10001101  8945f8               MOV dword ptr [EBP + -0x8],EAX
10001104  ff1520200010         CALL dword ptr [0x10002020]
1000110a  8bd8                 MOV EBX,EAX
1000110c  8d85d4feffff         LEA EAX,[EBP + 0xfffffed4]
10001112  53                   PUSH EBX
10001113  57                   PUSH EDI
10001114  6a00                 PUSH 0x0
10001116  50                   PUSH EAX
10001117  e8c0080000           CALL 0x100019dc
1000111c  85c0                 TEST EAX,EAX
1000111e  0f8494000000         JZ 0x100011b8
10001124  8b3d30200010         MOV EDI,dword ptr [0x10002030]
1000112a  8d45d8               LEA EAX,[EBP + -0x28]
1000112d  6878300010           PUSH 0x10003078
10001132  50                   PUSH EAX
10001133  ffd7                 CALL EDI
10001135  8d45e8               LEA EAX,[EBP + -0x18]
10001138  50                   PUSH EAX
10001139  8d45f0               LEA EAX,[EBP + -0x10]
1000113c  50                   PUSH EAX
1000113d  8d45d8               LEA EAX,[EBP + -0x28]
10001140  50                   PUSH EAX
10001141  53                   PUSH EBX
10001142  e88f080000           CALL 0x100019d6
10001147  85c0                 TEST EAX,EAX
10001149  746d                 JZ 0x100011b8
1000114b  8b55f0               MOV EDX,dword ptr [EBP + -0x10]
1000114e  b848000400           MOV EAX,0x40048
10001153  33db                 XOR EBX,EBX
10001155  8b4a08               MOV ECX,dword ptr [EDX + 0x8]
10001158  3bc8                 CMP ECX,EAX
1000115a  770b                 JA 0x10001167
1000115c  750c                 JNZ 0x1000116a
1000115e  817a0c00003a08       CMP dword ptr [EDX + 0xc],0x83a0000
10001165  7203                 JC 0x1000116a
10001167  6a01                 PUSH 0x1
10001169  5b                   POP EBX
1000116a  85db                 TEST EBX,EBX
1000116c  744a                 JZ 0x100011b8
1000116e  8d85ccfcffff         LEA EAX,[EBP + 0xfffffccc]
10001174  50                   PUSH EAX
10001175  8d85c8fbffff         LEA EAX,[EBP + 0xfffffbc8]
1000117b  50                   PUSH EAX
1000117c  ffd7                 CALL EDI
1000117e  8d85d4feffff         LEA EAX,[EBP + 0xfffffed4]
10001184  50                   PUSH EAX
10001185  686c300010           PUSH 0x1000306c
1000118a  ff7508               PUSH dword ptr [EBP + 0x8]
1000118d  e824070000           CALL 0x100018b6
10001192  83c40c               ADD ESP,0xc
10001195  8d85c8fbffff         LEA EAX,[EBP + 0xfffffbc8]
1000119b  50                   PUSH EAX
1000119c  8d85d4feffff         LEA EAX,[EBP + 0xfffffed4]
100011a2  50                   PUSH EAX
100011a3  8d85ccfcffff         LEA EAX,[EBP + 0xfffffccc]
100011a9  683c300010           PUSH 0x1000303c
100011ae  50                   PUSH EAX
100011af  ff1570200010         CALL dword ptr [0x10002070]
100011b5  83c410               ADD ESP,0x10
100011b8  ff75f8               PUSH dword ptr [EBP + -0x8]
100011bb  ff1534200010         CALL dword ptr [0x10002034]
100011c1  ff75f8               PUSH dword ptr [EBP + -0x8]
100011c4  ff1538200010         CALL dword ptr [0x10002038]
100011ca  a1d0300010           MOV EAX,[0x100030d0]
100011cf  8d95ccfcffff         LEA EDX,[EBP + 0xfffffccc]
100011d5  52                   PUSH EDX
100011d6  50                   PUSH EAX
100011d7  8b08                 MOV ECX,dword ptr [EAX]
100011d9  ff5150               CALL dword ptr [ECX + 0x50]
100011dc  ff75ec               PUSH dword ptr [EBP + -0x14]
100011df  8d85c8fbffff         LEA EAX,[EBP + 0xfffffbc8]
100011e5  50                   PUSH EAX
100011e6  e866060000           CALL 0x10001851
100011eb  59                   POP ECX
100011ec  8bf8                 MOV EDI,EAX
100011ee  59                   POP ECX
100011ef  8d85b8f7ffff         LEA EAX,[EBP + 0xfffff7b8]
100011f5  56                   PUSH ESI
100011f6  50                   PUSH EAX
100011f7  8d85c8fbffff         LEA EAX,[EBP + 0xfffffbc8]
100011fd  6aff                 PUSH -0x1
100011ff  33db                 XOR EBX,EBX
10001201  50                   PUSH EAX
10001202  53                   PUSH EBX
10001203  53                   PUSH EBX
10001204  ff154c200010         CALL dword ptr [0x1000204c]
1000120a  8d85ccfcffff         LEA EAX,[EBP + 0xfffffccc]
10001210  57                   PUSH EDI
10001211  50                   PUSH EAX
10001212  e83a060000           CALL 0x10001851
10001217  59                   POP ECX
10001218  8bf0                 MOV ESI,EAX
1000121a  a1d0300010           MOV EAX,[0x100030d0]
1000121f  59                   POP ECX
10001220  8d95ccfcffff         LEA EDX,[EBP + 0xfffffccc]
10001226  8b08                 MOV ECX,dword ptr [EAX]
10001228  52                   PUSH EDX
10001229  50                   PUSH EAX
1000122a  ff512c               CALL dword ptr [ECX + 0x2c]
1000122d  8d85ccfcffff         LEA EAX,[EBP + 0xfffffccc]
10001233  56                   PUSH ESI
10001234  50                   PUSH EAX
10001235  e817060000           CALL 0x10001851
1000123a  59                   POP ECX
1000123b  8bf0                 MOV ESI,EAX
1000123d  a1d0300010           MOV EAX,[0x100030d0]
10001242  59                   POP ECX
10001243  8d95ccfcffff         LEA EDX,[EBP + 0xfffffccc]
10001249  8b08                 MOV ECX,dword ptr [EAX]
1000124b  52                   PUSH EDX
1000124c  50                   PUSH EAX
1000124d  ff5124               CALL dword ptr [ECX + 0x24]
10001250  8d85ccfcffff         LEA EAX,[EBP + 0xfffffccc]
10001256  56                   PUSH ESI
10001257  50                   PUSH EAX
10001258  e8f4050000           CALL 0x10001851
1000125d  59                   POP ECX
1000125e  8bf0                 MOV ESI,EAX
10001260  59                   POP ECX
10001261  8d85ccfcffff         LEA EAX,[EBP + 0xfffffccc]
10001267  50                   PUSH EAX
10001268  e80c060000           CALL 0x10001879
1000126d  59                   POP ECX
1000126e  8bf8                 MOV EDI,EAX
10001270  8d85ccfcffff         LEA EAX,[EBP + 0xfffffccc]
10001276  56                   PUSH ESI
10001277  50                   PUSH EAX
10001278  e8d4050000           CALL 0x10001851
1000127d  59                   POP ECX
1000127e  8bf0                 MOV ESI,EAX
10001280  a1d0300010           MOV EAX,[0x100030d0]
10001285  59                   POP ECX
10001286  8d95ccfcffff         LEA EDX,[EBP + 0xfffffccc]
1000128c  57                   PUSH EDI
1000128d  8b08                 MOV ECX,dword ptr [EAX]
1000128f  52                   PUSH EDX
10001290  50                   PUSH EAX
10001291  ff5144               CALL dword ptr [ECX + 0x44]
10001294  8d85ccfcffff         LEA EAX,[EBP + 0xfffffccc]
1000129a  56                   PUSH ESI
1000129b  50                   PUSH EAX
1000129c  e8b0050000           CALL 0x10001851
100012a1  59                   POP ECX
100012a2  59                   POP ECX
100012a3  8bf0                 MOV ESI,EAX
100012a5  a1d0300010           MOV EAX,[0x100030d0]
100012aa  8d95ccfcffff         LEA EDX,[EBP + 0xfffffccc]
100012b0  8b08                 MOV ECX,dword ptr [EAX]
100012b2  52                   PUSH EDX
100012b3  50                   PUSH EAX
100012b4  ff511c               CALL dword ptr [ECX + 0x1c]
100012b7  8d85ccfcffff         LEA EAX,[EBP + 0xfffffccc]
100012bd  56                   PUSH ESI
100012be  50                   PUSH EAX
100012bf  e88d050000           CALL 0x10001851
100012c4  59                   POP ECX
100012c5  8d85ccfcffff         LEA EAX,[EBP + 0xfffffccc]
100012cb  59                   POP ECX
100012cc  50                   PUSH EAX
100012cd  e8a7050000           CALL 0x10001879
100012d2  84c0                 TEST AL,AL
100012d4  59                   POP ECX
100012d5  740d                 JZ 0x100012e4
100012d7  8b0dd0300010         MOV ECX,dword ptr [0x100030d0]
100012dd  50                   PUSH EAX
100012de  51                   PUSH ECX
100012df  8b11                 MOV EDX,dword ptr [ECX]
100012e1  ff5234               CALL dword ptr [EDX + 0x34]
100012e4  8d85c8fbffff         LEA EAX,[EBP + 0xfffffbc8]
100012ea  50                   PUSH EAX
100012eb  8d85ccfcffff         LEA EAX,[EBP + 0xfffffccc]
100012f1  6828300010           PUSH 0x10003028
100012f6  50                   PUSH EAX
100012f7  ff1570200010         CALL dword ptr [0x10002070]
100012fd  8b7d08               MOV EDI,dword ptr [EBP + 0x8]
10001300  83c40c               ADD ESP,0xc
10001303  57                   PUSH EDI
10001304  e8b5060000           CALL 0x100019be
10001309  8b352c200010         MOV ESI,dword ptr [0x1000202c]
1000130f  59                   POP ECX
10001310  85c0                 TEST EAX,EAX
10001312  741f                 JZ 0x10001333
10001314  8d45fc               LEA EAX,[EBP + -0x4]
10001317  53                   PUSH EBX
10001318  50                   PUSH EAX
10001319  8d85ccfcffff         LEA EAX,[EBP + 0xfffffccc]
1000131f  50                   PUSH EAX
10001320  ffd6                 CALL ESI
10001322  50                   PUSH EAX
10001323  8d85ccfcffff         LEA EAX,[EBP + 0xfffffccc]
10001329  50                   PUSH EAX
1000132a  ff7724               PUSH dword ptr [EDI + 0x24]
1000132d  ff1554200010         CALL dword ptr [0x10002054]
10001333  8d85d4feffff         LEA EAX,[EBP + 0xfffffed4]
10001339  50                   PUSH EAX
1000133a  681c300010           PUSH 0x1000301c
1000133f  57                   PUSH EDI
10001340  e871050000           CALL 0x100018b6
10001345  80a5ccfcffff00       AND byte ptr [EBP + 0xfffffccc],0x0
1000134c  83c40c               ADD ESP,0xc
1000134f  80bdd4feffff00       CMP byte ptr [EBP + 0xfffffed4],0x0
10001356  0f84d7000000         JZ 0x10001433
1000135c  8d85c8fbffff         LEA EAX,[EBP + 0xfffffbc8]
10001362  50                   PUSH EAX
10001363  ffd6                 CALL ESI
10001365  8d8405c7fbffff       LEA EAX,[EBP + EAX*0x1 + 0xfffffbc7]
1000136c  8d8dc8fbffff         LEA ECX,[EBP + 0xfffffbc8]
10001372  3bc1                 CMP EAX,ECX
10001374  7608                 JBE 0x1000137e
10001376  80385c               CMP byte ptr [EAX],0x5c
10001379  7403                 JZ 0x1000137e
1000137b  48                   DEC EAX
1000137c  ebee                 JMP 0x1000136c
1000137e  50                   PUSH EAX
1000137f  8d85d4feffff         LEA EAX,[EBP + 0xfffffed4]
10001385  50                   PUSH EAX
10001386  ff1528200010         CALL dword ptr [0x10002028]
1000138c  8d85d4feffff         LEA EAX,[EBP + 0xfffffed4]
10001392  50                   PUSH EAX
10001393  ffd6                 CALL ESI
10001395  8d8405d4feffff       LEA EAX,[EBP + EAX*0x1 + 0xfffffed4]
1000139c  8d8dd4feffff         LEA ECX,[EBP + 0xfffffed4]
100013a2  3bc1                 CMP EAX,ECX
100013a4  8bf8                 MOV EDI,EAX
100013a6  7617                 JBE 0x100013bf
100013a8  8a0f                 MOV CL,byte ptr [EDI]
100013aa  80f95c               CMP CL,0x5c
100013ad  7410                 JZ 0x100013bf
100013af  80f92e               CMP CL,0x2e
100013b2  740b                 JZ 0x100013bf
100013b4  4f                   DEC EDI
100013b5  8d8dd4feffff         LEA ECX,[EBP + 0xfffffed4]
100013bb  3bf9                 CMP EDI,ECX
100013bd  77e9                 JA 0x100013a8
100013bf  803f2e               CMP byte ptr [EDI],0x2e
100013c2  7402                 JZ 0x100013c6
100013c4  8bf8                 MOV EDI,EAX
100013c6  85db                 TEST EBX,EBX
100013c8  7410                 JZ 0x100013da
100013ca  53                   PUSH EBX
100013cb  6814300010           PUSH 0x10003014
100013d0  57                   PUSH EDI
100013d1  ff1570200010         CALL dword ptr [0x10002070]
100013d7  83c40c               ADD ESP,0xc
100013da  43                   INC EBX
100013db  81fbe8030000         CMP EBX,0x3e8
100013e1  7d50                 JGE 0x10001433
100013e3  8d85d4feffff         LEA EAX,[EBP + 0xfffffed4]
100013e9  50                   PUSH EAX
100013ea  ff1558200010         CALL dword ptr [0x10002058]
100013f0  83f8ff               CMP EAX,-0x1
100013f3  75d1                 JNZ 0x100013c6
100013f5  81fbe8030000         CMP EBX,0x3e8
100013fb  7d36                 JGE 0x10001433
100013fd  8d85d4feffff         LEA EAX,[EBP + 0xfffffed4]
10001403  6a01                 PUSH 0x1
10001405  50                   PUSH EAX
10001406  8d85c8fbffff         LEA EAX,[EBP + 0xfffffbc8]
1000140c  50                   PUSH EAX
1000140d  ff1550200010         CALL dword ptr [0x10002050]
10001413  85c0                 TEST EAX,EAX
10001415  741c                 JZ 0x10001433
10001417  8d85d4feffff         LEA EAX,[EBP + 0xfffffed4]
1000141d  50                   PUSH EAX
1000141e  8d85ccfcffff         LEA EAX,[EBP + 0xfffffccc]
10001424  6800300010           PUSH 0x10003000
10001429  50                   PUSH EAX
1000142a  ff1570200010         CALL dword ptr [0x10002070]
10001430  83c40c               ADD ESP,0xc
10001433  8b45f4               MOV EAX,dword ptr [EBP + -0xc]
10001436  8d95b8f7ffff         LEA EDX,[EBP + 0xfffff7b8]
1000143c  6a00                 PUSH 0x0
1000143e  52                   PUSH EDX
1000143f  8b08                 MOV ECX,dword ptr [EAX]
10001441  50                   PUSH EAX
10001442  ff5118               CALL dword ptr [ECX + 0x18]
10001445  8b45f4               MOV EAX,dword ptr [EBP + -0xc]
10001448  50                   PUSH EAX
10001449  8b08                 MOV ECX,dword ptr [EAX]
1000144b  ff5108               CALL dword ptr [ECX + 0x8]
1000144e  80bdccfcffff00       CMP byte ptr [EBP + 0xfffffccc],0x0
10001455  7456                 JZ 0x100014ad
10001457  8d85c8fbffff         LEA EAX,[EBP + 0xfffffbc8]
1000145d  50                   PUSH EAX
1000145e  8d85d4feffff         LEA EAX,[EBP + 0xfffffed4]
10001464  50                   PUSH EAX
10001465  e85d000000           CALL 0x100014c7
1000146a  59                   POP ECX
1000146b  85c0                 TEST EAX,EAX
1000146d  59                   POP ECX
1000146e  7430                 JZ 0x100014a0
10001470  8b7d08               MOV EDI,dword ptr [EBP + 0x8]
10001473  57                   PUSH EDI
10001474  e845050000           CALL 0x100019be
10001479  85c0                 TEST EAX,EAX
1000147b  59                   POP ECX
1000147c  742f                 JZ 0x100014ad
1000147e  8d45fc               LEA EAX,[EBP + -0x4]
10001481  6a00                 PUSH 0x0
10001483  50                   PUSH EAX
10001484  8d85ccfcffff         LEA EAX,[EBP + 0xfffffccc]
1000148a  50                   PUSH EAX
1000148b  ffd6                 CALL ESI
1000148d  50                   PUSH EAX
1000148e  8d85ccfcffff         LEA EAX,[EBP + 0xfffffccc]
10001494  50                   PUSH EAX
10001495  ff7724               PUSH dword ptr [EDI + 0x24]
10001498  ff1554200010         CALL dword ptr [0x10002054]
1000149e  eb0d                 JMP 0x100014ad
100014a0  8d85d4feffff         LEA EAX,[EBP + 0xfffffed4]
100014a6  50                   PUSH EAX
100014a7  ff1548200010         CALL dword ptr [0x10002048]
100014ad  a1d0300010           MOV EAX,[0x100030d0]
100014b2  50                   PUSH EAX
100014b3  8b08                 MOV ECX,dword ptr [EAX]
100014b5  ff5108               CALL dword ptr [ECX + 0x8]
100014b8  5b                   POP EBX
100014b9  5f                   POP EDI
100014ba  ff1590200010         CALL dword ptr [0x10002090]
100014c0  33c0                 XOR EAX,EAX
100014c2  5e                   POP ESI
100014c3  c9                   LEAVE
100014c4  c20400               RET 0x4

; ==== FUNCTION FUN_100014c7 entry=100014c7 sig=undefined4 __cdecl FUN_100014c7(LPCSTR param_1, LPCSTR param_2)
100014c7  55                   PUSH EBP
100014c8  8bec                 MOV EBP,ESP
100014ca  81ecd80f0000         SUB ESP,0xfd8
100014d0  53                   PUSH EBX
100014d1  56                   PUSH ESI
100014d2  57                   PUSH EDI
100014d3  bb80000000           MOV EBX,0x80
100014d8  6a00                 PUSH 0x0
100014da  8b353c200010         MOV ESI,dword ptr [0x1000203c]
100014e0  53                   PUSH EBX
100014e1  6a03                 PUSH 0x3
100014e3  6a00                 PUSH 0x0
100014e5  bf00000080           MOV EDI,0x80000000
100014ea  6a01                 PUSH 0x1
100014ec  57                   PUSH EDI
100014ed  ff7508               PUSH dword ptr [EBP + 0x8]
100014f0  ffd6                 CALL ESI
100014f2  83f8ff               CMP EAX,-0x1
100014f5  894508               MOV dword ptr [EBP + 0x8],EAX
100014f8  7431                 JZ 0x1000152b
100014fa  8d4df8               LEA ECX,[EBP + -0x8]
100014fd  6a00                 PUSH 0x0
100014ff  51                   PUSH ECX
10001500  8d8d10f8ffff         LEA ECX,[EBP + 0xfffff810]
10001506  68e8070000           PUSH 0x7e8
1000150b  51                   PUSH ECX
1000150c  50                   PUSH EAX
1000150d  ff1564200010         CALL dword ptr [0x10002064]
10001513  ff7508               PUSH dword ptr [EBP + 0x8]
10001516  85c0                 TEST EAX,EAX
10001518  750b                 JNZ 0x10001525
1000151a  ff1560200010         CALL dword ptr [0x10002060]
10001520  6a01                 PUSH 0x1
10001522  58                   POP EAX
10001523  eb44                 JMP 0x10001569
10001525  ff1560200010         CALL dword ptr [0x10002060]
1000152b  6a00                 PUSH 0x0
1000152d  53                   PUSH EBX
1000152e  6a03                 PUSH 0x3
10001530  6a00                 PUSH 0x0
10001532  6a01                 PUSH 0x1
10001534  5b                   POP EBX
10001535  53                   PUSH EBX
10001536  57                   PUSH EDI
10001537  ff750c               PUSH dword ptr [EBP + 0xc]
1000153a  ffd6                 CALL ESI
1000153c  8bf0                 MOV ESI,EAX
1000153e  83feff               CMP ESI,-0x1
10001541  7424                 JZ 0x10001567
10001543  8d45fc               LEA EAX,[EBP + -0x4]
10001546  6a00                 PUSH 0x0
10001548  50                   PUSH EAX
10001549  8d8528f0ffff         LEA EAX,[EBP + 0xfffff028]
1000154f  68e8070000           PUSH 0x7e8
10001554  50                   PUSH EAX
10001555  56                   PUSH ESI
10001556  ff1564200010         CALL dword ptr [0x10002064]
1000155c  85c0                 TEST EAX,EAX
1000155e  56                   PUSH ESI
1000155f  750d                 JNZ 0x1000156e
10001561  ff1560200010         CALL dword ptr [0x10002060]
10001567  8bc3                 MOV EAX,EBX
10001569  5f                   POP EDI
1000156a  5e                   POP ESI
1000156b  5b                   POP EBX
1000156c  c9                   LEAVE
1000156d  c3                   RET
1000156e  ff1560200010         CALL dword ptr [0x10002060]
10001574  8b4df8               MOV ECX,dword ptr [EBP + -0x8]
10001577  3b4dfc               CMP ECX,dword ptr [EBP + -0x4]
1000157a  75eb                 JNZ 0x10001567
1000157c  85c9                 TEST ECX,ECX
1000157e  7616                 JBE 0x10001596
10001580  33c0                 XOR EAX,EAX
10001582  8a940510f8ffff       MOV DL,byte ptr [EBP + EAX*0x1 + 0xfffff810]
10001589  3a940528f0ffff       CMP DL,byte ptr [EBP + EAX*0x1 + 0xfffff028]
10001590  75d5                 JNZ 0x10001567
10001592  40                   INC EAX
10001593  49                   DEC ECX
10001594  75ec                 JNZ 0x10001582
10001596  33c0                 XOR EAX,EAX
10001598  ebcf                 JMP 0x10001569

; ==== FUNCTION DoService entry=1000159a sig=bool __stdcall DoService(int param_1)
1000159a  55                   PUSH EBP
1000159b  8bec                 MOV EBP,ESP
1000159d  81ec28060000         SUB ESP,0x628
100015a3  53                   PUSH EBX
100015a4  8b5d08               MOV EBX,dword ptr [EBP + 0x8]
100015a7  57                   PUSH EDI
100015a8  6a01                 PUSH 0x1
100015aa  5f                   POP EDI
100015ab  397b20               CMP dword ptr [EBX + 0x20],EDI
100015ae  7507                 JNZ 0x100015b7
100015b0  33c0                 XOR EAX,EAX
100015b2  e975020000           JMP 0x1000182c
100015b7  56                   PUSH ESI
100015b8  8d85d8fdffff         LEA EAX,[EBP + 0xfffffdd8]
100015be  ff7328               PUSH dword ptr [EBX + 0x28]
100015c1  50                   PUSH EAX
100015c2  e88a020000           CALL 0x10001851
100015c7  59                   POP ECX
100015c8  59                   POP ECX
100015c9  50                   PUSH EAX
100015ca  8d85d8f9ffff         LEA EAX,[EBP + 0xfffff9d8]
100015d0  50                   PUSH EAX
100015d1  e87b020000           CALL 0x10001851
100015d6  59                   POP ECX
100015d7  59                   POP ECX
100015d8  50                   PUSH EAX
100015d9  8d85d8fcffff         LEA EAX,[EBP + 0xfffffcd8]
100015df  50                   PUSH EAX
100015e0  e86c020000           CALL 0x10001851
100015e5  59                   POP ECX
100015e6  8d95d8fcffff         LEA EDX,[EBP + 0xfffffcd8]
100015ec  59                   POP ECX
100015ed  8a8dd8fcffff         MOV CL,byte ptr [EBP + 0xfffffcd8]
100015f3  50                   PUSH EAX
100015f4  f6d9                 NEG CL
100015f6  1bc9                 SBB ECX,ECX
100015f8  8d85d8faffff         LEA EAX,[EBP + 0xfffffad8]
100015fe  23ca                 AND ECX,EDX
10001600  50                   PUSH EAX
10001601  894de8               MOV dword ptr [EBP + -0x18],ECX
10001604  e848020000           CALL 0x10001851
10001609  59                   POP ECX
1000160a  8d95d8faffff         LEA EDX,[EBP + 0xfffffad8]
10001610  59                   POP ECX
10001611  8a8dd8faffff         MOV CL,byte ptr [EBP + 0xfffffad8]
10001617  50                   PUSH EAX
10001618  f6d9                 NEG CL
1000161a  1bc9                 SBB ECX,ECX
1000161c  8d85d8feffff         LEA EAX,[EBP + 0xfffffed8]
10001622  23ca                 AND ECX,EDX
10001624  50                   PUSH EAX
10001625  894de4               MOV dword ptr [EBP + -0x1c],ECX
10001628  e824020000           CALL 0x10001851
1000162d  59                   POP ECX
1000162e  8bf0                 MOV ESI,EAX
10001630  59                   POP ECX
10001631  8d85d8feffff         LEA EAX,[EBP + 0xfffffed8]
10001637  50                   PUSH EAX
10001638  e83c020000           CALL 0x10001879
1000163d  59                   POP ECX
1000163e  8945f0               MOV dword ptr [EBP + -0x10],EAX
10001641  8d85d8feffff         LEA EAX,[EBP + 0xfffffed8]
10001647  56                   PUSH ESI
10001648  50                   PUSH EAX
10001649  e803020000           CALL 0x10001851
1000164e  59                   POP ECX
1000164f  8bf0                 MOV ESI,EAX
10001651  59                   POP ECX
10001652  8d85d8feffff         LEA EAX,[EBP + 0xfffffed8]
10001658  50                   PUSH EAX
10001659  e81b020000           CALL 0x10001879
1000165e  59                   POP ECX
1000165f  8945ec               MOV dword ptr [EBP + -0x14],EAX
10001662  8d85d8feffff         LEA EAX,[EBP + 0xfffffed8]
10001668  56                   PUSH ESI
10001669  50                   PUSH EAX
1000166a  e8e2010000           CALL 0x10001851
1000166f  59                   POP ECX
10001670  8bf0                 MOV ESI,EAX
10001672  59                   POP ECX
10001673  8d85d8feffff         LEA EAX,[EBP + 0xfffffed8]
10001679  50                   PUSH EAX
1000167a  e8fa010000           CALL 0x10001879
1000167f  59                   POP ECX
10001680  8945e0               MOV dword ptr [EBP + -0x20],EAX
10001683  8d85d8fbffff         LEA EAX,[EBP + 0xfffffbd8]
10001689  56                   PUSH ESI
1000168a  50                   PUSH EAX
1000168b  e8c1010000           CALL 0x10001851
10001690  59                   POP ECX
10001691  897d08               MOV dword ptr [EBP + 0x8],EDI
10001694  59                   POP ECX
10001695  33f6                 XOR ESI,ESI
10001697  6a0a                 PUSH 0xa
10001699  56                   PUSH ESI
1000169a  56                   PUSH ESI
1000169b  8975dc               MOV dword ptr [EBP + -0x24],ESI
1000169e  ff1518200010         CALL dword ptr [0x10002018]
100016a4  3bc6                 CMP EAX,ESI
100016a6  8945f4               MOV dword ptr [EBP + -0xc],EAX
100016a9  bfcc300010           MOV EDI,0x100030cc
100016ae  0f84dd000000         JZ 0x10001791
100016b4  ff75e4               PUSH dword ptr [EBP + -0x1c]
100016b7  8d8dd8f9ffff         LEA ECX,[EBP + 0xfffff9d8]
100016bd  ff75e8               PUSH dword ptr [EBP + -0x18]
100016c0  57                   PUSH EDI
100016c1  56                   PUSH ESI
100016c2  56                   PUSH ESI
100016c3  51                   PUSH ECX
100016c4  ff75e0               PUSH dword ptr [EBP + -0x20]
100016c7  8d8dd8fbffff         LEA ECX,[EBP + 0xfffffbd8]
100016cd  ff75ec               PUSH dword ptr [EBP + -0x14]
100016d0  ff75f0               PUSH dword ptr [EBP + -0x10]
100016d3  68ff010f00           PUSH 0xf01ff
100016d8  51                   PUSH ECX
100016d9  8d8dd8fdffff         LEA ECX,[EBP + 0xfffffdd8]
100016df  51                   PUSH ECX
100016e0  50                   PUSH EAX
100016e1  ff1510200010         CALL dword ptr [0x10002010]
100016e7  3bc6                 CMP EAX,ESI
100016e9  740f                 JZ 0x100016fa
100016eb  50                   PUSH EAX
100016ec  897508               MOV dword ptr [EBP + 0x8],ESI
100016ef  ff1508200010         CALL dword ptr [0x10002008]
100016f5  e98e000000           JMP 0x10001788
100016fa  c745dc01000000       MOV dword ptr [EBP + -0x24],0x1
10001701  8975fc               MOV dword ptr [EBP + -0x4],ESI
10001704  ff75f4               PUSH dword ptr [EBP + -0xc]
10001707  ff1500200010         CALL dword ptr [0x10002000]
1000170d  3bc6                 CMP EAX,ESI
1000170f  8945f8               MOV dword ptr [EBP + -0x8],EAX
10001712  7508                 JNZ 0x1000171c
10001714  6a32                 PUSH 0x32
10001716  ff1540200010         CALL dword ptr [0x10002040]
1000171c  ff45fc               INC dword ptr [EBP + -0x4]
1000171f  3975f8               CMP dword ptr [EBP + -0x8],ESI
10001722  750b                 JNZ 0x1000172f
10001724  837dfc32             CMP dword ptr [EBP + -0x4],0x32
10001728  7cda                 JL 0x10001704
1000172a  3975f8               CMP dword ptr [EBP + -0x8],ESI
1000172d  7459                 JZ 0x10001788
1000172f  8d85d8fdffff         LEA EAX,[EBP + 0xfffffdd8]
10001735  6a02                 PUSH 0x2
10001737  50                   PUSH EAX
10001738  ff75f4               PUSH dword ptr [EBP + -0xc]
1000173b  ff1504200010         CALL dword ptr [0x10002004]
10001741  3bc6                 CMP EAX,ESI
10001743  8945fc               MOV dword ptr [EBP + -0x4],EAX
10001746  7437                 JZ 0x1000177f
10001748  8d8dd8fbffff         LEA ECX,[EBP + 0xfffffbd8]
1000174e  51                   PUSH ECX
1000174f  8d8dd8f9ffff         LEA ECX,[EBP + 0xfffff9d8]
10001755  ff75e4               PUSH dword ptr [EBP + -0x1c]
10001758  ff75e8               PUSH dword ptr [EBP + -0x18]
1000175b  57                   PUSH EDI
1000175c  56                   PUSH ESI
1000175d  56                   PUSH ESI
1000175e  51                   PUSH ECX
1000175f  ff75e0               PUSH dword ptr [EBP + -0x20]
10001762  ff75ec               PUSH dword ptr [EBP + -0x14]
10001765  ff75f0               PUSH dword ptr [EBP + -0x10]
10001768  50                   PUSH EAX
10001769  ff1514200010         CALL dword ptr [0x10002014]
1000176f  85c0                 TEST EAX,EAX
10001771  7403                 JZ 0x10001776
10001773  897508               MOV dword ptr [EBP + 0x8],ESI
10001776  ff75fc               PUSH dword ptr [EBP + -0x4]
10001779  ff1508200010         CALL dword ptr [0x10002008]
1000177f  ff75f8               PUSH dword ptr [EBP + -0x8]
10001782  ff150c200010         CALL dword ptr [0x1000200c]
10001788  ff75f4               PUSH dword ptr [EBP + -0xc]
1000178b  ff1508200010         CALL dword ptr [0x10002008]
10001791  3975dc               CMP dword ptr [EBP + -0x24],ESI
10001794  b8c0300010           MOV EAX,0x100030c0
10001799  7505                 JNZ 0x100017a0
1000179b  b8b8300010           MOV EAX,0x100030b8
100017a0  397508               CMP dword ptr [EBP + 0x8],ESI
100017a3  7405                 JZ 0x100017aa
100017a5  bfac300010           MOV EDI,0x100030ac
100017aa  8d8dd8fdffff         LEA ECX,[EBP + 0xfffffdd8]
100017b0  51                   PUSH ECX
100017b1  50                   PUSH EAX
100017b2  57                   PUSH EDI
100017b3  8d85d8feffff         LEA EAX,[EBP + 0xfffffed8]
100017b9  6898300010           PUSH 0x10003098
100017be  50                   PUSH EAX
100017bf  ff1570200010         CALL dword ptr [0x10002070]
100017c5  83c414               ADD ESP,0x14
100017c8  53                   PUSH EBX
100017c9  e8f0010000           CALL 0x100019be
100017ce  85c0                 TEST EAX,EAX
100017d0  59                   POP ECX
100017d1  7423                 JZ 0x100017f6
100017d3  8d45d8               LEA EAX,[EBP + -0x28]
100017d6  56                   PUSH ESI
100017d7  50                   PUSH EAX
100017d8  8d85d8feffff         LEA EAX,[EBP + 0xfffffed8]
100017de  50                   PUSH EAX
100017df  ff152c200010         CALL dword ptr [0x1000202c]
100017e5  50                   PUSH EAX
100017e6  8d85d8feffff         LEA EAX,[EBP + 0xfffffed8]
100017ec  50                   PUSH EAX
100017ed  ff7324               PUSH dword ptr [EBX + 0x24]
100017f0  ff1554200010         CALL dword ptr [0x10002054]
100017f6  397508               CMP dword ptr [EBP + 0x8],ESI
100017f9  741a                 JZ 0x10001815
100017fb  397334               CMP dword ptr [EBX + 0x34],ESI
100017fe  7510                 JNZ 0x10001810
10001800  56                   PUSH ESI
10001801  ff732c               PUSH dword ptr [EBX + 0x2c]
10001804  ff7330               PUSH dword ptr [EBX + 0x30]
10001807  ff7304               PUSH dword ptr [EBX + 0x4]
1000180a  ff156c200010         CALL dword ptr [0x1000206c]
10001810  397508               CMP dword ptr [EBP + 0x8],ESI
10001813  7513                 JNZ 0x10001828
10001815  6894300010           PUSH 0x10003094
1000181a  688c300010           PUSH 0x1000308c
1000181f  53                   PUSH EBX
10001820  e80d010000           CALL 0x10001932
10001825  83c40c               ADD ESP,0xc
10001828  8b4508               MOV EAX,dword ptr [EBP + 0x8]
1000182b  5e                   POP ESI
1000182c  5f                   POP EDI
1000182d  5b                   POP EBX
1000182e  c9                   LEAVE
1000182f  c20400               RET 0x4

; ==== FUNCTION IsAdmin entry=10001832 sig=undefined4 __stdcall IsAdmin(void)
10001832  68000000e0           PUSH 0xe0000000
10001837  6a00                 PUSH 0x0
10001839  6a00                 PUSH 0x0
1000183b  ff1518200010         CALL dword ptr [0x10002018]
10001841  85c0                 TEST EAX,EAX
10001843  7501                 JNZ 0x10001846
10001845  c3                   RET
10001846  50                   PUSH EAX
10001847  ff1508200010         CALL dword ptr [0x10002008]
1000184d  6a01                 PUSH 0x1
1000184f  58                   POP EAX
10001850  c3                   RET

; ==== FUNCTION FUN_10001851 entry=10001851 sig=char * __cdecl FUN_10001851(char * param_1, char * param_2)
10001851  8b442408             MOV EAX,dword ptr [ESP + 0x8]
10001855  8b542404             MOV EDX,dword ptr [ESP + 0x4]
10001859  8a08                 MOV CL,byte ptr [EAX]
1000185b  84c9                 TEST CL,CL
1000185d  7410                 JZ 0x1000186f
1000185f  80f97f               CMP CL,0x7f
10001862  740b                 JZ 0x1000186f
10001864  880a                 MOV byte ptr [EDX],CL
10001866  8a4801               MOV CL,byte ptr [EAX + 0x1]
10001869  42                   INC EDX
1000186a  40                   INC EAX
1000186b  84c9                 TEST CL,CL
1000186d  75f0                 JNZ 0x1000185f
1000186f  802200               AND byte ptr [EDX],0x0
10001872  80387f               CMP byte ptr [EAX],0x7f
10001875  7501                 JNZ 0x10001878
10001877  40                   INC EAX
10001878  c3                   RET

; ==== FUNCTION FUN_10001879 entry=10001879 sig=int __cdecl FUN_10001879(char * param_1)
10001879  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
1000187d  56                   PUSH ESI
1000187e  8a01                 MOV AL,byte ptr [ECX]
10001880  3c20                 CMP AL,0x20
10001882  7404                 JZ 0x10001888
10001884  3c09                 CMP AL,0x9
10001886  7503                 JNZ 0x1000188b
10001888  41                   INC ECX
10001889  ebf3                 JMP 0x1000187e
1000188b  33f6                 XOR ESI,ESI
1000188d  80392d               CMP byte ptr [ECX],0x2d
10001890  6a01                 PUSH 0x1
10001892  58                   POP EAX
10001893  7504                 JNZ 0x10001899
10001895  83c8ff               OR EAX,0xffffffff
10001898  41                   INC ECX
10001899  8a11                 MOV DL,byte ptr [ECX]
1000189b  80fa30               CMP DL,0x30
1000189e  7c11                 JL 0x100018b1
100018a0  80fa39               CMP DL,0x39
100018a3  7f0c                 JG 0x100018b1
100018a5  0fbed2               MOVSX EDX,DL
100018a8  8d34b6               LEA ESI,[ESI + ESI*0x4]
100018ab  8d7472d0             LEA ESI,[EDX + ESI*0x2 + -0x30]
100018af  ebe7                 JMP 0x10001898
100018b1  0fafc6               IMUL EAX,ESI
100018b4  5e                   POP ESI
100018b5  c3                   RET

; ==== FUNCTION FUN_100018b6 entry=100018b6 sig=undefined __cdecl FUN_100018b6(int param_1, LPCSTR param_2, LPSTR param_3)
100018b6  55                   PUSH EBP
100018b7  8bec                 MOV EBP,ESP
100018b9  83ec20               SUB ESP,0x20
100018bc  53                   PUSH EBX
100018bd  56                   PUSH ESI
100018be  57                   PUSH EDI
100018bf  8b3d30200010         MOV EDI,dword ptr [0x10002030]
100018c5  ff750c               PUSH dword ptr [EBP + 0xc]
100018c8  8d45e1               LEA EAX,[EBP + -0x1f]
100018cb  c645e025             MOV byte ptr [EBP + -0x20],0x25
100018cf  50                   PUSH EAX
100018d0  ffd7                 CALL EDI
100018d2  8d45e0               LEA EAX,[EBP + -0x20]
100018d5  68c8300010           PUSH 0x100030c8
100018da  50                   PUSH EAX
100018db  ff1528200010         CALL dword ptr [0x10002028]
100018e1  8b7508               MOV ESI,dword ptr [EBP + 0x8]
100018e4  33c0                 XOR EAX,EAX
100018e6  33db                 XOR EBX,EBX
100018e8  394614               CMP dword ptr [ESI + 0x14],EAX
100018eb  7621                 JBE 0x1000190e
100018ed  8d4de0               LEA ECX,[EBP + -0x20]
100018f0  51                   PUSH ECX
100018f1  8b4e0c               MOV ECX,dword ptr [ESI + 0xc]
100018f4  0fafc8               IMUL ECX,EAX
100018f7  034e18               ADD ECX,dword ptr [ESI + 0x18]
100018fa  51                   PUSH ECX
100018fb  ff1544200010         CALL dword ptr [0x10002044]
10001901  85c0                 TEST EAX,EAX
10001903  7409                 JZ 0x1000190e
10001905  43                   INC EBX
10001906  0fb7c3               MOVZX EAX,BX
10001909  3b4614               CMP EAX,dword ptr [ESI + 0x14]
1000190c  72df                 JC 0x100018ed
1000190e  0fb7c3               MOVZX EAX,BX
10001911  3b4614               CMP EAX,dword ptr [ESI + 0x14]
10001914  7311                 JNC 0x10001927
10001916  8b4e10               MOV ECX,dword ptr [ESI + 0x10]
10001919  0fafc8               IMUL ECX,EAX
1000191c  034e1c               ADD ECX,dword ptr [ESI + 0x1c]
1000191f  51                   PUSH ECX
10001920  ff7510               PUSH dword ptr [EBP + 0x10]
10001923  ffd7                 CALL EDI
10001925  eb06                 JMP 0x1000192d
10001927  8b4510               MOV EAX,dword ptr [EBP + 0x10]
1000192a  802000               AND byte ptr [EAX],0x0
1000192d  5f                   POP EDI
1000192e  5e                   POP ESI
1000192f  5b                   POP EBX
10001930  c9                   LEAVE
10001931  c3                   RET

; ==== FUNCTION FUN_10001932 entry=10001932 sig=undefined __cdecl FUN_10001932(int param_1, LPCSTR param_2, LPCSTR param_3)
10001932  55                   PUSH EBP
10001933  8bec                 MOV EBP,ESP
10001935  83ec20               SUB ESP,0x20
10001938  53                   PUSH EBX
10001939  8b1d30200010         MOV EBX,dword ptr [0x10002030]
1000193f  56                   PUSH ESI
10001940  57                   PUSH EDI
10001941  ff750c               PUSH dword ptr [EBP + 0xc]
10001944  8d45e1               LEA EAX,[EBP + -0x1f]
10001947  c645e025             MOV byte ptr [EBP + -0x20],0x25
1000194b  50                   PUSH EAX
1000194c  ffd3                 CALL EBX
1000194e  8d45e0               LEA EAX,[EBP + -0x20]
10001951  68c8300010           PUSH 0x100030c8
10001956  50                   PUSH EAX
10001957  ff1528200010         CALL dword ptr [0x10002028]
1000195d  8b7508               MOV ESI,dword ptr [EBP + 0x8]
10001960  33ff                 XOR EDI,EDI
10001962  397e14               CMP dword ptr [ESI + 0x14],EDI
10001965  7623                 JBE 0x1000198a
10001967  33c0                 XOR EAX,EAX
10001969  8d4de0               LEA ECX,[EBP + -0x20]
1000196c  51                   PUSH ECX
1000196d  8b4e0c               MOV ECX,dword ptr [ESI + 0xc]
10001970  0fafc8               IMUL ECX,EAX
10001973  034e18               ADD ECX,dword ptr [ESI + 0x18]
10001976  51                   PUSH ECX
10001977  ff1544200010         CALL dword ptr [0x10002044]
1000197d  85c0                 TEST EAX,EAX
1000197f  7409                 JZ 0x1000198a
10001981  47                   INC EDI
10001982  0fb7c7               MOVZX EAX,DI
10001985  3b4614               CMP EAX,dword ptr [ESI + 0x14]
10001988  72df                 JC 0x10001969
1000198a  0fb7ff               MOVZX EDI,DI
1000198d  3b7e14               CMP EDI,dword ptr [ESI + 0x14]
10001990  7218                 JC 0x100019aa
10001992  3b7e08               CMP EDI,dword ptr [ESI + 0x8]
10001995  7322                 JNC 0x100019b9
10001997  8d45e0               LEA EAX,[EBP + -0x20]
1000199a  50                   PUSH EAX
1000199b  8b460c               MOV EAX,dword ptr [ESI + 0xc]
1000199e  0fafc7               IMUL EAX,EDI
100019a1  034618               ADD EAX,dword ptr [ESI + 0x18]
100019a4  50                   PUSH EAX
100019a5  ffd3                 CALL EBX
100019a7  ff4614               INC dword ptr [ESI + 0x14]
100019aa  8b4610               MOV EAX,dword ptr [ESI + 0x10]
100019ad  ff7510               PUSH dword ptr [EBP + 0x10]
100019b0  0fafc7               IMUL EAX,EDI
100019b3  03461c               ADD EAX,dword ptr [ESI + 0x1c]
100019b6  50                   PUSH EAX
100019b7  ffd3                 CALL EBX
100019b9  5f                   POP EDI
100019ba  5e                   POP ESI
100019bb  5b                   POP EBX
100019bc  c9                   LEAVE
100019bd  c3                   RET

; ==== FUNCTION FUN_100019be entry=100019be sig=undefined4 __cdecl FUN_100019be(int param_1)
100019be  8b442404             MOV EAX,dword ptr [ESP + 0x4]
100019c2  837824ff             CMP dword ptr [EAX + 0x24],-0x1
100019c6  740a                 JZ 0x100019d2
100019c8  83783800             CMP dword ptr [EAX + 0x38],0x0
100019cc  7504                 JNZ 0x100019d2
100019ce  6a01                 PUSH 0x1
100019d0  58                   POP EAX
100019d1  c3                   RET
100019d2  33c0                 XOR EAX,EAX
100019d4  c3                   RET
; undefined 1 bytes at 100019d5

; ==== FUNCTION VERSION.DLL::VerQueryValueA entry=100019d6 sig=BOOL __stdcall VerQueryValueA(LPCVOID pBlock, LPCSTR lpSubBlock, LPVOID * lplpBuffer, PUINT puLen)
100019d6  ff2580200010         JMP dword ptr [0x10002080]

; ==== FUNCTION VERSION.DLL::GetFileVersionInfoA entry=100019dc sig=BOOL __stdcall GetFileVersionInfoA(LPCSTR lptstrFilename, DWORD dwHandle, DWORD dwLen, LPVOID lpData)
100019dc  ff257c200010         JMP dword ptr [0x1000207c]

; ==== FUNCTION VERSION.DLL::GetFileVersionInfoSizeA entry=100019e2 sig=DWORD __stdcall GetFileVersionInfoSizeA(LPCSTR lptstrFilename, LPDWORD lpdwHandle)
100019e2  ff2578200010         JMP dword ptr [0x10002078]
; undefined 24 bytes at 100019e8
10002000  addr 0000261e
10002004  addr 0000260e
10002008  addr 00002634
1000200c  addr 000025de
10002010  addr 0000264a
10002014  addr 000025f6
10002018  addr 0000265c
; undefined 4 bytes at 1000201c
10002020  addr 00002530
10002024  addr 0000253e
10002028  addr 0000254c
1000202c  addr 000024e4
10002030  addr 00002524
10002034  addr 00002514
10002038  addr 00002506
1000203c  addr 00002588
10002040  addr 00002596
10002044  addr 0000259e
10002048  addr 000024a8
1000204c  addr 000024f0
10002050  addr 000024b6
10002054  addr 000024d8
10002058  addr 000024c2
1000205c  addr 00002558
10002060  addr 0000256e
10002064  addr 0000257c
; undefined 4 bytes at 10002068
1000206c  addr 000025c4
10002070  addr 000025b8
; undefined 4 bytes at 10002074
10002078  addr 000026e4
1000207c  addr 000026ce
10002080  addr 000026bc
; undefined 4 bytes at 10002084
10002088  addr 000026a2
1000208c  addr 0000268e
10002090  addr 0000267c
; undefined 772 bytes at 10002094
10002398  ddw 2430h
1000239c  ddw 0h
100023a0  ddw 0h
100023a4  ddw 25AAh
100023a8  ddw 2020h
100023ac  ddw 247Ch
100023b0  ddw 0h
100023b4  ddw 0h
100023b8  ddw 25D2h
100023bc  ddw 206Ch
100023c0  ddw 2410h
100023c4  ddw 0h
100023c8  ddw 0h
100023cc  ddw 266Eh
100023d0  ddw 2000h
100023d4  ddw 2498h
100023d8  ddw 0h
100023dc  ddw 0h
100023e0  ddw 26B2h
100023e4  ddw 2088h
100023e8  ddw 2488h
100023ec  ddw 0h
100023f0  ddw 0h
100023f4  ddw 26FEh
100023f8  ddw 2078h
; undefined 20 bytes at 100023fc
10002410  ddw 261Eh
10002414  ddw 260Eh
10002418  ddw 2634h
1000241c  ddw 25DEh
10002420  ddw 264Ah
10002424  ddw 25F6h
10002428  ddw 265Ch
; undefined 4 bytes at 1000242c
10002430  ddw 2530h
10002434  ddw 253Eh
10002438  ddw 254Ch
1000243c  ddw 24E4h
10002440  ddw 2524h
10002444  ddw 2514h
10002448  ddw 2506h
1000244c  ddw 2588h
10002450  ddw 2596h
10002454  ddw 259Eh
10002458  ddw 24A8h
1000245c  ddw 24F0h
10002460  ddw 24B6h
10002464  ddw 24D8h
10002468  ddw 24C2h
1000246c  ddw 2558h
10002470  ddw 256Eh
10002474  ddw 257Ch
; undefined 4 bytes at 10002478
1000247c  ddw 25C4h
10002480  ddw 25B8h
; undefined 4 bytes at 10002484
10002488  ddw 26E4h
1000248c  ddw 26CEh
10002490  ddw 26BCh
; undefined 4 bytes at 10002494
10002498  ddw 26A2h
1000249c  ddw 268Eh
100024a0  ddw 267Ch
; undefined 4 bytes at 100024a4
100024a8  dw 4Eh
100024aa  ds "DeleteFileA"
100024b6  dw 25h
100024b8  ds "CopyFileA"
100024c2  dw E8h
100024c4  ds "GetFileAttributesA"
; undefined 1 bytes at 100024d7
100024d8  dw 27Bh
100024da  ds "WriteFile"
100024e4  dw 2A1h
100024e6  ds "lstrlenA"
; undefined 1 bytes at 100024ef
100024f0  dw 1ABh
100024f2  ds "MultiByteToWideChar"
10002506  dw 15Ch
10002508  ds "GlobalFree"
; undefined 1 bytes at 10002513
10002514  dw 166h
10002516  ds "GlobalUnlock"
; undefined 1 bytes at 10002523
10002524  dw 29Bh
10002526  ds "lstrcpyA"
; undefined 1 bytes at 1000252f
10002530  dw 160h
10002532  ds "GlobalLock"
; undefined 1 bytes at 1000253d
1000253e  dw 155h
10002540  ds "GlobalAlloc"
1000254c  dw 292h
1000254e  ds "lstrcatA"
; undefined 1 bytes at 10002557
10002558  dw 131h
1000255a  ds "GetSystemDirectoryA"
1000256e  dw 18h
10002570  ds "CloseHandle"
1000257c  dw 1D6h
1000257e  ds "ReadFile"
; undefined 1 bytes at 10002587
10002588  dw 31h
1000258a  ds "CreateFileA"
10002596  dw 23Fh
10002598  ds "Sleep"
1000259e  dw 295h
100025a0  ds "lstrcmpA"
; undefined 1 bytes at 100025a9
100025aa  ds "KERNEL32.dll"
; undefined 1 bytes at 100025b7
100025b8  dw 264h
100025ba  ds "wsprintfA"
100025c4  dw 195h
100025c6  ds "MessageBoxA"
100025d2  ds "USER32.dll"
; undefined 1 bytes at 100025dd
100025de  dw 18Ch
100025e0  ds "UnlockServiceDatabase"
100025f6  dw 1Fh
100025f8  ds "ChangeServiceConfigA"
; undefined 1 bytes at 1000260d
1000260e  dw 107h
10002610  ds "OpenServiceA"
; undefined 1 bytes at 1000261d
1000261e  dw B4h
10002620  ds "LockServiceDatabase"
10002634  dw 24h
10002636  ds "CloseServiceHandle"
; undefined 1 bytes at 10002649
1000264a  dw 2Ah
1000264c  ds "CreateServiceA"
; undefined 1 bytes at 1000265b
1000265c  dw 105h
1000265e  ds "OpenSCManagerA"
; undefined 1 bytes at 1000266d
1000266e  ds "ADVAPI32.dll"
; undefined 1 bytes at 1000267b
1000267c  dw 48h
1000267e  ds "CoUninitialize"
; undefined 1 bytes at 1000268d
1000268e  dw Ch
10002690  ds "CoCreateInstance"
; undefined 1 bytes at 100026a1
100026a2  dw 26h
100026a4  ds "CoInitialize"
; undefined 1 bytes at 100026b1
100026b2  ds "ole32.dll"
100026bc  dw Ah
100026be  ds "VerQueryValueA"
; undefined 1 bytes at 100026cd
100026ce  dw 0h
100026d0  ds "GetFileVersionInfoA"
100026e4  dw 1h
100026e6  ds "GetFileVersionInfoSizeA"
100026fe  ds "VERSION.dll"
; undefined 6 bytes at 1000270a
10002710  IMAGE_DIRECTORY_ENTRY_EXPORT 
10002738  ibo32 10001006
1000273c  ibo32 1000159a
10002740  ibo32 10001832
10002744  ibo32 10002762
10002748  ibo32 1000276c
1000274c  ibo32 10002774
10002750  dw 1h
10002752  dw 2h
10002754  dw 0h
10002756  ds "W32INST.DLL"
10002762  ds "DoService"
1000276c  ds "IsAdmin"
10002774  ds "ShellLink"
; undefined 130 bytes at 1000277e
10003000  ds "Backup Copy: %s\r\n"
; undefined 2 bytes at 10003012
10003014  ds ".%03d"
; undefined 2 bytes at 1000301a
1000301c  ds "BACKUPDIR"
; undefined 2 bytes at 10003026
10003028  ds "Shell Link: %s\r\n"
; undefined 3 bytes at 10003039
1000303c  ds "::{9db1186f-40df-11d1-aa8c-00c04fb67863}:%s::%s"
1000306c  ds "APPTITLE"
; undefined 7 bytes at 10003075
1000307c  ds "\\SHELL32.DLL"
; undefined 3 bytes at 10003089
1000308c  ds "RESTART"
; undefined 4 bytes at 10003094
10003098  ds "%s%s Service: %s\r\n"
; undefined 1 bytes at 100030ab
100030ac  ds "Could not "
; undefined 1 bytes at 100030b7
100030b8  ds "Create"
; undefined 1 bytes at 100030bf
100030c0  ds "Update"
; undefined 9 bytes at 100030c7
100030d0  undefined4 00000000h
; undefined 300 bytes at 100030d4
10004000  IMAGE_BASE_RELOCATION 
10004008  dw 3021h
1000400a  dw 302Eh
1000400c  dw 3033h
1000400e  dw 303Bh
10004010  dw 3041h
10004012  dw 304Eh
10004014  dw 305Bh
10004016  dw 308Ch
10004018  dw 30C7h
1000401a  dw 30D2h
1000401c  dw 30D9h
1000401e  dw 30FCh
10004020  dw 3106h
10004022  dw 3126h
10004024  dw 312Eh
10004026  dw 3186h
10004028  dw 31AAh
1000402a  dw 31B1h
1000402c  dw 31BDh
1000402e  dw 31C6h
10004030  dw 31CBh
10004032  dw 3206h
10004034  dw 321Bh
10004036  dw 323Eh
10004038  dw 3281h
1000403a  dw 32A6h
1000403c  dw 32D9h
1000403e  dw 32F2h
10004040  dw 32F9h
10004042  dw 330Bh
10004044  dw 332Fh
10004046  dw 333Bh
10004048  dw 3388h
1000404a  dw 33CCh
1000404c  dw 33D3h
1000404e  dw 33ECh
10004050  dw 340Fh
10004052  dw 3425h
10004054  dw 342Ch
10004056  dw 349Ah
10004058  dw 34A9h
1000405a  dw 34AEh
1000405c  dw 34BCh
1000405e  dw 34DCh
10004060  dw 350Fh
10004062  dw 351Ch
10004064  dw 3527h
10004066  dw 3558h
10004068  dw 3563h
1000406a  dw 3570h
1000406c  dw 36A0h
1000406e  dw 36AAh
10004070  dw 36E3h
10004072  dw 36F1h
10004074  dw 3709h
10004076  dw 3718h
10004078  dw 373Dh
1000407a  dw 376Bh
1000407c  dw 377Bh
1000407e  dw 3784h
10004080  dw 378Dh
10004082  dw 3795h
10004084  dw 379Ch
10004086  dw 37A6h
10004088  dw 37BAh
1000408a  dw 37C1h
1000408c  dw 37E1h
1000408e  dw 37F2h
10004090  dw 380Ch
10004092  dw 3816h
10004094  dw 381Bh
10004096  dw 383Dh
10004098  dw 3849h
1000409a  dw 38C1h
1000409c  dw 38D6h
1000409e  dw 38DDh
100040a0  dw 38FDh
100040a2  dw 393Bh
100040a4  dw 3952h
100040a6  dw 3959h
100040a8  dw 3979h
100040aa  dw 39D8h
100040ac  dw 39DEh
100040ae  dw 39E4h
; undefined 336 bytes at 100040b0
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
