; Ghidra listing for CURSORS.C32 (x86:LE:32:default). Labels and types are tool-generated unless they came from the binary.
15000000  IMAGE_DOS_HEADER 
15000080  IMAGE_NT_HEADERS32 
15000178  IMAGE_SECTION_HEADER 
150001a0  IMAGE_SECTION_HEADER 
150001c8  IMAGE_SECTION_HEADER 
150001f0  IMAGE_SECTION_HEADER 
15000218  IMAGE_SECTION_HEADER 
15000240  IMAGE_SECTION_HEADER 
; undefined 408 bytes at 15000268

; ==== FUNCTION _WEP entry=15001000 sig=undefined4 __stdcall _WEP(void)
15001000  b801000000           MOV EAX,0x1
15001005  c20400               RET 0x4
; undefined 8 bytes at 15001008

; ==== FUNCTION FUN_15001010 entry=15001010 sig=undefined4 __stdcall FUN_15001010(undefined4 param_1, int param_2)
15001010  8b442408             MOV EAX,dword ptr [ESP + 0x8]
15001014  83f801               CMP EAX,0x1
15001017  0f85ec000000         JNZ 0x15001109
1500101d  ff15dc700015         CALL dword ptr [0x150070dc]
15001023  833d4450001500       CMP dword ptr [0x15005044],0x0
1500102a  a34c500015           MOV [0x1500504c],EAX
1500102f  753e                 JNZ 0x1500106f
15001031  3c03                 CMP AL,0x3
15001033  7511                 JNZ 0x15001046
15001035  a900000080           TEST EAX,0x80000000
1500103a  740a                 JZ 0x15001046
1500103c  6a02                 PUSH 0x2
1500103e  e8dd0f0000           CALL 0x15002020
15001043  83c404               ADD ESP,0x4
15001046  6808400015           PUSH 0x15004008
1500104b  ff15d8700015         CALL dword ptr [0x150070d8]
15001051  85c0                 TEST EAX,EAX
15001053  741a                 JZ 0x1500106f
15001055  6800400015           PUSH 0x15004000
1500105a  50                   PUSH EAX
1500105b  ff15d4700015         CALL dword ptr [0x150070d4]
15001061  85c0                 TEST EAX,EAX
15001063  740a                 JZ 0x1500106f
15001065  6a01                 PUSH 0x1
15001067  e8b40f0000           CALL 0x15002020
1500106c  83c404               ADD ESP,0x4
1500106f  e82c050000           CALL 0x150015a0
15001074  33c9                 XOR ECX,ECX
15001076  8b154c500015         MOV EDX,dword ptr [0x1500504c]
1500107c  8ace                 MOV CL,DH
1500107e  8bc2                 MOV EAX,EDX
15001080  25ff000000           AND EAX,0xff
15001085  ff0530500015         INC dword ptr [0x15005030]
1500108b  c1ea10               SHR EDX,0x10
1500108e  890d58500015         MOV dword ptr [0x15005058],ECX
15001094  a354500015           MOV [0x15005054],EAX
15001099  89154c500015         MOV dword ptr [0x1500504c],EDX
1500109f  c1e008               SHL EAX,0x8
150010a2  03c1                 ADD EAX,ECX
150010a4  a350500015           MOV [0x15005050],EAX
150010a9  e822030000           CALL 0x150013d0
150010ae  85c0                 TEST EAX,EAX
150010b0  750a                 JNZ 0x150010bc
150010b2  e809050000           CALL 0x150015c0
150010b7  33c0                 XOR EAX,EAX
150010b9  c20c00               RET 0xc
150010bc  ff1528710015         CALL dword ptr [0x15007128]
150010c2  a3646b0015           MOV [0x15006b64],EAX
150010c7  e8b40d0000           CALL 0x15001e80
150010cc  833d646b001500       CMP dword ptr [0x15006b64],0x0
150010d3  a334500015           MOV [0x15005034],EAX
150010d8  7425                 JZ 0x150010ff
150010da  85c0                 TEST EAX,EAX
150010dc  7421                 JZ 0x150010ff
150010de  e8ed040000           CALL 0x150015d0
150010e3  e8880d0000           CALL 0x15001e70
150010e8  e803080000           CALL 0x150018f0
150010ed  e81e070000           CALL 0x15001810
150010f2  e879010000           CALL 0x15001270
150010f7  b801000000           MOV EAX,0x1
150010fc  c20c00               RET 0xc
150010ff  e8bc040000           CALL 0x150015c0
15001104  33c0                 XOR EAX,EAX
15001106  c20c00               RET 0xc
15001109  85c0                 TEST EAX,EAX
1500110b  7539                 JNZ 0x15001146
1500110d  a130500015           MOV EAX,[0x15005030]
15001112  85c0                 TEST EAX,EAX
15001114  7e2b                 JLE 0x15001141
15001116  48                   DEC EAX
15001117  833d8450001500       CMP dword ptr [0x15005084],0x0
1500111e  a330500015           MOV [0x15005030],EAX
15001123  7505                 JNZ 0x1500112a
15001125  e896010000           CALL 0x150012c0
1500112a  e881060000           CALL 0x150017b0
1500112f  e8fc020000           CALL 0x15001430
15001134  e887040000           CALL 0x150015c0
15001139  b801000000           MOV EAX,0x1
1500113e  c20c00               RET 0xc
15001141  33c0                 XOR EAX,EAX
15001143  c20c00               RET 0xc
15001146  83f803               CMP EAX,0x3
15001149  750a                 JNZ 0x15001155
1500114b  6a00                 PUSH 0x0
1500114d  e89e030000           CALL 0x150014f0
15001152  83c404               ADD ESP,0x4
15001155  b801000000           MOV EAX,0x1
1500115a  c20c00               RET 0xc
; undefined 3 bytes at 1500115d

; ==== FUNCTION entry entry=15001160 sig=int __stdcall entry(undefined4 param_1, int param_2, undefined4 param_3)
15001160  53                   PUSH EBX
15001161  56                   PUSH ESI
15001162  57                   PUSH EDI
15001163  bb01000000           MOV EBX,0x1
15001168  8b7c2414             MOV EDI,dword ptr [ESP + 0x14]
1500116c  55                   PUSH EBP
1500116d  3bfb                 CMP EDI,EBX
1500116f  752a                 JNZ 0x1500119b
15001171  011d30500015         ADD dword ptr [0x15005030],EBX
15001177  83ff01               CMP EDI,0x1
1500117a  7405                 JZ 0x15001181
1500117c  83ff02               CMP EDI,0x2
1500117f  754c                 JNZ 0x150011cd
15001181  a1686b0015           MOV EAX,[0x15006b68]
15001186  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
1500118a  85c0                 TEST EAX,EAX
1500118c  742b                 JZ 0x150011b9
1500118e  8b6c2414             MOV EBP,dword ptr [ESP + 0x14]
15001192  56                   PUSH ESI
15001193  57                   PUSH EDI
15001194  55                   PUSH EBP
15001195  ffd0                 CALL EAX
15001197  8bd8                 MOV EBX,EAX
15001199  eb22                 JMP 0x150011bd
1500119b  85ff                 TEST EDI,EDI
1500119d  75d8                 JNZ 0x15001177
1500119f  a130500015           MOV EAX,[0x15005030]
150011a4  85c0                 TEST EAX,EAX
150011a6  7e08                 JLE 0x150011b0
150011a8  48                   DEC EAX
150011a9  a330500015           MOV [0x15005030],EAX
150011ae  ebc7                 JMP 0x15001177
150011b0  33c0                 XOR EAX,EAX
150011b2  5d                   POP EBP
150011b3  5f                   POP EDI
150011b4  5e                   POP ESI
150011b5  5b                   POP EBX
150011b6  c20c00               RET 0xc
150011b9  8b6c2414             MOV EBP,dword ptr [ESP + 0x14]
150011bd  85db                 TEST EBX,EBX
150011bf  7422                 JZ 0x150011e3
150011c1  56                   PUSH ESI
150011c2  57                   PUSH EDI
150011c3  55                   PUSH EBP
150011c4  e847feffff           CALL 0x15001010
150011c9  8bd8                 MOV EBX,EAX
150011cb  eb08                 JMP 0x150011d5
150011cd  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
150011d1  8b6c2414             MOV EBP,dword ptr [ESP + 0x14]
150011d5  85db                 TEST EBX,EBX
150011d7  740e                 JZ 0x150011e7
150011d9  56                   PUSH ESI
150011da  57                   PUSH EDI
150011db  55                   PUSH EBP
150011dc  e84f0e0000           CALL 0x15002030
150011e1  8bd8                 MOV EBX,EAX
150011e3  85db                 TEST EBX,EBX
150011e5  750f                 JNZ 0x150011f6
150011e7  83ff01               CMP EDI,0x1
150011ea  750a                 JNZ 0x150011f6
150011ec  e83f020000           CALL 0x15001430
150011f1  e8ca030000           CALL 0x150015c0
150011f6  85ff                 TEST EDI,EDI
150011f8  7405                 JZ 0x150011ff
150011fa  83ff03               CMP EDI,0x3
150011fd  7522                 JNZ 0x15001221
150011ff  56                   PUSH ESI
15001200  57                   PUSH EDI
15001201  55                   PUSH EBP
15001202  e809feffff           CALL 0x15001010
15001207  85c0                 TEST EAX,EAX
15001209  7502                 JNZ 0x1500120d
1500120b  33db                 XOR EBX,EBX
1500120d  85db                 TEST EBX,EBX
1500120f  7410                 JZ 0x15001221
15001211  a1686b0015           MOV EAX,[0x15006b68]
15001216  85c0                 TEST EAX,EAX
15001218  7407                 JZ 0x15001221
1500121a  56                   PUSH ESI
1500121b  57                   PUSH EDI
1500121c  55                   PUSH EBP
1500121d  ffd0                 CALL EAX
1500121f  8bd8                 MOV EBX,EAX
15001221  8bc3                 MOV EAX,EBX
15001223  5d                   POP EBP
15001224  5f                   POP EDI
15001225  5e                   POP ESI
15001226  5b                   POP EBX
15001227  c20c00               RET 0xc
; undefined 6 bytes at 1500122a

; ==== FUNCTION __amsg_exit entry=15001230 sig=void __cdecl __amsg_exit(int param_1)
15001230  a140500015           MOV EAX,[0x15005040]
15001235  83f801               CMP EAX,0x1
15001238  740d                 JZ 0x15001247
1500123a  85c0                 TEST EAX,EAX
1500123c  750e                 JNZ 0x1500124c
1500123e  833d4450001501       CMP dword ptr [0x15005044],0x1
15001245  7505                 JNZ 0x1500124c
15001247  e8f40d0000           CALL 0x15002040
1500124c  8b442404             MOV EAX,dword ptr [ESP + 0x4]
15001250  50                   PUSH EAX
15001251  e82a0e0000           CALL 0x15002080
15001256  83c404               ADD ESP,0x4
15001259  68ff000000           PUSH 0xff
1500125e  ff153c500015         CALL dword ptr [0x1500503c]
15001264  83c404               ADD ESP,0x4
15001267  c3                   RET
; undefined 8 bytes at 15001268

; ==== FUNCTION __cinit entry=15001270 sig=int __cdecl __cinit(int param_1)
15001270  a1606b0015           MOV EAX,[0x15006b60]
15001275  85c0                 TEST EAX,EAX
15001277  7402                 JZ 0x1500127b
15001279  ffd0                 CALL EAX
1500127b  6810500015           PUSH 0x15005010
15001280  6808500015           PUSH 0x15005008
15001285  e826010000           CALL 0x150013b0
1500128a  83c408               ADD ESP,0x8
1500128d  6804500015           PUSH 0x15005004
15001292  6800500015           PUSH 0x15005000
15001297  e814010000           CALL 0x150013b0
1500129c  83c408               ADD ESP,0x8
1500129f  c3                   RET

; ==== FUNCTION __exit entry=150012a0 sig=noreturn void __cdecl __exit(int _Code)
150012a0  8b442404             MOV EAX,dword ptr [ESP + 0x4]
150012a4  6a00                 PUSH 0x0
150012a6  6a01                 PUSH 0x1
150012a8  50                   PUSH EAX
150012a9  e822000000           CALL 0x150012d0
150012ae  83c40c               ADD ESP,0xc
150012b1  c3                   RET
; undefined 14 bytes at 150012b2

; ==== FUNCTION FUN_150012c0 entry=150012c0 sig=undefined __stdcall FUN_150012c0(void)
150012c0  6a01                 PUSH 0x1
150012c2  6a00                 PUSH 0x0
150012c4  6a00                 PUSH 0x0
150012c6  e805000000           CALL 0x150012d0
150012cb  83c40c               ADD ESP,0xc
150012ce  c3                   RET
; undefined 1 bytes at 150012cf

; ==== FUNCTION FUN_150012d0 entry=150012d0 sig=undefined __cdecl FUN_150012d0(UINT param_1, int param_2, int param_3)
150012d0  53                   PUSH EBX
150012d1  56                   PUSH ESI
150012d2  57                   PUSH EDI
150012d3  e8b8000000           CALL 0x15001390
150012d8  833d8850001501       CMP dword ptr [0x15005088],0x1
150012df  8b742410             MOV ESI,dword ptr [ESP + 0x10]
150012e3  750e                 JNZ 0x150012f3
150012e5  56                   PUSH ESI
150012e6  ff15e8700015         CALL dword ptr [0x150070e8]
150012ec  50                   PUSH EAX
150012ed  ff15e4700015         CALL dword ptr [0x150070e4]
150012f3  c7058450001501000000 MOV dword ptr [0x15005084],0x1
150012fd  837c241400           CMP dword ptr [ESP + 0x14],0x0
15001302  8b5c2418             MOV EBX,dword ptr [ESP + 0x18]
15001306  881d80500015         MOV byte ptr [0x15005080],BL
1500130c  753f                 JNZ 0x1500134d
1500130e  833d5c6b001500       CMP dword ptr [0x15006b5c],0x0
15001315  7424                 JZ 0x1500133b
15001317  8b3d586b0015         MOV EDI,dword ptr [0x15006b58]
1500131d  83ef04               SUB EDI,0x4
15001320  393d5c6b0015         CMP dword ptr [0x15006b5c],EDI
15001326  7713                 JA 0x1500133b
15001328  8b07                 MOV EAX,dword ptr [EDI]
1500132a  85c0                 TEST EAX,EAX
1500132c  7402                 JZ 0x15001330
1500132e  ffd0                 CALL EAX
15001330  83ef04               SUB EDI,0x4
15001333  393d5c6b0015         CMP dword ptr [0x15006b5c],EDI
15001339  76ed                 JBE 0x15001328
1500133b  681c500015           PUSH 0x1500501c
15001340  6814500015           PUSH 0x15005014
15001345  e866000000           CALL 0x150013b0
1500134a  83c408               ADD ESP,0x8
1500134d  6824500015           PUSH 0x15005024
15001352  6820500015           PUSH 0x15005020
15001357  e854000000           CALL 0x150013b0
1500135c  83c408               ADD ESP,0x8
1500135f  85db                 TEST EBX,EBX
15001361  7409                 JZ 0x1500136c
15001363  e838000000           CALL 0x150013a0
15001368  5f                   POP EDI
15001369  5e                   POP ESI
1500136a  5b                   POP EBX
1500136b  c3                   RET
1500136c  c7058850001501000000 MOV dword ptr [0x15005088],0x1
15001376  56                   PUSH ESI
15001377  ff15e0700015         CALL dword ptr [0x150070e0]
1500137d  5f                   POP EDI
1500137e  5e                   POP ESI
1500137f  5b                   POP EBX
15001380  c3                   RET
; undefined 15 bytes at 15001381

; ==== FUNCTION FUN_15001390 entry=15001390 sig=undefined __stdcall FUN_15001390(void)
15001390  6a0d                 PUSH 0xd
15001392  e8790f0000           CALL 0x15002310
15001397  83c404               ADD ESP,0x4
1500139a  c3                   RET
; undefined 5 bytes at 1500139b

; ==== FUNCTION FUN_150013a0 entry=150013a0 sig=undefined __stdcall FUN_150013a0(void)
150013a0  6a0d                 PUSH 0xd
150013a2  e8d90f0000           CALL 0x15002380
150013a7  83c404               ADD ESP,0x4
150013aa  c3                   RET
; undefined 5 bytes at 150013ab

; ==== FUNCTION __initterm entry=150013b0 sig=undefined __cdecl __initterm(undefined4 * param_1, undefined4 * param_2)
150013b0  56                   PUSH ESI
150013b1  57                   PUSH EDI
150013b2  8b7c2410             MOV EDI,dword ptr [ESP + 0x10]
150013b6  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
150013ba  3bfe                 CMP EDI,ESI
150013bc  760f                 JBE 0x150013cd
150013be  8b06                 MOV EAX,dword ptr [ESI]
150013c0  85c0                 TEST EAX,EAX
150013c2  7402                 JZ 0x150013c6
150013c4  ffd0                 CALL EAX
150013c6  83c604               ADD ESI,0x4
150013c9  3bfe                 CMP EDI,ESI
150013cb  77f1                 JA 0x150013be
150013cd  5f                   POP EDI
150013ce  5e                   POP ESI
150013cf  c3                   RET

; ==== FUNCTION __mtinit entry=150013d0 sig=int __cdecl __mtinit(void)
150013d0  56                   PUSH ESI
150013d1  e89a0e0000           CALL 0x15002270
150013d6  ff15f4700015         CALL dword ptr [0x150070f4]
150013dc  a38c500015           MOV [0x1500508c],EAX
150013e1  83f8ff               CMP EAX,-0x1
150013e4  7504                 JNZ 0x150013ea
150013e6  33c0                 XOR EAX,EAX
150013e8  5e                   POP ESI
150013e9  c3                   RET
150013ea  6a74                 PUSH 0x74
150013ec  6a01                 PUSH 0x1
150013ee  e88d100000           CALL 0x15002480
150013f3  83c408               ADD ESP,0x8
150013f6  8bf0                 MOV ESI,EAX
150013f8  85f6                 TEST ESI,ESI
150013fa  7430                 JZ 0x1500142c
150013fc  56                   PUSH ESI
150013fd  a18c500015           MOV EAX,[0x1500508c]
15001402  50                   PUSH EAX
15001403  ff15f0700015         CALL dword ptr [0x150070f0]
15001409  85c0                 TEST EAX,EAX
1500140b  741f                 JZ 0x1500142c
1500140d  56                   PUSH ESI
1500140e  e84d000000           CALL 0x15001460
15001413  83c404               ADD ESP,0x4
15001416  ff15ec700015         CALL dword ptr [0x150070ec]
1500141c  8906                 MOV dword ptr [ESI],EAX
1500141e  b801000000           MOV EAX,0x1
15001423  c74604ffffffff       MOV dword ptr [ESI + 0x4],0xffffffff
1500142a  5e                   POP ESI
1500142b  c3                   RET
1500142c  33c0                 XOR EAX,EAX
1500142e  5e                   POP ESI
1500142f  c3                   RET

; ==== FUNCTION __mtterm entry=15001430 sig=void __cdecl __mtterm(void)
15001430  e86b0e0000           CALL 0x150022a0
15001435  a18c500015           MOV EAX,[0x1500508c]
1500143a  83f8ff               CMP EAX,-0x1
1500143d  7411                 JZ 0x15001450
1500143f  50                   PUSH EAX
15001440  ff15f8700015         CALL dword ptr [0x150070f8]
15001446  c7058c500015ffffffff MOV dword ptr [0x1500508c],0xffffffff
15001450  c3                   RET
; undefined 15 bytes at 15001451

; ==== FUNCTION __initptd entry=15001460 sig=void __cdecl __initptd(_ptiddata _Ptd, pthreadlocinfo _Locale)
15001460  8b442404             MOV EAX,dword ptr [ESP + 0x4]
15001464  c7405030540015       MOV dword ptr [EAX + 0x50],0x15005430
1500146b  c7401401000000       MOV dword ptr [EAX + 0x14],0x1
15001472  c3                   RET
; undefined 13 bytes at 15001473

; ==== FUNCTION __getptd entry=15001480 sig=_ptiddata __cdecl __getptd(void)
15001480  56                   PUSH ESI
15001481  57                   PUSH EDI
15001482  ff1504710015         CALL dword ptr [0x15007104]
15001488  8bf0                 MOV ESI,EAX
1500148a  a18c500015           MOV EAX,[0x1500508c]
1500148f  50                   PUSH EAX
15001490  ff1500710015         CALL dword ptr [0x15007100]
15001496  8bf8                 MOV EDI,EAX
15001498  85ff                 TEST EDI,EDI
1500149a  7547                 JNZ 0x150014e3
1500149c  6a74                 PUSH 0x74
1500149e  6a01                 PUSH 0x1
150014a0  e8db0f0000           CALL 0x15002480
150014a5  83c408               ADD ESP,0x8
150014a8  8bf8                 MOV EDI,EAX
150014aa  85ff                 TEST EDI,EDI
150014ac  742b                 JZ 0x150014d9
150014ae  57                   PUSH EDI
150014af  a18c500015           MOV EAX,[0x1500508c]
150014b4  50                   PUSH EAX
150014b5  ff15f0700015         CALL dword ptr [0x150070f0]
150014bb  85c0                 TEST EAX,EAX
150014bd  741a                 JZ 0x150014d9
150014bf  57                   PUSH EDI
150014c0  e89bffffff           CALL 0x15001460
150014c5  83c404               ADD ESP,0x4
150014c8  ff15ec700015         CALL dword ptr [0x150070ec]
150014ce  8907                 MOV dword ptr [EDI],EAX
150014d0  c74704ffffffff       MOV dword ptr [EDI + 0x4],0xffffffff
150014d7  eb0a                 JMP 0x150014e3
150014d9  6a10                 PUSH 0x10
150014db  e850fdffff           CALL 0x15001230
150014e0  83c404               ADD ESP,0x4
150014e3  56                   PUSH ESI
150014e4  ff15fc700015         CALL dword ptr [0x150070fc]
150014ea  8bc7                 MOV EAX,EDI
150014ec  5f                   POP EDI
150014ed  5e                   POP ESI
150014ee  c3                   RET
; undefined 1 bytes at 150014ef

; ==== FUNCTION __freeptd entry=150014f0 sig=void __cdecl __freeptd(_ptiddata _Ptd)
150014f0  833d8c500015ff       CMP dword ptr [0x1500508c],-0x1
150014f7  56                   PUSH ESI
150014f8  0f8491000000         JZ 0x1500158f
150014fe  8b742408             MOV ESI,dword ptr [ESP + 0x8]
15001502  85f6                 TEST ESI,ESI
15001504  7512                 JNZ 0x15001518
15001506  a18c500015           MOV EAX,[0x1500508c]
1500150b  50                   PUSH EAX
1500150c  ff1500710015         CALL dword ptr [0x15007100]
15001512  8bf0                 MOV ESI,EAX
15001514  85f6                 TEST ESI,ESI
15001516  7469                 JZ 0x15001581
15001518  8b4624               MOV EAX,dword ptr [ESI + 0x24]
1500151b  85c0                 TEST EAX,EAX
1500151d  7409                 JZ 0x15001528
1500151f  50                   PUSH EAX
15001520  e8bb0f0000           CALL 0x150024e0
15001525  83c404               ADD ESP,0x4
15001528  8b4628               MOV EAX,dword ptr [ESI + 0x28]
1500152b  85c0                 TEST EAX,EAX
1500152d  7409                 JZ 0x15001538
1500152f  50                   PUSH EAX
15001530  e8ab0f0000           CALL 0x150024e0
15001535  83c404               ADD ESP,0x4
15001538  8b4630               MOV EAX,dword ptr [ESI + 0x30]
1500153b  85c0                 TEST EAX,EAX
1500153d  7409                 JZ 0x15001548
1500153f  50                   PUSH EAX
15001540  e89b0f0000           CALL 0x150024e0
15001545  83c404               ADD ESP,0x4
15001548  8b4638               MOV EAX,dword ptr [ESI + 0x38]
1500154b  85c0                 TEST EAX,EAX
1500154d  7409                 JZ 0x15001558
1500154f  50                   PUSH EAX
15001550  e88b0f0000           CALL 0x150024e0
15001555  83c404               ADD ESP,0x4
15001558  8b4640               MOV EAX,dword ptr [ESI + 0x40]
1500155b  85c0                 TEST EAX,EAX
1500155d  7409                 JZ 0x15001568
1500155f  50                   PUSH EAX
15001560  e87b0f0000           CALL 0x150024e0
15001565  83c404               ADD ESP,0x4
15001568  8b4644               MOV EAX,dword ptr [ESI + 0x44]
1500156b  85c0                 TEST EAX,EAX
1500156d  7409                 JZ 0x15001578
1500156f  50                   PUSH EAX
15001570  e86b0f0000           CALL 0x150024e0
15001575  83c404               ADD ESP,0x4
15001578  56                   PUSH ESI
15001579  e8620f0000           CALL 0x150024e0
1500157e  83c404               ADD ESP,0x4
15001581  6a00                 PUSH 0x0
15001583  a18c500015           MOV EAX,[0x1500508c]
15001588  50                   PUSH EAX
15001589  ff15f0700015         CALL dword ptr [0x150070f0]
1500158f  5e                   POP ESI
15001590  c3                   RET
; undefined 15 bytes at 15001591

; ==== FUNCTION FUN_150015a0 entry=150015a0 sig=undefined __stdcall FUN_150015a0(void)
150015a0  6a00                 PUSH 0x0
150015a2  6800100000           PUSH 0x1000
150015a7  6a00                 PUSH 0x0
150015a9  ff1508710015         CALL dword ptr [0x15007108]
150015af  a3546b0015           MOV [0x15006b54],EAX
150015b4  c3                   RET
; undefined 11 bytes at 150015b5

; ==== FUNCTION FUN_150015c0 entry=150015c0 sig=undefined __stdcall FUN_150015c0(void)
150015c0  a1546b0015           MOV EAX,[0x15006b54]
150015c5  50                   PUSH EAX
150015c6  ff150c710015         CALL dword ptr [0x1500710c]
150015cc  c3                   RET
; undefined 3 bytes at 150015cd

