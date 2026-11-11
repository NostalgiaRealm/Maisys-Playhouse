; Ghidra listing for stream_002_00017325.exe (x86:LE:32:default). Labels and types are tool-generated unless they came from the binary.
10000000  IMAGE_DOS_HEADER 
10000080  IMAGE_RICH_HEADER 
; undefined 24 bytes at 100000b0
100000c8  IMAGE_NT_HEADERS32 
100001c0  IMAGE_SECTION_HEADER 
100001e8  IMAGE_SECTION_HEADER 
10000210  IMAGE_SECTION_HEADER 
10000238  IMAGE_SECTION_HEADER 
10000260  IMAGE_SECTION_HEADER 
; undefined 376 bytes at 10000288

; ==== FUNCTION entry entry=10001000 sig=undefined __stdcall entry(undefined4 param_1, int param_2)
10001000  8b4c2408             MOV ECX,dword ptr [ESP + 0x8]
10001004  b801000000           MOV EAX,0x1
10001009  3bc8                 CMP ECX,EAX
1000100b  750a                 JNZ 0x10001017
1000100d  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
10001011  890da8440010         MOV dword ptr [0x100044a8],ECX
10001017  c20c00               RET 0xc
; undefined 6 bytes at 1000101a

; ==== FUNCTION Update entry=10001020 sig=HWND __stdcall Update(undefined4 param_1, undefined4 param_2, int param_3, LPCSTR param_4, uint param_5, undefined4 param_6)
10001020  8b442404             MOV EAX,dword ptr [ESP + 0x4]
10001024  81ec1c010000         SUB ESP,0x11c
1000102a  83f803               CMP EAX,0x3
1000102d  53                   PUSH EBX
1000102e  55                   PUSH EBP
1000102f  56                   PUSH ESI
10001030  57                   PUSH EDI
10001031  0f8717070000         JA 0x1000174e
switchD_10001037::switchD:
10001037  ff248560170010       JMP dword ptr [EAX*0x4 + 0x10001760]
switchD_10001037::caseD_0:
1000103e  8b9c2438010000       MOV EBX,dword ptr [ESP + 0x138]
10001045  8b2dd4300010         MOV EBP,dword ptr [0x100030d4]
1000104b  33ff                 XOR EDI,EDI
1000104d  c7054042001001000000 MOV dword ptr [0x10004240],0x1
10001057  893d3c440010         MOV dword ptr [0x1000443c],EDI
1000105d  8b432c               MOV EAX,dword ptr [EBX + 0x2c]
10001060  6a6c                 PUSH 0x6c
10001062  50                   PUSH EAX
10001063  ffd5                 CALL EBP
10001065  a340440010           MOV [0x10004440],EAX
1000106a  be44440010           MOV ESI,0x10004444
1000106f  8b15a8440010         MOV EDX,dword ptr [0x100044a8]
10001075  8d4f6f               LEA ECX,[EDI + 0x6f]
10001078  81e1ffff0000         AND ECX,0xffff
1000107e  51                   PUSH ECX
1000107f  52                   PUSH EDX
10001080  ffd5                 CALL EBP
10001082  8906                 MOV dword ptr [ESI],EAX
10001084  83c604               ADD ESI,0x4
10001087  47                   INC EDI
10001088  81fe98440010         CMP ESI,0x10004498
1000108e  7cdf                 JL 0x1000106f
10001090  8b4304               MOV EAX,dword ptr [EBX + 0x4]
10001093  50                   PUSH EAX
10001094  ff15d8300010         CALL dword ptr [0x100030d8]
1000109a  85c0                 TEST EAX,EAX
1000109c  6a00                 PUSH 0x0
1000109e  6870170010           PUSH 0x10001770
100010a3  7412                 JZ 0x100010b7
100010a5  8b4b04               MOV ECX,dword ptr [EBX + 0x4]
100010a8  8b15a8440010         MOV EDX,dword ptr [0x100044a8]
100010ae  51                   PUSH ECX
100010af  6802060000           PUSH 0x602
100010b4  52                   PUSH EDX
100010b5  eb0d                 JMP 0x100010c4
100010b7  a1a8440010           MOV EAX,[0x100044a8]
100010bc  6a00                 PUSH 0x0
100010be  6803060000           PUSH 0x603
100010c3  50                   PUSH EAX
100010c4  ff15dc300010         CALL dword ptr [0x100030dc]
100010ca  a3c8420010           MOV [0x100042c8],EAX
100010cf  e86c0a0000           CALL 0x10001b40
100010d4  a1c8420010           MOV EAX,[0x100042c8]
100010d9  5f                   POP EDI
100010da  5e                   POP ESI
100010db  5d                   POP EBP
100010dc  5b                   POP EBX
100010dd  81c41c010000         ADD ESP,0x11c
100010e3  c21800               RET 0x18
switchD_10001037::caseD_1:
100010e6  8bac2438010000       MOV EBP,dword ptr [ESP + 0x138]
100010ed  8b35e0300010         MOV ESI,dword ptr [0x100030e0]
100010f3  8b3de4300010         MOV EDI,dword ptr [0x100030e4]
100010f9  8b1de8300010         MOV EBX,dword ptr [0x100030e8]
100010ff  8b4524               MOV EAX,dword ptr [EBP + 0x24]
10001102  a330440010           MOV [0x10004430],EAX
10001107  8b4d30               MOV ECX,dword ptr [EBP + 0x30]
1000110a  890dfc400010         MOV dword ptr [0x100040fc],ECX
10001110  8b5534               MOV EDX,dword ptr [EBP + 0x34]
10001113  85c0                 TEST EAX,EAX
10001115  8915a0410010         MOV dword ptr [0x100041a0],EDX
1000111b  0f84bb000000         JZ 0x100011dc
10001121  8b0df4400010         MOV ECX,dword ptr [0x100040f4]
10001127  85c9                 TEST ECX,ECX
10001129  0f85ad000000         JNZ 0x100011dc
1000112f  8b4074               MOV EAX,dword ptr [EAX + 0x74]
10001132  8b0dc8420010         MOV ECX,dword ptr [0x100042c8]
10001138  50                   PUSH EAX
10001139  51                   PUSH ECX
1000113a  ffd6                 CALL ESI
1000113c  8b1530440010         MOV EDX,dword ptr [0x10004430]
10001142  8b0dc8420010         MOV ECX,dword ptr [0x100042c8]
10001148  8b4270               MOV EAX,dword ptr [EDX + 0x70]
1000114b  50                   PUSH EAX
1000114c  6a02                 PUSH 0x2
1000114e  51                   PUSH ECX
1000114f  ffd7                 CALL EDI
10001151  50                   PUSH EAX
10001152  ffd6                 CALL ESI
10001154  8b15c8420010         MOV EDX,dword ptr [0x100042c8]
1000115a  6a64                 PUSH 0x64
1000115c  6860420010           PUSH 0x10004260
10001161  52                   PUSH EDX
10001162  ffd3                 CALL EBX
10001164  a130440010           MOV EAX,[0x10004430]
10001169  8b15c8420010         MOV EDX,dword ptr [0x100042c8]
1000116f  8b88bc000000         MOV ECX,dword ptr [EAX + 0xbc]
10001175  51                   PUSH ECX
10001176  68f1030000           PUSH 0x3f1
1000117b  52                   PUSH EDX
1000117c  ffd7                 CALL EDI
1000117e  50                   PUSH EAX
1000117f  ffd6                 CALL ESI
10001181  a130440010           MOV EAX,[0x10004430]
10001186  8b15c8420010         MOV EDX,dword ptr [0x100042c8]
1000118c  8b88c0000000         MOV ECX,dword ptr [EAX + 0xc0]
10001192  51                   PUSH ECX
10001193  68f0030000           PUSH 0x3f0
10001198  52                   PUSH EDX
10001199  ffd7                 CALL EDI
1000119b  50                   PUSH EAX
1000119c  ffd6                 CALL ESI
1000119e  a130440010           MOV EAX,[0x10004430]
100011a3  8b15c8420010         MOV EDX,dword ptr [0x100042c8]
100011a9  8b88c8000000         MOV ECX,dword ptr [EAX + 0xc8]
100011af  51                   PUSH ECX
100011b0  6a03                 PUSH 0x3
100011b2  52                   PUSH EDX
100011b3  ffd7                 CALL EDI
100011b5  50                   PUSH EAX
100011b6  ffd6                 CALL ESI
100011b8  a130440010           MOV EAX,[0x10004430]
100011bd  8b15c8420010         MOV EDX,dword ptr [0x100042c8]
100011c3  8b88cc000000         MOV ECX,dword ptr [EAX + 0xcc]
100011c9  51                   PUSH ECX
100011ca  6a04                 PUSH 0x4
100011cc  52                   PUSH EDX
100011cd  ffd7                 CALL EDI
100011cf  50                   PUSH EAX
100011d0  ffd6                 CALL ESI
100011d2  c705f440001001000000 MOV dword ptr [0x100040f4],0x1
100011dc  a1c8420010           MOV EAX,[0x100042c8]
100011e1  50                   PUSH EAX
100011e2  ff15ec300010         CALL dword ptr [0x100030ec]
100011e8  85c0                 TEST EAX,EAX
100011ea  743d                 JZ 0x10001229
100011ec  b867666666           MOV EAX,0x66666667
100011f1  6860420010           PUSH 0x10004260
100011f6  f7ac2444010000       IMUL dword ptr [ESP + 0x144]
100011fd  c1fa02               SAR EDX,0x2
10001200  8bca                 MOV ECX,EDX
10001202  c1e91f               SHR ECX,0x1f
10001205  03d1                 ADD EDX,ECX
10001207  52                   PUSH EDX
10001208  8d542430             LEA EDX,[ESP + 0x30]
1000120c  68b8400010           PUSH 0x100040b8
10001211  52                   PUSH EDX
10001212  ff15f0300010         CALL dword ptr [0x100030f0]
10001218  8b0dc8420010         MOV ECX,dword ptr [0x100042c8]
1000121e  83c410               ADD ESP,0x10
10001221  8d442428             LEA EAX,[ESP + 0x28]
10001225  50                   PUSH EAX
10001226  51                   PUSH ECX
10001227  eb32                 JMP 0x1000125b
10001229  a1c8420010           MOV EAX,[0x100042c8]
1000122e  8d542428             LEA EDX,[ESP + 0x28]
10001232  6800010000           PUSH 0x100
10001237  52                   PUSH EDX
10001238  50                   PUSH EAX
10001239  ffd3                 CALL EBX
1000123b  8d4c2428             LEA ECX,[ESP + 0x28]
1000123f  6860420010           PUSH 0x10004260
10001244  51                   PUSH ECX
10001245  ff1560300010         CALL dword ptr [0x10003060]
1000124b  85c0                 TEST EAX,EAX
1000124d  740e                 JZ 0x1000125d
1000124f  8b15c8420010         MOV EDX,dword ptr [0x100042c8]
10001255  6860420010           PUSH 0x10004260
1000125a  52                   PUSH EDX
1000125b  ffd6                 CALL ESI
1000125d  a144420010           MOV EAX,[0x10004244]
10001262  33f6                 XOR ESI,ESI
10001264  3bc6                 CMP EAX,ESI
10001266  744a                 JZ 0x100012b2
10001268  a1c8420010           MOV EAX,[0x100042c8]
1000126d  6a18                 PUSH 0x18
1000126f  50                   PUSH EAX
10001270  ff15f4300010         CALL dword ptr [0x100030f4]
10001276  a1e8400010           MOV EAX,[0x100040e8]
1000127b  8935f0400010         MOV dword ptr [0x100040f0],ESI
10001281  3bc6                 CMP EAX,ESI
10001283  893544420010         MOV dword ptr [0x10004244],ESI
10001289  7515                 JNZ 0x100012a0
1000128b  83bc24400100001e     CMP dword ptr [ESP + 0x140],0x1e
10001293  7e0b                 JLE 0x100012a0
10001295  ff1564300010         CALL dword ptr [0x10003064]
1000129b  a3e8400010           MOV [0x100040e8],EAX
100012a0  a1c8420010           MOV EAX,[0x100042c8]
100012a5  5f                   POP EDI
100012a6  5e                   POP ESI
100012a7  5d                   POP EBP
100012a8  5b                   POP EBX
100012a9  81c41c010000         ADD ESP,0x11c
100012af  c21800               RET 0x18
100012b2  8b9c243c010000       MOV EBX,dword ptr [ESP + 0x13c]
100012b9  3bde                 CMP EBX,ESI
100012bb  750c                 JNZ 0x100012c9
100012bd  393540420010         CMP dword ptr [0x10004240],ESI
100012c3  0f8585040000         JNZ 0x1000174e
100012c9  a1e4400010           MOV EAX,[0x100040e4]
100012ce  3bc6                 CMP EAX,ESI
100012d0  7527                 JNZ 0x100012f9
100012d2  68dc440010           PUSH 0x100044dc
100012d7  56                   PUSH ESI
100012d8  68b0400010           PUSH 0x100040b0
100012dd  68b0180010           PUSH 0x100018b0
100012e2  56                   PUSH ESI
100012e3  56                   PUSH ESI
100012e4  ff1568300010         CALL dword ptr [0x10003068]
100012ea  a3f8430010           MOV [0x100043f8],EAX
100012ef  b801000000           MOV EAX,0x1
100012f4  a3e4400010           MOV [0x100040e4],EAX
100012f9  3935f0400010         CMP dword ptr [0x100040f0],ESI
100012ff  7523                 JNZ 0x10001324
10001301  3bc6                 CMP EAX,ESI
10001303  751f                 JNZ 0x10001324
10001305  8b0dc8420010         MOV ECX,dword ptr [0x100042c8]
1000130b  56                   PUSH ESI
1000130c  6896000000           PUSH 0x96
10001311  6a18                 PUSH 0x18
10001313  51                   PUSH ECX
10001314  ff15f8300010         CALL dword ptr [0x100030f8]
1000131a  c705f040001001000000 MOV dword ptr [0x100040f0],0x1
10001324  a100410010           MOV EAX,[0x10004100]
10001329  8b942434010000       MOV EDX,dword ptr [ESP + 0x134]
10001330  3bc6                 CMP EAX,ESI
10001332  893548420010         MOV dword ptr [0x10004248],ESI
10001338  891534440010         MOV dword ptr [0x10004434],EDX
1000133e  751d                 JNZ 0x1000135d
10001340  8b4504               MOV EAX,dword ptr [EBP + 0x4]
10001343  8b0dc8420010         MOV ECX,dword ptr [0x100042c8]
10001349  50                   PUSH EAX
1000134a  51                   PUSH ECX
1000134b  e8400b0000           CALL 0x10001e90
10001350  83c408               ADD ESP,0x8
10001353  c7050041001001000000 MOV dword ptr [0x10004100],0x1
1000135d  393540420010         CMP dword ptr [0x10004240],ESI
10001363  743a                 JZ 0x1000139f
10001365  8b5504               MOV EDX,dword ptr [EBP + 0x4]
10001368  56                   PUSH ESI
10001369  8b35fc300010         MOV ESI,dword ptr [0x100030fc]
1000136f  52                   PUSH EDX
10001370  ffd6                 CALL ESI
10001372  a1c8420010           MOV EAX,[0x100042c8]
10001377  6a01                 PUSH 0x1
10001379  50                   PUSH EAX
1000137a  ffd6                 CALL ESI
1000137c  8b0dc8420010         MOV ECX,dword ptr [0x100042c8]
10001382  6a05                 PUSH 0x5
10001384  51                   PUSH ECX
10001385  ff1500310010         CALL dword ptr [0x10003100]
1000138b  c7054042001000000000 MOV dword ptr [0x10004240],0x0
10001395  c7053c44001001000000 MOV dword ptr [0x1000443c],0x1
1000139f  8b2d04310010         MOV EBP,dword ptr [0x10003104]
100013a5  85db                 TEST EBX,EBX
100013a7  743f                 JZ 0x100013e8
100013a9  803b00               CMP byte ptr [EBX],0x0
100013ac  743a                 JZ 0x100013e8
100013ae  8d542428             LEA EDX,[ESP + 0x28]
100013b2  53                   PUSH EBX
100013b3  52                   PUSH EDX
100013b4  ff156c300010         CALL dword ptr [0x1000306c]
100013ba  8b0dc8420010         MOV ECX,dword ptr [0x100042c8]
100013c0  8d442428             LEA EAX,[ESP + 0x28]
100013c4  50                   PUSH EAX
100013c5  68f50e0000           PUSH 0xef5
100013ca  51                   PUSH ECX
100013cb  ffd7                 CALL EDI
100013cd  50                   PUSH EAX
100013ce  e86d0f0000           CALL 0x10002340
100013d3  a1c8420010           MOV EAX,[0x100042c8]
100013d8  83c408               ADD ESP,0x8
100013db  8d542428             LEA EDX,[ESP + 0x28]
100013df  52                   PUSH EDX
100013e0  68f50e0000           PUSH 0xef5
100013e5  50                   PUSH EAX
100013e6  ffd5                 CALL EBP
100013e8  a1dc400010           MOV EAX,[0x100040dc]
100013ed  85c0                 TEST EAX,EAX
100013ef  7517                 JNZ 0x10001408
100013f1  ff1564300010         CALL dword ptr [0x10003064]
100013f7  8b9c2440010000       MOV EBX,dword ptr [ESP + 0x140]
100013fe  a3dc400010           MOV [0x100040dc],EAX
10001403  e9bf010000           JMP 0x100015c7
10001408  8b9c2440010000       MOV EBX,dword ptr [ESP + 0x140]
1000140f  83fb1e               CMP EBX,0x1e
10001412  0f8eaf010000         JLE 0x100015c7
10001418  ff1564300010         CALL dword ptr [0x10003064]
1000141e  8b0de8400010         MOV ECX,dword ptr [0x100040e8]
10001424  a3ec400010           MOV [0x100040ec],EAX
10001429  85c9                 TEST ECX,ECX
1000142b  741c                 JZ 0x10001449
1000142d  8bd0                 MOV EDX,EAX
1000142f  c705e840001000000000 MOV dword ptr [0x100040e8],0x0
10001439  2bd1                 SUB EDX,ECX
1000143b  8b0ddc400010         MOV ECX,dword ptr [0x100040dc]
10001441  03ca                 ADD ECX,EDX
10001443  890ddc400010         MOV dword ptr [0x100040dc],ECX
10001449  8b15dc400010         MOV EDX,dword ptr [0x100040dc]
1000144f  8bc8                 MOV ECX,EAX
10001451  2bca                 SUB ECX,EDX
10001453  81f9c0270900         CMP ECX,0x927c0
10001459  7324                 JNC 0x1000147f
1000145b  b8e8030000           MOV EAX,0x3e8
10001460  33d2                 XOR EDX,EDX
10001462  2bc3                 SUB EAX,EBX
10001464  0fafc1               IMUL EAX,ECX
10001467  f7f3                 DIV EBX
10001469  8bc8                 MOV ECX,EAX
1000146b  b8d34d6210           MOV EAX,0x10624dd3
10001470  81c1f4010000         ADD ECX,0x1f4
10001476  f7e1                 MUL ECX
10001478  8bc2                 MOV EAX,EDX
1000147a  c1e806               SHR EAX,0x6
1000147d  eb20                 JMP 0x1000149f
1000147f  81c1f4010000         ADD ECX,0x1f4
10001485  b8d34d6210           MOV EAX,0x10624dd3
1000148a  f7e1                 MUL ECX
1000148c  bee8030000           MOV ESI,0x3e8
10001491  2bf3                 SUB ESI,EBX
10001493  c1ea06               SHR EDX,0x6
10001496  0faff2               IMUL ESI,EDX
10001499  8bc6                 MOV EAX,ESI
1000149b  33d2                 XOR EDX,EDX
1000149d  f7f3                 DIV EBX
1000149f  8b3db4400010         MOV EDI,dword ptr [0x100040b4]
100014a5  83ffff               CMP EDI,-0x1
100014a8  7538                 JNZ 0x100014e2
100014aa  83f83c               CMP EAX,0x3c
100014ad  7607                 JBE 0x100014b6
100014af  b90a000000           MOV ECX,0xa
100014b4  eb18                 JMP 0x100014ce
100014b6  83f819               CMP EAX,0x19
100014b9  7607                 JBE 0x100014c2
100014bb  b905000000           MOV ECX,0x5
100014c0  eb0c                 JMP 0x100014ce
100014c2  ba0a000000           MOV EDX,0xa
100014c7  3bd0                 CMP EDX,EAX
100014c9  1bc9                 SBB ECX,ECX
100014cb  f7d9                 NEG ECX
100014cd  41                   INC ECX
100014ce  83c004               ADD EAX,0x4
100014d1  33d2                 XOR EDX,EDX
100014d3  f7f1                 DIV ECX
100014d5  890dd8400010         MOV dword ptr [0x100040d8],ECX
100014db  8bf0                 MOV ESI,EAX
100014dd  0faff1               IMUL ESI,ECX
100014e0  eb12                 JMP 0x100014f4
100014e2  8b0dd8400010         MOV ECX,dword ptr [0x100040d8]
100014e8  2bc7                 SUB EAX,EDI
100014ea  99                   CDQ
100014eb  f7f9                 IDIV ECX
100014ed  8bf0                 MOV ESI,EAX
100014ef  0faff1               IMUL ESI,ECX
100014f2  03f7                 ADD ESI,EDI
100014f4  3bfe                 CMP EDI,ESI
100014f6  0f84cb000000         JZ 0x100015c7
100014fc  a130440010           MOV EAX,[0x10004430]
10001501  85c0                 TEST EAX,EAX
10001503  0f84be000000         JZ 0x100015c7
10001509  8a0de0420010         MOV CL,byte ptr [0x100042e0]
1000150f  c644241401           MOV byte ptr [ESP + 0x14],0x1
10001514  84c9                 TEST CL,CL
10001516  c644241001           MOV byte ptr [ESP + 0x10],0x1
1000151b  8935b4400010         MOV dword ptr [0x100040b4],ESI
10001521  750f                 JNZ 0x10001532
10001523  8b80c4000000         MOV EAX,dword ptr [EAX + 0xc4]
10001529  50                   PUSH EAX
1000152a  e801120000           CALL 0x10002730
1000152f  83c404               ADD ESP,0x4
10001532  b889888888           MOV EAX,0x88888889
10001537  f7e6                 MUL ESI
10001539  c1ea05               SHR EDX,0x5
1000153c  83fa01               CMP EDX,0x1
1000153f  7505                 JNZ 0x10001546
10001541  c644241000           MOV byte ptr [ESP + 0x10],0x0
10001546  8bc6                 MOV EAX,ESI
10001548  33d2                 XOR EDX,EDX
1000154a  b93c000000           MOV ECX,0x3c
1000154f  f7f1                 DIV ECX
10001551  83fa01               CMP EDX,0x1
10001554  7505                 JNZ 0x1000155b
10001556  c644241400           MOV byte ptr [ESP + 0x14],0x0
1000155b  8b542414             MOV EDX,dword ptr [ESP + 0x14]
1000155f  8bc6                 MOV EAX,ESI
10001561  81e2ff000000         AND EDX,0xff
10001567  b93c000000           MOV ECX,0x3c
1000156c  c1e206               SHL EDX,0x6
1000156f  81c220410010         ADD EDX,0x10004120
10001575  52                   PUSH EDX
10001576  99                   CDQ
10001577  f7f9                 IDIV ECX
10001579  b889888888           MOV EAX,0x88888889
1000157e  8d4c242c             LEA ECX,[ESP + 0x2c]
10001582  52                   PUSH EDX
10001583  8b542418             MOV EDX,dword ptr [ESP + 0x18]
10001587  81e2ff000000         AND EDX,0xff
1000158d  c1e206               SHL EDX,0x6
10001590  81c2c0410010         ADD EDX,0x100041c0
10001596  52                   PUSH EDX
10001597  f7ee                 IMUL ESI
10001599  03d6                 ADD EDX,ESI
1000159b  c1fa05               SAR EDX,0x5
1000159e  8bc2                 MOV EAX,EDX
100015a0  c1e81f               SHR EAX,0x1f
100015a3  03d0                 ADD EDX,EAX
100015a5  52                   PUSH EDX
100015a6  68e0420010           PUSH 0x100042e0
100015ab  51                   PUSH ECX
100015ac  ff15f0300010         CALL dword ptr [0x100030f0]
100015b2  a1c8420010           MOV EAX,[0x100042c8]
100015b7  83c418               ADD ESP,0x18
100015ba  8d542428             LEA EDX,[ESP + 0x28]
100015be  52                   PUSH EDX
100015bf  68f70e0000           PUSH 0xef7
100015c4  50                   PUSH EAX
100015c5  ffd5                 CALL EBP
100015c7  8b8c2444010000       MOV ECX,dword ptr [ESP + 0x144]
100015ce  8b15c4440010         MOV EDX,dword ptr [0x100044c4]
100015d4  a1cc440010           MOV EAX,[0x100044cc]
100015d9  890df4430010         MOV dword ptr [0x100043f4],ECX
100015df  8b0dc0440010         MOV ECX,dword ptr [0x100044c0]
100015e5  8b3508310010         MOV ESI,dword ptr [0x10003108]
100015eb  4a                   DEC EDX
100015ec  40                   INC EAX
100015ed  49                   DEC ECX
100015ee  8954241c             MOV dword ptr [ESP + 0x1c],EDX
100015f2  8b15c8440010         MOV EDX,dword ptr [0x100044c8]
100015f8  89442424             MOV dword ptr [ESP + 0x24],EAX
100015fc  894c2418             MOV dword ptr [ESP + 0x18],ECX
10001600  8b0dc8420010         MOV ECX,dword ptr [0x100042c8]
10001606  8d442418             LEA EAX,[ESP + 0x18]
1000160a  6a00                 PUSH 0x0
1000160c  42                   INC EDX
1000160d  50                   PUSH EAX
1000160e  51                   PUSH ECX
1000160f  891df0430010         MOV dword ptr [0x100043f0],EBX
10001615  8954242c             MOV dword ptr [ESP + 0x2c],EDX
10001619  ffd6                 CALL ESI
1000161b  8b1504440010         MOV EDX,dword ptr [0x10004404]
10001621  a10c440010           MOV EAX,[0x1000440c]
10001626  8b0d00440010         MOV ECX,dword ptr [0x10004400]
1000162c  4a                   DEC EDX
1000162d  40                   INC EAX
1000162e  49                   DEC ECX
1000162f  8954241c             MOV dword ptr [ESP + 0x1c],EDX
10001633  8b1508440010         MOV EDX,dword ptr [0x10004408]
10001639  89442424             MOV dword ptr [ESP + 0x24],EAX
1000163d  894c2418             MOV dword ptr [ESP + 0x18],ECX
10001641  8b0dc8420010         MOV ECX,dword ptr [0x100042c8]
10001647  8d442418             LEA EAX,[ESP + 0x18]
1000164b  6a00                 PUSH 0x0
1000164d  42                   INC EDX
1000164e  50                   PUSH EAX
1000164f  51                   PUSH ECX
10001650  8954242c             MOV dword ptr [ESP + 0x2c],EDX
10001654  ffd6                 CALL ESI
10001656  33c0                 XOR EAX,EAX
10001658  5f                   POP EDI
10001659  5e                   POP ESI
1000165a  5d                   POP EBP
1000165b  5b                   POP EBX
1000165c  81c41c010000         ADD ESP,0x11c
10001662  c21800               RET 0x18
switchD_10001037::caseD_2:
10001665  a1e8400010           MOV EAX,[0x100040e8]
1000166a  85c0                 TEST EAX,EAX
1000166c  7514                 JNZ 0x10001682
1000166e  833df04300101e       CMP dword ptr [0x100043f0],0x1e
10001675  7e0b                 JLE 0x10001682
10001677  ff1564300010         CALL dword ptr [0x10003064]
1000167d  a3e8400010           MOV [0x100040e8],EAX
10001682  8b942438010000       MOV EDX,dword ptr [ESP + 0x138]
10001689  8b35fc300010         MOV ESI,dword ptr [0x100030fc]
1000168f  6a01                 PUSH 0x1
10001691  8b4204               MOV EAX,dword ptr [EDX + 0x4]
10001694  50                   PUSH EAX
10001695  ffd6                 CALL ESI
10001697  8b0dc8420010         MOV ECX,dword ptr [0x100042c8]
1000169d  6a00                 PUSH 0x0
1000169f  51                   PUSH ECX
100016a0  ffd6                 CALL ESI
100016a2  8b15c8420010         MOV EDX,dword ptr [0x100042c8]
100016a8  6a00                 PUSH 0x0
100016aa  52                   PUSH EDX
100016ab  ff1500310010         CALL dword ptr [0x10003100]
100016b1  c7054042001001000000 MOV dword ptr [0x10004240],0x1
100016bb  33c0                 XOR EAX,EAX
100016bd  5f                   POP EDI
100016be  5e                   POP ESI
100016bf  5d                   POP EBP
100016c0  5b                   POP EBX
100016c1  81c41c010000         ADD ESP,0x11c
100016c7  c21800               RET 0x18
switchD_10001037::caseD_3:
100016ca  8b842438010000       MOV EAX,dword ptr [ESP + 0x138]
100016d1  c705b040001000000000 MOV dword ptr [0x100040b0],0x0
100016db  6a01                 PUSH 0x1
100016dd  8b4804               MOV ECX,dword ptr [EAX + 0x4]
100016e0  51                   PUSH ECX
100016e1  ff15fc300010         CALL dword ptr [0x100030fc]
100016e7  8b15f8430010         MOV EDX,dword ptr [0x100043f8]
100016ed  6aff                 PUSH -0x1
100016ef  52                   PUSH EDX
100016f0  ff1570300010         CALL dword ptr [0x10003070]
100016f6  a138440010           MOV EAX,[0x10004438]
100016fb  8b3508300010         MOV ESI,dword ptr [0x10003008]
10001701  85c0                 TEST EAX,EAX
10001703  7403                 JZ 0x10001708
10001705  50                   PUSH EAX
10001706  ffd6                 CALL ESI
10001708  a1c4420010           MOV EAX,[0x100042c4]
1000170d  85c0                 TEST EAX,EAX
1000170f  7403                 JZ 0x10001714
10001711  50                   PUSH EAX
10001712  ffd6                 CALL ESI
10001714  a1c8420010           MOV EAX,[0x100042c8]
10001719  6a18                 PUSH 0x18
1000171b  50                   PUSH EAX
1000171c  ff15f4300010         CALL dword ptr [0x100030f4]
10001722  8b0dc8420010         MOV ECX,dword ptr [0x100042c8]
10001728  51                   PUSH ECX
10001729  ff150c310010         CALL dword ptr [0x1000310c]
1000172f  8b3d10310010         MOV EDI,dword ptr [0x10003110]
10001735  be40440010           MOV ESI,0x10004440
1000173a  8b06                 MOV EAX,dword ptr [ESI]
1000173c  85c0                 TEST EAX,EAX
1000173e  7403                 JZ 0x10001743
10001740  50                   PUSH EAX
10001741  ffd7                 CALL EDI
10001743  83c604               ADD ESI,0x4
10001746  81fea8440010         CMP ESI,0x100044a8
1000174c  7cec                 JL 0x1000173a
switchD_10001037::default:
1000174e  5f                   POP EDI
1000174f  5e                   POP ESI
10001750  5d                   POP EBP
10001751  33c0                 XOR EAX,EAX
10001753  5b                   POP EBX
10001754  81c41c010000         ADD ESP,0x11c
1000175a  c21800               RET 0x18