; ==== FUNCTION FUN_150015d0 entry=150015d0 sig=undefined __stdcall FUN_150015d0(void)
150015d0  83ec44               SUB ESP,0x44
150015d3  53                   PUSH EBX
150015d4  56                   PUSH ESI
150015d5  57                   PUSH EDI
150015d6  55                   PUSH EBP
150015d7  6880040000           PUSH 0x480
150015dc  e81f0f0000           CALL 0x15002500
150015e1  83c404               ADD ESP,0x4
150015e4  8bf0                 MOV ESI,EAX
150015e6  85f6                 TEST ESI,ESI
150015e8  750a                 JNZ 0x150015f4
150015ea  6a1b                 PUSH 0x1b
150015ec  e83ffcffff           CALL 0x15001230
150015f1  83c404               ADD ESP,0x4
150015f4  8d8680040000         LEA EAX,[ESI + 0x480]
150015fa  8935506a0015         MOV dword ptr [0x15006a50],ESI
15001600  c705506b001520000000 MOV dword ptr [0x15006b50],0x20
1500160a  3bc6                 CMP EAX,ESI
1500160c  7628                 JBE 0x15001636
1500160e  33c9                 XOR ECX,ECX
15001610  ba0a000000           MOV EDX,0xa
15001615  884e04               MOV byte ptr [ESI + 0x4],CL
15001618  83c624               ADD ESI,0x24
1500161b  c746dcffffffff       MOV dword ptr [ESI + -0x24],0xffffffff
15001622  8856e1               MOV byte ptr [ESI + -0x1f],DL
15001625  894ee4               MOV dword ptr [ESI + -0x1c],ECX
15001628  a1506a0015           MOV EAX,[0x15006a50]
1500162d  0580040000           ADD EAX,0x480
15001632  3bc6                 CMP EAX,ESI
15001634  77df                 JA 0x15001615
15001636  8d442410             LEA EAX,[ESP + 0x10]
1500163a  50                   PUSH EAX
1500163b  ff151c710015         CALL dword ptr [0x1500711c]
15001641  66837c244200         CMP word ptr [ESP + 0x42],0x0
15001647  0f84d4000000         JZ 0x15001721
1500164d  837c244400           CMP dword ptr [ESP + 0x44],0x0
15001652  0f84c9000000         JZ 0x15001721
15001658  8b442444             MOV EAX,dword ptr [ESP + 0x44]
1500165c  8b28                 MOV EBP,dword ptr [EAX]
1500165e  8d7804               LEA EDI,[EAX + 0x4]
15001661  81fd00080000         CMP EBP,0x800
15001667  8d1c2f               LEA EBX,[EDI + EBP*0x1]
1500166a  7c05                 JL 0x15001671
1500166c  bd00080000           MOV EBP,0x800
15001671  3b2d506b0015         CMP EBP,dword ptr [0x15006b50]
15001677  7e5e                 JLE 0x150016d7
15001679  be546a0015           MOV ESI,0x15006a54
1500167e  6880040000           PUSH 0x480
15001683  e8780e0000           CALL 0x15002500
15001688  83c404               ADD ESP,0x4
1500168b  85c0                 TEST EAX,EAX
1500168d  7442                 JZ 0x150016d1
1500168f  8d8880040000         LEA ECX,[EAX + 0x480]
15001695  8906                 MOV dword ptr [ESI],EAX
15001697  8305506b001520       ADD dword ptr [0x15006b50],0x20
1500169e  3bc8                 CMP ECX,EAX
150016a0  7622                 JBE 0x150016c4
150016a2  33c9                 XOR ECX,ECX
150016a4  884804               MOV byte ptr [EAX + 0x4],CL
150016a7  83c024               ADD EAX,0x24
150016aa  c740dcffffffff       MOV dword ptr [EAX + -0x24],0xffffffff
150016b1  c640e10a             MOV byte ptr [EAX + -0x1f],0xa
150016b5  8948e4               MOV dword ptr [EAX + -0x1c],ECX
150016b8  8b16                 MOV EDX,dword ptr [ESI]
150016ba  81c280040000         ADD EDX,0x480
150016c0  3bd0                 CMP EDX,EAX
150016c2  77e0                 JA 0x150016a4
150016c4  83c604               ADD ESI,0x4
150016c7  3b2d506b0015         CMP EBP,dword ptr [0x15006b50]
150016cd  7faf                 JG 0x1500167e
150016cf  eb06                 JMP 0x150016d7
150016d1  8b2d506b0015         MOV EBP,dword ptr [0x15006b50]
150016d7  33f6                 XOR ESI,ESI
150016d9  85ed                 TEST EBP,EBP
150016db  7e44                 JLE 0x15001721
150016dd  8b03                 MOV EAX,dword ptr [EBX]
150016df  83f8ff               CMP EAX,-0x1
150016e2  7434                 JZ 0x15001718
150016e4  f60701               TEST byte ptr [EDI],0x1
150016e7  742f                 JZ 0x15001718
150016e9  50                   PUSH EAX
150016ea  ff1514710015         CALL dword ptr [0x15007114]
150016f0  85c0                 TEST EAX,EAX
150016f2  7424                 JZ 0x15001718
150016f4  8bc6                 MOV EAX,ESI
150016f6  8bce                 MOV ECX,ESI
150016f8  83e0e7               AND EAX,0xffffffe7
150016fb  83e11f               AND ECX,0x1f
150016fe  c1f803               SAR EAX,0x3
15001701  c1e102               SHL ECX,0x2
15001704  8b90506a0015         MOV EDX,dword ptr [EAX + 0x15006a50]
1500170a  8b03                 MOV EAX,dword ptr [EBX]
1500170c  8d0cc9               LEA ECX,[ECX + ECX*0x8]
1500170f  03ca                 ADD ECX,EDX
15001711  8901                 MOV dword ptr [ECX],EAX
15001713  8a17                 MOV DL,byte ptr [EDI]
15001715  885104               MOV byte ptr [ECX + 0x4],DL
15001718  46                   INC ESI
15001719  47                   INC EDI
1500171a  83c304               ADD EBX,0x4
1500171d  3bee                 CMP EBP,ESI
1500171f  7fbc                 JG 0x150016dd
15001721  33f6                 XOR ESI,ESI
15001723  33ff                 XOR EDI,EDI
15001725  8b1d506a0015         MOV EBX,dword ptr [0x15006a50]
1500172b  03de                 ADD EBX,ESI
1500172d  833bff               CMP dword ptr [EBX],-0x1
15001730  7557                 JNZ 0x15001789
15001732  b8f6ffffff           MOV EAX,0xfffffff6
15001737  85f6                 TEST ESI,ESI
15001739  c6430481             MOV byte ptr [EBX + 0x4],0x81
1500173d  740e                 JZ 0x1500174d
1500173f  8d47ff               LEA EAX,[EDI + -0x1]
15001742  83f801               CMP EAX,0x1
15001745  b8f5ffffff           MOV EAX,0xfffffff5
1500174a  83d0ff               ADC EAX,-0x1
1500174d  50                   PUSH EAX
1500174e  ff1518710015         CALL dword ptr [0x15007118]
15001754  83f8ff               CMP EAX,-0x1
15001757  8be8                 MOV EBP,EAX
15001759  7428                 JZ 0x15001783
1500175b  55                   PUSH EBP
1500175c  ff1514710015         CALL dword ptr [0x15007114]
15001762  85c0                 TEST EAX,EAX
15001764  741d                 JZ 0x15001783
15001766  25ff000000           AND EAX,0xff
1500176b  892b                 MOV dword ptr [EBX],EBP
1500176d  83f802               CMP EAX,0x2
15001770  7506                 JNZ 0x15001778
15001772  804b0440             OR byte ptr [EBX + 0x4],0x40
15001776  eb15                 JMP 0x1500178d
15001778  83f803               CMP EAX,0x3
1500177b  7510                 JNZ 0x1500178d
1500177d  804b0408             OR byte ptr [EBX + 0x4],0x8
15001781  eb0a                 JMP 0x1500178d
15001783  804b0440             OR byte ptr [EBX + 0x4],0x40
15001787  eb04                 JMP 0x1500178d
15001789  804b0480             OR byte ptr [EBX + 0x4],0x80
1500178d  83c624               ADD ESI,0x24
15001790  47                   INC EDI
15001791  83fe6c               CMP ESI,0x6c
15001794  7c8f                 JL 0x15001725
15001796  a1506b0015           MOV EAX,[0x15006b50]
1500179b  50                   PUSH EAX
1500179c  ff1510710015         CALL dword ptr [0x15007110]
150017a2  5d                   POP EBP
150017a3  5f                   POP EDI
150017a4  5e                   POP ESI
150017a5  5b                   POP EBX
150017a6  83c444               ADD ESP,0x44
150017a9  c3                   RET
; undefined 6 bytes at 150017aa

; ==== FUNCTION __ioterm entry=150017b0 sig=void __cdecl __ioterm(void)
150017b0  53                   PUSH EBX
150017b1  56                   PUSH ESI
150017b2  57                   PUSH EDI
150017b3  be506a0015           MOV ESI,0x15006a50
150017b8  55                   PUSH EBP
150017b9  8b3d20710015         MOV EDI,dword ptr [0x15007120]
150017bf  8b1e                 MOV EBX,dword ptr [ESI]
150017c1  85db                 TEST EBX,EBX
150017c3  7430                 JZ 0x150017f5
150017c5  8d8380040000         LEA EAX,[EBX + 0x480]
150017cb  3bc3                 CMP EAX,EBX
150017cd  761b                 JBE 0x150017ea
150017cf  33ed                 XOR EBP,EBP
150017d1  396b08               CMP dword ptr [EBX + 0x8],EBP
150017d4  7406                 JZ 0x150017dc
150017d6  8d430c               LEA EAX,[EBX + 0xc]
150017d9  50                   PUSH EAX
150017da  ffd7                 CALL EDI
150017dc  83c324               ADD EBX,0x24
150017df  8b06                 MOV EAX,dword ptr [ESI]
150017e1  0580040000           ADD EAX,0x480
150017e6  3bc3                 CMP EAX,EBX
150017e8  77e7                 JA 0x150017d1
150017ea  8b06                 MOV EAX,dword ptr [ESI]
150017ec  50                   PUSH EAX
150017ed  e8ee0c0000           CALL 0x150024e0
150017f2  83c404               ADD ESP,0x4
150017f5  83c604               ADD ESI,0x4
150017f8  81fe506b0015         CMP ESI,0x15006b50
150017fe  72bf                 JC 0x150017bf
15001800  5d                   POP EBP
15001801  5f                   POP EDI
15001802  5e                   POP ESI
15001803  5b                   POP EBX
15001804  c3                   RET
; undefined 11 bytes at 15001805

; ==== FUNCTION FUN_15001810 entry=15001810 sig=undefined __stdcall FUN_15001810(void)
15001810  83ec04               SUB ESP,0x4
15001813  33d2                 XOR EDX,EDX
15001815  53                   PUSH EBX
15001816  56                   PUSH ESI
15001817  57                   PUSH EDI
15001818  8b3534500015         MOV ESI,dword ptr [0x15005034]
1500181e  55                   PUSH EBP
1500181f  8bc6                 MOV EAX,ESI
15001821  3816                 CMP byte ptr [ESI],DL
15001823  741a                 JZ 0x1500183f
15001825  803e3d               CMP byte ptr [ESI],0x3d
15001828  7401                 JZ 0x1500182b
1500182a  42                   INC EDX
1500182b  8bfe                 MOV EDI,ESI
1500182d  b9ffffffff           MOV ECX,0xffffffff
15001832  2bc0                 SUB EAX,EAX
15001834  f2ae                 SCASB.REPNE ES:EDI
15001836  f7d1                 NOT ECX
15001838  03f1                 ADD ESI,ECX
1500183a  803e00               CMP byte ptr [ESI],0x0
1500183d  75e6                 JNZ 0x15001825
1500183f  8d049504000000       LEA EAX,[EDX*0x4 + 0x4]
15001846  50                   PUSH EAX
15001847  e8b40c0000           CALL 0x15002500
1500184c  a368500015           MOV [0x15005068],EAX
15001851  83c404               ADD ESP,0x4
15001854  8bd8                 MOV EBX,EAX
15001856  85db                 TEST EBX,EBX
15001858  750a                 JNZ 0x15001864
1500185a  6a09                 PUSH 0x9
1500185c  e8cff9ffff           CALL 0x15001230
15001861  83c404               ADD ESP,0x4
15001864  8b2d34500015         MOV EBP,dword ptr [0x15005034]
1500186a  8bc5                 MOV EAX,EBP
1500186c  807d0000             CMP byte ptr [EBP],0x0
15001870  745e                 JZ 0x150018d0
15001872  8bfd                 MOV EDI,EBP
15001874  b9ffffffff           MOV ECX,0xffffffff
15001879  2bc0                 SUB EAX,EAX
1500187b  f2ae                 SCASB.REPNE ES:EDI
1500187d  f7d1                 NOT ECX
1500187f  894c2410             MOV dword ptr [ESP + 0x10],ECX
15001883  807d003d             CMP byte ptr [EBP],0x3d
15001887  743d                 JZ 0x150018c6
15001889  51                   PUSH ECX
1500188a  e8710c0000           CALL 0x15002500
1500188f  83c404               ADD ESP,0x4
15001892  8903                 MOV dword ptr [EBX],EAX
15001894  85c0                 TEST EAX,EAX
15001896  750a                 JNZ 0x150018a2
15001898  6a09                 PUSH 0x9
1500189a  e891f9ffff           CALL 0x15001230
1500189f  83c404               ADD ESP,0x4
150018a2  8bfd                 MOV EDI,EBP
150018a4  b9ffffffff           MOV ECX,0xffffffff
150018a9  2bc0                 SUB EAX,EAX
150018ab  f2ae                 SCASB.REPNE ES:EDI
150018ad  f7d1                 NOT ECX
150018af  2bf9                 SUB EDI,ECX
150018b1  8bc1                 MOV EAX,ECX
150018b3  c1e902               SHR ECX,0x2
150018b6  8bf7                 MOV ESI,EDI
150018b8  8b3b                 MOV EDI,dword ptr [EBX]
150018ba  83c304               ADD EBX,0x4
150018bd  f3a5                 MOVSD.REP ES:EDI,ESI
150018bf  8bc8                 MOV ECX,EAX
150018c1  83e103               AND ECX,0x3
150018c4  f3a4                 MOVSB.REP ES:EDI,ESI
150018c6  036c2410             ADD EBP,dword ptr [ESP + 0x10]
150018ca  807d0000             CMP byte ptr [EBP],0x0
150018ce  75a2                 JNZ 0x15001872
150018d0  a134500015           MOV EAX,[0x15005034]
150018d5  50                   PUSH EAX
150018d6  e8050c0000           CALL 0x150024e0
150018db  83c404               ADD ESP,0x4
150018de  c70300000000         MOV dword ptr [EBX],0x0
150018e4  5d                   POP EBP
150018e5  5f                   POP EDI
150018e6  5e                   POP ESI
150018e7  5b                   POP EBX
150018e8  83c404               ADD ESP,0x4
150018eb  c3                   RET
; undefined 4 bytes at 150018ec

; ==== FUNCTION __setargv entry=150018f0 sig=int __cdecl __setargv(void)
150018f0  83ec08               SUB ESP,0x8
150018f3  56                   PUSH ESI
150018f4  57                   PUSH EDI
150018f5  6804010000           PUSH 0x104
150018fa  bed0580015           MOV ESI,0x150058d0
150018ff  56                   PUSH ESI
15001900  6a00                 PUSH 0x0
15001902  ff1524710015         CALL dword ptr [0x15007124]
15001908  a1646b0015           MOV EAX,[0x15006b64]
1500190d  893578500015         MOV dword ptr [0x15005078],ESI
15001913  803800               CMP byte ptr [EAX],0x0
15001916  7406                 JZ 0x1500191e
15001918  8b35646b0015         MOV ESI,dword ptr [0x15006b64]
1500191e  8d44240c             LEA EAX,[ESP + 0xc]
15001922  8d4c2408             LEA ECX,[ESP + 0x8]
15001926  50                   PUSH EAX
15001927  51                   PUSH ECX
15001928  6a00                 PUSH 0x0
1500192a  6a00                 PUSH 0x0
1500192c  56                   PUSH ESI
1500192d  e85e000000           CALL 0x15001990
15001932  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
15001936  83c414               ADD ESP,0x14
15001939  c1e002               SHL EAX,0x2
1500193c  0344240c             ADD EAX,dword ptr [ESP + 0xc]
15001940  50                   PUSH EAX
15001941  e8ba0b0000           CALL 0x15002500
15001946  83c404               ADD ESP,0x4
15001949  8bf8                 MOV EDI,EAX
1500194b  85ff                 TEST EDI,EDI
1500194d  750a                 JNZ 0x15001959
1500194f  6a08                 PUSH 0x8
15001951  e8daf8ffff           CALL 0x15001230
15001956  83c404               ADD ESP,0x4
15001959  8d44240c             LEA EAX,[ESP + 0xc]
1500195d  8d4c2408             LEA ECX,[ESP + 0x8]
15001961  8b542408             MOV EDX,dword ptr [ESP + 0x8]
15001965  50                   PUSH EAX
15001966  51                   PUSH ECX
15001967  8d0497               LEA EAX,[EDI + EDX*0x4]
1500196a  50                   PUSH EAX
1500196b  57                   PUSH EDI
1500196c  56                   PUSH ESI
1500196d  e81e000000           CALL 0x15001990
15001972  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
15001976  83c414               ADD ESP,0x14
15001979  48                   DEC EAX
1500197a  893d60500015         MOV dword ptr [0x15005060],EDI
15001980  5f                   POP EDI
15001981  a35c500015           MOV [0x1500505c],EAX
15001986  5e                   POP ESI
15001987  83c408               ADD ESP,0x8
1500198a  c3                   RET
; undefined 5 bytes at 1500198b

; ==== FUNCTION FUN_15001990 entry=15001990 sig=undefined __cdecl FUN_15001990(byte * param_1, undefined4 * param_2, byte * param_3, int * param_4, int * param_5)
15001990  8b442414             MOV EAX,dword ptr [ESP + 0x14]
15001994  53                   PUSH EBX
15001995  8b542414             MOV EDX,dword ptr [ESP + 0x14]
15001999  56                   PUSH ESI
1500199a  8b4c240c             MOV ECX,dword ptr [ESP + 0xc]
1500199e  57                   PUSH EDI
1500199f  8b7c2418             MOV EDI,dword ptr [ESP + 0x18]
150019a3  55                   PUSH EBP
150019a4  837c241800           CMP dword ptr [ESP + 0x18],0x0
150019a9  c70000000000         MOV dword ptr [EAX],0x0
150019af  c70201000000         MOV dword ptr [EDX],0x1
150019b5  740b                 JZ 0x150019c2
150019b7  8b542418             MOV EDX,dword ptr [ESP + 0x18]
150019bb  8344241804           ADD dword ptr [ESP + 0x18],0x4
150019c0  893a                 MOV dword ptr [EDX],EDI
150019c2  803922               CMP byte ptr [ECX],0x22
150019c5  7446                 JZ 0x15001a0d
150019c7  ff00                 INC dword ptr [EAX]
150019c9  85ff                 TEST EDI,EDI
150019cb  7405                 JZ 0x150019d2
150019cd  8a11                 MOV DL,byte ptr [ECX]
150019cf  8817                 MOV byte ptr [EDI],DL
150019d1  47                   INC EDI
150019d2  8a11                 MOV DL,byte ptr [ECX]
150019d4  41                   INC ECX
150019d5  33db                 XOR EBX,EBX
150019d7  8ada                 MOV BL,DL
150019d9  f683c150001504       TEST byte ptr [EBX + 0x150050c1],0x4
150019e0  740c                 JZ 0x150019ee
150019e2  ff00                 INC dword ptr [EAX]
150019e4  85ff                 TEST EDI,EDI
150019e6  7405                 JZ 0x150019ed
150019e8  8a19                 MOV BL,byte ptr [ECX]
150019ea  881f                 MOV byte ptr [EDI],BL
150019ec  47                   INC EDI
150019ed  41                   INC ECX
150019ee  80fa20               CMP DL,0x20
150019f1  7409                 JZ 0x150019fc
150019f3  84d2                 TEST DL,DL
150019f5  7409                 JZ 0x15001a00
150019f7  80fa09               CMP DL,0x9
150019fa  75cb                 JNZ 0x150019c7
150019fc  84d2                 TEST DL,DL
150019fe  7503                 JNZ 0x15001a03
15001a00  49                   DEC ECX
15001a01  eb50                 JMP 0x15001a53
15001a03  85ff                 TEST EDI,EDI
15001a05  744c                 JZ 0x15001a53
15001a07  c647ff00             MOV byte ptr [EDI + -0x1],0x0
15001a0b  eb46                 JMP 0x15001a53
15001a0d  41                   INC ECX
15001a0e  803922               CMP byte ptr [ECX],0x22
15001a11  7430                 JZ 0x15001a43
15001a13  8a19                 MOV BL,byte ptr [ECX]
15001a15  84db                 TEST BL,BL
15001a17  742a                 JZ 0x15001a43
15001a19  33d2                 XOR EDX,EDX
15001a1b  8ad3                 MOV DL,BL
15001a1d  f682c150001504       TEST byte ptr [EDX + 0x150050c1],0x4
15001a24  740c                 JZ 0x15001a32
15001a26  ff00                 INC dword ptr [EAX]
15001a28  85ff                 TEST EDI,EDI
15001a2a  7406                 JZ 0x15001a32
15001a2c  8a11                 MOV DL,byte ptr [ECX]
15001a2e  41                   INC ECX
15001a2f  8817                 MOV byte ptr [EDI],DL
15001a31  47                   INC EDI
15001a32  ff00                 INC dword ptr [EAX]
15001a34  85ff                 TEST EDI,EDI
15001a36  7405                 JZ 0x15001a3d
15001a38  8a11                 MOV DL,byte ptr [ECX]
15001a3a  8817                 MOV byte ptr [EDI],DL
15001a3c  47                   INC EDI
15001a3d  41                   INC ECX
15001a3e  803922               CMP byte ptr [ECX],0x22
15001a41  75d0                 JNZ 0x15001a13
15001a43  ff00                 INC dword ptr [EAX]
15001a45  85ff                 TEST EDI,EDI
15001a47  7404                 JZ 0x15001a4d
15001a49  c60700               MOV byte ptr [EDI],0x0
15001a4c  47                   INC EDI
15001a4d  803922               CMP byte ptr [ECX],0x22
15001a50  7501                 JNZ 0x15001a53
15001a52  41                   INC ECX
15001a53  33f6                 XOR ESI,ESI
15001a55  803900               CMP byte ptr [ECX],0x0
15001a58  0f84e6000000         JZ 0x15001b44
15001a5e  8a11                 MOV DL,byte ptr [ECX]
15001a60  80fa20               CMP DL,0x20
15001a63  7405                 JZ 0x15001a6a
15001a65  80fa09               CMP DL,0x9
15001a68  7503                 JNZ 0x15001a6d
15001a6a  41                   INC ECX
15001a6b  ebf1                 JMP 0x15001a5e
15001a6d  803900               CMP byte ptr [ECX],0x0
15001a70  0f84ce000000         JZ 0x15001b44
15001a76  837c241800           CMP dword ptr [ESP + 0x18],0x0
15001a7b  740b                 JZ 0x15001a88
15001a7d  8b542418             MOV EDX,dword ptr [ESP + 0x18]
15001a81  8344241804           ADD dword ptr [ESP + 0x18],0x4
15001a86  893a                 MOV dword ptr [EDX],EDI
15001a88  8b542420             MOV EDX,dword ptr [ESP + 0x20]
15001a8c  ff02                 INC dword ptr [EDX]
15001a8e  bb01000000           MOV EBX,0x1
15001a93  33d2                 XOR EDX,EDX
15001a95  80395c               CMP byte ptr [ECX],0x5c
15001a98  7507                 JNZ 0x15001aa1
15001a9a  41                   INC ECX
15001a9b  42                   INC EDX
15001a9c  80395c               CMP byte ptr [ECX],0x5c
15001a9f  74f9                 JZ 0x15001a9a
15001aa1  803922               CMP byte ptr [ECX],0x22
15001aa4  7522                 JNZ 0x15001ac8
15001aa6  f6c201               TEST DL,0x1
15001aa9  751a                 JNZ 0x15001ac5
15001aab  85f6                 TEST ESI,ESI
15001aad  740d                 JZ 0x15001abc
15001aaf  8d6901               LEA EBP,[ECX + 0x1]
15001ab2  807d0022             CMP byte ptr [EBP],0x22
15001ab6  7504                 JNZ 0x15001abc
15001ab8  8bcd                 MOV ECX,EBP
15001aba  eb02                 JMP 0x15001abe
15001abc  33db                 XOR EBX,EBX
15001abe  83fe01               CMP ESI,0x1
15001ac1  1bf6                 SBB ESI,ESI
15001ac3  f7de                 NEG ESI
15001ac5  c1ea01               SHR EDX,0x1
15001ac8  8bea                 MOV EBP,EDX
15001aca  4a                   DEC EDX
15001acb  85ed                 TEST EBP,EBP
15001acd  7411                 JZ 0x15001ae0
15001acf  85ff                 TEST EDI,EDI
15001ad1  7404                 JZ 0x15001ad7
15001ad3  c6075c               MOV byte ptr [EDI],0x5c
15001ad6  47                   INC EDI
15001ad7  8bea                 MOV EBP,EDX
15001ad9  ff00                 INC dword ptr [EAX]
15001adb  4a                   DEC EDX
15001adc  85ed                 TEST EBP,EBP
15001ade  75ef                 JNZ 0x15001acf
15001ae0  8a11                 MOV DL,byte ptr [ECX]
15001ae2  84d2                 TEST DL,DL
15001ae4  744f                 JZ 0x15001b35
15001ae6  85f6                 TEST ESI,ESI
15001ae8  750a                 JNZ 0x15001af4
15001aea  80fa20               CMP DL,0x20
15001aed  7446                 JZ 0x15001b35
15001aef  80fa09               CMP DL,0x9
15001af2  7441                 JZ 0x15001b35
15001af4  85db                 TEST EBX,EBX
15001af6  7437                 JZ 0x15001b2f
15001af8  85ff                 TEST EDI,EDI
15001afa  7421                 JZ 0x15001b1d
15001afc  33db                 XOR EBX,EBX
15001afe  8ada                 MOV BL,DL
15001b00  f683c150001504       TEST byte ptr [EBX + 0x150050c1],0x4
15001b07  7406                 JZ 0x15001b0f
15001b09  8817                 MOV byte ptr [EDI],DL
15001b0b  41                   INC ECX
15001b0c  47                   INC EDI
15001b0d  ff00                 INC dword ptr [EAX]
15001b0f  8a11                 MOV DL,byte ptr [ECX]
15001b11  47                   INC EDI
15001b12  41                   INC ECX
15001b13  8857ff               MOV byte ptr [EDI + -0x1],DL
15001b16  ff00                 INC dword ptr [EAX]
15001b18  e971ffffff           JMP 0x15001a8e
15001b1d  33db                 XOR EBX,EBX
15001b1f  8ada                 MOV BL,DL
15001b21  f683c150001504       TEST byte ptr [EBX + 0x150050c1],0x4
15001b28  7403                 JZ 0x15001b2d
15001b2a  41                   INC ECX
15001b2b  ff00                 INC dword ptr [EAX]
15001b2d  ff00                 INC dword ptr [EAX]
15001b2f  41                   INC ECX
15001b30  e959ffffff           JMP 0x15001a8e
15001b35  85ff                 TEST EDI,EDI
15001b37  7404                 JZ 0x15001b3d
15001b39  c60700               MOV byte ptr [EDI],0x0
15001b3c  47                   INC EDI
15001b3d  ff00                 INC dword ptr [EAX]
15001b3f  e911ffffff           JMP 0x15001a55
15001b44  837c241800           CMP dword ptr [ESP + 0x18],0x0
15001b49  740a                 JZ 0x15001b55
15001b4b  8b542418             MOV EDX,dword ptr [ESP + 0x18]
15001b4f  c70200000000         MOV dword ptr [EDX],0x0
15001b55  8b542420             MOV EDX,dword ptr [ESP + 0x20]
15001b59  5d                   POP EBP
15001b5a  5f                   POP EDI
15001b5b  5e                   POP ESI
15001b5c  5b                   POP EBX
15001b5d  ff02                 INC dword ptr [EDX]
15001b5f  c3                   RET

; ==== FUNCTION __setmbcp entry=15001b60 sig=int __cdecl __setmbcp(int _CodePage)
15001b60  83ec18               SUB ESP,0x18
15001b63  53                   PUSH EBX
15001b64  56                   PUSH ESI
15001b65  57                   PUSH EDI
15001b66  55                   PUSH EBP
15001b67  6a19                 PUSH 0x19
15001b69  e8a2070000           CALL 0x15002310
15001b6e  8b442430             MOV EAX,dword ptr [ESP + 0x30]
15001b72  83c404               ADD ESP,0x4
15001b75  50                   PUSH EAX
15001b76  e815020000           CALL 0x15001d90
15001b7b  83c404               ADD ESP,0x4
15001b7e  8be8                 MOV EBP,EAX
15001b80  392dc4510015         CMP dword ptr [0x150051c4],EBP
15001b86  7514                 JNZ 0x15001b9c
15001b88  6a19                 PUSH 0x19
15001b8a  e8f1070000           CALL 0x15002380
15001b8f  83c404               ADD ESP,0x4
15001b92  33c0                 XOR EAX,EAX
15001b94  5d                   POP EBP
15001b95  5f                   POP EDI
15001b96  5e                   POP ESI
15001b97  5b                   POP EBX
15001b98  83c418               ADD ESP,0x18
15001b9b  c3                   RET
15001b9c  85ed                 TEST EBP,EBP
15001b9e  7519                 JNZ 0x15001bb9
15001ba0  e89b020000           CALL 0x15001e40
15001ba5  6a19                 PUSH 0x19
15001ba7  e8d4070000           CALL 0x15002380
15001bac  83c404               ADD ESP,0x4
15001baf  33c0                 XOR EAX,EAX
15001bb1  5d                   POP EBP
15001bb2  5f                   POP EDI
15001bb3  5e                   POP ESI
15001bb4  5b                   POP EBX
15001bb5  83c418               ADD ESP,0x18
15001bb8  c3                   RET
15001bb9  c744241000000000     MOV dword ptr [ESP + 0x10],0x0
15001bc1  b8e8510015           MOV EAX,0x150051e8
15001bc6  3928                 CMP dword ptr [EAX],EBP
15001bc8  0f849b000000         JZ 0x15001c69
15001bce  83c030               ADD EAX,0x30
15001bd1  ff442410             INC dword ptr [ESP + 0x10]
15001bd5  3dd8520015           CMP EAX,0x150052d8
15001bda  72ea                 JC 0x15001bc6
15001bdc  8d442414             LEA EAX,[ESP + 0x14]
15001be0  50                   PUSH EAX
15001be1  55                   PUSH EBP
15001be2  ff15d0700015         CALL dword ptr [0x150070d0]
15001be8  83f801               CMP EAX,0x1
15001beb  0f8559010000         JNZ 0x15001d4a
15001bf1  bfc0500015           MOV EDI,0x150050c0
15001bf6  33c0                 XOR EAX,EAX
15001bf8  b940000000           MOV ECX,0x40
15001bfd  f3ab                 STOSD.REP ES:EDI
15001bff  aa                   STOSB ES:EDI
15001c00  837c241401           CMP dword ptr [ESP + 0x14],0x1
15001c05  0f8610010000         JBE 0x15001d1b
15001c0b  8d74241a             LEA ESI,[ESP + 0x1a]
15001c0f  3844241a             CMP byte ptr [ESP + 0x1a],AL
15001c13  742c                 JZ 0x15001c41
15001c15  8a4e01               MOV CL,byte ptr [ESI + 0x1]
15001c18  84c9                 TEST CL,CL
15001c1a  7425                 JZ 0x15001c41
15001c1c  33c0                 XOR EAX,EAX
15001c1e  33d2                 XOR EDX,EDX
15001c20  8a06                 MOV AL,byte ptr [ESI]
15001c22  8ad1                 MOV DL,CL
15001c24  3bd0                 CMP EDX,EAX
15001c26  7211                 JC 0x15001c39
15001c28  8088c150001504       OR byte ptr [EAX + 0x150050c1],0x4
15001c2f  40                   INC EAX
15001c30  33c9                 XOR ECX,ECX
15001c32  8a4e01               MOV CL,byte ptr [ESI + 0x1]
15001c35  3bc8                 CMP ECX,EAX
15001c37  73ef                 JNC 0x15001c28
15001c39  83c602               ADD ESI,0x2
15001c3c  803e00               CMP byte ptr [ESI],0x0
15001c3f  75d4                 JNZ 0x15001c15
15001c41  b801000000           MOV EAX,0x1
15001c46  8088c150001508       OR byte ptr [EAX + 0x150050c1],0x8
15001c4d  40                   INC EAX
15001c4e  3dff000000           CMP EAX,0xff
15001c53  72f1                 JC 0x15001c46
15001c55  55                   PUSH EBP
15001c56  892dc4510015         MOV dword ptr [0x150051c4],EBP
15001c5c  e87f010000           CALL 0x15001de0
15001c61  83c404               ADD ESP,0x4
15001c64  e9b9000000           JMP 0x15001d22
15001c69  bfc0500015           MOV EDI,0x150050c0
15001c6e  33c0                 XOR EAX,EAX
15001c70  b940000000           MOV ECX,0x40
15001c75  f3ab                 STOSD.REP ES:EDI
15001c77  aa                   STOSB ES:EDI
15001c78  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
15001c7c  8d1449               LEA EDX,[ECX + ECX*0x2]
15001c7f  8d3c5500000000       LEA EDI,[EDX*0x2 + 0x0]
15001c86  8d0c07               LEA ECX,[EDI + EAX*0x1]
15001c89  8d34cdf8510015       LEA ESI,[ECX*0x8 + 0x150051f8]
15001c90  803e00               CMP byte ptr [ESI],0x0
15001c93  7431                 JZ 0x15001cc6
15001c95  8a4e01               MOV CL,byte ptr [ESI + 0x1]
15001c98  84c9                 TEST CL,CL
15001c9a  742a                 JZ 0x15001cc6
15001c9c  33d2                 XOR EDX,EDX
15001c9e  33db                 XOR EBX,EBX
15001ca0  8a16                 MOV DL,byte ptr [ESI]
15001ca2  8ad9                 MOV BL,CL
15001ca4  3bda                 CMP EBX,EDX
15001ca6  7216                 JC 0x15001cbe
15001ca8  8a88e0510015         MOV CL,byte ptr [EAX + 0x150051e0]
15001cae  088ac1500015         OR byte ptr [EDX + 0x150050c1],CL
15001cb4  42                   INC EDX
15001cb5  33db                 XOR EBX,EBX
15001cb7  8a5e01               MOV BL,byte ptr [ESI + 0x1]
15001cba  3bda                 CMP EBX,EDX
15001cbc  73f0                 JNC 0x15001cae
15001cbe  83c602               ADD ESI,0x2
15001cc1  803e00               CMP byte ptr [ESI],0x0
15001cc4  75cf                 JNZ 0x15001c95
15001cc6  40                   INC EAX
15001cc7  83f804               CMP EAX,0x4
15001cca  72ba                 JC 0x15001c86
15001ccc  55                   PUSH EBP
15001ccd  892dc4510015         MOV dword ptr [0x150051c4],EBP
15001cd3  e808010000           CALL 0x15001de0
15001cd8  83c404               ADD ESP,0x4
15001cdb  bad0510015           MOV EDX,0x150051d0
15001ce0  a3c8510015           MOV [0x150051c8],EAX
15001ce5  8b442410             MOV EAX,dword ptr [ESP + 0x10]
15001ce9  c1e004               SHL EAX,0x4
15001cec  8b9c40f0510015       MOV EBX,dword ptr [EAX + EAX*0x2 + 0x150051f0]
15001cf3  6a19                 PUSH 0x19
15001cf5  8d8c40ec510015       LEA ECX,[EAX + EAX*0x2 + 0x150051ec]
15001cfc  8b01                 MOV EAX,dword ptr [ECX]
15001cfe  8b4908               MOV ECX,dword ptr [ECX + 0x8]
15001d01  8902                 MOV dword ptr [EDX],EAX
15001d03  895a04               MOV dword ptr [EDX + 0x4],EBX
15001d06  894a08               MOV dword ptr [EDX + 0x8],ECX
15001d09  e872060000           CALL 0x15002380
15001d0e  83c404               ADD ESP,0x4
15001d11  33c0                 XOR EAX,EAX
15001d13  5d                   POP EBP
15001d14  5f                   POP EDI
15001d15  5e                   POP ESI
15001d16  5b                   POP EBX
15001d17  83c418               ADD ESP,0x18
15001d1a  c3                   RET
15001d1b  33c0                 XOR EAX,EAX
15001d1d  a3c4510015           MOV [0x150051c4],EAX
15001d22  b9d0510015           MOV ECX,0x150051d0
15001d27  6a19                 PUSH 0x19
15001d29  a3c8510015           MOV [0x150051c8],EAX
15001d2e  33c0                 XOR EAX,EAX
15001d30  8901                 MOV dword ptr [ECX],EAX
15001d32  894104               MOV dword ptr [ECX + 0x4],EAX
15001d35  894108               MOV dword ptr [ECX + 0x8],EAX
15001d38  e843060000           CALL 0x15002380
15001d3d  83c404               ADD ESP,0x4
15001d40  33c0                 XOR EAX,EAX
15001d42  5d                   POP EBP
15001d43  5f                   POP EDI
15001d44  5e                   POP ESI
15001d45  5b                   POP EBX
15001d46  83c418               ADD ESP,0x18
15001d49  c3                   RET
15001d4a  833ddc51001500       CMP dword ptr [0x150051dc],0x0
15001d51  7419                 JZ 0x15001d6c
15001d53  e8e8000000           CALL 0x15001e40
15001d58  6a19                 PUSH 0x19
15001d5a  e821060000           CALL 0x15002380
15001d5f  83c404               ADD ESP,0x4
15001d62  33c0                 XOR EAX,EAX
15001d64  5d                   POP EBP
15001d65  5f                   POP EDI
15001d66  5e                   POP ESI
15001d67  5b                   POP EBX
15001d68  83c418               ADD ESP,0x18
15001d6b  c3                   RET
15001d6c  6a19                 PUSH 0x19
15001d6e  e80d060000           CALL 0x15002380
15001d73  83c404               ADD ESP,0x4
15001d76  b8ffffffff           MOV EAX,0xffffffff
15001d7b  5d                   POP EBP
15001d7c  5f                   POP EDI
15001d7d  5e                   POP ESI
15001d7e  5b                   POP EBX
15001d7f  83c418               ADD ESP,0x18
15001d82  c3                   RET
; undefined 13 bytes at 15001d83

; ==== FUNCTION getSystemCP entry=15001d90 sig=int __cdecl getSystemCP(int param_1)
15001d90  c705dc51001500000000 MOV dword ptr [0x150051dc],0x0
15001d9a  8b442404             MOV EAX,dword ptr [ESP + 0x4]
15001d9e  83f8fe               CMP EAX,-0x2
15001da1  7510                 JNZ 0x15001db3
15001da3  c705dc51001501000000 MOV dword ptr [0x150051dc],0x1
15001dad  ff2530710015         JMP dword ptr [0x15007130]
15001db3  83f8fd               CMP EAX,-0x3
15001db6  7510                 JNZ 0x15001dc8
15001db8  c705dc51001501000000 MOV dword ptr [0x150051dc],0x1
15001dc2  ff252c710015         JMP dword ptr [0x1500712c]
15001dc8  83f8fc               CMP EAX,-0x4
15001dcb  750f                 JNZ 0x15001ddc
15001dcd  c705dc51001501000000 MOV dword ptr [0x150051dc],0x1
15001dd7  a1d0540015           MOV EAX,[0x150054d0]
15001ddc  c3                   RET
; undefined 3 bytes at 15001ddd

; ==== FUNCTION _CPtoLCID entry=15001de0 sig=undefined4 __cdecl _CPtoLCID(undefined4 param_1)
15001de0  8b442404             MOV EAX,dword ptr [ESP + 0x4]
15001de4  2da4030000           SUB EAX,0x3a4
15001de9  83f812               CMP EAX,0x12
15001dec  770f                 JA 0x15001dfd
15001dee  33c9                 XOR ECX,ECX
15001df0  8a882c1e0015         MOV CL,byte ptr [EAX + 0x15001e2c]
switchD_15001df6::switchD:
15001df6  ff248d181e0015       JMP dword ptr [ECX*0x4 + 0x15001e18]
switchD_15001df6::caseD_3a5:
15001dfd  33c0                 XOR EAX,EAX
15001dff  c3                   RET
switchD_15001df6::caseD_3a4:
15001e00  b811040000           MOV EAX,0x411
15001e05  c3                   RET
switchD_15001df6::caseD_3a8:
15001e06  b804080000           MOV EAX,0x804
15001e0b  c3                   RET
switchD_15001df6::caseD_3b5:
15001e0c  b812040000           MOV EAX,0x412
15001e11  c3                   RET
switchD_15001df6::caseD_3b6:
15001e12  b804040000           MOV EAX,0x404
15001e17  c3                   RET
switchD_15001df6::switchdataD_15001e18:
15001e18  addr 15001e00
15001e1c  addr 15001e06
15001e20  addr 15001e0c
15001e24  addr 15001e12
15001e28  addr 15001dfd
switchD_15001df6::switchdataD_15001e2c:
15001e2c  db 0h
15001e2d  db 4h
15001e2e  db 4h
15001e2f  db 4h
15001e30  db 1h
15001e31  db 4h
15001e32  db 4h
15001e33  db 4h
15001e34  db 4h
15001e35  db 4h
15001e36  db 4h
15001e37  db 4h
15001e38  db 4h
15001e39  db 4h
15001e3a  db 4h
15001e3b  db 4h
15001e3c  db 4h
15001e3d  db 2h
15001e3e  db 3h
; undefined 1 bytes at 15001e3f

; ==== FUNCTION setSBCS entry=15001e40 sig=undefined __cdecl setSBCS(void)
15001e40  57                   PUSH EDI
15001e41  33c0                 XOR EAX,EAX
15001e43  bfc0500015           MOV EDI,0x150050c0
15001e48  b940000000           MOV ECX,0x40
15001e4d  f3ab                 STOSD.REP ES:EDI
15001e4f  aa                   STOSB ES:EDI
15001e50  a3d0510015           MOV [0x150051d0],EAX
15001e55  b9d0510015           MOV ECX,0x150051d0
15001e5a  5f                   POP EDI
15001e5b  a3c4510015           MOV [0x150051c4],EAX
15001e60  a3c8510015           MOV [0x150051c8],EAX
15001e65  894104               MOV dword ptr [ECX + 0x4],EAX
15001e68  894108               MOV dword ptr [ECX + 0x8],EAX
15001e6b  c3                   RET
; undefined 4 bytes at 15001e6c

; ==== FUNCTION ___initmbctable entry=15001e70 sig=undefined __stdcall ___initmbctable(void)
15001e70  6afd                 PUSH -0x3
15001e72  e8e9fcffff           CALL 0x15001b60
15001e77  83c404               ADD ESP,0x4
15001e7a  c3                   RET
; undefined 5 bytes at 15001e7b

; ==== FUNCTION FUN_15001e80 entry=15001e80 sig=LPSTR __stdcall FUN_15001e80(void)
15001e80  83ec04               SUB ESP,0x4
15001e83  833ddc52001500       CMP dword ptr [0x150052dc],0x0
15001e8a  53                   PUSH EBX
15001e8b  56                   PUSH ESI
15001e8c  57                   PUSH EDI
15001e8d  8b3540710015         MOV ESI,dword ptr [0x15007140]
15001e93  55                   PUSH EBP
15001e94  753a                 JNZ 0x15001ed0
15001e96  ffd6                 CALL ESI
15001e98  8bf8                 MOV EDI,EAX
15001e9a  85ff                 TEST EDI,EDI
15001e9c  7410                 JZ 0x15001eae
15001e9e  c705dc52001501000000 MOV dword ptr [0x150052dc],0x1
15001ea8  8b5c2410             MOV EBX,dword ptr [ESP + 0x10]
15001eac  eb2a                 JMP 0x15001ed8
15001eae  ff1538710015         CALL dword ptr [0x15007138]
15001eb4  8bd8                 MOV EBX,EAX
15001eb6  85db                 TEST EBX,EBX
15001eb8  740c                 JZ 0x15001ec6
15001eba  c705dc52001502000000 MOV dword ptr [0x150052dc],0x2
15001ec4  eb12                 JMP 0x15001ed8
15001ec6  33c0                 XOR EAX,EAX
15001ec8  5d                   POP EBP
15001ec9  5f                   POP EDI
15001eca  5e                   POP ESI
15001ecb  5b                   POP EBX
15001ecc  83c404               ADD ESP,0x4
15001ecf  c3                   RET
15001ed0  8b5c2410             MOV EBX,dword ptr [ESP + 0x10]
15001ed4  8b7c2410             MOV EDI,dword ptr [ESP + 0x10]
15001ed8  833ddc52001501       CMP dword ptr [0x150052dc],0x1
15001edf  0f85a2000000         JNZ 0x15001f87
15001ee5  85ff                 TEST EDI,EDI
15001ee7  7512                 JNZ 0x15001efb
15001ee9  ffd6                 CALL ESI
15001eeb  8bf8                 MOV EDI,EAX
15001eed  85ff                 TEST EDI,EDI
15001eef  750a                 JNZ 0x15001efb
15001ef1  33c0                 XOR EAX,EAX
15001ef3  5d                   POP EBP
15001ef4  5f                   POP EDI
15001ef5  5e                   POP ESI
15001ef6  5b                   POP EBX
15001ef7  83c404               ADD ESP,0x4
15001efa  c3                   RET
15001efb  66833f00             CMP word ptr [EDI],0x0
15001eff  8bf7                 MOV ESI,EDI
15001f01  7412                 JZ 0x15001f15
15001f03  83c602               ADD ESI,0x2
15001f06  66833e00             CMP word ptr [ESI],0x0
15001f0a  75f7                 JNZ 0x15001f03
15001f0c  83c602               ADD ESI,0x2
15001f0f  66833e00             CMP word ptr [ESI],0x0
15001f13  75ee                 JNZ 0x15001f03
15001f15  2bf7                 SUB ESI,EDI
15001f17  6a00                 PUSH 0x0
15001f19  c1fe01               SAR ESI,0x1
15001f1c  6a00                 PUSH 0x0
15001f1e  46                   INC ESI
15001f1f  6a00                 PUSH 0x0
15001f21  6a00                 PUSH 0x0
15001f23  56                   PUSH ESI
15001f24  57                   PUSH EDI
15001f25  6a00                 PUSH 0x0
15001f27  6a00                 PUSH 0x0
15001f29  ff1544710015         CALL dword ptr [0x15007144]
15001f2f  8be8                 MOV EBP,EAX
15001f31  85ed                 TEST EBP,EBP
15001f33  7441                 JZ 0x15001f76
15001f35  55                   PUSH EBP
15001f36  e8c5050000           CALL 0x15002500
15001f3b  83c404               ADD ESP,0x4
15001f3e  8bd8                 MOV EBX,EAX
15001f40  85db                 TEST EBX,EBX
15001f42  7432                 JZ 0x15001f76
15001f44  6a00                 PUSH 0x0
15001f46  6a00                 PUSH 0x0
15001f48  55                   PUSH EBP
15001f49  53                   PUSH EBX
15001f4a  56                   PUSH ESI
15001f4b  57                   PUSH EDI
15001f4c  6a00                 PUSH 0x0
15001f4e  6a00                 PUSH 0x0
15001f50  ff1544710015         CALL dword ptr [0x15007144]
15001f56  85c0                 TEST EAX,EAX
15001f58  750b                 JNZ 0x15001f65
15001f5a  53                   PUSH EBX
15001f5b  e880050000           CALL 0x150024e0
15001f60  83c404               ADD ESP,0x4
15001f63  33db                 XOR EBX,EBX
15001f65  57                   PUSH EDI
15001f66  ff153c710015         CALL dword ptr [0x1500713c]
15001f6c  8bc3                 MOV EAX,EBX
15001f6e  5d                   POP EBP
15001f6f  5f                   POP EDI
15001f70  5e                   POP ESI
15001f71  5b                   POP EBX
15001f72  83c404               ADD ESP,0x4
15001f75  c3                   RET
15001f76  57                   PUSH EDI
15001f77  ff153c710015         CALL dword ptr [0x1500713c]
15001f7d  33c0                 XOR EAX,EAX
15001f7f  5d                   POP EBP
15001f80  5f                   POP EDI
15001f81  5e                   POP ESI
15001f82  5b                   POP EBX
15001f83  83c404               ADD ESP,0x4
15001f86  c3                   RET
15001f87  833ddc52001502       CMP dword ptr [0x150052dc],0x2
15001f8e  757b                 JNZ 0x1500200b
15001f90  85db                 TEST EBX,EBX
15001f92  7516                 JNZ 0x15001faa
15001f94  ff1538710015         CALL dword ptr [0x15007138]
15001f9a  8bd8                 MOV EBX,EAX
15001f9c  85db                 TEST EBX,EBX
15001f9e  750a                 JNZ 0x15001faa
15001fa0  33c0                 XOR EAX,EAX
15001fa2  5d                   POP EBP
15001fa3  5f                   POP EDI
15001fa4  5e                   POP ESI
15001fa5  5b                   POP EBX
15001fa6  83c404               ADD ESP,0x4
15001fa9  c3                   RET
15001faa  8beb                 MOV EBP,EBX
15001fac  803b00               CMP byte ptr [EBX],0x0
15001faf  740e                 JZ 0x15001fbf
15001fb1  45                   INC EBP
15001fb2  807d0000             CMP byte ptr [EBP],0x0
15001fb6  75f9                 JNZ 0x15001fb1
15001fb8  45                   INC EBP
15001fb9  807d0000             CMP byte ptr [EBP],0x0
15001fbd  75f2                 JNZ 0x15001fb1
15001fbf  2beb                 SUB EBP,EBX
15001fc1  45                   INC EBP
15001fc2  55                   PUSH EBP
15001fc3  e838050000           CALL 0x15002500
15001fc8  89442414             MOV dword ptr [ESP + 0x14],EAX
15001fcc  83c404               ADD ESP,0x4
15001fcf  85c0                 TEST EAX,EAX
15001fd1  7511                 JNZ 0x15001fe4
15001fd3  53                   PUSH EBX
15001fd4  ff1534710015         CALL dword ptr [0x15007134]
15001fda  33c0                 XOR EAX,EAX
15001fdc  5d                   POP EBP
15001fdd  5f                   POP EDI
15001fde  5e                   POP ESI
15001fdf  5b                   POP EBX
15001fe0  83c404               ADD ESP,0x4
15001fe3  c3                   RET
15001fe4  8b7c2410             MOV EDI,dword ptr [ESP + 0x10]
15001fe8  8bf3                 MOV ESI,EBX
15001fea  8bcd                 MOV ECX,EBP
15001fec  c1e902               SHR ECX,0x2
15001fef  f3a5                 MOVSD.REP ES:EDI,ESI
15001ff1  8bcd                 MOV ECX,EBP
15001ff3  53                   PUSH EBX
15001ff4  83e103               AND ECX,0x3
15001ff7  f3a4                 MOVSB.REP ES:EDI,ESI
15001ff9  ff1534710015         CALL dword ptr [0x15007134]
15001fff  8b442410             MOV EAX,dword ptr [ESP + 0x10]
15002003  5d                   POP EBP
15002004  5f                   POP EDI
15002005  5e                   POP ESI
15002006  5b                   POP EBX
15002007  83c404               ADD ESP,0x4
1500200a  c3                   RET
1500200b  33c0                 XOR EAX,EAX
1500200d  5d                   POP EBP
1500200e  5f                   POP EDI
1500200f  5e                   POP ESI
15002010  5b                   POP EBX
15002011  83c404               ADD ESP,0x4
15002014  c3                   RET
; undefined 11 bytes at 15002015

; ==== FUNCTION FUN_15002020 entry=15002020 sig=undefined __cdecl FUN_15002020(undefined4 param_1)
15002020  8b442404             MOV EAX,dword ptr [ESP + 0x4]
15002024  a344500015           MOV [0x15005044],EAX
15002029  c3                   RET
; undefined 6 bytes at 1500202a

; ==== FUNCTION FUN_15002030 entry=15002030 sig=undefined4 __stdcall FUN_15002030(void)
15002030  b801000000           MOV EAX,0x1
15002035  c20c00               RET 0xc
; undefined 8 bytes at 15002038

; ==== FUNCTION __FF_MSGBANNER entry=15002040 sig=void __cdecl __FF_MSGBANNER(void)
15002040  a140500015           MOV EAX,[0x15005040]
15002045  83f801               CMP EAX,0x1
15002048  740d                 JZ 0x15002057
1500204a  85c0                 TEST EAX,EAX
1500204c  752e                 JNZ 0x1500207c
1500204e  833d4450001501       CMP dword ptr [0x15005044],0x1
15002055  7525                 JNZ 0x1500207c
15002057  68fc000000           PUSH 0xfc
1500205c  e81f000000           CALL 0x15002080
15002061  83c404               ADD ESP,0x4
15002064  a168530015           MOV EAX,[0x15005368]
15002069  85c0                 TEST EAX,EAX
1500206b  7402                 JZ 0x1500206f
1500206d  ffd0                 CALL EAX
1500206f  68ff000000           PUSH 0xff
15002074  e807000000           CALL 0x15002080
15002079  83c404               ADD ESP,0x4
1500207c  c3                   RET
; undefined 3 bytes at 1500207d