; ==== FUNCTION FUN_1000175d entry=1000175d sig=undefined FUN_1000175d(void)
1000175d  8d4900               LEA ECX,[ECX]
switchD_10001037::switchdataD_10001760:
10001760  addr 1000103e
10001764  addr 100010e6
10001768  addr 10001665
1000176c  addr 100016ca

; ==== FUNCTION _ProgressDlg@16 entry=10001770 sig=undefined4 __stdcall _ProgressDlg@16(HWND param_1, uint param_2, int param_3)
10001770  8b442408             MOV EAX,dword ptr [ESP + 0x8]
10001774  83ec40               SUB ESP,0x40
10001777  3d10010000           CMP EAX,0x110
1000177c  56                   PUSH ESI
1000177d  57                   PUSH EDI
1000177e  0f87c1000000         JA 0x10001845
10001784  7476                 JZ 0x100017fc
10001786  83f80f               CMP EAX,0xf
10001789  0f8515010000         JNZ 0x100018a4
1000178f  8b7c244c             MOV EDI,dword ptr [ESP + 0x4c]
10001793  8d442408             LEA EAX,[ESP + 0x8]
10001797  50                   PUSH EAX
10001798  57                   PUSH EDI
10001799  ff15c8300010         CALL dword ptr [0x100030c8]
1000179f  8bf0                 MOV ESI,EAX
100017a1  56                   PUSH ESI
100017a2  e809040000           CALL 0x10001bb0
100017a7  8b0df4430010         MOV ECX,dword ptr [0x100043f4]
100017ad  83c404               ADD ESP,0x4
100017b0  51                   PUSH ECX
100017b1  6800440010           PUSH 0x10004400
100017b6  56                   PUSH ESI
100017b7  e8f4080000           CALL 0x100020b0
100017bc  8b15f0430010         MOV EDX,dword ptr [0x100043f0]
100017c2  83c40c               ADD ESP,0xc
100017c5  52                   PUSH EDX
100017c6  68c0440010           PUSH 0x100044c0
100017cb  56                   PUSH ESI
100017cc  e8df080000           CALL 0x100020b0
100017d1  a1e4400010           MOV EAX,[0x100040e4]
100017d6  83c40c               ADD ESP,0xc
100017d9  85c0                 TEST EAX,EAX
100017db  7509                 JNZ 0x100017e6
100017dd  56                   PUSH ESI
100017de  e87d0d0000           CALL 0x10002560
100017e3  83c404               ADD ESP,0x4
100017e6  8d442408             LEA EAX,[ESP + 0x8]
100017ea  50                   PUSH EAX
100017eb  57                   PUSH EDI
100017ec  ff158c300010         CALL dword ptr [0x1000308c]
100017f2  33c0                 XOR EAX,EAX
100017f4  5f                   POP EDI
100017f5  5e                   POP ESI
100017f6  83c440               ADD ESP,0x40
100017f9  c21000               RET 0x10
100017fc  8b74244c             MOV ESI,dword ptr [ESP + 0x4c]
10001800  56                   PUSH ESI
10001801  e8aa090000           CALL 0x100021b0
10001806  83c404               ADD ESP,0x4
10001809  6800440010           PUSH 0x10004400
1000180e  68eb030000           PUSH 0x3eb
10001813  56                   PUSH ESI
10001814  e867070000           CALL 0x10001f80
10001819  83c40c               ADD ESP,0xc
1000181c  68c0440010           PUSH 0x100044c0
10001821  68ea030000           PUSH 0x3ea
10001826  56                   PUSH ESI
10001827  e854070000           CALL 0x10001f80
1000182c  83c40c               ADD ESP,0xc
1000182f  56                   PUSH ESI
10001830  e8eb070000           CALL 0x10002020
10001835  83c404               ADD ESP,0x4
10001838  b801000000           MOV EAX,0x1
1000183d  5f                   POP EDI
1000183e  5e                   POP ESI
1000183f  83c440               ADD ESP,0x40
10001842  c21000               RET 0x10
10001845  2d11010000           SUB EAX,0x111
1000184a  7449                 JZ 0x10001895
1000184c  83e802               SUB EAX,0x2
1000184f  7553                 JNZ 0x100018a4
10001851  837c245418           CMP dword ptr [ESP + 0x54],0x18
10001856  754c                 JNZ 0x100018a4
10001858  a100400010           MOV EAX,[0x10004000]
1000185d  40                   INC EAX
1000185e  83f815               CMP EAX,0x15
10001861  a300400010           MOV [0x10004000],EAX
10001866  7c0a                 JL 0x10001872
10001868  c7050040001000000000 MOV dword ptr [0x10004000],0x0
10001872  8b74244c             MOV ESI,dword ptr [ESP + 0x4c]
10001876  6a00                 PUSH 0x0
10001878  68e0430010           PUSH 0x100043e0
1000187d  56                   PUSH ESI
1000187e  ff1508310010         CALL dword ptr [0x10003108]
10001884  56                   PUSH ESI
10001885  ff15d0300010         CALL dword ptr [0x100030d0]
1000188b  33c0                 XOR EAX,EAX
1000188d  5f                   POP EDI
1000188e  5e                   POP ESI
1000188f  83c440               ADD ESP,0x40
10001892  c21000               RET 0x10
10001895  b801000000           MOV EAX,0x1
1000189a  a344420010           MOV [0x10004244],EAX
1000189f  a348420010           MOV [0x10004248],EAX
100018a4  5f                   POP EDI
100018a5  33c0                 XOR EAX,EAX
100018a7  5e                   POP ESI
100018a8  83c440               ADD ESP,0x40
100018ab  c21000               RET 0x10
; undefined 2 bytes at 100018ae