; ==== FUNCTION FUN_15002080 entry=15002080 sig=undefined __cdecl FUN_15002080(int param_1)
15002080  81eca8010000         SUB ESP,0x1a8
15002086  33c9                 XOR ECX,ECX
15002088  b8e0520015           MOV EAX,0x150052e0
1500208d  53                   PUSH EBX
1500208e  8b9424b0010000       MOV EDX,dword ptr [ESP + 0x1b0]
15002095  56                   PUSH ESI
15002096  57                   PUSH EDI
15002097  55                   PUSH EBP
15002098  3910                 CMP dword ptr [EAX],EDX
1500209a  740b                 JZ 0x150020a7
1500209c  83c008               ADD EAX,0x8
1500209f  41                   INC ECX
150020a0  3d68530015           CMP EAX,0x15005368
150020a5  72f1                 JC 0x15002098
150020a7  3914cde0520015       CMP dword ptr [ECX*0x8 + 0x150052e0],EDX
150020ae  8d1ccd00000000       LEA EBX,[ECX*0x8 + 0x0]
150020b5  0f85a7010000         JNZ 0x15002262
150020bb  833d4050001501       CMP dword ptr [0x15005040],0x1
150020c2  0f845f010000         JZ 0x15002227
150020c8  833d4050001500       CMP dword ptr [0x15005040],0x0
150020cf  750d                 JNZ 0x150020de
150020d1  833d4450001501       CMP dword ptr [0x15005044],0x1
150020d8  0f8449010000         JZ 0x15002227
150020de  81fafc000000         CMP EDX,0xfc
150020e4  0f8478010000         JZ 0x15002262
150020ea  8d8424b4000000       LEA EAX,[ESP + 0xb4]
150020f1  6804010000           PUSH 0x104
150020f6  50                   PUSH EAX
150020f7  8b2d24710015         MOV EBP,dword ptr [0x15007124]
150020fd  6a00                 PUSH 0x0
150020ff  ffd5                 CALL EBP
15002101  85c0                 TEST EAX,EAX
15002103  7516                 JNZ 0x1500211b
15002105  bec8420015           MOV ESI,0x150042c8
1500210a  8dbc24b4000000       LEA EDI,[ESP + 0xb4]
15002111  b905000000           MOV ECX,0x5
15002116  f3a5                 MOVSD.REP ES:EDI,ESI
15002118  66a5                 MOVSW ES:EDI,ESI
1500211a  a4                   MOVSB ES:EDI,ESI
1500211b  8dac24b4000000       LEA EBP,[ESP + 0xb4]
15002122  8dbc24b4000000       LEA EDI,[ESP + 0xb4]
15002129  b9ffffffff           MOV ECX,0xffffffff
1500212e  2bc0                 SUB EAX,EAX
15002130  f2ae                 SCASB.REPNE ES:EDI
15002132  f7d1                 NOT ECX
15002134  83f93c               CMP ECX,0x3c
15002137  7626                 JBE 0x1500215f
15002139  8dbc24b4000000       LEA EDI,[ESP + 0xb4]
15002140  b9ffffffff           MOV ECX,0xffffffff
15002145  2bc0                 SUB EAX,EAX
15002147  6a03                 PUSH 0x3
15002149  f2ae                 SCASB.REPNE ES:EDI
1500214b  f7d1                 NOT ECX
1500214d  8d6c0c7c             LEA EBP,[ESP + ECX*0x1 + 0x7c]
15002151  68c4420015           PUSH 0x150042c4
15002156  55                   PUSH EBP
15002157  e8c4040000           CALL 0x15002620
1500215c  83c40c               ADD ESP,0xc
1500215f  bea8420015           MOV ESI,0x150042a8
15002164  8d7c2414             LEA EDI,[ESP + 0x14]
15002168  b906000000           MOV ECX,0x6
1500216d  f3a5                 MOVSD.REP ES:EDI,ESI
1500216f  66a5                 MOVSW ES:EDI,ESI
15002171  8bfd                 MOV EDI,EBP
15002173  b9ffffffff           MOV ECX,0xffffffff
15002178  2bc0                 SUB EAX,EAX
1500217a  f2ae                 SCASB.REPNE ES:EDI
1500217c  f7d1                 NOT ECX
1500217e  2bf9                 SUB EDI,ECX
15002180  8bd1                 MOV EDX,ECX
15002182  8bf7                 MOV ESI,EDI
15002184  b9ffffffff           MOV ECX,0xffffffff
15002189  8d7c2414             LEA EDI,[ESP + 0x14]
1500218d  2bc0                 SUB EAX,EAX
1500218f  f2ae                 SCASB.REPNE ES:EDI
15002191  4f                   DEC EDI
15002192  8bca                 MOV ECX,EDX
15002194  c1e902               SHR ECX,0x2
15002197  f3a5                 MOVSD.REP ES:EDI,ESI
15002199  8bca                 MOV ECX,EDX
1500219b  83e103               AND ECX,0x3
1500219e  f3a4                 MOVSB.REP ES:EDI,ESI
150021a0  bfa4420015           MOV EDI,0x150042a4
150021a5  b9ffffffff           MOV ECX,0xffffffff
150021aa  2bc0                 SUB EAX,EAX
150021ac  f2ae                 SCASB.REPNE ES:EDI
150021ae  f7d1                 NOT ECX
150021b0  2bf9                 SUB EDI,ECX
150021b2  8bd1                 MOV EDX,ECX
150021b4  8bf7                 MOV ESI,EDI
150021b6  b9ffffffff           MOV ECX,0xffffffff
150021bb  8d7c2414             LEA EDI,[ESP + 0x14]
150021bf  2bc0                 SUB EAX,EAX
150021c1  f2ae                 SCASB.REPNE ES:EDI
150021c3  4f                   DEC EDI
150021c4  8bca                 MOV ECX,EDX
150021c6  c1e902               SHR ECX,0x2
150021c9  f3a5                 MOVSD.REP ES:EDI,ESI
150021cb  8bca                 MOV ECX,EDX
150021cd  83e103               AND ECX,0x3
150021d0  f3a4                 MOVSB.REP ES:EDI,ESI
150021d2  8bbbe4520015         MOV EDI,dword ptr [EBX + 0x150052e4]
150021d8  b9ffffffff           MOV ECX,0xffffffff
150021dd  2bc0                 SUB EAX,EAX
150021df  f2ae                 SCASB.REPNE ES:EDI
150021e1  f7d1                 NOT ECX
150021e3  2bf9                 SUB EDI,ECX
150021e5  8bf7                 MOV ESI,EDI
150021e7  8bd1                 MOV EDX,ECX
150021e9  8d7c2414             LEA EDI,[ESP + 0x14]
150021ed  b9ffffffff           MOV ECX,0xffffffff
150021f2  2bc0                 SUB EAX,EAX
150021f4  f2ae                 SCASB.REPNE ES:EDI
150021f6  4f                   DEC EDI
150021f7  8bca                 MOV ECX,EDX
150021f9  c1e902               SHR ECX,0x2
150021fc  f3a5                 MOVSD.REP ES:EDI,ESI
150021fe  8bca                 MOV ECX,EDX
15002200  6810200100           PUSH 0x12010
15002205  83e103               AND ECX,0x3
15002208  687c420015           PUSH 0x1500427c
1500220d  f3a4                 MOVSB.REP ES:EDI,ESI
1500220f  8d44241c             LEA EAX,[ESP + 0x1c]
15002213  50                   PUSH EAX
15002214  e867030000           CALL 0x15002580
15002219  83c40c               ADD ESP,0xc
1500221c  5d                   POP EBP
1500221d  5f                   POP EDI
1500221e  5e                   POP ESI
1500221f  5b                   POP EBX
15002220  81c4a8010000         ADD ESP,0x1a8
15002226  c3                   RET
15002227  a1506a0015           MOV EAX,[0x15006a50]
1500222c  8b7048               MOV ESI,dword ptr [EAX + 0x48]
1500222f  83feff               CMP ESI,-0x1
15002232  750a                 JNZ 0x1500223e
15002234  6af4                 PUSH -0xc
15002236  ff1518710015         CALL dword ptr [0x15007118]
1500223c  8bf0                 MOV ESI,EAX
1500223e  8b93e4520015         MOV EDX,dword ptr [EBX + 0x150052e4]
15002244  6a00                 PUSH 0x0
15002246  8d442414             LEA EAX,[ESP + 0x14]
1500224a  8bfa                 MOV EDI,EDX
1500224c  50                   PUSH EAX
1500224d  b9ffffffff           MOV ECX,0xffffffff
15002252  2bc0                 SUB EAX,EAX
15002254  f2ae                 SCASB.REPNE ES:EDI
15002256  f7d1                 NOT ECX
15002258  49                   DEC ECX
15002259  51                   PUSH ECX
1500225a  52                   PUSH EDX
1500225b  56                   PUSH ESI
1500225c  ff1548710015         CALL dword ptr [0x15007148]
15002262  5d                   POP EBP
15002263  5f                   POP EDI
15002264  5e                   POP ESI
15002265  5b                   POP EBX
15002266  81c4a8010000         ADD ESP,0x1a8
1500226c  c3                   RET
; undefined 3 bytes at 1500226d

; ==== FUNCTION __mtinitlocks entry=15002270 sig=int __cdecl __mtinitlocks(void)
15002270  56                   PUSH ESI
15002271  a1b4530015           MOV EAX,[0x150053b4]
15002276  50                   PUSH EAX
15002277  8b354c710015         MOV ESI,dword ptr [0x1500714c]
1500227d  ffd6                 CALL ESI
1500227f  8b0da4530015         MOV ECX,dword ptr [0x150053a4]
15002285  51                   PUSH ECX
15002286  ffd6                 CALL ESI
15002288  a194530015           MOV EAX,[0x15005394]
1500228d  50                   PUSH EAX
1500228e  ffd6                 CALL ESI
15002290  a174530015           MOV EAX,[0x15005374]
15002295  50                   PUSH EAX
15002296  ffd6                 CALL ESI
15002298  5e                   POP ESI
15002299  c3                   RET
; undefined 6 bytes at 1500229a

; ==== FUNCTION __mtdeletelocks entry=150022a0 sig=void __cdecl __mtdeletelocks(void)
150022a0  53                   PUSH EBX
150022a1  56                   PUSH ESI
150022a2  57                   PUSH EDI
150022a3  8b3520710015         MOV ESI,dword ptr [0x15007120]
150022a9  33ff                 XOR EDI,EDI
150022ab  8d1cbd70530015       LEA EBX,[EDI*0x4 + 0x15005370]
150022b2  8b03                 MOV EAX,dword ptr [EBX]
150022b4  85c0                 TEST EAX,EAX
150022b6  7422                 JZ 0x150022da
150022b8  83ff11               CMP EDI,0x11
150022bb  741d                 JZ 0x150022da
150022bd  83ff0d               CMP EDI,0xd
150022c0  7418                 JZ 0x150022da
150022c2  83ff09               CMP EDI,0x9
150022c5  7413                 JZ 0x150022da
150022c7  83ff01               CMP EDI,0x1
150022ca  740e                 JZ 0x150022da
150022cc  50                   PUSH EAX
150022cd  ffd6                 CALL ESI
150022cf  8b03                 MOV EAX,dword ptr [EBX]
150022d1  50                   PUSH EAX
150022d2  e809020000           CALL 0x150024e0
150022d7  83c404               ADD ESP,0x4
150022da  47                   INC EDI
150022db  83ff30               CMP EDI,0x30
150022de  7ccb                 JL 0x150022ab
150022e0  a194530015           MOV EAX,[0x15005394]
150022e5  50                   PUSH EAX
150022e6  ffd6                 CALL ESI
150022e8  a1a4530015           MOV EAX,[0x150053a4]
150022ed  50                   PUSH EAX
150022ee  ffd6                 CALL ESI
150022f0  a1b4530015           MOV EAX,[0x150053b4]
150022f5  50                   PUSH EAX
150022f6  ffd6                 CALL ESI
150022f8  a174530015           MOV EAX,[0x15005374]
150022fd  50                   PUSH EAX
150022fe  ffd6                 CALL ESI
15002300  5f                   POP EDI
15002301  5e                   POP ESI
15002302  5b                   POP EBX
15002303  c3                   RET
; undefined 12 bytes at 15002304

; ==== FUNCTION __lock entry=15002310 sig=void __cdecl __lock(int _File)
15002310  55                   PUSH EBP
15002311  8b442408             MOV EAX,dword ptr [ESP + 0x8]
15002315  8bec                 MOV EBP,ESP
15002317  56                   PUSH ESI
15002318  57                   PUSH EDI
15002319  8d3c8570530015       LEA EDI,[EAX*0x4 + 0x15005370]
15002320  833f00               CMP dword ptr [EDI],0x0
15002323  7546                 JNZ 0x1500236b
15002325  6a18                 PUSH 0x18
15002327  e8d4010000           CALL 0x15002500
1500232c  83c404               ADD ESP,0x4
1500232f  8bf0                 MOV ESI,EAX
15002331  85f6                 TEST ESI,ESI
15002333  750a                 JNZ 0x1500233f
15002335  6a11                 PUSH 0x11
15002337  e8f4eeffff           CALL 0x15001230
1500233c  83c404               ADD ESP,0x4
1500233f  6a11                 PUSH 0x11
15002341  e8caffffff           CALL 0x15002310
15002346  83c404               ADD ESP,0x4
15002349  833f00               CMP dword ptr [EDI],0x0
1500234c  56                   PUSH ESI
1500234d  750a                 JNZ 0x15002359
1500234f  ff154c710015         CALL dword ptr [0x1500714c]
15002355  8937                 MOV dword ptr [EDI],ESI
15002357  eb08                 JMP 0x15002361
15002359  e882010000           CALL 0x150024e0
1500235e  83c404               ADD ESP,0x4
15002361  6a11                 PUSH 0x11
15002363  e818000000           CALL 0x15002380
15002368  83c404               ADD ESP,0x4
1500236b  8b07                 MOV EAX,dword ptr [EDI]
1500236d  50                   PUSH EAX
1500236e  ff1550710015         CALL dword ptr [0x15007150]
15002374  5f                   POP EDI
15002375  5e                   POP ESI
15002376  5d                   POP EBP
15002377  c3                   RET
; undefined 8 bytes at 15002378

; ==== FUNCTION FUN_15002380 entry=15002380 sig=undefined __cdecl FUN_15002380(int param_1)
15002380  55                   PUSH EBP
15002381  8b442408             MOV EAX,dword ptr [ESP + 0x8]
15002385  8bec                 MOV EBP,ESP
15002387  8b0c8570530015       MOV ECX,dword ptr [EAX*0x4 + 0x15005370]
1500238e  51                   PUSH ECX
1500238f  ff1554710015         CALL dword ptr [0x15007154]
15002395  5d                   POP EBP
15002396  c3                   RET
; undefined 9 bytes at 15002397

; ==== FUNCTION FID_conflict:__lock_file entry=150023a0 sig=void __cdecl FID_conflict:__lock_file(FILE * _File)
150023a0  55                   PUSH EBP
150023a1  8b442408             MOV EAX,dword ptr [ESP + 0x8]
150023a5  8bec                 MOV EBP,ESP
150023a7  3de0540015           CMP EAX,0x150054e0
150023ac  721c                 JC 0x150023ca
150023ae  3d40570015           CMP EAX,0x15005740
150023b3  7715                 JA 0x150023ca
150023b5  2de0540015           SUB EAX,0x150054e0
150023ba  c1f805               SAR EAX,0x5
150023bd  83c01c               ADD EAX,0x1c
150023c0  50                   PUSH EAX
150023c1  e84affffff           CALL 0x15002310
150023c6  8be5                 MOV ESP,EBP
150023c8  5d                   POP EBP
150023c9  c3                   RET
150023ca  83c020               ADD EAX,0x20
150023cd  50                   PUSH EAX
150023ce  ff1550710015         CALL dword ptr [0x15007150]
150023d4  5d                   POP EBP
150023d5  c3                   RET
; undefined 10 bytes at 150023d6

; ==== FUNCTION FID_conflict:__lock_file2 entry=150023e0 sig=void __cdecl FID_conflict:__lock_file2(int _Index, void * _File)
150023e0  55                   PUSH EBP
150023e1  8b442408             MOV EAX,dword ptr [ESP + 0x8]
150023e5  8bec                 MOV EBP,ESP
150023e7  83f814               CMP EAX,0x14
150023ea  7d0d                 JGE 0x150023f9
150023ec  83c01c               ADD EAX,0x1c
150023ef  50                   PUSH EAX
150023f0  e81bffffff           CALL 0x15002310
150023f5  8be5                 MOV ESP,EBP
150023f7  5d                   POP EBP
150023f8  c3                   RET
150023f9  8b450c               MOV EAX,dword ptr [EBP + 0xc]
150023fc  83c020               ADD EAX,0x20
150023ff  50                   PUSH EAX
15002400  ff1550710015         CALL dword ptr [0x15007150]
15002406  5d                   POP EBP
15002407  c3                   RET
; undefined 8 bytes at 15002408

; ==== FUNCTION FID_conflict:__lock_file entry=15002410 sig=void __cdecl FID_conflict:__lock_file(FILE * _File)
15002410  55                   PUSH EBP
15002411  8b442408             MOV EAX,dword ptr [ESP + 0x8]
15002415  8bec                 MOV EBP,ESP
15002417  3de0540015           CMP EAX,0x150054e0
1500241c  721c                 JC 0x1500243a
1500241e  3d40570015           CMP EAX,0x15005740
15002423  7715                 JA 0x1500243a
15002425  2de0540015           SUB EAX,0x150054e0
1500242a  c1f805               SAR EAX,0x5
1500242d  83c01c               ADD EAX,0x1c
15002430  50                   PUSH EAX
15002431  e84affffff           CALL 0x15002380
15002436  8be5                 MOV ESP,EBP
15002438  5d                   POP EBP
15002439  c3                   RET
1500243a  83c020               ADD EAX,0x20
1500243d  50                   PUSH EAX
1500243e  ff1554710015         CALL dword ptr [0x15007154]
15002444  5d                   POP EBP
15002445  c3                   RET
; undefined 10 bytes at 15002446

; ==== FUNCTION FID_conflict:__lock_file2 entry=15002450 sig=void __cdecl FID_conflict:__lock_file2(int _Index, void * _File)
15002450  55                   PUSH EBP
15002451  8b442408             MOV EAX,dword ptr [ESP + 0x8]
15002455  8bec                 MOV EBP,ESP
15002457  83f814               CMP EAX,0x14
1500245a  7d0d                 JGE 0x15002469
1500245c  83c01c               ADD EAX,0x1c
1500245f  50                   PUSH EAX
15002460  e81bffffff           CALL 0x15002380
15002465  8be5                 MOV ESP,EBP
15002467  5d                   POP EBP
15002468  c3                   RET
15002469  8b450c               MOV EAX,dword ptr [EBP + 0xc]
1500246c  83c020               ADD EAX,0x20
1500246f  50                   PUSH EAX
15002470  ff1554710015         CALL dword ptr [0x15007154]
15002476  5d                   POP EBP
15002477  c3                   RET
; undefined 8 bytes at 15002478

; ==== FUNCTION FUN_15002480 entry=15002480 sig=LPVOID __cdecl FUN_15002480(int param_1, int param_2)
15002480  56                   PUSH ESI
15002481  57                   PUSH EDI
15002482  8b7c2410             MOV EDI,dword ptr [ESP + 0x10]
15002486  0faf7c240c           IMUL EDI,dword ptr [ESP + 0xc]
1500248b  85ff                 TEST EDI,EDI
1500248d  7505                 JNZ 0x15002494
1500248f  bf01000000           MOV EDI,0x1
15002494  a1546b0015           MOV EAX,[0x15006b54]
15002499  8b3558710015         MOV ESI,dword ptr [0x15007158]
1500249f  83ffe0               CMP EDI,-0x20
150024a2  7604                 JBE 0x150024a8
150024a4  33c0                 XOR EAX,EAX
150024a6  eb06                 JMP 0x150024ae
150024a8  57                   PUSH EDI
150024a9  6a08                 PUSH 0x8
150024ab  50                   PUSH EAX
150024ac  ffd6                 CALL ESI
150024ae  85c0                 TEST EAX,EAX
150024b0  751d                 JNZ 0x150024cf
150024b2  833d6457001500       CMP dword ptr [0x15005764],0x0
150024b9  7414                 JZ 0x150024cf
150024bb  57                   PUSH EDI
150024bc  e84f030000           CALL 0x15002810
150024c1  83c404               ADD ESP,0x4
150024c4  85c0                 TEST EAX,EAX
150024c6  a1546b0015           MOV EAX,[0x15006b54]
150024cb  75d2                 JNZ 0x1500249f
150024cd  33c0                 XOR EAX,EAX
150024cf  5f                   POP EDI
150024d0  5e                   POP ESI
150024d1  c3                   RET
; undefined 14 bytes at 150024d2

; ==== FUNCTION FUN_150024e0 entry=150024e0 sig=undefined __cdecl FUN_150024e0(LPVOID param_1)
150024e0  8b442404             MOV EAX,dword ptr [ESP + 0x4]
150024e4  85c0                 TEST EAX,EAX
150024e6  740f                 JZ 0x150024f7
150024e8  50                   PUSH EAX
150024e9  6a00                 PUSH 0x0
150024eb  a1546b0015           MOV EAX,[0x15006b54]
150024f0  50                   PUSH EAX
150024f1  ff155c710015         CALL dword ptr [0x1500715c]
150024f7  c3                   RET
; undefined 8 bytes at 150024f8

; ==== FUNCTION FUN_15002500 entry=15002500 sig=undefined __cdecl FUN_15002500(SIZE_T param_1)
15002500  a164570015           MOV EAX,[0x15005764]
15002505  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
15002509  50                   PUSH EAX
1500250a  51                   PUSH ECX
1500250b  e810000000           CALL 0x15002520
15002510  83c408               ADD ESP,0x8
15002513  c3                   RET
; undefined 12 bytes at 15002514

; ==== FUNCTION FUN_15002520 entry=15002520 sig=int __cdecl FUN_15002520(SIZE_T param_1, int param_2)
15002520  56                   PUSH ESI
15002521  57                   PUSH EDI
15002522  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
15002526  83fee0               CMP ESI,-0x20
15002529  7605                 JBE 0x15002530
1500252b  33c0                 XOR EAX,EAX
1500252d  5f                   POP EDI
1500252e  5e                   POP ESI
1500252f  c3                   RET
15002530  85f6                 TEST ESI,ESI
15002532  7505                 JNZ 0x15002539
15002534  be01000000           MOV ESI,0x1
15002539  8b7c2410             MOV EDI,dword ptr [ESP + 0x10]
1500253d  56                   PUSH ESI
1500253e  e81d000000           CALL 0x15002560
15002543  83c404               ADD ESP,0x4
15002546  85c0                 TEST EAX,EAX
15002548  7513                 JNZ 0x1500255d
1500254a  85ff                 TEST EDI,EDI
1500254c  740f                 JZ 0x1500255d
1500254e  56                   PUSH ESI
1500254f  e8bc020000           CALL 0x15002810
15002554  83c404               ADD ESP,0x4
15002557  85c0                 TEST EAX,EAX
15002559  75e2                 JNZ 0x1500253d
1500255b  33c0                 XOR EAX,EAX
1500255d  5f                   POP EDI
1500255e  5e                   POP ESI
1500255f  c3                   RET

; ==== FUNCTION FUN_15002560 entry=15002560 sig=undefined __cdecl FUN_15002560(SIZE_T param_1)
15002560  8b442404             MOV EAX,dword ptr [ESP + 0x4]
15002564  8b0d546b0015         MOV ECX,dword ptr [0x15006b54]
1500256a  50                   PUSH EAX
1500256b  6a00                 PUSH 0x0
1500256d  51                   PUSH ECX
1500256e  ff1558710015         CALL dword ptr [0x15007158]
15002574  c3                   RET
; undefined 11 bytes at 15002575

; ==== FUNCTION ___crtMessageBoxA entry=15002580 sig=int __cdecl ___crtMessageBoxA(LPCSTR _LpText, LPCSTR _LpCaption, UINT _UType)
15002580  53                   PUSH EBX
15002581  56                   PUSH ESI
15002582  57                   PUSH EDI
15002583  33f6                 XOR ESI,ESI
15002585  3935d4540015         CMP dword ptr [0x150054d4],ESI
1500258b  7542                 JNZ 0x150025cf
1500258d  6810430015           PUSH 0x15004310
15002592  ff1560710015         CALL dword ptr [0x15007160]
15002598  8bd8                 MOV EBX,EAX
1500259a  85db                 TEST EBX,EBX
1500259c  746e                 JZ 0x1500260c
1500259e  6804430015           PUSH 0x15004304
150025a3  8b3dd4700015         MOV EDI,dword ptr [0x150070d4]
150025a9  53                   PUSH EBX
150025aa  ffd7                 CALL EDI
150025ac  a3d4540015           MOV [0x150054d4],EAX
150025b1  85c0                 TEST EAX,EAX
150025b3  7457                 JZ 0x1500260c
150025b5  68f4420015           PUSH 0x150042f4
150025ba  53                   PUSH EBX
150025bb  ffd7                 CALL EDI
150025bd  68e0420015           PUSH 0x150042e0
150025c2  a3d8540015           MOV [0x150054d8],EAX
150025c7  53                   PUSH EBX
150025c8  ffd7                 CALL EDI
150025ca  a3dc540015           MOV [0x150054dc],EAX
150025cf  a1d8540015           MOV EAX,[0x150054d8]
150025d4  85c0                 TEST EAX,EAX
150025d6  7404                 JZ 0x150025dc
150025d8  ffd0                 CALL EAX
150025da  8bf0                 MOV ESI,EAX
150025dc  85f6                 TEST ESI,ESI
150025de  7412                 JZ 0x150025f2
150025e0  833ddc54001500       CMP dword ptr [0x150054dc],0x0
150025e7  7409                 JZ 0x150025f2
150025e9  56                   PUSH ESI
150025ea  ff15dc540015         CALL dword ptr [0x150054dc]
150025f0  8bf0                 MOV ESI,EAX
150025f2  8b442418             MOV EAX,dword ptr [ESP + 0x18]
150025f6  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
150025fa  8b542410             MOV EDX,dword ptr [ESP + 0x10]
150025fe  50                   PUSH EAX
150025ff  51                   PUSH ECX
15002600  52                   PUSH EDX
15002601  56                   PUSH ESI
15002602  ff15d4540015         CALL dword ptr [0x150054d4]
15002608  5f                   POP EDI
15002609  5e                   POP ESI
1500260a  5b                   POP EBX
1500260b  c3                   RET
1500260c  33c0                 XOR EAX,EAX
1500260e  5f                   POP EDI
1500260f  5e                   POP ESI
15002610  5b                   POP EBX
15002611  c3                   RET
; undefined 14 bytes at 15002612