; ==== FUNCTION FUN_100018b0 entry=100018b0 sig=undefined FUN_100018b0(void)
100018b0  83ec44               SUB ESP,0x44
100018b3  a1a8440010           MOV EAX,[0x100044a8]
100018b8  56                   PUSH ESI
100018b9  57                   PUSH EDI
100018ba  33f6                 XOR ESI,ESI
100018bc  68007f0000           PUSH 0x7f00
100018c1  56                   PUSH ESI
100018c2  8974242c             MOV dword ptr [ESP + 0x2c],ESI
100018c6  c7442430f0190010     MOV dword ptr [ESP + 0x30],0x100019f0
100018ce  89742434             MOV dword ptr [ESP + 0x34],ESI
100018d2  89742438             MOV dword ptr [ESP + 0x38],ESI
100018d6  8944243c             MOV dword ptr [ESP + 0x3c],EAX
100018da  89742440             MOV dword ptr [ESP + 0x40],ESI
100018de  ff1594300010         CALL dword ptr [0x10003094]
100018e4  8d4c2424             LEA ECX,[ESP + 0x24]
100018e8  8944243c             MOV dword ptr [ESP + 0x3c],EAX
100018ec  51                   PUSH ECX
100018ed  c744244410000000     MOV dword ptr [ESP + 0x44],0x10
100018f5  89742448             MOV dword ptr [ESP + 0x48],ESI
100018f9  c744244cc0400010     MOV dword ptr [ESP + 0x4c],0x100040c0
10001901  ff1590300010         CALL dword ptr [0x10003090]
10001907  8b15a8440010         MOV EDX,dword ptr [0x100044a8]
1000190d  a1c8420010           MOV EAX,[0x100042c8]
10001912  8b0dec430010         MOV ECX,dword ptr [0x100043ec]
10001918  56                   PUSH ESI
10001919  52                   PUSH EDX
1000191a  56                   PUSH ESI
1000191b  50                   PUSH EAX
1000191c  a1e4430010           MOV EAX,[0x100043e4]
10001921  8b15e8430010         MOV EDX,dword ptr [0x100043e8]
10001927  2bc8                 SUB ECX,EAX
10001929  41                   INC ECX
1000192a  51                   PUSH ECX
1000192b  8b0de0430010         MOV ECX,dword ptr [0x100043e0]
10001931  2bd1                 SUB EDX,ECX
10001933  42                   INC EDX
10001934  52                   PUSH EDX
10001935  50                   PUSH EAX
10001936  51                   PUSH ECX
10001937  6800000050           PUSH 0x50000000
1000193c  56                   PUSH ESI
1000193d  68c0400010           PUSH 0x100040c0
10001942  56                   PUSH ESI
10001943  ff1514310010         CALL dword ptr [0x10003114]
10001949  8bf8                 MOV EDI,EAX
1000194b  3bfe                 CMP EDI,ESI
1000194d  7508                 JNZ 0x10001957
1000194f  33c0                 XOR EAX,EAX
10001951  5f                   POP EDI
10001952  5e                   POP ESI
10001953  83c444               ADD ESP,0x44
10001956  c3                   RET
10001957  e8a4010000           CALL 0x10001b00
1000195c  6a01                 PUSH 0x1
1000195e  57                   PUSH EDI
1000195f  ff1500310010         CALL dword ptr [0x10003100]
10001965  57                   PUSH EDI
10001966  ff15d0300010         CALL dword ptr [0x100030d0]
1000196c  56                   PUSH ESI
1000196d  6896000000           PUSH 0x96
10001972  6a19                 PUSH 0x19
10001974  57                   PUSH EDI
10001975  ff15f8300010         CALL dword ptr [0x100030f8]
1000197b  56                   PUSH ESI
1000197c  56                   PUSH ESI
1000197d  8d442410             LEA EAX,[ESP + 0x10]
10001981  56                   PUSH ESI
10001982  50                   PUSH EAX
10001983  ff1588300010         CALL dword ptr [0x10003088]
10001989  85c0                 TEST EAX,EAX
1000198b  744f                 JZ 0x100019dc
1000198d  55                   PUSH EBP
1000198e  8b2d84300010         MOV EBP,dword ptr [0x10003084]
10001994  53                   PUSH EBX
10001995  8b5c2458             MOV EBX,dword ptr [ESP + 0x58]
10001999  8d4c2410             LEA ECX,[ESP + 0x10]
1000199d  51                   PUSH ECX
1000199e  ffd5                 CALL EBP
100019a0  8d542410             LEA EDX,[ESP + 0x10]
100019a4  52                   PUSH EDX
100019a5  ff1580300010         CALL dword ptr [0x10003080]
100019ab  3933                 CMP dword ptr [EBX],ESI
100019ad  7519                 JNZ 0x100019c8
100019af  3935f8400010         CMP dword ptr [0x100040f8],ESI
100019b5  7511                 JNZ 0x100019c8
100019b7  56                   PUSH ESI
100019b8  ff157c300010         CALL dword ptr [0x1000307c]
100019be  c705f840001001000000 MOV dword ptr [0x100040f8],0x1
100019c8  56                   PUSH ESI
100019c9  56                   PUSH ESI
100019ca  8d442418             LEA EAX,[ESP + 0x18]
100019ce  56                   PUSH ESI
100019cf  50                   PUSH EAX
100019d0  ff1588300010         CALL dword ptr [0x10003088]
100019d6  85c0                 TEST EAX,EAX
100019d8  75bf                 JNZ 0x10001999
100019da  5b                   POP EBX
100019db  5d                   POP EBP
100019dc  6a19                 PUSH 0x19
100019de  57                   PUSH EDI
100019df  ff15f4300010         CALL dword ptr [0x100030f4]
100019e5  8b442410             MOV EAX,dword ptr [ESP + 0x10]
100019e9  5f                   POP EDI
100019ea  5e                   POP ESI
100019eb  83c444               ADD ESP,0x44
100019ee  c3                   RET
; undefined 1 bytes at 100019ef

; ==== FUNCTION FUN_100019f0 entry=100019f0 sig=undefined FUN_100019f0(void)
100019f0  83ec40               SUB ESP,0x40
100019f3  53                   PUSH EBX
100019f4  8b5c244c             MOV EBX,dword ptr [ESP + 0x4c]
100019f8  56                   PUSH ESI
100019f9  8b74244c             MOV ESI,dword ptr [ESP + 0x4c]
100019fd  83fb0f               CMP EBX,0xf
10001a00  57                   PUSH EDI
10001a01  7753                 JA 0x10001a56
10001a03  83fb0f               CMP EBX,0xf
10001a06  741e                 JZ 0x10001a26
10001a08  8bc3                 MOV EAX,EBX
10001a0a  83e802               SUB EAX,0x2
10001a0d  0f85c0000000         JNZ 0x10001ad3
10001a13  6a00                 PUSH 0x0
10001a15  ff157c300010         CALL dword ptr [0x1000307c]
10001a1b  33c0                 XOR EAX,EAX
10001a1d  5f                   POP EDI
10001a1e  5e                   POP ESI
10001a1f  5b                   POP EBX
10001a20  83c440               ADD ESP,0x40
10001a23  c21000               RET 0x10
10001a26  8b742450             MOV ESI,dword ptr [ESP + 0x50]
10001a2a  8d44240c             LEA EAX,[ESP + 0xc]
10001a2e  50                   PUSH EAX
10001a2f  56                   PUSH ESI
10001a30  ff15c8300010         CALL dword ptr [0x100030c8]
10001a36  50                   PUSH EAX
10001a37  e8240b0000           CALL 0x10002560
10001a3c  83c404               ADD ESP,0x4
10001a3f  8d4c240c             LEA ECX,[ESP + 0xc]
10001a43  51                   PUSH ECX
10001a44  56                   PUSH ESI
10001a45  ff158c300010         CALL dword ptr [0x1000308c]
10001a4b  33c0                 XOR EAX,EAX
10001a4d  5f                   POP EDI
10001a4e  5e                   POP ESI
10001a4f  5b                   POP EBX
10001a50  83c440               ADD ESP,0x40
10001a53  c21000               RET 0x10
10001a56  83fb14               CMP EBX,0x14
10001a59  0f848f000000         JZ 0x10001aee
10001a5f  81fb13010000         CMP EBX,0x113
10001a65  756c                 JNZ 0x10001ad3
10001a67  837c245819           CMP dword ptr [ESP + 0x58],0x19
10001a6c  7565                 JNZ 0x10001ad3
10001a6e  a140420010           MOV EAX,[0x10004240]
10001a73  8b3d00310010         MOV EDI,dword ptr [0x10003100]
10001a79  85c0                 TEST EAX,EAX
10001a7b  7407                 JZ 0x10001a84
10001a7d  6a00                 PUSH 0x0
10001a7f  56                   PUSH ESI
10001a80  ffd7                 CALL EDI
10001a82  eb0f                 JMP 0x10001a93
10001a84  a148420010           MOV EAX,[0x10004248]
10001a89  85c0                 TEST EAX,EAX
10001a8b  7506                 JNZ 0x10001a93
10001a8d  ff0500400010         INC dword ptr [0x10004000]
10001a93  a13c440010           MOV EAX,[0x1000443c]
10001a98  85c0                 TEST EAX,EAX
10001a9a  740f                 JZ 0x10001aab
10001a9c  6a05                 PUSH 0x5
10001a9e  56                   PUSH ESI
10001a9f  ffd7                 CALL EDI
10001aa1  c7053c44001000000000 MOV dword ptr [0x1000443c],0x0
10001aab  833d0040001015       CMP dword ptr [0x10004000],0x15
10001ab2  7c0a                 JL 0x10001abe
10001ab4  c7050040001000000000 MOV dword ptr [0x10004000],0x0
10001abe  6a00                 PUSH 0x0
10001ac0  68e0430010           PUSH 0x100043e0
10001ac5  56                   PUSH ESI
10001ac6  ff1508310010         CALL dword ptr [0x10003108]
10001acc  56                   PUSH ESI
10001acd  ff15d0300010         CALL dword ptr [0x100030d0]
10001ad3  8b54245c             MOV EDX,dword ptr [ESP + 0x5c]
10001ad7  8b442458             MOV EAX,dword ptr [ESP + 0x58]
10001adb  52                   PUSH EDX
10001adc  50                   PUSH EAX
10001add  53                   PUSH EBX
10001ade  56                   PUSH ESI
10001adf  ff1598300010         CALL dword ptr [0x10003098]
10001ae5  5f                   POP EDI
10001ae6  5e                   POP ESI
10001ae7  5b                   POP EBX
10001ae8  83c440               ADD ESP,0x40
10001aeb  c21000               RET 0x10
10001aee  5f                   POP EDI
10001aef  5e                   POP ESI
10001af0  b801000000           MOV EAX,0x1
10001af5  5b                   POP EBX
10001af6  83c440               ADD ESP,0x40
10001af9  c21000               RET 0x10
; undefined 4 bytes at 10001afc

; ==== FUNCTION FUN_10001b00 entry=10001b00 sig=undefined __stdcall FUN_10001b00(void)
10001b00  a1e0430010           MOV EAX,[0x100043e0]
10001b05  8b0de8430010         MOV ECX,dword ptr [0x100043e8]
10001b0b  8b15ec430010         MOV EDX,dword ptr [0x100043ec]
10001b11  2bc8                 SUB ECX,EAX
10001b13  890de8430010         MOV dword ptr [0x100043e8],ECX
10001b19  8b0de4430010         MOV ECX,dword ptr [0x100043e4]
10001b1f  33c0                 XOR EAX,EAX
10001b21  2bd1                 SUB EDX,ECX
10001b23  a3e0430010           MOV [0x100043e0],EAX
10001b28  8915ec430010         MOV dword ptr [0x100043ec],EDX
10001b2e  a3e4430010           MOV [0x100043e4],EAX
10001b33  c3                   RET
; undefined 12 bytes at 10001b34

; ==== FUNCTION FUN_10001b40 entry=10001b40 sig=undefined __stdcall FUN_10001b40(void)
10001b40  83ec08               SUB ESP,0x8
10001b43  a1c8420010           MOV EAX,[0x100042c8]
10001b48  68ef030000           PUSH 0x3ef
10001b4d  50                   PUSH EAX
10001b4e  ff15e4300010         CALL dword ptr [0x100030e4]
10001b54  6820440010           PUSH 0x10004420
10001b59  50                   PUSH EAX
10001b5a  ff15a0300010         CALL dword ptr [0x100030a0]
10001b60  8b0d20440010         MOV ECX,dword ptr [0x10004420]
10001b66  8b1524440010         MOV EDX,dword ptr [0x10004424]
10001b6c  894c2400             MOV dword ptr [ESP],ECX
10001b70  8b0dc8420010         MOV ECX,dword ptr [0x100042c8]
10001b76  8d442400             LEA EAX,[ESP]
10001b7a  89542404             MOV dword ptr [ESP + 0x4],EDX
10001b7e  50                   PUSH EAX
10001b7f  51                   PUSH ECX
10001b80  ff159c300010         CALL dword ptr [0x1000309c]
10001b86  8b442404             MOV EAX,dword ptr [ESP + 0x4]
10001b8a  8b542400             MOV EDX,dword ptr [ESP]
10001b8e  a324440010           MOV [0x10004424],EAX
10001b93  33c0                 XOR EAX,EAX
10001b95  891520440010         MOV dword ptr [0x10004420],EDX
10001b9b  a328440010           MOV [0x10004428],EAX
10001ba0  a32c440010           MOV [0x1000442c],EAX
10001ba5  83c408               ADD ESP,0x8
10001ba8  c3                   RET
; undefined 7 bytes at 10001ba9

; ==== FUNCTION FUN_10001bb0 entry=10001bb0 sig=undefined __cdecl FUN_10001bb0(HDC param_1)
10001bb0  a1fc400010           MOV EAX,[0x100040fc]
10001bb5  85c0                 TEST EAX,EAX
10001bb7  0f84df010000         JZ 0x10001d9c
10001bbd  57                   PUSH EDI
10001bbe  56                   PUSH ESI
10001bbf  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
10001bc3  55                   PUSH EBP
10001bc4  53                   PUSH EBX
10001bc5  68c4420010           PUSH 0x100042c4
10001bca  83c00a               ADD EAX,0xa
10001bcd  56                   PUSH ESI
10001bce  50                   PUSH EAX
10001bcf  e8cc010000           CALL 0x10001da0
10001bd4  8b0dfc400010         MOV ECX,dword ptr [0x100040fc]
10001bda  a12c440010           MOV EAX,[0x1000442c]
10001bdf  83c40c               ADD ESP,0xc
10001be2  33db                 XOR EBX,EBX
10001be4  668b19               MOV BX,word ptr [ECX]
10001be7  33ed                 XOR EBP,EBP
10001be9  668b6902             MOV BP,word ptr [ECX + 0x2]
10001bed  85c0                 TEST EAX,EAX
10001bef  7570                 JNZ 0x10001c61
10001bf1  ff15a8300010         CALL dword ptr [0x100030a8]
10001bf7  8bc8                 MOV ECX,EAX
10001bf9  25ffff0000           AND EAX,0xffff
10001bfe  0fafc3               IMUL EAX,EBX
10001c01  99                   CDQ
10001c02  83e207               AND EDX,0x7
10001c05  03c2                 ADD EAX,EDX
10001c07  c1f803               SAR EAX,0x3
10001c0a  2bc3                 SUB EAX,EBX
10001c0c  99                   CDQ
10001c0d  2bc2                 SUB EAX,EDX
10001c0f  8bf8                 MOV EDI,EAX
10001c11  8bc1                 MOV EAX,ECX
10001c13  c1e810               SHR EAX,0x10
10001c16  0fafc5               IMUL EAX,EBP
10001c19  99                   CDQ
10001c1a  83e20f               AND EDX,0xf
10001c1d  03c2                 ADD EAX,EDX
10001c1f  c1f804               SAR EAX,0x4
10001c22  2bc5                 SUB EAX,EBP
10001c24  99                   CDQ
10001c25  2bc2                 SUB EAX,EDX
10001c27  8b1524440010         MOV EDX,dword ptr [0x10004424]
10001c2d  d1f8                 SAR EAX,0x1
10001c2f  d1ff                 SAR EDI,0x1
10001c31  8d4c4500             LEA ECX,[EBP + EAX*0x2]
10001c35  893dd4400010         MOV dword ptr [0x100040d4],EDI
10001c3b  03ca                 ADD ECX,EDX
10001c3d  8d147b               LEA EDX,[EBX + EDI*0x2]
10001c40  890d2c440010         MOV dword ptr [0x1000442c],ECX
10001c46  8b0d20440010         MOV ECX,dword ptr [0x10004420]
10001c4c  03d1                 ADD EDX,ECX
10001c4e  8b0dfc400010         MOV ECX,dword ptr [0x100040fc]
10001c54  a3e0400010           MOV [0x100040e0],EAX
10001c59  891528440010         MOV dword ptr [0x10004428],EDX
10001c5f  eb0b                 JMP 0x10001c6c
10001c61  8b3dd4400010         MOV EDI,dword ptr [0x100040d4]
10001c67  a1e0400010           MOV EAX,[0x100040e0]
10001c6c  8b5104               MOV EDX,dword ptr [ECX + 0x4]
10001c6f  85ff                 TEST EDI,EDI
10001c71  8d540a0a             LEA EDX,[EDX + ECX*0x1 + 0xa]
10001c75  89542414             MOV dword ptr [ESP + 0x14],EDX
10001c79  7504                 JNZ 0x10001c7f
10001c7b  85c0                 TEST EAX,EAX
10001c7d  7438                 JZ 0x10001cb7
10001c7f  8b15a0410010         MOV EDX,dword ptr [0x100041a0]
10001c85  85d2                 TEST EDX,EDX
10001c87  742e                 JZ 0x10001cb7
10001c89  52                   PUSH EDX
10001c8a  ff1520300010         CALL dword ptr [0x10003020]
10001c90  8bf8                 MOV EDI,EAX
10001c92  57                   PUSH EDI
10001c93  6820440010           PUSH 0x10004420
10001c98  56                   PUSH ESI
10001c99  ff15a4300010         CALL dword ptr [0x100030a4]
10001c9f  57                   PUSH EDI
10001ca0  ff1508300010         CALL dword ptr [0x10003008]
10001ca6  8b0dfc400010         MOV ECX,dword ptr [0x100040fc]
10001cac  8b3dd4400010         MOV EDI,dword ptr [0x100040d4]
10001cb2  a1e0400010           MOV EAX,[0x100040e0]
10001cb7  682000cc00           PUSH 0xcc0020
10001cbc  8d510a               LEA EDX,[ECX + 0xa]
10001cbf  6a00                 PUSH 0x0
10001cc1  52                   PUSH EDX
10001cc2  8b542420             MOV EDX,dword ptr [ESP + 0x20]
10001cc6  52                   PUSH EDX
10001cc7  0fbf5102             MOVSX EDX,word ptr [ECX + 0x2]
10001ccb  0fbf09               MOVSX ECX,word ptr [ECX]
10001cce  52                   PUSH EDX
10001ccf  8b1524440010         MOV EDX,dword ptr [0x10004424]
10001cd5  51                   PUSH ECX
10001cd6  6a00                 PUSH 0x0
10001cd8  6a00                 PUSH 0x0
10001cda  55                   PUSH EBP
10001cdb  03c2                 ADD EAX,EDX
10001cdd  53                   PUSH EBX
10001cde  50                   PUSH EAX
10001cdf  a120440010           MOV EAX,[0x10004420]
10001ce4  03f8                 ADD EDI,EAX
10001ce6  57                   PUSH EDI
10001ce7  56                   PUSH ESI
10001ce8  ff151c300010         CALL dword ptr [0x1000301c]
10001cee  8b3d18300010         MOV EDI,dword ptr [0x10003018]
10001cf4  68ffffff00           PUSH 0xffffff
10001cf9  6a01                 PUSH 0x1
10001cfb  6a00                 PUSH 0x0
10001cfd  ffd7                 CALL EDI
10001cff  6880808000           PUSH 0x808080
10001d04  6a01                 PUSH 0x1
10001d06  6a00                 PUSH 0x0
10001d08  8bd8                 MOV EBX,EAX
10001d0a  ffd7                 CALL EDI
10001d0c  53                   PUSH EBX
10001d0d  56                   PUSH ESI
10001d0e  8be8                 MOV EBP,EAX
10001d10  ff1514300010         CALL dword ptr [0x10003014]
10001d16  8b0d24440010         MOV ECX,dword ptr [0x10004424]
10001d1c  8b1528440010         MOV EDX,dword ptr [0x10004428]
10001d22  6a00                 PUSH 0x0
10001d24  51                   PUSH ECX
10001d25  52                   PUSH EDX
10001d26  56                   PUSH ESI
10001d27  89442424             MOV dword ptr [ESP + 0x24],EAX
10001d2b  ff1510300010         CALL dword ptr [0x10003010]
10001d31  a12c440010           MOV EAX,[0x1000442c]
10001d36  8b0d28440010         MOV ECX,dword ptr [0x10004428]
10001d3c  8b3d0c300010         MOV EDI,dword ptr [0x1000300c]
10001d42  50                   PUSH EAX
10001d43  51                   PUSH ECX
10001d44  56                   PUSH ESI
10001d45  ffd7                 CALL EDI
10001d47  8b152c440010         MOV EDX,dword ptr [0x1000442c]
10001d4d  a120440010           MOV EAX,[0x10004420]
10001d52  52                   PUSH EDX
10001d53  50                   PUSH EAX
10001d54  56                   PUSH ESI
10001d55  ffd7                 CALL EDI
10001d57  55                   PUSH EBP
10001d58  56                   PUSH ESI
10001d59  ff1514300010         CALL dword ptr [0x10003014]
10001d5f  8b0d24440010         MOV ECX,dword ptr [0x10004424]
10001d65  8b1520440010         MOV EDX,dword ptr [0x10004420]
10001d6b  51                   PUSH ECX
10001d6c  52                   PUSH EDX
10001d6d  56                   PUSH ESI
10001d6e  ffd7                 CALL EDI
10001d70  a124440010           MOV EAX,[0x10004424]
10001d75  8b0d28440010         MOV ECX,dword ptr [0x10004428]
10001d7b  50                   PUSH EAX
10001d7c  51                   PUSH ECX
10001d7d  56                   PUSH ESI
10001d7e  ffd7                 CALL EDI
10001d80  8b542414             MOV EDX,dword ptr [ESP + 0x14]
10001d84  52                   PUSH EDX
10001d85  56                   PUSH ESI
10001d86  ff1514300010         CALL dword ptr [0x10003014]
10001d8c  8b3508300010         MOV ESI,dword ptr [0x10003008]
10001d92  53                   PUSH EBX
10001d93  ffd6                 CALL ESI
10001d95  55                   PUSH EBP
10001d96  ffd6                 CALL ESI
10001d98  5b                   POP EBX
10001d99  5d                   POP EBP
10001d9a  5e                   POP ESI
10001d9b  5f                   POP EDI
10001d9c  c3                   RET
; undefined 3 bytes at 10001d9d