; ==== FUNCTION _strncpy entry=15002620 sig=char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count)
15002620  8b4c240c             MOV ECX,dword ptr [ESP + 0xc]
15002624  57                   PUSH EDI
15002625  85c9                 TEST ECX,ECX
15002627  747a                 JZ 0x150026a3
15002629  56                   PUSH ESI
1500262a  53                   PUSH EBX
1500262b  8bd9                 MOV EBX,ECX
1500262d  8b742414             MOV ESI,dword ptr [ESP + 0x14]
15002631  f7c603000000         TEST ESI,0x3
15002637  8b7c2410             MOV EDI,dword ptr [ESP + 0x10]
1500263b  7507                 JNZ 0x15002644
1500263d  c1e902               SHR ECX,0x2
15002640  756f                 JNZ 0x150026b1
15002642  eb21                 JMP 0x15002665
15002644  8a06                 MOV AL,byte ptr [ESI]
15002646  46                   INC ESI
15002647  8807                 MOV byte ptr [EDI],AL
15002649  47                   INC EDI
1500264a  49                   DEC ECX
1500264b  7425                 JZ 0x15002672
1500264d  84c0                 TEST AL,AL
1500264f  7429                 JZ 0x1500267a
15002651  f7c603000000         TEST ESI,0x3
15002657  75eb                 JNZ 0x15002644
15002659  8bd9                 MOV EBX,ECX
1500265b  c1e902               SHR ECX,0x2
1500265e  7551                 JNZ 0x150026b1
15002660  83e303               AND EBX,0x3
15002663  740d                 JZ 0x15002672
15002665  8a06                 MOV AL,byte ptr [ESI]
15002667  46                   INC ESI
15002668  8807                 MOV byte ptr [EDI],AL
1500266a  47                   INC EDI
1500266b  84c0                 TEST AL,AL
1500266d  742f                 JZ 0x1500269e
1500266f  4b                   DEC EBX
15002670  75f3                 JNZ 0x15002665
15002672  8b442410             MOV EAX,dword ptr [ESP + 0x10]
15002676  5b                   POP EBX
15002677  5e                   POP ESI
15002678  5f                   POP EDI
15002679  c3                   RET
1500267a  f7c703000000         TEST EDI,0x3
15002680  7412                 JZ 0x15002694
15002682  8807                 MOV byte ptr [EDI],AL
15002684  47                   INC EDI
15002685  49                   DEC ECX
15002686  0f848a000000         JZ 0x15002716
1500268c  f7c703000000         TEST EDI,0x3
15002692  75ee                 JNZ 0x15002682
15002694  8bd9                 MOV EBX,ECX
15002696  c1e902               SHR ECX,0x2
15002699  756c                 JNZ 0x15002707
1500269b  8807                 MOV byte ptr [EDI],AL
1500269d  47                   INC EDI
1500269e  4b                   DEC EBX
1500269f  75fa                 JNZ 0x1500269b
150026a1  5b                   POP EBX
150026a2  5e                   POP ESI
150026a3  8b442408             MOV EAX,dword ptr [ESP + 0x8]
150026a7  5f                   POP EDI
150026a8  c3                   RET
150026a9  8917                 MOV dword ptr [EDI],EDX
150026ab  83c704               ADD EDI,0x4
150026ae  49                   DEC ECX
150026af  74af                 JZ 0x15002660
150026b1  bafffefe7e           MOV EDX,0x7efefeff
150026b6  8b06                 MOV EAX,dword ptr [ESI]
150026b8  03d0                 ADD EDX,EAX
150026ba  83f0ff               XOR EAX,0xffffffff
150026bd  33c2                 XOR EAX,EDX
150026bf  8b16                 MOV EDX,dword ptr [ESI]
150026c1  83c604               ADD ESI,0x4
150026c4  a900010181           TEST EAX,0x81010100
150026c9  74de                 JZ 0x150026a9
150026cb  84d2                 TEST DL,DL
150026cd  742c                 JZ 0x150026fb
150026cf  84f6                 TEST DH,DH
150026d1  741e                 JZ 0x150026f1
150026d3  f7c20000ff00         TEST EDX,0xff0000
150026d9  740c                 JZ 0x150026e7
150026db  f7c2000000ff         TEST EDX,0xff000000
150026e1  75c6                 JNZ 0x150026a9
150026e3  8917                 MOV dword ptr [EDI],EDX
150026e5  eb18                 JMP 0x150026ff
150026e7  81e2ffff0000         AND EDX,0xffff
150026ed  8917                 MOV dword ptr [EDI],EDX
150026ef  eb0e                 JMP 0x150026ff
150026f1  81e2ff000000         AND EDX,0xff
150026f7  8917                 MOV dword ptr [EDI],EDX
150026f9  eb04                 JMP 0x150026ff
150026fb  33d2                 XOR EDX,EDX
150026fd  8917                 MOV dword ptr [EDI],EDX
150026ff  83c704               ADD EDI,0x4
15002702  33c0                 XOR EAX,EAX
15002704  49                   DEC ECX
15002705  740a                 JZ 0x15002711
15002707  33c0                 XOR EAX,EAX
15002709  8907                 MOV dword ptr [EDI],EAX
1500270b  83c704               ADD EDI,0x4
1500270e  49                   DEC ECX
1500270f  75f8                 JNZ 0x15002709
15002711  83e303               AND EBX,0x3
15002714  7585                 JNZ 0x1500269b
15002716  8b442410             MOV EAX,dword ptr [ESP + 0x10]
1500271a  5b                   POP EBX
1500271b  5e                   POP ESI
1500271c  5f                   POP EDI
1500271d  c3                   RET
; undefined 2 bytes at 1500271e

; ==== FUNCTION FUN_15002720 entry=15002720 sig=undefined __stdcall FUN_15002720(void)
15002720  833d406a001500       CMP dword ptr [0x15006a40],0x0
15002727  56                   PUSH ESI
15002728  750c                 JNZ 0x15002736
1500272a  c705406a001500020000 MOV dword ptr [0x15006a40],0x200
15002734  eb13                 JMP 0x15002749
15002736  833d406a001514       CMP dword ptr [0x15006a40],0x14
1500273d  7d0a                 JGE 0x15002749
1500273f  c705406a001514000000 MOV dword ptr [0x15006a40],0x14
15002749  6a04                 PUSH 0x4
1500274b  a1406a0015           MOV EAX,[0x15006a40]
15002750  50                   PUSH EAX
15002751  e82afdffff           CALL 0x15002480
15002756  83c408               ADD ESP,0x8
15002759  a33c5a0015           MOV [0x15005a3c],EAX
1500275e  85c0                 TEST EAX,EAX
15002760  7529                 JNZ 0x1500278b
15002762  c705406a001514000000 MOV dword ptr [0x15006a40],0x14
1500276c  6a04                 PUSH 0x4
1500276e  6a14                 PUSH 0x14
15002770  e80bfdffff           CALL 0x15002480
15002775  83c408               ADD ESP,0x8
15002778  a33c5a0015           MOV [0x15005a3c],EAX
1500277d  85c0                 TEST EAX,EAX
1500277f  750a                 JNZ 0x1500278b
15002781  6a1a                 PUSH 0x1a
15002783  e8a8eaffff           CALL 0x15001230
15002788  83c404               ADD ESP,0x4
1500278b  b9e0540015           MOV ECX,0x150054e0
15002790  33c0                 XOR EAX,EAX
15002792  8b153c5a0015         MOV EDX,dword ptr [0x15005a3c]
15002798  83c004               ADD EAX,0x4
1500279b  894c02fc             MOV dword ptr [EDX + EAX*0x1 + -0x4],ECX
1500279f  83c120               ADD ECX,0x20
150027a2  83f850               CMP EAX,0x50
150027a5  7ceb                 JL 0x15002792
150027a7  33f6                 XOR ESI,ESI
150027a9  baf0540015           MOV EDX,0x150054f0
150027ae  8bc6                 MOV EAX,ESI
150027b0  8bce                 MOV ECX,ESI
150027b2  83e0e7               AND EAX,0xffffffe7
150027b5  83e11f               AND ECX,0x1f
150027b8  c1f803               SAR EAX,0x3
150027bb  c1e102               SHL ECX,0x2
150027be  8b80506a0015         MOV EAX,dword ptr [EAX + 0x15006a50]
150027c4  8d0cc9               LEA ECX,[ECX + ECX*0x8]
150027c7  8b0408               MOV EAX,dword ptr [EAX + ECX*0x1]
150027ca  83f8ff               CMP EAX,-0x1
150027cd  7404                 JZ 0x150027d3
150027cf  85c0                 TEST EAX,EAX
150027d1  7506                 JNZ 0x150027d9
150027d3  c702ffffffff         MOV dword ptr [EDX],0xffffffff
150027d9  83c220               ADD EDX,0x20
150027dc  46                   INC ESI
150027dd  81fa50550015         CMP EDX,0x15005550
150027e3  72c9                 JC 0x150027ae
150027e5  5e                   POP ESI
150027e6  c3                   RET

; ==== FUNCTION FUN_150027e7 entry=150027e7 sig=undefined FUN_150027e7(void)
150027e7  cc                   INT3

; ==== FUNCTION FUN_150027e8 entry=150027e8 sig=undefined FUN_150027e8(void)
150027e8  cc                   INT3

; ==== FUNCTION FUN_150027e9 entry=150027e9 sig=undefined FUN_150027e9(void)
150027e9  cc                   INT3

; ==== FUNCTION FUN_150027ea entry=150027ea sig=undefined FUN_150027ea(void)
150027ea  cc                   INT3

; ==== FUNCTION FUN_150027eb entry=150027eb sig=undefined FUN_150027eb(void)
150027eb  cc                   INT3

; ==== FUNCTION FUN_150027ec entry=150027ec sig=undefined FUN_150027ec(void)
150027ec  cc                   INT3

; ==== FUNCTION FUN_150027ed entry=150027ed sig=undefined FUN_150027ed(void)
150027ed  cc                   INT3

; ==== FUNCTION FUN_150027ee entry=150027ee sig=undefined FUN_150027ee(void)
150027ee  cc                   INT3

; ==== FUNCTION FUN_150027ef entry=150027ef sig=undefined FUN_150027ef(void)
150027ef  cc                   INT3

; ==== FUNCTION FUN_150027f0 entry=150027f0 sig=undefined FUN_150027f0(void)
150027f0  e8ab010000           CALL 0x150029a0
150027f5  803d8050001500       CMP byte ptr [0x15005080],0x0
150027fc  7405                 JZ 0x15002803
150027fe  e94d000000           JMP 0x15002850
15002803  c3                   RET

; ==== FUNCTION FUN_15002804 entry=15002804 sig=undefined FUN_15002804(void)
15002804  cc                   INT3

; ==== FUNCTION FUN_15002805 entry=15002805 sig=undefined FUN_15002805(void)
15002805  cc                   INT3

; ==== FUNCTION FUN_15002806 entry=15002806 sig=undefined FUN_15002806(void)
15002806  cc                   INT3

; ==== FUNCTION FUN_15002807 entry=15002807 sig=undefined FUN_15002807(void)
15002807  cc                   INT3

; ==== FUNCTION FUN_15002808 entry=15002808 sig=undefined FUN_15002808(void)
15002808  cc                   INT3

; ==== FUNCTION FUN_15002809 entry=15002809 sig=undefined FUN_15002809(void)
15002809  cc                   INT3

; ==== FUNCTION FUN_1500280a entry=1500280a sig=undefined FUN_1500280a(void)
1500280a  cc                   INT3

; ==== FUNCTION FUN_1500280b entry=1500280b sig=undefined FUN_1500280b(void)
1500280b  cc                   INT3

; ==== FUNCTION FUN_1500280c entry=1500280c sig=undefined FUN_1500280c(void)
1500280c  cc                   INT3

; ==== FUNCTION FUN_1500280d entry=1500280d sig=undefined FUN_1500280d(void)
1500280d  cc                   INT3

; ==== FUNCTION FUN_1500280e entry=1500280e sig=undefined FUN_1500280e(void)
1500280e  cc                   INT3

; ==== FUNCTION FUN_1500280f entry=1500280f sig=undefined FUN_1500280f(void)
1500280f  cc                   INT3

; ==== FUNCTION __callnewh entry=15002810 sig=int __cdecl __callnewh(size_t _Size)
15002810  6a09                 PUSH 0x9
15002812  e8f9faffff           CALL 0x15002310
15002817  83c404               ADD ESP,0x4
1500281a  a1385a0015           MOV EAX,[0x15005a38]
1500281f  85c0                 TEST EAX,EAX
15002821  741e                 JZ 0x15002841
15002823  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
15002827  51                   PUSH ECX
15002828  ffd0                 CALL EAX
1500282a  83c404               ADD ESP,0x4
1500282d  85c0                 TEST EAX,EAX
1500282f  7410                 JZ 0x15002841
15002831  6a09                 PUSH 0x9
15002833  e848fbffff           CALL 0x15002380
15002838  83c404               ADD ESP,0x4
1500283b  b801000000           MOV EAX,0x1
15002840  c3                   RET
15002841  6a09                 PUSH 0x9
15002843  e838fbffff           CALL 0x15002380
15002848  83c404               ADD ESP,0x4
1500284b  33c0                 XOR EAX,EAX
1500284d  c3                   RET
; undefined 2 bytes at 1500284e

; ==== FUNCTION FUN_15002850 entry=15002850 sig=int __stdcall FUN_15002850(void)
15002850  53                   PUSH EBX
15002851  56                   PUSH ESI
15002852  57                   PUSH EDI
15002853  33db                 XOR EBX,EBX
15002855  55                   PUSH EBP
15002856  6a02                 PUSH 0x2
15002858  bd03000000           MOV EBP,0x3
1500285d  e8aefaffff           CALL 0x15002310
15002862  83c404               ADD ESP,0x4
15002865  392d406a0015         CMP dword ptr [0x15006a40],EBP
1500286b  7e6a                 JLE 0x150028d7
1500286d  be0c000000           MOV ESI,0xc
15002872  8b3d20710015         MOV EDI,dword ptr [0x15007120]
15002878  a13c5a0015           MOV EAX,[0x15005a3c]
1500287d  8b0430               MOV EAX,dword ptr [EAX + ESI*0x1]
15002880  85c0                 TEST EAX,EAX
15002882  7447                 JZ 0x150028cb
15002884  f6400c83             TEST byte ptr [EAX + 0xc],0x83
15002888  740f                 JZ 0x15002899
1500288a  50                   PUSH EAX
1500288b  e8f0010000           CALL 0x15002a80
15002890  83c404               ADD ESP,0x4
15002893  83f8ff               CMP EAX,-0x1
15002896  7401                 JZ 0x15002899
15002898  43                   INC EBX
15002899  83fe50               CMP ESI,0x50
1500289c  7c2d                 JL 0x150028cb
1500289e  a13c5a0015           MOV EAX,[0x15005a3c]
150028a3  8b0430               MOV EAX,dword ptr [EAX + ESI*0x1]
150028a6  83c020               ADD EAX,0x20
150028a9  50                   PUSH EAX
150028aa  ffd7                 CALL EDI
150028ac  8b0d3c5a0015         MOV ECX,dword ptr [0x15005a3c]
150028b2  8b1431               MOV EDX,dword ptr [ECX + ESI*0x1]
150028b5  52                   PUSH EDX
150028b6  e825fcffff           CALL 0x150024e0
150028bb  83c404               ADD ESP,0x4
150028be  8b0d3c5a0015         MOV ECX,dword ptr [0x15005a3c]
150028c4  c7043100000000       MOV dword ptr [ECX + ESI*0x1],0x0
150028cb  83c604               ADD ESI,0x4
150028ce  45                   INC EBP
150028cf  392d406a0015         CMP dword ptr [0x15006a40],EBP
150028d5  7fa1                 JG 0x15002878
150028d7  6a02                 PUSH 0x2
150028d9  e8a2faffff           CALL 0x15002380
150028de  83c404               ADD ESP,0x4
150028e1  8bc3                 MOV EAX,EBX
150028e3  5d                   POP EBP
150028e4  5f                   POP EDI
150028e5  5e                   POP ESI
150028e6  5b                   POP EBX
150028e7  c3                   RET
; undefined 8 bytes at 150028e8

; ==== FUNCTION __fflush_lk entry=150028f0 sig=int __cdecl __fflush_lk(FILE * param_1)
150028f0  56                   PUSH ESI
150028f1  8b742408             MOV ESI,dword ptr [ESP + 0x8]
150028f5  56                   PUSH ESI
150028f6  e835000000           CALL 0x15002930
150028fb  83c404               ADD ESP,0x4
150028fe  85c0                 TEST EAX,EAX
15002900  7407                 JZ 0x15002909
15002902  b8ffffffff           MOV EAX,0xffffffff
15002907  5e                   POP ESI
15002908  c3                   RET
15002909  f6460d40             TEST byte ptr [ESI + 0xd],0x40
1500290d  7419                 JZ 0x15002928
1500290f  8b4610               MOV EAX,dword ptr [ESI + 0x10]
15002912  50                   PUSH EAX
15002913  e808020000           CALL 0x15002b20
15002918  83c404               ADD ESP,0x4
1500291b  83f801               CMP EAX,0x1
1500291e  b800000000           MOV EAX,0x0
15002923  5e                   POP ESI
15002924  83d0ff               ADC EAX,-0x1
15002927  c3                   RET
15002928  33c0                 XOR EAX,EAX
1500292a  5e                   POP ESI
1500292b  c3                   RET
; undefined 4 bytes at 1500292c

; ==== FUNCTION __flush entry=15002930 sig=int __cdecl __flush(FILE * _File)
15002930  53                   PUSH EBX
15002931  56                   PUSH ESI
15002932  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
15002936  57                   PUSH EDI
15002937  33ff                 XOR EDI,EDI
15002939  8b460c               MOV EAX,dword ptr [ESI + 0xc]
1500293c  8bc8                 MOV ECX,EAX
1500293e  80e103               AND CL,0x3
15002941  80f902               CMP CL,0x2
15002944  753c                 JNZ 0x15002982
15002946  a908010000           TEST EAX,0x108
1500294b  7435                 JZ 0x15002982
1500294d  8b4608               MOV EAX,dword ptr [ESI + 0x8]
15002950  8b1e                 MOV EBX,dword ptr [ESI]
15002952  2bd8                 SUB EBX,EAX
15002954  85db                 TEST EBX,EBX
15002956  7e2a                 JLE 0x15002982
15002958  53                   PUSH EBX
15002959  50                   PUSH EAX
1500295a  8b4610               MOV EAX,dword ptr [ESI + 0x10]
1500295d  50                   PUSH EAX
1500295e  e86d020000           CALL 0x15002bd0
15002963  83c40c               ADD ESP,0xc
15002966  3bc3                 CMP EAX,EBX
15002968  750f                 JNZ 0x15002979
1500296a  8b460c               MOV EAX,dword ptr [ESI + 0xc]
1500296d  a880                 TEST AL,0x80
1500296f  7411                 JZ 0x15002982
15002971  83e0fd               AND EAX,0xfffffffd
15002974  89460c               MOV dword ptr [ESI + 0xc],EAX
15002977  eb09                 JMP 0x15002982
15002979  834e0c20             OR dword ptr [ESI + 0xc],0x20
1500297d  bfffffffff           MOV EDI,0xffffffff
15002982  8b4608               MOV EAX,dword ptr [ESI + 0x8]
15002985  8906                 MOV dword ptr [ESI],EAX
15002987  8bc7                 MOV EAX,EDI
15002989  c7460400000000       MOV dword ptr [ESI + 0x4],0x0
15002990  5f                   POP EDI
15002991  5e                   POP ESI
15002992  5b                   POP EBX
15002993  c3                   RET
; undefined 12 bytes at 15002994

; ==== FUNCTION FUN_150029a0 entry=150029a0 sig=undefined __stdcall FUN_150029a0(void)
150029a0  6a01                 PUSH 0x1

; ==== FUNCTION FUN_150029a2 entry=150029a2 sig=undefined FUN_150029a2(void)
150029a2  e809000000           CALL 0x150029b0
150029a7  83c404               ADD ESP,0x4
150029aa  c3                   RET

; ==== FUNCTION FUN_150029ab entry=150029ab sig=undefined FUN_150029ab(void)
150029ab  cc                   INT3

; ==== FUNCTION FUN_150029ac entry=150029ac sig=undefined FUN_150029ac(void)
150029ac  cc                   INT3

; ==== FUNCTION FUN_150029ad entry=150029ad sig=undefined FUN_150029ad(void)
150029ad  cc                   INT3

; ==== FUNCTION FUN_150029ae entry=150029ae sig=undefined FUN_150029ae(void)
150029ae  cc                   INT3

; ==== FUNCTION FUN_150029af entry=150029af sig=undefined FUN_150029af(void)
150029af  cc                   INT3

; ==== FUNCTION flsall entry=150029b0 sig=int __cdecl flsall(int param_1)
150029b0  83ec04               SUB ESP,0x4
150029b3  53                   PUSH EBX
150029b4  56                   PUSH ESI
150029b5  57                   PUSH EDI
150029b6  33db                 XOR EBX,EBX
150029b8  55                   PUSH EBP
150029b9  33ff                 XOR EDI,EDI
150029bb  895c2410             MOV dword ptr [ESP + 0x10],EBX
150029bf  6a02                 PUSH 0x2
150029c1  e84af9ffff           CALL 0x15002310
150029c6  83c404               ADD ESP,0x4
150029c9  391d406a0015         CMP dword ptr [0x15006a40],EBX
150029cf  0f8e85000000         JLE 0x15002a5a
150029d5  33ed                 XOR EBP,EBP
150029d7  8b742418             MOV ESI,dword ptr [ESP + 0x18]
150029db  a13c5a0015           MOV EAX,[0x15005a3c]
150029e0  8b0428               MOV EAX,dword ptr [EAX + EBP*0x1]
150029e3  85c0                 TEST EAX,EAX
150029e5  7465                 JZ 0x15002a4c
150029e7  f6400c83             TEST byte ptr [EAX + 0xc],0x83
150029eb  745f                 JZ 0x15002a4c
150029ed  50                   PUSH EAX
150029ee  57                   PUSH EDI
150029ef  e8ecf9ffff           CALL 0x150023e0
150029f4  83c408               ADD ESP,0x8
150029f7  a13c5a0015           MOV EAX,[0x15005a3c]
150029fc  8b0c28               MOV ECX,dword ptr [EAX + EBP*0x1]
150029ff  8b410c               MOV EAX,dword ptr [ECX + 0xc]
15002a02  a883                 TEST AL,0x83
15002a04  7434                 JZ 0x15002a3a
15002a06  83fe01               CMP ESI,0x1
15002a09  7511                 JNZ 0x15002a1c
15002a0b  51                   PUSH ECX
15002a0c  e8dffeffff           CALL 0x150028f0
15002a11  83c404               ADD ESP,0x4
15002a14  83f8ff               CMP EAX,-0x1
15002a17  7421                 JZ 0x15002a3a
15002a19  43                   INC EBX
15002a1a  eb1e                 JMP 0x15002a3a
15002a1c  85f6                 TEST ESI,ESI
15002a1e  751a                 JNZ 0x15002a3a
15002a20  a802                 TEST AL,0x2
15002a22  7416                 JZ 0x15002a3a
15002a24  51                   PUSH ECX
15002a25  e8c6feffff           CALL 0x150028f0
15002a2a  83c404               ADD ESP,0x4
15002a2d  83f8ff               CMP EAX,-0x1
15002a30  7508                 JNZ 0x15002a3a
15002a32  c7442410ffffffff     MOV dword ptr [ESP + 0x10],0xffffffff
15002a3a  a13c5a0015           MOV EAX,[0x15005a3c]
15002a3f  8b0c28               MOV ECX,dword ptr [EAX + EBP*0x1]
15002a42  51                   PUSH ECX
15002a43  57                   PUSH EDI
15002a44  e807faffff           CALL 0x15002450
15002a49  83c408               ADD ESP,0x8
15002a4c  83c504               ADD EBP,0x4
15002a4f  47                   INC EDI
15002a50  3b3d406a0015         CMP EDI,dword ptr [0x15006a40]
15002a56  7c83                 JL 0x150029db
15002a58  eb04                 JMP 0x15002a5e
15002a5a  8b742418             MOV ESI,dword ptr [ESP + 0x18]
15002a5e  6a02                 PUSH 0x2
15002a60  e81bf9ffff           CALL 0x15002380
15002a65  83c404               ADD ESP,0x4
15002a68  8bc3                 MOV EAX,EBX
15002a6a  83fe01               CMP ESI,0x1
15002a6d  7404                 JZ 0x15002a73
15002a6f  8b442410             MOV EAX,dword ptr [ESP + 0x10]
15002a73  5d                   POP EBP
15002a74  5f                   POP EDI
15002a75  5e                   POP ESI
15002a76  5b                   POP EBX
15002a77  83c404               ADD ESP,0x4
15002a7a  c3                   RET
; undefined 5 bytes at 15002a7b

; ==== FUNCTION _fclose entry=15002a80 sig=int __cdecl _fclose(FILE * _File)
15002a80  56                   PUSH ESI
15002a81  57                   PUSH EDI
15002a82  bfffffffff           MOV EDI,0xffffffff
15002a87  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
15002a8b  f6460c40             TEST byte ptr [ESI + 0xc],0x40
15002a8f  740c                 JZ 0x15002a9d
15002a91  c7460c00000000       MOV dword ptr [ESI + 0xc],0x0
15002a98  8bc7                 MOV EAX,EDI
15002a9a  5f                   POP EDI
15002a9b  5e                   POP ESI
15002a9c  c3                   RET
15002a9d  56                   PUSH ESI
15002a9e  e8fdf8ffff           CALL 0x150023a0
15002aa3  83c404               ADD ESP,0x4
15002aa6  56                   PUSH ESI
15002aa7  e814000000           CALL 0x15002ac0
15002aac  83c404               ADD ESP,0x4
15002aaf  8bf8                 MOV EDI,EAX
15002ab1  56                   PUSH ESI
15002ab2  e859f9ffff           CALL 0x15002410
15002ab7  83c404               ADD ESP,0x4
15002aba  8bc7                 MOV EAX,EDI
15002abc  5f                   POP EDI
15002abd  5e                   POP ESI
15002abe  c3                   RET
; undefined 1 bytes at 15002abf

; ==== FUNCTION __fclose_lk entry=15002ac0 sig=int __cdecl __fclose_lk(FILE * param_1)
15002ac0  56                   PUSH ESI
15002ac1  57                   PUSH EDI
15002ac2  bfffffffff           MOV EDI,0xffffffff
15002ac7  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
15002acb  f6460c83             TEST byte ptr [ESI + 0xc],0x83
15002acf  7442                 JZ 0x15002b13
15002ad1  56                   PUSH ESI
15002ad2  e859feffff           CALL 0x15002930
15002ad7  83c404               ADD ESP,0x4
15002ada  8bf8                 MOV EDI,EAX
15002adc  56                   PUSH ESI
15002add  e86e040000           CALL 0x15002f50
15002ae2  83c404               ADD ESP,0x4
15002ae5  8b4610               MOV EAX,dword ptr [ESI + 0x10]
15002ae8  50                   PUSH EAX
15002ae9  e862030000           CALL 0x15002e50
15002aee  83c404               ADD ESP,0x4
15002af1  85c0                 TEST EAX,EAX
15002af3  7d07                 JGE 0x15002afc
15002af5  bfffffffff           MOV EDI,0xffffffff
15002afa  eb17                 JMP 0x15002b13
15002afc  8b461c               MOV EAX,dword ptr [ESI + 0x1c]
15002aff  85c0                 TEST EAX,EAX
15002b01  7410                 JZ 0x15002b13
15002b03  50                   PUSH EAX
15002b04  e8d7f9ffff           CALL 0x150024e0
15002b09  c7461c00000000       MOV dword ptr [ESI + 0x1c],0x0
15002b10  83c404               ADD ESP,0x4
15002b13  c7460c00000000       MOV dword ptr [ESI + 0xc],0x0
15002b1a  8bc7                 MOV EAX,EDI
15002b1c  5f                   POP EDI
15002b1d  5e                   POP ESI
15002b1e  c3                   RET
; undefined 1 bytes at 15002b1f

; ==== FUNCTION __commit entry=15002b20 sig=int __cdecl __commit(int _FileHandle)
15002b20  53                   PUSH EBX
15002b21  56                   PUSH ESI
15002b22  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
15002b26  57                   PUSH EDI
15002b27  3b35506b0015         CMP ESI,dword ptr [0x15006b50]
15002b2d  737f                 JNC 0x15002bae
15002b2f  8bc6                 MOV EAX,ESI
15002b31  83e0e7               AND EAX,0xffffffe7
15002b34  c1f803               SAR EAX,0x3
15002b37  8d98506a0015         LEA EBX,[EAX + 0x15006a50]
15002b3d  8bc6                 MOV EAX,ESI
15002b3f  83e01f               AND EAX,0x1f
15002b42  8b0b                 MOV ECX,dword ptr [EBX]
15002b44  c1e002               SHL EAX,0x2
15002b47  8d3cc0               LEA EDI,[EAX + EAX*0x8]
15002b4a  f644390401           TEST byte ptr [ECX + EDI*0x1 + 0x4],0x1
15002b4f  745d                 JZ 0x15002bae
15002b51  56                   PUSH ESI
15002b52  e8c9050000           CALL 0x15003120
15002b57  83c404               ADD ESP,0x4
15002b5a  8b03                 MOV EAX,dword ptr [EBX]
15002b5c  f644380401           TEST byte ptr [EAX + EDI*0x1 + 0x4],0x1
15002b61  742c                 JZ 0x15002b8f
15002b63  56                   PUSH ESI
15002b64  bf00000000           MOV EDI,0x0
15002b69  e862050000           CALL 0x150030d0
15002b6e  83c404               ADD ESP,0x4
15002b71  50                   PUSH EAX
15002b72  ff1564710015         CALL dword ptr [0x15007164]
15002b78  85c0                 TEST EAX,EAX
15002b7a  7508                 JNZ 0x15002b84
15002b7c  ff1504710015         CALL dword ptr [0x15007104]
15002b82  8bf8                 MOV EDI,EAX
15002b84  85ff                 TEST EDI,EDI
15002b86  7417                 JZ 0x15002b9f
15002b88  e893040000           CALL 0x15003020
15002b8d  8938                 MOV dword ptr [EAX],EDI
15002b8f  bfffffffff           MOV EDI,0xffffffff
15002b94  e877040000           CALL 0x15003010
15002b99  c70009000000         MOV dword ptr [EAX],0x9
15002b9f  56                   PUSH ESI
15002ba0  e8eb050000           CALL 0x15003190
15002ba5  83c404               ADD ESP,0x4
15002ba8  8bc7                 MOV EAX,EDI
15002baa  5f                   POP EDI
15002bab  5e                   POP ESI
15002bac  5b                   POP EBX
15002bad  c3                   RET
15002bae  e85d040000           CALL 0x15003010
15002bb3  5f                   POP EDI
15002bb4  c70009000000         MOV dword ptr [EAX],0x9
15002bba  b8ffffffff           MOV EAX,0xffffffff
15002bbf  5e                   POP ESI
15002bc0  5b                   POP EBX
15002bc1  c3                   RET
; undefined 14 bytes at 15002bc2

; ==== FUNCTION __write entry=15002bd0 sig=int __cdecl __write(int _FileHandle, void * _Buf, uint _MaxCharCount)
15002bd0  56                   PUSH ESI
15002bd1  57                   PUSH EDI
15002bd2  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
15002bd6  3935506b0015         CMP dword ptr [0x15006b50],ESI
15002bdc  764c                 JBE 0x15002c2a
15002bde  8bc6                 MOV EAX,ESI
15002be0  8bce                 MOV ECX,ESI
15002be2  83e0e7               AND EAX,0xffffffe7
15002be5  83e11f               AND ECX,0x1f
15002be8  c1f803               SAR EAX,0x3
15002beb  c1e102               SHL ECX,0x2
15002bee  8b90506a0015         MOV EDX,dword ptr [EAX + 0x15006a50]
15002bf4  8d04c9               LEA EAX,[ECX + ECX*0x8]
15002bf7  f644020401           TEST byte ptr [EDX + EAX*0x1 + 0x4],0x1
15002bfc  742c                 JZ 0x15002c2a
15002bfe  56                   PUSH ESI
15002bff  e81c050000           CALL 0x15003120
15002c04  8b442418             MOV EAX,dword ptr [ESP + 0x18]
15002c08  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
15002c0c  83c404               ADD ESP,0x4
15002c0f  50                   PUSH EAX
15002c10  51                   PUSH ECX
15002c11  56                   PUSH ESI
15002c12  e839000000           CALL 0x15002c50
15002c17  83c40c               ADD ESP,0xc
15002c1a  8bf8                 MOV EDI,EAX
15002c1c  56                   PUSH ESI
15002c1d  e86e050000           CALL 0x15003190
15002c22  83c404               ADD ESP,0x4
15002c25  8bc7                 MOV EAX,EDI
15002c27  5f                   POP EDI
15002c28  5e                   POP ESI
15002c29  c3                   RET
15002c2a  e8e1030000           CALL 0x15003010
15002c2f  c70009000000         MOV dword ptr [EAX],0x9
15002c35  e8e6030000           CALL 0x15003020
15002c3a  5f                   POP EDI
15002c3b  c70000000000         MOV dword ptr [EAX],0x0
15002c41  b8ffffffff           MOV EAX,0xffffffff
15002c46  5e                   POP ESI
15002c47  c3                   RET
; undefined 8 bytes at 15002c48

; ==== FUNCTION FUN_15002c50 entry=15002c50 sig=int __cdecl FUN_15002c50(uint param_1, char * param_2, uint param_3)
15002c50  81ec18040000         SUB ESP,0x418
15002c56  53                   PUSH EBX
15002c57  56                   PUSH ESI
15002c58  57                   PUSH EDI
15002c59  33db                 XOR EBX,EBX
15002c5b  895c241c             MOV dword ptr [ESP + 0x1c],EBX
15002c5f  55                   PUSH EBP
15002c60  8bac2434040000       MOV EBP,dword ptr [ESP + 0x434]
15002c67  3beb                 CMP EBP,EBX
15002c69  750d                 JNZ 0x15002c78
15002c6b  33c0                 XOR EAX,EAX
15002c6d  5d                   POP EBP
15002c6e  5f                   POP EDI
15002c6f  5e                   POP ESI
15002c70  5b                   POP EBX
15002c71  81c418040000         ADD ESP,0x418
15002c77  c3                   RET
15002c78  8b94242c040000       MOV EDX,dword ptr [ESP + 0x42c]
15002c7f  8bc2                 MOV EAX,EDX
15002c81  83e0e7               AND EAX,0xffffffe7
15002c84  c1f803               SAR EAX,0x3
15002c87  05506a0015           ADD EAX,0x15006a50
15002c8c  89442418             MOV dword ptr [ESP + 0x18],EAX
15002c90  8bc2                 MOV EAX,EDX
15002c92  83e01f               AND EAX,0x1f
15002c95  8b742418             MOV ESI,dword ptr [ESP + 0x18]
15002c99  c1e002               SHL EAX,0x2
15002c9c  8d0cc0               LEA ECX,[EAX + EAX*0x8]
15002c9f  8b06                 MOV EAX,dword ptr [ESI]
15002ca1  894c241c             MOV dword ptr [ESP + 0x1c],ECX
15002ca5  f644080420           TEST byte ptr [EAX + ECX*0x1 + 0x4],0x20
15002caa  740d                 JZ 0x15002cb9
15002cac  6a02                 PUSH 0x2
15002cae  6a00                 PUSH 0x0
15002cb0  52                   PUSH EDX
15002cb1  e80a050000           CALL 0x150031c0
15002cb6  83c40c               ADD ESP,0xc
15002cb9  8b442418             MOV EAX,dword ptr [ESP + 0x18]
15002cbd  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
15002cc1  0308                 ADD ECX,dword ptr [EAX]
15002cc3  f6410480             TEST byte ptr [ECX + 0x4],0x80
15002cc7  0f8488000000         JZ 0x15002d55
15002ccd  c744241000000000     MOV dword ptr [ESP + 0x10],0x0
15002cd5  8bbc2430040000       MOV EDI,dword ptr [ESP + 0x430]
15002cdc  8bc7                 MOV EAX,EDI
15002cde  2b842430040000       SUB EAX,dword ptr [ESP + 0x430]
15002ce5  3bc5                 CMP EAX,EBP
15002ce7  0f83a1000000         JNC 0x15002d8e
15002ced  8d742424             LEA ESI,[ESP + 0x24]
15002cf1  8bc7                 MOV EAX,EDI
15002cf3  2b842430040000       SUB EAX,dword ptr [ESP + 0x430]
15002cfa  3bc5                 CMP EAX,EBP
15002cfc  731e                 JNC 0x15002d1c
15002cfe  8a07                 MOV AL,byte ptr [EDI]
15002d00  47                   INC EDI
15002d01  3c0a                 CMP AL,0xa
15002d03  7505                 JNZ 0x15002d0a
15002d05  c6060d               MOV byte ptr [ESI],0xd
15002d08  43                   INC EBX
15002d09  46                   INC ESI
15002d0a  8806                 MOV byte ptr [ESI],AL
15002d0c  46                   INC ESI
15002d0d  8bc6                 MOV EAX,ESI
15002d0f  8d4c2424             LEA ECX,[ESP + 0x24]
15002d13  2bc1                 SUB EAX,ECX
15002d15  3d00040000           CMP EAX,0x400
15002d1a  7cd5                 JL 0x15002cf1
15002d1c  8d442424             LEA EAX,[ESP + 0x24]
15002d20  6a00                 PUSH 0x0
15002d22  2bf0                 SUB ESI,EAX
15002d24  8d4c2428             LEA ECX,[ESP + 0x28]
15002d28  8d442418             LEA EAX,[ESP + 0x18]
15002d2c  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
15002d30  50                   PUSH EAX
15002d31  56                   PUSH ESI
15002d32  51                   PUSH ECX
15002d33  8b02                 MOV EAX,dword ptr [EDX]
15002d35  8b4c242c             MOV ECX,dword ptr [ESP + 0x2c]
15002d39  8b1408               MOV EDX,dword ptr [EAX + ECX*0x1]
15002d3c  52                   PUSH EDX
15002d3d  ff1548710015         CALL dword ptr [0x15007148]
15002d43  85c0                 TEST EAX,EAX
15002d45  743d                 JZ 0x15002d84
15002d47  8b442414             MOV EAX,dword ptr [ESP + 0x14]
15002d4b  01442420             ADD dword ptr [ESP + 0x20],EAX
15002d4f  3bf0                 CMP ESI,EAX
15002d51  7e89                 JLE 0x15002cdc
15002d53  eb39                 JMP 0x15002d8e
15002d55  8d442414             LEA EAX,[ESP + 0x14]
15002d59  6a00                 PUSH 0x0
15002d5b  8b942434040000       MOV EDX,dword ptr [ESP + 0x434]
15002d62  50                   PUSH EAX
15002d63  55                   PUSH EBP
15002d64  8b09                 MOV ECX,dword ptr [ECX]
15002d66  52                   PUSH EDX
15002d67  51                   PUSH ECX
15002d68  ff1548710015         CALL dword ptr [0x15007148]
15002d6e  85c0                 TEST EAX,EAX
15002d70  7412                 JZ 0x15002d84
15002d72  c744241000000000     MOV dword ptr [ESP + 0x10],0x0
15002d7a  8b442414             MOV EAX,dword ptr [ESP + 0x14]
15002d7e  89442420             MOV dword ptr [ESP + 0x20],EAX
15002d82  eb0a                 JMP 0x15002d8e
15002d84  ff1504710015         CALL dword ptr [0x15007104]
15002d8a  89442410             MOV dword ptr [ESP + 0x10],EAX
15002d8e  837c242000           CMP dword ptr [ESP + 0x20],0x0
15002d93  0f85a1000000         JNZ 0x15002e3a
15002d99  837c241000           CMP dword ptr [ESP + 0x10],0x0
15002d9e  744a                 JZ 0x15002dea
15002da0  837c241005           CMP dword ptr [ESP + 0x10],0x5
15002da5  7526                 JNZ 0x15002dcd
15002da7  e864020000           CALL 0x15003010
15002dac  c70009000000         MOV dword ptr [EAX],0x9
15002db2  e869020000           CALL 0x15003020
15002db7  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
15002dbb  5d                   POP EBP
15002dbc  5f                   POP EDI
15002dbd  8908                 MOV dword ptr [EAX],ECX
15002dbf  b8ffffffff           MOV EAX,0xffffffff
15002dc4  5e                   POP ESI
15002dc5  5b                   POP EBX
15002dc6  81c418040000         ADD ESP,0x418
15002dcc  c3                   RET
15002dcd  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
15002dd1  51                   PUSH ECX
15002dd2  e8b9010000           CALL 0x15002f90
15002dd7  83c404               ADD ESP,0x4
15002dda  b8ffffffff           MOV EAX,0xffffffff
15002ddf  5d                   POP EBP
15002de0  5f                   POP EDI
15002de1  5e                   POP ESI
15002de2  5b                   POP EBX
15002de3  81c418040000         ADD ESP,0x418
15002de9  c3                   RET
15002dea  8b442418             MOV EAX,dword ptr [ESP + 0x18]
15002dee  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
15002df2  8b10                 MOV EDX,dword ptr [EAX]
15002df4  f6440a0440           TEST byte ptr [EDX + ECX*0x1 + 0x4],0x40
15002df9  7419                 JZ 0x15002e14
15002dfb  8b842430040000       MOV EAX,dword ptr [ESP + 0x430]
15002e02  80381a               CMP byte ptr [EAX],0x1a
15002e05  750d                 JNZ 0x15002e14
15002e07  33c0                 XOR EAX,EAX
15002e09  5d                   POP EBP
15002e0a  5f                   POP EDI
15002e0b  5e                   POP ESI
15002e0c  5b                   POP EBX
15002e0d  81c418040000         ADD ESP,0x418
15002e13  c3                   RET
15002e14  e8f7010000           CALL 0x15003010
15002e19  c7001c000000         MOV dword ptr [EAX],0x1c
15002e1f  e8fc010000           CALL 0x15003020
15002e24  5d                   POP EBP
15002e25  c70000000000         MOV dword ptr [EAX],0x0
15002e2b  b8ffffffff           MOV EAX,0xffffffff
15002e30  5f                   POP EDI
15002e31  5e                   POP ESI
15002e32  5b                   POP EBX
15002e33  81c418040000         ADD ESP,0x418
15002e39  c3                   RET
15002e3a  8b442420             MOV EAX,dword ptr [ESP + 0x20]
15002e3e  5d                   POP EBP
15002e3f  2bc3                 SUB EAX,EBX
15002e41  5f                   POP EDI
15002e42  5e                   POP ESI
15002e43  5b                   POP EBX
15002e44  81c418040000         ADD ESP,0x418
15002e4a  c3                   RET
; undefined 5 bytes at 15002e4b

; ==== FUNCTION __close entry=15002e50 sig=int __cdecl __close(int _FileHandle)
15002e50  56                   PUSH ESI
15002e51  57                   PUSH EDI
15002e52  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
15002e56  3935506b0015         CMP dword ptr [0x15006b50],ESI
15002e5c  7642                 JBE 0x15002ea0
15002e5e  8bc6                 MOV EAX,ESI
15002e60  8bce                 MOV ECX,ESI
15002e62  83e0e7               AND EAX,0xffffffe7
15002e65  83e11f               AND ECX,0x1f
15002e68  c1f803               SAR EAX,0x3
15002e6b  c1e102               SHL ECX,0x2
15002e6e  8b90506a0015         MOV EDX,dword ptr [EAX + 0x15006a50]
15002e74  8d04c9               LEA EAX,[ECX + ECX*0x8]
15002e77  f644020401           TEST byte ptr [EDX + EAX*0x1 + 0x4],0x1
15002e7c  7422                 JZ 0x15002ea0
15002e7e  56                   PUSH ESI
15002e7f  e89c020000           CALL 0x15003120
15002e84  83c404               ADD ESP,0x4
15002e87  56                   PUSH ESI
15002e88  e833000000           CALL 0x15002ec0
15002e8d  83c404               ADD ESP,0x4
15002e90  8bf8                 MOV EDI,EAX
15002e92  56                   PUSH ESI
15002e93  e8f8020000           CALL 0x15003190
15002e98  83c404               ADD ESP,0x4
15002e9b  8bc7                 MOV EAX,EDI
15002e9d  5f                   POP EDI
15002e9e  5e                   POP ESI
15002e9f  c3                   RET
15002ea0  e86b010000           CALL 0x15003010
15002ea5  c70009000000         MOV dword ptr [EAX],0x9
15002eab  e870010000           CALL 0x15003020
15002eb0  5f                   POP EDI
15002eb1  c70000000000         MOV dword ptr [EAX],0x0
15002eb7  b8ffffffff           MOV EAX,0xffffffff
15002ebc  5e                   POP ESI
15002ebd  c3                   RET
; undefined 2 bytes at 15002ebe

; ==== FUNCTION __close_lk entry=15002ec0 sig=undefined4 __cdecl __close_lk(uint param_1)
15002ec0  56                   PUSH ESI
15002ec1  57                   PUSH EDI
15002ec2  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
15002ec6  83fe01               CMP ESI,0x1
15002ec9  7405                 JZ 0x15002ed0
15002ecb  83fe02               CMP ESI,0x2
15002ece  751a                 JNZ 0x15002eea
15002ed0  6a02                 PUSH 0x2
15002ed2  e8f9010000           CALL 0x150030d0
15002ed7  83c404               ADD ESP,0x4
15002eda  8bf8                 MOV EDI,EAX
15002edc  6a01                 PUSH 0x1
15002ede  e8ed010000           CALL 0x150030d0
15002ee3  83c404               ADD ESP,0x4
15002ee6  3bf8                 CMP EDI,EAX
15002ee8  741e                 JZ 0x15002f08
15002eea  56                   PUSH ESI
15002eeb  e8e0010000           CALL 0x150030d0
15002ef0  83c404               ADD ESP,0x4
15002ef3  50                   PUSH EAX
15002ef4  ff1568710015         CALL dword ptr [0x15007168]
15002efa  85c0                 TEST EAX,EAX
15002efc  750a                 JNZ 0x15002f08
15002efe  ff1504710015         CALL dword ptr [0x15007104]
15002f04  8bf8                 MOV EDI,EAX
15002f06  eb02                 JMP 0x15002f0a
15002f08  33ff                 XOR EDI,EDI
15002f0a  56                   PUSH ESI
15002f0b  e820010000           CALL 0x15003030
15002f10  83c404               ADD ESP,0x4
15002f13  85ff                 TEST EDI,EDI
15002f15  7411                 JZ 0x15002f28
15002f17  57                   PUSH EDI
15002f18  e873000000           CALL 0x15002f90
15002f1d  83c404               ADD ESP,0x4
15002f20  b8ffffffff           MOV EAX,0xffffffff
15002f25  5f                   POP EDI
15002f26  5e                   POP ESI
15002f27  c3                   RET
15002f28  8bc6                 MOV EAX,ESI
15002f2a  83e61f               AND ESI,0x1f
15002f2d  c1e602               SHL ESI,0x2
15002f30  83e0e7               AND EAX,0xffffffe7
15002f33  c1f803               SAR EAX,0x3
15002f36  5f                   POP EDI
15002f37  8b88506a0015         MOV ECX,dword ptr [EAX + 0x15006a50]
15002f3d  8d04f6               LEA EAX,[ESI + ESI*0x8]
15002f40  5e                   POP ESI
15002f41  c644010400           MOV byte ptr [ECX + EAX*0x1 + 0x4],0x0
15002f46  33c0                 XOR EAX,EAX
15002f48  c3                   RET
; undefined 7 bytes at 15002f49

; ==== FUNCTION __freebuf entry=15002f50 sig=void __cdecl __freebuf(FILE * _File)
15002f50  56                   PUSH ESI
15002f51  8b742408             MOV ESI,dword ptr [ESP + 0x8]
15002f55  8b460c               MOV EAX,dword ptr [ESI + 0xc]
15002f58  a883                 TEST AL,0x83
15002f5a  742b                 JZ 0x15002f87
15002f5c  a808                 TEST AL,0x8
15002f5e  7427                 JZ 0x15002f87
15002f60  8b4608               MOV EAX,dword ptr [ESI + 0x8]
15002f63  50                   PUSH EAX
15002f64  e877f5ffff           CALL 0x150024e0
15002f69  83c404               ADD ESP,0x4
15002f6c  c70600000000         MOV dword ptr [ESI],0x0
15002f72  81660cf7fbffff       AND dword ptr [ESI + 0xc],0xfffffbf7
15002f79  c7460800000000       MOV dword ptr [ESI + 0x8],0x0
15002f80  c7460400000000       MOV dword ptr [ESI + 0x4],0x0
15002f87  5e                   POP ESI
15002f88  c3                   RET
; undefined 7 bytes at 15002f89

; ==== FUNCTION __dosmaperr entry=15002f90 sig=void __cdecl __dosmaperr(ulong param_1)
15002f90  56                   PUSH ESI
15002f91  e88a000000           CALL 0x15003020
15002f96  8b4c2408             MOV ECX,dword ptr [ESP + 0x8]
15002f9a  33f6                 XOR ESI,ESI
15002f9c  8908                 MOV dword ptr [EAX],ECX
15002f9e  b868570015           MOV EAX,0x15005768
15002fa3  3908                 CMP dword ptr [EAX],ECX
15002fa5  7422                 JZ 0x15002fc9
15002fa7  83c008               ADD EAX,0x8
15002faa  46                   INC ESI
15002fab  3dd0580015           CMP EAX,0x150058d0
15002fb0  72f1                 JC 0x15002fa3
15002fb2  83f913               CMP ECX,0x13
15002fb5  7222                 JC 0x15002fd9
15002fb7  83f924               CMP ECX,0x24
15002fba  771d                 JA 0x15002fd9
15002fbc  e84f000000           CALL 0x15003010
15002fc1  5e                   POP ESI
15002fc2  c7000d000000         MOV dword ptr [EAX],0xd
15002fc8  c3                   RET
15002fc9  e842000000           CALL 0x15003010
15002fce  8b0cf56c570015       MOV ECX,dword ptr [ESI*0x8 + 0x1500576c]
15002fd5  5e                   POP ESI
15002fd6  8908                 MOV dword ptr [EAX],ECX
15002fd8  c3                   RET
15002fd9  81f9bc000000         CMP ECX,0xbc
15002fdf  7215                 JC 0x15002ff6
15002fe1  81f9ca000000         CMP ECX,0xca
15002fe7  770d                 JA 0x15002ff6
15002fe9  e822000000           CALL 0x15003010
15002fee  5e                   POP ESI
15002fef  c70008000000         MOV dword ptr [EAX],0x8
15002ff5  c3                   RET
15002ff6  e815000000           CALL 0x15003010
15002ffb  5e                   POP ESI
15002ffc  c70016000000         MOV dword ptr [EAX],0x16
15003002  c3                   RET
; undefined 13 bytes at 15003003

; ==== FUNCTION FUN_15003010 entry=15003010 sig=int * __stdcall FUN_15003010(void)
15003010  e86be4ffff           CALL 0x15001480
15003015  83c008               ADD EAX,0x8
15003018  c3                   RET
; undefined 7 bytes at 15003019

; ==== FUNCTION FUN_15003020 entry=15003020 sig=ulong * __stdcall FUN_15003020(void)
15003020  e85be4ffff           CALL 0x15001480
15003025  83c00c               ADD EAX,0xc
15003028  c3                   RET
; undefined 7 bytes at 15003029

; ==== FUNCTION FUN_15003030 entry=15003030 sig=undefined4 __cdecl FUN_15003030(uint param_1)
15003030  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
15003034  56                   PUSH ESI
15003035  57                   PUSH EDI
15003036  3b0d506b0015         CMP ECX,dword ptr [0x15006b50]
1500303c  7365                 JNC 0x150030a3
1500303e  8bc1                 MOV EAX,ECX
15003040  83e0e7               AND EAX,0xffffffe7
15003043  c1f803               SAR EAX,0x3
15003046  8db8506a0015         LEA EDI,[EAX + 0x15006a50]
1500304c  8bc1                 MOV EAX,ECX
1500304e  83e01f               AND EAX,0x1f
15003051  c1e002               SHL EAX,0x2
15003054  8d34c0               LEA ESI,[EAX + EAX*0x8]
15003057  8b07                 MOV EAX,dword ptr [EDI]
15003059  03c6                 ADD EAX,ESI
1500305b  f6400401             TEST byte ptr [EAX + 0x4],0x1
1500305f  7442                 JZ 0x150030a3
15003061  8338ff               CMP dword ptr [EAX],-0x1
15003064  743d                 JZ 0x150030a3
15003066  833d4450001501       CMP dword ptr [0x15005044],0x1
1500306d  7526                 JNZ 0x15003095
1500306f  85c9                 TEST ECX,ECX
15003071  740c                 JZ 0x1500307f
15003073  83f901               CMP ECX,0x1
15003076  740d                 JZ 0x15003085
15003078  83f902               CMP ECX,0x2
1500307b  740e                 JZ 0x1500308b
1500307d  eb16                 JMP 0x15003095
1500307f  6a00                 PUSH 0x0
15003081  6af6                 PUSH -0xa
15003083  eb0a                 JMP 0x1500308f
15003085  6a00                 PUSH 0x0
15003087  6af5                 PUSH -0xb
15003089  eb04                 JMP 0x1500308f
1500308b  6a00                 PUSH 0x0
1500308d  6af4                 PUSH -0xc
1500308f  ff156c710015         CALL dword ptr [0x1500716c]
15003095  8b07                 MOV EAX,dword ptr [EDI]
15003097  5f                   POP EDI
15003098  c70430ffffffff       MOV dword ptr [EAX + ESI*0x1],0xffffffff
1500309f  33c0                 XOR EAX,EAX
150030a1  5e                   POP ESI
150030a2  c3                   RET
150030a3  e868ffffff           CALL 0x15003010
150030a8  c70009000000         MOV dword ptr [EAX],0x9
150030ae  e86dffffff           CALL 0x15003020
150030b3  5f                   POP EDI
150030b4  c70000000000         MOV dword ptr [EAX],0x0
150030ba  b8ffffffff           MOV EAX,0xffffffff
150030bf  5e                   POP ESI
150030c0  c3                   RET
; undefined 15 bytes at 150030c1

; ==== FUNCTION FUN_150030d0 entry=150030d0 sig=undefined4 __cdecl FUN_150030d0(uint param_1)
150030d0  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
150030d4  390d506b0015         CMP dword ptr [0x15006b50],ECX
150030da  7622                 JBE 0x150030fe
150030dc  8bc1                 MOV EAX,ECX
150030de  83e11f               AND ECX,0x1f
150030e1  c1e102               SHL ECX,0x2
150030e4  83e0e7               AND EAX,0xffffffe7
150030e7  c1f803               SAR EAX,0x3
150030ea  8d14c9               LEA EDX,[ECX + ECX*0x8]
150030ed  8b80506a0015         MOV EAX,dword ptr [EAX + 0x15006a50]
150030f3  03c2                 ADD EAX,EDX
150030f5  f6400401             TEST byte ptr [EAX + 0x4],0x1
150030f9  7403                 JZ 0x150030fe
150030fb  8b00                 MOV EAX,dword ptr [EAX]
150030fd  c3                   RET
150030fe  e80dffffff           CALL 0x15003010
15003103  c70009000000         MOV dword ptr [EAX],0x9
15003109  e812ffffff           CALL 0x15003020
1500310e  c70000000000         MOV dword ptr [EAX],0x0
15003114  b8ffffffff           MOV EAX,0xffffffff
15003119  c3                   RET
; undefined 6 bytes at 1500311a