; ==== FUNCTION FUN_10001da0 entry=10001da0 sig=undefined __cdecl FUN_10001da0(int param_1, HDC param_2, undefined4 * param_3)
10001da0  53                   PUSH EBX
10001da1  8b5c2408             MOV EBX,dword ptr [ESP + 0x8]
10001da5  55                   PUSH EBP
10001da6  56                   PUSH ESI
10001da7  66837b0e08           CMP word ptr [EBX + 0xe],0x8
10001dac  57                   PUSH EDI
10001dad  0f85ac000000         JNZ 0x10001e5f
10001db3  8b4320               MOV EAX,dword ptr [EBX + 0x20]
10001db6  85c0                 TEST EAX,EAX
10001db8  7406                 JZ 0x10001dc0
10001dba  668b7b20             MOV DI,word ptr [EBX + 0x20]
10001dbe  eb05                 JMP 0x10001dc5
10001dc0  bf00010000           MOV EDI,0x100
10001dc5  6685ff               TEST DI,DI
10001dc8  0f8491000000         JZ 0x10001e5f
10001dce  0fbff7               MOVSX ESI,DI
10001dd1  8d04b508000000       LEA EAX,[ESI*0x4 + 0x8]
10001dd8  50                   PUSH EAX
10001dd9  6a42                 PUSH 0x42
10001ddb  ff1558300010         CALL dword ptr [0x10003058]
10001de1  50                   PUSH EAX
10001de2  89442418             MOV dword ptr [ESP + 0x18],EAX
10001de6  ff155c300010         CALL dword ptr [0x1000305c]
10001dec  8be8                 MOV EBP,EAX
10001dee  6685ff               TEST DI,DI
10001df1  66897d02             MOV word ptr [EBP + 0x2],DI
10001df5  66c745000003         MOV word ptr [EBP],0x300
10001dfb  7e24                 JLE 0x10001e21
10001dfd  8d4d05               LEA ECX,[EBP + 0x5]
10001e00  8d5329               LEA EDX,[EBX + 0x29]
10001e03  8a4201               MOV AL,byte ptr [EDX + 0x1]
10001e06  83c204               ADD EDX,0x4
10001e09  8841ff               MOV byte ptr [ECX + -0x1],AL
10001e0c  8a42fc               MOV AL,byte ptr [EDX + -0x4]
10001e0f  8801                 MOV byte ptr [ECX],AL
10001e11  8a42fb               MOV AL,byte ptr [EDX + -0x5]
10001e14  884101               MOV byte ptr [ECX + 0x1],AL
10001e17  c6410200             MOV byte ptr [ECX + 0x2],0x0
10001e1b  83c104               ADD ECX,0x4
10001e1e  4e                   DEC ESI
10001e1f  75e2                 JNZ 0x10001e03
10001e21  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
10001e25  55                   PUSH EBP
10001e26  8b3e                 MOV EDI,dword ptr [ESI]
10001e28  ff1530300010         CALL dword ptr [0x10003030]
10001e2e  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
10001e32  8906                 MOV dword ptr [ESI],EAX
10001e34  51                   PUSH ECX
10001e35  e836000000           CALL 0x10001e70
10001e3a  8b16                 MOV EDX,dword ptr [ESI]
10001e3c  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
10001e40  83c404               ADD ESP,0x4
10001e43  6a00                 PUSH 0x0
10001e45  52                   PUSH EDX
10001e46  56                   PUSH ESI
10001e47  ff1534300010         CALL dword ptr [0x10003034]
10001e4d  85ff                 TEST EDI,EDI
10001e4f  7407                 JZ 0x10001e58
10001e51  57                   PUSH EDI
10001e52  ff1508300010         CALL dword ptr [0x10003008]
10001e58  56                   PUSH ESI
10001e59  ff1524300010         CALL dword ptr [0x10003024]
10001e5f  5f                   POP EDI
10001e60  5e                   POP ESI
10001e61  5d                   POP EBP
10001e62  5b                   POP EBX
10001e63  c3                   RET
; undefined 12 bytes at 10001e64

; ==== FUNCTION FUN_10001e70 entry=10001e70 sig=undefined __cdecl FUN_10001e70(HGLOBAL param_1)
10001e70  56                   PUSH ESI
10001e71  8b742408             MOV ESI,dword ptr [ESP + 0x8]
10001e75  56                   PUSH ESI
10001e76  ff1550300010         CALL dword ptr [0x10003050]
10001e7c  56                   PUSH ESI
10001e7d  ff1554300010         CALL dword ptr [0x10003054]
10001e83  5e                   POP ESI
10001e84  c3                   RET
; undefined 11 bytes at 10001e85

; ==== FUNCTION FUN_10001e90 entry=10001e90 sig=undefined __cdecl FUN_10001e90(HWND param_1, HWND param_2)
10001e90  83ec10               SUB ESP,0x10
10001e93  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
10001e97  53                   PUSH EBX
10001e98  55                   PUSH EBP
10001e99  56                   PUSH ESI
10001e9a  8d44240c             LEA EAX,[ESP + 0xc]
10001e9e  57                   PUSH EDI
10001e9f  50                   PUSH EAX
10001ea0  51                   PUSH ECX
10001ea1  ff15a0300010         CALL dword ptr [0x100030a0]
10001ea7  8b7c2418             MOV EDI,dword ptr [ESP + 0x18]
10001eab  8b742410             MOV ESI,dword ptr [ESP + 0x10]
10001eaf  8b6c241c             MOV EBP,dword ptr [ESP + 0x1c]
10001eb3  8b542414             MOV EDX,dword ptr [ESP + 0x14]
10001eb7  2bfe                 SUB EDI,ESI
10001eb9  8b742428             MOV ESI,dword ptr [ESP + 0x28]
10001ebd  56                   PUSH ESI
10001ebe  2bea                 SUB EBP,EDX
10001ec0  ff15b8300010         CALL dword ptr [0x100030b8]
10001ec6  8d542410             LEA EDX,[ESP + 0x10]
10001eca  89442428             MOV dword ptr [ESP + 0x28],EAX
10001ece  52                   PUSH EDX
10001ecf  56                   PUSH ESI
10001ed0  ff15b4300010         CALL dword ptr [0x100030b4]
10001ed6  8b1d34440010         MOV EBX,dword ptr [0x10004434]
10001edc  b903000000           MOV ECX,0x3
10001ee1  83e30f               AND EBX,0xf
10001ee4  8bc3                 MOV EAX,EBX
10001ee6  99                   CDQ
10001ee7  f7f9                 IDIV ECX
10001ee9  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
10001eed  8bc2                 MOV EAX,EDX
10001eef  40                   INC EAX
10001ef0  0fafc1               IMUL EAX,ECX
10001ef3  99                   CDQ
10001ef4  83e203               AND EDX,0x3
10001ef7  03c2                 ADD EAX,EDX
10001ef9  8bf0                 MOV ESI,EAX
10001efb  8bc7                 MOV EAX,EDI
10001efd  99                   CDQ
10001efe  2bc2                 SUB EAX,EDX
10001f00  c1fe02               SAR ESI,0x2
10001f03  d1f8                 SAR EAX,0x1
10001f05  2bf0                 SUB ESI,EAX
10001f07  b856555555           MOV EAX,0x55555556
10001f0c  f7eb                 IMUL EBX
10001f0e  8bc2                 MOV EAX,EDX
10001f10  c1e81f               SHR EAX,0x1f
10001f13  8d440201             LEA EAX,[EDX + EAX*0x1 + 0x1]
10001f17  0faf44241c           IMUL EAX,dword ptr [ESP + 0x1c]
10001f1c  99                   CDQ
10001f1d  83e203               AND EDX,0x3
10001f20  03c2                 ADD EAX,EDX
10001f22  8bd8                 MOV EBX,EAX
10001f24  8bc5                 MOV EAX,EBP
10001f26  99                   CDQ
10001f27  2bc2                 SUB EAX,EDX
10001f29  8d143e               LEA EDX,[ESI + EDI*0x1]
10001f2c  c1fb02               SAR EBX,0x2
10001f2f  d1f8                 SAR EAX,0x1
10001f31  2bd8                 SUB EBX,EAX
10001f33  3bd1                 CMP EDX,ECX
10001f35  7e04                 JLE 0x10001f3b
10001f37  2bcf                 SUB ECX,EDI
10001f39  8bf1                 MOV ESI,ECX
10001f3b  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
10001f3f  8d0c2b               LEA ECX,[EBX + EBP*0x1]
10001f42  3bc8                 CMP ECX,EAX
10001f44  7e04                 JLE 0x10001f4a
10001f46  2bc5                 SUB EAX,EBP
10001f48  8bd8                 MOV EBX,EAX
10001f4a  85f6                 TEST ESI,ESI
10001f4c  7d02                 JGE 0x10001f50
10001f4e  33f6                 XOR ESI,ESI
10001f50  85db                 TEST EBX,EBX
10001f52  7d02                 JGE 0x10001f56
10001f54  33db                 XOR EBX,EBX
10001f56  8b542428             MOV EDX,dword ptr [ESP + 0x28]
10001f5a  52                   PUSH EDX
10001f5b  6a00                 PUSH 0x0
10001f5d  ff15b0300010         CALL dword ptr [0x100030b0]
10001f63  8b442424             MOV EAX,dword ptr [ESP + 0x24]
10001f67  6a00                 PUSH 0x0
10001f69  55                   PUSH EBP
10001f6a  57                   PUSH EDI
10001f6b  53                   PUSH EBX
10001f6c  56                   PUSH ESI
10001f6d  50                   PUSH EAX
10001f6e  ff15ac300010         CALL dword ptr [0x100030ac]
10001f74  5f                   POP EDI
10001f75  5e                   POP ESI
10001f76  5d                   POP EBP
10001f77  5b                   POP EBX
10001f78  83c410               ADD ESP,0x10
10001f7b  c3                   RET
; undefined 4 bytes at 10001f7c

; ==== FUNCTION FUN_10001f80 entry=10001f80 sig=undefined __cdecl FUN_10001f80(HWND param_1, int param_2, LPPOINT param_3)
10001f80  8b442408             MOV EAX,dword ptr [ESP + 0x8]
10001f84  83ec10               SUB ESP,0x10
10001f87  53                   PUSH EBX
10001f88  56                   PUSH ESI
10001f89  57                   PUSH EDI
10001f8a  8b7c2420             MOV EDI,dword ptr [ESP + 0x20]
10001f8e  50                   PUSH EAX
10001f8f  57                   PUSH EDI
10001f90  ff15e4300010         CALL dword ptr [0x100030e4]
10001f96  8b742428             MOV ESI,dword ptr [ESP + 0x28]
10001f9a  85c0                 TEST EAX,EAX
10001f9c  743b                 JZ 0x10001fd9
10001f9e  8d4c240c             LEA ECX,[ESP + 0xc]
10001fa2  51                   PUSH ECX
10001fa3  50                   PUSH EAX
10001fa4  ff15a0300010         CALL dword ptr [0x100030a0]
10001faa  8b54240c             MOV EDX,dword ptr [ESP + 0xc]
10001fae  8b442410             MOV EAX,dword ptr [ESP + 0x10]
10001fb2  8b1d9c300010         MOV EBX,dword ptr [0x1000309c]
10001fb8  42                   INC EDX
10001fb9  40                   INC EAX
10001fba  56                   PUSH ESI
10001fbb  57                   PUSH EDI
10001fbc  8916                 MOV dword ptr [ESI],EDX
10001fbe  894604               MOV dword ptr [ESI + 0x4],EAX
10001fc1  ffd3                 CALL EBX
10001fc3  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
10001fc7  8b542418             MOV EDX,dword ptr [ESP + 0x18]
10001fcb  8d4608               LEA EAX,[ESI + 0x8]
10001fce  49                   DEC ECX
10001fcf  4a                   DEC EDX
10001fd0  50                   PUSH EAX
10001fd1  57                   PUSH EDI
10001fd2  8908                 MOV dword ptr [EAX],ECX
10001fd4  89560c               MOV dword ptr [ESI + 0xc],EDX
10001fd7  ffd3                 CALL EBX
10001fd9  8b460c               MOV EAX,dword ptr [ESI + 0xc]
10001fdc  8b7e04               MOV EDI,dword ptr [ESI + 0x4]
10001fdf  8b4e08               MOV ECX,dword ptr [ESI + 0x8]
10001fe2  8b1e                 MOV EBX,dword ptr [ESI]
10001fe4  2bc7                 SUB EAX,EDI
10001fe6  2bcb                 SUB ECX,EBX
10001fe8  83f814               CMP EAX,0x14
10001feb  7615                 JBE 0x10002002
10001fed  83c0fd               ADD EAX,-0x3
10001ff0  894610               MOV dword ptr [ESI + 0x10],EAX
10001ff3  8d1400               LEA EDX,[EAX + EAX*0x1]
10001ff6  b8abaaaaaa           MOV EAX,0xaaaaaaab
10001ffb  f7e2                 MUL EDX
10001ffd  d1ea                 SHR EDX,0x1
10001fff  895614               MOV dword ptr [ESI + 0x14],EDX
10002002  8d41ff               LEA EAX,[ECX + -0x1]
10002005  8b4e14               MOV ECX,dword ptr [ESI + 0x14]
10002008  83c102               ADD ECX,0x2
1000200b  33d2                 XOR EDX,EDX
1000200d  f7f1                 DIV ECX
1000200f  5f                   POP EDI
10002010  894618               MOV dword ptr [ESI + 0x18],EAX
10002013  5e                   POP ESI
10002014  5b                   POP EBX
10002015  83c410               ADD ESP,0x10
10002018  c3                   RET
; undefined 7 bytes at 10002019

; ==== FUNCTION FUN_10002020 entry=10002020 sig=undefined __cdecl FUN_10002020(HWND param_1)
10002020  83ec20               SUB ESP,0x20
10002023  56                   PUSH ESI
10002024  8b742428             MOV ESI,dword ptr [ESP + 0x28]
10002028  68ed030000           PUSH 0x3ed
1000202d  56                   PUSH ESI
1000202e  ff15e4300010         CALL dword ptr [0x100030e4]
10002034  85c0                 TEST EAX,EAX
10002036  746b                 JZ 0x100020a3
10002038  8d4c2414             LEA ECX,[ESP + 0x14]
1000203c  57                   PUSH EDI
1000203d  51                   PUSH ECX
1000203e  50                   PUSH EAX
1000203f  ff15a0300010         CALL dword ptr [0x100030a0]
10002045  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
10002049  8b542418             MOV EDX,dword ptr [ESP + 0x18]
1000204d  8b4c2420             MOV ECX,dword ptr [ESP + 0x20]
10002051  8b3d9c300010         MOV EDI,dword ptr [0x1000309c]
10002057  8944240c             MOV dword ptr [ESP + 0xc],EAX
1000205b  8d442408             LEA EAX,[ESP + 0x8]
1000205f  89542408             MOV dword ptr [ESP + 0x8],EDX
10002063  8b542424             MOV EDX,dword ptr [ESP + 0x24]
10002067  50                   PUSH EAX
10002068  56                   PUSH ESI
10002069  894c2418             MOV dword ptr [ESP + 0x18],ECX
1000206d  8954241c             MOV dword ptr [ESP + 0x1c],EDX
10002071  ffd7                 CALL EDI
10002073  8d4c2410             LEA ECX,[ESP + 0x10]
10002077  51                   PUSH ECX
10002078  56                   PUSH ESI
10002079  ffd7                 CALL EDI
1000207b  8b542408             MOV EDX,dword ptr [ESP + 0x8]
1000207f  8b44240c             MOV EAX,dword ptr [ESP + 0xc]
10002083  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
10002087  8915e0430010         MOV dword ptr [0x100043e0],EDX
1000208d  8b542414             MOV EDX,dword ptr [ESP + 0x14]
10002091  a3e4430010           MOV [0x100043e4],EAX
10002096  890de8430010         MOV dword ptr [0x100043e8],ECX
1000209c  8915ec430010         MOV dword ptr [0x100043ec],EDX
100020a2  5f                   POP EDI
100020a3  5e                   POP ESI
100020a4  83c420               ADD ESP,0x20
100020a7  c3                   RET
; undefined 8 bytes at 100020a8

; ==== FUNCTION FUN_100020b0 entry=100020b0 sig=undefined __cdecl FUN_100020b0(HDC param_1, int * param_2, int param_3)
100020b0  83ec20               SUB ESP,0x20
100020b3  53                   PUSH EBX
100020b4  55                   PUSH EBP
100020b5  56                   PUSH ESI
100020b6  8b742434             MOV ESI,dword ptr [ESP + 0x34]
100020ba  57                   PUSH EDI
100020bb  6a0d                 PUSH 0xd
100020bd  8b4608               MOV EAX,dword ptr [ESI + 0x8]
100020c0  8b4e04               MOV ECX,dword ptr [ESI + 0x4]
100020c3  8b560c               MOV EDX,dword ptr [ESI + 0xc]
100020c6  8b6e14               MOV EBP,dword ptr [ESI + 0x14]
100020c9  48                   DEC EAX
100020ca  83c103               ADD ECX,0x3
100020cd  8944242c             MOV dword ptr [ESP + 0x2c],EAX
100020d1  8b06                 MOV EAX,dword ptr [ESI]
100020d3  83c002               ADD EAX,0x2
100020d6  83ea03               SUB EDX,0x3
100020d9  89442414             MOV dword ptr [ESP + 0x14],EAX
100020dd  03c5                 ADD EAX,EBP
100020df  894c2418             MOV dword ptr [ESP + 0x18],ECX
100020e3  89542420             MOV dword ptr [ESP + 0x20],EDX
100020e7  8944241c             MOV dword ptr [ESP + 0x1c],EAX
100020eb  ff15bc300010         CALL dword ptr [0x100030bc]
100020f1  50                   PUSH EAX
100020f2  ff1520300010         CALL dword ptr [0x10003020]
100020f8  8b6c2434             MOV EBP,dword ptr [ESP + 0x34]
100020fc  8bd8                 MOV EBX,EAX
100020fe  53                   PUSH EBX
100020ff  55                   PUSH EBP
10002100  ff1514300010         CALL dword ptr [0x10003014]
10002106  89442438             MOV dword ptr [ESP + 0x38],EAX
1000210a  8b44243c             MOV EAX,dword ptr [ESP + 0x3c]
1000210e  33ff                 XOR EDI,EDI
10002110  85c0                 TEST EAX,EAX
10002112  7e46                 JLE 0x1000215a
10002114  8d442410             LEA EAX,[ESP + 0x10]
10002118  53                   PUSH EBX
10002119  50                   PUSH EAX
1000211a  55                   PUSH EBP
1000211b  47                   INC EDI
1000211c  ff15a4300010         CALL dword ptr [0x100030a4]
10002122  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
10002126  8d5701               LEA EDX,[EDI + 0x1]
10002129  8d4102               LEA EAX,[ECX + 0x2]
1000212c  8b4e18               MOV ECX,dword ptr [ESI + 0x18]
1000212f  3bd1                 CMP EDX,ECX
10002131  89442410             MOV dword ptr [ESP + 0x10],EAX
10002135  7e09                 JLE 0x10002140
10002137  8b442428             MOV EAX,dword ptr [ESP + 0x28]
1000213b  83c0fe               ADD EAX,-0x2
1000213e  eb03                 JMP 0x10002143
10002140  034614               ADD EAX,dword ptr [ESI + 0x14]
10002143  89442418             MOV dword ptr [ESP + 0x18],EAX
10002147  b8e8030000           MOV EAX,0x3e8
1000214c  99                   CDQ
1000214d  f7f9                 IDIV ECX
1000214f  8b4c243c             MOV ECX,dword ptr [ESP + 0x3c]
10002153  0fafc7               IMUL EAX,EDI
10002156  3bc8                 CMP ECX,EAX
10002158  7fba                 JG 0x10002114
1000215a  8b4e08               MOV ECX,dword ptr [ESI + 0x8]
1000215d  8b5604               MOV EDX,dword ptr [ESI + 0x4]
10002160  8b460c               MOV EAX,dword ptr [ESI + 0xc]
10002163  49                   DEC ECX
10002164  894c2418             MOV dword ptr [ESP + 0x18],ECX
10002168  8b4c2438             MOV ECX,dword ptr [ESP + 0x38]
1000216c  42                   INC EDX
1000216d  48                   DEC EAX
1000216e  51                   PUSH ECX
1000216f  55                   PUSH EBP
10002170  8954241c             MOV dword ptr [ESP + 0x1c],EDX
10002174  89442424             MOV dword ptr [ESP + 0x24],EAX
10002178  ff1514300010         CALL dword ptr [0x10003014]
1000217e  8b3d08300010         MOV EDI,dword ptr [0x10003008]
10002184  53                   PUSH EBX
10002185  ffd7                 CALL EDI
10002187  6a0f                 PUSH 0xf
10002189  ff15bc300010         CALL dword ptr [0x100030bc]
1000218f  50                   PUSH EAX
10002190  ff1520300010         CALL dword ptr [0x10003020]
10002196  8bf0                 MOV ESI,EAX
10002198  8d542410             LEA EDX,[ESP + 0x10]
1000219c  56                   PUSH ESI
1000219d  52                   PUSH EDX
1000219e  55                   PUSH EBP
1000219f  ff15a4300010         CALL dword ptr [0x100030a4]
100021a5  56                   PUSH ESI
100021a6  ffd7                 CALL EDI
100021a8  5f                   POP EDI
100021a9  5e                   POP ESI
100021aa  5d                   POP EBP
100021ab  5b                   POP EBX
100021ac  83c420               ADD ESP,0x20
100021af  c3                   RET

; ==== FUNCTION FUN_100021b0 entry=100021b0 sig=undefined __cdecl FUN_100021b0(HWND param_1)
100021b0  83ec4c               SUB ESP,0x4c
100021b3  56                   PUSH ESI
100021b4  57                   PUSH EDI
100021b5  8b7c2458             MOV EDI,dword ptr [ESP + 0x58]
100021b9  8d442408             LEA EAX,[ESP + 0x8]
100021bd  50                   PUSH EAX
100021be  57                   PUSH EDI
100021bf  ff15a0300010         CALL dword ptr [0x100030a0]
100021c5  8b742408             MOV ESI,dword ptr [ESP + 0x8]
100021c9  b8abaaaa2a           MOV EAX,0x2aaaaaab
100021ce  f7ee                 IMUL ESI
100021d0  8bca                 MOV ECX,EDX
100021d2  b8abaaaa2a           MOV EAX,0x2aaaaaab
100021d7  c1e91f               SHR ECX,0x1f
100021da  03d1                 ADD EDX,ECX
100021dc  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
100021e0  03f2                 ADD ESI,EDX
100021e2  f7e9                 IMUL ECX
100021e4  8bc2                 MOV EAX,EDX
100021e6  6a00                 PUSH 0x0
100021e8  c1e81f               SHR EAX,0x1f
100021eb  03d0                 ADD EDX,EAX
100021ed  8b442410             MOV EAX,dword ptr [ESP + 0x10]
100021f1  03ca                 ADD ECX,EDX
100021f3  8b542418             MOV EDX,dword ptr [ESP + 0x18]
100021f7  894c2414             MOV dword ptr [ESP + 0x14],ECX
100021fb  2bd0                 SUB EDX,EAX
100021fd  2bce                 SUB ECX,ESI
100021ff  52                   PUSH EDX
10002200  51                   PUSH ECX
10002201  50                   PUSH EAX
10002202  56                   PUSH ESI
10002203  57                   PUSH EDI
10002204  89742420             MOV dword ptr [ESP + 0x20],ESI
10002208  ff15ac300010         CALL dword ptr [0x100030ac]
1000220e  a138440010           MOV EAX,[0x10004438]
10002213  85c0                 TEST EAX,EAX
10002215  7549                 JNZ 0x10002260
10002217  50                   PUSH EAX
10002218  50                   PUSH EAX
10002219  6a31                 PUSH 0x31
1000221b  57                   PUSH EDI
1000221c  a338440010           MOV [0x10004438],EAX
10002221  ff15c4300010         CALL dword ptr [0x100030c4]
10002227  85c0                 TEST EAX,EAX
10002229  742c                 JZ 0x10002257
1000222b  8d4c2418             LEA ECX,[ESP + 0x18]
1000222f  51                   PUSH ECX
10002230  6a3c                 PUSH 0x3c
10002232  50                   PUSH EAX
10002233  ff153c300010         CALL dword ptr [0x1000303c]
10002239  85c0                 TEST EAX,EAX
1000223b  741a                 JZ 0x10002257
1000223d  8d542418             LEA EDX,[ESP + 0x18]
10002241  c74424282c010000     MOV dword ptr [ESP + 0x28],0x12c
10002249  52                   PUSH EDX
1000224a  ff1540300010         CALL dword ptr [0x10003040]
10002250  a338440010           MOV [0x10004438],EAX
10002255  eb05                 JMP 0x1000225c
10002257  a138440010           MOV EAX,[0x10004438]
1000225c  85c0                 TEST EAX,EAX
1000225e  740d                 JZ 0x1000226d
10002260  50                   PUSH EAX
10002261  6880220010           PUSH 0x10002280
10002266  57                   PUSH EDI
10002267  ff15c0300010         CALL dword ptr [0x100030c0]
1000226d  5f                   POP EDI
1000226e  5e                   POP ESI
1000226f  83c44c               ADD ESP,0x4c
10002272  c3                   RET
; undefined 13 bytes at 10002273

; ==== FUNCTION FUN_10002280 entry=10002280 sig=undefined FUN_10002280(void)
10002280  83ec20               SUB ESP,0x20
10002283  53                   PUSH EBX
10002284  56                   PUSH ESI
10002285  8b74242c             MOV ESI,dword ptr [ESP + 0x2c]
10002289  8d442418             LEA EAX,[ESP + 0x18]
1000228d  57                   PUSH EDI
1000228e  50                   PUSH EAX
1000228f  56                   PUSH ESI
10002290  ff15a0300010         CALL dword ptr [0x100030a0]
10002296  56                   PUSH ESI
10002297  ff1578300010         CALL dword ptr [0x10003078]
1000229d  8b1d9c300010         MOV EBX,dword ptr [0x1000309c]
100022a3  8bf8                 MOV EDI,EAX
100022a5  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
100022a9  8b542420             MOV EDX,dword ptr [ESP + 0x20]
100022ad  8d442414             LEA EAX,[ESP + 0x14]
100022b1  894c2414             MOV dword ptr [ESP + 0x14],ECX
100022b5  50                   PUSH EAX
100022b6  57                   PUSH EDI
100022b7  89542420             MOV dword ptr [ESP + 0x20],EDX
100022bb  ffd3                 CALL EBX
100022bd  8d44240c             LEA EAX,[ESP + 0xc]
100022c1  8b4c2424             MOV ECX,dword ptr [ESP + 0x24]
100022c5  8b542428             MOV EDX,dword ptr [ESP + 0x28]
100022c9  50                   PUSH EAX
100022ca  57                   PUSH EDI
100022cb  894c2414             MOV dword ptr [ESP + 0x14],ECX
100022cf  89542418             MOV dword ptr [ESP + 0x18],EDX
100022d3  ffd3                 CALL EBX
100022d5  8b7c2414             MOV EDI,dword ptr [ESP + 0x14]
100022d9  b8abaaaa2a           MOV EAX,0x2aaaaaab
100022de  f7ef                 IMUL EDI
100022e0  8bca                 MOV ECX,EDX
100022e2  b8abaaaa2a           MOV EAX,0x2aaaaaab
100022e7  c1e91f               SHR ECX,0x1f
100022ea  03d1                 ADD EDX,ECX
100022ec  8b4c240c             MOV ECX,dword ptr [ESP + 0xc]
100022f0  03fa                 ADD EDI,EDX
100022f2  f7e9                 IMUL ECX
100022f4  8bc2                 MOV EAX,EDX
100022f6  6a00                 PUSH 0x0
100022f8  c1e81f               SHR EAX,0x1f
100022fb  03d0                 ADD EDX,EAX
100022fd  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
10002301  03ca                 ADD ECX,EDX
10002303  8b542414             MOV EDX,dword ptr [ESP + 0x14]
10002307  894c2410             MOV dword ptr [ESP + 0x10],ECX
1000230b  2bd0                 SUB EDX,EAX
1000230d  2bcf                 SUB ECX,EDI
1000230f  52                   PUSH EDX
10002310  51                   PUSH ECX
10002311  50                   PUSH EAX
10002312  57                   PUSH EDI
10002313  56                   PUSH ESI
10002314  897c242c             MOV dword ptr [ESP + 0x2c],EDI
10002318  ff15ac300010         CALL dword ptr [0x100030ac]
1000231e  6a00                 PUSH 0x0
10002320  8b442438             MOV EAX,dword ptr [ESP + 0x38]
10002324  50                   PUSH EAX
10002325  6a30                 PUSH 0x30
10002327  56                   PUSH ESI
10002328  ff15c4300010         CALL dword ptr [0x100030c4]
1000232e  5f                   POP EDI
1000232f  5e                   POP ESI
10002330  b801000000           MOV EAX,0x1
10002335  5b                   POP EBX
10002336  83c420               ADD ESP,0x20
10002339  c20800               RET 0x8
; undefined 4 bytes at 1000233c

; ==== FUNCTION FUN_10002340 entry=10002340 sig=undefined __cdecl FUN_10002340(HWND param_1, LPCSTR param_2)
10002340  81ec28030000         SUB ESP,0x328
10002346  53                   PUSH EBX
10002347  55                   PUSH EBP
10002348  56                   PUSH ESI
10002349  8bb4243c030000       MOV ESI,dword ptr [ESP + 0x33c]
10002350  8bce                 MOV ECX,ESI
10002352  57                   PUSH EDI
10002353  8a06                 MOV AL,byte ptr [ESI]
10002355  894c2410             MOV dword ptr [ESP + 0x10],ECX
10002359  3c0a                 CMP AL,0xa
1000235b  7414                 JZ 0x10002371
1000235d  3c0d                 CMP AL,0xd
1000235f  740c                 JZ 0x1000236d
10002361  84c0                 TEST AL,AL
10002363  7408                 JZ 0x1000236d
10002365  8a4101               MOV AL,byte ptr [ECX + 0x1]
10002368  41                   INC ECX
10002369  3c0a                 CMP AL,0xa
1000236b  75f0                 JNZ 0x1000235d
1000236d  894c2410             MOV dword ptr [ESP + 0x10],ECX
10002371  8a01                 MOV AL,byte ptr [ECX]
10002373  3c0d                 CMP AL,0xd
10002375  7404                 JZ 0x1000237b
10002377  3c0a                 CMP AL,0xa
10002379  7503                 JNZ 0x1000237e
1000237b  41                   INC ECX
1000237c  ebf3                 JMP 0x10002371
1000237e  8a01                 MOV AL,byte ptr [ECX]
10002380  894c2410             MOV dword ptr [ESP + 0x10],ECX
10002384  84c0                 TEST AL,AL
10002386  7413                 JZ 0x1000239b
10002388  8b3d6c300010         MOV EDI,dword ptr [0x1000306c]
1000238e  8d842434010000       LEA EAX,[ESP + 0x134]
10002395  51                   PUSH ECX
10002396  50                   PUSH EAX
10002397  ffd7                 CALL EDI
10002399  eb15                 JMP 0x100023b0
1000239b  8b3d6c300010         MOV EDI,dword ptr [0x1000306c]
100023a1  8d8c2434010000       LEA ECX,[ESP + 0x134]
100023a8  56                   PUSH ESI
100023a9  51                   PUSH ECX
100023aa  ffd7                 CALL EDI
100023ac  89742410             MOV dword ptr [ESP + 0x10],ESI
100023b0  8bac243c030000       MOV EBP,dword ptr [ESP + 0x33c]
100023b7  85ed                 TEST EBP,EBP
100023b9  0f8492010000         JZ 0x10002551
100023bf  8d542424             LEA EDX,[ESP + 0x24]
100023c3  52                   PUSH EDX
100023c4  55                   PUSH EBP
100023c5  ff15a0300010         CALL dword ptr [0x100030a0]
100023cb  8b442424             MOV EAX,dword ptr [ESP + 0x24]
100023cf  8b54242c             MOV EDX,dword ptr [ESP + 0x2c]
100023d3  6a00                 PUSH 0x0
100023d5  6a00                 PUSH 0x0
100023d7  2bd0                 SUB EDX,EAX
100023d9  6a31                 PUSH 0x31
100023db  55                   PUSH EBP
100023dc  8954243c             MOV dword ptr [ESP + 0x3c],EDX
100023e0  ff15c4300010         CALL dword ptr [0x100030c4]
100023e6  8bd8                 MOV EBX,EAX
100023e8  55                   PUSH EBP
100023e9  895c2424             MOV dword ptr [ESP + 0x24],EBX
100023ed  ff15b8300010         CALL dword ptr [0x100030b8]
100023f3  85db                 TEST EBX,EBX
100023f5  8be8                 MOV EBP,EAX
100023f7  740c                 JZ 0x10002405
100023f9  53                   PUSH EBX
100023fa  55                   PUSH EBP
100023fb  ff1514300010         CALL dword ptr [0x10003014]
10002401  8944241c             MOV dword ptr [ESP + 0x1c],EAX
10002405  8b1d48300010         MOV EBX,dword ptr [0x10003048]
1000240b  8d4c2414             LEA ECX,[ESP + 0x14]
1000240f  51                   PUSH ECX
10002410  56                   PUSH ESI
10002411  ffd3                 CALL EBX
10002413  8d942438010000       LEA EDX,[ESP + 0x138]
1000241a  50                   PUSH EAX
1000241b  52                   PUSH EDX
1000241c  55                   PUSH EBP
1000241d  ff1538300010         CALL dword ptr [0x10003038]
10002423  8b442414             MOV EAX,dword ptr [ESP + 0x14]
10002427  8b4c242c             MOV ECX,dword ptr [ESP + 0x2c]
1000242b  3bc1                 CMP EAX,ECX
1000242d  0f8cfb000000         JL 0x1000252e
10002433  8d8c2434010000       LEA ECX,[ESP + 0x134]
1000243a  6800010000           PUSH 0x100
1000243f  8d542438             LEA EDX,[ESP + 0x38]
10002443  51                   PUSH ECX
10002444  52                   PUSH EDX
10002445  ff154c300010         CALL dword ptr [0x1000304c]
1000244b  8a442434             MOV AL,byte ptr [ESP + 0x34]
1000244f  c684243301000000     MOV byte ptr [ESP + 0x133],0x0
10002457  84c0                 TEST AL,AL
10002459  8d742434             LEA ESI,[ESP + 0x34]
1000245d  740c                 JZ 0x1000246b
1000245f  3c5c                 CMP AL,0x5c
10002461  7408                 JZ 0x1000246b
10002463  8a4601               MOV AL,byte ptr [ESI + 0x1]
10002466  46                   INC ESI
10002467  84c0                 TEST AL,AL
10002469  75f4                 JNZ 0x1000245f
1000246b  803e5c               CMP byte ptr [ESI],0x5c
1000246e  7501                 JNZ 0x10002471
10002470  46                   INC ESI
10002471  8b442414             MOV EAX,dword ptr [ESP + 0x14]
10002475  8b4c242c             MOV ECX,dword ptr [ESP + 0x2c]
10002479  3bc1                 CMP EAX,ECX
1000247b  0f8ca1000000         JL 0x10002522
10002481  8a0e                 MOV CL,byte ptr [ESI]
10002483  8bc6                 MOV EAX,ESI
10002485  80f92e               CMP CL,0x2e
10002488  7515                 JNZ 0x1000249f
1000248a  b12e                 MOV CL,0x2e
1000248c  80f95c               CMP CL,0x5c
1000248f  7408                 JZ 0x10002499
10002491  8a4801               MOV CL,byte ptr [EAX + 0x1]
10002494  40                   INC EAX
10002495  84c9                 TEST CL,CL
10002497  75f3                 JNZ 0x1000248c
10002499  80385c               CMP byte ptr [EAX],0x5c
1000249c  7501                 JNZ 0x1000249f
1000249e  40                   INC EAX
1000249f  8a08                 MOV CL,byte ptr [EAX]
100024a1  84c9                 TEST CL,CL
100024a3  740d                 JZ 0x100024b2
100024a5  80f95c               CMP CL,0x5c
100024a8  7408                 JZ 0x100024b2
100024aa  8a4801               MOV CL,byte ptr [EAX + 0x1]
100024ad  40                   INC EAX
100024ae  84c9                 TEST CL,CL
100024b0  75f3                 JNZ 0x100024a5
100024b2  803800               CMP byte ptr [EAX],0x0
100024b5  742a                 JZ 0x100024e1
100024b7  8bc8                 MOV ECX,EAX
100024b9  2bce                 SUB ECX,ESI
100024bb  83f903               CMP ECX,0x3
100024be  7e21                 JLE 0x100024e1
100024c0  8d942438020000       LEA EDX,[ESP + 0x238]
100024c7  50                   PUSH EAX
100024c8  52                   PUSH EDX
100024c9  ffd7                 CALL EDI
100024cb  68d0400010           PUSH 0x100040d0
100024d0  56                   PUSH ESI
100024d1  ffd7                 CALL EDI
100024d3  8d842438020000       LEA EAX,[ESP + 0x238]
100024da  8d4e03               LEA ECX,[ESI + 0x3]
100024dd  50                   PUSH EAX
100024de  51                   PUSH ECX
100024df  eb16                 JMP 0x100024f7
100024e1  8d542434             LEA EDX,[ESP + 0x34]
100024e5  68d0400010           PUSH 0x100040d0
100024ea  52                   PUSH EDX
100024eb  ffd3                 CALL EBX
100024ed  8d4c2438             LEA ECX,[ESP + 0x38]
100024f1  83e904               SUB ECX,0x4
100024f4  03c1                 ADD EAX,ECX
100024f6  50                   PUSH EAX
100024f7  ffd7                 CALL EDI
100024f9  8d542414             LEA EDX,[ESP + 0x14]
100024fd  8d442434             LEA EAX,[ESP + 0x34]
10002501  52                   PUSH EDX
10002502  50                   PUSH EAX
10002503  ffd3                 CALL EBX
10002505  8d4c2438             LEA ECX,[ESP + 0x38]
10002509  50                   PUSH EAX
1000250a  51                   PUSH ECX
1000250b  55                   PUSH EBP
1000250c  ff1538300010         CALL dword ptr [0x10003038]
10002512  8b542414             MOV EDX,dword ptr [ESP + 0x14]
10002516  8b44242c             MOV EAX,dword ptr [ESP + 0x2c]
1000251a  3bd0                 CMP EDX,EAX
1000251c  0f8d5fffffff         JGE 0x10002481
10002522  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
10002526  8d442434             LEA EAX,[ESP + 0x34]
1000252a  50                   PUSH EAX
1000252b  51                   PUSH ECX
1000252c  ffd7                 CALL EDI
1000252e  8b442420             MOV EAX,dword ptr [ESP + 0x20]
10002532  85c0                 TEST EAX,EAX
10002534  740c                 JZ 0x10002542
10002536  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
1000253a  52                   PUSH EDX
1000253b  55                   PUSH EBP
1000253c  ff1514300010         CALL dword ptr [0x10003014]
10002542  8b84243c030000       MOV EAX,dword ptr [ESP + 0x33c]
10002549  55                   PUSH EBP
1000254a  50                   PUSH EAX
1000254b  ff15b0300010         CALL dword ptr [0x100030b0]
10002551  5f                   POP EDI
10002552  5e                   POP ESI
10002553  5d                   POP EBP
10002554  5b                   POP EBX
10002555  81c428030000         ADD ESP,0x328
1000255b  c3                   RET
; undefined 4 bytes at 1000255c