; ==== FUNCTION __lock_fhandle entry=15003120 sig=int __cdecl __lock_fhandle(int _Filehandle)
15003120  8b442404             MOV EAX,dword ptr [ESP + 0x4]
15003124  53                   PUSH EBX
15003125  56                   PUSH ESI
15003126  8bc8                 MOV ECX,EAX
15003128  57                   PUSH EDI
15003129  83e1e7               AND ECX,0xffffffe7
1500312c  c1f903               SAR ECX,0x3
1500312f  83e01f               AND EAX,0x1f
15003132  c1e002               SHL EAX,0x2
15003135  8db9506a0015         LEA EDI,[ECX + 0x15006a50]
1500313b  8d34c0               LEA ESI,[EAX + EAX*0x8]
1500313e  8b1f                 MOV EBX,dword ptr [EDI]
15003140  03de                 ADD EBX,ESI
15003142  837b0800             CMP dword ptr [EBX + 0x8],0x0
15003146  7527                 JNZ 0x1500316f
15003148  6a11                 PUSH 0x11
1500314a  e8c1f1ffff           CALL 0x15002310
1500314f  83c404               ADD ESP,0x4
15003152  837b0800             CMP dword ptr [EBX + 0x8],0x0
15003156  750d                 JNZ 0x15003165
15003158  8d430c               LEA EAX,[EBX + 0xc]
1500315b  50                   PUSH EAX
1500315c  ff154c710015         CALL dword ptr [0x1500714c]
15003162  ff4308               INC dword ptr [EBX + 0x8]
15003165  6a11                 PUSH 0x11
15003167  e814f2ffff           CALL 0x15002380
1500316c  83c404               ADD ESP,0x4
1500316f  8b07                 MOV EAX,dword ptr [EDI]
15003171  03c6                 ADD EAX,ESI
15003173  83c00c               ADD EAX,0xc
15003176  50                   PUSH EAX
15003177  ff1550710015         CALL dword ptr [0x15007150]
1500317d  5f                   POP EDI
1500317e  5e                   POP ESI
1500317f  5b                   POP EBX
15003180  c3                   RET
; undefined 15 bytes at 15003181

; ==== FUNCTION __unlock_fhandle entry=15003190 sig=void __cdecl __unlock_fhandle(int _Filehandle)
15003190  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
15003194  8bc1                 MOV EAX,ECX
15003196  83e11f               AND ECX,0x1f
15003199  c1e102               SHL ECX,0x2
1500319c  83e0e7               AND EAX,0xffffffe7
1500319f  c1f803               SAR EAX,0x3
150031a2  8d14c9               LEA EDX,[ECX + ECX*0x8]
150031a5  8b80506a0015         MOV EAX,dword ptr [EAX + 0x15006a50]
150031ab  03c2                 ADD EAX,EDX
150031ad  83c00c               ADD EAX,0xc
150031b0  50                   PUSH EAX
150031b1  ff1554710015         CALL dword ptr [0x15007154]
150031b7  c3                   RET
; undefined 8 bytes at 150031b8

; ==== FUNCTION __lseek_lk entry=150031c0 sig=DWORD __cdecl __lseek_lk(uint param_1, LONG param_2, DWORD param_3)
150031c0  56                   PUSH ESI
150031c1  57                   PUSH EDI
150031c2  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
150031c6  56                   PUSH ESI
150031c7  e804ffffff           CALL 0x150030d0
150031cc  83c404               ADD ESP,0x4
150031cf  83f8ff               CMP EAX,-0x1
150031d2  7513                 JNZ 0x150031e7
150031d4  e837feffff           CALL 0x15003010
150031d9  5f                   POP EDI
150031da  c70009000000         MOV dword ptr [EAX],0x9
150031e0  b8ffffffff           MOV EAX,0xffffffff
150031e5  5e                   POP ESI
150031e6  c3                   RET
150031e7  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
150031eb  8b542410             MOV EDX,dword ptr [ESP + 0x10]
150031ef  51                   PUSH ECX
150031f0  6a00                 PUSH 0x0
150031f2  52                   PUSH EDX
150031f3  50                   PUSH EAX
150031f4  ff1570710015         CALL dword ptr [0x15007170]
150031fa  83f8ff               CMP EAX,-0x1
150031fd  8bf8                 MOV EDI,EAX
150031ff  b800000000           MOV EAX,0x0
15003204  7506                 JNZ 0x1500320c
15003206  ff1504710015         CALL dword ptr [0x15007104]
1500320c  85c0                 TEST EAX,EAX
1500320e  7411                 JZ 0x15003221
15003210  50                   PUSH EAX
15003211  e87afdffff           CALL 0x15002f90
15003216  83c404               ADD ESP,0x4
15003219  b8ffffffff           MOV EAX,0xffffffff
1500321e  5f                   POP EDI
1500321f  5e                   POP ESI
15003220  c3                   RET
15003221  8bc6                 MOV EAX,ESI
15003223  83e61f               AND ESI,0x1f
15003226  c1e602               SHL ESI,0x2
15003229  83e0e7               AND EAX,0xffffffe7
1500322c  c1f803               SAR EAX,0x3
1500322f  8b88506a0015         MOV ECX,dword ptr [EAX + 0x15006a50]
15003235  8d04f6               LEA EAX,[ESI + ESI*0x8]
15003238  80640104fd           AND byte ptr [ECX + EAX*0x1 + 0x4],0xfd
1500323d  8bc7                 MOV EAX,EDI
1500323f  5f                   POP EDI
15003240  5e                   POP ESI
15003241  c3                   RET
; undefined 446 bytes at 15003242
15004000  ds "IsTNT"
; undefined 2 bytes at 15004006
15004008  ds "kernel32.dll"
; undefined 3 bytes at 15004015
15004018  ds "runtime error "
; undefined 4 bytes at 15004028
1500402c  ds "TLOSS error\r\n"
1500403c  ds "SING error\r\n"
1500404c  ds "DOMAIN error\r\n"
1500405c  ds "R6027\r\n- not enough space for lowio initialization\r\n"
15004094  ds "R6026\r\n- not enough space for stdio initialization\r\n"
150040cc  ds "R6025\r\n- pure virtual function call\r\n"
150040f4  ds "R6024\r\n- not enough space for _onexit/atexit table\r\n"
1500412c  ds "R6019\r\n- unable to open console device\r\n"
15004158  ds "R6018\r\n- unexpected heap error\r\n"
1500417c  ds "R6017\r\n- unexpected multithread lock error\r\n"
150041ac  ds "R6016\r\n- not enough space for thread data\r\n"
150041d8  ds "\r\nabnormal program termination\r\n"
150041fc  ds "R6009\r\n- not enough space for environment\r\n"
15004228  ds "R6008\r\n- not enough space for arguments\r\n"
15004254  ds "R6002\r\n- floating point not loaded\r\n"
1500427c  ds "Microsoft Visual C++ Runtime Library"
; undefined 3 bytes at 150042a1
150042a4  undefined4 00000A0Ah
150042a8  ds "Runtime Error!\n\nProgram: "
; undefined 4 bytes at 150042c4
150042c8  ds "<program name unknown>"
150042e0  ds "GetLastActivePopup"
; undefined 1 bytes at 150042f3
150042f4  ds "GetActiveWindow"
15004304  ds "MessageBoxA"
15004310  ds "user32.dll"
; undefined 5 bytes at 1500431b
15004320  IMAGE_DIRECTORY_ENTRY_EXPORT 
15004348  ibo32 15001000
1500434c  ibo32 1500435e
15004350  dw 0h
15004352  ds "cursors.c32"
1500435e  ds "_WEP"
; undefined 205 bytes at 15004363
15005030  undefined4 00000000h
15005034  undefined4 00000000h
; undefined 4 bytes at 15005038
1500503c  addr 150012a0
15005040  undefined4 00000000h
15005044  undefined4 00000000h
; undefined 4 bytes at 15005048
1500504c  undefined4 00000000h
; undefined 48 bytes at 15005050
15005080  undefined1 00h
; undefined 3 bytes at 15005081
15005084  undefined4 00000000h
15005088  undefined4 00000000h
1500508c  undefined4 FFFFFFFFh
; undefined 48 bytes at 15005090
150050c0  undefined4 00000000h
150050c4  undefined1 00h
; undefined 255 bytes at 150050c5
150051c4  undefined4 00000000h
; undefined 8 bytes at 150051c8
150051d0  undefined4 00000000h
150051d4  undefined4 00000000h
150051d8  undefined4 00000000h
150051dc  undefined4 00000000h
150051e0  undefined1 01h
150051e1  undefined1 02h
; undefined 6 bytes at 150051e2
150051e8  undefined4 000003A4h
; undefined 44 bytes at 150051ec
15005218  undefined4 000003A8h
; undefined 192 bytes at 1500521c
150052dc  undefined4 00000000h
150052e0  undefined4 00000002h
; undefined 4 bytes at 150052e4
150052e8  undefined4 00000008h
; undefined 4 bytes at 150052ec
150052f0  undefined4 00000009h
150052f4  addr 150041fc
; undefined 112 bytes at 150052f8
15005368  undefined4 00000000h
; undefined 4 bytes at 1500536c
15005370  undefined4 00000000h
15005374  addr 150059d8
; undefined 28 bytes at 15005378
15005394  addr 15005a08
; undefined 12 bytes at 15005398
150053a4  addr 15005a20
; undefined 12 bytes at 150053a8
150053b4  addr 150059f0
; undefined 280 bytes at 150053b8
150054d0  undefined4 00000000h
150054d4  undefined4 00000000h
150054d8  undefined4 00000000h
150054dc  undefined4 00000000h
150054e0  addr 15005a40
; undefined 12 bytes at 150054e4
150054f0  undefined4 00000000h
; undefined 28 bytes at 150054f4
15005510  undefined4 00000001h
; undefined 592 bytes at 15005514
15005764  undefined4 00000000h
15005768  undefined4 00000001h
; undefined 4 bytes at 1500576c
15005770  undefined4 00000002h
15005774  undefined4 00000002h
; undefined 704 bytes at 15005778
15005a38  undefined4 00000000h
15005a3c  undefined4 00000000h
; undefined 4096 bytes at 15005a40
15006a40  undefined4 00000000h
; undefined 12 bytes at 15006a44
15006a50  undefined4 00000000h
15006a54  undefined4 00000000h
; undefined 248 bytes at 15006a58
15006b50  undefined4 00000000h
15006b54  undefined4 00000000h
15006b58  undefined4 00000000h
15006b5c  undefined4 00000000h
15006b60  undefined4 00000000h
15006b64  undefined4 00000000h
15006b68  undefined4 00000000h
15007000  ddw 7028h
15007004  ddw 0h
15007008  ddw 0h
1500700c  ddw 744Ah
15007010  ddw 70D0h
; undefined 20 bytes at 15007014
15007028  ddw 72E8h
1500702c  ddw 718Ah
15007030  ddw 719Ch
15007034  ddw 71B0h
15007038  ddw 71BEh
1500703c  ddw 71CCh
15007040  ddw 71E0h
15007044  ddw 71F4h
15007048  ddw 720Ah
1500704c  ddw 7218h
15007050  ddw 7224h
15007054  ddw 722Eh
15007058  ddw 723Eh
1500705c  ddw 724Ch
15007060  ddw 725Ch
15007064  ddw 726Ah
15007068  ddw 7278h
1500706c  ddw 728Ah
15007070  ddw 7298h
15007074  ddw 72A8h
15007078  ddw 72BAh
1500707c  ddw 72D2h
15007080  ddw 7178h
15007084  ddw 72F4h
15007088  ddw 72FEh
1500708c  ddw 730Ah
15007090  ddw 7324h
15007094  ddw 733Ch
15007098  ddw 7356h
1500709c  ddw 7370h
150070a0  ddw 7386h
150070a4  ddw 7392h
150070a8  ddw 73AEh
150070ac  ddw 73C6h
150070b0  ddw 73DEh
150070b4  ddw 73EAh
150070b8  ddw 73F6h
150070bc  ddw 7406h
150070c0  ddw 741Ah
150070c4  ddw 7428h
150070c8  ddw 7438h
; undefined 4 bytes at 150070cc
150070d0  addr 000072e8
150070d4  addr 0000718a
150070d8  addr 0000719c
150070dc  addr 000071b0
150070e0  addr 000071be
150070e4  addr 000071cc
150070e8  addr 000071e0
150070ec  addr 000071f4
150070f0  addr 0000720a
150070f4  addr 00007218
150070f8  addr 00007224
150070fc  addr 0000722e
15007100  addr 0000723e
15007104  addr 0000724c
15007108  addr 0000725c
1500710c  addr 0000726a
15007110  addr 00007278
15007114  addr 0000728a
15007118  addr 00007298
1500711c  addr 000072a8
15007120  addr 000072ba
15007124  addr 000072d2
15007128  addr 00007178
1500712c  addr 000072f4
15007130  addr 000072fe
15007134  addr 0000730a
15007138  addr 00007324
1500713c  addr 0000733c
15007140  addr 00007356
15007144  addr 00007370
15007148  addr 00007386
1500714c  addr 00007392
15007150  addr 000073ae
15007154  addr 000073c6
15007158  addr 000073de
1500715c  addr 000073ea
15007160  addr 000073f6
15007164  addr 00007406
15007168  addr 0000741a
1500716c  addr 00007428
15007170  addr 00007438
; undefined 4 bytes at 15007174
15007178  dw 9Fh
1500717a  ds "GetCommandLineA"
1500718a  dw 103h
1500718c  ds "GetProcAddress"
; undefined 1 bytes at 1500719b
1500719c  dw EBh
1500719e  ds "GetModuleHandleA"
; undefined 1 bytes at 150071af
150071b0  dw 137h
150071b2  ds "GetVersion"
; undefined 1 bytes at 150071bd
150071be  dw 62h
150071c0  ds "ExitProcess"
150071cc  dw 21Dh
150071ce  ds "TerminateProcess"
; undefined 1 bytes at 150071df
150071e0  dw C4h
150071e2  ds "GetCurrentProcess"
150071f4  dw C7h
150071f6  ds "GetCurrentThreadId"
; undefined 1 bytes at 15007209
1500720a  dw 222h
1500720c  ds "TlsSetValue"
15007218  dw 21Fh
1500721a  ds "TlsAlloc"
; undefined 1 bytes at 15007223
15007224  dw 220h
15007226  ds "TlsFree"
1500722e  dw 1FDh
15007230  ds "SetLastError"
; undefined 1 bytes at 1500723d
1500723e  dw 221h
15007240  ds "TlsGetValue"
1500724c  dw E1h
1500724e  ds "GetLastError"
; undefined 1 bytes at 1500725b
1500725c  dw 155h
1500725e  ds "HeapCreate"
; undefined 1 bytes at 15007269
1500726a  dw 157h
1500726c  ds "HeapDestroy"
15007278  dw 1FAh
1500727a  ds "SetHandleCount"
; undefined 1 bytes at 15007289
1500728a  dw DCh
1500728c  ds "GetFileType"
15007298  dw 116h
1500729a  ds "GetStdHandle"
; undefined 1 bytes at 150072a7
150072a8  dw 114h
150072aa  ds "GetStartupInfoA"
150072ba  dw 44h
150072bc  ds "DeleteCriticalSection"
150072d2  dw E9h
150072d4  ds "GetModuleFileNameA"
; undefined 1 bytes at 150072e7
150072e8  dw 98h
150072ea  ds "GetCPInfo"
150072f4  dw 92h
150072f6  ds "GetACP"
; undefined 1 bytes at 150072fd
150072fe  dw F6h
15007300  ds "GetOEMCP"
; undefined 1 bytes at 15007309
1500730a  dw 8Bh
1500730c  ds "FreeEnvironmentStringsA"
15007324  dw D0h
15007326  ds "GetEnvironmentStrings"
1500733c  dw 8Ch
1500733e  ds "FreeEnvironmentStringsW"
15007356  dw D2h
15007358  ds "GetEnvironmentStringsW"
; undefined 1 bytes at 1500736f
15007370  dw 242h
15007372  ds "WideCharToMultiByte"
15007386  dw 24Fh
15007388  ds "WriteFile"
15007392  dw 164h
15007394  ds "InitializeCriticalSection"
150073ae  dw 4Fh
150073b0  ds "EnterCriticalSection"
; undefined 1 bytes at 150073c5
150073c6  dw 177h
150073c8  ds "LeaveCriticalSection"
; undefined 1 bytes at 150073dd
150073de  dw 153h
150073e0  ds "HeapAlloc"
150073ea  dw 159h
150073ec  ds "HeapFree"
; undefined 1 bytes at 150073f5
150073f6  dw 178h
150073f8  ds "LoadLibraryA"
; undefined 1 bytes at 15007405
15007406  dw 83h
15007408  ds "FlushFileBuffers"
; undefined 1 bytes at 15007419
1500741a  dw 16h
1500741c  ds "CloseHandle"
15007428  dw 206h
1500742a  ds "SetStdHandle"
; undefined 1 bytes at 15007437
15007438  dw 1F8h
1500743a  ds "SetFilePointer"
; undefined 1 bytes at 15007449
1500744a  ds "KERNEL32.dll"
; undefined 425 bytes at 15007457
15008000  IMAGE_RESOURCE_DIRECTORY 
15008010  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008018  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008020  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008028  IMAGE_RESOURCE_DIRECTORY 
15008038  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008040  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008048  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008050  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008058  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008060  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008068  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008070  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008078  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008080  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008088  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008090  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008098  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150080a0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150080a8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150080b0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150080b8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150080c0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150080c8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150080d0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150080d8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150080e0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150080e8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150080f0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150080f8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008100  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008108  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008110  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008118  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008120  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008128  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008130  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008138  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008140  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008148  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008150  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008158  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008160  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008168  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008170  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008178  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008180  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008188  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008190  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008198  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150081a0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150081a8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150081b0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150081b8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150081c0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150081c8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150081d0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150081d8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150081e0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150081e8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150081f0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150081f8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008200  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008208  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008210  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008218  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008220  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008228  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008230  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008238  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008240  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008248  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008250  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008258  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008260  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008268  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008270  IMAGE_RESOURCE_DIRECTORY 
15008280  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008288  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008290  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008298  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150082a0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150082a8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150082b0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150082b8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150082c0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150082c8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150082d0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150082d8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150082e0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150082e8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150082f0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150082f8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008300  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008308  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008310  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008318  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008320  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008328  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008330  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008338  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008340  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008348  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008350  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008358  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008360  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008368  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008370  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008378  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008380  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008388  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008390  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008398  IMAGE_RESOURCE_DIRECTORY 
150083a8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150083b0  IMAGE_RESOURCE_DIRECTORY 
150083c0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150083c8  IMAGE_RESOURCE_DIRECTORY 
150083d8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150083e0  IMAGE_RESOURCE_DIRECTORY 
150083f0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150083f8  IMAGE_RESOURCE_DIRECTORY 
15008408  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008410  IMAGE_RESOURCE_DIRECTORY 
15008420  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008428  IMAGE_RESOURCE_DIRECTORY 
15008438  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008440  IMAGE_RESOURCE_DIRECTORY 
15008450  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008458  IMAGE_RESOURCE_DIRECTORY 
15008468  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008470  IMAGE_RESOURCE_DIRECTORY 
15008480  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008488  IMAGE_RESOURCE_DIRECTORY 
15008498  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150084a0  IMAGE_RESOURCE_DIRECTORY 
150084b0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150084b8  IMAGE_RESOURCE_DIRECTORY 
150084c8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150084d0  IMAGE_RESOURCE_DIRECTORY 
150084e0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150084e8  IMAGE_RESOURCE_DIRECTORY 
150084f8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008500  IMAGE_RESOURCE_DIRECTORY 
15008510  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008518  IMAGE_RESOURCE_DIRECTORY 
15008528  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008530  IMAGE_RESOURCE_DIRECTORY 
15008540  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008548  IMAGE_RESOURCE_DIRECTORY 
15008558  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008560  IMAGE_RESOURCE_DIRECTORY 
15008570  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008578  IMAGE_RESOURCE_DIRECTORY 
15008588  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008590  IMAGE_RESOURCE_DIRECTORY 
150085a0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150085a8  IMAGE_RESOURCE_DIRECTORY 
150085b8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150085c0  IMAGE_RESOURCE_DIRECTORY 
150085d0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150085d8  IMAGE_RESOURCE_DIRECTORY 
150085e8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150085f0  IMAGE_RESOURCE_DIRECTORY 
15008600  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008608  IMAGE_RESOURCE_DIRECTORY 
15008618  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008620  IMAGE_RESOURCE_DIRECTORY 
15008630  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008638  IMAGE_RESOURCE_DIRECTORY 
15008648  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008650  IMAGE_RESOURCE_DIRECTORY 
15008660  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008668  IMAGE_RESOURCE_DIRECTORY 
15008678  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008680  IMAGE_RESOURCE_DIRECTORY 
15008690  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008698  IMAGE_RESOURCE_DIRECTORY 
150086a8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150086b0  IMAGE_RESOURCE_DIRECTORY 
150086c0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150086c8  IMAGE_RESOURCE_DIRECTORY 
150086d8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150086e0  IMAGE_RESOURCE_DIRECTORY 
150086f0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150086f8  IMAGE_RESOURCE_DIRECTORY 
15008708  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008710  IMAGE_RESOURCE_DIRECTORY 
15008720  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008728  IMAGE_RESOURCE_DIRECTORY 
15008738  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008740  IMAGE_RESOURCE_DIRECTORY 
15008750  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008758  IMAGE_RESOURCE_DIRECTORY 
15008768  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008770  IMAGE_RESOURCE_DIRECTORY 
15008780  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008788  IMAGE_RESOURCE_DIRECTORY 
15008798  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150087a0  IMAGE_RESOURCE_DIRECTORY 
150087b0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150087b8  IMAGE_RESOURCE_DIRECTORY 
150087c8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150087d0  IMAGE_RESOURCE_DIRECTORY 
150087e0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150087e8  IMAGE_RESOURCE_DIRECTORY 
150087f8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008800  IMAGE_RESOURCE_DIRECTORY 
15008810  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008818  IMAGE_RESOURCE_DIRECTORY 
15008828  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008830  IMAGE_RESOURCE_DIRECTORY 
15008840  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008848  IMAGE_RESOURCE_DIRECTORY 
15008858  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008860  IMAGE_RESOURCE_DIRECTORY 
15008870  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008878  IMAGE_RESOURCE_DIRECTORY 
15008888  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008890  IMAGE_RESOURCE_DIRECTORY 
150088a0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150088a8  IMAGE_RESOURCE_DIRECTORY 
150088b8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150088c0  IMAGE_RESOURCE_DIRECTORY 
150088d0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150088d8  IMAGE_RESOURCE_DIRECTORY 
150088e8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150088f0  IMAGE_RESOURCE_DIRECTORY 
15008900  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008908  IMAGE_RESOURCE_DIRECTORY 
15008918  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008920  IMAGE_RESOURCE_DIRECTORY 
15008930  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008938  IMAGE_RESOURCE_DIRECTORY 
15008948  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008950  IMAGE_RESOURCE_DIRECTORY 
15008960  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008968  IMAGE_RESOURCE_DIRECTORY 
15008978  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008980  IMAGE_RESOURCE_DIRECTORY 
15008990  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008998  IMAGE_RESOURCE_DIRECTORY 
150089a8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150089b0  IMAGE_RESOURCE_DIRECTORY 
150089c0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150089c8  IMAGE_RESOURCE_DIRECTORY 
150089d8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150089e0  IMAGE_RESOURCE_DIRECTORY 
150089f0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
150089f8  IMAGE_RESOURCE_DIRECTORY 
15008a08  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008a10  IMAGE_RESOURCE_DIRECTORY 
15008a20  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008a28  IMAGE_RESOURCE_DIRECTORY 
15008a38  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008a40  IMAGE_RESOURCE_DIRECTORY 
15008a50  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008a58  IMAGE_RESOURCE_DIRECTORY 
15008a68  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008a70  IMAGE_RESOURCE_DIRECTORY 
15008a80  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008a88  IMAGE_RESOURCE_DIRECTORY 
15008a98  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008aa0  IMAGE_RESOURCE_DIRECTORY 
15008ab0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008ab8  IMAGE_RESOURCE_DIRECTORY 
15008ac8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008ad0  IMAGE_RESOURCE_DIRECTORY 
15008ae0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008ae8  IMAGE_RESOURCE_DIRECTORY 
15008af8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008b00  IMAGE_RESOURCE_DIRECTORY 
15008b10  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008b18  IMAGE_RESOURCE_DIRECTORY 
15008b28  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008b30  IMAGE_RESOURCE_DIRECTORY 
15008b40  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008b48  IMAGE_RESOURCE_DIRECTORY 
15008b58  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008b60  IMAGE_RESOURCE_DIRECTORY 
15008b70  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008b78  IMAGE_RESOURCE_DIRECTORY 
15008b88  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008b90  IMAGE_RESOURCE_DIRECTORY 
15008ba0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008ba8  IMAGE_RESOURCE_DIRECTORY 
15008bb8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008bc0  IMAGE_RESOURCE_DIRECTORY 
15008bd0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008bd8  IMAGE_RESOURCE_DIRECTORY 
15008be8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008bf0  IMAGE_RESOURCE_DIRECTORY 
15008c00  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008c08  IMAGE_RESOURCE_DIRECTORY 
15008c18  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008c20  IMAGE_RESOURCE_DIRECTORY 
15008c30  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008c38  IMAGE_RESOURCE_DIRECTORY 
15008c48  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008c50  IMAGE_RESOURCE_DIRECTORY 
15008c60  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008c68  IMAGE_RESOURCE_DIRECTORY 
15008c78  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008c80  IMAGE_RESOURCE_DIRECTORY 
15008c90  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008c98  IMAGE_RESOURCE_DIRECTORY 
15008ca8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008cb0  IMAGE_RESOURCE_DIRECTORY 
15008cc0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008cc8  IMAGE_RESOURCE_DIRECTORY 
15008cd8  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008ce0  IMAGE_RESOURCE_DIRECTORY 
15008cf0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008cf8  IMAGE_RESOURCE_DIRECTORY 
15008d08  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008d10  IMAGE_RESOURCE_DIRECTORY 
15008d20  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008d28  IMAGE_RESOURCE_DIRECTORY 
15008d38  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008d40  IMAGE_RESOURCE_DIRECTORY 
15008d50  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008d58  IMAGE_RESOURCE_DIRECTORY 
15008d68  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008d70  IMAGE_RESOURCE_DIRECTORY 
15008d80  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008d88  IMAGE_RESOURCE_DIRECTORY 
15008d98  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008da0  IMAGE_RESOURCE_DIRECTORY 
15008db0  IMAGE_RESOURCE_DIRECTORY_ENTRY 
15008db8  IMAGE_RESOURCE_DATA_ENTRY 
15008dc8  IMAGE_RESOURCE_DATA_ENTRY 
15008dd8  IMAGE_RESOURCE_DATA_ENTRY 
15008de8  IMAGE_RESOURCE_DATA_ENTRY 
15008df8  IMAGE_RESOURCE_DATA_ENTRY 
15008e08  IMAGE_RESOURCE_DATA_ENTRY 
15008e18  IMAGE_RESOURCE_DATA_ENTRY 
15008e28  IMAGE_RESOURCE_DATA_ENTRY 
15008e38  IMAGE_RESOURCE_DATA_ENTRY 
15008e48  IMAGE_RESOURCE_DATA_ENTRY 
15008e58  IMAGE_RESOURCE_DATA_ENTRY 
15008e68  IMAGE_RESOURCE_DATA_ENTRY 
15008e78  IMAGE_RESOURCE_DATA_ENTRY 
15008e88  IMAGE_RESOURCE_DATA_ENTRY 
15008e98  IMAGE_RESOURCE_DATA_ENTRY 
15008ea8  IMAGE_RESOURCE_DATA_ENTRY 
15008eb8  IMAGE_RESOURCE_DATA_ENTRY 
15008ec8  IMAGE_RESOURCE_DATA_ENTRY 
15008ed8  IMAGE_RESOURCE_DATA_ENTRY 
15008ee8  IMAGE_RESOURCE_DATA_ENTRY 
15008ef8  IMAGE_RESOURCE_DATA_ENTRY 
15008f08  IMAGE_RESOURCE_DATA_ENTRY 
15008f18  IMAGE_RESOURCE_DATA_ENTRY 
15008f28  IMAGE_RESOURCE_DATA_ENTRY 
15008f38  IMAGE_RESOURCE_DATA_ENTRY 
15008f48  IMAGE_RESOURCE_DATA_ENTRY 
15008f58  IMAGE_RESOURCE_DATA_ENTRY 
15008f68  IMAGE_RESOURCE_DATA_ENTRY 
15008f78  IMAGE_RESOURCE_DATA_ENTRY 
15008f88  IMAGE_RESOURCE_DATA_ENTRY 
15008f98  IMAGE_RESOURCE_DATA_ENTRY 
15008fa8  IMAGE_RESOURCE_DATA_ENTRY 
15008fb8  IMAGE_RESOURCE_DATA_ENTRY 
15008fc8  IMAGE_RESOURCE_DATA_ENTRY 
15008fd8  IMAGE_RESOURCE_DATA_ENTRY 
15008fe8  IMAGE_RESOURCE_DATA_ENTRY 
15008ff8  IMAGE_RESOURCE_DATA_ENTRY 
15009008  IMAGE_RESOURCE_DATA_ENTRY 
15009018  IMAGE_RESOURCE_DATA_ENTRY 
15009028  IMAGE_RESOURCE_DATA_ENTRY 
15009038  IMAGE_RESOURCE_DATA_ENTRY 
15009048  IMAGE_RESOURCE_DATA_ENTRY 
15009058  IMAGE_RESOURCE_DATA_ENTRY 
15009068  IMAGE_RESOURCE_DATA_ENTRY 
15009078  IMAGE_RESOURCE_DATA_ENTRY 
15009088  IMAGE_RESOURCE_DATA_ENTRY 
15009098  IMAGE_RESOURCE_DATA_ENTRY 
150090a8  IMAGE_RESOURCE_DATA_ENTRY 
150090b8  IMAGE_RESOURCE_DATA_ENTRY 
150090c8  IMAGE_RESOURCE_DATA_ENTRY 
150090d8  IMAGE_RESOURCE_DATA_ENTRY 
150090e8  IMAGE_RESOURCE_DATA_ENTRY 
150090f8  IMAGE_RESOURCE_DATA_ENTRY 
15009108  IMAGE_RESOURCE_DATA_ENTRY 
15009118  IMAGE_RESOURCE_DATA_ENTRY 
15009128  IMAGE_RESOURCE_DATA_ENTRY 
15009138  IMAGE_RESOURCE_DATA_ENTRY 
15009148  IMAGE_RESOURCE_DATA_ENTRY 
15009158  IMAGE_RESOURCE_DATA_ENTRY 
15009168  IMAGE_RESOURCE_DATA_ENTRY 
15009178  IMAGE_RESOURCE_DATA_ENTRY 
15009188  IMAGE_RESOURCE_DATA_ENTRY 
15009198  IMAGE_RESOURCE_DATA_ENTRY 
150091a8  IMAGE_RESOURCE_DATA_ENTRY 
150091b8  IMAGE_RESOURCE_DATA_ENTRY 
150091c8  IMAGE_RESOURCE_DATA_ENTRY 
150091d8  IMAGE_RESOURCE_DATA_ENTRY 
150091e8  IMAGE_RESOURCE_DATA_ENTRY 
150091f8  IMAGE_RESOURCE_DATA_ENTRY 
15009208  IMAGE_RESOURCE_DATA_ENTRY 
15009218  IMAGE_RESOURCE_DATA_ENTRY 
15009228  IMAGE_RESOURCE_DATA_ENTRY 
15009238  IMAGE_RESOURCE_DATA_ENTRY 
15009248  IMAGE_RESOURCE_DATA_ENTRY 
15009258  IMAGE_RESOURCE_DATA_ENTRY 
15009268  IMAGE_RESOURCE_DATA_ENTRY 
15009278  IMAGE_RESOURCE_DATA_ENTRY 
15009288  IMAGE_RESOURCE_DATA_ENTRY 
15009298  IMAGE_RESOURCE_DATA_ENTRY 
150092a8  IMAGE_RESOURCE_DATA_ENTRY 
150092b8  IMAGE_RESOURCE_DATA_ENTRY 
150092c8  IMAGE_RESOURCE_DATA_ENTRY 
150092d8  IMAGE_RESOURCE_DATA_ENTRY 
150092e8  IMAGE_RESOURCE_DATA_ENTRY 
150092f8  IMAGE_RESOURCE_DATA_ENTRY 
15009308  IMAGE_RESOURCE_DATA_ENTRY 
15009318  IMAGE_RESOURCE_DATA_ENTRY 
15009328  IMAGE_RESOURCE_DATA_ENTRY 
15009338  IMAGE_RESOURCE_DATA_ENTRY 
15009348  IMAGE_RESOURCE_DATA_ENTRY 
15009358  IMAGE_RESOURCE_DATA_ENTRY 
15009368  IMAGE_RESOURCE_DATA_ENTRY 
15009378  IMAGE_RESOURCE_DATA_ENTRY 
15009388  IMAGE_RESOURCE_DATA_ENTRY 
15009398  IMAGE_RESOURCE_DATA_ENTRY 
150093a8  IMAGE_RESOURCE_DATA_ENTRY 
150093b8  IMAGE_RESOURCE_DATA_ENTRY 
150093c8  IMAGE_RESOURCE_DATA_ENTRY 
150093d8  IMAGE_RESOURCE_DATA_ENTRY 
150093e8  IMAGE_RESOURCE_DATA_ENTRY 
150093f8  IMAGE_RESOURCE_DATA_ENTRY 
15009408  IMAGE_RESOURCE_DATA_ENTRY 
15009418  IMAGE_RESOURCE_DATA_ENTRY 
15009428  IMAGE_RESOURCE_DATA_ENTRY 
15009438  IMAGE_RESOURCE_DATA_ENTRY 
15009448  IMAGE_RESOURCE_DATA_ENTRY 
15009458  IMAGE_RESOURCE_DATA_ENTRY 
; undefined 8 bytes at 15009468
Rsrc_Cursor_1_409:
15009470  db[308] 
Rsrc_GroupCursor_2713_409:
150095a4  db[20] 
Rsrc_Cursor_2_409:
150095b8  db[308] 
Rsrc_GroupCursor_2714_409:
150096ec  db[20] 
Rsrc_Cursor_3_409:
15009700  db[308] 
Rsrc_GroupCursor_2730_409:
15009834  db[20] 
Rsrc_Cursor_4_409:
15009848  db[308] 
Rsrc_GroupCursor_2732_409:
1500997c  db[20] 
Rsrc_Cursor_5_409:
15009990  db[308] 
Rsrc_GroupCursor_2735_409:
15009ac4  db[20] 
Rsrc_Cursor_6_409:
15009ad8  db[308] 
Rsrc_GroupCursor_2726_409:
15009c0c  db[20] 
Rsrc_Cursor_7_409:
15009c20  db[308] 
Rsrc_GroupCursor_271e_409:
15009d54  db[20] 
Rsrc_Cursor_8_409:
15009d68  db[308] 
Rsrc_GroupCursor_2736_409:
15009e9c  db[20] 
Rsrc_Cursor_9_409:
15009eb0  db[308] 
Rsrc_GroupCursor_271b_409:
15009fe4  db[20] 
Rsrc_Cursor_a_409:
15009ff8  db[308] 
Rsrc_GroupCursor_2728_409:
1500a12c  db[20] 
Rsrc_Cursor_b_409:
1500a140  db[308] 
Rsrc_GroupCursor_2727_409:
1500a274  db[20] 
Rsrc_Cursor_c_409:
1500a288  db[308] 
Rsrc_Cursor_d_409:
1500a3bc  db[2220] 
Rsrc_Cursor_e_409:
1500ac68  db[748] 
Rsrc_GroupCursor_2734_409:
1500af54  db[48] 
Rsrc_Cursor_f_409:
1500af84  db[308] 
Rsrc_GroupCursor_272c_409:
1500b0b8  db[20] 
Rsrc_Cursor_10_409:
1500b0cc  db[308] 
Rsrc_Cursor_11_409:
1500b200  db[2220] 
Rsrc_Cursor_12_409:
1500baac  db[748] 
Rsrc_GroupCursor_2724_409:
1500bd98  db[48] 
Rsrc_Cursor_13_409:
1500bdc8  db[308] 
Rsrc_Cursor_14_409:
1500befc  db[2220] 
Rsrc_Cursor_15_409:
1500c7a8  db[748] 
Rsrc_GroupCursor_2720_409:
1500ca94  db[48] 
Rsrc_Cursor_16_409:
1500cac4  db[308] 
Rsrc_Cursor_17_409:
1500cbf8  db[2220] 
Rsrc_Cursor_18_409:
1500d4a4  db[748] 
Rsrc_GroupCursor_271c_409:
1500d790  db[48] 
Rsrc_Cursor_19_409:
1500d7c0  db[308] 
Rsrc_Cursor_1a_409:
1500d8f4  db[2220] 
Rsrc_Cursor_1b_409:
1500e1a0  db[748] 
Rsrc_GroupCursor_272a_409:
1500e48c  db[48] 
Rsrc_Cursor_1c_409:
1500e4bc  db[308] 
Rsrc_Cursor_1d_409:
1500e5f0  db[2220] 
Rsrc_Cursor_1e_409:
1500ee9c  db[748] 
Rsrc_GroupCursor_272f_409:
1500f188  db[48] 
Rsrc_Cursor_1f_409:
1500f1b8  db[308] 
Rsrc_GroupCursor_272d_409:
1500f2ec  db[20] 
Rsrc_Cursor_20_409:
1500f300  db[308] 
Rsrc_GroupCursor_271f_409:
1500f434  db[20] 
Rsrc_Cursor_21_409:
1500f448  db[308] 
Rsrc_GroupCursor_2731_409:
1500f57c  db[20] 
Rsrc_Cursor_22_409:
1500f590  db[308] 
Rsrc_Cursor_23_409:
1500f6c4  db[2220] 
Rsrc_Cursor_24_409:
1500ff70  db[748] 
Rsrc_GroupCursor_272e_409:
1501025c  db[48] 
Rsrc_Cursor_25_409:
1501028c  db[308] 
Rsrc_Cursor_26_409:
150103c0  db[2220] 
Rsrc_Cursor_27_409:
15010c6c  db[748] 
Rsrc_GroupCursor_2729_409:
15010f58  db[48] 
Rsrc_Cursor_28_409:
15010f88  db[308] 
Rsrc_Cursor_29_409:
150110bc  db[2220] 
Rsrc_Cursor_2a_409:
15011968  db[748] 
Rsrc_GroupCursor_2725_409:
15011c54  db[48] 
Rsrc_Cursor_2b_409:
15011c84  db[308] 
Rsrc_Cursor_2c_409:
15011db8  db[2220] 
Rsrc_Cursor_2d_409:
15012664  db[748] 
Rsrc_GroupCursor_2721_409:
15012950  db[48] 
Rsrc_Cursor_2e_409:
15012980  db[308] 
Rsrc_GroupCursor_2733_409:
15012ab4  db[20] 
Rsrc_Cursor_2f_409:
15012ac8  db[308] 
Rsrc_Cursor_30_409:
15012bfc  db[2220] 
Rsrc_Cursor_31_409:
150134a8  db[748] 
Rsrc_GroupCursor_271d_409:
15013794  db[48] 
Rsrc_Cursor_32_409:
150137c4  db[308] 
Rsrc_Cursor_33_409:
150138f8  db[2220] 
Rsrc_Cursor_34_409:
150141a4  db[748] 
Rsrc_GroupCursor_2715_409:
15014490  db[48] 
Rsrc_Cursor_35_409:
150144c0  db[308] 
Rsrc_Cursor_36_409:
150145f4  db[2220] 
Rsrc_Cursor_37_409:
15014ea0  db[748] 
Rsrc_GroupCursor_2716_409:
1501518c  db[48] 
Rsrc_Cursor_38_409:
150151bc  db[308] 
Rsrc_Cursor_39_409:
150152f0  db[2220] 
Rsrc_Cursor_3a_409:
15015b9c  db[748] 
Rsrc_GroupCursor_271a_409:
15015e88  db[48] 
Rsrc_Cursor_3b_409:
15015eb8  db[308] 
Rsrc_Cursor_3c_409:
15015fec  db[2220] 
Rsrc_Cursor_3d_409:
15016898  db[748] 
Rsrc_GroupCursor_2717_409:
15016b84  db[48] 
Rsrc_Cursor_3e_409:
15016bb4  db[308] 
Rsrc_Cursor_3f_409:
15016ce8  db[2220] 
Rsrc_Cursor_40_409:
15017594  db[748] 
Rsrc_GroupCursor_2718_409:
15017880  db[48] 
Rsrc_Cursor_41_409:
150178b0  db[308] 
Rsrc_Cursor_42_409:
150179e4  db[2220] 
Rsrc_Cursor_43_409:
15018290  db[748] 
Rsrc_GroupCursor_2719_409:
1501857c  db[48] 
Rsrc_Cursor_44_409:
150185ac  db[308] 
Rsrc_Cursor_45_409:
150186e0  db[2220] 
Rsrc_Cursor_46_409:
15018f8c  db[748] 
Rsrc_GroupCursor_272b_409:
15019278  db[48] 
Rsrc_Cursor_47_409:
150192a8  db[308] 
Rsrc_GroupCursor_2737_409:
150193dc  db[20] 
Rsrc_Version_1_409:
150193f0  VS_VERSION_INFO 
1501944c  StringFileInfo 
15019452  unicode u"StringFileInfo"
15019470  StringTable 
15019476  unicode u"040904E4"
15019488  StringInfo 
1501948e  unicode u"CompanyName"
; undefined 2 bytes at 150194a6
150194a8  unicode u"mFactory/Quark, Inc."
; undefined 2 bytes at 150194d2
150194d4  StringInfo 
150194da  unicode u"FileDescription"
; undefined 2 bytes at 150194fa
150194fc  unicode u"mCursors (Win32 Player)"
1501952c  StringInfo 
15019532  unicode u"FileVersion"
; undefined 2 bytes at 1501954a
1501954c  unicode u"2, 0, 0, 0"
; undefined 2 bytes at 15019562
15019564  StringInfo 
1501956a  unicode u"InternalName"
15019584  unicode u"mCursors"
; undefined 2 bytes at 15019596
15019598  StringInfo 
1501959e  unicode u"LegalCopyright"
150195bc  unicode u"Copyright © 1998 Quark, Inc."
; undefined 2 bytes at 150195f6
150195f8  StringInfo 
150195fe  unicode u"OriginalFilename"
15019620  unicode u"mCursors.c32"
; undefined 2 bytes at 1501963a
1501963c  StringInfo 
15019642  unicode u"ProductName"
; undefined 2 bytes at 1501965a
1501965c  unicode u"2.0, © 1998 Quark, Inc."
1501968c  StringInfo 
15019692  unicode u"ProductVersion"
150196b0  unicode u"2, 0, 0, 0"
; undefined 2 bytes at 150196c6
150196c8  VarFileInfo 
150196ce  unicode u"VarFileInfo"
; undefined 2 bytes at 150196e6
150196e8  Var 
150196ee  unicode u"Translation"
; undefined 2 bytes at 15019706
15019708  ddw 4E40409h
; undefined 244 bytes at 1501970c
1501a000  IMAGE_BASE_RELOCATION 
1501a008  dw 301Fh
1501a00a  dw 3025h
1501a00c  dw 302Bh
1501a00e  dw 3047h
1501a010  dw 304Dh
1501a012  dw 3056h
1501a014  dw 305Dh
1501a016  dw 3078h
1501a018  dw 3087h
1501a01a  dw 3090h
1501a01c  dw 3095h
1501a01e  dw 309Bh
1501a020  dw 30A5h
1501a022  dw 30BEh
1501a024  dw 30C3h
1501a026  dw 30CEh
1501a028  dw 30D4h
1501a02a  dw 310Eh
1501a02c  dw 3119h
1501a02e  dw 311Fh
1501a030  dw 3173h
1501a032  dw 3182h
1501a034  dw 31A0h
1501a036  dw 31AAh
1501a038  dw 3212h
1501a03a  dw 3231h
1501a03c  dw 3240h
1501a03e  dw 3260h
1501a040  dw 3271h
1501a042  dw 327Ch
1501a044  dw 3281h
1501a046  dw 328Eh
1501a048  dw 3293h
1501a04a  dw 32DAh
1501a04c  dw 32E8h
1501a04e  dw 32EFh
1501a050  dw 32F5h
1501a052  dw 3308h
1501a054  dw 3310h
1501a056  dw 3319h
1501a058  dw 3322h
1501a05a  dw 3335h
1501a05c  dw 333Ch
1501a05e  dw 3341h
1501a060  dw 334Eh
1501a062  dw 3353h
1501a064  dw 336Eh
1501a066  dw 3379h
1501a068  dw 33D8h
1501a06a  dw 33DDh
1501a06c  dw 33FEh
1501a06e  dw 3405h
1501a070  dw 3418h
1501a072  dw 3436h
1501a074  dw 3442h
1501a076  dw 3448h
1501a078  dw 3467h
1501a07a  dw 3484h
1501a07c  dw 348Bh
1501a07e  dw 3492h
1501a080  dw 34B0h
1501a082  dw 34B7h
1501a084  dw 34CAh
1501a086  dw 34E6h
1501a088  dw 34F2h
1501a08a  dw 3507h
1501a08c  dw 350Eh
1501a08e  dw 3584h
1501a090  dw 358Bh
1501a092  dw 35ABh
1501a094  dw 35B0h
1501a096  dw 35C1h
1501a098  dw 35C8h
1501a09a  dw 35FCh
1501a09c  dw 3602h
1501a09e  dw 3629h
1501a0a0  dw 363Dh
1501a0a2  dw 3673h
1501a0a4  dw 367Ah
1501a0a6  dw 3699h
1501a0a8  dw 36C9h
1501a0aa  dw 36D3h
1501a0ac  dw 36ECh
1501a0ae  dw 3706h
1501a0b0  dw 3727h
1501a0b2  dw 3750h
1501a0b4  dw 375Eh
1501a0b6  dw 3797h
1501a0b8  dw 379Eh
1501a0ba  dw 37B4h
1501a0bc  dw 37BBh
1501a0be  dw 37FAh
1501a0c0  dw 381Ah
1501a0c2  dw 384Dh
1501a0c4  dw 3866h
1501a0c6  dw 38D1h
1501a0c8  dw 38FBh
1501a0ca  dw 3904h
1501a0cc  dw 3909h
1501a0ce  dw 390Fh
1501a0d0  dw 391Ah
1501a0d2  dw 397Ch
1501a0d4  dw 3982h
1501a0d6  dw 39DBh
1501a0d8  dw 3A1Fh
1501a0da  dw 3B02h
1501a0dc  dw 3B23h
1501a0de  dw 3B82h
1501a0e0  dw 3BC2h
1501a0e2  dw 3BD6h
1501a0e4  dw 3BE4h
1501a0e6  dw 3BF2h
1501a0e8  dw 3C2Ah
1501a0ea  dw 3C48h
1501a0ec  dw 3C58h
1501a0ee  dw 3C6Ah
1501a0f0  dw 3C8Ch
1501a0f2  dw 3CAAh
1501a0f4  dw 3CB0h
1501a0f6  dw 3CCFh
1501a0f8  dw 3CDCh
1501a0fa  dw 3CE1h
1501a0fc  dw 3CEFh
1501a0fe  dw 3CF8h
1501a100  dw 3D1Eh
1501a102  dw 3D23h
1501a104  dw 3D2Ah
1501a106  dw 3D4Ch
1501a108  dw 3D92h
1501a10a  dw 3DA5h
1501a10c  dw 3DAFh
1501a10e  dw 3DBAh
1501a110  dw 3DC4h
1501a112  dw 3DCFh
1501a114  dw 3DD8h
1501a116  dw 3DF2h
1501a118  dw 3DF9h
1501a11a  dw 3E18h
1501a11c  dw 3E1Ch
1501a11e  dw 3E20h
1501a120  dw 3E24h
1501a122  dw 3E28h
1501a124  dw 3E44h
1501a126  dw 3E51h
1501a128  dw 3E56h
1501a12a  dw 3E5Ch
1501a12c  dw 3E61h
1501a12e  dw 3E85h
1501a130  dw 3E8Fh
1501a132  dw 3EA0h
1501a134  dw 3EB0h
1501a136  dw 3EBCh
1501a138  dw 3EDAh
1501a13a  dw 3F2Bh
1501a13c  dw 3F52h
1501a13e  dw 3F68h
1501a140  dw 3F79h
1501a142  dw 3F89h
1501a144  dw 3F96h
1501a146  dw 3FD6h
1501a148  dw 3FFBh
1501a14a  dw 0h
1501a14c  IMAGE_BASE_RELOCATION 
1501a154  dw 3025h
1501a156  dw 3041h
1501a158  dw 3050h
1501a15a  dw 3065h
1501a15c  dw 3089h
1501a15e  dw 30A1h
1501a160  dw 30AAh
1501a162  dw 30BDh
1501a164  dw 30CAh
1501a166  dw 30D3h
1501a168  dw 30F9h
1501a16a  dw 3106h
1501a16c  dw 3152h
1501a16e  dw 3160h
1501a170  dw 31A1h
1501a172  dw 31D4h
1501a174  dw 3209h
1501a176  dw 3228h
1501a178  dw 3238h
1501a17a  dw 3240h
1501a17c  dw 325Eh
1501a17e  dw 3272h
1501a180  dw 3279h
1501a182  dw 3281h
1501a184  dw 3289h
1501a186  dw 3291h
1501a188  dw 32A5h
1501a18a  dw 32AEh
1501a18c  dw 32E1h
1501a18e  dw 32E9h
1501a190  dw 32F1h
1501a192  dw 32F9h
1501a194  dw 331Ch
1501a196  dw 3351h
1501a198  dw 3370h
1501a19a  dw 338Ah
1501a19c  dw 3391h
1501a19e  dw 33A8h
1501a1a0  dw 33AFh
1501a1a2  dw 33B6h
1501a1a4  dw 33D0h
1501a1a6  dw 3402h
1501a1a8  dw 3418h
1501a1aa  dw 341Fh
1501a1ac  dw 3426h
1501a1ae  dw 3440h
1501a1b0  dw 3472h
1501a1b2  dw 3495h
1501a1b4  dw 349Bh
1501a1b6  dw 34B4h
1501a1b8  dw 34C7h
1501a1ba  dw 34ECh
1501a1bc  dw 34F3h
1501a1be  dw 3501h
1501a1c0  dw 3566h
1501a1c2  dw 3570h
1501a1c4  dw 3587h
1501a1c6  dw 358Eh
1501a1c8  dw 3594h
1501a1ca  dw 359Fh
1501a1cc  dw 35A5h
1501a1ce  dw 35ADh
1501a1d0  dw 35B6h
1501a1d2  dw 35BEh
1501a1d4  dw 35C3h
1501a1d6  dw 35CBh
1501a1d8  dw 35D0h
1501a1da  dw 35E2h
1501a1dc  dw 35ECh
1501a1de  dw 3604h
1501a1e0  dw 3722h
1501a1e2  dw 372Ch
1501a1e4  dw 3738h
1501a1e6  dw 3741h
1501a1e8  dw 374Ch
1501a1ea  dw 375Ah
1501a1ec  dw 3764h
1501a1ee  dw 3779h
1501a1f0  dw 378Ch
1501a1f2  dw 3794h
1501a1f4  dw 37AAh
1501a1f6  dw 37C0h
1501a1f8  dw 37DFh
1501a1fa  dw 37F7h
1501a1fc  dw 381Bh
1501a1fe  dw 3867h
1501a200  dw 3874h
1501a202  dw 3879h
1501a204  dw 389Fh
1501a206  dw 38AEh
1501a208  dw 38C0h
1501a20a  dw 38D1h
1501a20c  dw 39CBh
1501a20e  dw 39DCh
1501a210  dw 39F8h
1501a212  dw 3A3Bh
1501a214  dw 3A52h
1501a216  dw 3B29h
1501a218  dw 3B39h
1501a21a  dw 3B74h
1501a21c  dw 3B7Eh
1501a21e  dw 3BD8h
1501a220  dw 3BF0h
1501a222  dw 3C88h
1501a224  dw 3D3Fh
1501a226  dw 3D6Ah
1501a228  dw 3D86h
1501a22a  dw 3E58h
1501a22c  dw 3E70h
1501a22e  dw 3EF6h
1501a230  dw 3F00h
1501a232  dw 3F39h
1501a234  dw 3F9Fh
1501a236  dw 3FACh
1501a238  dw 3FD1h
1501a23a  dw 0h
1501a23c  IMAGE_BASE_RELOCATION 
1501a244  dw 3038h
1501a246  dw 3048h
1501a248  dw 3068h
1501a24a  dw 3091h
1501a24c  dw 30D6h
1501a24e  dw 30EFh
1501a250  dw 3137h
1501a252  dw 315Eh
1501a254  dw 3179h
1501a256  dw 31A7h
1501a258  dw 31B3h
1501a25a  dw 31F6h
1501a25c  dw 3208h
1501a25e  dw 3231h
1501a260  IMAGE_BASE_RELOCATION 
1501a268  dw 300Ch
1501a26a  dw 3018h
1501a26c  dw 303Ch
1501a26e  dw 32E4h
1501a270  dw 32ECh
1501a272  dw 32F4h
1501a274  dw 32FCh
1501a276  dw 3304h
1501a278  dw 330Ch
1501a27a  dw 3314h
1501a27c  dw 331Ch
1501a27e  dw 3324h
1501a280  dw 332Ch
1501a282  dw 3334h
1501a284  dw 333Ch
1501a286  dw 3344h
1501a288  dw 334Ch
1501a28a  dw 3354h
1501a28c  dw 335Ch
1501a28e  dw 3364h
1501a290  dw 3374h
1501a292  dw 3394h
1501a294  dw 33A4h
1501a296  dw 33B4h
1501a298  dw 34E0h
1501a29a  dw 34E8h
; undefined 868 bytes at 1501a29c