; ==== FUNCTION FUN_10002560 entry=10002560 sig=undefined __cdecl FUN_10002560(HDC param_1)
10002560  83ec1c               SUB ESP,0x1c
10002563  53                   PUSH EBX
10002564  55                   PUSH EBP
10002565  56                   PUSH ESI
10002566  57                   PUSH EDI
10002567  6a0f                 PUSH 0xf
10002569  ff15bc300010         CALL dword ptr [0x100030bc]
1000256f  50                   PUSH EAX
10002570  ff1520300010         CALL dword ptr [0x10003020]
10002576  8be8                 MOV EBP,EAX
10002578  896c2418             MOV dword ptr [ESP + 0x18],EBP
1000257c  ff15a8300010         CALL dword ptr [0x100030a8]
10002582  8b35e4430010         MOV ESI,dword ptr [0x100043e4]
10002588  8b0de8430010         MOV ECX,dword ptr [0x100043e8]
1000258e  8b1de0430010         MOV EBX,dword ptr [0x100043e0]
10002594  8bf8                 MOV EDI,EAX
10002596  a1ec430010           MOV EAX,[0x100043ec]
1000259b  2bcb                 SUB ECX,EBX
1000259d  2bc6                 SUB EAX,ESI
1000259f  8b742430             MOV ESI,dword ptr [ESP + 0x30]
100025a3  40                   INC EAX
100025a4  41                   INC ECX
100025a5  50                   PUSH EAX
100025a6  51                   PUSH ECX
100025a7  56                   PUSH ESI
100025a8  ff1528300010         CALL dword ptr [0x10003028]
100025ae  8bd8                 MOV EBX,EAX
100025b0  85db                 TEST EBX,EBX
100025b2  895c2414             MOV dword ptr [ESP + 0x14],EBX
100025b6  0f8467010000         JZ 0x10002723
100025bc  56                   PUSH ESI
100025bd  ff152c300010         CALL dword ptr [0x1000302c]
100025c3  8bf0                 MOV ESI,EAX
100025c5  85f6                 TEST ESI,ESI
100025c7  0f8456010000         JZ 0x10002723
100025cd  53                   PUSH EBX
100025ce  56                   PUSH ESI
100025cf  ff1514300010         CALL dword ptr [0x10003014]
100025d5  8b0de4430010         MOV ECX,dword ptr [0x100043e4]
100025db  8b15e8430010         MOV EDX,dword ptr [0x100043e8]
100025e1  8b1de0430010         MOV EBX,dword ptr [0x100043e0]
100025e7  89442410             MOV dword ptr [ESP + 0x10],EAX
100025eb  33c0                 XOR EAX,EAX
100025ed  55                   PUSH EBP
100025ee  89442420             MOV dword ptr [ESP + 0x20],EAX
100025f2  89442424             MOV dword ptr [ESP + 0x24],EAX
100025f6  a1ec430010           MOV EAX,[0x100043ec]
100025fb  2bd3                 SUB EDX,EBX
100025fd  2bc1                 SUB EAX,ECX
100025ff  8d4c2420             LEA ECX,[ESP + 0x20]
10002603  51                   PUSH ECX
10002604  56                   PUSH ESI
10002605  89542430             MOV dword ptr [ESP + 0x30],EDX
10002609  89442434             MOV dword ptr [ESP + 0x34],EAX
1000260d  ff15a4300010         CALL dword ptr [0x100030a4]
10002613  8bdf                 MOV EBX,EDI
10002615  c1eb10               SHR EBX,0x10
10002618  8d04dd00000000       LEA EAX,[EBX*0x8 + 0x0]
1000261f  99                   CDQ
10002620  83e207               AND EDX,0x7
10002623  03c2                 ADD EAX,EDX
10002625  8b1540440010         MOV EDX,dword ptr [0x10004440]
1000262b  8be8                 MOV EBP,EAX
1000262d  52                   PUSH EDX
1000262e  c1fd03               SAR EBP,0x3
10002631  55                   PUSH EBP
10002632  6a00                 PUSH 0x0
10002634  56                   PUSH ESI
10002635  ff15cc300010         CALL dword ptr [0x100030cc]
1000263b  a144440010           MOV EAX,[0x10004444]
10002640  81e7ffff0000         AND EDI,0xffff
10002646  50                   PUSH EAX
10002647  55                   PUSH EBP
10002648  8d04fd00000000       LEA EAX,[EDI*0x8 + 0x0]
1000264f  8b2dcc300010         MOV EBP,dword ptr [0x100030cc]
10002655  2bc7                 SUB EAX,EDI
10002657  c1e004               SHL EAX,0x4
1000265a  03c7                 ADD EAX,EDI
1000265c  99                   CDQ
1000265d  83e203               AND EDX,0x3
10002660  03c2                 ADD EAX,EDX
10002662  c1f802               SAR EAX,0x2
10002665  50                   PUSH EAX
10002666  56                   PUSH ESI
10002667  ffd5                 CALL EBP
10002669  8b0d00400010         MOV ECX,dword ptr [0x10004000]
1000266f  85c9                 TEST ECX,ECX
10002671  7520                 JNZ 0x10002693
10002673  a10c400010           MOV EAX,[0x1000400c]
10002678  8b0d94440010         MOV ECX,dword ptr [0x10004494]
1000267e  0fafc3               IMUL EAX,EBX
10002681  99                   CDQ
10002682  83e207               AND EDX,0x7
10002685  51                   PUSH ECX
10002686  03c2                 ADD EAX,EDX
10002688  c1f803               SAR EAX,0x3
1000268b  50                   PUSH EAX
1000268c  a108400010           MOV EAX,[0x10004008]
10002691  eb23                 JMP 0x100026b6
10002693  8b04cd0c400010       MOV EAX,dword ptr [ECX*0x8 + 0x1000400c]
1000269a  8b148d44440010       MOV EDX,dword ptr [ECX*0x4 + 0x10004444]
100026a1  0fafc3               IMUL EAX,EBX
100026a4  52                   PUSH EDX
100026a5  99                   CDQ
100026a6  83e207               AND EDX,0x7
100026a9  03c2                 ADD EAX,EDX
100026ab  c1f803               SAR EAX,0x3
100026ae  50                   PUSH EAX
100026af  8b04cd08400010       MOV EAX,dword ptr [ECX*0x8 + 0x10004008]
100026b6  0fafc7               IMUL EAX,EDI
100026b9  99                   CDQ
100026ba  83e203               AND EDX,0x3
100026bd  03c2                 ADD EAX,EDX
100026bf  c1f802               SAR EAX,0x2
100026c2  50                   PUSH EAX
100026c3  56                   PUSH ESI
100026c4  ffd5                 CALL EBP
100026c6  a1ec430010           MOV EAX,[0x100043ec]
100026cb  8b15e4430010         MOV EDX,dword ptr [0x100043e4]
100026d1  8b0de8430010         MOV ECX,dword ptr [0x100043e8]
100026d7  8b3de0430010         MOV EDI,dword ptr [0x100043e0]
100026dd  2bc2                 SUB EAX,EDX
100026df  2bcf                 SUB ECX,EDI
100026e1  682000cc00           PUSH 0xcc0020
100026e6  50                   PUSH EAX
100026e7  51                   PUSH ECX
100026e8  6a00                 PUSH 0x0
100026ea  6a00                 PUSH 0x0
100026ec  56                   PUSH ESI
100026ed  50                   PUSH EAX
100026ee  8b44244c             MOV EAX,dword ptr [ESP + 0x4c]
100026f2  51                   PUSH ECX
100026f3  52                   PUSH EDX
100026f4  57                   PUSH EDI
100026f5  50                   PUSH EAX
100026f6  ff1500300010         CALL dword ptr [0x10003000]
100026fc  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
10002700  51                   PUSH ECX
10002701  56                   PUSH ESI
10002702  ff1514300010         CALL dword ptr [0x10003014]
10002708  8b542414             MOV EDX,dword ptr [ESP + 0x14]
1000270c  8b3d08300010         MOV EDI,dword ptr [0x10003008]
10002712  52                   PUSH EDX
10002713  ffd7                 CALL EDI
10002715  8b442418             MOV EAX,dword ptr [ESP + 0x18]
10002719  50                   PUSH EAX
1000271a  ffd7                 CALL EDI
1000271c  56                   PUSH ESI
1000271d  ff1504300010         CALL dword ptr [0x10003004]
10002723  5f                   POP EDI
10002724  5e                   POP ESI
10002725  5d                   POP EBP
10002726  5b                   POP EBX
10002727  83c41c               ADD ESP,0x1c
1000272a  c3                   RET
; undefined 5 bytes at 1000272b

; ==== FUNCTION FUN_10002730 entry=10002730 sig=undefined __cdecl FUN_10002730(char * param_1)
10002730  8b442404             MOV EAX,dword ptr [ESP + 0x4]
10002734  53                   PUSH EBX
10002735  56                   PUSH ESI
10002736  57                   PUSH EDI
10002737  8a08                 MOV CL,byte ptr [EAX]
10002739  33ff                 XOR EDI,EDI
1000273b  33db                 XOR EBX,EBX
1000273d  bee0420010           MOV ESI,0x100042e0
10002742  84c9                 TEST CL,CL
10002744  0f844c010000         JZ 0x10002896
1000274a  80f95b               CMP CL,0x5b
1000274d  0f852f010000         JNZ 0x10002882
10002753  83fb02               CMP EBX,0x2
10002756  0f8d8c000000         JGE 0x100027e8
1000275c  8a5001               MOV DL,byte ptr [EAX + 0x1]
1000275f  40                   INC EAX
10002760  80fa20               CMP DL,0x20
10002763  bf01000000           MOV EDI,0x1
10002768  b9c0410010           MOV ECX,0x100041c0
1000276d  7509                 JNZ 0x10002778
1000276f  8a5001               MOV DL,byte ptr [EAX + 0x1]
10002772  40                   INC EAX
10002773  80fa20               CMP DL,0x20
10002776  74f7                 JZ 0x1000276f
10002778  8a10                 MOV DL,byte ptr [EAX]
1000277a  80fa5e               CMP DL,0x5e
1000277d  7410                 JZ 0x1000278f
1000277f  84d2                 TEST DL,DL
10002781  740c                 JZ 0x1000278f
10002783  8811                 MOV byte ptr [ECX],DL
10002785  8a5001               MOV DL,byte ptr [EAX + 0x1]
10002788  41                   INC ECX
10002789  40                   INC EAX
1000278a  80fa5e               CMP DL,0x5e
1000278d  75f0                 JNZ 0x1000277f
1000278f  803920               CMP byte ptr [ECX],0x20
10002792  750c                 JNZ 0x100027a0
10002794  c60100               MOV byte ptr [ECX],0x0
10002797  8a51ff               MOV DL,byte ptr [ECX + -0x1]
1000279a  49                   DEC ECX
1000279b  80fa20               CMP DL,0x20
1000279e  74f4                 JZ 0x10002794
100027a0  8a5001               MOV DL,byte ptr [EAX + 0x1]
100027a3  40                   INC EAX
100027a4  80fa20               CMP DL,0x20
100027a7  b900420010           MOV ECX,0x10004200
100027ac  7509                 JNZ 0x100027b7
100027ae  8a5001               MOV DL,byte ptr [EAX + 0x1]
100027b1  40                   INC EAX
100027b2  80fa20               CMP DL,0x20
100027b5  74f7                 JZ 0x100027ae
100027b7  8a10                 MOV DL,byte ptr [EAX]
100027b9  80fa5d               CMP DL,0x5d
100027bc  7410                 JZ 0x100027ce
100027be  84d2                 TEST DL,DL
100027c0  740c                 JZ 0x100027ce
100027c2  8811                 MOV byte ptr [ECX],DL
100027c4  8a5001               MOV DL,byte ptr [EAX + 0x1]
100027c7  41                   INC ECX
100027c8  40                   INC EAX
100027c9  80fa5d               CMP DL,0x5d
100027cc  75f0                 JNZ 0x100027be
100027ce  803920               CMP byte ptr [ECX],0x20
100027d1  0f859b000000         JNZ 0x10002872
100027d7  c60100               MOV byte ptr [ECX],0x0
100027da  8a51ff               MOV DL,byte ptr [ECX + -0x1]
100027dd  49                   DEC ECX
100027de  80fa20               CMP DL,0x20
100027e1  74f4                 JZ 0x100027d7
100027e3  e98a000000           JMP 0x10002872
100027e8  85ff                 TEST EDI,EDI
100027ea  7508                 JNZ 0x100027f4
100027ec  c60625               MOV byte ptr [ESI],0x25
100027ef  46                   INC ESI
100027f0  c60673               MOV byte ptr [ESI],0x73
100027f3  46                   INC ESI
100027f4  8a5001               MOV DL,byte ptr [EAX + 0x1]
100027f7  40                   INC EAX
100027f8  80fa20               CMP DL,0x20
100027fb  b920410010           MOV ECX,0x10004120
10002800  7509                 JNZ 0x1000280b
10002802  8a5001               MOV DL,byte ptr [EAX + 0x1]
10002805  40                   INC EAX
10002806  80fa20               CMP DL,0x20
10002809  74f7                 JZ 0x10002802
1000280b  8a10                 MOV DL,byte ptr [EAX]
1000280d  80fa5e               CMP DL,0x5e
10002810  7410                 JZ 0x10002822
10002812  84d2                 TEST DL,DL
10002814  740c                 JZ 0x10002822
10002816  8811                 MOV byte ptr [ECX],DL
10002818  8a5001               MOV DL,byte ptr [EAX + 0x1]
1000281b  41                   INC ECX
1000281c  40                   INC EAX
1000281d  80fa5e               CMP DL,0x5e
10002820  75f0                 JNZ 0x10002812
10002822  803920               CMP byte ptr [ECX],0x20
10002825  750c                 JNZ 0x10002833
10002827  c60100               MOV byte ptr [ECX],0x0
1000282a  8a51ff               MOV DL,byte ptr [ECX + -0x1]
1000282d  49                   DEC ECX
1000282e  80fa20               CMP DL,0x20
10002831  74f4                 JZ 0x10002827
10002833  8a5001               MOV DL,byte ptr [EAX + 0x1]
10002836  40                   INC EAX
10002837  80fa20               CMP DL,0x20
1000283a  b960410010           MOV ECX,0x10004160
1000283f  7509                 JNZ 0x1000284a
10002841  8a5001               MOV DL,byte ptr [EAX + 0x1]
10002844  40                   INC EAX
10002845  80fa20               CMP DL,0x20
10002848  74f7                 JZ 0x10002841
1000284a  8a10                 MOV DL,byte ptr [EAX]
1000284c  80fa5d               CMP DL,0x5d
1000284f  7410                 JZ 0x10002861
10002851  84d2                 TEST DL,DL
10002853  740c                 JZ 0x10002861
10002855  8811                 MOV byte ptr [ECX],DL
10002857  8a5001               MOV DL,byte ptr [EAX + 0x1]
1000285a  41                   INC ECX
1000285b  40                   INC EAX
1000285c  80fa5d               CMP DL,0x5d
1000285f  75f0                 JNZ 0x10002851
10002861  803920               CMP byte ptr [ECX],0x20
10002864  750c                 JNZ 0x10002872
10002866  c60100               MOV byte ptr [ECX],0x0
10002869  8a51ff               MOV DL,byte ptr [ECX + -0x1]
1000286c  49                   DEC ECX
1000286d  80fa20               CMP DL,0x20
10002870  74f4                 JZ 0x10002866
10002872  803800               CMP byte ptr [EAX],0x0
10002875  7401                 JZ 0x10002878
10002877  40                   INC EAX
10002878  c60625               MOV byte ptr [ESI],0x25
1000287b  46                   INC ESI
1000287c  c60673               MOV byte ptr [ESI],0x73
1000287f  46                   INC ESI
10002880  eb0a                 JMP 0x1000288c
10002882  80f925               CMP CL,0x25
10002885  7501                 JNZ 0x10002888
10002887  43                   INC EBX
10002888  880e                 MOV byte ptr [ESI],CL
1000288a  46                   INC ESI
1000288b  40                   INC EAX
1000288c  8a08                 MOV CL,byte ptr [EAX]
1000288e  84c9                 TEST CL,CL
10002890  0f85b4feffff         JNZ 0x1000274a
10002896  c60600               MOV byte ptr [ESI],0x0
10002899  5f                   POP EDI
1000289a  5e                   POP ESI
1000289b  5b                   POP EBX
1000289c  c3                   RET
; undefined 355 bytes at 1000289d
10003000  addr 0000368c
10003004  addr 00003680
10003008  addr 000035ae
1000300c  addr 000035be
10003010  addr 000035c8
10003014  addr 000035d4
10003018  addr 000035e4
1000301c  addr 000035f0
10003020  addr 00003600
10003024  addr 00003614
10003028  addr 000036b0
1000302c  addr 0000369a
10003030  addr 00003636
10003034  addr 00003626
10003038  addr 0000366a
1000303c  addr 0000365c
10003040  addr 00003646
; undefined 4 bytes at 10003044
10003048  addr 0000331c
1000304c  addr 00003310
10003050  addr 00003300
10003054  addr 000032f2
10003058  addr 000032e4
1000305c  addr 000032d6
10003060  addr 000032ca
10003064  addr 000032ba
10003068  addr 000032aa
1000306c  addr 0000329e
10003070  addr 00003288
; undefined 4 bytes at 10003074
10003078  addr 0000358a
1000307c  addr 00003456
10003080  addr 00003468
10003084  addr 0000347c
10003088  addr 00003490
1000308c  addr 0000343c
10003090  addr 000034b0
10003094  addr 000034c2
10003098  addr 000034d0
1000309c  addr 000034e2
100030a0  addr 000034f4
100030a4  addr 00003504
100030a8  addr 00003510
100030ac  addr 00003526
100030b0  addr 00003534
100030b4  addr 00003540
100030b8  addr 00003550
100030bc  addr 00003558
100030c0  addr 00003566
100030c4  addr 0000357a
100030c8  addr 00003448
100030cc  addr 00003596
100030d0  addr 0000342c
100030d4  addr 00003420
100030d8  addr 0000340e
100030dc  addr 000033f8
100030e0  addr 000033e6
100030e4  addr 000033d8
100030e8  addr 000033c6
100030ec  addr 000033ba
100030f0  addr 000033ae
100030f4  addr 000033a2
100030f8  addr 00003396
100030fc  addr 00003386
10003100  addr 00003378
10003104  addr 00003366
10003108  addr 00003354
1000310c  addr 00003344
10003110  addr 00003336
10003114  addr 0000349e
; undefined 4 bytes at 10003118
1000311c  ddw 31B4h
10003120  ddw 0h
10003124  ddw 0h
10003128  ddw 3328h
1000312c  ddw 3048h
10003130  ddw 31E4h
10003134  ddw 0h
10003138  ddw 0h
1000313c  ddw 35A2h
10003140  ddw 3078h
10003144  ddw 316Ch
10003148  ddw 0h
1000314c  ddw 0h
10003150  ddw 36CAh
10003154  ddw 3000h
; undefined 20 bytes at 10003158
1000316c  ddw 368Ch
10003170  ddw 3680h
10003174  ddw 35AEh
10003178  ddw 35BEh
1000317c  ddw 35C8h
10003180  ddw 35D4h
10003184  ddw 35E4h
10003188  ddw 35F0h
1000318c  ddw 3600h
10003190  ddw 3614h
10003194  ddw 36B0h
10003198  ddw 369Ah
1000319c  ddw 3636h
100031a0  ddw 3626h
100031a4  ddw 366Ah
100031a8  ddw 365Ch
100031ac  ddw 3646h
; undefined 4 bytes at 100031b0
100031b4  ddw 331Ch
100031b8  ddw 3310h
100031bc  ddw 3300h
100031c0  ddw 32F2h
100031c4  ddw 32E4h
100031c8  ddw 32D6h
100031cc  ddw 32CAh
100031d0  ddw 32BAh
100031d4  ddw 32AAh
100031d8  ddw 329Eh
100031dc  ddw 3288h
; undefined 4 bytes at 100031e0
100031e4  ddw 358Ah
100031e8  ddw 3456h
100031ec  ddw 3468h
100031f0  ddw 347Ch
100031f4  ddw 3490h
100031f8  ddw 343Ch
100031fc  ddw 34B0h
10003200  ddw 34C2h
10003204  ddw 34D0h
10003208  ddw 34E2h
1000320c  ddw 34F4h
10003210  ddw 3504h
10003214  ddw 3510h
10003218  ddw 3526h
1000321c  ddw 3534h
10003220  ddw 3540h
10003224  ddw 3550h
10003228  ddw 3558h
1000322c  ddw 3566h
10003230  ddw 357Ah
10003234  ddw 3448h
10003238  ddw 3596h
1000323c  ddw 342Ch
10003240  ddw 3420h
10003244  ddw 340Eh
10003248  ddw 33F8h
1000324c  ddw 33E6h
10003250  ddw 33D8h
10003254  ddw 33C6h
10003258  ddw 33BAh
1000325c  ddw 33AEh
10003260  ddw 33A2h
10003264  ddw 3396h
10003268  ddw 3386h
1000326c  ddw 3378h
10003270  ddw 3366h
10003274  ddw 3354h
10003278  ddw 3344h
1000327c  ddw 3336h
10003280  ddw 349Eh
; undefined 4 bytes at 10003284
10003288  dw 26Ah
1000328a  ds "WaitForSingleObject"
1000329e  dw 29Bh
100032a0  ds "lstrcpyA"
; undefined 1 bytes at 100032a9
100032aa  dw 43h
100032ac  ds "CreateThread"
; undefined 1 bytes at 100032b9
100032ba  dw 145h
100032bc  ds "GetTickCount"
; undefined 1 bytes at 100032c9
100032ca  dw 295h
100032cc  ds "lstrcmpA"
; undefined 1 bytes at 100032d5
100032d6  dw 160h
100032d8  ds "GlobalLock"
; undefined 1 bytes at 100032e3
100032e4  dw 155h
100032e6  ds "GlobalAlloc"
100032f2  dw 15Ch
100032f4  ds "GlobalFree"
; undefined 1 bytes at 100032ff
10003300  dw 166h
10003302  ds "GlobalUnlock"
; undefined 1 bytes at 1000330f
10003310  dw 29Eh
10003312  ds "lstrcpynA"
1000331c  dw 2A1h
1000331e  ds "lstrlenA"
; undefined 1 bytes at 10003327
10003328  ds "KERNEL32.dll"
; undefined 1 bytes at 10003335
10003336  dw 88h
10003338  ds "DestroyIcon"
10003344  dw 8Ah
10003346  ds "DestroyWindow"
10003354  dw 152h
10003356  ds "InvalidateRect"
; undefined 1 bytes at 10003365
10003366  dw 1F2h
10003368  ds "SetDlgItemTextA"
10003378  dw 22Dh
1000337a  ds "ShowWindow"
; undefined 1 bytes at 10003385
10003386  dw B2h
10003388  ds "EnableWindow"
; undefined 1 bytes at 10003395
10003396  dw 216h
10003398  ds "SetTimer"
; undefined 1 bytes at 100033a1
100033a2  dw 16Dh
100033a4  ds "KillTimer"
100033ae  dw 264h
100033b0  ds "wsprintfA"
100033ba  dw 164h
100033bc  ds "IsIconic"
; undefined 1 bytes at 100033c5
100033c6  dw 13Fh
100033c8  ds "GetWindowTextA"
; undefined 1 bytes at 100033d7
100033d8  dw F3h
100033da  ds "GetDlgItem"
; undefined 1 bytes at 100033e5
100033e6  dw 221h
100033e8  ds "SetWindowTextA"
; undefined 1 bytes at 100033f7
100033f8  dw 4Bh
100033fa  ds "CreateDialogParamA"
; undefined 1 bytes at 1000340d
1000340e  dw 16Ah
10003410  ds "IsWindowVisible"
10003420  dw 176h
10003422  ds "LoadIconA"
1000342c  dw 251h
1000342e  ds "UpdateWindow"
; undefined 1 bytes at 1000343b
1000343c  dw B6h
1000343e  ds "EndPaint"
; undefined 1 bytes at 10003447
10003448  dw 9h
1000344a  ds "BeginPaint"
; undefined 1 bytes at 10003455
10003456  dw 1B3h
10003458  ds "PostQuitMessage"
10003468  dw 90h
1000346a  ds "DispatchMessageA"
; undefined 1 bytes at 1000347b
1000347c  dw 245h
1000347e  ds "TranslateMessage"
; undefined 1 bytes at 1000348f
10003490  dw 115h
10003492  ds "GetMessageA"
1000349e  dw 55h
100034a0  ds "CreateWindowExA"
100034b0  dw 1BEh
100034b2  ds "RegisterClassA"
; undefined 1 bytes at 100034c1
100034c2  dw 172h
100034c4  ds "LoadCursorA"
100034d0  dw 80h
100034d2  ds "DefWindowProcA"
; undefined 1 bytes at 100034e1
100034e2  dw 1D3h
100034e4  ds "ScreenToClient"
; undefined 1 bytes at 100034f3
100034f4  dw 13Dh
100034f6  ds "GetWindowRect"
10003504  dw CCh
10003506  ds "FillRect"
; undefined 1 bytes at 1000350f
10003510  dw F1h
10003512  ds "GetDialogBaseUnits"
; undefined 1 bytes at 10003525
10003526  dw 19Dh
10003528  ds "MoveWindow"
; undefined 1 bytes at 10003533
10003534  dw 1CDh
10003536  ds "ReleaseDC"
10003540  dw E4h
10003542  ds "GetClientRect"
10003550  dw EEh
10003552  ds "GetDC"
10003558  dw 129h
1000355a  ds "GetSysColor"
10003566  dw B8h
10003568  ds "EnumChildWindows"
; undefined 1 bytes at 10003579
1000357a  dw 1DAh
1000357c  ds "SendMessageA"
; undefined 1 bytes at 10003589
1000358a  dw 11Dh
1000358c  ds "GetParent"
10003596  dw A4h
10003598  ds "DrawIcon"
; undefined 1 bytes at 100035a1
100035a2  ds "USER32.dll"
; undefined 1 bytes at 100035ad
100035ae  dw 46h
100035b0  ds "DeleteObject"
; undefined 1 bytes at 100035bd
100035be  dw 118h
100035c0  ds "LineTo"
; undefined 1 bytes at 100035c7
100035c8  dw 11Bh
100035ca  ds "MoveToEx"
; undefined 1 bytes at 100035d3
100035d4  dw 14Ah
100035d6  ds "SelectObject"
; undefined 1 bytes at 100035e3
100035e4  dw 37h
100035e6  ds "CreatePen"
100035f0  dw 17Fh
100035f2  ds "StretchDIBits"
10003600  dw 40h
10003602  ds "CreateSolidBrush"
; undefined 1 bytes at 10003613
10003614  dw 137h
10003616  ds "RealizePalette"
; undefined 1 bytes at 10003625
10003626  dw 14Bh
10003628  ds "SelectPalette"
10003636  dw 35h
10003638  ds "CreatePalette"
10003646  dw 2Ch
10003648  ds "CreateFontIndirectA"
1000365c  dw EAh
1000365e  ds "GetObjectA"
; undefined 1 bytes at 10003669
1000366a  dw 107h
1000366c  ds "GetTextExtentPointA"
10003680  dw 43h
10003682  ds "DeleteDC"
; undefined 1 bytes at 1000368b
1000368c  dw 17Eh
1000368e  ds "StretchBlt"
; undefined 1 bytes at 10003699
1000369a  dw 1Fh
1000369c  ds "CreateCompatibleDC"
; undefined 1 bytes at 100036af
100036b0  dw 1Eh
100036b2  ds "CreateCompatibleBitmap"
; undefined 1 bytes at 100036c9
100036ca  ds "GDI32.dll"
; undefined 12 bytes at 100036d4
100036e0  IMAGE_DIRECTORY_ENTRY_EXPORT 
10003708  ibo32 10001020
1000370c  ibo32 10001770
10003710  ibo32 10003739
10003714  ibo32 10003729
10003718  dw 0h
1000371a  dw 1h
1000371c  ds "WIZWIN32.dll"
10003729  ds "_ProgressDlg@16"
10003739  ds "Update"
; undefined 192 bytes at 10003740
10004000  undefined4 00000001h
; undefined 4 bytes at 10004004
10004008  undefined4 00000071h
1000400c  undefined4 00000008h
10004010  undefined4 0000000Eh
10004014  undefined4 00000006h
; undefined 156 bytes at 10004018
100040b4  undefined4 FFFFFFFFh
100040b8  ds "%d%% %s"
100040c0  ds "AnimateWindow"
; undefined 6 bytes at 100040ce
100040d4  undefined4 00000000h
100040d8  undefined4 00000000h
100040dc  undefined4 00000000h
100040e0  undefined4 00000000h
100040e4  undefined4 00000000h
100040e8  undefined4 00000000h
; undefined 4 bytes at 100040ec
100040f0  undefined4 00000000h
100040f4  undefined4 00000000h
100040f8  undefined4 00000000h
100040fc  undefined4 00000000h
10004100  undefined4 00000000h
; undefined 27 bytes at 10004104
1000411f  undefined1 00h
10004120  undefined1 00h
10004121  undefined1 00h
10004122  undefined1 00h
; undefined 60 bytes at 10004123
1000415f  undefined1 00h
10004160  undefined1 00h
10004161  undefined1 00h
10004162  undefined1 00h
; undefined 61 bytes at 10004163
100041a0  undefined4 00000000h
; undefined 27 bytes at 100041a4
100041bf  undefined1 00h
100041c0  undefined1 00h
100041c1  undefined1 00h
100041c2  undefined1 00h
; undefined 60 bytes at 100041c3
100041ff  undefined1 00h
10004200  undefined1 00h
10004201  undefined1 00h
10004202  undefined1 00h
; undefined 61 bytes at 10004203
10004240  undefined4 00000000h
10004244  undefined4 00000000h
10004248  undefined4 00000000h
; undefined 120 bytes at 1000424c
100042c4  undefined4 00000000h
100042c8  undefined4 00000000h
; undefined 20 bytes at 100042cc
100042e0  undefined1 00h
100042e1  undefined1 00h
100042e2  undefined1 00h
100042e3  undefined1 00h
; undefined 252 bytes at 100042e4
100043e0  undefined4 00000000h
100043e4  undefined4 00000000h
100043e8  undefined4 00000000h
100043ec  undefined4 00000000h
100043f0  undefined4 00000000h
100043f4  undefined4 00000000h
100043f8  undefined4 00000000h
; undefined 4 bytes at 100043fc
10004400  undefined4 00000000h
10004404  undefined4 00000000h
10004408  undefined4 00000000h
1000440c  undefined4 00000000h
; undefined 16 bytes at 10004410
10004420  undefined4 00000000h
10004424  undefined4 00000000h
10004428  undefined4 00000000h
1000442c  undefined4 00000000h
10004430  undefined4 00000000h
10004434  undefined4 00000000h
10004438  undefined4 00000000h
1000443c  undefined4 00000000h
10004440  undefined4 00000000h
10004444  undefined4 00000000h
10004448  undefined4 00000000h
; undefined 72 bytes at 1000444c
10004494  undefined4 00000000h
; undefined 16 bytes at 10004498
100044a8  undefined4 00000000h
; undefined 20 bytes at 100044ac
100044c0  undefined4 00000000h
100044c4  undefined4 00000000h
100044c8  undefined4 00000000h
100044cc  undefined4 00000000h
; undefined 16 bytes at 100044d0
10005000  IMAGE_RESOURCE_DIRECTORY 
10005010  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005018  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005020  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005028  IMAGE_RESOURCE_DIRECTORY 
10005038  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005040  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005048  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005050  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005058  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005060  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005068  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005070  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005078  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005080  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005088  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005090  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005098  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100050a0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100050a8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100050b0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100050b8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100050c0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100050c8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100050d0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100050d8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100050e0  IMAGE_RESOURCE_DIRECTORY 
100050f0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100050f8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005100  IMAGE_RESOURCE_DIRECTORY 
10005110  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005118  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005120  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005128  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005130  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005138  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005140  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005148  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005150  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005158  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005160  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005168  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005170  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005178  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005180  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005188  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005190  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005198  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100051a0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100051a8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100051b0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100051b8  IMAGE_RESOURCE_DIRECTORY 
100051c8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100051d0  IMAGE_RESOURCE_DIRECTORY 
100051e0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100051e8  IMAGE_RESOURCE_DIRECTORY 
100051f8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005200  IMAGE_RESOURCE_DIRECTORY 
10005210  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005218  IMAGE_RESOURCE_DIRECTORY 
10005228  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005230  IMAGE_RESOURCE_DIRECTORY 
10005240  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005248  IMAGE_RESOURCE_DIRECTORY 
10005258  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005260  IMAGE_RESOURCE_DIRECTORY 
10005270  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005278  IMAGE_RESOURCE_DIRECTORY 
10005288  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005290  IMAGE_RESOURCE_DIRECTORY 
100052a0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100052a8  IMAGE_RESOURCE_DIRECTORY 
100052b8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100052c0  IMAGE_RESOURCE_DIRECTORY 
100052d0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100052d8  IMAGE_RESOURCE_DIRECTORY 
100052e8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100052f0  IMAGE_RESOURCE_DIRECTORY 
10005300  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005308  IMAGE_RESOURCE_DIRECTORY 
10005318  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005320  IMAGE_RESOURCE_DIRECTORY 
10005330  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005338  IMAGE_RESOURCE_DIRECTORY 
10005348  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005350  IMAGE_RESOURCE_DIRECTORY 
10005360  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005368  IMAGE_RESOURCE_DIRECTORY 
10005378  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005380  IMAGE_RESOURCE_DIRECTORY 
10005390  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005398  IMAGE_RESOURCE_DIRECTORY 
100053a8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100053b0  IMAGE_RESOURCE_DIRECTORY 
100053c0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100053c8  IMAGE_RESOURCE_DIRECTORY 
100053d8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100053e0  IMAGE_RESOURCE_DIRECTORY 
100053f0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100053f8  IMAGE_RESOURCE_DIRECTORY 
10005408  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005410  IMAGE_RESOURCE_DIRECTORY 
10005420  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005428  IMAGE_RESOURCE_DIRECTORY 
10005438  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005440  IMAGE_RESOURCE_DIRECTORY 
10005450  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005458  IMAGE_RESOURCE_DIRECTORY 
10005468  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005470  IMAGE_RESOURCE_DIRECTORY 
10005480  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005488  IMAGE_RESOURCE_DIRECTORY 
10005498  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100054a0  IMAGE_RESOURCE_DIRECTORY 
100054b0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100054b8  IMAGE_RESOURCE_DIRECTORY 
100054c8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100054d0  IMAGE_RESOURCE_DIRECTORY 
100054e0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100054e8  IMAGE_RESOURCE_DIRECTORY 
100054f8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005500  IMAGE_RESOURCE_DIRECTORY 
10005510  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005518  IMAGE_RESOURCE_DIRECTORY 
10005528  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005530  IMAGE_RESOURCE_DIRECTORY 
10005540  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005548  IMAGE_RESOURCE_DIRECTORY 
10005558  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005560  IMAGE_RESOURCE_DIRECTORY 
10005570  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005578  IMAGE_RESOURCE_DIRECTORY 
10005588  IMAGE_RESOURCE_DIRECTORY_ENTRY 
10005590  IMAGE_RESOURCE_DIRECTORY 
100055a0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100055a8  IMAGE_RESOURCE_DIRECTORY 
100055b8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100055c0  IMAGE_RESOURCE_DIRECTORY 
100055d0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
100055d8  IMAGE_RESOURCE_DATA_ENTRY 
100055e8  IMAGE_RESOURCE_DATA_ENTRY 
100055f8  IMAGE_RESOURCE_DATA_ENTRY 
10005608  IMAGE_RESOURCE_DATA_ENTRY 
10005618  IMAGE_RESOURCE_DATA_ENTRY 
10005628  IMAGE_RESOURCE_DATA_ENTRY 
10005638  IMAGE_RESOURCE_DATA_ENTRY 
10005648  IMAGE_RESOURCE_DATA_ENTRY 
10005658  IMAGE_RESOURCE_DATA_ENTRY 
10005668  IMAGE_RESOURCE_DATA_ENTRY 
10005678  IMAGE_RESOURCE_DATA_ENTRY 
10005688  IMAGE_RESOURCE_DATA_ENTRY 
10005698  IMAGE_RESOURCE_DATA_ENTRY 
100056a8  IMAGE_RESOURCE_DATA_ENTRY 
100056b8  IMAGE_RESOURCE_DATA_ENTRY 
100056c8  IMAGE_RESOURCE_DATA_ENTRY 
100056d8  IMAGE_RESOURCE_DATA_ENTRY 
100056e8  IMAGE_RESOURCE_DATA_ENTRY 
100056f8  IMAGE_RESOURCE_DATA_ENTRY 
10005708  IMAGE_RESOURCE_DATA_ENTRY 
10005718  IMAGE_RESOURCE_DATA_ENTRY 
10005728  IMAGE_RESOURCE_DATA_ENTRY 
10005738  IMAGE_RESOURCE_DATA_ENTRY 
10005748  IMAGE_RESOURCE_DATA_ENTRY 
10005758  IMAGE_RESOURCE_DATA_ENTRY 
10005768  IMAGE_RESOURCE_DATA_ENTRY 
10005778  IMAGE_RESOURCE_DATA_ENTRY 
10005788  IMAGE_RESOURCE_DATA_ENTRY 
10005798  IMAGE_RESOURCE_DATA_ENTRY 
100057a8  IMAGE_RESOURCE_DATA_ENTRY 
100057b8  IMAGE_RESOURCE_DATA_ENTRY 
100057c8  IMAGE_RESOURCE_DATA_ENTRY 
100057d8  IMAGE_RESOURCE_DATA_ENTRY 
100057e8  IMAGE_RESOURCE_DATA_ENTRY 
100057f8  IMAGE_RESOURCE_DATA_ENTRY 
10005808  IMAGE_RESOURCE_DATA_ENTRY 
10005818  IMAGE_RESOURCE_DATA_ENTRY 
10005828  IMAGE_RESOURCE_DATA_ENTRY 
10005838  IMAGE_RESOURCE_DATA_ENTRY 
10005848  IMAGE_RESOURCE_DATA_ENTRY 
10005858  IMAGE_RESOURCE_DATA_ENTRY 
10005868  IMAGE_RESOURCE_DATA_ENTRY 
10005878  IMAGE_RESOURCE_DATA_ENTRY 
10005888  IMAGE_RESOURCE_DATA_ENTRY 
; undefined 8 bytes at 10005898
Rsrc_Dialog_602_409:
100058a0  DialogRes <Dialog-Resource>
; undefined 2 bytes at 10005a76
Rsrc_Dialog_603_409:
10005a78  DialogRes <Dialog-Resource>
; undefined 2 bytes at 10005c4e
Rsrc_Icon_1_409:
10005c50  IconRes <Icon-Image>
Rsrc_GroupIcon_6f_409:
10005f38  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 10005f4c
Rsrc_Icon_2_409:
10005f50  IconRes <Icon-Image>
Rsrc_GroupIcon_70_409:
10006238  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 1000624c
Rsrc_Icon_3_409:
10006250  IconRes <Icon-Image>
Rsrc_GroupIcon_71_409:
10006538  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 1000654c
Rsrc_Icon_4_409:
10006550  IconRes <Icon-Image>
Rsrc_GroupIcon_72_409:
10006838  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 1000684c
Rsrc_Icon_5_409:
10006850  IconRes <Icon-Image>
Rsrc_GroupIcon_73_409:
10006b38  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 10006b4c
Rsrc_Icon_6_409:
10006b50  IconRes <Icon-Image>
Rsrc_GroupIcon_74_409:
10006e38  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 10006e4c
Rsrc_Icon_7_409:
10006e50  IconRes <Icon-Image>
Rsrc_GroupIcon_75_409:
10007138  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 1000714c
Rsrc_Icon_8_409:
10007150  IconRes <Icon-Image>
Rsrc_GroupIcon_76_409:
10007438  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 1000744c
Rsrc_Icon_9_409:
10007450  IconRes <Icon-Image>
Rsrc_GroupIcon_77_409:
10007738  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 1000774c
Rsrc_Icon_a_409:
10007750  IconRes <Icon-Image>
Rsrc_GroupIcon_78_409:
10007a38  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 10007a4c
Rsrc_Icon_b_409:
10007a50  IconRes <Icon-Image>
Rsrc_GroupIcon_79_409:
10007d38  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 10007d4c
Rsrc_Icon_c_409:
10007d50  IconRes <Icon-Image>
Rsrc_GroupIcon_7a_409:
10008038  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 1000804c
Rsrc_Icon_d_409:
10008050  IconRes <Icon-Image>
Rsrc_GroupIcon_7b_409:
10008338  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 1000834c
Rsrc_Icon_e_409:
10008350  IconRes <Icon-Image>
Rsrc_GroupIcon_7c_409:
10008638  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 1000864c
Rsrc_Icon_f_409:
10008650  IconRes <Icon-Image>
Rsrc_GroupIcon_7d_409:
10008938  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 1000894c
Rsrc_Icon_10_409:
10008950  IconRes <Icon-Image>
Rsrc_GroupIcon_7e_409:
10008c38  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 10008c4c
Rsrc_Icon_11_409:
10008c50  IconRes <Icon-Image>
Rsrc_GroupIcon_7f_409:
10008f38  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 10008f4c
Rsrc_Icon_12_409:
10008f50  IconRes <Icon-Image>
Rsrc_GroupIcon_80_409:
10009238  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 1000924c
Rsrc_Icon_13_409:
10009250  IconRes <Icon-Image>
Rsrc_GroupIcon_81_409:
10009538  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 1000954c
Rsrc_Icon_14_409:
10009550  IconRes <Icon-Image>
Rsrc_GroupIcon_82_409:
10009838  GroupIconRes <GroupIcon-Resource>
; undefined 4 bytes at 1000984c
Rsrc_Icon_15_409:
10009850  IconRes <Icon-Image>
Rsrc_GroupIcon_83_409:
10009b38  GroupIconRes <GroupIcon-Resource>
; undefined 180 bytes at 10009b4c
1000a000  IMAGE_BASE_RELOCATION 
1000a008  dw 3013h
1000a00a  dw 303Ah
1000a00c  dw 3047h
1000a00e  dw 304Fh
1000a010  dw 3059h
1000a012  dw 3066h
1000a014  dw 306Bh
1000a016  dw 3071h
1000a018  dw 308Ah
1000a01a  dw 3096h
1000a01c  dw 309Fh
1000a01e  dw 30AAh
1000a020  dw 30B8h
1000a022  dw 30C6h
1000a024  dw 30CBh
1000a026  dw 30D5h
1000a028  dw 30EFh
1000a02a  dw 30F5h
1000a02c  dw 30FBh
1000a02e  dw 3103h
1000a030  dw 310Ch
1000a032  dw 3117h
1000a034  dw 3123h
1000a036  dw 3134h
1000a038  dw 313Eh
1000a03a  dw 3144h
1000a03c  dw 3156h
1000a03e  dw 315Dh
1000a040  dw 3165h
1000a042  dw 316Bh
1000a044  dw 3182h
1000a046  dw 3188h
1000a048  dw 319Fh
1000a04a  dw 31A5h
1000a04c  dw 31B9h
1000a04e  dw 31BFh
1000a050  dw 31D4h
1000a052  dw 31DDh
1000a054  dw 31E4h
1000a056  dw 31F2h
1000a058  dw 320Dh
1000a05a  dw 3214h
1000a05c  dw 321Ah
1000a05e  dw 322Ah
1000a060  dw 3240h
1000a062  dw 3247h
1000a064  dw 3251h
1000a066  dw 3256h
1000a068  dw 325Eh
1000a06a  dw 3269h
1000a06c  dw 3272h
1000a06e  dw 3277h
1000a070  dw 327Dh
1000a072  dw 3285h
1000a074  dw 3297h
1000a076  dw 329Ch
1000a078  dw 32A1h
1000a07a  dw 32BFh
1000a07c  dw 32CAh
1000a07e  dw 32D3h
1000a080  dw 32D9h
1000a082  dw 32DEh
1000a084  dw 32E6h
1000a086  dw 32EBh
1000a088  dw 32F5h
1000a08a  dw 32FBh
1000a08c  dw 3307h
1000a08e  dw 3316h
1000a090  dw 331Ch
1000a092  dw 3325h
1000a094  dw 3334h
1000a096  dw 333Ah
1000a098  dw 3345h
1000a09a  dw 3355h
1000a09c  dw 335Fh
1000a09e  dw 336Bh
1000a0a0  dw 3373h
1000a0a2  dw 337Eh
1000a0a4  dw 3387h
1000a0a6  dw 338Dh
1000a0a8  dw 3397h
1000a0aa  dw 33A1h
1000a0ac  dw 33B6h
1000a0ae  dw 33BCh
1000a0b0  dw 33D4h
1000a0b2  dw 33E9h
1000a0b4  dw 33F3h
1000a0b6  dw 33FFh
1000a0b8  dw 341Ah
1000a0ba  dw 3420h
1000a0bc  dw 3425h
1000a0be  dw 3431h
1000a0c0  dw 343Dh
1000a0c2  dw 3445h
1000a0c4  dw 344Bh
1000a0c6  dw 34A1h
1000a0c8  dw 34D7h
1000a0ca  dw 34E4h
1000a0cc  dw 34FDh
1000a0ce  dw 350Bh
1000a0d0  dw 351Dh
1000a0d2  dw 3571h
1000a0d4  dw 3592h
1000a0d6  dw 35A7h
1000a0d8  dw 35AEh
1000a0da  dw 35B3h
1000a0dc  dw 35D0h
1000a0de  dw 35D5h
1000a0e0  dw 35DBh
1000a0e2  dw 35E1h
1000a0e4  dw 35E7h
1000a0e6  dw 35F4h
1000a0e8  dw 3602h
1000a0ea  dw 3611h
1000a0ec  dw 361Dh
1000a0ee  dw 3622h
1000a0f0  dw 3628h
1000a0f2  dw 3635h
1000a0f4  dw 3643h
1000a0f6  dw 3666h
1000a0f8  dw 3670h
1000a0fa  dw 3679h
1000a0fc  dw 367Eh
1000a0fe  dw 368Bh
1000a100  dw 3699h
1000a102  dw 36A4h
1000a104  dw 36ADh
1000a106  dw 36B3h
1000a108  dw 36D3h
1000a10a  dw 36E3h
1000a10c  dw 36E9h
1000a10e  dw 36F2h
1000a110  dw 36F7h
1000a112  dw 36FDh
1000a114  dw 3709h
1000a116  dw 3715h
1000a118  dw 371Eh
1000a11a  dw 3724h
1000a11c  dw 372Bh
1000a11e  dw 3731h
1000a120  dw 3736h
1000a122  dw 3748h
1000a124  dw 3760h
1000a126  dw 3764h
1000a128  dw 3768h
1000a12a  dw 376Ch
1000a12c  dw 379Bh
1000a12e  dw 37A9h
1000a130  dw 37B2h
1000a132  dw 37BEh
1000a134  dw 37C7h
1000a136  dw 37D2h
1000a138  dw 37EEh
1000a13a  dw 380Ah
1000a13c  dw 381Dh
1000a13e  dw 3859h
1000a140  dw 3862h
1000a142  dw 386Ah
1000a144  dw 3879h
1000a146  dw 3880h
1000a148  dw 3887h
1000a14a  dw 389Bh
1000a14c  dw 38A0h
1000a14e  dw 38B4h
1000a150  dw 38CAh
1000a152  dw 38E0h
1000a154  dw 38FDh
1000a156  dw 3903h
1000a158  dw 3909h
1000a15a  dw 390Eh
1000a15c  dw 3914h
1000a15e  dw 391Dh
1000a160  dw 3923h
1000a162  dw 392Dh
1000a164  dw 393Eh
1000a166  dw 3945h
1000a168  dw 3961h
1000a16a  dw 3968h
1000a16c  dw 3977h
1000a16e  dw 3985h
1000a170  dw 3990h
1000a172  dw 39A7h
1000a174  dw 39B1h
1000a176  dw 39BAh
1000a178  dw 39C0h
1000a17a  dw 39D2h
1000a17c  dw 39E1h
1000a17e  dw 3A17h
1000a180  dw 3A32h
1000a182  dw 3A47h
1000a184  dw 3A6Fh
1000a186  dw 3A75h
1000a188  dw 3A85h
1000a18a  dw 3A8Fh
1000a18c  dw 3A94h
1000a18e  dw 3AA3h
1000a190  dw 3AADh
1000a192  dw 3AB6h
1000a194  dw 3AC1h
1000a196  dw 3AC8h
1000a198  dw 3ACFh
1000a19a  dw 3AE1h
1000a19c  dw 3B01h
1000a19e  dw 3B07h
1000a1a0  dw 3B0Dh
1000a1a2  dw 3B15h
1000a1a4  dw 3B1Bh
1000a1a6  dw 3B24h
1000a1a8  dw 3B2Ah
1000a1aa  dw 3B2Fh
1000a1ac  dw 3B44h
1000a1ae  dw 3B50h
1000a1b0  dw 3B55h
1000a1b2  dw 3B5Ch
1000a1b4  dw 3B62h
1000a1b6  dw 3B68h
1000a1b8  dw 3B72h
1000a1ba  dw 3B82h
1000a1bc  dw 3B8Fh
1000a1be  dw 3B97h
1000a1c0  dw 3B9Ch
1000a1c2  dw 3BA1h
1000a1c4  dw 3BB1h
1000a1c6  dw 3BC6h
1000a1c8  dw 3BD6h
1000a1ca  dw 3BDBh
1000a1cc  dw 3BF3h
1000a1ce  dw 3C29h
1000a1d0  dw 3C37h
1000a1d2  dw 3C42h
1000a1d4  dw 3C48h
1000a1d6  dw 3C50h
1000a1d8  dw 3C55h
1000a1da  dw 3C5Bh
1000a1dc  dw 3C63h
1000a1de  dw 3C68h
1000a1e0  dw 3C81h
1000a1e2  dw 3C8Ch
1000a1e4  dw 3C94h
1000a1e6  dw 3C9Bh
1000a1e8  dw 3CA2h
1000a1ea  dw 3CA8h
1000a1ec  dw 3CAEh
1000a1ee  dw 3CB3h
1000a1f0  dw 3CD1h
1000a1f2  dw 3CE0h
1000a1f4  dw 3CEAh
1000a1f6  dw 3CF0h
1000a1f8  dw 3D12h
1000a1fa  dw 3D18h
1000a1fc  dw 3D1Eh
1000a1fe  dw 3D2Dh
1000a200  dw 3D32h
1000a202  dw 3D38h
1000a204  dw 3D3Eh
1000a206  dw 3D49h
1000a208  dw 3D4Eh
1000a20a  dw 3D5Bh
1000a20c  dw 3D61h
1000a20e  dw 3D67h
1000a210  dw 3D71h
1000a212  dw 3D77h
1000a214  dw 3D88h
1000a216  dw 3D8Eh
1000a218  dw 3DDDh
1000a21a  dw 3DE8h
1000a21c  dw 3E2Ah
1000a21e  dw 3E49h
1000a220  dw 3E54h
1000a222  dw 3E5Bh
1000a224  dw 3E78h
1000a226  dw 3E7Fh
1000a228  dw 3EA3h
1000a22a  dw 3EC2h
1000a22c  dw 3ED2h
1000a22e  dw 3ED8h
1000a230  dw 3F5Fh
1000a232  dw 3F70h
1000a234  dw 3F92h
1000a236  dw 3FA6h
1000a238  dw 3FB4h
1000a23a  dw 0h
1000a23c  IMAGE_BASE_RELOCATION 
1000a244  dw 3030h
1000a246  dw 3041h
1000a248  dw 3053h
1000a24a  dw 3089h
1000a24c  dw 3092h
1000a24e  dw 3098h
1000a250  dw 309Eh
1000a252  dw 30EDh
1000a254  dw 30F4h
1000a256  dw 3102h
1000a258  dw 311Eh
1000a25a  dw 317Ah
1000a25c  dw 3180h
1000a25e  dw 318Bh
1000a260  dw 3192h
1000a262  dw 31A1h
1000a264  dw 31C1h
1000a266  dw 320Ah
1000a268  dw 320Fh
1000a26a  dw 321Dh
1000a26c  dw 3223h
1000a26e  dw 3235h
1000a270  dw 324Ch
1000a272  dw 3251h
1000a274  dw 3258h
1000a276  dw 3262h
1000a278  dw 3269h
1000a27a  dw 3292h
1000a27c  dw 3299h
1000a27e  dw 329Fh
1000a280  dw 331Ah
1000a282  dw 332Ah
1000a284  dw 338Ah
1000a286  dw 339Dh
1000a288  dw 33C7h
1000a28a  dw 33E2h
1000a28c  dw 33EFh
1000a28e  dw 33FDh
1000a290  dw 3407h
1000a292  dw 341Fh
1000a294  dw 3447h
1000a296  dw 34CCh
1000a298  dw 34E6h
1000a29a  dw 350Eh
1000a29c  dw 353Eh
1000a29e  dw 354Dh
1000a2a0  dw 356Bh
1000a2a2  dw 3572h
1000a2a4  dw 357Eh
1000a2a6  dw 3584h
1000a2a8  dw 358Ah
1000a2aa  dw 3590h
1000a2ac  dw 3597h
1000a2ae  dw 35AAh
1000a2b0  dw 35BFh
1000a2b2  dw 35D1h
1000a2b4  dw 35D7h
1000a2b6  dw 35DDh
1000a2b8  dw 35E3h
1000a2ba  dw 35F7h
1000a2bc  dw 360Fh
1000a2be  dw 3627h
1000a2c0  dw 3637h
1000a2c2  dw 363Ch
1000a2c4  dw 3651h
1000a2c6  dw 366Bh
1000a2c8  dw 3674h
1000a2ca  dw 367Ah
1000a2cc  dw 368Dh
1000a2ce  dw 3696h
1000a2d0  dw 369Dh
1000a2d2  dw 36B2h
1000a2d4  dw 36C7h
1000a2d6  dw 36CDh
1000a2d8  dw 36D3h
1000a2da  dw 36D9h
1000a2dc  dw 36F8h
1000a2de  dw 3704h
1000a2e0  dw 370Eh
1000a2e2  dw 371Fh
1000a2e4  dw 373Eh
1000a2e6  dw 3769h
1000a2e8  dw 37A8h
1000a2ea  dw 37FCh
1000a2ec  dw 383Bh
1000a2ee  dw 0h
; undefined 272 bytes at 1000a2f0
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
