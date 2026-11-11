; Ghidra listing for stream_002_0001797e.exe (x86:LE:32:default). Labels and types are tool-generated unless they came from the binary.
5f000000  IMAGE_DOS_HEADER 
5f000080  IMAGE_NT_HEADERS32 
5f000178  IMAGE_SECTION_HEADER 
5f0001a0  IMAGE_SECTION_HEADER 
5f0001c8  IMAGE_SECTION_HEADER 
5f0001f0  IMAGE_SECTION_HEADER 
5f000218  IMAGE_SECTION_HEADER 
5f000240  IMAGE_SECTION_HEADER 
5f000268  IMAGE_SECTION_HEADER 
5f000290  IMAGE_SECTION_HEADER 
; undefined 328 bytes at 5f0002b8

; ==== FUNCTION FUN_5f001000 entry=5f001000 sig=HANDLE __cdecl FUN_5f001000(HWND param_1)
5f001000  8b442404             MOV EAX,dword ptr [ESP + 0x4]
5f001004  85c0                 TEST EAX,EAX
5f001006  7503                 JNZ 0x5f00100b
5f001008  33c0                 XOR EAX,EAX
5f00100a  c3                   RET
5f00100b  33c9                 XOR ECX,ECX
5f00100d  668b0d3e51005f       MOV CX,word ptr [0x5f00513e]
5f001014  51                   PUSH ECX
5f001015  50                   PUSH EAX
5f001016  ff15fcd2005f         CALL dword ptr [0x5f00d2fc]
5f00101c  c3                   RET
; undefined 3 bytes at 5f00101d

; ==== FUNCTION FUN_5f001020 entry=5f001020 sig=HANDLE __cdecl FUN_5f001020(HWND param_1, int param_2)
5f001020  56                   PUSH ESI
5f001021  57                   PUSH EDI
5f001022  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
5f001026  56                   PUSH ESI
5f001027  e8d4ffffff           CALL 0x5f001000
5f00102c  83c404               ADD ESP,0x4
5f00102f  8bf8                 MOV EDI,EAX
5f001031  85ff                 TEST EDI,EDI
5f001033  752c                 JNZ 0x5f001061
5f001035  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f001039  83f806               CMP EAX,0x6
5f00103c  7508                 JNZ 0x5f001046
5f00103e  8b3d20a2005f         MOV EDI,dword ptr [0x5f00a220]
5f001044  eb0a                 JMP 0x5f001050
5f001046  8d0440               LEA EAX,[EAX + EAX*0x2]
5f001049  8b3cc594a1005f       MOV EDI,dword ptr [EAX*0x8 + 0x5f00a194]
5f001050  57                   PUSH EDI
5f001051  33c0                 XOR EAX,EAX
5f001053  66a13e51005f         MOV AX,[0x5f00513e]
5f001059  50                   PUSH EAX
5f00105a  56                   PUSH ESI
5f00105b  ff15f8d2005f         CALL dword ptr [0x5f00d2f8]
5f001061  8bc7                 MOV EAX,EDI
5f001063  5f                   POP EDI
5f001064  5e                   POP ESI
5f001065  c3                   RET
; undefined 10 bytes at 5f001066

; ==== FUNCTION FUN_5f001070 entry=5f001070 sig=undefined __cdecl FUN_5f001070(HWND param_1, LONG param_2)
5f001070  83ec10               SUB ESP,0x10
5f001073  33c0                 XOR EAX,EAX
5f001075  66a13851005f         MOV AX,[0x5f005138]
5f00107b  56                   PUSH ESI
5f00107c  8b742418             MOV ESI,dword ptr [ESP + 0x18]
5f001080  57                   PUSH EDI
5f001081  50                   PUSH EAX
5f001082  8b3dfcd2005f         MOV EDI,dword ptr [0x5f00d2fc]
5f001088  56                   PUSH ESI
5f001089  ffd7                 CALL EDI
5f00108b  85c0                 TEST EAX,EAX
5f00108d  0f85bc000000         JNZ 0x5f00114f
5f001093  33c0                 XOR EAX,EAX
5f001095  66a13e51005f         MOV AX,[0x5f00513e]
5f00109b  50                   PUSH EAX
5f00109c  56                   PUSH ESI
5f00109d  ffd7                 CALL EDI
5f00109f  85c0                 TEST EAX,EAX
5f0010a1  0f85a8000000         JNZ 0x5f00114f
5f0010a7  33c0                 XOR EAX,EAX
5f0010a9  66a14251005f         MOV AX,[0x5f005142]
5f0010af  50                   PUSH EAX
5f0010b0  56                   PUSH ESI
5f0010b1  ffd7                 CALL EDI
5f0010b3  85c0                 TEST EAX,EAX
5f0010b5  0f8594000000         JNZ 0x5f00114f
5f0010bb  33c0                 XOR EAX,EAX
5f0010bd  66a13c51005f         MOV AX,[0x5f00513c]
5f0010c3  50                   PUSH EAX
5f0010c4  56                   PUSH ESI
5f0010c5  ffd7                 CALL EDI
5f0010c7  85c0                 TEST EAX,EAX
5f0010c9  0f8580000000         JNZ 0x5f00114f
5f0010cf  33c0                 XOR EAX,EAX
5f0010d1  66a14051005f         MOV AX,[0x5f005140]
5f0010d7  50                   PUSH EAX
5f0010d8  56                   PUSH ESI
5f0010d9  ffd7                 CALL EDI
5f0010db  85c0                 TEST EAX,EAX
5f0010dd  7570                 JNZ 0x5f00114f
5f0010df  33c0                 XOR EAX,EAX
5f0010e1  66a13a51005f         MOV AX,[0x5f00513a]
5f0010e7  50                   PUSH EAX
5f0010e8  56                   PUSH ESI
5f0010e9  ffd7                 CALL EDI
5f0010eb  85c0                 TEST EAX,EAX
5f0010ed  7560                 JNZ 0x5f00114f
5f0010ef  56                   PUSH ESI
5f0010f0  e80bffffff           CALL 0x5f001000
5f0010f5  83c404               ADD ESP,0x4
5f0010f8  85c0                 TEST EAX,EAX
5f0010fa  7553                 JNZ 0x5f00114f
5f0010fc  803d35a2005f00       CMP byte ptr [0x5f00a235],0x0
5f001103  742b                 JZ 0x5f001130
5f001105  56                   PUSH ESI
5f001106  ff15ecd2005f         CALL dword ptr [0x5f00d2ec]
5f00110c  85c0                 TEST EAX,EAX
5f00110e  7520                 JNZ 0x5f001130
5f001110  8d442408             LEA EAX,[ESP + 0x8]
5f001114  6a10                 PUSH 0x10
5f001116  50                   PUSH EAX
5f001117  56                   PUSH ESI
5f001118  ff15f0d2005f         CALL dword ptr [0x5f00d2f0]
5f00111e  8d4c2408             LEA ECX,[ESP + 0x8]
5f001122  6800c0005f           PUSH 0x5f00c000
5f001127  51                   PUSH ECX
5f001128  ff1540d2005f         CALL dword ptr [0x5f00d240]
5f00112e  85c0                 TEST EAX,EAX
5f001130  8b442420             MOV EAX,dword ptr [ESP + 0x20]
5f001134  50                   PUSH EAX
5f001135  6afc                 PUSH -0x4
5f001137  56                   PUSH ESI
5f001138  ff15f4d2005f         CALL dword ptr [0x5f00d2f4]
5f00113e  50                   PUSH EAX
5f00113f  33c0                 XOR EAX,EAX
5f001141  66a13e51005f         MOV AX,[0x5f00513e]
5f001147  50                   PUSH EAX
5f001148  56                   PUSH ESI
5f001149  ff15f8d2005f         CALL dword ptr [0x5f00d2f8]
5f00114f  5f                   POP EDI
5f001150  5e                   POP ESI
5f001151  83c410               ADD ESP,0x10
5f001154  c3                   RET
; undefined 11 bytes at 5f001155

; ==== FUNCTION FUN_5f001160 entry=5f001160 sig=LRESULT __stdcall FUN_5f001160(int param_1, WPARAM param_2, int param_3)
5f001160  8b442408             MOV EAX,dword ptr [ESP + 0x8]
5f001164  83ec04               SUB ESP,0x4
5f001167  8b4c2408             MOV ECX,dword ptr [ESP + 0x8]
5f00116b  56                   PUSH ESI
5f00116c  8b742414             MOV ESI,dword ptr [ESP + 0x14]
5f001170  57                   PUSH EDI
5f001171  56                   PUSH ESI
5f001172  8b150851005f         MOV EDX,dword ptr [0x5f005108]
5f001178  50                   PUSH EAX
5f001179  51                   PUSH ECX
5f00117a  52                   PUSH EDX
5f00117b  ff15dcd2005f         CALL dword ptr [0x5f00d2dc]
5f001181  8bf8                 MOV EDI,EAX
5f001183  8b0d0451005f         MOV ECX,dword ptr [0x5f005104]
5f001189  394e0c               CMP dword ptr [ESI + 0xc],ECX
5f00118c  7577                 JNZ 0x5f001205
5f00118e  a10851005f           MOV EAX,[0x5f005108]
5f001193  50                   PUSH EAX
5f001194  ff15e0d2005f         CALL dword ptr [0x5f00d2e0]
5f00119a  66813d5051005f5f03   CMP word ptr [0x5f005150],0x35f
5f0011a3  7218                 JC 0x5f0011bd
5f0011a5  6af0                 PUSH -0x10
5f0011a7  8b460c               MOV EAX,dword ptr [ESI + 0xc]
5f0011aa  50                   PUSH EAX
5f0011ab  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f0011b1  c744240800000000     MOV dword ptr [ESP + 0x8],0x0
5f0011b9  a804                 TEST AL,0x4
5f0011bb  7508                 JNZ 0x5f0011c5
5f0011bd  c744240801000000     MOV dword ptr [ESP + 0x8],0x1
5f0011c5  8d442408             LEA EAX,[ESP + 0x8]
5f0011c9  8b4e0c               MOV ECX,dword ptr [ESI + 0xc]
5f0011cc  50                   PUSH EAX
5f0011cd  6a00                 PUSH 0x0
5f0011cf  68f0110000           PUSH 0x11f0
5f0011d4  51                   PUSH ECX
5f0011d5  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f0011db  837c240800           CMP dword ptr [ESP + 0x8],0x0
5f0011e0  7412                 JZ 0x5f0011f4
5f0011e2  a10c51005f           MOV EAX,[0x5f00510c]
5f0011e7  8b4e0c               MOV ECX,dword ptr [ESI + 0xc]
5f0011ea  50                   PUSH EAX
5f0011eb  51                   PUSH ECX
5f0011ec  e87ffeffff           CALL 0x5f001070
5f0011f1  83c408               ADD ESP,0x8
5f0011f4  33c0                 XOR EAX,EAX
5f0011f6  a30851005f           MOV [0x5f005108],EAX
5f0011fb  a30c51005f           MOV [0x5f00510c],EAX
5f001200  a30451005f           MOV [0x5f005104],EAX
5f001205  8bc7                 MOV EAX,EDI
5f001207  5f                   POP EDI
5f001208  5e                   POP ESI
5f001209  83c404               ADD ESP,0x4
5f00120c  c20c00               RET 0xc
; undefined 1 bytes at 5f00120f

; ==== FUNCTION FUN_5f001210 entry=5f001210 sig=undefined __cdecl FUN_5f001210(undefined4 param_1, undefined4 param_2)
5f001210  8b442408             MOV EAX,dword ptr [ESP + 0x8]
5f001214  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
5f001218  a30c51005f           MOV [0x5f00510c],EAX
5f00121d  890d0451005f         MOV dword ptr [0x5f005104],ECX
5f001223  ff152cd2005f         CALL dword ptr [0x5f00d22c]
5f001229  50                   PUSH EAX
5f00122a  8b0d4c51005f         MOV ECX,dword ptr [0x5f00514c]
5f001230  51                   PUSH ECX
5f001231  686011005f           PUSH 0x5f001160
5f001236  6a04                 PUSH 0x4
5f001238  ff15d8d2005f         CALL dword ptr [0x5f00d2d8]
5f00123e  a30851005f           MOV [0x5f005108],EAX
5f001243  c3                   RET
; undefined 12 bytes at 5f001244

; ==== FUNCTION FUN_5f001250 entry=5f001250 sig=LRESULT __cdecl FUN_5f001250(HWND param_1, UINT param_2, WPARAM param_3, LPARAM param_4, int param_5)
5f001250  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f001254  53                   PUSH EBX
5f001255  56                   PUSH ESI
5f001256  57                   PUSH EDI
5f001257  8b742410             MOV ESI,dword ptr [ESP + 0x10]
5f00125b  50                   PUSH EAX
5f00125c  56                   PUSH ESI
5f00125d  e8befdffff           CALL 0x5f001020
5f001262  8b4c2424             MOV ECX,dword ptr [ESP + 0x24]
5f001266  8b542420             MOV EDX,dword ptr [ESP + 0x20]
5f00126a  8b5c241c             MOV EBX,dword ptr [ESP + 0x1c]
5f00126e  83c408               ADD ESP,0x8
5f001271  51                   PUSH ECX
5f001272  52                   PUSH EDX
5f001273  53                   PUSH EBX
5f001274  56                   PUSH ESI
5f001275  50                   PUSH EAX
5f001276  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f00127c  8bf8                 MOV EDI,EAX
5f00127e  8b1dd4d2005f         MOV EBX,dword ptr [0x5f00d2d4]
5f001284  33c0                 XOR EAX,EAX
5f001286  66a13e51005f         MOV AX,[0x5f00513e]
5f00128c  50                   PUSH EAX
5f00128d  56                   PUSH ESI
5f00128e  ffd3                 CALL EBX
5f001290  33c0                 XOR EAX,EAX
5f001292  66a14451005f         MOV AX,[0x5f005144]
5f001298  50                   PUSH EAX
5f001299  56                   PUSH ESI
5f00129a  ffd3                 CALL EBX
5f00129c  8bc7                 MOV EAX,EDI
5f00129e  5f                   POP EDI
5f00129f  5e                   POP ESI
5f0012a0  5b                   POP EBX
5f0012a1  c3                   RET
; undefined 14 bytes at 5f0012a2

; ==== FUNCTION FUN_5f0012b0 entry=5f0012b0 sig=undefined __cdecl FUN_5f0012b0(undefined4 * param_1)
5f0012b0  56                   PUSH ESI
5f0012b1  8b742408             MOV ESI,dword ptr [ESP + 0x8]
5f0012b5  8b06                 MOV EAX,dword ptr [ESI]
5f0012b7  85c0                 TEST EAX,EAX
5f0012b9  740d                 JZ 0x5f0012c8
5f0012bb  50                   PUSH EAX
5f0012bc  ff15acd1005f         CALL dword ptr [0x5f00d1ac]
5f0012c2  c70600000000         MOV dword ptr [ESI],0x0
5f0012c8  5e                   POP ESI
5f0012c9  c3                   RET
; undefined 6 bytes at 5f0012ca

; ==== FUNCTION FUN_5f0012d0 entry=5f0012d0 sig=undefined __stdcall FUN_5f0012d0(void)
5f0012d0  56                   PUSH ESI
5f0012d1  be7451005f           MOV ESI,0x5f005174
5f0012d6  56                   PUSH ESI
5f0012d7  e8d4ffffff           CALL 0x5f0012b0
5f0012dc  83c404               ADD ESP,0x4
5f0012df  83c604               ADD ESI,0x4
5f0012e2  81fe8051005f         CMP ESI,0x5f005180
5f0012e8  72ec                 JC 0x5f0012d6
5f0012ea  688051005f           PUSH 0x5f005180
5f0012ef  e8bcffffff           CALL 0x5f0012b0
5f0012f4  83c404               ADD ESP,0x4
5f0012f7  5e                   POP ESI
5f0012f8  c3                   RET
; undefined 7 bytes at 5f0012f9

; ==== FUNCTION FUN_5f001300 entry=5f001300 sig=undefined __cdecl FUN_5f001300(HDC param_1, int * param_2)
5f001300  8b442408             MOV EAX,dword ptr [ESP + 0x8]
5f001304  56                   PUSH ESI
5f001305  682100f000           PUSH 0xf00021
5f00130a  8b7004               MOV ESI,dword ptr [EAX + 0x4]
5f00130d  8b10                 MOV EDX,dword ptr [EAX]
5f00130f  8b480c               MOV ECX,dword ptr [EAX + 0xc]
5f001312  2bce                 SUB ECX,ESI
5f001314  8b4008               MOV EAX,dword ptr [EAX + 0x8]
5f001317  51                   PUSH ECX
5f001318  2bc2                 SUB EAX,EDX
5f00131a  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
5f00131e  50                   PUSH EAX
5f00131f  56                   PUSH ESI
5f001320  52                   PUSH EDX
5f001321  51                   PUSH ECX
5f001322  ff15b0d1005f         CALL dword ptr [0x5f00d1b0]
5f001328  5e                   POP ESI
5f001329  c3                   RET
; undefined 6 bytes at 5f00132a

; ==== FUNCTION FUN_5f001330 entry=5f001330 sig=undefined __cdecl FUN_5f001330(HDC param_1, int * param_2, ushort param_3, ushort param_4, ushort param_5)
5f001330  8b44240c             MOV EAX,dword ptr [ESP + 0xc]
5f001334  83ec10               SUB ESP,0x10
5f001337  25ffff0000           AND EAX,0xffff
5f00133c  53                   PUSH EBX
5f00133d  56                   PUSH ESI
5f00133e  57                   PUSH EDI
5f00133f  55                   PUSH EBP
5f001340  8b0c855451005f       MOV ECX,dword ptr [EAX*0x4 + 0x5f005154]
5f001347  8b7c2424             MOV EDI,dword ptr [ESP + 0x24]
5f00134b  51                   PUSH ECX
5f00134c  57                   PUSH EDI
5f00134d  ff15bcd1005f         CALL dword ptr [0x5f00d1bc]
5f001353  8bf0                 MOV ESI,EAX
5f001355  8b5c2428             MOV EBX,dword ptr [ESP + 0x28]
5f001359  8d4c2410             LEA ECX,[ESP + 0x10]
5f00135d  8b03                 MOV EAX,dword ptr [EBX]
5f00135f  8b5304               MOV EDX,dword ptr [EBX + 0x4]
5f001362  8b6b08               MOV EBP,dword ptr [EBX + 0x8]
5f001365  8901                 MOV dword ptr [ECX],EAX
5f001367  8b430c               MOV EAX,dword ptr [EBX + 0xc]
5f00136a  895104               MOV dword ptr [ECX + 0x4],EDX
5f00136d  896908               MOV dword ptr [ECX + 0x8],EBP
5f001370  668b6c2434           MOV BP,word ptr [ESP + 0x34]
5f001375  89410c               MOV dword ptr [ECX + 0xc],EAX
5f001378  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f00137c  40                   INC EAX
5f00137d  66f7c50200           TEST BP,0x2
5f001382  8944241c             MOV dword ptr [ESP + 0x1c],EAX
5f001386  7418                 JZ 0x5f0013a0
5f001388  8d442410             LEA EAX,[ESP + 0x10]
5f00138c  6a00                 PUSH 0x0
5f00138e  6a00                 PUSH 0x0
5f001390  6a00                 PUSH 0x0
5f001392  50                   PUSH EAX
5f001393  6a02                 PUSH 0x2
5f001395  6a00                 PUSH 0x0
5f001397  6a00                 PUSH 0x0
5f001399  57                   PUSH EDI
5f00139a  ff15b4d1005f         CALL dword ptr [0x5f00d1b4]
5f0013a0  8b430c               MOV EAX,dword ptr [EBX + 0xc]
5f0013a3  8944241c             MOV dword ptr [ESP + 0x1c],EAX
5f0013a7  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f0013ab  40                   INC EAX
5f0013ac  66f7c50100           TEST BP,0x1
5f0013b1  89442418             MOV dword ptr [ESP + 0x18],EAX
5f0013b5  7418                 JZ 0x5f0013cf
5f0013b7  8d442410             LEA EAX,[ESP + 0x10]
5f0013bb  6a00                 PUSH 0x0
5f0013bd  6a00                 PUSH 0x0
5f0013bf  6a00                 PUSH 0x0
5f0013c1  50                   PUSH EAX
5f0013c2  6a02                 PUSH 0x2
5f0013c4  6a00                 PUSH 0x0
5f0013c6  6a00                 PUSH 0x0
5f0013c8  57                   PUSH EDI
5f0013c9  ff15b4d1005f         CALL dword ptr [0x5f00d1b4]
5f0013cf  668b442430           MOV AX,word ptr [ESP + 0x30]
5f0013d4  663944242c           CMP word ptr [ESP + 0x2c],AX
5f0013d9  7412                 JZ 0x5f0013ed
5f0013db  0fb7c0               MOVZX EAX,AX
5f0013de  8b0c855451005f       MOV ECX,dword ptr [EAX*0x4 + 0x5f005154]
5f0013e5  51                   PUSH ECX
5f0013e6  57                   PUSH EDI
5f0013e7  ff15bcd1005f         CALL dword ptr [0x5f00d1bc]
5f0013ed  8b4308               MOV EAX,dword ptr [EBX + 0x8]
5f0013f0  89442418             MOV dword ptr [ESP + 0x18],EAX
5f0013f4  48                   DEC EAX
5f0013f5  66f7c50400           TEST BP,0x4
5f0013fa  89442410             MOV dword ptr [ESP + 0x10],EAX
5f0013fe  7418                 JZ 0x5f001418
5f001400  8d442410             LEA EAX,[ESP + 0x10]
5f001404  6a00                 PUSH 0x0
5f001406  6a00                 PUSH 0x0
5f001408  6a00                 PUSH 0x0
5f00140a  50                   PUSH EAX
5f00140b  6a02                 PUSH 0x2
5f00140d  6a00                 PUSH 0x0
5f00140f  6a00                 PUSH 0x0
5f001411  57                   PUSH EDI
5f001412  ff15b4d1005f         CALL dword ptr [0x5f00d1b4]
5f001418  66f7c50800           TEST BP,0x8
5f00141d  7433                 JZ 0x5f001452
5f00141f  8b03                 MOV EAX,dword ptr [EBX]
5f001421  89442410             MOV dword ptr [ESP + 0x10],EAX
5f001425  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
5f001429  48                   DEC EAX
5f00142a  66f7c50010           TEST BP,0x1000
5f00142f  89442414             MOV dword ptr [ESP + 0x14],EAX
5f001433  7405                 JZ 0x5f00143a
5f001435  836c241802           SUB dword ptr [ESP + 0x18],0x2
5f00143a  8d442410             LEA EAX,[ESP + 0x10]
5f00143e  6a00                 PUSH 0x0
5f001440  6a00                 PUSH 0x0
5f001442  6a00                 PUSH 0x0
5f001444  50                   PUSH EAX
5f001445  6a02                 PUSH 0x2
5f001447  6a00                 PUSH 0x0
5f001449  6a00                 PUSH 0x0
5f00144b  57                   PUSH EDI
5f00144c  ff15b4d1005f         CALL dword ptr [0x5f00d1b4]
5f001452  56                   PUSH ESI
5f001453  57                   PUSH EDI
5f001454  ff15bcd1005f         CALL dword ptr [0x5f00d1bc]
5f00145a  5d                   POP EBP
5f00145b  5f                   POP EDI
5f00145c  5e                   POP ESI
5f00145d  5b                   POP EBX
5f00145e  83c410               ADD ESP,0x10
5f001461  c3                   RET
; undefined 14 bytes at 5f001462

; ==== FUNCTION FUN_5f001470 entry=5f001470 sig=undefined __cdecl FUN_5f001470(HDC param_1, int * param_2, ushort param_3)
5f001470  8b4c2408             MOV ECX,dword ptr [ESP + 0x8]
5f001474  83ec10               SUB ESP,0x10
5f001477  8d542400             LEA EDX,[ESP]
5f00147b  56                   PUSH ESI
5f00147c  57                   PUSH EDI
5f00147d  8b01                 MOV EAX,dword ptr [ECX]
5f00147f  8b7104               MOV ESI,dword ptr [ECX + 0x4]
5f001482  8b7908               MOV EDI,dword ptr [ECX + 0x8]
5f001485  8902                 MOV dword ptr [EDX],EAX
5f001487  8b410c               MOV EAX,dword ptr [ECX + 0xc]
5f00148a  897204               MOV dword ptr [EDX + 0x4],ESI
5f00148d  897a08               MOV dword ptr [EDX + 0x8],EDI
5f001490  668b7c2424           MOV DI,word ptr [ESP + 0x24]
5f001495  89420c               MOV dword ptr [EDX + 0xc],EAX
5f001498  668bc7               MOV AX,DI
5f00149b  8d542408             LEA EDX,[ESP + 0x8]
5f00149f  66250f00             AND AX,0xf
5f0014a3  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
5f0014a7  50                   PUSH EAX
5f0014a8  6a01                 PUSH 0x1
5f0014aa  6a07                 PUSH 0x7
5f0014ac  52                   PUSH EDX
5f0014ad  56                   PUSH ESI
5f0014ae  e87dfeffff           CALL 0x5f001330
5f0014b3  ff4c241c             DEC dword ptr [ESP + 0x1c]
5f0014b7  ff4c2420             DEC dword ptr [ESP + 0x20]
5f0014bb  8d4c241c             LEA ECX,[ESP + 0x1c]
5f0014bf  ff442424             INC dword ptr [ESP + 0x24]
5f0014c3  ff442428             INC dword ptr [ESP + 0x28]
5f0014c7  83c414               ADD ESP,0x14
5f0014ca  57                   PUSH EDI
5f0014cb  6a00                 PUSH 0x0
5f0014cd  6a02                 PUSH 0x2
5f0014cf  51                   PUSH ECX
5f0014d0  56                   PUSH ESI
5f0014d1  e85afeffff           CALL 0x5f001330
5f0014d6  83c414               ADD ESP,0x14
5f0014d9  5f                   POP EDI
5f0014da  5e                   POP ESI
5f0014db  83c410               ADD ESP,0x10
5f0014de  c3                   RET
; undefined 1 bytes at 5f0014df

; ==== FUNCTION FUN_5f0014e0 entry=5f0014e0 sig=undefined __cdecl FUN_5f0014e0(HWND param_1, HDC param_2)
5f0014e0  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
5f0014e4  83ec10               SUB ESP,0x10
5f0014e7  8d442400             LEA EAX,[ESP]
5f0014eb  50                   PUSH EAX
5f0014ec  51                   PUSH ECX
5f0014ed  ff15ccd2005f         CALL dword ptr [0x5f00d2cc]
5f0014f3  8b4c240c             MOV ECX,dword ptr [ESP + 0xc]
5f0014f7  8b542408             MOV EDX,dword ptr [ESP + 0x8]
5f0014fb  8b442404             MOV EAX,dword ptr [ESP + 0x4]
5f0014ff  51                   PUSH ECX
5f001500  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
5f001504  52                   PUSH EDX
5f001505  8b542420             MOV EDX,dword ptr [ESP + 0x20]
5f001509  50                   PUSH EAX
5f00150a  51                   PUSH ECX
5f00150b  52                   PUSH EDX
5f00150c  ff15b8d1005f         CALL dword ptr [0x5f00d1b8]
5f001512  83c410               ADD ESP,0x10
5f001515  c3                   RET
; undefined 10 bytes at 5f001516

; ==== FUNCTION FUN_5f001520 entry=5f001520 sig=undefined __cdecl FUN_5f001520(HDC param_1, char * param_2, LONG * param_3, LONG * param_4)
5f001520  8b442408             MOV EAX,dword ptr [ESP + 0x8]
5f001524  81ec08010000         SUB ESP,0x108
5f00152a  53                   PUSH EBX
5f00152b  803800               CMP byte ptr [EAX],0x0
5f00152e  56                   PUSH ESI
5f00152f  57                   PUSH EDI
5f001530  8d742414             LEA ESI,[ESP + 0x14]
5f001534  744b                 JZ 0x5f001581
5f001536  8b3dc8d2005f         MOV EDI,dword ptr [0x5f00d2c8]
5f00153c  33db                 XOR EBX,EBX
5f00153e  8a08                 MOV CL,byte ptr [EAX]
5f001540  80f926               CMP CL,0x26
5f001543  7507                 JNZ 0x5f00154c
5f001545  40                   INC EAX
5f001546  3818                 CMP byte ptr [EAX],BL
5f001548  752d                 JNZ 0x5f001577
5f00154a  eb35                 JMP 0x5f001581
5f00154c  381d35a2005f         CMP byte ptr [0x5f00a235],BL
5f001552  7423                 JZ 0x5f001577
5f001554  3a0d34a2005f         CMP CL,byte ptr [0x5f00a234]
5f00155a  7507                 JNZ 0x5f001563
5f00155c  40                   INC EAX
5f00155d  3818                 CMP byte ptr [EAX],BL
5f00155f  7516                 JNZ 0x5f001577
5f001561  eb1e                 JMP 0x5f001581
5f001563  80f91e               CMP CL,0x1e
5f001566  7405                 JZ 0x5f00156d
5f001568  80f91f               CMP CL,0x1f
5f00156b  750a                 JNZ 0x5f001577
5f00156d  40                   INC EAX
5f00156e  3818                 CMP byte ptr [EAX],BL
5f001570  740f                 JZ 0x5f001581
5f001572  50                   PUSH EAX
5f001573  ffd7                 CALL EDI
5f001575  eb06                 JMP 0x5f00157d
5f001577  8a08                 MOV CL,byte ptr [EAX]
5f001579  40                   INC EAX
5f00157a  880e                 MOV byte ptr [ESI],CL
5f00157c  46                   INC ESI
5f00157d  3818                 CMP byte ptr [EAX],BL
5f00157f  75bd                 JNZ 0x5f00153e
5f001581  8d44240c             LEA EAX,[ESP + 0xc]
5f001585  8d4c2414             LEA ECX,[ESP + 0x14]
5f001589  50                   PUSH EAX
5f00158a  c60600               MOV byte ptr [ESI],0x0
5f00158d  51                   PUSH ECX
5f00158e  ff1534d2005f         CALL dword ptr [0x5f00d234]
5f001594  8d4c2418             LEA ECX,[ESP + 0x18]
5f001598  50                   PUSH EAX
5f001599  8b842420010000       MOV EAX,dword ptr [ESP + 0x120]
5f0015a0  51                   PUSH ECX
5f0015a1  50                   PUSH EAX
5f0015a2  ff15c8d1005f         CALL dword ptr [0x5f00d1c8]
5f0015a8  8b4c240c             MOV ECX,dword ptr [ESP + 0xc]
5f0015ac  8b842420010000       MOV EAX,dword ptr [ESP + 0x120]
5f0015b3  8b542410             MOV EDX,dword ptr [ESP + 0x10]
5f0015b7  8908                 MOV dword ptr [EAX],ECX
5f0015b9  8b8c2424010000       MOV ECX,dword ptr [ESP + 0x124]
5f0015c0  5f                   POP EDI
5f0015c1  5e                   POP ESI
5f0015c2  5b                   POP EBX
5f0015c3  8911                 MOV dword ptr [ECX],EDX
5f0015c5  81c408010000         ADD ESP,0x108
5f0015cb  c3                   RET
; undefined 4 bytes at 5f0015cc

; ==== FUNCTION Ctl3dRegister entry=5f0015d0 sig=undefined4 __stdcall Ctl3dRegister(undefined4 param_1)
5f0015d0  681051005f           PUSH 0x5f005110
5f0015d5  ff1520d2005f         CALL dword ptr [0x5f00d220]
5f0015db  681051005f           PUSH 0x5f005110
5f0015e0  ff053451005f         INC dword ptr [0x5f005134]
5f0015e6  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f0015ec  833d3451005f01       CMP dword ptr [0x5f005134],0x1
5f0015f3  7505                 JNZ 0x5f0015fa
5f0015f5  e8460b0000           CALL 0x5f002140
5f0015fa  e831020000           CALL 0x5f001830
5f0015ff  85c0                 TEST EAX,EAX
5f001601  740a                 JZ 0x5f00160d
5f001603  8b442404             MOV EAX,dword ptr [ESP + 0x4]
5f001607  50                   PUSH EAX
5f001608  e8d3000000           CALL 0x5f0016e0
5f00160d  a13051005f           MOV EAX,[0x5f005130]
5f001612  c20400               RET 0x4
; undefined 11 bytes at 5f001615

; ==== FUNCTION Ctl3dUnregister entry=5f001620 sig=undefined4 __stdcall Ctl3dUnregister(int param_1)
5f001620  53                   PUSH EBX
5f001621  56                   PUSH ESI
5f001622  57                   PUSH EDI
5f001623  55                   PUSH EBP
5f001624  33ed                 XOR EBP,EBP
5f001626  ff152cd2005f         CALL dword ptr [0x5f00d22c]
5f00162c  8bd8                 MOV EBX,EAX
5f00162e  681051005f           PUSH 0x5f005110
5f001633  ff1520d2005f         CALL dword ptr [0x5f00d220]
5f001639  392d8c51005f         CMP dword ptr [0x5f00518c],EBP
5f00163f  7e6f                 JLE 0x5f0016b0
5f001641  8d04ad00000000       LEA EAX,[EBP*0x4 + 0x0]
5f001648  399c809451005f       CMP dword ptr [EAX + EAX*0x4 + 0x5f005194],EBX
5f00164f  8d3480               LEA ESI,[EAX + EAX*0x4]
5f001652  7553                 JNZ 0x5f0016a7
5f001654  8b869c51005f         MOV EAX,dword ptr [ESI + 0x5f00519c]
5f00165a  48                   DEC EAX
5f00165b  89869c51005f         MOV dword ptr [ESI + 0x5f00519c],EAX
5f001661  740c                 JZ 0x5f00166f
5f001663  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f001667  39869051005f         CMP dword ptr [ESI + 0x5f005190],EAX
5f00166d  7538                 JNZ 0x5f0016a7
5f00166f  8b869851005f         MOV EAX,dword ptr [ESI + 0x5f005198]
5f001675  50                   PUSH EAX
5f001676  ff15e0d2005f         CALL dword ptr [0x5f00d2e0]
5f00167c  ff0d8c51005f         DEC dword ptr [0x5f00518c]
5f001682  3b2d8c51005f         CMP EBP,dword ptr [0x5f00518c]
5f001688  7d1d                 JGE 0x5f0016a7
5f00168a  8dbe9051005f         LEA EDI,[ESI + 0x5f005190]
5f001690  8d4714               LEA EAX,[EDI + 0x14]
5f001693  b905000000           MOV ECX,0x5
5f001698  8bf0                 MOV ESI,EAX
5f00169a  45                   INC EBP
5f00169b  f3a5                 MOVSD.REP ES:EDI,ESI
5f00169d  8bf8                 MOV EDI,EAX
5f00169f  3b2d8c51005f         CMP EBP,dword ptr [0x5f00518c]
5f0016a5  7ce9                 JL 0x5f001690
5f0016a7  45                   INC EBP
5f0016a8  3b2d8c51005f         CMP EBP,dword ptr [0x5f00518c]
5f0016ae  7c91                 JL 0x5f001641
5f0016b0  681051005f           PUSH 0x5f005110
5f0016b5  ff0d3451005f         DEC dword ptr [0x5f005134]
5f0016bb  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f0016c1  833d3451005f00       CMP dword ptr [0x5f005134],0x0
5f0016c8  7505                 JNZ 0x5f0016cf
5f0016ca  e8610d0000           CALL 0x5f002430
5f0016cf  b801000000           MOV EAX,0x1
5f0016d4  5d                   POP EBP
5f0016d5  5f                   POP EDI
5f0016d6  5e                   POP ESI
5f0016d7  5b                   POP EBX
5f0016d8  c20400               RET 0x4
; undefined 5 bytes at 5f0016db

; ==== FUNCTION Ctl3dAutoSubclass entry=5f0016e0 sig=undefined __stdcall Ctl3dAutoSubclass(undefined4 param_1)
5f0016e0  8b442404             MOV EAX,dword ptr [ESP + 0x4]
5f0016e4  6a00                 PUSH 0x0
5f0016e6  50                   PUSH EAX
5f0016e7  e804000000           CALL 0x5f0016f0
5f0016ec  c20400               RET 0x4
; undefined 1 bytes at 5f0016ef

; ==== FUNCTION Ctl3dAutoSubclassEx entry=5f0016f0 sig=undefined4 __stdcall Ctl3dAutoSubclassEx(undefined4 param_1, uint param_2)
5f0016f0  66813d5051005f0a03   CMP word ptr [0x5f005150],0x30a
5f0016f9  56                   PUSH ESI
5f0016fa  57                   PUSH EDI
5f0016fb  7307                 JNC 0x5f001704
5f0016fd  33c0                 XOR EAX,EAX
5f0016ff  5f                   POP EDI
5f001700  5e                   POP ESI
5f001701  c20800               RET 0x8
5f001704  833d3051005f00       CMP dword ptr [0x5f005130],0x0
5f00170b  7507                 JNZ 0x5f001714
5f00170d  33c0                 XOR EAX,EAX
5f00170f  5f                   POP EDI
5f001710  5e                   POP ESI
5f001711  c20800               RET 0x8
5f001714  8b742410             MOV ESI,dword ptr [ESP + 0x10]
5f001718  83ce01               OR ESI,0x1
5f00171b  f7c602000000         TEST ESI,0x2
5f001721  7403                 JZ 0x5f001726
5f001723  83e6fc               AND ESI,0xfffffffc
5f001726  681051005f           PUSH 0x5f005110
5f00172b  ff1520d2005f         CALL dword ptr [0x5f00d220]
5f001731  813d8c51005f00040000 CMP dword ptr [0x5f00518c],0x400
5f00173b  0f84d6000000         JZ 0x5f001817
5f001741  ff152cd2005f         CALL dword ptr [0x5f00d22c]
5f001747  8bf8                 MOV EDI,EAX
5f001749  33c0                 XOR EAX,EAX
5f00174b  39058c51005f         CMP dword ptr [0x5f00518c],EAX
5f001751  7e19                 JLE 0x5f00176c
5f001753  b99451005f           MOV ECX,0x5f005194
5f001758  3939                 CMP dword ptr [ECX],EDI
5f00175a  0f84ab000000         JZ 0x5f00180b
5f001760  83c114               ADD ECX,0x14
5f001763  40                   INC EAX
5f001764  3b058c51005f         CMP EAX,dword ptr [0x5f00518c]
5f00176a  7cec                 JL 0x5f001758
5f00176c  57                   PUSH EDI
5f00176d  a14c51005f           MOV EAX,[0x5f00514c]
5f001772  50                   PUSH EAX
5f001773  68102a005f           PUSH 0x5f002a10
5f001778  6a05                 PUSH 0x5
5f00177a  ff15d8d2005f         CALL dword ptr [0x5f00d2d8]
5f001780  85c0                 TEST EAX,EAX
5f001782  0f848f000000         JZ 0x5f001817
5f001788  8b158c51005f         MOV EDX,dword ptr [0x5f00518c]
5f00178e  8b4c240c             MOV ECX,dword ptr [ESP + 0xc]
5f001792  c1e202               SHL EDX,0x2
5f001795  898c929051005f       MOV dword ptr [EDX + EDX*0x4 + 0x5f005190],ECX
5f00179c  8b0d8c51005f         MOV ECX,dword ptr [0x5f00518c]
5f0017a2  c1e102               SHL ECX,0x2
5f0017a5  89bc899451005f       MOV dword ptr [ECX + ECX*0x4 + 0x5f005194],EDI
5f0017ac  8b0d8c51005f         MOV ECX,dword ptr [0x5f00518c]
5f0017b2  c1e102               SHL ECX,0x2
5f0017b5  8984899851005f       MOV dword ptr [ECX + ECX*0x4 + 0x5f005198],EAX
5f0017bc  a18c51005f           MOV EAX,[0x5f00518c]
5f0017c1  c1e002               SHL EAX,0x2
5f0017c4  c784809c51005f01000000 MOV dword ptr [EAX + EAX*0x4 + 0x5f00519c],0x1
5f0017cf  a18c51005f           MOV EAX,[0x5f00518c]
5f0017d4  c1e002               SHL EAX,0x2
5f0017d7  89b480a051005f       MOV dword ptr [EAX + EAX*0x4 + 0x5f0051a0],ESI
5f0017de  8b0d8c51005f         MOV ECX,dword ptr [0x5f00518c]
5f0017e4  893d8451005f         MOV dword ptr [0x5f005184],EDI
5f0017ea  890d8851005f         MOV dword ptr [0x5f005188],ECX
5f0017f0  ff058c51005f         INC dword ptr [0x5f00518c]
5f0017f6  681051005f           PUSH 0x5f005110
5f0017fb  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f001801  b801000000           MOV EAX,0x1
5f001806  5f                   POP EDI
5f001807  5e                   POP ESI
5f001808  c20800               RET 0x8
5f00180b  c1e002               SHL EAX,0x2
5f00180e  ff84809c51005f       INC dword ptr [EAX + EAX*0x4 + 0x5f00519c]
5f001815  ebdf                 JMP 0x5f0017f6
5f001817  681051005f           PUSH 0x5f005110
5f00181c  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f001822  33c0                 XOR EAX,EAX
5f001824  5f                   POP EDI
5f001825  5e                   POP ESI
5f001826  c20800               RET 0x8
; undefined 7 bytes at 5f001829

; ==== FUNCTION Ctl3dIsAutoSubclass entry=5f001830 sig=undefined4 __stdcall Ctl3dIsAutoSubclass(void)
5f001830  ff152cd2005f         CALL dword ptr [0x5f00d22c]
5f001836  33d2                 XOR EDX,EDX
5f001838  39158c51005f         CMP dword ptr [0x5f00518c],EDX
5f00183e  7e15                 JLE 0x5f001855
5f001840  b99451005f           MOV ECX,0x5f005194
5f001845  3901                 CMP dword ptr [ECX],EAX
5f001847  740f                 JZ 0x5f001858
5f001849  83c114               ADD ECX,0x14
5f00184c  42                   INC EDX
5f00184d  3b158c51005f         CMP EDX,dword ptr [0x5f00518c]
5f001853  7cf0                 JL 0x5f001845
5f001855  33c0                 XOR EAX,EAX
5f001857  c3                   RET
5f001858  b801000000           MOV EAX,0x1
5f00185d  c3                   RET
; undefined 2 bytes at 5f00185e

; ==== FUNCTION Ctl3dUnAutoSubclass entry=5f001860 sig=undefined4 __stdcall Ctl3dUnAutoSubclass(void)
5f001860  53                   PUSH EBX
5f001861  56                   PUSH ESI
5f001862  57                   PUSH EDI
5f001863  55                   PUSH EBP
5f001864  33ed                 XOR EBP,EBP
5f001866  ff152cd2005f         CALL dword ptr [0x5f00d22c]
5f00186c  8bd8                 MOV EBX,EAX
5f00186e  681051005f           PUSH 0x5f005110
5f001873  ff1520d2005f         CALL dword ptr [0x5f00d220]
5f001879  392d8c51005f         CMP dword ptr [0x5f00518c],EBP
5f00187f  7e63                 JLE 0x5f0018e4
5f001881  8d04ad00000000       LEA EAX,[EBP*0x4 + 0x0]
5f001888  399c809451005f       CMP dword ptr [EAX + EAX*0x4 + 0x5f005194],EBX
5f00188f  8d3480               LEA ESI,[EAX + EAX*0x4]
5f001892  7547                 JNZ 0x5f0018db
5f001894  8b869c51005f         MOV EAX,dword ptr [ESI + 0x5f00519c]
5f00189a  48                   DEC EAX
5f00189b  89869c51005f         MOV dword ptr [ESI + 0x5f00519c],EAX
5f0018a1  7538                 JNZ 0x5f0018db
5f0018a3  8b869851005f         MOV EAX,dword ptr [ESI + 0x5f005198]
5f0018a9  50                   PUSH EAX
5f0018aa  ff15e0d2005f         CALL dword ptr [0x5f00d2e0]
5f0018b0  ff0d8c51005f         DEC dword ptr [0x5f00518c]
5f0018b6  3b2d8c51005f         CMP EBP,dword ptr [0x5f00518c]
5f0018bc  7d1d                 JGE 0x5f0018db
5f0018be  8dbe9051005f         LEA EDI,[ESI + 0x5f005190]
5f0018c4  8d4714               LEA EAX,[EDI + 0x14]
5f0018c7  b905000000           MOV ECX,0x5
5f0018cc  8bf0                 MOV ESI,EAX
5f0018ce  45                   INC EBP
5f0018cf  f3a5                 MOVSD.REP ES:EDI,ESI
5f0018d1  8bf8                 MOV EDI,EAX
5f0018d3  3b2d8c51005f         CMP EBP,dword ptr [0x5f00518c]
5f0018d9  7ce9                 JL 0x5f0018c4
5f0018db  45                   INC EBP
5f0018dc  3b2d8c51005f         CMP EBP,dword ptr [0x5f00518c]
5f0018e2  7c9d                 JL 0x5f001881
5f0018e4  681051005f           PUSH 0x5f005110
5f0018e9  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f0018ef  b801000000           MOV EAX,0x1
5f0018f4  5d                   POP EBP
5f0018f5  5f                   POP EDI
5f0018f6  5e                   POP ESI
5f0018f7  5b                   POP EBX
5f0018f8  c3                   RET
; undefined 7 bytes at 5f0018f9

; ==== FUNCTION Ctl3dSetStyle entry=5f001900 sig=undefined2 __stdcall Ctl3dSetStyle(void)
5f001900  6633c0               XOR AX,AX
5f001903  c20c00               RET 0xc
; undefined 10 bytes at 5f001906

; ==== FUNCTION Ctl3dGetVer entry=5f001910 sig=undefined2 __stdcall Ctl3dGetVer(void)
5f001910  66b83102             MOV AX,0x231
5f001914  c3                   RET
; undefined 11 bytes at 5f001915

; ==== FUNCTION Ctl3dEnabled entry=5f001920 sig=undefined4 __stdcall Ctl3dEnabled(void)
5f001920  a13051005f           MOV EAX,[0x5f005130]
5f001925  c3                   RET
; undefined 10 bytes at 5f001926

; ==== FUNCTION Ctl3dSubclassCtl entry=5f001930 sig=bool __stdcall Ctl3dSubclassCtl(HWND param_1)
5f001930  833d3051005f00       CMP dword ptr [0x5f005130],0x0
5f001937  7505                 JNZ 0x5f00193e
5f001939  33c0                 XOR EAX,EAX
5f00193b  c20400               RET 0x4
5f00193e  8b442404             MOV EAX,dword ptr [ESP + 0x4]
5f001942  6a00                 PUSH 0x0
5f001944  6a00                 PUSH 0x0
5f001946  68ffff0000           PUSH 0xffff
5f00194b  50                   PUSH EAX
5f00194c  e89f140000           CALL 0x5f002df0
5f001951  83c410               ADD ESP,0x10
5f001954  c20400               RET 0x4
; undefined 9 bytes at 5f001957

; ==== FUNCTION Ctl3dUnsubclassCtl entry=5f001960 sig=undefined4 __stdcall Ctl3dUnsubclassCtl(HWND param_1)
5f001960  833d3051005f00       CMP dword ptr [0x5f005130],0x0
5f001967  53                   PUSH EBX
5f001968  56                   PUSH ESI
5f001969  57                   PUSH EDI
5f00196a  55                   PUSH EBP
5f00196b  7509                 JNZ 0x5f001976
5f00196d  33c0                 XOR EAX,EAX
5f00196f  5d                   POP EBP
5f001970  5f                   POP EDI
5f001971  5e                   POP ESI
5f001972  5b                   POP EBX
5f001973  c20400               RET 0x4
5f001976  8b742414             MOV ESI,dword ptr [ESP + 0x14]
5f00197a  6afc                 PUSH -0x4
5f00197c  56                   PUSH ESI
5f00197d  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f001983  33c9                 XOR ECX,ECX
5f001985  8b3df4d2005f         MOV EDI,dword ptr [0x5f00d2f4]
5f00198b  8b1dd4d2005f         MOV EBX,dword ptr [0x5f00d2d4]
5f001991  8d1449               LEA EDX,[ECX + ECX*0x2]
5f001994  3904d590a1005f       CMP dword ptr [EDX*0x8 + 0x5f00a190],EAX
5f00199b  7525                 JNZ 0x5f0019c2
5f00199d  51                   PUSH ECX
5f00199e  56                   PUSH ESI
5f00199f  e87cf6ffff           CALL 0x5f001020
5f0019a4  83c408               ADD ESP,0x8
5f0019a7  8be8                 MOV EBP,EAX
5f0019a9  33c0                 XOR EAX,EAX
5f0019ab  66a13e51005f         MOV AX,[0x5f00513e]
5f0019b1  50                   PUSH EAX
5f0019b2  56                   PUSH ESI
5f0019b3  ffd3                 CALL EBX
5f0019b5  55                   PUSH EBP
5f0019b6  6afc                 PUSH -0x4
5f0019b8  56                   PUSH ESI
5f0019b9  ffd7                 CALL EDI
5f0019bb  33c0                 XOR EAX,EAX
5f0019bd  b910000000           MOV ECX,0x10
5f0019c2  41                   INC ECX
5f0019c3  83f906               CMP ECX,0x6
5f0019c6  7cc9                 JL 0x5f001991
5f0019c8  756f                 JNZ 0x5f001a39
5f0019ca  3da026005f           CMP EAX,0x5f0026a0
5f0019cf  7520                 JNZ 0x5f0019f1
5f0019d1  51                   PUSH ECX
5f0019d2  56                   PUSH ESI
5f0019d3  e848f6ffff           CALL 0x5f001020
5f0019d8  83c408               ADD ESP,0x8
5f0019db  8be8                 MOV EBP,EAX
5f0019dd  33c0                 XOR EAX,EAX
5f0019df  66a13e51005f         MOV AX,[0x5f00513e]
5f0019e5  50                   PUSH EAX
5f0019e6  56                   PUSH ESI
5f0019e7  ffd3                 CALL EBX
5f0019e9  55                   PUSH EBP
5f0019ea  6afc                 PUSH -0x4
5f0019ec  56                   PUSH ESI
5f0019ed  ffd7                 CALL EDI
5f0019ef  eb48                 JMP 0x5f001a39
5f0019f1  33c0                 XOR EAX,EAX
5f0019f3  8b3dfcd2005f         MOV EDI,dword ptr [0x5f00d2fc]
5f0019f9  66a13e51005f         MOV AX,[0x5f00513e]
5f0019ff  50                   PUSH EAX
5f001a00  56                   PUSH ESI
5f001a01  ffd7                 CALL EDI
5f001a03  85c0                 TEST EAX,EAX
5f001a05  7520                 JNZ 0x5f001a27
5f001a07  33c0                 XOR EAX,EAX
5f001a09  66a14251005f         MOV AX,[0x5f005142]
5f001a0f  50                   PUSH EAX
5f001a10  56                   PUSH ESI
5f001a11  ffd7                 CALL EDI
5f001a13  85c0                 TEST EAX,EAX
5f001a15  7510                 JNZ 0x5f001a27
5f001a17  33c0                 XOR EAX,EAX
5f001a19  66a14051005f         MOV AX,[0x5f005140]
5f001a1f  50                   PUSH EAX
5f001a20  56                   PUSH ESI
5f001a21  ffd7                 CALL EDI
5f001a23  85c0                 TEST EAX,EAX
5f001a25  7412                 JZ 0x5f001a39
5f001a27  6a01                 PUSH 0x1
5f001a29  33c0                 XOR EAX,EAX
5f001a2b  66a14451005f         MOV AX,[0x5f005144]
5f001a31  50                   PUSH EAX
5f001a32  56                   PUSH ESI
5f001a33  ff15f8d2005f         CALL dword ptr [0x5f00d2f8]
5f001a39  6a05                 PUSH 0x5
5f001a3b  56                   PUSH ESI
5f001a3c  8b35c4d2005f         MOV ESI,dword ptr [0x5f00d2c4]
5f001a42  ffd6                 CALL ESI
5f001a44  8bf8                 MOV EDI,EAX
5f001a46  85ff                 TEST EDI,EDI
5f001a48  7411                 JZ 0x5f001a5b
5f001a4a  57                   PUSH EDI
5f001a4b  e810ffffff           CALL 0x5f001960
5f001a50  6a02                 PUSH 0x2
5f001a52  57                   PUSH EDI
5f001a53  ffd6                 CALL ESI
5f001a55  8bf8                 MOV EDI,EAX
5f001a57  85ff                 TEST EDI,EDI
5f001a59  75ef                 JNZ 0x5f001a4a
5f001a5b  b801000000           MOV EAX,0x1
5f001a60  5d                   POP EBP
5f001a61  5f                   POP EDI
5f001a62  5e                   POP ESI
5f001a63  5b                   POP EBX
5f001a64  c20400               RET 0x4
; undefined 9 bytes at 5f001a67

; ==== FUNCTION Ctl3dSubclassCtlEx entry=5f001a70 sig=undefined4 __stdcall Ctl3dSubclassCtlEx(HWND param_1, int param_2)
5f001a70  833d3051005f00       CMP dword ptr [0x5f005130],0x0
5f001a77  53                   PUSH EBX
5f001a78  56                   PUSH ESI
5f001a79  57                   PUSH EDI
5f001a7a  7508                 JNZ 0x5f001a84
5f001a7c  33c0                 XOR EAX,EAX
5f001a7e  5f                   POP EDI
5f001a7f  5e                   POP ESI
5f001a80  5b                   POP EBX
5f001a81  c20800               RET 0x8
5f001a84  8b7c2414             MOV EDI,dword ptr [ESP + 0x14]
5f001a88  85ff                 TEST EDI,EDI
5f001a8a  7c6c                 JL 0x5f001af8
5f001a8c  83ff06               CMP EDI,0x6
5f001a8f  7f67                 JG 0x5f001af8
5f001a91  8b742410             MOV ESI,dword ptr [ESP + 0x10]
5f001a95  56                   PUSH ESI
5f001a96  e865f5ffff           CALL 0x5f001000
5f001a9b  83c404               ADD ESP,0x4
5f001a9e  85c0                 TEST EAX,EAX
5f001aa0  7408                 JZ 0x5f001aaa
5f001aa2  33c0                 XOR EAX,EAX
5f001aa4  5f                   POP EDI
5f001aa5  5e                   POP ESI
5f001aa6  5b                   POP EBX
5f001aa7  c20800               RET 0x8
5f001aaa  6af0                 PUSH -0x10
5f001aac  56                   PUSH ESI
5f001aad  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f001ab3  8bd8                 MOV EBX,EAX
5f001ab5  56                   PUSH ESI
5f001ab6  ff1558d2005f         CALL dword ptr [0x5f00d258]
5f001abc  50                   PUSH EAX
5f001abd  6a00                 PUSH 0x0
5f001abf  68ffff0000           PUSH 0xffff
5f001ac4  8bc7                 MOV EAX,EDI
5f001ac6  c1e005               SHL EAX,0x5
5f001ac9  53                   PUSH EBX
5f001aca  56                   PUSH ESI
5f001acb  ff9050b0005f         CALL dword ptr [EAX + 0x5f00b050]
5f001ad1  83c414               ADD ESP,0x14
5f001ad4  83f801               CMP EAX,0x1
5f001ad7  7514                 JNZ 0x5f001aed
5f001ad9  8d047f               LEA EAX,[EDI + EDI*0x2]
5f001adc  8b0cc590a1005f       MOV ECX,dword ptr [EAX*0x8 + 0x5f00a190]
5f001ae3  51                   PUSH ECX
5f001ae4  56                   PUSH ESI
5f001ae5  e886f5ffff           CALL 0x5f001070
5f001aea  83c408               ADD ESP,0x8
5f001aed  b801000000           MOV EAX,0x1
5f001af2  5f                   POP EDI
5f001af3  5e                   POP ESI
5f001af4  5b                   POP EBX
5f001af5  c20800               RET 0x8
5f001af8  33c0                 XOR EAX,EAX
5f001afa  5f                   POP EDI
5f001afb  5e                   POP ESI
5f001afc  5b                   POP EBX
5f001afd  c20800               RET 0x8

; ==== FUNCTION Ctl3dSubclassDlg entry=5f001b00 sig=undefined4 __stdcall Ctl3dSubclassDlg(HWND param_1, ushort param_2)
5f001b00  833d3051005f00       CMP dword ptr [0x5f005130],0x0
5f001b07  53                   PUSH EBX
5f001b08  56                   PUSH ESI
5f001b09  57                   PUSH EDI
5f001b0a  7508                 JNZ 0x5f001b14
5f001b0c  33c0                 XOR EAX,EAX
5f001b0e  5f                   POP EDI
5f001b0f  5e                   POP ESI
5f001b10  5b                   POP EBX
5f001b11  c20800               RET 0x8
5f001b14  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f001b18  6a05                 PUSH 0x5
5f001b1a  50                   PUSH EAX
5f001b1b  8b35c4d2005f         MOV ESI,dword ptr [0x5f00d2c4]
5f001b21  ffd6                 CALL ESI
5f001b23  8bd8                 MOV EBX,EAX
5f001b25  85db                 TEST EBX,EBX
5f001b27  741e                 JZ 0x5f001b47
5f001b29  668b7c2414           MOV DI,word ptr [ESP + 0x14]
5f001b2e  6a00                 PUSH 0x0
5f001b30  6a00                 PUSH 0x0
5f001b32  57                   PUSH EDI
5f001b33  53                   PUSH EBX
5f001b34  e8b7120000           CALL 0x5f002df0
5f001b39  83c410               ADD ESP,0x10
5f001b3c  6a02                 PUSH 0x2
5f001b3e  53                   PUSH EBX
5f001b3f  ffd6                 CALL ESI
5f001b41  8bd8                 MOV EBX,EAX
5f001b43  85db                 TEST EBX,EBX
5f001b45  75e7                 JNZ 0x5f001b2e
5f001b47  b801000000           MOV EAX,0x1
5f001b4c  5f                   POP EDI
5f001b4d  5e                   POP ESI
5f001b4e  5b                   POP EBX
5f001b4f  c20800               RET 0x8
; undefined 14 bytes at 5f001b52

; ==== FUNCTION FUN_5f001b60 entry=5f001b60 sig=undefined __cdecl FUN_5f001b60(HWND param_1, ushort param_2, undefined4 param_3)
5f001b60  83ec04               SUB ESP,0x4
5f001b63  53                   PUSH EBX
5f001b64  56                   PUSH ESI
5f001b65  8b742410             MOV ESI,dword ptr [ESP + 0x10]
5f001b69  57                   PUSH EDI
5f001b6a  56                   PUSH ESI
5f001b6b  e890f4ffff           CALL 0x5f001000
5f001b70  83c404               ADD ESP,0x4
5f001b73  85c0                 TEST EAX,EAX
5f001b75  751c                 JNZ 0x5f001b93
5f001b77  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
5f001b7b  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
5f001b7f  50                   PUSH EAX
5f001b80  6a00                 PUSH 0x0
5f001b82  51                   PUSH ECX
5f001b83  56                   PUSH ESI
5f001b84  e867120000           CALL 0x5f002df0
5f001b89  83c410               ADD ESP,0x10
5f001b8c  5f                   POP EDI
5f001b8d  5e                   POP ESI
5f001b8e  5b                   POP EBX
5f001b8f  83c404               ADD ESP,0x4
5f001b92  c3                   RET
5f001b93  33c0                 XOR EAX,EAX
5f001b95  66a14451005f         MOV AX,[0x5f005144]
5f001b9b  50                   PUSH EAX
5f001b9c  56                   PUSH ESI
5f001b9d  ff15fcd2005f         CALL dword ptr [0x5f00d2fc]
5f001ba3  85c0                 TEST EAX,EAX
5f001ba5  7562                 JNZ 0x5f001c09
5f001ba7  8d5c240c             LEA EBX,[ESP + 0xc]
5f001bab  8b3de8d2005f         MOV EDI,dword ptr [0x5f00d2e8]
5f001bb1  c744240c9a020000     MOV dword ptr [ESP + 0xc],0x29a
5f001bb9  53                   PUSH EBX
5f001bba  6a00                 PUSH 0x0
5f001bbc  6844190000           PUSH 0x1944
5f001bc1  56                   PUSH ESI
5f001bc2  ffd7                 CALL EDI
5f001bc4  817c240c9a020000     CMP dword ptr [ESP + 0xc],0x29a
5f001bcc  753b                 JNZ 0x5f001c09
5f001bce  53                   PUSH EBX
5f001bcf  6a00                 PUSH 0x0
5f001bd1  6843190000           PUSH 0x1943
5f001bd6  56                   PUSH ESI
5f001bd7  ffd7                 CALL EDI
5f001bd9  817c240c9a020000     CMP dword ptr [ESP + 0xc],0x29a
5f001be1  7526                 JNZ 0x5f001c09
5f001be3  33c0                 XOR EAX,EAX
5f001be5  66a13e51005f         MOV AX,[0x5f00513e]
5f001beb  50                   PUSH EAX
5f001bec  56                   PUSH ESI
5f001bed  ff15d4d2005f         CALL dword ptr [0x5f00d2d4]
5f001bf3  668b442418           MOV AX,word ptr [ESP + 0x18]
5f001bf8  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
5f001bfc  51                   PUSH ECX
5f001bfd  6a00                 PUSH 0x0
5f001bff  50                   PUSH EAX
5f001c00  56                   PUSH ESI
5f001c01  e8ea110000           CALL 0x5f002df0
5f001c06  83c410               ADD ESP,0x10
5f001c09  5f                   POP EDI
5f001c0a  5e                   POP ESI
5f001c0b  5b                   POP EBX
5f001c0c  83c404               ADD ESP,0x4
5f001c0f  c3                   RET

; ==== FUNCTION FUN_5f001c10 entry=5f001c10 sig=undefined4 __stdcall FUN_5f001c10(HWND param_1, ushort param_2)
5f001c10  833d3051005f00       CMP dword ptr [0x5f005130],0x0
5f001c17  53                   PUSH EBX
5f001c18  56                   PUSH ESI
5f001c19  57                   PUSH EDI
5f001c1a  55                   PUSH EBP
5f001c1b  7509                 JNZ 0x5f001c26
5f001c1d  33c0                 XOR EAX,EAX
5f001c1f  5d                   POP EBP
5f001c20  5f                   POP EDI
5f001c21  5e                   POP ESI
5f001c22  5b                   POP EBX
5f001c23  c20800               RET 0x8
5f001c26  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f001c2a  6a05                 PUSH 0x5
5f001c2c  50                   PUSH EAX
5f001c2d  8b2dc4d2005f         MOV EBP,dword ptr [0x5f00d2c4]
5f001c33  ffd5                 CALL EBP
5f001c35  8bf8                 MOV EDI,EAX
5f001c37  85ff                 TEST EDI,EDI
5f001c39  743d                 JZ 0x5f001c78
5f001c3b  668b742418           MOV SI,word ptr [ESP + 0x18]
5f001c40  6a00                 PUSH 0x0
5f001c42  56                   PUSH ESI
5f001c43  57                   PUSH EDI
5f001c44  e817ffffff           CALL 0x5f001b60
5f001c49  83c40c               ADD ESP,0xc
5f001c4c  6a05                 PUSH 0x5
5f001c4e  57                   PUSH EDI
5f001c4f  ffd5                 CALL EBP
5f001c51  8bd8                 MOV EBX,EAX
5f001c53  85db                 TEST EBX,EBX
5f001c55  7416                 JZ 0x5f001c6d
5f001c57  57                   PUSH EDI
5f001c58  56                   PUSH ESI
5f001c59  53                   PUSH EBX
5f001c5a  e801ffffff           CALL 0x5f001b60
5f001c5f  83c40c               ADD ESP,0xc
5f001c62  6a02                 PUSH 0x2
5f001c64  53                   PUSH EBX
5f001c65  ffd5                 CALL EBP
5f001c67  8bd8                 MOV EBX,EAX
5f001c69  85db                 TEST EBX,EBX
5f001c6b  75ea                 JNZ 0x5f001c57
5f001c6d  6a02                 PUSH 0x2
5f001c6f  57                   PUSH EDI
5f001c70  ffd5                 CALL EBP
5f001c72  8bf8                 MOV EDI,EAX
5f001c74  85ff                 TEST EDI,EDI
5f001c76  75c8                 JNZ 0x5f001c40
5f001c78  b801000000           MOV EAX,0x1
5f001c7d  5d                   POP EBP
5f001c7e  5f                   POP EDI
5f001c7f  5e                   POP ESI
5f001c80  5b                   POP EBX
5f001c81  c20800               RET 0x8
; undefined 12 bytes at 5f001c84

; ==== FUNCTION Ctl3dSubclassDlgEx entry=5f001c90 sig=undefined4 __stdcall Ctl3dSubclassDlgEx(HWND param_1, ushort param_2)
5f001c90  833d3051005f00       CMP dword ptr [0x5f005130],0x0
5f001c97  53                   PUSH EBX
5f001c98  56                   PUSH ESI
5f001c99  57                   PUSH EDI
5f001c9a  55                   PUSH EBP
5f001c9b  7509                 JNZ 0x5f001ca6
5f001c9d  33c0                 XOR EAX,EAX
5f001c9f  5d                   POP EBP
5f001ca0  5f                   POP EDI
5f001ca1  5e                   POP ESI
5f001ca2  5b                   POP EBX
5f001ca3  c20800               RET 0x8
5f001ca6  8b7c2414             MOV EDI,dword ptr [ESP + 0x14]
5f001caa  6a05                 PUSH 0x5
5f001cac  57                   PUSH EDI
5f001cad  8b35c4d2005f         MOV ESI,dword ptr [0x5f00d2c4]
5f001cb3  ffd6                 CALL ESI
5f001cb5  8bd8                 MOV EBX,EAX
5f001cb7  85db                 TEST EBX,EBX
5f001cb9  741e                 JZ 0x5f001cd9
5f001cbb  668b6c2418           MOV BP,word ptr [ESP + 0x18]
5f001cc0  6a00                 PUSH 0x0
5f001cc2  6a00                 PUSH 0x0
5f001cc4  55                   PUSH EBP
5f001cc5  53                   PUSH EBX
5f001cc6  e825110000           CALL 0x5f002df0
5f001ccb  83c410               ADD ESP,0x10
5f001cce  6a02                 PUSH 0x2
5f001cd0  53                   PUSH EBX
5f001cd1  ffd6                 CALL ESI
5f001cd3  8bd8                 MOV EBX,EAX
5f001cd5  85db                 TEST EBX,EBX
5f001cd7  75e7                 JNZ 0x5f001cc0
5f001cd9  68a026005f           PUSH 0x5f0026a0
5f001cde  57                   PUSH EDI
5f001cdf  e88cf3ffff           CALL 0x5f001070
5f001ce4  83c408               ADD ESP,0x8
5f001ce7  b801000000           MOV EAX,0x1
5f001cec  5d                   POP EBP
5f001ced  5f                   POP EDI
5f001cee  5e                   POP ESI
5f001cef  5b                   POP EBX
5f001cf0  c20800               RET 0x8
; undefined 13 bytes at 5f001cf3

; ==== FUNCTION Ctl3dCtlColor entry=5f001d00 sig=undefined4 __stdcall Ctl3dCtlColor(void)
5f001d00  33c0                 XOR EAX,EAX
5f001d02  c20800               RET 0x8
; undefined 11 bytes at 5f001d05

; ==== FUNCTION Ctl3dCtlColorEx entry=5f001d10 sig=undefined4 __stdcall Ctl3dCtlColorEx(uint param_1, HDC param_2, HWND param_3)
5f001d10  833d3051005f00       CMP dword ptr [0x5f005130],0x0
5f001d17  56                   PUSH ESI
5f001d18  7472                 JZ 0x5f001d8c
5f001d1a  8b442408             MOV EAX,dword ptr [ESP + 0x8]
5f001d1e  3d34010000           CMP EAX,0x134
5f001d23  7267                 JC 0x5f001d8c
5f001d25  3d37010000           CMP EAX,0x137
5f001d2a  7460                 JZ 0x5f001d8c
5f001d2c  3d34010000           CMP EAX,0x134
5f001d31  7531                 JNZ 0x5f001d64
5f001d33  66813d5051005f5f03   CMP word ptr [0x5f005150],0x35f
5f001d3c  7320                 JNC 0x5f001d5e
5f001d3e  8b742410             MOV ESI,dword ptr [ESP + 0x10]
5f001d42  6a05                 PUSH 0x5
5f001d44  56                   PUSH ESI
5f001d45  ff15c4d2005f         CALL dword ptr [0x5f00d2c4]
5f001d4b  85c0                 TEST EAX,EAX
5f001d4d  740f                 JZ 0x5f001d5e
5f001d4f  6af0                 PUSH -0x10
5f001d51  56                   PUSH ESI
5f001d52  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f001d58  2403                 AND AL,0x3
5f001d5a  3c03                 CMP AL,0x3
5f001d5c  7506                 JNZ 0x5f001d64
5f001d5e  33c0                 XOR EAX,EAX
5f001d60  5e                   POP ESI
5f001d61  c20c00               RET 0xc
5f001d64  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
5f001d68  a16051005f           MOV EAX,[0x5f005160]
5f001d6d  50                   PUSH EAX
5f001d6e  56                   PUSH ESI
5f001d6f  ff15c0d1005f         CALL dword ptr [0x5f00d1c0]
5f001d75  8b0d5851005f         MOV ECX,dword ptr [0x5f005158]
5f001d7b  51                   PUSH ECX
5f001d7c  56                   PUSH ESI
5f001d7d  ff15bcd1005f         CALL dword ptr [0x5f00d1bc]
5f001d83  a17851005f           MOV EAX,[0x5f005178]
5f001d88  5e                   POP ESI
5f001d89  c20c00               RET 0xc
5f001d8c  33c0                 XOR EAX,EAX
5f001d8e  5e                   POP ESI
5f001d8f  c20c00               RET 0xc
; undefined 14 bytes at 5f001d92

; ==== FUNCTION Ctl3dColorChange entry=5f001da0 sig=undefined4 __stdcall Ctl3dColorChange(void)
5f001da0  56                   PUSH ESI
5f001da1  681051005f           PUSH 0x5f005110
5f001da6  ff1520d2005f         CALL dword ptr [0x5f00d220]
5f001dac  6a00                 PUSH 0x0
5f001dae  e85d070000           CALL 0x5f002510
5f001db3  83c404               ADD ESP,0x4
5f001db6  8bf0                 MOV ESI,EAX
5f001db8  681051005f           PUSH 0x5f005110
5f001dbd  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f001dc3  8bc6                 MOV EAX,ESI
5f001dc5  5e                   POP ESI
5f001dc6  c3                   RET
; undefined 9 bytes at 5f001dc7

; ==== FUNCTION Ctl3dDlgFramePaint entry=5f001dd0 sig=undefined __stdcall Ctl3dDlgFramePaint(HWND param_1, UINT param_2, WPARAM param_3, LPARAM param_4)
5f001dd0  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f001dd4  6a01                 PUSH 0x1
5f001dd6  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
5f001dda  50                   PUSH EAX
5f001ddb  8b542410             MOV EDX,dword ptr [ESP + 0x10]
5f001ddf  51                   PUSH ECX
5f001de0  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f001de4  52                   PUSH EDX
5f001de5  50                   PUSH EAX
5f001de6  e805000000           CALL 0x5f001df0
5f001deb  c21000               RET 0x10
; undefined 2 bytes at 5f001dee

; ==== FUNCTION FUN_5f001df0 entry=5f001df0 sig=LRESULT __stdcall FUN_5f001df0(HWND param_1, UINT param_2, WPARAM param_3, LPARAM param_4, int param_5)
5f001df0  83ec3c               SUB ESP,0x3c
5f001df3  837c245000           CMP dword ptr [ESP + 0x50],0x0
5f001df8  53                   PUSH EBX
5f001df9  56                   PUSH ESI
5f001dfa  57                   PUSH EDI
5f001dfb  55                   PUSH EBP
5f001dfc  7408                 JZ 0x5f001e06
5f001dfe  33c0                 XOR EAX,EAX
5f001e00  8b742450             MOV ESI,dword ptr [ESP + 0x50]
5f001e04  eb0f                 JMP 0x5f001e15
5f001e06  8b742450             MOV ESI,dword ptr [ESP + 0x50]
5f001e0a  6a06                 PUSH 0x6
5f001e0c  56                   PUSH ESI
5f001e0d  e80ef2ffff           CALL 0x5f001020
5f001e12  83c408               ADD ESP,0x8
5f001e15  8b4c245c             MOV ECX,dword ptr [ESP + 0x5c]
5f001e19  85c0                 TEST EAX,EAX
5f001e1b  51                   PUSH ECX
5f001e1c  7414                 JZ 0x5f001e32
5f001e1e  8b54245c             MOV EDX,dword ptr [ESP + 0x5c]
5f001e22  8b5c2458             MOV EBX,dword ptr [ESP + 0x58]
5f001e26  52                   PUSH EDX
5f001e27  53                   PUSH EBX
5f001e28  56                   PUSH ESI
5f001e29  50                   PUSH EAX
5f001e2a  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f001e30  eb11                 JMP 0x5f001e43
5f001e32  8b44245c             MOV EAX,dword ptr [ESP + 0x5c]
5f001e36  8b542458             MOV EDX,dword ptr [ESP + 0x58]
5f001e3a  50                   PUSH EAX
5f001e3b  52                   PUSH EDX
5f001e3c  56                   PUSH ESI
5f001e3d  ff1560d2005f         CALL dword ptr [0x5f00d260]
5f001e43  833d3051005f00       CMP dword ptr [0x5f005130],0x0
5f001e4a  89442410             MOV dword ptr [ESP + 0x10],EAX
5f001e4e  750e                 JNZ 0x5f001e5e
5f001e50  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f001e54  5d                   POP EBP
5f001e55  5f                   POP EDI
5f001e56  5e                   POP ESI
5f001e57  5b                   POP EBX
5f001e58  83c43c               ADD ESP,0x3c
5f001e5b  c21400               RET 0x14
5f001e5e  56                   PUSH ESI
5f001e5f  ff155cd2005f         CALL dword ptr [0x5f00d25c]
5f001e65  85c0                 TEST EAX,EAX
5f001e67  740e                 JZ 0x5f001e77
5f001e69  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f001e6d  5d                   POP EBP
5f001e6e  5f                   POP EDI
5f001e6f  5e                   POP ESI
5f001e70  5b                   POP EBX
5f001e71  83c43c               ADD ESP,0x3c
5f001e74  c21400               RET 0x14
5f001e77  c744241401000000     MOV dword ptr [ESP + 0x14],0x1
5f001e7f  8d442414             LEA EAX,[ESP + 0x14]
5f001e83  50                   PUSH EAX
5f001e84  6a00                 PUSH 0x0
5f001e86  68ef110000           PUSH 0x11ef
5f001e8b  56                   PUSH ESI
5f001e8c  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f001e92  6af0                 PUSH -0x10
5f001e94  8b2de4d2005f         MOV EBP,dword ptr [0x5f00d2e4]
5f001e9a  56                   PUSH ESI
5f001e9b  ffd5                 CALL EBP
5f001e9d  837c241400           CMP dword ptr [ESP + 0x14],0x0
5f001ea2  0f84e0010000         JZ 0x5f002088
5f001ea8  8bc8                 MOV ECX,EAX
5f001eaa  81e180004010         AND ECX,0x10400080
5f001eb0  81f980004010         CMP ECX,0x10400080
5f001eb6  0f85cc010000         JNZ 0x5f002088
5f001ebc  250000c000           AND EAX,0xc00000
5f001ec1  8b1d28a2005f         MOV EBX,dword ptr [0x5f00a228]
5f001ec7  2d0000c000           SUB EAX,0xc00000
5f001ecc  83f801               CMP EAX,0x1
5f001ecf  56                   PUSH ESI
5f001ed0  1bed                 SBB EBP,EBP
5f001ed2  f7dd                 NEG EBP
5f001ed4  83fd01               CMP EBP,0x1
5f001ed7  1bc0                 SBB EAX,EAX
5f001ed9  40                   INC EAX
5f001eda  2bd8                 SUB EBX,EAX
5f001edc  ff1500d3005f         CALL dword ptr [0x5f00d300]
5f001ee2  8bf8                 MOV EDI,EAX
5f001ee4  8d44241c             LEA EAX,[ESP + 0x1c]
5f001ee8  50                   PUSH EAX
5f001ee9  56                   PUSH ESI
5f001eea  ff1554d2005f         CALL dword ptr [0x5f00d254]
5f001ef0  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
5f001ef4  8b542420             MOV EDX,dword ptr [ESP + 0x20]
5f001ef8  294c2424             SUB dword ptr [ESP + 0x24],ECX
5f001efc  6a0f                 PUSH 0xf
5f001efe  8d442420             LEA EAX,[ESP + 0x20]
5f001f02  6a07                 PUSH 0x7
5f001f04  29542430             SUB dword ptr [ESP + 0x30],EDX
5f001f08  6a02                 PUSH 0x2
5f001f0a  c744242c00000000     MOV dword ptr [ESP + 0x2c],0x0
5f001f12  c744242800000000     MOV dword ptr [ESP + 0x28],0x0
5f001f1a  50                   PUSH EAX
5f001f1b  57                   PUSH EDI
5f001f1c  e80ff4ffff           CALL 0x5f001330
5f001f21  8d4c2430             LEA ECX,[ESP + 0x30]
5f001f25  83c414               ADD ESP,0x14
5f001f28  6aff                 PUSH -0x1
5f001f2a  6aff                 PUSH -0x1
5f001f2c  51                   PUSH ECX
5f001f2d  ff1550d2005f         CALL dword ptr [0x5f00d250]
5f001f33  8d4c241c             LEA ECX,[ESP + 0x1c]
5f001f37  6a0f                 PUSH 0xf
5f001f39  6a02                 PUSH 0x2
5f001f3b  6a00                 PUSH 0x0
5f001f3d  51                   PUSH ECX
5f001f3e  57                   PUSH EDI
5f001f3f  e8ecf3ffff           CALL 0x5f001330
5f001f44  8d4c2430             LEA ECX,[ESP + 0x30]
5f001f48  83c414               ADD ESP,0x14
5f001f4b  6aff                 PUSH -0x1
5f001f4d  6aff                 PUSH -0x1
5f001f4f  51                   PUSH ECX
5f001f50  ff1550d2005f         CALL dword ptr [0x5f00d250]
5f001f56  8b0d7851005f         MOV ECX,dword ptr [0x5f005178]
5f001f5c  51                   PUSH ECX
5f001f5d  57                   PUSH EDI
5f001f5e  ff15c4d1005f         CALL dword ptr [0x5f00d1c4]
5f001f64  8d4c242c             LEA ECX,[ESP + 0x2c]
5f001f68  89442418             MOV dword ptr [ESP + 0x18],EAX
5f001f6c  8d44241c             LEA EAX,[ESP + 0x1c]
5f001f70  8b10                 MOV EDX,dword ptr [EAX]
5f001f72  8911                 MOV dword ptr [ECX],EDX
5f001f74  8b5004               MOV EDX,dword ptr [EAX + 0x4]
5f001f77  895104               MOV dword ptr [ECX + 0x4],EDX
5f001f7a  8b5008               MOV EDX,dword ptr [EAX + 0x8]
5f001f7d  8b400c               MOV EAX,dword ptr [EAX + 0xc]
5f001f80  51                   PUSH ECX
5f001f81  57                   PUSH EDI
5f001f82  895108               MOV dword ptr [ECX + 0x8],EDX
5f001f85  89410c               MOV dword ptr [ECX + 0xc],EAX
5f001f88  8b442424             MOV EAX,dword ptr [ESP + 0x24]
5f001f8c  030524a2005f         ADD EAX,dword ptr [0x5f00a224]
5f001f92  8944243c             MOV dword ptr [ESP + 0x3c],EAX
5f001f96  e865f3ffff           CALL 0x5f001300
5f001f9b  8b44242c             MOV EAX,dword ptr [ESP + 0x2c]
5f001f9f  8d4c2434             LEA ECX,[ESP + 0x34]
5f001fa3  2b442424             SUB EAX,dword ptr [ESP + 0x24]
5f001fa7  83c408               ADD ESP,0x8
5f001faa  2b0524a2005f         SUB EAX,dword ptr [0x5f00a224]
5f001fb0  6a00                 PUSH 0x0
5f001fb2  50                   PUSH EAX
5f001fb3  51                   PUSH ECX
5f001fb4  ff154cd2005f         CALL dword ptr [0x5f00d24c]
5f001fba  8d4c242c             LEA ECX,[ESP + 0x2c]
5f001fbe  51                   PUSH ECX
5f001fbf  57                   PUSH EDI
5f001fc0  e83bf3ffff           CALL 0x5f001300
5f001fc5  8b442424             MOV EAX,dword ptr [ESP + 0x24]
5f001fc9  83c408               ADD ESP,0x8
5f001fcc  030524a2005f         ADD EAX,dword ptr [0x5f00a224]
5f001fd2  8944242c             MOV dword ptr [ESP + 0x2c],EAX
5f001fd6  8b442424             MOV EAX,dword ptr [ESP + 0x24]
5f001fda  2b0524a2005f         SUB EAX,dword ptr [0x5f00a224]
5f001fe0  8d4c242c             LEA ECX,[ESP + 0x2c]
5f001fe4  89442434             MOV dword ptr [ESP + 0x34],EAX
5f001fe8  51                   PUSH ECX
5f001fe9  8b442434             MOV EAX,dword ptr [ESP + 0x34]
5f001fed  57                   PUSH EDI
5f001fee  03c3                 ADD EAX,EBX
5f001ff0  89442440             MOV dword ptr [ESP + 0x40],EAX
5f001ff4  e807f3ffff           CALL 0x5f001300
5f001ff9  83c408               ADD ESP,0x8
5f001ffc  85ed                 TEST EBP,EBP
5f001ffe  7446                 JZ 0x5f002046
5f002000  8b6c2430             MOV EBP,dword ptr [ESP + 0x30]
5f002004  8d54242c             LEA EDX,[ESP + 0x2c]
5f002008  8d4c243c             LEA ECX,[ESP + 0x3c]
5f00200c  8b02                 MOV EAX,dword ptr [EDX]
5f00200e  035c2430             ADD EBX,dword ptr [ESP + 0x30]
5f002012  8901                 MOV dword ptr [ECX],EAX
5f002014  8b4208               MOV EAX,dword ptr [EDX + 0x8]
5f002017  896904               MOV dword ptr [ECX + 0x4],EBP
5f00201a  8b520c               MOV EDX,dword ptr [EDX + 0xc]
5f00201d  894108               MOV dword ptr [ECX + 0x8],EAX
5f002020  a12ca2005f           MOV EAX,[0x5f00a22c]
5f002025  6a0f                 PUSH 0xf
5f002027  03c3                 ADD EAX,EBX
5f002029  6a00                 PUSH 0x0
5f00202b  6a02                 PUSH 0x2
5f00202d  89510c               MOV dword ptr [ECX + 0xc],EDX
5f002030  8d4c2448             LEA ECX,[ESP + 0x48]
5f002034  895c244c             MOV dword ptr [ESP + 0x4c],EBX
5f002038  89442454             MOV dword ptr [ESP + 0x54],EAX
5f00203c  51                   PUSH ECX
5f00203d  57                   PUSH EDI
5f00203e  e8edf2ffff           CALL 0x5f001330
5f002043  83c414               ADD ESP,0x14
5f002046  8b442428             MOV EAX,dword ptr [ESP + 0x28]
5f00204a  8d4c242c             LEA ECX,[ESP + 0x2c]
5f00204e  2b442420             SUB EAX,dword ptr [ESP + 0x20]
5f002052  51                   PUSH ECX
5f002053  2b0524a2005f         SUB EAX,dword ptr [0x5f00a224]
5f002059  57                   PUSH EDI
5f00205a  01442438             ADD dword ptr [ESP + 0x38],EAX
5f00205e  8b442438             MOV EAX,dword ptr [ESP + 0x38]
5f002062  030528a2005f         ADD EAX,dword ptr [0x5f00a228]
5f002068  89442440             MOV dword ptr [ESP + 0x40],EAX
5f00206c  e88ff2ffff           CALL 0x5f001300
5f002071  8b4c2420             MOV ECX,dword ptr [ESP + 0x20]
5f002075  83c408               ADD ESP,0x8
5f002078  51                   PUSH ECX
5f002079  57                   PUSH EDI
5f00207a  ff15c4d1005f         CALL dword ptr [0x5f00d1c4]
5f002080  57                   PUSH EDI
5f002081  56                   PUSH ESI
5f002082  ff15a4d2005f         CALL dword ptr [0x5f00d2a4]
5f002088  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f00208c  5d                   POP EBP
5f00208d  5f                   POP EDI
5f00208e  5e                   POP ESI
5f00208f  5b                   POP EBX
5f002090  83c43c               ADD ESP,0x3c
5f002093  c21400               RET 0x14
; undefined 10 bytes at 5f002096

; ==== FUNCTION Ctl3dWinIniChange entry=5f0020a0 sig=undefined __stdcall Ctl3dWinIniChange(void)
5f0020a0  83ec0c               SUB ESP,0xc
5f0020a3  803d35a2005f00       CMP byte ptr [0x5f00a235],0x0
5f0020aa  56                   PUSH ESI
5f0020ab  57                   PUSH EDI
5f0020ac  0f8487000000         JZ 0x5f002139
5f0020b2  681051005f           PUSH 0x5f005110
5f0020b7  ff1520d2005f         CALL dword ptr [0x5f00d220]
5f0020bd  8d442408             LEA EAX,[ESP + 0x8]
5f0020c1  6a09                 PUSH 0x9
5f0020c3  50                   PUSH EAX
5f0020c4  8b3528d2005f         MOV ESI,dword ptr [0x5f00d228]
5f0020ca  c60534a2005f1e       MOV byte ptr [0x5f00a234],0x1e
5f0020d1  6820c0005f           PUSH 0x5f00c020
5f0020d6  6834c0005f           PUSH 0x5f00c034
5f0020db  6840c0005f           PUSH 0x5f00c040
5f0020e0  ffd6                 CALL ESI
5f0020e2  8d4c2408             LEA ECX,[ESP + 0x8]
5f0020e6  6810c0005f           PUSH 0x5f00c010
5f0020eb  51                   PUSH ECX
5f0020ec  8b3d40d2005f         MOV EDI,dword ptr [0x5f00d240]
5f0020f2  ffd7                 CALL EDI
5f0020f4  85c0                 TEST EAX,EAX
5f0020f6  7507                 JNZ 0x5f0020ff
5f0020f8  c60534a2005f1f       MOV byte ptr [0x5f00a234],0x1f
5f0020ff  8d442408             LEA EAX,[ESP + 0x8]
5f002103  6a09                 PUSH 0x9
5f002105  50                   PUSH EAX
5f002106  6818c0005f           PUSH 0x5f00c018
5f00210b  6828c0005f           PUSH 0x5f00c028
5f002110  6840c0005f           PUSH 0x5f00c040
5f002115  ffd6                 CALL ESI
5f002117  8d442408             LEA EAX,[ESP + 0x8]
5f00211b  6808c0005f           PUSH 0x5f00c008
5f002120  50                   PUSH EAX
5f002121  ffd7                 CALL EDI
5f002123  85c0                 TEST EAX,EAX
5f002125  7507                 JNZ 0x5f00212e
5f002127  c60534a2005f1f       MOV byte ptr [0x5f00a234],0x1f
5f00212e  681051005f           PUSH 0x5f005110
5f002133  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f002139  5f                   POP EDI
5f00213a  5e                   POP ESI
5f00213b  83c40c               ADD ESP,0xc
5f00213e  c3                   RET
; undefined 1 bytes at 5f00213f

; ==== FUNCTION FUN_5f002140 entry=5f002140 sig=uint __stdcall FUN_5f002140(void)
5f002140  81ec30010000         SUB ESP,0x130
5f002146  53                   PUSH EBX
5f002147  56                   PUSH ESI
5f002148  57                   PUSH EDI
5f002149  681051005f           PUSH 0x5f005110
5f00214e  ff1520d2005f         CALL dword ptr [0x5f00d220]
5f002154  8d44240e             LEA EAX,[ESP + 0xe]
5f002158  6a02                 PUSH 0x2
5f00215a  50                   PUSH EAX
5f00215b  68acc1005f           PUSH 0x5f00c1ac
5f002160  ff1510d2005f         CALL dword ptr [0x5f00d210]
5f002166  85c0                 TEST EAX,EAX
5f002168  740b                 JZ 0x5f002175
5f00216a  807c240e31           CMP byte ptr [ESP + 0xe],0x31
5f00216f  0f84f4000000         JZ 0x5f002269
5f002175  ff1508d2005f         CALL dword ptr [0x5f00d208]
5f00217b  a900000080           TEST EAX,0x80000000
5f002180  7538                 JNZ 0x5f0021ba
5f002182  6a10                 PUSH 0x10
5f002184  68a0c1005f           PUSH 0x5f00c1a0
5f002189  6808c1005f           PUSH 0x5f00c108
5f00218e  6a00                 PUSH 0x0
5f002190  ff1578d2005f         CALL dword ptr [0x5f00d278]
5f002196  c7053051005f00000000 MOV dword ptr [0x5f005130],0x0
5f0021a0  681051005f           PUSH 0x5f005110
5f0021a5  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f0021ab  a13051005f           MOV EAX,[0x5f005130]
5f0021b0  5f                   POP EDI
5f0021b1  5e                   POP ESI
5f0021b2  5b                   POP EBX
5f0021b3  81c430010000         ADD ESP,0x130
5f0021b9  c3                   RET
5f0021ba  6804010000           PUSH 0x104
5f0021bf  a14851005f           MOV EAX,[0x5f005148]
5f0021c4  680050005f           PUSH 0x5f005000
5f0021c9  50                   PUSH EAX
5f0021ca  ff1518d2005f         CALL dword ptr [0x5f00d218]
5f0021d0  05ff4f005f           ADD EAX,0x5f004fff
5f0021d5  3d0050005f           CMP EAX,0x5f005000
5f0021da  722b                 JC 0x5f002207
5f0021dc  8b3574d2005f         MOV ESI,dword ptr [0x5f00d274]
5f0021e2  80385c               CMP byte ptr [EAX],0x5c
5f0021e5  7411                 JZ 0x5f0021f8
5f0021e7  50                   PUSH EAX
5f0021e8  680050005f           PUSH 0x5f005000
5f0021ed  ffd6                 CALL ESI
5f0021ef  3d0050005f           CMP EAX,0x5f005000
5f0021f4  73ec                 JNC 0x5f0021e2
5f0021f6  eb0f                 JMP 0x5f002207
5f0021f8  8078ff3a             CMP byte ptr [EAX + -0x1],0x3a
5f0021fc  7405                 JZ 0x5f002203
5f0021fe  c60000               MOV byte ptr [EAX],0x0
5f002201  eb04                 JMP 0x5f002207
5f002203  c6400100             MOV byte ptr [EAX + 0x1],0x0
5f002207  8d442438             LEA EAX,[ESP + 0x38]
5f00220b  6804010000           PUSH 0x104
5f002210  50                   PUSH EAX
5f002211  ff151cd2005f         CALL dword ptr [0x5f00d21c]
5f002217  8d4c2438             LEA ECX,[ESP + 0x38]
5f00221b  8b3540d2005f         MOV ESI,dword ptr [0x5f00d240]
5f002221  51                   PUSH ECX
5f002222  680050005f           PUSH 0x5f005000
5f002227  ffd6                 CALL ESI
5f002229  85c0                 TEST EAX,EAX
5f00222b  743c                 JZ 0x5f002269
5f00222d  8d442438             LEA EAX,[ESP + 0x38]
5f002231  6804010000           PUSH 0x104
5f002236  50                   PUSH EAX
5f002237  ff1514d2005f         CALL dword ptr [0x5f00d214]
5f00223d  8d4c2438             LEA ECX,[ESP + 0x38]
5f002241  51                   PUSH ECX
5f002242  680050005f           PUSH 0x5f005000
5f002247  ffd6                 CALL ESI
5f002249  85c0                 TEST EAX,EAX
5f00224b  741c                 JZ 0x5f002269
5f00224d  681051005f           PUSH 0x5f005110
5f002252  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f002258  6a10                 PUSH 0x10
5f00225a  68a0c1005f           PUSH 0x5f00c1a0
5f00225f  687cc0005f           PUSH 0x5f00c07c
5f002264  e925ffffff           JMP 0x5f00218e
5f002269  6a00                 PUSH 0x0
5f00226b  ff1570d2005f         CALL dword ptr [0x5f00d270]
5f002271  8bd8                 MOV EBX,EAX
5f002273  6a0c                 PUSH 0xc
5f002275  53                   PUSH EBX
5f002276  8b35d4d1005f         MOV ESI,dword ptr [0x5f00d1d4]
5f00227c  ffd6                 CALL ESI
5f00227e  8bf8                 MOV EDI,EAX
5f002280  6a0e                 PUSH 0xe
5f002282  53                   PUSH EBX
5f002283  ffd6                 CALL ESI
5f002285  0faff8               IMUL EDI,EAX
5f002288  b801000000           MOV EAX,0x1
5f00228d  83ff04               CMP EDI,0x4
5f002290  7d02                 JGE 0x5f002294
5f002292  33c0                 XOR EAX,EAX
5f002294  6a01                 PUSH 0x1
5f002296  8b3d6cd2005f         MOV EDI,dword ptr [0x5f00d26c]
5f00229c  a33051005f           MOV [0x5f005130],EAX
5f0022a1  ffd7                 CALL EDI
5f0022a3  3d5e010000           CMP EAX,0x15e
5f0022a8  7515                 JNZ 0x5f0022bf
5f0022aa  6a00                 PUSH 0x0
5f0022ac  ffd7                 CALL EDI
5f0022ae  3d80020000           CMP EAX,0x280
5f0022b3  750a                 JNZ 0x5f0022bf
5f0022b5  c7053051005f00000000 MOV dword ptr [0x5f005130],0x0
5f0022bf  53                   PUSH EBX
5f0022c0  6a00                 PUSH 0x0
5f0022c2  ff15a4d2005f         CALL dword ptr [0x5f00d2a4]
5f0022c8  833d3051005f00       CMP dword ptr [0x5f005130],0x0
5f0022cf  0f84cbfeffff         JZ 0x5f0021a0
5f0022d5  6870c0005f           PUSH 0x5f00c070
5f0022da  8b3524d2005f         MOV ESI,dword ptr [0x5f00d224]
5f0022e0  ffd6                 CALL ESI
5f0022e2  66a33851005f         MOV [0x5f005138],AX
5f0022e8  6685c0               TEST AX,AX
5f0022eb  0f84a5feffff         JZ 0x5f002196
5f0022f1  6858c0005f           PUSH 0x5f00c058
5f0022f6  ffd6                 CALL ESI
5f0022f8  66a33e51005f         MOV [0x5f00513e],AX
5f0022fe  6685c0               TEST AX,AX
5f002301  0f848ffeffff         JZ 0x5f002196
5f002307  6868c0005f           PUSH 0x5f00c068
5f00230c  ffd6                 CALL ESI
5f00230e  66a33c51005f         MOV [0x5f00513c],AX
5f002314  6860c0005f           PUSH 0x5f00c060
5f002319  ffd6                 CALL ESI
5f00231b  66833d3c51005f00     CMP word ptr [0x5f00513c],0x0
5f002323  66a33a51005f         MOV [0x5f00513a],AX
5f002329  0f84eb000000         JZ 0x5f00241a
5f00232f  6685c0               TEST AX,AX
5f002332  0f84e2000000         JZ 0x5f00241a
5f002338  6850c0005f           PUSH 0x5f00c050
5f00233d  ffd6                 CALL ESI
5f00233f  66a34251005f         MOV [0x5f005142],AX
5f002345  6848c0005f           PUSH 0x5f00c048
5f00234a  ffd6                 CALL ESI
5f00234c  66833d4251005f00     CMP word ptr [0x5f005142],0x0
5f002354  66a34051005f         MOV [0x5f005140],AX
5f00235a  0f84a4000000         JZ 0x5f002404
5f002360  6685c0               TEST AX,AX
5f002363  0f849b000000         JZ 0x5f002404
5f002369  6874c0005f           PUSH 0x5f00c074
5f00236e  ffd6                 CALL ESI
5f002370  66a34451005f         MOV [0x5f005144],AX
5f002376  6685c0               TEST AX,AX
5f002379  0f8417feffff         JZ 0x5f002196
5f00237f  6a2a                 PUSH 0x2a
5f002381  ffd7                 CALL EDI
5f002383  a235a2005f           MOV [0x5f00a235],AL
5f002388  e813fdffff           CALL 0x5f0020a0
5f00238d  6a01                 PUSH 0x1
5f00238f  e87c010000           CALL 0x5f002510
5f002394  83c404               ADD ESP,0x4
5f002397  85c0                 TEST EAX,EAX
5f002399  0f84f7fdffff         JZ 0x5f002196
5f00239f  bb90a1005f           MOV EBX,0x5f00a190
5f0023a4  be4cb0005f           MOV ESI,0x5f00b04c
5f0023a9  8b3d68d2005f         MOV EDI,dword ptr [0x5f00d268]
5f0023af  8b06                 MOV EAX,dword ptr [ESI]
5f0023b1  8d56ec               LEA EDX,[ESI + -0x14]
5f0023b4  8903                 MOV dword ptr [EBX],EAX
5f0023b6  8d4c2410             LEA ECX,[ESP + 0x10]
5f0023ba  51                   PUSH ECX
5f0023bb  83c318               ADD EBX,0x18
5f0023be  52                   PUSH EDX
5f0023bf  83c620               ADD ESI,0x20
5f0023c2  6a00                 PUSH 0x0
5f0023c4  ffd7                 CALL EDI
5f0023c6  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
5f0023ca  81fe0cb1005f         CMP ESI,0x5f00b10c
5f0023d0  894bec               MOV dword ptr [EBX + -0x14],ECX
5f0023d3  72da                 JC 0x5f0023af
5f0023d5  8d442410             LEA EAX,[ESP + 0x10]
5f0023d9  50                   PUSH EAX
5f0023da  6802800000           PUSH 0x8002
5f0023df  6a00                 PUSH 0x0
5f0023e1  ffd7                 CALL EDI
5f0023e3  85c0                 TEST EAX,EAX
5f0023e5  740e                 JZ 0x5f0023f5
5f0023e7  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f0023eb  a320a2005f           MOV [0x5f00a220],EAX
5f0023f0  e9abfdffff           JMP 0x5f0021a0
5f0023f5  a164d2005f           MOV EAX,[0x5f00d264]
5f0023fa  a320a2005f           MOV [0x5f00a220],EAX
5f0023ff  e99cfdffff           JMP 0x5f0021a0
5f002404  33c0                 XOR EAX,EAX
5f002406  5f                   POP EDI
5f002407  c7053051005f00000000 MOV dword ptr [0x5f005130],0x0
5f002411  5e                   POP ESI
5f002412  5b                   POP EBX
5f002413  81c430010000         ADD ESP,0x130
5f002419  c3                   RET
5f00241a  33c0                 XOR EAX,EAX
5f00241c  5f                   POP EDI
5f00241d  c7053051005f00000000 MOV dword ptr [0x5f005130],0x0
5f002427  5e                   POP ESI
5f002428  5b                   POP EBX
5f002429  81c430010000         ADD ESP,0x130
5f00242f  c3                   RET

; ==== FUNCTION FUN_5f002430 entry=5f002430 sig=undefined __stdcall FUN_5f002430(void)
5f002430  56                   PUSH ESI
5f002431  681051005f           PUSH 0x5f005110
5f002436  ff1520d2005f         CALL dword ptr [0x5f00d220]
5f00243c  b890a1005f           MOV EAX,0x5f00a190
5f002441  833800               CMP dword ptr [EAX],0x0
5f002444  7406                 JZ 0x5f00244c
5f002446  c70000000000         MOV dword ptr [EAX],0x0
5f00244c  83c018               ADD EAX,0x18
5f00244f  3d20a2005f           CMP EAX,0x5f00a220
5f002454  72eb                 JC 0x5f002441
5f002456  e875eeffff           CALL 0x5f0012d0
5f00245b  66833d3851005f00     CMP word ptr [0x5f005138],0x0
5f002463  7411                 JZ 0x5f002476
5f002465  66a13851005f         MOV AX,[0x5f005138]
5f00246b  8b350cd2005f         MOV ESI,dword ptr [0x5f00d20c]
5f002471  50                   PUSH EAX
5f002472  ffd6                 CALL ESI
5f002474  eb06                 JMP 0x5f00247c
5f002476  8b350cd2005f         MOV ESI,dword ptr [0x5f00d20c]
5f00247c  66833d3e51005f00     CMP word ptr [0x5f00513e],0x0
5f002484  7409                 JZ 0x5f00248f
5f002486  66a13e51005f         MOV AX,[0x5f00513e]
5f00248c  50                   PUSH EAX
5f00248d  ffd6                 CALL ESI
5f00248f  66833d3c51005f00     CMP word ptr [0x5f00513c],0x0
5f002497  7409                 JZ 0x5f0024a2
5f002499  66a13c51005f         MOV AX,[0x5f00513c]
5f00249f  50                   PUSH EAX
5f0024a0  ffd6                 CALL ESI
5f0024a2  66833d3a51005f00     CMP word ptr [0x5f00513a],0x0
5f0024aa  7409                 JZ 0x5f0024b5
5f0024ac  66a13a51005f         MOV AX,[0x5f00513a]
5f0024b2  50                   PUSH EAX
5f0024b3  ffd6                 CALL ESI
5f0024b5  66833d4251005f00     CMP word ptr [0x5f005142],0x0
5f0024bd  7409                 JZ 0x5f0024c8
5f0024bf  66a14251005f         MOV AX,[0x5f005142]
5f0024c5  50                   PUSH EAX
5f0024c6  ffd6                 CALL ESI
5f0024c8  66833d4051005f00     CMP word ptr [0x5f005140],0x0
5f0024d0  7409                 JZ 0x5f0024db
5f0024d2  66a14051005f         MOV AX,[0x5f005140]
5f0024d8  50                   PUSH EAX
5f0024d9  ffd6                 CALL ESI
5f0024db  66833d4451005f00     CMP word ptr [0x5f005144],0x0
5f0024e3  7409                 JZ 0x5f0024ee
5f0024e5  66a14451005f         MOV AX,[0x5f005144]
5f0024eb  50                   PUSH EAX
5f0024ec  ffd6                 CALL ESI
5f0024ee  c7053051005f00000000 MOV dword ptr [0x5f005130],0x0
5f0024f8  681051005f           PUSH 0x5f005110
5f0024fd  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f002503  5e                   POP ESI
5f002504  c3                   RET
; undefined 11 bytes at 5f002505

; ==== FUNCTION FUN_5f002510 entry=5f002510 sig=undefined4 __cdecl FUN_5f002510(int param_1)
5f002510  83ec30               SUB ESP,0x30
5f002513  833d3051005f00       CMP dword ptr [0x5f005130],0x0
5f00251a  53                   PUSH EBX
5f00251b  56                   PUSH ESI
5f00251c  57                   PUSH EDI
5f00251d  7509                 JNZ 0x5f002528
5f00251f  33c0                 XOR EAX,EAX
5f002521  5f                   POP EDI
5f002522  5e                   POP ESI
5f002523  5b                   POP EBX
5f002524  83c430               ADD ESP,0x30
5f002527  c3                   RET
5f002528  6633db               XOR BX,BX
5f00252b  8b3d7cd2005f         MOV EDI,dword ptr [0x5f00d27c]
5f002531  0fb7f3               MOVZX ESI,BX
5f002534  6643                 INC BX
5f002536  33c0                 XOR EAX,EAX
5f002538  668b0475f8b0005f     MOV AX,word ptr [ESI*0x2 + 0x5f00b0f8]
5f002540  50                   PUSH EAX
5f002541  ffd7                 CALL EDI
5f002543  6683fb08             CMP BX,0x8
5f002547  8944b41c             MOV dword ptr [ESP + ESI*0x4 + 0x1c],EAX
5f00254b  72e4                 JC 0x5f002531
5f00254d  66813d5051005f0003   CMP word ptr [0x5f005150],0x300
5f002556  7508                 JNZ 0x5f002560
5f002558  c744241cffffff00     MOV dword ptr [ESP + 0x1c],0xffffff
5f002560  837c243400           CMP dword ptr [ESP + 0x34],0x0
5f002565  740a                 JZ 0x5f002571
5f002567  8b442434             MOV EAX,dword ptr [ESP + 0x34]
5f00256b  39442420             CMP dword ptr [ESP + 0x20],EAX
5f00256f  751a                 JNZ 0x5f00258b
5f002571  817c242080808000     CMP dword ptr [ESP + 0x20],0x808080
5f002579  c7442434c0c0c000     MOV dword ptr [ESP + 0x34],0xc0c0c0
5f002581  7408                 JZ 0x5f00258b
5f002583  c744243480808000     MOV dword ptr [ESP + 0x34],0x808080
5f00258b  837c244000           CMP dword ptr [ESP + 0x40],0x0
5f002590  751e                 JNZ 0x5f0025b0
5f002592  be5451005f           MOV ESI,0x5f005154
5f002597  8d7c241c             LEA EDI,[ESP + 0x1c]
5f00259b  b920000000           MOV ECX,0x20
5f0025a0  f3a6                 CMPSB.REPE ES:EDI,ESI
5f0025a2  750c                 JNZ 0x5f0025b0
5f0025a4  b801000000           MOV EAX,0x1
5f0025a9  5f                   POP EDI
5f0025aa  5e                   POP ESI
5f0025ab  5b                   POP EBX
5f0025ac  83c430               ADD ESP,0x30
5f0025af  c3                   RET
5f0025b0  8b442438             MOV EAX,dword ptr [ESP + 0x38]
5f0025b4  8b4c242c             MOV ECX,dword ptr [ESP + 0x2c]
5f0025b8  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
5f0025bc  50                   PUSH EAX
5f0025bd  8b442428             MOV EAX,dword ptr [ESP + 0x28]
5f0025c1  51                   PUSH ECX
5f0025c2  8b4c2428             MOV ECX,dword ptr [ESP + 0x28]
5f0025c6  52                   PUSH EDX
5f0025c7  8b54243c             MOV EDX,dword ptr [ESP + 0x3c]
5f0025cb  50                   PUSH EAX
5f0025cc  51                   PUSH ECX
5f0025cd  a14851005f           MOV EAX,[0x5f005148]
5f0025d2  6633ff               XOR DI,DI
5f0025d5  52                   PUSH EDX
5f0025d6  68c7670000           PUSH 0x67c7
5f0025db  50                   PUSH EAX
5f0025dc  e8bf210000           CALL 0x5f0047a0
5f0025e1  8b35ccd1005f         MOV ESI,dword ptr [0x5f00d1cc]
5f0025e7  8944240c             MOV dword ptr [ESP + 0xc],EAX
5f0025eb  0fb7c7               MOVZX EAX,DI
5f0025ee  6647                 INC DI
5f0025f0  8b4c841c             MOV ECX,dword ptr [ESP + EAX*0x4 + 0x1c]
5f0025f4  8d1c8500000000       LEA EBX,[EAX*0x4 + 0x0]
5f0025fb  51                   PUSH ECX
5f0025fc  ffd6                 CALL ESI
5f0025fe  6683ff03             CMP DI,0x3
5f002602  89441c10             MOV dword ptr [ESP + EBX*0x1 + 0x10],EAX
5f002606  72e3                 JC 0x5f0025eb
5f002608  33c0                 XOR EAX,EAX
5f00260a  33c9                 XOR ECX,ECX
5f00260c  0fb7d0               MOVZX EDX,AX
5f00260f  394c9410             CMP dword ptr [ESP + EDX*0x4 + 0x10],ECX
5f002613  7453                 JZ 0x5f002668
5f002615  6640                 INC AX
5f002617  663d0300             CMP AX,0x3
5f00261b  72ef                 JC 0x5f00260c
5f00261d  837c240c00           CMP dword ptr [ESP + 0xc],0x0
5f002622  7444                 JZ 0x5f002668
5f002624  e8a7ecffff           CALL 0x5f0012d0
5f002629  8b5c2414             MOV EBX,dword ptr [ESP + 0x14]
5f00262d  8d4c2410             LEA ECX,[ESP + 0x10]
5f002631  ba7451005f           MOV EDX,0x5f005174
5f002636  8d74241c             LEA ESI,[ESP + 0x1c]
5f00263a  8b01                 MOV EAX,dword ptr [ECX]
5f00263c  bf5451005f           MOV EDI,0x5f005154
5f002641  8b4908               MOV ECX,dword ptr [ECX + 0x8]
5f002644  8902                 MOV dword ptr [EDX],EAX
5f002646  895a04               MOV dword ptr [EDX + 0x4],EBX
5f002649  894a08               MOV dword ptr [EDX + 0x8],ECX
5f00264c  b908000000           MOV ECX,0x8
5f002651  f3a5                 MOVSD.REP ES:EDI,ESI
5f002653  8b44240c             MOV EAX,dword ptr [ESP + 0xc]
5f002657  5f                   POP EDI
5f002658  5e                   POP ESI
5f002659  a38051005f           MOV [0x5f005180],EAX
5f00265e  b801000000           MOV EAX,0x1
5f002663  5b                   POP EBX
5f002664  83c430               ADD ESP,0x30
5f002667  c3                   RET
5f002668  6633f6               XOR SI,SI
5f00266b  0fb7c6               MOVZX EAX,SI
5f00266e  6646                 INC SI
5f002670  8d4c8410             LEA ECX,[ESP + EAX*0x4 + 0x10]
5f002674  51                   PUSH ECX
5f002675  e836ecffff           CALL 0x5f0012b0
5f00267a  83c404               ADD ESP,0x4
5f00267d  6683fe03             CMP SI,0x3
5f002681  72e8                 JC 0x5f00266b
5f002683  8d44240c             LEA EAX,[ESP + 0xc]
5f002687  50                   PUSH EAX
5f002688  e823ecffff           CALL 0x5f0012b0
5f00268d  83c404               ADD ESP,0x4
5f002690  33c0                 XOR EAX,EAX
5f002692  5f                   POP EDI
5f002693  5e                   POP ESI
5f002694  5b                   POP EBX
5f002695  83c430               ADD ESP,0x30
5f002698  c3                   RET
; undefined 7 bytes at 5f002699

; ==== FUNCTION Ctl3dDlgProc entry=5f0026a0 sig=LRESULT __stdcall Ctl3dDlgProc(HWND param_1, uint param_2, HDC param_3, HWND param_4)
5f0026a0  83ec18               SUB ESP,0x18
5f0026a3  53                   PUSH EBX
5f0026a4  56                   PUSH ESI
5f0026a5  57                   PUSH EDI
5f0026a6  55                   PUSH EBP
5f0026a7  8b7c2430             MOV EDI,dword ptr [ESP + 0x30]
5f0026ab  81ff82000000         CMP EDI,0x82
5f0026b1  7524                 JNZ 0x5f0026d7
5f0026b3  8b6c2438             MOV EBP,dword ptr [ESP + 0x38]
5f0026b7  6a06                 PUSH 0x6
5f0026b9  8b5c2438             MOV EBX,dword ptr [ESP + 0x38]
5f0026bd  55                   PUSH EBP
5f0026be  8b742434             MOV ESI,dword ptr [ESP + 0x34]
5f0026c2  53                   PUSH EBX
5f0026c3  57                   PUSH EDI
5f0026c4  56                   PUSH ESI
5f0026c5  e886ebffff           CALL 0x5f001250
5f0026ca  83c414               ADD ESP,0x14
5f0026cd  5d                   POP EBP
5f0026ce  5f                   POP EDI
5f0026cf  5e                   POP ESI
5f0026d0  5b                   POP EBX
5f0026d1  83c418               ADD ESP,0x18
5f0026d4  c21000               RET 0x10
5f0026d7  33c0                 XOR EAX,EAX
5f0026d9  8b74242c             MOV ESI,dword ptr [ESP + 0x2c]
5f0026dd  66a14451005f         MOV AX,[0x5f005144]
5f0026e3  50                   PUSH EAX
5f0026e4  56                   PUSH ESI
5f0026e5  ff15fcd2005f         CALL dword ptr [0x5f00d2fc]
5f0026eb  85c0                 TEST EAX,EAX
5f0026ed  7428                 JZ 0x5f002717
5f0026ef  8b6c2438             MOV EBP,dword ptr [ESP + 0x38]
5f0026f3  8b5c2434             MOV EBX,dword ptr [ESP + 0x34]
5f0026f7  55                   PUSH EBP
5f0026f8  53                   PUSH EBX
5f0026f9  57                   PUSH EDI
5f0026fa  56                   PUSH ESI
5f0026fb  6a06                 PUSH 0x6
5f0026fd  56                   PUSH ESI
5f0026fe  e81de9ffff           CALL 0x5f001020
5f002703  83c408               ADD ESP,0x8
5f002706  50                   PUSH EAX
5f002707  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f00270d  5d                   POP EBP
5f00270e  5f                   POP EDI
5f00270f  5e                   POP ESI
5f002710  5b                   POP EBX
5f002711  83c418               ADD ESP,0x18
5f002714  c21000               RET 0x10
5f002717  81ff86000000         CMP EDI,0x86
5f00271d  7735                 JA 0x5f002754
5f00271f  81ff85000000         CMP EDI,0x85
5f002725  7361                 JNC 0x5f002788
5f002727  83ff0c               CMP EDI,0xc
5f00272a  745c                 JZ 0x5f002788
5f00272c  8b5c2434             MOV EBX,dword ptr [ESP + 0x34]
5f002730  8b6c2438             MOV EBP,dword ptr [ESP + 0x38]
5f002734  55                   PUSH EBP
5f002735  53                   PUSH EBX
5f002736  57                   PUSH EDI
5f002737  56                   PUSH ESI
5f002738  6a06                 PUSH 0x6
5f00273a  56                   PUSH ESI
5f00273b  e8e0e8ffff           CALL 0x5f001020
5f002740  83c408               ADD ESP,0x8
5f002743  50                   PUSH EAX
5f002744  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f00274a  5d                   POP EBP
5f00274b  5f                   POP EDI
5f00274c  5e                   POP ESI
5f00274d  5b                   POP EBX
5f00274e  83c418               ADD ESP,0x18
5f002751  c21000               RET 0x10
5f002754  81ff38010000         CMP EDI,0x138
5f00275a  7716                 JA 0x5f002772
5f00275c  81ff32010000         CMP EDI,0x132
5f002762  0f833b010000         JNC 0x5f0028a3
5f002768  81ff10010000         CMP EDI,0x110
5f00276e  7473                 JZ 0x5f0027e3
5f002770  ebba                 JMP 0x5f00272c
5f002772  81ff43190000         CMP EDI,0x1943
5f002778  72b2                 JC 0x5f00272c
5f00277a  81ff44190000         CMP EDI,0x1944
5f002780  0f8630020000         JBE 0x5f0029b6
5f002786  eba4                 JMP 0x5f00272c
5f002788  66813d5051005f5f03   CMP word ptr [0x5f005150],0x35f
5f002791  7328                 JNC 0x5f0027bb
5f002793  56                   PUSH ESI
5f002794  ff155cd2005f         CALL dword ptr [0x5f00d25c]
5f00279a  85c0                 TEST EAX,EAX
5f00279c  751d                 JNZ 0x5f0027bb
5f00279e  8b6c2438             MOV EBP,dword ptr [ESP + 0x38]
5f0027a2  6a00                 PUSH 0x0
5f0027a4  8b5c2438             MOV EBX,dword ptr [ESP + 0x38]
5f0027a8  55                   PUSH EBP
5f0027a9  53                   PUSH EBX
5f0027aa  57                   PUSH EDI
5f0027ab  56                   PUSH ESI
5f0027ac  e83ff6ffff           CALL 0x5f001df0
5f0027b1  5d                   POP EBP
5f0027b2  5f                   POP EDI
5f0027b3  5e                   POP ESI
5f0027b4  5b                   POP EBX
5f0027b5  83c418               ADD ESP,0x18
5f0027b8  c21000               RET 0x10
5f0027bb  8b6c2438             MOV EBP,dword ptr [ESP + 0x38]
5f0027bf  8b5c2434             MOV EBX,dword ptr [ESP + 0x34]
5f0027c3  55                   PUSH EBP
5f0027c4  53                   PUSH EBX
5f0027c5  57                   PUSH EDI
5f0027c6  56                   PUSH ESI
5f0027c7  6a06                 PUSH 0x6
5f0027c9  56                   PUSH ESI
5f0027ca  e851e8ffff           CALL 0x5f001020
5f0027cf  83c408               ADD ESP,0x8
5f0027d2  50                   PUSH EAX
5f0027d3  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f0027d9  5d                   POP EBP
5f0027da  5f                   POP EDI
5f0027db  5e                   POP ESI
5f0027dc  5b                   POP EBX
5f0027dd  83c418               ADD ESP,0x18
5f0027e0  c21000               RET 0x10
5f0027e3  6a06                 PUSH 0x6
5f0027e5  56                   PUSH ESI
5f0027e6  e835e8ffff           CALL 0x5f001020
5f0027eb  8944241c             MOV dword ptr [ESP + 0x1c],EAX
5f0027ef  83c408               ADD ESP,0x8
5f0027f2  66813d5051005f5f03   CMP word ptr [0x5f005150],0x35f
5f0027fb  7215                 JC 0x5f002812
5f0027fd  6af0                 PUSH -0x10
5f0027ff  56                   PUSH ESI
5f002800  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f002806  c744241000000000     MOV dword ptr [ESP + 0x10],0x0
5f00280e  a804                 TEST AL,0x4
5f002810  7508                 JNZ 0x5f00281a
5f002812  c744241001000000     MOV dword ptr [ESP + 0x10],0x1
5f00281a  8d442410             LEA EAX,[ESP + 0x10]
5f00281e  50                   PUSH EAX
5f00281f  6a00                 PUSH 0x0
5f002821  68f0110000           PUSH 0x11f0
5f002826  56                   PUSH ESI
5f002827  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f00282d  837c241000           CMP dword ptr [ESP + 0x10],0x0
5f002832  7527                 JNZ 0x5f00285b
5f002834  56                   PUSH ESI
5f002835  e826f1ffff           CALL 0x5f001960
5f00283a  8b6c2438             MOV EBP,dword ptr [ESP + 0x38]
5f00283e  8b5c2434             MOV EBX,dword ptr [ESP + 0x34]
5f002842  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f002846  55                   PUSH EBP
5f002847  53                   PUSH EBX
5f002848  57                   PUSH EDI
5f002849  56                   PUSH ESI
5f00284a  50                   PUSH EAX
5f00284b  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f002851  5d                   POP EBP
5f002852  5f                   POP EDI
5f002853  5e                   POP ESI
5f002854  5b                   POP EBX
5f002855  83c418               ADD ESP,0x18
5f002858  c21000               RET 0x10
5f00285b  8b6c2438             MOV EBP,dword ptr [ESP + 0x38]
5f00285f  8b5c2434             MOV EBX,dword ptr [ESP + 0x34]
5f002863  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f002867  55                   PUSH EBP
5f002868  53                   PUSH EBX
5f002869  57                   PUSH EDI
5f00286a  56                   PUSH ESI
5f00286b  50                   PUSH EAX
5f00286c  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f002872  66813d5051005f5f03   CMP word ptr [0x5f005150],0x35f
5f00287b  8bf8                 MOV EDI,EAX
5f00287d  720d                 JC 0x5f00288c
5f00287f  6af0                 PUSH -0x10
5f002881  56                   PUSH ESI
5f002882  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f002888  a804                 TEST AL,0x4
5f00288a  750b                 JNZ 0x5f002897
5f00288c  68ffff0000           PUSH 0xffff
5f002891  56                   PUSH ESI
5f002892  e879f3ffff           CALL 0x5f001c10
5f002897  8bc7                 MOV EAX,EDI
5f002899  5d                   POP EBP
5f00289a  5f                   POP EDI
5f00289b  5e                   POP ESI
5f00289c  5b                   POP EBX
5f00289d  83c418               ADD ESP,0x18
5f0028a0  c21000               RET 0x10
5f0028a3  8d442418             LEA EAX,[ESP + 0x18]
5f0028a7  6a10                 PUSH 0x10
5f0028a9  50                   PUSH EAX
5f0028aa  56                   PUSH ESI
5f0028ab  ff15f0d2005f         CALL dword ptr [0x5f00d2f0]
5f0028b1  8d4c2418             LEA ECX,[ESP + 0x18]
5f0028b5  51                   PUSH ECX
5f0028b6  68bcc1005f           PUSH 0x5f00c1bc
5f0028bb  ff15f0d1005f         CALL dword ptr [0x5f00d1f0]
5f0028c1  85c0                 TEST EAX,EAX
5f0028c3  743a                 JZ 0x5f0028ff
5f0028c5  8b6c2438             MOV EBP,dword ptr [ESP + 0x38]
5f0028c9  8b5c2434             MOV EBX,dword ptr [ESP + 0x34]
5f0028cd  55                   PUSH EBP
5f0028ce  8d87bf0c0000         LEA EAX,[EDI + 0xcbf]
5f0028d4  53                   PUSH EBX
5f0028d5  50                   PUSH EAX
5f0028d6  56                   PUSH ESI
5f0028d7  6a06                 PUSH 0x6
5f0028d9  56                   PUSH ESI
5f0028da  e841e7ffff           CALL 0x5f001020
5f0028df  83c408               ADD ESP,0x8
5f0028e2  50                   PUSH EAX
5f0028e3  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f0028e9  85c0                 TEST EAX,EAX
5f0028eb  0f84ab000000         JZ 0x5f00299c
5f0028f1  83f801               CMP EAX,0x1
5f0028f4  0f85aa000000         JNZ 0x5f0029a4
5f0028fa  e99d000000           JMP 0x5f00299c
5f0028ff  6a04                 PUSH 0x4
5f002901  56                   PUSH ESI
5f002902  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f002908  85c0                 TEST EAX,EAX
5f00290a  750e                 JNZ 0x5f00291a
5f00290c  8b6c2438             MOV EBP,dword ptr [ESP + 0x38]
5f002910  8b5c2434             MOV EBX,dword ptr [ESP + 0x34]
5f002914  55                   PUSH EBP
5f002915  e983000000           JMP 0x5f00299d
5f00291a  3d0000ffff           CMP EAX,0xffff0000
5f00291f  763a                 JBE 0x5f00295b
5f002921  66813d5051005f0a03   CMP word ptr [0x5f005150],0x30a
5f00292a  772f                 JA 0x5f00295b
5f00292c  8b6c2438             MOV EBP,dword ptr [ESP + 0x38]
5f002930  8b5c2434             MOV EBX,dword ptr [ESP + 0x34]
5f002934  55                   PUSH EBP
5f002935  8d87bf0c0000         LEA EAX,[EDI + 0xcbf]
5f00293b  53                   PUSH EBX
5f00293c  50                   PUSH EAX
5f00293d  56                   PUSH ESI
5f00293e  6a06                 PUSH 0x6
5f002940  56                   PUSH ESI
5f002941  e8dae6ffff           CALL 0x5f001020
5f002946  83c408               ADD ESP,0x8
5f002949  50                   PUSH EAX
5f00294a  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f002950  85c0                 TEST EAX,EAX
5f002952  7448                 JZ 0x5f00299c
5f002954  83f801               CMP EAX,0x1
5f002957  754b                 JNZ 0x5f0029a4
5f002959  eb41                 JMP 0x5f00299c
5f00295b  8b6c2438             MOV EBP,dword ptr [ESP + 0x38]
5f00295f  8b5c2434             MOV EBX,dword ptr [ESP + 0x34]
5f002963  55                   PUSH EBP
5f002964  53                   PUSH EBX
5f002965  57                   PUSH EDI
5f002966  56                   PUSH ESI
5f002967  50                   PUSH EAX
5f002968  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f00296e  85c0                 TEST EAX,EAX
5f002970  7405                 JZ 0x5f002977
5f002972  83f801               CMP EAX,0x1
5f002975  752d                 JNZ 0x5f0029a4
5f002977  55                   PUSH EBP
5f002978  8d87bf0c0000         LEA EAX,[EDI + 0xcbf]
5f00297e  53                   PUSH EBX
5f00297f  50                   PUSH EAX
5f002980  56                   PUSH ESI
5f002981  6a06                 PUSH 0x6
5f002983  56                   PUSH ESI
5f002984  e897e6ffff           CALL 0x5f001020
5f002989  83c408               ADD ESP,0x8
5f00298c  50                   PUSH EAX
5f00298d  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f002993  85c0                 TEST EAX,EAX
5f002995  7405                 JZ 0x5f00299c
5f002997  83f801               CMP EAX,0x1
5f00299a  7508                 JNZ 0x5f0029a4
5f00299c  55                   PUSH EBP
5f00299d  53                   PUSH EBX
5f00299e  57                   PUSH EDI
5f00299f  e86cf3ffff           CALL 0x5f001d10
5f0029a4  85c0                 TEST EAX,EAX
5f0029a6  0f8488fdffff         JZ 0x5f002734
5f0029ac  5d                   POP EBP
5f0029ad  5f                   POP EDI
5f0029ae  5e                   POP ESI
5f0029af  5b                   POP EBX
5f0029b0  83c418               ADD ESP,0x18
5f0029b3  c21000               RET 0x10
5f0029b6  8b6c2438             MOV EBP,dword ptr [ESP + 0x38]
5f0029ba  b8ee030000           MOV EAX,0x3ee
5f0029bf  c7450001000000       MOV dword ptr [EBP],0x1
5f0029c6  5d                   POP EBP
5f0029c7  5f                   POP EDI
5f0029c8  5e                   POP ESI
5f0029c9  5b                   POP EBX
5f0029ca  83c418               ADD ESP,0x18
5f0029cd  c21000               RET 0x10

; ==== FUNCTION FUN_5f0029d0 entry=5f0029d0 sig=undefined4 __cdecl FUN_5f0029d0(HWND param_1)
5f0029d0  56                   PUSH ESI
5f0029d1  8b742408             MOV ESI,dword ptr [ESP + 0x8]
5f0029d5  56                   PUSH ESI
5f0029d6  e825e6ffff           CALL 0x5f001000
5f0029db  83c404               ADD ESP,0x4
5f0029de  85c0                 TEST EAX,EAX
5f0029e0  7504                 JNZ 0x5f0029e6
5f0029e2  33c0                 XOR EAX,EAX
5f0029e4  5e                   POP ESI
5f0029e5  c3                   RET
5f0029e6  66813d5051005f5f03   CMP word ptr [0x5f005150],0x35f
5f0029ef  7211                 JC 0x5f002a02
5f0029f1  6af0                 PUSH -0x10
5f0029f3  56                   PUSH ESI
5f0029f4  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f0029fa  a804                 TEST AL,0x4
5f0029fc  7404                 JZ 0x5f002a02
5f0029fe  33c0                 XOR EAX,EAX
5f002a00  5e                   POP ESI
5f002a01  c3                   RET
5f002a02  b801000000           MOV EAX,0x1
5f002a07  5e                   POP ESI
5f002a08  c3                   RET
; undefined 7 bytes at 5f002a09

; ==== FUNCTION FUN_5f002a10 entry=5f002a10 sig=undefined __stdcall FUN_5f002a10(int param_1, HWND param_2, int * param_3)
5f002a10  83ec04               SUB ESP,0x4
5f002a13  53                   PUSH EBX
5f002a14  56                   PUSH ESI
5f002a15  57                   PUSH EDI
5f002a16  55                   PUSH EBP
5f002a17  ff152cd2005f         CALL dword ptr [0x5f00d22c]
5f002a1d  8bf0                 MOV ESI,EAX
5f002a1f  681051005f           PUSH 0x5f005110
5f002a24  ff1520d2005f         CALL dword ptr [0x5f00d220]
5f002a2a  3b358451005f         CMP ESI,dword ptr [0x5f005184]
5f002a30  7461                 JZ 0x5f002a93
5f002a32  33c9                 XOR ECX,ECX
5f002a34  3b0d8c51005f         CMP ECX,dword ptr [0x5f00518c]
5f002a3a  7d29                 JGE 0x5f002a65
5f002a3c  b89451005f           MOV EAX,0x5f005194
5f002a41  3930                 CMP dword ptr [EAX],ESI
5f002a43  740e                 JZ 0x5f002a53
5f002a45  83c014               ADD EAX,0x14
5f002a48  41                   INC ECX
5f002a49  3b0d8c51005f         CMP ECX,dword ptr [0x5f00518c]
5f002a4f  7cf0                 JL 0x5f002a41
5f002a51  eb0c                 JMP 0x5f002a5f
5f002a53  890d8851005f         MOV dword ptr [0x5f005188],ECX
5f002a59  89358451005f         MOV dword ptr [0x5f005184],ESI
5f002a5f  3b0d8c51005f         CMP ECX,dword ptr [0x5f00518c]
5f002a65  752c                 JNZ 0x5f002a93
5f002a67  681051005f           PUSH 0x5f005110
5f002a6c  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f002a72  8b5c2420             MOV EBX,dword ptr [ESP + 0x20]
5f002a76  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
5f002a7a  8b742418             MOV ESI,dword ptr [ESP + 0x18]
5f002a7e  53                   PUSH EBX
5f002a7f  50                   PUSH EAX
5f002a80  56                   PUSH ESI
5f002a81  6a00                 PUSH 0x0
5f002a83  ff15dcd2005f         CALL dword ptr [0x5f00d2dc]
5f002a89  5d                   POP EBP
5f002a8a  5f                   POP EDI
5f002a8b  5e                   POP ESI
5f002a8c  5b                   POP EBX
5f002a8d  83c404               ADD ESP,0x4
5f002a90  c20c00               RET 0xc
5f002a93  8b3d8851005f         MOV EDI,dword ptr [0x5f005188]
5f002a99  681051005f           PUSH 0x5f005110
5f002a9e  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f002aa4  8b742418             MOV ESI,dword ptr [ESP + 0x18]
5f002aa8  8b5c2420             MOV EBX,dword ptr [ESP + 0x20]
5f002aac  83fe03               CMP ESI,0x3
5f002aaf  0f85e7000000         JNZ 0x5f002b9c
5f002ab5  8b2b                 MOV EBP,dword ptr [EBX]
5f002ab7  817d2802800000       CMP dword ptr [EBP + 0x28],0x8002
5f002abe  757e                 JNZ 0x5f002b3e
5f002ac0  66833d5251005f20     CMP word ptr [0x5f005152],0x20
5f002ac8  7560                 JNZ 0x5f002b2a
5f002aca  66813d5051005f5f03   CMP word ptr [0x5f005150],0x35f
5f002ad3  721b                 JC 0x5f002af0
5f002ad5  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
5f002ad9  6af0                 PUSH -0x10
5f002adb  50                   PUSH EAX
5f002adc  8b2de4d2005f         MOV EBP,dword ptr [0x5f00d2e4]
5f002ae2  ffd5                 CALL EBP
5f002ae4  c744241000000000     MOV dword ptr [ESP + 0x10],0x0
5f002aec  a804                 TEST AL,0x4
5f002aee  7508                 JNZ 0x5f002af8
5f002af0  c744241001000000     MOV dword ptr [ESP + 0x10],0x1
5f002af8  8b6c241c             MOV EBP,dword ptr [ESP + 0x1c]
5f002afc  8d442410             LEA EAX,[ESP + 0x10]
5f002b00  50                   PUSH EAX
5f002b01  6a00                 PUSH 0x0
5f002b03  68f0110000           PUSH 0x11f0
5f002b08  55                   PUSH EBP
5f002b09  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f002b0f  837c241000           CMP dword ptr [ESP + 0x10],0x0
5f002b14  0f8482000000         JZ 0x5f002b9c
5f002b1a  68a026005f           PUSH 0x5f0026a0
5f002b1f  55                   PUSH EBP
5f002b20  e84be5ffff           CALL 0x5f001070
5f002b25  83c408               ADD ESP,0x8
5f002b28  eb72                 JMP 0x5f002b9c
5f002b2a  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
5f002b2e  68a026005f           PUSH 0x5f0026a0
5f002b33  50                   PUSH EAX
5f002b34  e8d7e6ffff           CALL 0x5f001210
5f002b39  83c408               ADD ESP,0x8
5f002b3c  eb5e                 JMP 0x5f002b9c
5f002b3e  8d04bd00000000       LEA EAX,[EDI*0x4 + 0x0]
5f002b45  f68480a051005f01     TEST byte ptr [EAX + EAX*0x4 + 0x5f0051a0],0x1
5f002b4d  744d                 JZ 0x5f002b9c
5f002b4f  8b450c               MOV EAX,dword ptr [EBP + 0xc]
5f002b52  50                   PUSH EAX
5f002b53  e878feffff           CALL 0x5f0029d0
5f002b58  83c404               ADD ESP,0x4
5f002b5b  85c0                 TEST EAX,EAX
5f002b5d  7525                 JNZ 0x5f002b84
5f002b5f  8b450c               MOV EAX,dword ptr [EBP + 0xc]
5f002b62  85c0                 TEST EAX,EAX
5f002b64  7436                 JZ 0x5f002b9c
5f002b66  66833d5251005f18     CMP word ptr [0x5f005152],0x18
5f002b6e  742c                 JZ 0x5f002b9c
5f002b70  50                   PUSH EAX
5f002b71  ff1558d2005f         CALL dword ptr [0x5f00d258]
5f002b77  50                   PUSH EAX
5f002b78  e853feffff           CALL 0x5f0029d0
5f002b7d  83c404               ADD ESP,0x4
5f002b80  85c0                 TEST EAX,EAX
5f002b82  7418                 JZ 0x5f002b9c
5f002b84  8b450c               MOV EAX,dword ptr [EBP + 0xc]
5f002b87  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
5f002b8b  50                   PUSH EAX
5f002b8c  6a01                 PUSH 0x1
5f002b8e  68ffff0000           PUSH 0xffff
5f002b93  51                   PUSH ECX
5f002b94  e857020000           CALL 0x5f002df0
5f002b99  83c410               ADD ESP,0x10
5f002b9c  c1e702               SHL EDI,0x2
5f002b9f  53                   PUSH EBX
5f002ba0  8b442420             MOV EAX,dword ptr [ESP + 0x20]
5f002ba4  8b8cbf9851005f       MOV ECX,dword ptr [EDI + EDI*0x4 + 0x5f005198]
5f002bab  50                   PUSH EAX
5f002bac  56                   PUSH ESI
5f002bad  51                   PUSH ECX
5f002bae  ff15dcd2005f         CALL dword ptr [0x5f00d2dc]
5f002bb4  5d                   POP EBP
5f002bb5  5f                   POP EDI
5f002bb6  5e                   POP ESI
5f002bb7  5b                   POP EBX
5f002bb8  83c404               ADD ESP,0x4
5f002bbb  c20c00               RET 0xc
; undefined 2 bytes at 5f002bbe

; ==== FUNCTION FUN_5f002bc0 entry=5f002bc0 sig=undefined4 __cdecl FUN_5f002bc0(undefined4 param_1, ushort param_2)
5f002bc0  66813d5051005f5f03   CMP word ptr [0x5f005150],0x35f
5f002bc9  7203                 JC 0x5f002bce
5f002bcb  33c0                 XOR EAX,EAX
5f002bcd  c3                   RET
5f002bce  8b442408             MOV EAX,dword ptr [ESP + 0x8]
5f002bd2  83e0df               AND EAX,0xffffffdf
5f002bd5  663d0900             CMP AX,0x9
5f002bd9  7706                 JA 0x5f002be1
5f002bdb  b801000000           MOV EAX,0x1
5f002be0  c3                   RET
5f002be1  33c0                 XOR EAX,EAX
5f002be3  c3                   RET
; undefined 12 bytes at 5f002be4

; ==== FUNCTION FUN_5f002bf0 entry=5f002bf0 sig=bool __stdcall FUN_5f002bf0(void)
5f002bf0  83ec10               SUB ESP,0x10
5f002bf3  66813d5051005f5f03   CMP word ptr [0x5f005150],0x35f
5f002bfc  7230                 JC 0x5f002c2e
5f002bfe  8b442424             MOV EAX,dword ptr [ESP + 0x24]
5f002c02  85c0                 TEST EAX,EAX
5f002c04  7428                 JZ 0x5f002c2e
5f002c06  8d4c2400             LEA ECX,[ESP]
5f002c0a  6a10                 PUSH 0x10
5f002c0c  51                   PUSH ECX
5f002c0d  50                   PUSH EAX
5f002c0e  ff15f0d2005f         CALL dword ptr [0x5f00d2f0]
5f002c14  8d4c2400             LEA ECX,[ESP]
5f002c18  6898b0005f           PUSH 0x5f00b098
5f002c1d  51                   PUSH ECX
5f002c1e  ff15f0d1005f         CALL dword ptr [0x5f00d1f0]
5f002c24  83f801               CMP EAX,0x1
5f002c27  1bc0                 SBB EAX,EAX
5f002c29  83c410               ADD ESP,0x10
5f002c2c  40                   INC EAX
5f002c2d  c3                   RET
5f002c2e  b801000000           MOV EAX,0x1
5f002c33  83c410               ADD ESP,0x10
5f002c36  c3                   RET
; undefined 9 bytes at 5f002c37

; ==== FUNCTION FUN_5f002c40 entry=5f002c40 sig=bool __stdcall FUN_5f002c40(void)
5f002c40  83ec10               SUB ESP,0x10
5f002c43  66813d5051005f5f03   CMP word ptr [0x5f005150],0x35f
5f002c4c  7230                 JC 0x5f002c7e
5f002c4e  8b442424             MOV EAX,dword ptr [ESP + 0x24]
5f002c52  85c0                 TEST EAX,EAX
5f002c54  7428                 JZ 0x5f002c7e
5f002c56  8d4c2400             LEA ECX,[ESP]
5f002c5a  6a10                 PUSH 0x10
5f002c5c  51                   PUSH ECX
5f002c5d  50                   PUSH EAX
5f002c5e  ff15f0d2005f         CALL dword ptr [0x5f00d2f0]
5f002c64  8d4c2400             LEA ECX,[ESP]
5f002c68  6898b0005f           PUSH 0x5f00b098
5f002c6d  51                   PUSH ECX
5f002c6e  ff15f0d1005f         CALL dword ptr [0x5f00d1f0]
5f002c74  83f801               CMP EAX,0x1
5f002c77  1bc0                 SBB EAX,EAX
5f002c79  83c410               ADD ESP,0x10
5f002c7c  40                   INC EAX
5f002c7d  c3                   RET
5f002c7e  b801000000           MOV EAX,0x1
5f002c83  83c410               ADD ESP,0x10
5f002c86  c3                   RET
; undefined 9 bytes at 5f002c87

; ==== FUNCTION FUN_5f002c90 entry=5f002c90 sig=undefined4 __stdcall FUN_5f002c90(void)
5f002c90  66813d5051005f5f03   CMP word ptr [0x5f005150],0x35f
5f002c99  7203                 JC 0x5f002c9e
5f002c9b  33c0                 XOR EAX,EAX
5f002c9d  c3                   RET
5f002c9e  66837c241001         CMP word ptr [ESP + 0x10],0x1
5f002ca4  7523                 JNZ 0x5f002cc9
5f002ca6  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f002caa  6af0                 PUSH -0x10
5f002cac  50                   PUSH EAX
5f002cad  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f002cb3  83e003               AND EAX,0x3
5f002cb6  83f802               CMP EAX,0x2
5f002cb9  740b                 JZ 0x5f002cc6
5f002cbb  83f803               CMP EAX,0x3
5f002cbe  7406                 JZ 0x5f002cc6
5f002cc0  b801000000           MOV EAX,0x1
5f002cc5  c3                   RET
5f002cc6  33c0                 XOR EAX,EAX
5f002cc8  c3                   RET
5f002cc9  b801000000           MOV EAX,0x1
5f002cce  c3                   RET
; undefined 1 bytes at 5f002ccf

; ==== FUNCTION FUN_5f002cd0 entry=5f002cd0 sig=undefined4 __cdecl FUN_5f002cd0(HWND param_1, uint param_2, undefined4 param_3, short param_4)
5f002cd0  66813d5051005f5f03   CMP word ptr [0x5f005150],0x35f
5f002cd9  53                   PUSH EBX
5f002cda  56                   PUSH ESI
5f002cdb  57                   PUSH EDI
5f002cdc  55                   PUSH EBP
5f002cdd  7207                 JC 0x5f002ce6
5f002cdf  33c0                 XOR EAX,EAX
5f002ce1  5d                   POP EBP
5f002ce2  5f                   POP EDI
5f002ce3  5e                   POP ESI
5f002ce4  5b                   POP EBX
5f002ce5  c3                   RET
5f002ce6  8b442418             MOV EAX,dword ptr [ESP + 0x18]
5f002cea  83e003               AND EAX,0x3
5f002ced  83f802               CMP EAX,0x2
5f002cf0  753a                 JNZ 0x5f002d2c
5f002cf2  668b5c2420           MOV BX,word ptr [ESP + 0x20]
5f002cf7  6683fb01             CMP BX,0x1
5f002cfb  7507                 JNZ 0x5f002d04
5f002cfd  33c0                 XOR EAX,EAX
5f002cff  5d                   POP EBP
5f002d00  5f                   POP EDI
5f002d01  5e                   POP ESI
5f002d02  5b                   POP EBX
5f002d03  c3                   RET
5f002d04  8b7c2414             MOV EDI,dword ptr [ESP + 0x14]
5f002d08  6a05                 PUSH 0x5
5f002d0a  57                   PUSH EDI
5f002d0b  ff15c4d2005f         CALL dword ptr [0x5f00d2c4]
5f002d11  85c0                 TEST EAX,EAX
5f002d13  740d                 JZ 0x5f002d22
5f002d15  57                   PUSH EDI
5f002d16  53                   PUSH EBX
5f002d17  6a04                 PUSH 0x4
5f002d19  50                   PUSH EAX
5f002d1a  e8d1000000           CALL 0x5f002df0
5f002d1f  83c410               ADD ESP,0x10
5f002d22  b801000000           MOV EAX,0x1
5f002d27  5d                   POP EBP
5f002d28  5f                   POP EDI
5f002d29  5e                   POP ESI
5f002d2a  5b                   POP EBX
5f002d2b  c3                   RET
5f002d2c  83f803               CMP EAX,0x3
5f002d2f  750a                 JNZ 0x5f002d3b
5f002d31  b801000000           MOV EAX,0x1
5f002d36  5d                   POP EBP
5f002d37  5f                   POP EDI
5f002d38  5e                   POP ESI
5f002d39  5b                   POP EBX
5f002d3a  c3                   RET
5f002d3b  668b5c2420           MOV BX,word ptr [ESP + 0x20]
5f002d40  6683fb01             CMP BX,0x1
5f002d44  750a                 JNZ 0x5f002d50
5f002d46  b801000000           MOV EAX,0x1
5f002d4b  5d                   POP EBP
5f002d4c  5f                   POP EDI
5f002d4d  5e                   POP ESI
5f002d4e  5b                   POP EBX
5f002d4f  c3                   RET
5f002d50  8b7c2414             MOV EDI,dword ptr [ESP + 0x14]
5f002d54  6a05                 PUSH 0x5
5f002d56  57                   PUSH EDI
5f002d57  8b35c4d2005f         MOV ESI,dword ptr [0x5f00d2c4]
5f002d5d  ffd6                 CALL ESI
5f002d5f  8be8                 MOV EBP,EAX
5f002d61  85ed                 TEST EBP,EBP
5f002d63  742d                 JZ 0x5f002d92
5f002d65  57                   PUSH EDI
5f002d66  53                   PUSH EBX
5f002d67  6a02                 PUSH 0x2
5f002d69  55                   PUSH EBP
5f002d6a  e881000000           CALL 0x5f002df0
5f002d6f  83c410               ADD ESP,0x10
5f002d72  6a02                 PUSH 0x2
5f002d74  55                   PUSH EBP
5f002d75  ffd6                 CALL ESI
5f002d77  85c0                 TEST EAX,EAX
5f002d79  740d                 JZ 0x5f002d88
5f002d7b  57                   PUSH EDI
5f002d7c  53                   PUSH EBX
5f002d7d  6a04                 PUSH 0x4
5f002d7f  50                   PUSH EAX
5f002d80  e86b000000           CALL 0x5f002df0
5f002d85  83c410               ADD ESP,0x10
5f002d88  b801000000           MOV EAX,0x1
5f002d8d  5d                   POP EBP
5f002d8e  5f                   POP EDI
5f002d8f  5e                   POP ESI
5f002d90  5b                   POP EBX
5f002d91  c3                   RET
5f002d92  33c0                 XOR EAX,EAX
5f002d94  5d                   POP EBP
5f002d95  5f                   POP EDI
5f002d96  5e                   POP ESI
5f002d97  5b                   POP EBX
5f002d98  c3                   RET
; undefined 7 bytes at 5f002d99

; ==== FUNCTION FUN_5f002da0 entry=5f002da0 sig=undefined4 __cdecl FUN_5f002da0(undefined4 param_1, uint param_2, ushort param_3)
5f002da0  8b442408             MOV EAX,dword ptr [ESP + 0x8]
5f002da4  66251f00             AND AX,0x1f
5f002da8  0fb7c8               MOVZX ECX,AX
5f002dab  83f903               CMP ECX,0x3
5f002dae  743c                 JZ 0x5f002dec
5f002db0  668b44240c           MOV AX,word ptr [ESP + 0xc]
5f002db5  a810                 TEST AL,0x10
5f002db7  740a                 JZ 0x5f002dc3
5f002db9  83f902               CMP ECX,0x2
5f002dbc  7e28                 JLE 0x5f002de6
5f002dbe  83f90c               CMP ECX,0xc
5f002dc1  7423                 JZ 0x5f002de6
5f002dc3  a820                 TEST AL,0x20
5f002dc5  7425                 JZ 0x5f002dec
5f002dc7  83f904               CMP ECX,0x4
5f002dca  7c05                 JL 0x5f002dd1
5f002dcc  83f909               CMP ECX,0x9
5f002dcf  7e15                 JLE 0x5f002de6
5f002dd1  66813d5051005f5f03   CMP word ptr [0x5f005150],0x35f
5f002dda  7310                 JNC 0x5f002dec
5f002ddc  83f910               CMP ECX,0x10
5f002ddf  7c0b                 JL 0x5f002dec
5f002de1  83f912               CMP ECX,0x12
5f002de4  7f06                 JG 0x5f002dec
5f002de6  b801000000           MOV EAX,0x1
5f002deb  c3                   RET
5f002dec  33c0                 XOR EAX,EAX
5f002dee  c3                   RET
; undefined 1 bytes at 5f002def

; ==== FUNCTION FUN_5f002df0 entry=5f002df0 sig=bool __cdecl FUN_5f002df0(HWND param_1, ushort param_2, short param_3, undefined4 param_4)
5f002df0  83ec10               SUB ESP,0x10
5f002df3  53                   PUSH EBX
5f002df4  56                   PUSH ESI
5f002df5  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
5f002df9  57                   PUSH EDI
5f002dfa  55                   PUSH EBP
5f002dfb  56                   PUSH ESI
5f002dfc  e8ffe1ffff           CALL 0x5f001000
5f002e01  83c404               ADD ESP,0x4
5f002e04  85c0                 TEST EAX,EAX
5f002e06  740a                 JZ 0x5f002e12
5f002e08  33c0                 XOR EAX,EAX
5f002e0a  5d                   POP EBP
5f002e0b  5f                   POP EDI
5f002e0c  5e                   POP ESI
5f002e0d  5b                   POP EBX
5f002e0e  83c410               ADD ESP,0x10
5f002e11  c3                   RET
5f002e12  8d442410             LEA EAX,[ESP + 0x10]
5f002e16  6a10                 PUSH 0x10
5f002e18  50                   PUSH EAX
5f002e19  33ed                 XOR EBP,EBP
5f002e1b  56                   PUSH ESI
5f002e1c  bb54b0005f           MOV EBX,0x5f00b054
5f002e21  ff15f0d2005f         CALL dword ptr [0x5f00d2f0]
5f002e27  668b7c2428           MOV DI,word ptr [ESP + 0x28]
5f002e2c  66853b               TEST word ptr [EBX],DI
5f002e2f  7413                 JZ 0x5f002e44
5f002e31  8d442410             LEA EAX,[ESP + 0x10]
5f002e35  8d4be4               LEA ECX,[EBX + -0x1c]
5f002e38  50                   PUSH EAX
5f002e39  51                   PUSH ECX
5f002e3a  ff15f0d1005f         CALL dword ptr [0x5f00d1f0]
5f002e40  85c0                 TEST EAX,EAX
5f002e42  7416                 JZ 0x5f002e5a
5f002e44  83c320               ADD EBX,0x20
5f002e47  45                   INC EBP
5f002e48  81fb14b1005f         CMP EBX,0x5f00b114
5f002e4e  72dc                 JC 0x5f002e2c
5f002e50  33c0                 XOR EAX,EAX
5f002e52  5d                   POP EBP
5f002e53  5f                   POP EDI
5f002e54  5e                   POP ESI
5f002e55  5b                   POP EBX
5f002e56  83c410               ADD ESP,0x10
5f002e59  c3                   RET
5f002e5a  6af0                 PUSH -0x10
5f002e5c  56                   PUSH ESI
5f002e5d  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f002e63  668b5c242c           MOV BX,word ptr [ESP + 0x2c]
5f002e68  8b4c2430             MOV ECX,dword ptr [ESP + 0x30]
5f002e6c  51                   PUSH ECX
5f002e6d  53                   PUSH EBX
5f002e6e  57                   PUSH EDI
5f002e6f  50                   PUSH EAX
5f002e70  56                   PUSH ESI
5f002e71  8bc5                 MOV EAX,EBP
5f002e73  c1e005               SHL EAX,0x5
5f002e76  ff9050b0005f         CALL dword ptr [EAX + 0x5f00b050]
5f002e7c  83c414               ADD ESP,0x14
5f002e7f  8bf8                 MOV EDI,EAX
5f002e81  83ff01               CMP EDI,0x1
5f002e84  754b                 JNZ 0x5f002ed1
5f002e86  6683fb01             CMP BX,0x1
5f002e8a  752d                 JNZ 0x5f002eb9
5f002e8c  66833d5251005f10     CMP word ptr [0x5f005152],0x10
5f002e94  7523                 JNZ 0x5f002eb9
5f002e96  8d446d00             LEA EAX,[EBP + EBP*0x2]
5f002e9a  8b0cc590a1005f       MOV ECX,dword ptr [EAX*0x8 + 0x5f00a190]
5f002ea1  51                   PUSH ECX
5f002ea2  56                   PUSH ESI
5f002ea3  e868e3ffff           CALL 0x5f001210
5f002ea8  83c408               ADD ESP,0x8
5f002eab  83ff01               CMP EDI,0x1
5f002eae  1bc0                 SBB EAX,EAX
5f002eb0  5d                   POP EBP
5f002eb1  40                   INC EAX
5f002eb2  5f                   POP EDI
5f002eb3  5e                   POP ESI
5f002eb4  5b                   POP EBX
5f002eb5  83c410               ADD ESP,0x10
5f002eb8  c3                   RET
5f002eb9  8d446d00             LEA EAX,[EBP + EBP*0x2]
5f002ebd  8b0cc590a1005f       MOV ECX,dword ptr [EAX*0x8 + 0x5f00a190]
5f002ec4  51                   PUSH ECX
5f002ec5  56                   PUSH ESI
5f002ec6  e8a5e1ffff           CALL 0x5f001070
5f002ecb  83c408               ADD ESP,0x8
5f002ece  83ff01               CMP EDI,0x1
5f002ed1  1bc0                 SBB EAX,EAX
5f002ed3  5d                   POP EBP
5f002ed4  40                   INC EAX
5f002ed5  5f                   POP EDI
5f002ed6  5e                   POP ESI
5f002ed7  5b                   POP EBX
5f002ed8  83c410               ADD ESP,0x10
5f002edb  c3                   RET
; undefined 4 bytes at 5f002edc

; ==== FUNCTION FUN_5f002ee0 entry=5f002ee0 sig=undefined __cdecl FUN_5f002ee0(HWND param_1, int param_2)
5f002ee0  83ec10               SUB ESP,0x10
5f002ee3  8d442400             LEA EAX,[ESP]
5f002ee7  53                   PUSH EBX
5f002ee8  56                   PUSH ESI
5f002ee9  57                   PUSH EDI
5f002eea  8b742420             MOV ESI,dword ptr [ESP + 0x20]
5f002eee  50                   PUSH EAX
5f002eef  56                   PUSH ESI
5f002ef0  ff1554d2005f         CALL dword ptr [0x5f00d254]
5f002ef6  6af0                 PUSH -0x10
5f002ef8  56                   PUSH ESI
5f002ef9  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f002eff  a900000010           TEST EAX,0x10000000
5f002f04  8bf8                 MOV EDI,EAX
5f002f06  0f848b000000         JZ 0x5f002f97
5f002f0c  8b442424             MOV EAX,dword ptr [ESP + 0x24]
5f002f10  85c0                 TEST EAX,EAX
5f002f12  743b                 JZ 0x5f002f4f
5f002f14  8b4818               MOV ECX,dword ptr [EAX + 0x18]
5f002f17  f6c1c0               TEST CL,0xc0
5f002f1a  750a                 JNZ 0x5f002f26
5f002f1c  f6c102               TEST CL,0x2
5f002f1f  7405                 JZ 0x5f002f26
5f002f21  f6c101               TEST CL,0x1
5f002f24  7571                 JNZ 0x5f002f97
5f002f26  80e103               AND CL,0x3
5f002f29  80f902               CMP CL,0x2
5f002f2c  7521                 JNZ 0x5f002f4f
5f002f2e  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
5f002f32  2b4810               SUB ECX,dword ptr [EAX + 0x10]
5f002f35  3b4c240c             CMP ECX,dword ptr [ESP + 0xc]
5f002f39  7514                 JNZ 0x5f002f4f
5f002f3b  8b4014               MOV EAX,dword ptr [EAX + 0x14]
5f002f3e  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
5f002f42  2b4c2410             SUB ECX,dword ptr [ESP + 0x10]
5f002f46  3bc8                 CMP ECX,EAX
5f002f48  7c05                 JL 0x5f002f4f
5f002f4a  40                   INC EAX
5f002f4b  01442410             ADD dword ptr [ESP + 0x10],EAX
5f002f4f  8d44240c             LEA EAX,[ESP + 0xc]
5f002f53  6a01                 PUSH 0x1
5f002f55  6a01                 PUSH 0x1
5f002f57  50                   PUSH EAX
5f002f58  ff1550d2005f         CALL dword ptr [0x5f00d250]
5f002f5e  56                   PUSH ESI
5f002f5f  ff1558d2005f         CALL dword ptr [0x5f00d258]
5f002f65  8bf0                 MOV ESI,EAX
5f002f67  8b1d84d2005f         MOV EBX,dword ptr [0x5f00d284]
5f002f6d  8d44240c             LEA EAX,[ESP + 0xc]
5f002f71  50                   PUSH EAX
5f002f72  56                   PUSH ESI
5f002f73  ffd3                 CALL EBX
5f002f75  8d4c2414             LEA ECX,[ESP + 0x14]
5f002f79  51                   PUSH ECX
5f002f7a  56                   PUSH ESI
5f002f7b  ffd3                 CALL EBX
5f002f7d  f7c700002000         TEST EDI,0x200000
5f002f83  7404                 JZ 0x5f002f89
5f002f85  ff442414             INC dword ptr [ESP + 0x14]
5f002f89  8d44240c             LEA EAX,[ESP + 0xc]
5f002f8d  6a00                 PUSH 0x0
5f002f8f  50                   PUSH EAX
5f002f90  56                   PUSH ESI
5f002f91  ff1580d2005f         CALL dword ptr [0x5f00d280]
5f002f97  5f                   POP EDI
5f002f98  5e                   POP ESI
5f002f99  5b                   POP EBX
5f002f9a  83c410               ADD ESP,0x10
5f002f9d  c3                   RET
; undefined 2 bytes at 5f002f9e

; ==== FUNCTION FUN_5f002fa0 entry=5f002fa0 sig=undefined __cdecl FUN_5f002fa0(HWND param_1)
5f002fa0  83ec10               SUB ESP,0x10
5f002fa3  53                   PUSH EBX
5f002fa4  56                   PUSH ESI
5f002fa5  57                   PUSH EDI
5f002fa6  6af0                 PUSH -0x10
5f002fa8  8b7c2424             MOV EDI,dword ptr [ESP + 0x24]
5f002fac  57                   PUSH EDI
5f002fad  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f002fb3  8bf0                 MOV ESI,EAX
5f002fb5  8d44240c             LEA EAX,[ESP + 0xc]
5f002fb9  50                   PUSH EAX
5f002fba  57                   PUSH EDI
5f002fbb  ff1554d2005f         CALL dword ptr [0x5f00d254]
5f002fc1  8d4c240c             LEA ECX,[ESP + 0xc]
5f002fc5  6a01                 PUSH 0x1
5f002fc7  6a01                 PUSH 0x1
5f002fc9  51                   PUSH ECX
5f002fca  ff1550d2005f         CALL dword ptr [0x5f00d250]
5f002fd0  57                   PUSH EDI
5f002fd1  ff1558d2005f         CALL dword ptr [0x5f00d258]
5f002fd7  8bf8                 MOV EDI,EAX
5f002fd9  8b1d84d2005f         MOV EBX,dword ptr [0x5f00d284]
5f002fdf  8d44240c             LEA EAX,[ESP + 0xc]
5f002fe3  50                   PUSH EAX
5f002fe4  57                   PUSH EDI
5f002fe5  ffd3                 CALL EBX
5f002fe7  8d4c2414             LEA ECX,[ESP + 0x14]
5f002feb  51                   PUSH ECX
5f002fec  57                   PUSH EDI
5f002fed  ffd3                 CALL EBX
5f002fef  f7c600002000         TEST ESI,0x200000
5f002ff5  7404                 JZ 0x5f002ffb
5f002ff7  ff442414             INC dword ptr [ESP + 0x14]
5f002ffb  8d44240c             LEA EAX,[ESP + 0xc]
5f002fff  50                   PUSH EAX
5f003000  57                   PUSH EDI
5f003001  ff1588d2005f         CALL dword ptr [0x5f00d288]
5f003007  5f                   POP EDI
5f003008  5e                   POP ESI
5f003009  5b                   POP EBX
5f00300a  83c410               ADD ESP,0x10
5f00300d  c3                   RET
; undefined 2 bytes at 5f00300e

; ==== FUNCTION FUN_5f003010 entry=5f003010 sig=undefined __cdecl FUN_5f003010(HWND param_1, HDC param_2, RECT * param_3, char * param_4, int param_5, short param_6, int param_7)
5f003010  83ec1c               SUB ESP,0x1c
5f003013  8d4c240c             LEA ECX,[ESP + 0xc]
5f003017  53                   PUSH EBX
5f003018  56                   PUSH ESI
5f003019  57                   PUSH EDI
5f00301a  8b7c2434             MOV EDI,dword ptr [ESP + 0x34]
5f00301e  55                   PUSH EBP
5f00301f  8b07                 MOV EAX,dword ptr [EDI]
5f003021  8b5704               MOV EDX,dword ptr [EDI + 0x4]
5f003024  8b5f08               MOV EBX,dword ptr [EDI + 0x8]
5f003027  6a0f                 PUSH 0xf
5f003029  6a07                 PUSH 0x7
5f00302b  8901                 MOV dword ptr [ECX],EAX
5f00302d  8b470c               MOV EAX,dword ptr [EDI + 0xc]
5f003030  6a07                 PUSH 0x7
5f003032  8b742440             MOV ESI,dword ptr [ESP + 0x40]
5f003036  57                   PUSH EDI
5f003037  56                   PUSH ESI
5f003038  895104               MOV dword ptr [ECX + 0x4],EDX
5f00303b  895908               MOV dword ptr [ECX + 0x8],EBX
5f00303e  89410c               MOV dword ptr [ECX + 0xc],EAX
5f003041  e8eae2ffff           CALL 0x5f001330
5f003046  8d4c2430             LEA ECX,[ESP + 0x30]
5f00304a  83c414               ADD ESP,0x14
5f00304d  6aff                 PUSH -0x1
5f00304f  6aff                 PUSH -0x1
5f003051  51                   PUSH ECX
5f003052  ff1550d2005f         CALL dword ptr [0x5f00d250]
5f003058  66837c244401         CMP word ptr [ESP + 0x44],0x1
5f00305e  7532                 JNZ 0x5f003092
5f003060  8b442430             MOV EAX,dword ptr [ESP + 0x30]
5f003064  50                   PUSH EAX
5f003065  ff159cd2005f         CALL dword ptr [0x5f00d29c]
5f00306b  85c0                 TEST EAX,EAX
5f00306d  7423                 JZ 0x5f003092
5f00306f  8d44241c             LEA EAX,[ESP + 0x1c]
5f003073  6a0f                 PUSH 0xf
5f003075  6a07                 PUSH 0x7
5f003077  6a07                 PUSH 0x7
5f003079  50                   PUSH EAX
5f00307a  56                   PUSH ESI
5f00307b  e8b0e2ffff           CALL 0x5f001330
5f003080  8d442430             LEA EAX,[ESP + 0x30]
5f003084  83c414               ADD ESP,0x14
5f003087  6aff                 PUSH -0x1
5f003089  6aff                 PUSH -0x1
5f00308b  50                   PUSH EAX
5f00308c  ff1550d2005f         CALL dword ptr [0x5f00d250]
5f003092  682100f000           PUSH 0xf00021
5f003097  8b4704               MOV EAX,dword ptr [EDI + 0x4]
5f00309a  6a01                 PUSH 0x1
5f00309c  8b0f                 MOV ECX,dword ptr [EDI]
5f00309e  6a01                 PUSH 0x1
5f0030a0  50                   PUSH EAX
5f0030a1  51                   PUSH ECX
5f0030a2  56                   PUSH ESI
5f0030a3  ff15b0d1005f         CALL dword ptr [0x5f00d1b0]
5f0030a9  682100f000           PUSH 0xf00021
5f0030ae  8b4f04               MOV ECX,dword ptr [EDI + 0x4]
5f0030b1  6a01                 PUSH 0x1
5f0030b3  8b4708               MOV EAX,dword ptr [EDI + 0x8]
5f0030b6  6a01                 PUSH 0x1
5f0030b8  48                   DEC EAX
5f0030b9  51                   PUSH ECX
5f0030ba  50                   PUSH EAX
5f0030bb  56                   PUSH ESI
5f0030bc  ff15b0d1005f         CALL dword ptr [0x5f00d1b0]
5f0030c2  682100f000           PUSH 0xf00021
5f0030c7  8b470c               MOV EAX,dword ptr [EDI + 0xc]
5f0030ca  6a01                 PUSH 0x1
5f0030cc  48                   DEC EAX
5f0030cd  6a01                 PUSH 0x1
5f0030cf  8b0f                 MOV ECX,dword ptr [EDI]
5f0030d1  50                   PUSH EAX
5f0030d2  51                   PUSH ECX
5f0030d3  56                   PUSH ESI
5f0030d4  ff15b0d1005f         CALL dword ptr [0x5f00d1b0]
5f0030da  682100f000           PUSH 0xf00021
5f0030df  8b470c               MOV EAX,dword ptr [EDI + 0xc]
5f0030e2  6a01                 PUSH 0x1
5f0030e4  48                   DEC EAX
5f0030e5  6a01                 PUSH 0x1
5f0030e7  50                   PUSH EAX
5f0030e8  8b4708               MOV EAX,dword ptr [EDI + 0x8]
5f0030eb  48                   DEC EAX
5f0030ec  50                   PUSH EAX
5f0030ed  56                   PUSH ESI
5f0030ee  ff15b0d1005f         CALL dword ptr [0x5f00d1b0]
5f0030f4  837c244801           CMP dword ptr [ESP + 0x48],0x1
5f0030f9  1bdb                 SBB EBX,EBX
5f0030fb  f7db                 NEG EBX
5f0030fd  43                   INC EBX
5f0030fe  837c244800           CMP dword ptr [ESP + 0x48],0x0
5f003103  7407                 JZ 0x5f00310c
5f003105  a17c51005f           MOV EAX,[0x5f00517c]
5f00310a  eb05                 JMP 0x5f003111
5f00310c  a17451005f           MOV EAX,[0x5f005174]
5f003111  50                   PUSH EAX
5f003112  56                   PUSH ESI
5f003113  ff15c4d1005f         CALL dword ptr [0x5f00d1c4]
5f003119  8b4c2420             MOV ECX,dword ptr [ESP + 0x20]
5f00311d  682100f000           PUSH 0xf00021
5f003122  8b542420             MOV EDX,dword ptr [ESP + 0x20]
5f003126  89442414             MOV dword ptr [ESP + 0x14],EAX
5f00312a  8b44242c             MOV EAX,dword ptr [ESP + 0x2c]
5f00312e  2b442424             SUB EAX,dword ptr [ESP + 0x24]
5f003132  50                   PUSH EAX
5f003133  53                   PUSH EBX
5f003134  51                   PUSH ECX
5f003135  52                   PUSH EDX
5f003136  56                   PUSH ESI
5f003137  ff15b0d1005f         CALL dword ptr [0x5f00d1b0]
5f00313d  8b442424             MOV EAX,dword ptr [ESP + 0x24]
5f003141  682100f000           PUSH 0xf00021
5f003146  2b442420             SUB EAX,dword ptr [ESP + 0x20]
5f00314a  53                   PUSH EBX
5f00314b  8b4c2428             MOV ECX,dword ptr [ESP + 0x28]
5f00314f  50                   PUSH EAX
5f003150  8b542428             MOV EDX,dword ptr [ESP + 0x28]
5f003154  51                   PUSH ECX
5f003155  52                   PUSH EDX
5f003156  56                   PUSH ESI
5f003157  ff15b0d1005f         CALL dword ptr [0x5f00d1b0]
5f00315d  837c244800           CMP dword ptr [ESP + 0x48],0x0
5f003162  7579                 JNZ 0x5f0031dd
5f003164  a17c51005f           MOV EAX,[0x5f00517c]
5f003169  33ed                 XOR EBP,EBP
5f00316b  50                   PUSH EAX
5f00316c  56                   PUSH ESI
5f00316d  ff15c4d1005f         CALL dword ptr [0x5f00d1c4]
5f003173  ff4c2428             DEC dword ptr [ESP + 0x28]
5f003177  ff4c2424             DEC dword ptr [ESP + 0x24]
5f00317b  85db                 TEST EBX,EBX
5f00317d  7e5e                 JLE 0x5f0031dd
5f00317f  8b442424             MOV EAX,dword ptr [ESP + 0x24]
5f003183  682100f000           PUSH 0xf00021
5f003188  2b442420             SUB EAX,dword ptr [ESP + 0x20]
5f00318c  6a01                 PUSH 0x1
5f00318e  40                   INC EAX
5f00318f  8b4c2430             MOV ECX,dword ptr [ESP + 0x30]
5f003193  8b542424             MOV EDX,dword ptr [ESP + 0x24]
5f003197  50                   PUSH EAX
5f003198  51                   PUSH ECX
5f003199  52                   PUSH EDX
5f00319a  56                   PUSH ESI
5f00319b  ff15b0d1005f         CALL dword ptr [0x5f00d1b0]
5f0031a1  8b442428             MOV EAX,dword ptr [ESP + 0x28]
5f0031a5  682100f000           PUSH 0xf00021
5f0031aa  2b442424             SUB EAX,dword ptr [ESP + 0x24]
5f0031ae  8b4c2424             MOV ECX,dword ptr [ESP + 0x24]
5f0031b2  8b542428             MOV EDX,dword ptr [ESP + 0x28]
5f0031b6  50                   PUSH EAX
5f0031b7  6a01                 PUSH 0x1
5f0031b9  51                   PUSH ECX
5f0031ba  52                   PUSH EDX
5f0031bb  56                   PUSH ESI
5f0031bc  ff15b0d1005f         CALL dword ptr [0x5f00d1b0]
5f0031c2  8d4bff               LEA ECX,[EBX + -0x1]
5f0031c5  3be9                 CMP EBP,ECX
5f0031c7  7d0f                 JGE 0x5f0031d8
5f0031c9  8d44241c             LEA EAX,[ESP + 0x1c]
5f0031cd  6aff                 PUSH -0x1
5f0031cf  6aff                 PUSH -0x1
5f0031d1  50                   PUSH EAX
5f0031d2  ff1550d2005f         CALL dword ptr [0x5f00d250]
5f0031d8  45                   INC EBP
5f0031d9  3beb                 CMP EBP,EBX
5f0031db  7ca2                 JL 0x5f00317f
5f0031dd  a17851005f           MOV EAX,[0x5f005178]
5f0031e2  ff44241c             INC dword ptr [ESP + 0x1c]
5f0031e6  ff442420             INC dword ptr [ESP + 0x20]
5f0031ea  50                   PUSH EAX
5f0031eb  56                   PUSH ESI
5f0031ec  ff15c4d1005f         CALL dword ptr [0x5f00d1c4]
5f0031f2  8b442428             MOV EAX,dword ptr [ESP + 0x28]
5f0031f6  682100f000           PUSH 0xf00021
5f0031fb  2b442424             SUB EAX,dword ptr [ESP + 0x24]
5f0031ff  8b4c2424             MOV ECX,dword ptr [ESP + 0x24]
5f003203  8b542420             MOV EDX,dword ptr [ESP + 0x20]
5f003207  50                   PUSH EAX
5f003208  8b44242c             MOV EAX,dword ptr [ESP + 0x2c]
5f00320c  2b442424             SUB EAX,dword ptr [ESP + 0x24]
5f003210  50                   PUSH EAX
5f003211  51                   PUSH ECX
5f003212  52                   PUSH EDX
5f003213  56                   PUSH ESI
5f003214  ff15b0d1005f         CALL dword ptr [0x5f00d1b0]
5f00321a  8b4c2430             MOV ECX,dword ptr [ESP + 0x30]
5f00321e  51                   PUSH ECX
5f00321f  ff159cd2005f         CALL dword ptr [0x5f00d29c]
5f003225  85c0                 TEST EAX,EAX
5f003227  750d                 JNZ 0x5f003236
5f003229  a16c51005f           MOV EAX,[0x5f00516c]
5f00322e  50                   PUSH EAX
5f00322f  56                   PUSH ESI
5f003230  ff15c0d1005f         CALL dword ptr [0x5f00d1c0]
5f003236  8d442418             LEA EAX,[ESP + 0x18]
5f00323a  8d4c2414             LEA ECX,[ESP + 0x14]
5f00323e  8b5c243c             MOV EBX,dword ptr [ESP + 0x3c]
5f003242  50                   PUSH EAX
5f003243  51                   PUSH ECX
5f003244  53                   PUSH EBX
5f003245  56                   PUSH ESI
5f003246  e8d5e2ffff           CALL 0x5f001520
5f00324b  8b442438             MOV EAX,dword ptr [ESP + 0x38]
5f00324f  2b442430             SUB EAX,dword ptr [ESP + 0x30]
5f003253  2b442428             SUB EAX,dword ptr [ESP + 0x28]
5f003257  83c410               ADD ESP,0x10
5f00325a  99                   CDQ
5f00325b  2bc2                 SUB EAX,EDX
5f00325d  c1f801               SAR EAX,0x1
5f003260  01442420             ADD dword ptr [ESP + 0x20],EAX
5f003264  8b442424             MOV EAX,dword ptr [ESP + 0x24]
5f003268  2b44241c             SUB EAX,dword ptr [ESP + 0x1c]
5f00326c  2b442414             SUB EAX,dword ptr [ESP + 0x14]
5f003270  8b4c2428             MOV ECX,dword ptr [ESP + 0x28]
5f003274  99                   CDQ
5f003275  2bc2                 SUB EAX,EDX
5f003277  c1f801               SAR EAX,0x1
5f00327a  0144241c             ADD dword ptr [ESP + 0x1c],EAX
5f00327e  8b442420             MOV EAX,dword ptr [ESP + 0x20]
5f003282  03442418             ADD EAX,dword ptr [ESP + 0x18]
5f003286  3bc1                 CMP EAX,ECX
5f003288  7c02                 JL 0x5f00328c
5f00328a  8bc1                 MOV EAX,ECX
5f00328c  8b4c2424             MOV ECX,dword ptr [ESP + 0x24]
5f003290  89442428             MOV dword ptr [ESP + 0x28],EAX
5f003294  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
5f003298  03442414             ADD EAX,dword ptr [ESP + 0x14]
5f00329c  3bc1                 CMP EAX,ECX
5f00329e  7c02                 JL 0x5f0032a2
5f0032a0  8bc1                 MOV EAX,ECX
5f0032a2  837c244800           CMP dword ptr [ESP + 0x48],0x0
5f0032a7  89442424             MOV dword ptr [ESP + 0x24],EAX
5f0032ab  7439                 JZ 0x5f0032e6
5f0032ad  8d44241c             LEA EAX,[ESP + 0x1c]
5f0032b1  6a01                 PUSH 0x1
5f0032b3  6a01                 PUSH 0x1
5f0032b5  8b2d4cd2005f         MOV EBP,dword ptr [0x5f00d24c]
5f0032bb  50                   PUSH EAX
5f0032bc  ffd5                 CALL EBP
5f0032be  8b4708               MOV EAX,dword ptr [EDI + 0x8]
5f0032c1  8b4c2424             MOV ECX,dword ptr [ESP + 0x24]
5f0032c5  83e803               SUB EAX,0x3
5f0032c8  3bc1                 CMP EAX,ECX
5f0032ca  7c02                 JL 0x5f0032ce
5f0032cc  8bc1                 MOV EAX,ECX
5f0032ce  8b4c2428             MOV ECX,dword ptr [ESP + 0x28]
5f0032d2  89442424             MOV dword ptr [ESP + 0x24],EAX
5f0032d6  8b470c               MOV EAX,dword ptr [EDI + 0xc]
5f0032d9  83e803               SUB EAX,0x3
5f0032dc  3bc1                 CMP EAX,ECX
5f0032de  7c02                 JL 0x5f0032e2
5f0032e0  8bc1                 MOV EAX,ECX
5f0032e2  89442428             MOV dword ptr [ESP + 0x28],EAX
5f0032e6  8d44241c             LEA EAX,[ESP + 0x1c]
5f0032ea  6a20                 PUSH 0x20
5f0032ec  8b4c2444             MOV ECX,dword ptr [ESP + 0x44]
5f0032f0  50                   PUSH EAX
5f0032f1  51                   PUSH ECX
5f0032f2  53                   PUSH EBX
5f0032f3  56                   PUSH ESI
5f0032f4  ff1598d2005f         CALL dword ptr [0x5f00d298]
5f0032fa  8b2d94d2005f         MOV EBP,dword ptr [0x5f00d294]
5f003300  ffd5                 CALL EBP
5f003302  3b442430             CMP EAX,dword ptr [ESP + 0x30]
5f003306  752c                 JNZ 0x5f003334
5f003308  8d44241c             LEA EAX,[ESP + 0x1c]
5f00330c  6a01                 PUSH 0x1
5f00330e  6a01                 PUSH 0x1
5f003310  50                   PUSH EAX
5f003311  ff1550d2005f         CALL dword ptr [0x5f00d250]
5f003317  8d44241c             LEA EAX,[ESP + 0x1c]
5f00331b  57                   PUSH EDI
5f00331c  50                   PUSH EAX
5f00331d  8d442424             LEA EAX,[ESP + 0x24]
5f003321  50                   PUSH EAX
5f003322  ff1590d2005f         CALL dword ptr [0x5f00d290]
5f003328  8d4c241c             LEA ECX,[ESP + 0x1c]
5f00332c  51                   PUSH ECX
5f00332d  56                   PUSH ESI
5f00332e  ff158cd2005f         CALL dword ptr [0x5f00d28c]
5f003334  837c241000           CMP dword ptr [ESP + 0x10],0x0
5f003339  740c                 JZ 0x5f003347
5f00333b  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f00333f  50                   PUSH EAX
5f003340  56                   PUSH ESI
5f003341  ff15c4d1005f         CALL dword ptr [0x5f00d1c4]
5f003347  5d                   POP EBP
5f003348  5f                   POP EDI
5f003349  5e                   POP ESI
5f00334a  5b                   POP EBX
5f00334b  83c41c               ADD ESP,0x1c
5f00334e  c3                   RET
; undefined 1 bytes at 5f00334f

; ==== FUNCTION FUN_5f003350 entry=5f003350 sig=undefined __cdecl FUN_5f003350(HWND param_1, HDC param_2, uint param_3)
5f003350  81ec54010000         SUB ESP,0x154
5f003356  53                   PUSH EBX
5f003357  56                   PUSH ESI
5f003358  57                   PUSH EDI
5f003359  55                   PUSH EBP
5f00335a  8bbc2468010000       MOV EDI,dword ptr [ESP + 0x168]
5f003361  6af0                 PUSH -0x10
5f003363  57                   PUSH EDI
5f003364  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f00336a  8bd8                 MOV EBX,EAX
5f00336c  57                   PUSH EDI
5f00336d  83e020               AND EAX,0x20
5f003370  83e31f               AND EBX,0x1f
5f003373  8b2d58d2005f         MOV EBP,dword ptr [0x5f00d258]
5f003379  89442424             MOV dword ptr [ESP + 0x24],EAX
5f00337d  ffd5                 CALL EBP
5f00337f  8bb4246c010000       MOV ESI,dword ptr [ESP + 0x16c]
5f003386  6a02                 PUSH 0x2
5f003388  89442420             MOV dword ptr [ESP + 0x20],EAX
5f00338c  56                   PUSH ESI
5f00338d  ff15dcd1005f         CALL dword ptr [0x5f00d1dc]
5f003393  8d442444             LEA EAX,[ESP + 0x44]
5f003397  8b2dccd2005f         MOV EBP,dword ptr [0x5f00d2cc]
5f00339d  50                   PUSH EAX
5f00339e  57                   PUSH EDI
5f00339f  ffd5                 CALL EBP
5f0033a1  8b6c2448             MOV EBP,dword ptr [ESP + 0x48]
5f0033a5  8d542444             LEA EDX,[ESP + 0x44]
5f0033a9  8d4c2434             LEA ECX,[ESP + 0x34]
5f0033ad  8b02                 MOV EAX,dword ptr [EDX]
5f0033af  6a00                 PUSH 0x0
5f0033b1  6a00                 PUSH 0x0
5f0033b3  6a31                 PUSH 0x31
5f0033b5  8901                 MOV dword ptr [ECX],EAX
5f0033b7  8b4208               MOV EAX,dword ptr [EDX + 0x8]
5f0033ba  57                   PUSH EDI
5f0033bb  8b520c               MOV EDX,dword ptr [EDX + 0xc]
5f0033be  896904               MOV dword ptr [ECX + 0x4],EBP
5f0033c1  894108               MOV dword ptr [ECX + 0x8],EAX
5f0033c4  89510c               MOV dword ptr [ECX + 0xc],EDX
5f0033c7  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f0033cd  89442410             MOV dword ptr [ESP + 0x10],EAX
5f0033d1  85c0                 TEST EAX,EAX
5f0033d3  740c                 JZ 0x5f0033e1
5f0033d5  50                   PUSH EAX
5f0033d6  56                   PUSH ESI
5f0033d7  ff15c4d1005f         CALL dword ptr [0x5f00d1c4]
5f0033dd  89442410             MOV dword ptr [ESP + 0x10],EAX
5f0033e1  6a0f                 PUSH 0xf
5f0033e3  8b2d7cd2005f         MOV EBP,dword ptr [0x5f00d27c]
5f0033e9  ffd5                 CALL EBP
5f0033eb  50                   PUSH EAX
5f0033ec  56                   PUSH ESI
5f0033ed  ff15bcd1005f         CALL dword ptr [0x5f00d1bc]
5f0033f3  6a12                 PUSH 0x12
5f0033f5  ffd5                 CALL EBP
5f0033f7  50                   PUSH EAX
5f0033f8  56                   PUSH ESI
5f0033f9  ff15c0d1005f         CALL dword ptr [0x5f00d1c0]
5f0033ff  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
5f003403  57                   PUSH EDI
5f003404  56                   PUSH ESI
5f003405  6835010000           PUSH 0x135
5f00340a  50                   PUSH EAX
5f00340b  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f003411  50                   PUSH EAX
5f003412  56                   PUSH ESI
5f003413  ff15c4d1005f         CALL dword ptr [0x5f00d1c4]
5f003419  8b4c243c             MOV ECX,dword ptr [ESP + 0x3c]
5f00341d  8b542438             MOV EDX,dword ptr [ESP + 0x38]
5f003421  8944242c             MOV dword ptr [ESP + 0x2c],EAX
5f003425  8b442440             MOV EAX,dword ptr [ESP + 0x40]
5f003429  50                   PUSH EAX
5f00342a  8b2db8d1005f         MOV EBP,dword ptr [0x5f00d1b8]
5f003430  8b442438             MOV EAX,dword ptr [ESP + 0x38]
5f003434  51                   PUSH ECX
5f003435  52                   PUSH EDX
5f003436  50                   PUSH EAX
5f003437  56                   PUSH ESI
5f003438  ffd5                 CALL EBP
5f00343a  8bac2470010000       MOV EBP,dword ptr [ESP + 0x170]
5f003441  f7c510000000         TEST EBP,0x10
5f003447  742d                 JZ 0x5f003476
5f003449  83fb07               CMP EBX,0x7
5f00344c  7428                 JZ 0x5f003476
5f00344e  8b442440             MOV EAX,dword ptr [ESP + 0x40]
5f003452  682100f000           PUSH 0xf00021
5f003457  2b44243c             SUB EAX,dword ptr [ESP + 0x3c]
5f00345b  8b4c243c             MOV ECX,dword ptr [ESP + 0x3c]
5f00345f  8b542438             MOV EDX,dword ptr [ESP + 0x38]
5f003463  50                   PUSH EAX
5f003464  8b442444             MOV EAX,dword ptr [ESP + 0x44]
5f003468  2b44243c             SUB EAX,dword ptr [ESP + 0x3c]
5f00346c  50                   PUSH EAX
5f00346d  51                   PUSH ECX
5f00346e  52                   PUSH EDX
5f00346f  56                   PUSH ESI
5f003470  ff15b0d1005f         CALL dword ptr [0x5f00d1b0]
5f003476  57                   PUSH EDI
5f003477  ff159cd2005f         CALL dword ptr [0x5f00d29c]
5f00347d  89442428             MOV dword ptr [ESP + 0x28],EAX
5f003481  6a00                 PUSH 0x0
5f003483  6a00                 PUSH 0x0
5f003485  68f2000000           PUSH 0xf2
5f00348a  57                   PUSH EDI
5f00348b  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f003491  c744241800000000     MOV dword ptr [ESP + 0x18],0x0
5f003499  8bc8                 MOV ECX,EAX
5f00349b  83e103               AND ECX,0x3
5f00349e  894c2430             MOV dword ptr [ESP + 0x30],ECX
5f0034a2  83f901               CMP ECX,0x1
5f0034a5  1bc9                 SBB ECX,ECX
5f0034a7  83e004               AND EAX,0x4
5f0034aa  41                   INC ECX
5f0034ab  89442454             MOV dword ptr [ESP + 0x54],EAX
5f0034af  c1f801               SAR EAX,0x1
5f0034b2  0bc1                 OR EAX,ECX
5f0034b4  8bd0                 MOV EDX,EAX
5f0034b6  c1e003               SHL EAX,0x3
5f0034b9  2bc2                 SUB EAX,EDX
5f0034bb  03c0                 ADD EAX,EAX
5f0034bd  837c242800           CMP dword ptr [ESP + 0x28],0x0
5f0034c2  89442414             MOV dword ptr [ESP + 0x14],EAX
5f0034c6  7515                 JNZ 0x5f0034dd
5f0034c8  83c102               ADD ECX,0x2
5f0034cb  8bc1                 MOV EAX,ECX
5f0034cd  c1e103               SHL ECX,0x3
5f0034d0  2bc8                 SUB ECX,EAX
5f0034d2  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f0034d6  8d1448               LEA EDX,[EAX + ECX*0x2]
5f0034d9  89542414             MOV dword ptr [ESP + 0x14],EDX
5f0034dd  f7c50a000000         TEST EBP,0xa
5f0034e3  7509                 JNZ 0x5f0034ee
5f0034e5  85db                 TEST EBX,EBX
5f0034e7  7405                 JZ 0x5f0034ee
5f0034e9  83fb01               CMP EBX,0x1
5f0034ec  7515                 JNZ 0x5f003503
5f0034ee  8d442464             LEA EAX,[ESP + 0x64]
5f0034f2  6800010000           PUSH 0x100
5f0034f7  50                   PUSH EAX
5f0034f8  57                   PUSH EDI
5f0034f9  ff1548d2005f         CALL dword ptr [0x5f00d248]
5f0034ff  89442424             MOV dword ptr [ESP + 0x24],EAX
5f003503  83fb09               CMP EBX,0x9
5f003506  0f8739030000         JA 0x5f003845
switchD_5f00350c::switchD:
5f00350c  ff249d7038005f       JMP dword ptr [EBX*0x4 + 0x5f003870]
switchD_5f00350c::caseD_0:
5f003513  8b442454             MOV EAX,dword ptr [ESP + 0x54]
5f003517  8b4c2424             MOV ECX,dword ptr [ESP + 0x24]
5f00351b  8d542464             LEA EDX,[ESP + 0x64]
5f00351f  50                   PUSH EAX
5f003520  8d442448             LEA EAX,[ESP + 0x48]
5f003524  53                   PUSH EBX
5f003525  51                   PUSH ECX
5f003526  52                   PUSH EDX
5f003527  50                   PUSH EAX
5f003528  56                   PUSH ESI
5f003529  57                   PUSH EDI
5f00352a  e8e1faffff           CALL 0x5f003010
5f00352f  83c41c               ADD ESP,0x1c
5f003532  e90e030000           JMP 0x5f003845
switchD_5f00350c::caseD_4:
5f003537  c74424180d000000     MOV dword ptr [ESP + 0x18],0xd
switchD_5f00350c::caseD_2:
5f00353f  f7c504000000         TEST EBP,0x4
5f003545  0f840c020000         JZ 0x5f003757
5f00354b  56                   PUSH ESI
5f00354c  ff15d8d1005f         CALL dword ptr [0x5f00d1d8]
5f003552  8bf8                 MOV EDI,EAX
5f003554  85ff                 TEST EDI,EDI
5f003556  0f84fb010000         JZ 0x5f003757
5f00355c  a18051005f           MOV EAX,[0x5f005180]
5f003561  50                   PUSH EAX
5f003562  57                   PUSH EDI
5f003563  ff15c4d1005f         CALL dword ptr [0x5f00d1c4]
5f003569  8bd8                 MOV EBX,EAX
5f00356b  85db                 TEST EBX,EBX
5f00356d  0f84dd010000         JZ 0x5f003750
5f003573  8b442418             MOV EAX,dword ptr [ESP + 0x18]
5f003577  682000cc00           PUSH 0xcc0020
5f00357c  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
5f003580  50                   PUSH EAX
5f003581  8b442448             MOV EAX,dword ptr [ESP + 0x48]
5f003585  51                   PUSH ECX
5f003586  837c242c00           CMP dword ptr [ESP + 0x2c],0x0
5f00358b  57                   PUSH EDI
5f00358c  6a0d                 PUSH 0xd
5f00358e  6a0e                 PUSH 0xe
5f003590  0f8492010000         JZ 0x5f003728
5f003596  2b442450             SUB EAX,dword ptr [ESP + 0x50]
5f00359a  8b4c2450             MOV ECX,dword ptr [ESP + 0x50]
5f00359e  83e80d               SUB EAX,0xd
5f0035a1  99                   CDQ
5f0035a2  2bc2                 SUB EAX,EDX
5f0035a4  c1f801               SAR EAX,0x1
5f0035a7  03c8                 ADD ECX,EAX
5f0035a9  8b442454             MOV EAX,dword ptr [ESP + 0x54]
5f0035ad  51                   PUSH ECX
5f0035ae  83e80e               SUB EAX,0xe
5f0035b1  e98a010000           JMP 0x5f003740
switchD_5f00350c::caseD_5:
5f0035b6  837c243002           CMP dword ptr [ESP + 0x30],0x2
5f0035bb  7582                 JNZ 0x5f00353f
5f0035bd  c74424181a000000     MOV dword ptr [ESP + 0x18],0x1a
5f0035c5  e975ffffff           JMP 0x5f00353f
switchD_5f00350c::caseD_7:
5f0035ca  f7c506000000         TEST EBP,0x6
5f0035d0  0f846f020000         JZ 0x5f003845
5f0035d6  8d442420             LEA EAX,[ESP + 0x20]
5f0035da  8d4c2430             LEA ECX,[ESP + 0x30]
5f0035de  8d542464             LEA EDX,[ESP + 0x64]
5f0035e2  50                   PUSH EAX
5f0035e3  51                   PUSH ECX
5f0035e4  52                   PUSH EDX
5f0035e5  56                   PUSH ESI
5f0035e6  e835dfffff           CALL 0x5f001520
5f0035eb  83c410               ADD ESP,0x10
5f0035ee  837c242000           CMP dword ptr [ESP + 0x20],0x0
5f0035f3  7518                 JNZ 0x5f00360d
5f0035f5  8d442420             LEA EAX,[ESP + 0x20]
5f0035f9  8d4c2454             LEA ECX,[ESP + 0x54]
5f0035fd  50                   PUSH EAX
5f0035fe  51                   PUSH ECX
5f0035ff  68c4c1005f           PUSH 0x5f00c1c4
5f003604  56                   PUSH ESI
5f003605  e816dfffff           CALL 0x5f001520
5f00360a  83c410               ADD ESP,0x10
5f00360d  8344243404           ADD dword ptr [ESP + 0x34],0x4
5f003612  8b442434             MOV EAX,dword ptr [ESP + 0x34]
5f003616  03442430             ADD EAX,dword ptr [ESP + 0x30]
5f00361a  83c004               ADD EAX,0x4
5f00361d  8944243c             MOV dword ptr [ESP + 0x3c],EAX
5f003621  8b442438             MOV EAX,dword ptr [ESP + 0x38]
5f003625  03442420             ADD EAX,dword ptr [ESP + 0x20]
5f003629  f7c520000000         TEST EBP,0x20
5f00362f  89442440             MOV dword ptr [ESP + 0x40],EAX
5f003633  7475                 JZ 0x5f0036aa
5f003635  8b5c2438             MOV EBX,dword ptr [ESP + 0x38]
5f003639  8b6c243c             MOV EBP,dword ptr [ESP + 0x3c]
5f00363d  8d4c2434             LEA ECX,[ESP + 0x34]
5f003641  8d542454             LEA EDX,[ESP + 0x54]
5f003645  8b01                 MOV EAX,dword ptr [ECX]
5f003647  8902                 MOV dword ptr [EDX],EAX
5f003649  8b410c               MOV EAX,dword ptr [ECX + 0xc]
5f00364c  8b4c244c             MOV ECX,dword ptr [ESP + 0x4c]
5f003650  52                   PUSH EDX
5f003651  57                   PUSH EDI
5f003652  8b35a0d2005f         MOV ESI,dword ptr [0x5f00d2a0]
5f003658  895a04               MOV dword ptr [EDX + 0x4],EBX
5f00365b  896a08               MOV dword ptr [EDX + 0x8],EBP
5f00365e  89420c               MOV dword ptr [EDX + 0xc],EAX
5f003661  894c2464             MOV dword ptr [ESP + 0x64],ECX
5f003665  ffd6                 CALL ESI
5f003667  8d4c245c             LEA ECX,[ESP + 0x5c]
5f00366b  51                   PUSH ECX
5f00366c  57                   PUSH EDI
5f00366d  ffd6                 CALL ESI
5f00366f  8d442454             LEA EAX,[ESP + 0x54]
5f003673  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
5f003677  50                   PUSH EAX
5f003678  8b3584d2005f         MOV ESI,dword ptr [0x5f00d284]
5f00367e  51                   PUSH ECX
5f00367f  ffd6                 CALL ESI
5f003681  8d4c245c             LEA ECX,[ESP + 0x5c]
5f003685  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
5f003689  51                   PUSH ECX
5f00368a  50                   PUSH EAX
5f00368b  ffd6                 CALL ESI
5f00368d  8d4c2454             LEA ECX,[ESP + 0x54]
5f003691  6a01                 PUSH 0x1
5f003693  8b542420             MOV EDX,dword ptr [ESP + 0x20]
5f003697  51                   PUSH ECX
5f003698  52                   PUSH EDX
5f003699  ff1580d2005f         CALL dword ptr [0x5f00d280]
5f00369f  5d                   POP EBP
5f0036a0  5f                   POP EDI
5f0036a1  5e                   POP ESI
5f0036a2  5b                   POP EBX
5f0036a3  81c454010000         ADD ESP,0x154
5f0036a9  c3                   RET
5f0036aa  8b442420             MOV EAX,dword ptr [ESP + 0x20]
5f0036ae  ff4c244c             DEC dword ptr [ESP + 0x4c]
5f0036b2  ff4c2450             DEC dword ptr [ESP + 0x50]
5f0036b6  6a0f                 PUSH 0xf
5f0036b8  99                   CDQ
5f0036b9  2bc2                 SUB EAX,EDX
5f0036bb  6a02                 PUSH 0x2
5f0036bd  c1f801               SAR EAX,0x1
5f0036c0  6a02                 PUSH 0x2
5f0036c2  01442454             ADD dword ptr [ESP + 0x54],EAX
5f0036c6  8d442450             LEA EAX,[ESP + 0x50]
5f0036ca  50                   PUSH EAX
5f0036cb  56                   PUSH ESI
5f0036cc  e85fdcffff           CALL 0x5f001330
5f0036d1  8d442458             LEA EAX,[ESP + 0x58]
5f0036d5  83c414               ADD ESP,0x14
5f0036d8  6a01                 PUSH 0x1
5f0036da  6a01                 PUSH 0x1
5f0036dc  50                   PUSH EAX
5f0036dd  ff154cd2005f         CALL dword ptr [0x5f00d24c]
5f0036e3  8d4c2444             LEA ECX,[ESP + 0x44]
5f0036e7  6a0f                 PUSH 0xf
5f0036e9  6a00                 PUSH 0x0
5f0036eb  6a00                 PUSH 0x0
5f0036ed  51                   PUSH ECX
5f0036ee  56                   PUSH ESI
5f0036ef  e83cdcffff           CALL 0x5f001330
5f0036f4  83c414               ADD ESP,0x14
5f0036f7  837c242800           CMP dword ptr [ESP + 0x28],0x0
5f0036fc  750d                 JNZ 0x5f00370b
5f0036fe  a16c51005f           MOV EAX,[0x5f00516c]
5f003703  50                   PUSH EAX
5f003704  56                   PUSH ESI
5f003705  ff15c0d1005f         CALL dword ptr [0x5f00d1c0]
5f00370b  8d442434             LEA EAX,[ESP + 0x34]
5f00370f  6a20                 PUSH 0x20
5f003711  8b4c2428             MOV ECX,dword ptr [ESP + 0x28]
5f003715  50                   PUSH EAX
5f003716  8d54246c             LEA EDX,[ESP + 0x6c]
5f00371a  51                   PUSH ECX
5f00371b  52                   PUSH EDX
5f00371c  56                   PUSH ESI
5f00371d  ff1598d2005f         CALL dword ptr [0x5f00d298]
5f003723  e91d010000           JMP 0x5f003845
5f003728  2b442450             SUB EAX,dword ptr [ESP + 0x50]
5f00372c  8b4c2450             MOV ECX,dword ptr [ESP + 0x50]
5f003730  83e80d               SUB EAX,0xd
5f003733  99                   CDQ
5f003734  2bc2                 SUB EAX,EDX
5f003736  c1f801               SAR EAX,0x1
5f003739  03c8                 ADD ECX,EAX
5f00373b  8b44244c             MOV EAX,dword ptr [ESP + 0x4c]
5f00373f  51                   PUSH ECX
5f003740  50                   PUSH EAX
5f003741  56                   PUSH ESI
5f003742  ff15e0d1005f         CALL dword ptr [0x5f00d1e0]
5f003748  53                   PUSH EBX
5f003749  57                   PUSH EDI
5f00374a  ff15c4d1005f         CALL dword ptr [0x5f00d1c4]
5f003750  57                   PUSH EDI
5f003751  ff15d0d1005f         CALL dword ptr [0x5f00d1d0]
5f003757  f7c502000000         TEST EBP,0x2
5f00375d  744b                 JZ 0x5f0037aa
5f00375f  837c242000           CMP dword ptr [ESP + 0x20],0x0
5f003764  740d                 JZ 0x5f003773
5f003766  8b44244c             MOV EAX,dword ptr [ESP + 0x4c]
5f00376a  83e812               SUB EAX,0x12
5f00376d  8944243c             MOV dword ptr [ESP + 0x3c],EAX
5f003771  eb0b                 JMP 0x5f00377e
5f003773  8b442444             MOV EAX,dword ptr [ESP + 0x44]
5f003777  83c012               ADD EAX,0x12
5f00377a  89442434             MOV dword ptr [ESP + 0x34],EAX
5f00377e  837c242800           CMP dword ptr [ESP + 0x28],0x0
5f003783  750d                 JNZ 0x5f003792
5f003785  a16c51005f           MOV EAX,[0x5f00516c]
5f00378a  50                   PUSH EAX
5f00378b  56                   PUSH ESI
5f00378c  ff15c0d1005f         CALL dword ptr [0x5f00d1c0]
5f003792  8d442434             LEA EAX,[ESP + 0x34]
5f003796  6a24                 PUSH 0x24
5f003798  8b4c2428             MOV ECX,dword ptr [ESP + 0x28]
5f00379c  50                   PUSH EAX
5f00379d  8d54246c             LEA EDX,[ESP + 0x6c]
5f0037a1  51                   PUSH ECX
5f0037a2  52                   PUSH EDX
5f0037a3  56                   PUSH ESI
5f0037a4  ff1598d2005f         CALL dword ptr [0x5f00d298]
5f0037aa  f7c508000000         TEST EBP,0x8
5f0037b0  0f848f000000         JZ 0x5f003845
5f0037b6  8d442430             LEA EAX,[ESP + 0x30]
5f0037ba  8d4c2454             LEA ECX,[ESP + 0x54]
5f0037be  8d542464             LEA EDX,[ESP + 0x64]
5f0037c2  50                   PUSH EAX
5f0037c3  51                   PUSH ECX
5f0037c4  52                   PUSH EDX
5f0037c5  56                   PUSH ESI
5f0037c6  e855ddffff           CALL 0x5f001520
5f0037cb  8b442450             MOV EAX,dword ptr [ESP + 0x50]
5f0037cf  2b442440             SUB EAX,dword ptr [ESP + 0x40]
5f0037d3  2b442448             SUB EAX,dword ptr [ESP + 0x48]
5f0037d7  83c410               ADD ESP,0x10
5f0037da  99                   CDQ
5f0037db  2bc2                 SUB EAX,EDX
5f0037dd  c1f801               SAR EAX,0x1
5f0037e0  89442438             MOV dword ptr [ESP + 0x38],EAX
5f0037e4  03442430             ADD EAX,dword ptr [ESP + 0x30]
5f0037e8  837c242000           CMP dword ptr [ESP + 0x20],0x0
5f0037ed  89442440             MOV dword ptr [ESP + 0x40],EAX
5f0037f1  8b442444             MOV EAX,dword ptr [ESP + 0x44]
5f0037f5  740b                 JZ 0x5f003802
5f0037f7  836c244c12           SUB dword ptr [ESP + 0x4c],0x12
5f0037fc  89442434             MOV dword ptr [ESP + 0x34],EAX
5f003800  eb07                 JMP 0x5f003809
5f003802  83c012               ADD EAX,0x12
5f003805  89442434             MOV dword ptr [ESP + 0x34],EAX
5f003809  8b442434             MOV EAX,dword ptr [ESP + 0x34]
5f00380d  6a01                 PUSH 0x1
5f00380f  03442458             ADD EAX,dword ptr [ESP + 0x58]
5f003813  6a01                 PUSH 0x1
5f003815  8d4c243c             LEA ECX,[ESP + 0x3c]
5f003819  89442444             MOV dword ptr [ESP + 0x44],EAX
5f00381d  51                   PUSH ECX
5f00381e  ff1550d2005f         CALL dword ptr [0x5f00d250]
5f003824  8d4c2444             LEA ECX,[ESP + 0x44]
5f003828  8d442434             LEA EAX,[ESP + 0x34]
5f00382c  51                   PUSH ECX
5f00382d  50                   PUSH EAX
5f00382e  8d44243c             LEA EAX,[ESP + 0x3c]
5f003832  50                   PUSH EAX
5f003833  ff1590d2005f         CALL dword ptr [0x5f00d290]
5f003839  8d4c2434             LEA ECX,[ESP + 0x34]
5f00383d  51                   PUSH ECX
5f00383e  56                   PUSH ESI
5f00383f  ff158cd2005f         CALL dword ptr [0x5f00d28c]
switchD_5f00350c::caseD_8:
5f003845  8b44242c             MOV EAX,dword ptr [ESP + 0x2c]
5f003849  50                   PUSH EAX
5f00384a  56                   PUSH ESI
5f00384b  ff15c4d1005f         CALL dword ptr [0x5f00d1c4]
5f003851  837c241000           CMP dword ptr [ESP + 0x10],0x0
5f003856  740c                 JZ 0x5f003864
5f003858  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f00385c  50                   PUSH EAX
5f00385d  56                   PUSH ESI
5f00385e  ff15c4d1005f         CALL dword ptr [0x5f00d1c4]
5f003864  5d                   POP EBP
5f003865  5f                   POP EDI
5f003866  5e                   POP ESI
5f003867  5b                   POP EBX
5f003868  81c454010000         ADD ESP,0x154
5f00386e  c3                   RET
; undefined 1 bytes at 5f00386f
switchD_5f00350c::switchdataD_5f003870:
5f003870  addr 5f003513
5f003874  addr 5f003513
5f003878  addr 5f00353f
5f00387c  addr 5f00353f
5f003880  addr 5f003537
5f003884  addr 5f0035b6
5f003888  addr 5f0035b6
5f00388c  addr 5f0035ca
5f003890  addr 5f003845
5f003894  addr 5f003537
; undefined 8 bytes at 5f003898

; ==== FUNCTION BtnWndProc3d entry=5f0038a0 sig=LRESULT __stdcall BtnWndProc3d(HWND param_1, uint param_2, HDC param_3, undefined4 * param_4)
5f0038a0  83ec48               SUB ESP,0x48
5f0038a3  53                   PUSH EBX
5f0038a4  56                   PUSH ESI
5f0038a5  57                   PUSH EDI
5f0038a6  55                   PUSH EBP
5f0038a7  8b7c2460             MOV EDI,dword ptr [ESP + 0x60]
5f0038ab  81ff82000000         CMP EDI,0x82
5f0038b1  7524                 JNZ 0x5f0038d7
5f0038b3  8b442468             MOV EAX,dword ptr [ESP + 0x68]
5f0038b7  6a00                 PUSH 0x0
5f0038b9  8b5c2468             MOV EBX,dword ptr [ESP + 0x68]
5f0038bd  50                   PUSH EAX
5f0038be  8b742464             MOV ESI,dword ptr [ESP + 0x64]
5f0038c2  53                   PUSH EBX
5f0038c3  57                   PUSH EDI
5f0038c4  56                   PUSH ESI
5f0038c5  e886d9ffff           CALL 0x5f001250
5f0038ca  83c414               ADD ESP,0x14
5f0038cd  5d                   POP EBP
5f0038ce  5f                   POP EDI
5f0038cf  5e                   POP ESI
5f0038d0  5b                   POP EBX
5f0038d1  83c448               ADD ESP,0x48
5f0038d4  c21000               RET 0x10
5f0038d7  33c0                 XOR EAX,EAX
5f0038d9  8b74245c             MOV ESI,dword ptr [ESP + 0x5c]
5f0038dd  66a14451005f         MOV AX,[0x5f005144]
5f0038e3  50                   PUSH EAX
5f0038e4  56                   PUSH ESI
5f0038e5  ff15fcd2005f         CALL dword ptr [0x5f00d2fc]
5f0038eb  85c0                 TEST EAX,EAX
5f0038ed  742a                 JZ 0x5f003919
5f0038ef  8b442468             MOV EAX,dword ptr [ESP + 0x68]
5f0038f3  8b5c2464             MOV EBX,dword ptr [ESP + 0x64]
5f0038f7  50                   PUSH EAX
5f0038f8  53                   PUSH EBX
5f0038f9  57                   PUSH EDI
5f0038fa  56                   PUSH ESI
5f0038fb  6a00                 PUSH 0x0
5f0038fd  56                   PUSH ESI
5f0038fe  e81dd7ffff           CALL 0x5f001020
5f003903  83c408               ADD ESP,0x8
5f003906  8b2dd0d2005f         MOV EBP,dword ptr [0x5f00d2d0]
5f00390c  50                   PUSH EAX
5f00390d  ffd5                 CALL EBP
5f00390f  5d                   POP EBP
5f003910  5f                   POP EDI
5f003911  5e                   POP ESI
5f003912  5b                   POP EBX
5f003913  83c448               ADD ESP,0x48
5f003916  c21000               RET 0x10
5f003919  81fff1000000         CMP EDI,0xf1
5f00391f  8bc7                 MOV EAX,EDI
5f003921  7715                 JA 0x5f003938
5f003923  0f841d010000         JZ 0x5f003a46
5f003929  83e807               SUB EAX,0x7
5f00392c  83f808               CMP EAX,0x8
5f00392f  7724                 JA 0x5f003955
switchD_5f003931::switchD:
5f003931  ff2485503b005f       JMP dword ptr [EAX*0x4 + 0x5f003b50]
5f003938  3df3000000           CMP EAX,0xf3
5f00393d  0f8403010000         JZ 0x5f003a46
5f003943  3d43190000           CMP EAX,0x1943
5f003948  720b                 JC 0x5f003955
5f00394a  3d44190000           CMP EAX,0x1944
5f00394f  0f86e0010000         JBE 0x5f003b35
switchD_5f003931::caseD_9:
5f003955  8b442468             MOV EAX,dword ptr [ESP + 0x68]
5f003959  8b5c2464             MOV EBX,dword ptr [ESP + 0x64]
5f00395d  50                   PUSH EAX
5f00395e  53                   PUSH EBX
5f00395f  57                   PUSH EDI
5f003960  56                   PUSH ESI
5f003961  6a00                 PUSH 0x0
5f003963  56                   PUSH ESI
5f003964  e8b7d6ffff           CALL 0x5f001020
5f003969  83c408               ADD ESP,0x8
5f00396c  8b2dd0d2005f         MOV EBP,dword ptr [0x5f00d2d0]
5f003972  50                   PUSH EAX
5f003973  ffd5                 CALL EBP
5f003975  5d                   POP EBP
5f003976  5f                   POP EDI
5f003977  5e                   POP ESI
5f003978  5b                   POP EBX
5f003979  83c448               ADD ESP,0x48
5f00397c  c21000               RET 0x10
switchD_5f003931::caseD_7:
5f00397f  bd16000000           MOV EBP,0x16
5f003984  e9c2000000           JMP 0x5f003a4b
switchD_5f003931::caseD_8:
5f003989  6af0                 PUSH -0x10
5f00398b  56                   PUSH ESI
5f00398c  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f003992  241f                 AND AL,0x1f
5f003994  3c09                 CMP AL,0x9
5f003996  7510                 JNZ 0x5f0039a8
5f003998  6a00                 PUSH 0x0
5f00399a  6a00                 PUSH 0x0
5f00399c  68f3000000           PUSH 0xf3
5f0039a1  56                   PUSH ESI
5f0039a2  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f0039a8  33ed                 XOR EBP,EBP
5f0039aa  e99c000000           JMP 0x5f003a4b
switchD_5f003931::caseD_a:
5f0039af  bd06000000           MOV EBP,0x6
5f0039b4  e992000000           JMP 0x5f003a4b
switchD_5f003931::caseD_c:
5f0039b9  6af0                 PUSH -0x10
5f0039bb  56                   PUSH ESI
5f0039bc  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f0039c2  a900000010           TEST EAX,0x10000000
5f0039c7  740d                 JZ 0x5f0039d6
5f0039c9  241f                 AND AL,0x1f
5f0039cb  3c07                 CMP AL,0x7
5f0039cd  7507                 JNZ 0x5f0039d6
5f0039cf  bd22000000           MOV EBP,0x22
5f0039d4  eb75                 JMP 0x5f003a4b
5f0039d6  bd16000000           MOV EBP,0x16
5f0039db  eb6e                 JMP 0x5f003a4b
switchD_5f003931::caseD_f:
5f0039dd  6a00                 PUSH 0x0
5f0039df  6a00                 PUSH 0x0
5f0039e1  68f2000000           PUSH 0xf2
5f0039e6  56                   PUSH ESI
5f0039e7  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f0039ed  8bf8                 MOV EDI,EAX
5f0039ef  8b5c2464             MOV EBX,dword ptr [ESP + 0x64]
5f0039f3  8beb                 MOV EBP,EBX
5f0039f5  85ed                 TEST EBP,EBP
5f0039f7  7510                 JNZ 0x5f003a09
5f0039f9  8d442418             LEA EAX,[ESP + 0x18]
5f0039fd  8b2db0d2005f         MOV EBP,dword ptr [0x5f00d2b0]
5f003a03  50                   PUSH EAX
5f003a04  56                   PUSH ESI
5f003a05  ffd5                 CALL EBP
5f003a07  8be8                 MOV EBP,EAX
5f003a09  6af0                 PUSH -0x10
5f003a0b  56                   PUSH ESI
5f003a0c  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f003a12  a900000010           TEST EAX,0x10000000
5f003a17  7411                 JZ 0x5f003a2a
5f003a19  83e708               AND EDI,0x8
5f003a1c  83cf06               OR EDI,0x6
5f003a1f  57                   PUSH EDI
5f003a20  55                   PUSH EBP
5f003a21  56                   PUSH ESI
5f003a22  e829f9ffff           CALL 0x5f003350
5f003a27  83c40c               ADD ESP,0xc
5f003a2a  85db                 TEST EBX,EBX
5f003a2c  750c                 JNZ 0x5f003a3a
5f003a2e  8d442418             LEA EAX,[ESP + 0x18]
5f003a32  50                   PUSH EAX
5f003a33  56                   PUSH ESI
5f003a34  ff15acd2005f         CALL dword ptr [0x5f00d2ac]
5f003a3a  33c0                 XOR EAX,EAX
5f003a3c  5d                   POP EBP
5f003a3d  5f                   POP EDI
5f003a3e  5e                   POP ESI
5f003a3f  5b                   POP EBX
5f003a40  83c448               ADD ESP,0x48
5f003a43  c21000               RET 0x10
5f003a46  bd04000000           MOV EBP,0x4
5f003a4b  6a00                 PUSH 0x0
5f003a4d  6a00                 PUSH 0x0
5f003a4f  68f2000000           PUSH 0xf2
5f003a54  56                   PUSH ESI
5f003a55  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f003a5b  89442410             MOV dword ptr [ESP + 0x10],EAX
5f003a5f  6af0                 PUSH -0x10
5f003a61  56                   PUSH ESI
5f003a62  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f003a68  a900000010           TEST EAX,0x10000000
5f003a6d  0f84e2feffff         JZ 0x5f003955
5f003a73  83ff07               CMP EDI,0x7
5f003a76  740f                 JZ 0x5f003a87
5f003a78  25ffffffef           AND EAX,0xefffffff
5f003a7d  50                   PUSH EAX
5f003a7e  6af0                 PUSH -0x10
5f003a80  56                   PUSH ESI
5f003a81  ff15f4d2005f         CALL dword ptr [0x5f00d2f4]
5f003a87  8b442468             MOV EAX,dword ptr [ESP + 0x68]
5f003a8b  8b5c2464             MOV EBX,dword ptr [ESP + 0x64]
5f003a8f  50                   PUSH EAX
5f003a90  53                   PUSH EBX
5f003a91  57                   PUSH EDI
5f003a92  56                   PUSH ESI
5f003a93  6a00                 PUSH 0x0
5f003a95  56                   PUSH ESI
5f003a96  e885d5ffff           CALL 0x5f001020
5f003a9b  83c408               ADD ESP,0x8
5f003a9e  50                   PUSH EAX
5f003a9f  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f003aa5  89442414             MOV dword ptr [ESP + 0x14],EAX
5f003aa9  83ff07               CMP EDI,0x7
5f003aac  7418                 JZ 0x5f003ac6
5f003aae  6af0                 PUSH -0x10
5f003ab0  56                   PUSH ESI
5f003ab1  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f003ab7  0d00000010           OR EAX,0x10000000
5f003abc  50                   PUSH EAX
5f003abd  6af0                 PUSH -0x10
5f003abf  56                   PUSH ESI
5f003ac0  ff15f4d2005f         CALL dword ptr [0x5f00d2f4]
5f003ac6  6a00                 PUSH 0x0
5f003ac8  6a00                 PUSH 0x0
5f003aca  68f2000000           PUSH 0xf2
5f003acf  56                   PUSH ESI
5f003ad0  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f003ad6  8bd8                 MOV EBX,EAX
5f003ad8  81fff3000000         CMP EDI,0xf3
5f003ade  7408                 JZ 0x5f003ae8
5f003ae0  81fff1000000         CMP EDI,0xf1
5f003ae6  7506                 JNZ 0x5f003aee
5f003ae8  3b5c2410             CMP EBX,dword ptr [ESP + 0x10]
5f003aec  7439                 JZ 0x5f003b27
5f003aee  56                   PUSH ESI
5f003aef  ff1570d2005f         CALL dword ptr [0x5f00d270]
5f003af5  8bf8                 MOV EDI,EAX
5f003af7  85ff                 TEST EDI,EDI
5f003af9  742c                 JZ 0x5f003b27
5f003afb  335c2410             XOR EBX,dword ptr [ESP + 0x10]
5f003aff  f6c303               TEST BL,0x3
5f003b02  7403                 JZ 0x5f003b07
5f003b04  83cd04               OR EBP,0x4
5f003b07  56                   PUSH ESI
5f003b08  83e308               AND EBX,0x8
5f003b0b  57                   PUSH EDI
5f003b0c  0bdd                 OR EBX,EBP
5f003b0e  ff15a8d2005f         CALL dword ptr [0x5f00d2a8]
5f003b14  53                   PUSH EBX
5f003b15  57                   PUSH EDI
5f003b16  56                   PUSH ESI
5f003b17  e834f8ffff           CALL 0x5f003350
5f003b1c  83c40c               ADD ESP,0xc
5f003b1f  57                   PUSH EDI
5f003b20  56                   PUSH ESI
5f003b21  ff15a4d2005f         CALL dword ptr [0x5f00d2a4]
5f003b27  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f003b2b  5d                   POP EBP
5f003b2c  5f                   POP EDI
5f003b2d  5e                   POP ESI
5f003b2e  5b                   POP EBX
5f003b2f  83c448               ADD ESP,0x48
5f003b32  c21000               RET 0x10
5f003b35  8b442468             MOV EAX,dword ptr [ESP + 0x68]
5f003b39  5d                   POP EBP
5f003b3a  5f                   POP EDI
5f003b3b  5e                   POP ESI
5f003b3c  5b                   POP EBX
5f003b3d  c70001000000         MOV dword ptr [EAX],0x1
5f003b43  b8e8030000           MOV EAX,0x3e8
5f003b48  83c448               ADD ESP,0x48
5f003b4b  c21000               RET 0x10

; ==== FUNCTION FUN_5f003b4e entry=5f003b4e sig=undefined __stdcall FUN_5f003b4e(void)
5f003b4e  8bff                 MOV EDI,EDI
switchD_5f003931::switchdataD_5f003b50:
5f003b50  addr 5f00397f
5f003b54  addr 5f003989
5f003b58  addr 5f003955
5f003b5c  addr 5f0039af
5f003b60  addr 5f003955
5f003b64  addr 5f0039b9
5f003b68  addr 5f003955
5f003b6c  addr 5f003955
5f003b70  addr 5f0039dd
; undefined 12 bytes at 5f003b74

; ==== FUNCTION FUN_5f003b80 entry=5f003b80 sig=undefined __cdecl FUN_5f003b80(HWND param_1, int param_2, int param_3)
5f003b80  83ec44               SUB ESP,0x44
5f003b83  53                   PUSH EBX
5f003b84  56                   PUSH ESI
5f003b85  8b742450             MOV ESI,dword ptr [ESP + 0x50]
5f003b89  57                   PUSH EDI
5f003b8a  55                   PUSH EBP
5f003b8b  6af0                 PUSH -0x10
5f003b8d  56                   PUSH ESI
5f003b8e  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f003b94  89442410             MOV dword ptr [ESP + 0x10],EAX
5f003b98  a900000010           TEST EAX,0x10000000
5f003b9d  0f840b030000         JZ 0x5f003eae
5f003ba3  837c246003           CMP dword ptr [ESP + 0x60],0x3
5f003ba8  751e                 JNZ 0x5f003bc8
5f003baa  2403                 AND AL,0x3
5f003bac  3c03                 CMP AL,0x3
5f003bae  7518                 JNZ 0x5f003bc8
5f003bb0  6a00                 PUSH 0x0
5f003bb2  6a00                 PUSH 0x0
5f003bb4  6857010000           PUSH 0x157
5f003bb9  56                   PUSH ESI
5f003bba  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f003bc0  85c0                 TEST EAX,EAX
5f003bc2  0f85e6020000         JNZ 0x5f003eae
5f003bc8  837c245c00           CMP dword ptr [ESP + 0x5c],0x0
5f003bcd  7407                 JZ 0x5f003bd6
5f003bcf  56                   PUSH ESI
5f003bd0  ff15bcd2005f         CALL dword ptr [0x5f00d2bc]
5f003bd6  8d442424             LEA EAX,[ESP + 0x24]
5f003bda  50                   PUSH EAX
5f003bdb  56                   PUSH ESI
5f003bdc  ff1554d2005f         CALL dword ptr [0x5f00d254]
5f003be2  56                   PUSH ESI
5f003be3  ff1558d2005f         CALL dword ptr [0x5f00d258]
5f003be9  8bf8                 MOV EDI,EAX
5f003beb  8b1d84d2005f         MOV EBX,dword ptr [0x5f00d284]
5f003bf1  8d442424             LEA EAX,[ESP + 0x24]
5f003bf5  50                   PUSH EAX
5f003bf6  57                   PUSH EDI
5f003bf7  ffd3                 CALL EBX
5f003bf9  8d4c242c             LEA ECX,[ESP + 0x2c]
5f003bfd  66bd0f00             MOV BP,0xf
5f003c01  51                   PUSH ECX
5f003c02  57                   PUSH EDI
5f003c03  ffd3                 CALL EBX
5f003c05  57                   PUSH EDI
5f003c06  ff1570d2005f         CALL dword ptr [0x5f00d270]
5f003c0c  8bd8                 MOV EBX,EAX
5f003c0e  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f003c12  2500001000           AND EAX,0x100000
5f003c17  8944241c             MOV dword ptr [ESP + 0x1c],EAX
5f003c1b  7404                 JZ 0x5f003c21
5f003c1d  66bd0700             MOV BP,0x7
5f003c21  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f003c25  2500002000           AND EAX,0x200000
5f003c2a  89442420             MOV dword ptr [ESP + 0x20],EAX
5f003c2e  7405                 JZ 0x5f003c35
5f003c30  6681e5fbff           AND BP,0xfffb
5f003c35  6af4                 PUSH -0xc
5f003c37  56                   PUSH ESI
5f003c38  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f003c3e  8b4c245c             MOV ECX,dword ptr [ESP + 0x5c]
5f003c42  2bc8                 SUB ECX,EAX
5f003c44  81f918fcffff         CMP ECX,0xfffffc18
5f003c4a  0f8552010000         JNZ 0x5f003da2
5f003c50  c74424189a020000     MOV dword ptr [ESP + 0x18],0x29a
5f003c58  8d442418             LEA EAX,[ESP + 0x18]
5f003c5c  50                   PUSH EAX
5f003c5d  6a00                 PUSH 0x0
5f003c5f  6844190000           PUSH 0x1944
5f003c64  57                   PUSH EDI
5f003c65  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f003c6b  817c24189a020000     CMP dword ptr [ESP + 0x18],0x29a
5f003c73  89442434             MOV dword ptr [ESP + 0x34],EAX
5f003c77  7517                 JNZ 0x5f003c90
5f003c79  8d442418             LEA EAX,[ESP + 0x18]
5f003c7d  50                   PUSH EAX
5f003c7e  6a00                 PUSH 0x0
5f003c80  6843190000           PUSH 0x1943
5f003c85  57                   PUSH EDI
5f003c86  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f003c8c  89442434             MOV dword ptr [ESP + 0x34],EAX
5f003c90  8d442444             LEA EAX,[ESP + 0x44]
5f003c94  6a10                 PUSH 0x10
5f003c96  50                   PUSH EAX
5f003c97  57                   PUSH EDI
5f003c98  ff15f0d2005f         CALL dword ptr [0x5f00d2f0]
5f003c9e  8d4c2444             LEA ECX,[ESP + 0x44]
5f003ca2  6898b0005f           PUSH 0x5f00b098
5f003ca7  51                   PUSH ECX
5f003ca8  ff15f0d1005f         CALL dword ptr [0x5f00d1f0]
5f003cae  85c0                 TEST EAX,EAX
5f003cb0  7419                 JZ 0x5f003ccb
5f003cb2  837c241801           CMP dword ptr [ESP + 0x18],0x1
5f003cb7  0f85e5000000         JNZ 0x5f003da2
5f003cbd  817c2434eb030000     CMP dword ptr [ESP + 0x34],0x3eb
5f003cc5  0f85d7000000         JNZ 0x5f003da2
5f003ccb  57                   PUSH EDI
5f003ccc  ff1558d2005f         CALL dword ptr [0x5f00d258]
5f003cd2  89442414             MOV dword ptr [ESP + 0x14],EAX
5f003cd6  6a02                 PUSH 0x2
5f003cd8  8d442428             LEA EAX,[ESP + 0x28]
5f003cdc  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
5f003ce0  50                   PUSH EAX
5f003ce1  51                   PUSH ECX
5f003ce2  57                   PUSH EDI
5f003ce3  ff15b8d2005f         CALL dword ptr [0x5f00d2b8]
5f003ce9  53                   PUSH EBX
5f003cea  57                   PUSH EDI
5f003ceb  ff15a4d2005f         CALL dword ptr [0x5f00d2a4]
5f003cf1  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
5f003cf5  51                   PUSH ECX
5f003cf6  ff1570d2005f         CALL dword ptr [0x5f00d270]
5f003cfc  837c245c00           CMP dword ptr [ESP + 0x5c],0x0
5f003d01  8bd8                 MOV EBX,EAX
5f003d03  0f848c000000         JZ 0x5f003d95
5f003d09  6af0                 PUSH -0x10
5f003d0b  57                   PUSH EDI
5f003d0c  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f003d12  83e003               AND EAX,0x3
5f003d15  83f802               CMP EAX,0x2
5f003d18  744c                 JZ 0x5f003d66
5f003d1a  83f803               CMP EAX,0x3
5f003d1d  7447                 JZ 0x5f003d66
5f003d1f  6681e5f7ff           AND BP,0xfff7
5f003d24  6a05                 PUSH 0x5
5f003d26  57                   PUSH EDI
5f003d27  ff15c4d2005f         CALL dword ptr [0x5f00d2c4]
5f003d2d  8d4c2434             LEA ECX,[ESP + 0x34]
5f003d31  51                   PUSH ECX
5f003d32  50                   PUSH EAX
5f003d33  ff1554d2005f         CALL dword ptr [0x5f00d254]
5f003d39  8b442434             MOV EAX,dword ptr [ESP + 0x34]
5f003d3d  6808100000           PUSH 0x1008
5f003d42  2b442440             SUB EAX,dword ptr [ESP + 0x40]
5f003d46  8d4c2428             LEA ECX,[ESP + 0x28]
5f003d4a  01442430             ADD dword ptr [ESP + 0x30],EAX
5f003d4e  51                   PUSH ECX
5f003d4f  53                   PUSH EBX
5f003d50  e81bd7ffff           CALL 0x5f001470
5f003d55  8b442448             MOV EAX,dword ptr [ESP + 0x48]
5f003d59  2b442440             SUB EAX,dword ptr [ESP + 0x40]
5f003d5d  01442438             ADD dword ptr [ESP + 0x38],EAX
5f003d61  83c40c               ADD ESP,0xc
5f003d64  eb38                 JMP 0x5f003d9e
5f003d66  6a00                 PUSH 0x0
5f003d68  6a00                 PUSH 0x0
5f003d6a  6857010000           PUSH 0x157
5f003d6f  57                   PUSH EDI
5f003d70  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f003d76  85c0                 TEST EAX,EAX
5f003d78  7424                 JZ 0x5f003d9e
5f003d7a  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f003d7e  53                   PUSH EBX
5f003d7f  50                   PUSH EAX
5f003d80  ff15a4d2005f         CALL dword ptr [0x5f00d2a4]
5f003d86  56                   PUSH ESI
5f003d87  ff15b4d2005f         CALL dword ptr [0x5f00d2b4]
5f003d8d  5d                   POP EBP
5f003d8e  5f                   POP EDI
5f003d8f  5e                   POP ESI
5f003d90  5b                   POP EBX
5f003d91  83c444               ADD ESP,0x44
5f003d94  c3                   RET
5f003d95  6681e5fdff           AND BP,0xfffd
5f003d9a  ff442428             INC dword ptr [ESP + 0x28]
5f003d9e  8b7c2414             MOV EDI,dword ptr [ESP + 0x14]
5f003da2  8d442424             LEA EAX,[ESP + 0x24]
5f003da6  55                   PUSH EBP
5f003da7  50                   PUSH EAX
5f003da8  53                   PUSH EBX
5f003da9  e8c2d6ffff           CALL 0x5f001470
5f003dae  83c40c               ADD ESP,0xc
5f003db1  837c246003           CMP dword ptr [ESP + 0x60],0x3
5f003db6  753e                 JNZ 0x5f003df6
5f003db8  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f003dbc  2403                 AND AL,0x3
5f003dbe  3c03                 CMP AL,0x3
5f003dc0  7534                 JNZ 0x5f003df6
5f003dc2  8b6c242c             MOV EBP,dword ptr [ESP + 0x2c]
5f003dc6  6a02                 PUSH 0x2
5f003dc8  ff156cd2005f         CALL dword ptr [0x5f00d26c]
5f003dce  2be8                 SUB EBP,EAX
5f003dd0  6a0c                 PUSH 0xc
5f003dd2  8d442428             LEA EAX,[ESP + 0x28]
5f003dd6  6a07                 PUSH 0x7
5f003dd8  896c242c             MOV dword ptr [ESP + 0x2c],EBP
5f003ddc  6a07                 PUSH 0x7
5f003dde  50                   PUSH EAX
5f003ddf  53                   PUSH EBX
5f003de0  e84bd5ffff           CALL 0x5f001330
5f003de5  83c414               ADD ESP,0x14
5f003de8  56                   PUSH ESI
5f003de9  e8b2f1ffff           CALL 0x5f002fa0
5f003dee  83c404               ADD ESP,0x4
5f003df1  e9a2000000           JMP 0x5f003e98
5f003df6  837c242000           CMP dword ptr [ESP + 0x20],0x0
5f003dfb  7452                 JZ 0x5f003e4f
5f003dfd  8d442424             LEA EAX,[ESP + 0x24]
5f003e01  6a04                 PUSH 0x4
5f003e03  ff442430             INC dword ptr [ESP + 0x30]
5f003e07  6a00                 PUSH 0x0
5f003e09  6a00                 PUSH 0x0
5f003e0b  50                   PUSH EAX
5f003e0c  53                   PUSH EBX
5f003e0d  e81ed5ffff           CALL 0x5f001330
5f003e12  8b442438             MOV EAX,dword ptr [ESP + 0x38]
5f003e16  ff4c2440             DEC dword ptr [ESP + 0x40]
5f003e1a  8b6c2440             MOV EBP,dword ptr [ESP + 0x40]
5f003e1e  89442458             MOV dword ptr [ESP + 0x58],EAX
5f003e22  83c414               ADD ESP,0x14
5f003e25  6a02                 PUSH 0x2
5f003e27  ff156cd2005f         CALL dword ptr [0x5f00d26c]
5f003e2d  2be8                 SUB EBP,EAX
5f003e2f  6a08                 PUSH 0x8
5f003e31  8d442428             LEA EAX,[ESP + 0x28]
5f003e35  6a07                 PUSH 0x7
5f003e37  896c242c             MOV dword ptr [ESP + 0x2c],EBP
5f003e3b  6a07                 PUSH 0x7
5f003e3d  50                   PUSH EAX
5f003e3e  53                   PUSH EBX
5f003e3f  e8ecd4ffff           CALL 0x5f001330
5f003e44  8b442458             MOV EAX,dword ptr [ESP + 0x58]
5f003e48  89442438             MOV dword ptr [ESP + 0x38],EAX
5f003e4c  83c414               ADD ESP,0x14
5f003e4f  837c241c00           CMP dword ptr [ESP + 0x1c],0x0
5f003e54  7442                 JZ 0x5f003e98
5f003e56  8d442424             LEA EAX,[ESP + 0x24]
5f003e5a  6a08                 PUSH 0x8
5f003e5c  ff442434             INC dword ptr [ESP + 0x34]
5f003e60  6a00                 PUSH 0x0
5f003e62  6a00                 PUSH 0x0
5f003e64  50                   PUSH EAX
5f003e65  53                   PUSH EBX
5f003e66  e8c5d4ffff           CALL 0x5f001330
5f003e6b  ff4c2444             DEC dword ptr [ESP + 0x44]
5f003e6f  83c414               ADD ESP,0x14
5f003e72  8b6c2430             MOV EBP,dword ptr [ESP + 0x30]
5f003e76  6a15                 PUSH 0x15
5f003e78  ff156cd2005f         CALL dword ptr [0x5f00d26c]
5f003e7e  2be8                 SUB EBP,EAX
5f003e80  6a04                 PUSH 0x4
5f003e82  8d442428             LEA EAX,[ESP + 0x28]
5f003e86  6a07                 PUSH 0x7
5f003e88  896c2430             MOV dword ptr [ESP + 0x30],EBP
5f003e8c  6a07                 PUSH 0x7
5f003e8e  50                   PUSH EAX
5f003e8f  53                   PUSH EBX
5f003e90  e89bd4ffff           CALL 0x5f001330
5f003e95  83c414               ADD ESP,0x14
5f003e98  53                   PUSH EBX
5f003e99  57                   PUSH EDI
5f003e9a  ff15a4d2005f         CALL dword ptr [0x5f00d2a4]
5f003ea0  837c245c00           CMP dword ptr [ESP + 0x5c],0x0
5f003ea5  7407                 JZ 0x5f003eae
5f003ea7  56                   PUSH ESI
5f003ea8  ff15b4d2005f         CALL dword ptr [0x5f00d2b4]
5f003eae  5d                   POP EBP
5f003eaf  5f                   POP EDI
5f003eb0  5e                   POP ESI
5f003eb1  5b                   POP EBX
5f003eb2  83c444               ADD ESP,0x44
5f003eb5  c3                   RET
; undefined 10 bytes at 5f003eb6

; ==== FUNCTION FUN_5f003ec0 entry=5f003ec0 sig=uint __cdecl FUN_5f003ec0(HWND param_1, uint param_2, WPARAM param_3, undefined4 * param_4, int param_5)
5f003ec0  83ec04               SUB ESP,0x4
5f003ec3  53                   PUSH EBX
5f003ec4  56                   PUSH ESI
5f003ec5  57                   PUSH EDI
5f003ec6  55                   PUSH EBP
5f003ec7  8b7c241c             MOV EDI,dword ptr [ESP + 0x1c]
5f003ecb  81ff82000000         CMP EDI,0x82
5f003ed1  7525                 JNZ 0x5f003ef8
5f003ed3  8b5c2428             MOV EBX,dword ptr [ESP + 0x28]
5f003ed7  8b6c2424             MOV EBP,dword ptr [ESP + 0x24]
5f003edb  8b442420             MOV EAX,dword ptr [ESP + 0x20]
5f003edf  53                   PUSH EBX
5f003ee0  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
5f003ee4  55                   PUSH EBP
5f003ee5  50                   PUSH EAX
5f003ee6  57                   PUSH EDI
5f003ee7  56                   PUSH ESI
5f003ee8  e863d3ffff           CALL 0x5f001250
5f003eed  83c414               ADD ESP,0x14
5f003ef0  5d                   POP EBP
5f003ef1  5f                   POP EDI
5f003ef2  5e                   POP ESI
5f003ef3  5b                   POP EBX
5f003ef4  83c404               ADD ESP,0x4
5f003ef7  c3                   RET
5f003ef8  33c0                 XOR EAX,EAX
5f003efa  8b742418             MOV ESI,dword ptr [ESP + 0x18]
5f003efe  66a14451005f         MOV AX,[0x5f005144]
5f003f04  50                   PUSH EAX
5f003f05  56                   PUSH ESI
5f003f06  ff15fcd2005f         CALL dword ptr [0x5f00d2fc]
5f003f0c  8b6c2424             MOV EBP,dword ptr [ESP + 0x24]
5f003f10  85c0                 TEST EAX,EAX
5f003f12  8b442420             MOV EAX,dword ptr [ESP + 0x20]
5f003f16  55                   PUSH EBP
5f003f17  8b5c242c             MOV EBX,dword ptr [ESP + 0x2c]
5f003f1b  50                   PUSH EAX
5f003f1c  57                   PUSH EDI
5f003f1d  56                   PUSH ESI
5f003f1e  53                   PUSH EBX
5f003f1f  56                   PUSH ESI
5f003f20  7419                 JZ 0x5f003f3b
5f003f22  e8f9d0ffff           CALL 0x5f001020
5f003f27  83c408               ADD ESP,0x8
5f003f2a  8b2dd0d2005f         MOV EBP,dword ptr [0x5f00d2d0]
5f003f30  50                   PUSH EAX
5f003f31  ffd5                 CALL EBP
5f003f33  5d                   POP EBP
5f003f34  5f                   POP EDI
5f003f35  5e                   POP ESI
5f003f36  5b                   POP EBX
5f003f37  83c404               ADD ESP,0x4
5f003f3a  c3                   RET
5f003f3b  e8e0d0ffff           CALL 0x5f001020
5f003f40  83c408               ADD ESP,0x8
5f003f43  50                   PUSH EAX
5f003f44  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f003f4a  89442410             MOV dword ptr [ESP + 0x10],EAX
5f003f4e  83fb03               CMP EBX,0x3
5f003f51  751f                 JNZ 0x5f003f72
5f003f53  6af0                 PUSH -0x10
5f003f55  56                   PUSH ESI
5f003f56  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f003f5c  8bc8                 MOV ECX,EAX
5f003f5e  80e103               AND CL,0x3
5f003f61  80f902               CMP CL,0x2
5f003f64  7510                 JNZ 0x5f003f76
5f003f66  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f003f6a  5d                   POP EBP
5f003f6b  5f                   POP EDI
5f003f6c  5e                   POP ESI
5f003f6d  5b                   POP EBX
5f003f6e  83c404               ADD ESP,0x4
5f003f71  c3                   RET
5f003f72  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f003f76  83ff18               CMP EDI,0x18
5f003f79  7713                 JA 0x5f003f8e
5f003f7b  7448                 JZ 0x5f003fc5
5f003f7d  83ff0f               CMP EDI,0xf
5f003f80  7423                 JZ 0x5f003fa5
5f003f82  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f003f86  5d                   POP EBP
5f003f87  5f                   POP EDI
5f003f88  5e                   POP ESI
5f003f89  5b                   POP EBX
5f003f8a  83c404               ADD ESP,0x4
5f003f8d  c3                   RET
5f003f8e  83ff46               CMP EDI,0x46
5f003f91  7451                 JZ 0x5f003fe4
5f003f93  81ff43190000         CMP EDI,0x1943
5f003f99  72e7                 JC 0x5f003f82
5f003f9b  81ff44190000         CMP EDI,0x1944
5f003fa1  7658                 JBE 0x5f003ffb
5f003fa3  ebdd                 JMP 0x5f003f82
5f003fa5  83fb03               CMP EBX,0x3
5f003fa8  750d                 JNZ 0x5f003fb7
5f003faa  83e003               AND EAX,0x3
5f003fad  83f802               CMP EAX,0x2
5f003fb0  7405                 JZ 0x5f003fb7
5f003fb2  83f803               CMP EAX,0x3
5f003fb5  75cb                 JNZ 0x5f003f82
5f003fb7  53                   PUSH EBX
5f003fb8  6a01                 PUSH 0x1
5f003fba  56                   PUSH ESI
5f003fbb  e8c0fbffff           CALL 0x5f003b80
5f003fc0  83c40c               ADD ESP,0xc
5f003fc3  ebbd                 JMP 0x5f003f82
5f003fc5  66813d5051005f0a03   CMP word ptr [0x5f005150],0x30a
5f003fce  73b2                 JNC 0x5f003f82
5f003fd0  837c242000           CMP dword ptr [ESP + 0x20],0x0
5f003fd5  75ab                 JNZ 0x5f003f82
5f003fd7  6a00                 PUSH 0x0
5f003fd9  56                   PUSH ESI
5f003fda  e801efffff           CALL 0x5f002ee0
5f003fdf  83c408               ADD ESP,0x8
5f003fe2  eb9e                 JMP 0x5f003f82
5f003fe4  66813d5051005f0a03   CMP word ptr [0x5f005150],0x30a
5f003fed  7293                 JC 0x5f003f82
5f003fef  55                   PUSH EBP
5f003ff0  56                   PUSH ESI
5f003ff1  e8eaeeffff           CALL 0x5f002ee0
5f003ff6  83c408               ADD ESP,0x8
5f003ff9  eb87                 JMP 0x5f003f82
5f003ffb  b8ea030000           MOV EAX,0x3ea
5f004000  c7450001000000       MOV dword ptr [EBP],0x1
5f004007  5d                   POP EBP
5f004008  5f                   POP EDI
5f004009  5e                   POP ESI
5f00400a  5b                   POP EBX
5f00400b  83c404               ADD ESP,0x4
5f00400e  c3                   RET
; undefined 1 bytes at 5f00400f

; ==== FUNCTION EditWndProc3d entry=5f004010 sig=undefined __stdcall EditWndProc3d(HWND param_1, uint param_2, WPARAM param_3, undefined4 * param_4)
5f004010  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f004014  6a02                 PUSH 0x2
5f004016  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
5f00401a  50                   PUSH EAX
5f00401b  8b542410             MOV EDX,dword ptr [ESP + 0x10]
5f00401f  51                   PUSH ECX
5f004020  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f004024  52                   PUSH EDX
5f004025  50                   PUSH EAX
5f004026  e895feffff           CALL 0x5f003ec0
5f00402b  83c414               ADD ESP,0x14
5f00402e  c21000               RET 0x10
; undefined 15 bytes at 5f004031

; ==== FUNCTION FUN_5f004040 entry=5f004040 sig=LRESULT __cdecl FUN_5f004040(HWND param_1, uint param_2, WPARAM param_3, LONG * param_4, int param_5)
5f004040  83ec20               SUB ESP,0x20
5f004043  53                   PUSH EBX
5f004044  56                   PUSH ESI
5f004045  8b742430             MOV ESI,dword ptr [ESP + 0x30]
5f004049  57                   PUSH EDI
5f00404a  81fe82000000         CMP ESI,0x82
5f004050  7524                 JNZ 0x5f004076
5f004052  8b442440             MOV EAX,dword ptr [ESP + 0x40]
5f004056  8b4c243c             MOV ECX,dword ptr [ESP + 0x3c]
5f00405a  8b542438             MOV EDX,dword ptr [ESP + 0x38]
5f00405e  50                   PUSH EAX
5f00405f  8b7c2434             MOV EDI,dword ptr [ESP + 0x34]
5f004063  51                   PUSH ECX
5f004064  52                   PUSH EDX
5f004065  56                   PUSH ESI
5f004066  57                   PUSH EDI
5f004067  e8e4d1ffff           CALL 0x5f001250
5f00406c  83c414               ADD ESP,0x14
5f00406f  5f                   POP EDI
5f004070  5e                   POP ESI
5f004071  5b                   POP EBX
5f004072  83c420               ADD ESP,0x20
5f004075  c3                   RET
5f004076  33c0                 XOR EAX,EAX
5f004078  8b7c2430             MOV EDI,dword ptr [ESP + 0x30]
5f00407c  66a14451005f         MOV AX,[0x5f005144]
5f004082  50                   PUSH EAX
5f004083  57                   PUSH EDI
5f004084  ff15fcd2005f         CALL dword ptr [0x5f00d2fc]
5f00408a  85c0                 TEST EAX,EAX
5f00408c  7428                 JZ 0x5f0040b6
5f00408e  8b44243c             MOV EAX,dword ptr [ESP + 0x3c]
5f004092  8b4c2438             MOV ECX,dword ptr [ESP + 0x38]
5f004096  8b542440             MOV EDX,dword ptr [ESP + 0x40]
5f00409a  50                   PUSH EAX
5f00409b  51                   PUSH ECX
5f00409c  56                   PUSH ESI
5f00409d  57                   PUSH EDI
5f00409e  52                   PUSH EDX
5f00409f  57                   PUSH EDI
5f0040a0  e87bcfffff           CALL 0x5f001020
5f0040a5  83c408               ADD ESP,0x8
5f0040a8  50                   PUSH EAX
5f0040a9  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f0040af  5f                   POP EDI
5f0040b0  5e                   POP ESI
5f0040b1  5b                   POP EBX
5f0040b2  83c420               ADD ESP,0x20
5f0040b5  c3                   RET
5f0040b6  83fe18               CMP ESI,0x18
5f0040b9  7733                 JA 0x5f0040ee
5f0040bb  0f8490000000         JZ 0x5f004151
5f0040c1  83fe0f               CMP ESI,0xf
5f0040c4  7453                 JZ 0x5f004119
5f0040c6  8b44243c             MOV EAX,dword ptr [ESP + 0x3c]
5f0040ca  8b4c2438             MOV ECX,dword ptr [ESP + 0x38]
5f0040ce  8b542440             MOV EDX,dword ptr [ESP + 0x40]
5f0040d2  50                   PUSH EAX
5f0040d3  51                   PUSH ECX
5f0040d4  56                   PUSH ESI
5f0040d5  57                   PUSH EDI
5f0040d6  52                   PUSH EDX
5f0040d7  57                   PUSH EDI
5f0040d8  e843cfffff           CALL 0x5f001020
5f0040dd  83c408               ADD ESP,0x8
5f0040e0  50                   PUSH EAX
5f0040e1  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f0040e7  5f                   POP EDI
5f0040e8  5e                   POP ESI
5f0040e9  5b                   POP EBX
5f0040ea  83c420               ADD ESP,0x20
5f0040ed  c3                   RET
5f0040ee  81fe83000000         CMP ESI,0x83
5f0040f4  770d                 JA 0x5f004103
5f0040f6  0f84a1000000         JZ 0x5f00419d
5f0040fc  83fe46               CMP ESI,0x46
5f0040ff  747a                 JZ 0x5f00417b
5f004101  ebc3                 JMP 0x5f0040c6
5f004103  81fe43190000         CMP ESI,0x1943
5f004109  72bb                 JC 0x5f0040c6
5f00410b  81fe44190000         CMP ESI,0x1944
5f004111  0f8641010000         JBE 0x5f004258
5f004117  ebad                 JMP 0x5f0040c6
5f004119  8b5c2440             MOV EBX,dword ptr [ESP + 0x40]
5f00411d  8b44243c             MOV EAX,dword ptr [ESP + 0x3c]
5f004121  8b4c2438             MOV ECX,dword ptr [ESP + 0x38]
5f004125  50                   PUSH EAX
5f004126  51                   PUSH ECX
5f004127  56                   PUSH ESI
5f004128  57                   PUSH EDI
5f004129  53                   PUSH EBX
5f00412a  57                   PUSH EDI
5f00412b  e8f0ceffff           CALL 0x5f001020
5f004130  83c408               ADD ESP,0x8
5f004133  50                   PUSH EAX
5f004134  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f00413a  8bf0                 MOV ESI,EAX
5f00413c  53                   PUSH EBX
5f00413d  6a00                 PUSH 0x0
5f00413f  57                   PUSH EDI
5f004140  e83bfaffff           CALL 0x5f003b80
5f004145  83c40c               ADD ESP,0xc
5f004148  8bc6                 MOV EAX,ESI
5f00414a  5f                   POP EDI
5f00414b  5e                   POP ESI
5f00414c  5b                   POP EBX
5f00414d  83c420               ADD ESP,0x20
5f004150  c3                   RET
5f004151  66813d5051005f0a03   CMP word ptr [0x5f005150],0x30a
5f00415a  0f8366ffffff         JNC 0x5f0040c6
5f004160  837c243800           CMP dword ptr [ESP + 0x38],0x0
5f004165  0f855bffffff         JNZ 0x5f0040c6
5f00416b  6a00                 PUSH 0x0
5f00416d  57                   PUSH EDI
5f00416e  e86dedffff           CALL 0x5f002ee0
5f004173  83c408               ADD ESP,0x8
5f004176  e94bffffff           JMP 0x5f0040c6
5f00417b  66813d5051005f0a03   CMP word ptr [0x5f005150],0x30a
5f004184  0f823cffffff         JC 0x5f0040c6
5f00418a  8b44243c             MOV EAX,dword ptr [ESP + 0x3c]
5f00418e  50                   PUSH EAX
5f00418f  57                   PUSH EDI
5f004190  e84bedffff           CALL 0x5f002ee0
5f004195  83c408               ADD ESP,0x8
5f004198  e929ffffff           JMP 0x5f0040c6
5f00419d  66813d5051005f0a03   CMP word ptr [0x5f005150],0x30a
5f0041a6  0f831affffff         JNC 0x5f0040c6
5f0041ac  8d44241c             LEA EAX,[ESP + 0x1c]
5f0041b0  50                   PUSH EAX
5f0041b1  57                   PUSH EDI
5f0041b2  ff1554d2005f         CALL dword ptr [0x5f00d254]
5f0041b8  8b4c243c             MOV ECX,dword ptr [ESP + 0x3c]
5f0041bc  8b442438             MOV EAX,dword ptr [ESP + 0x38]
5f0041c0  8b542440             MOV EDX,dword ptr [ESP + 0x40]
5f0041c4  51                   PUSH ECX
5f0041c5  50                   PUSH EAX
5f0041c6  56                   PUSH ESI
5f0041c7  57                   PUSH EDI
5f0041c8  52                   PUSH EDX
5f0041c9  57                   PUSH EDI
5f0041ca  e851ceffff           CALL 0x5f001020
5f0041cf  83c408               ADD ESP,0x8
5f0041d2  50                   PUSH EAX
5f0041d3  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f0041d9  8bf0                 MOV ESI,EAX
5f0041db  8b54243c             MOV EDX,dword ptr [ESP + 0x3c]
5f0041df  8d4c240c             LEA ECX,[ESP + 0xc]
5f0041e3  8b02                 MOV EAX,dword ptr [EDX]
5f0041e5  8b5a04               MOV EBX,dword ptr [EDX + 0x4]
5f0041e8  6a01                 PUSH 0x1
5f0041ea  6a02                 PUSH 0x2
5f0041ec  8901                 MOV dword ptr [ECX],EAX
5f0041ee  8b4208               MOV EAX,dword ptr [EDX + 0x8]
5f0041f1  895904               MOV dword ptr [ECX + 0x4],EBX
5f0041f4  8b520c               MOV EDX,dword ptr [EDX + 0xc]
5f0041f7  894108               MOV dword ptr [ECX + 0x8],EAX
5f0041fa  89510c               MOV dword ptr [ECX + 0xc],EDX
5f0041fd  8d4c2414             LEA ECX,[ESP + 0x14]
5f004201  51                   PUSH ECX
5f004202  ff1550d2005f         CALL dword ptr [0x5f00d250]
5f004208  8b4c2428             MOV ECX,dword ptr [ESP + 0x28]
5f00420c  394c2418             CMP dword ptr [ESP + 0x18],ECX
5f004210  7d3d                 JGE 0x5f00424f
5f004212  8b442418             MOV EAX,dword ptr [ESP + 0x18]
5f004216  57                   PUSH EDI
5f004217  40                   INC EAX
5f004218  89442414             MOV dword ptr [ESP + 0x14],EAX
5f00421c  8d4101               LEA EAX,[ECX + 0x1]
5f00421f  8944241c             MOV dword ptr [ESP + 0x1c],EAX
5f004223  ff1558d2005f         CALL dword ptr [0x5f00d258]
5f004229  8bf8                 MOV EDI,EAX
5f00422b  8b1d84d2005f         MOV EBX,dword ptr [0x5f00d284]
5f004231  8d44240c             LEA EAX,[ESP + 0xc]
5f004235  50                   PUSH EAX
5f004236  57                   PUSH EDI
5f004237  ffd3                 CALL EBX
5f004239  8d4c2414             LEA ECX,[ESP + 0x14]
5f00423d  51                   PUSH ECX
5f00423e  57                   PUSH EDI
5f00423f  ffd3                 CALL EBX
5f004241  8d44240c             LEA EAX,[ESP + 0xc]
5f004245  6a01                 PUSH 0x1
5f004247  50                   PUSH EAX
5f004248  57                   PUSH EDI
5f004249  ff1580d2005f         CALL dword ptr [0x5f00d280]
5f00424f  8bc6                 MOV EAX,ESI
5f004251  5f                   POP EDI
5f004252  5e                   POP ESI
5f004253  5b                   POP EBX
5f004254  83c420               ADD ESP,0x20
5f004257  c3                   RET
5f004258  8b44243c             MOV EAX,dword ptr [ESP + 0x3c]
5f00425c  5f                   POP EDI
5f00425d  5e                   POP ESI
5f00425e  5b                   POP EBX
5f00425f  c70001000000         MOV dword ptr [EAX],0x1
5f004265  b8e9030000           MOV EAX,0x3e9
5f00426a  83c420               ADD ESP,0x20
5f00426d  c3                   RET
; undefined 2 bytes at 5f00426e

; ==== FUNCTION ListWndProc3d entry=5f004270 sig=undefined __stdcall ListWndProc3d(HWND param_1, uint param_2, WPARAM param_3, LONG * param_4)
5f004270  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f004274  6a01                 PUSH 0x1
5f004276  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
5f00427a  50                   PUSH EAX
5f00427b  8b542410             MOV EDX,dword ptr [ESP + 0x10]
5f00427f  51                   PUSH ECX
5f004280  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f004284  52                   PUSH EDX
5f004285  50                   PUSH EAX
5f004286  e8b5fdffff           CALL 0x5f004040
5f00428b  83c414               ADD ESP,0x14
5f00428e  c21000               RET 0x10
; undefined 15 bytes at 5f004291

; ==== FUNCTION ComboWndProc3d entry=5f0042a0 sig=uint __stdcall ComboWndProc3d(HWND param_1, uint param_2, WPARAM param_3, undefined4 * param_4)
5f0042a0  8b4c2408             MOV ECX,dword ptr [ESP + 0x8]
5f0042a4  81f943190000         CMP ECX,0x1943
5f0042aa  7208                 JC 0x5f0042b4
5f0042ac  81f944190000         CMP ECX,0x1944
5f0042b2  761d                 JBE 0x5f0042d1
5f0042b4  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f0042b8  6a03                 PUSH 0x3
5f0042ba  8b542410             MOV EDX,dword ptr [ESP + 0x10]
5f0042be  50                   PUSH EAX
5f0042bf  52                   PUSH EDX
5f0042c0  51                   PUSH ECX
5f0042c1  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
5f0042c5  51                   PUSH ECX
5f0042c6  e8f5fbffff           CALL 0x5f003ec0
5f0042cb  83c414               ADD ESP,0x14
5f0042ce  c21000               RET 0x10
5f0042d1  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f0042d5  c70001000000         MOV dword ptr [EAX],0x1
5f0042db  b8eb030000           MOV EAX,0x3eb
5f0042e0  c21000               RET 0x10
; undefined 13 bytes at 5f0042e3

; ==== FUNCTION FUN_5f0042f0 entry=5f0042f0 sig=undefined __cdecl FUN_5f0042f0(HWND param_1, HDC param_2, LPRECT param_3, uint param_4)
5f0042f0  55                   PUSH EBP
5f0042f1  8bec                 MOV EBP,ESP
5f0042f3  83ec08               SUB ESP,0x8
5f0042f6  53                   PUSH EBX
5f0042f7  56                   PUSH ESI
5f0042f8  57                   PUSH EDI
5f0042f9  8b7510               MOV ESI,dword ptr [EBP + 0x10]
5f0042fc  682100f000           PUSH 0xf00021
5f004301  8b5604               MOV EDX,dword ptr [ESI + 0x4]
5f004304  8b0e                 MOV ECX,dword ptr [ESI]
5f004306  8b460c               MOV EAX,dword ptr [ESI + 0xc]
5f004309  2bc2                 SUB EAX,EDX
5f00430b  50                   PUSH EAX
5f00430c  8b4608               MOV EAX,dword ptr [ESI + 0x8]
5f00430f  2bc1                 SUB EAX,ECX
5f004311  50                   PUSH EAX
5f004312  52                   PUSH EDX
5f004313  51                   PUSH ECX
5f004314  8b4d0c               MOV ECX,dword ptr [EBP + 0xc]
5f004317  51                   PUSH ECX
5f004318  ff15b0d1005f         CALL dword ptr [0x5f00d1b0]
5f00431e  8b7d08               MOV EDI,dword ptr [EBP + 0x8]
5f004321  57                   PUSH EDI
5f004322  ff15c0d2005f         CALL dword ptr [0x5f00d2c0]
5f004328  8bd8                 MOV EBX,EAX
5f00432a  8d4005               LEA EAX,[EAX + 0x5]
5f00432d  83c003               ADD EAX,0x3
5f004330  83e0fc               AND EAX,0xfffffffc
5f004333  e8d0050000           CALL 0x5f004908
5f004338  8965fc               MOV dword ptr [EBP + -0x4],ESP
5f00433b  837dfc00             CMP dword ptr [EBP + -0x4],0x0
5f00433f  747a                 JZ 0x5f0043bb
5f004341  83c302               ADD EBX,0x2
5f004344  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
5f004347  53                   PUSH EBX
5f004348  50                   PUSH EAX
5f004349  57                   PUSH EDI
5f00434a  ff1548d2005f         CALL dword ptr [0x5f00d248]
5f004350  85c0                 TEST EAX,EAX
5f004352  7467                 JZ 0x5f0043bb
5f004354  66bb4001             MOV BX,0x140
5f004358  8b7d14               MOV EDI,dword ptr [EBP + 0x14]
5f00435b  8bc7                 MOV EAX,EDI
5f00435d  240f                 AND AL,0xf
5f00435f  3c0c                 CMP AL,0xc
5f004361  740b                 JZ 0x5f00436e
5f004363  8bdf                 MOV EBX,EDI
5f004365  6683e30f             AND BX,0xf
5f004369  6681cb5001           OR BX,0x150
5f00436e  f7c780000000         TEST EDI,0x80
5f004374  7403                 JZ 0x5f004379
5f004376  80cf08               OR BH,0x8
5f004379  81e700000008         AND EDI,0x8000000
5f00437f  7413                 JZ 0x5f004394
5f004381  a16c51005f           MOV EAX,[0x5f00516c]
5f004386  8b4d0c               MOV ECX,dword ptr [EBP + 0xc]
5f004389  50                   PUSH EAX
5f00438a  51                   PUSH ECX
5f00438b  ff15c0d1005f         CALL dword ptr [0x5f00d1c0]
5f004391  8945f8               MOV dword ptr [EBP + -0x8],EAX
5f004394  8b4dfc               MOV ECX,dword ptr [EBP + -0x4]
5f004397  8b550c               MOV EDX,dword ptr [EBP + 0xc]
5f00439a  0fb7c3               MOVZX EAX,BX
5f00439d  50                   PUSH EAX
5f00439e  56                   PUSH ESI
5f00439f  6aff                 PUSH -0x1
5f0043a1  51                   PUSH ECX
5f0043a2  52                   PUSH EDX
5f0043a3  ff1598d2005f         CALL dword ptr [0x5f00d298]
5f0043a9  85ff                 TEST EDI,EDI
5f0043ab  740e                 JZ 0x5f0043bb
5f0043ad  8b45f8               MOV EAX,dword ptr [EBP + -0x8]
5f0043b0  8b4d0c               MOV ECX,dword ptr [EBP + 0xc]
5f0043b3  50                   PUSH EAX
5f0043b4  51                   PUSH ECX
5f0043b5  ff15c0d1005f         CALL dword ptr [0x5f00d1c0]
5f0043bb  8d65ec               LEA ESP,[EBP + -0x14]
5f0043be  5f                   POP EDI
5f0043bf  5e                   POP ESI
5f0043c0  5b                   POP EBX
5f0043c1  8be5                 MOV ESP,EBP
5f0043c3  5d                   POP EBP
5f0043c4  c3                   RET
; undefined 11 bytes at 5f0043c5

; ==== FUNCTION FUN_5f0043d0 entry=5f0043d0 sig=undefined __cdecl FUN_5f0043d0(HWND param_1, HDC param_2)
5f0043d0  83ec14               SUB ESP,0x14
5f0043d3  53                   PUSH EBX
5f0043d4  56                   PUSH ESI
5f0043d5  8b742420             MOV ESI,dword ptr [ESP + 0x20]
5f0043d9  57                   PUSH EDI
5f0043da  55                   PUSH EBP
5f0043db  6af0                 PUSH -0x10
5f0043dd  56                   PUSH ESI
5f0043de  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f0043e4  89442410             MOV dword ptr [ESP + 0x10],EAX
5f0043e8  a900000010           TEST EAX,0x10000000
5f0043ed  0f8439010000         JZ 0x5f00452c
5f0043f3  8d442414             LEA EAX,[ESP + 0x14]
5f0043f7  50                   PUSH EAX
5f0043f8  56                   PUSH ESI
5f0043f9  ff15ccd2005f         CALL dword ptr [0x5f00d2cc]
5f0043ff  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f004403  83e01f               AND EAX,0x1f
5f004406  83f812               CMP EAX,0x12
5f004409  0f871d010000         JA 0x5f00452c
5f00440f  33c9                 XOR ECX,ECX
5f004411  8a885c45005f         MOV CL,byte ptr [EAX + 0x5f00455c]
switchD_5f004417::switchD:
5f004417  ff248d3445005f       JMP dword ptr [ECX*0x4 + 0x5f004534]
switchD_5f004417::caseD_0:
5f00441e  6a00                 PUSH 0x0
5f004420  8b1de8d2005f         MOV EBX,dword ptr [0x5f00d2e8]
5f004426  6a00                 PUSH 0x0
5f004428  6a31                 PUSH 0x31
5f00442a  56                   PUSH ESI
5f00442b  ffd3                 CALL EBX
5f00442d  8be8                 MOV EBP,EAX
5f00442f  85ed                 TEST EBP,EBP
5f004431  7410                 JZ 0x5f004443
5f004433  8b7c242c             MOV EDI,dword ptr [ESP + 0x2c]
5f004437  55                   PUSH EBP
5f004438  57                   PUSH EDI
5f004439  ff15c4d1005f         CALL dword ptr [0x5f00d1c4]
5f00443f  8be8                 MOV EBP,EAX
5f004441  eb04                 JMP 0x5f004447
5f004443  8b7c242c             MOV EDI,dword ptr [ESP + 0x2c]
5f004447  6a02                 PUSH 0x2
5f004449  57                   PUSH EDI
5f00444a  ff15dcd1005f         CALL dword ptr [0x5f00d1dc]
5f004450  56                   PUSH ESI
5f004451  57                   PUSH EDI
5f004452  6838010000           PUSH 0x138
5f004457  56                   PUSH ESI
5f004458  ff1558d2005f         CALL dword ptr [0x5f00d258]
5f00445e  50                   PUSH EAX
5f00445f  ffd3                 CALL EBX
5f004461  8bd8                 MOV EBX,EAX
5f004463  85db                 TEST EBX,EBX
5f004465  740a                 JZ 0x5f004471
5f004467  53                   PUSH EBX
5f004468  57                   PUSH EDI
5f004469  ff15c4d1005f         CALL dword ptr [0x5f00d1c4]
5f00446f  8bd8                 MOV EBX,EAX
5f004471  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f004475  8d4c2414             LEA ECX,[ESP + 0x14]
5f004479  50                   PUSH EAX
5f00447a  51                   PUSH ECX
5f00447b  57                   PUSH EDI
5f00447c  56                   PUSH ESI
5f00447d  e86efeffff           CALL 0x5f0042f0
5f004482  83c410               ADD ESP,0x10
5f004485  85ed                 TEST EBP,EBP
5f004487  7408                 JZ 0x5f004491
5f004489  55                   PUSH EBP
5f00448a  57                   PUSH EDI
5f00448b  ff15c4d1005f         CALL dword ptr [0x5f00d1c4]
5f004491  85db                 TEST EBX,EBX
5f004493  0f8493000000         JZ 0x5f00452c
5f004499  53                   PUSH EBX
5f00449a  57                   PUSH EDI
5f00449b  ff15c4d1005f         CALL dword ptr [0x5f00d1c4]
5f0044a1  5d                   POP EBP
5f0044a2  5f                   POP EDI
5f0044a3  5e                   POP ESI
5f0044a4  5b                   POP EBX
5f0044a5  83c414               ADD ESP,0x14
5f0044a8  c3                   RET
switchD_5f004417::caseD_4:
5f0044a9  8d442414             LEA EAX,[ESP + 0x14]
5f0044ad  6a0f                 PUSH 0xf
5f0044af  8b7c2430             MOV EDI,dword ptr [ESP + 0x30]
5f0044b3  6a00                 PUSH 0x0
5f0044b5  6a02                 PUSH 0x2
5f0044b7  50                   PUSH EAX
5f0044b8  57                   PUSH EDI
5f0044b9  e872ceffff           CALL 0x5f001330
5f0044be  83c414               ADD ESP,0x14
5f0044c1  5d                   POP EBP
5f0044c2  5f                   POP EDI
5f0044c3  5e                   POP ESI
5f0044c4  5b                   POP EBX
5f0044c5  83c414               ADD ESP,0x14
5f0044c8  c3                   RET
switchD_5f004417::caseD_5:
5f0044c9  8d442414             LEA EAX,[ESP + 0x14]
5f0044cd  6a0f                 PUSH 0xf
5f0044cf  8b7c2430             MOV EDI,dword ptr [ESP + 0x30]
5f0044d3  6a00                 PUSH 0x0
5f0044d5  ff44241c             INC dword ptr [ESP + 0x1c]
5f0044d9  6a00                 PUSH 0x0
5f0044db  ff442424             INC dword ptr [ESP + 0x24]
5f0044df  50                   PUSH EAX
5f0044e0  57                   PUSH EDI
5f0044e1  e84aceffff           CALL 0x5f001330
5f0044e6  8d4c2428             LEA ECX,[ESP + 0x28]
5f0044ea  83c414               ADD ESP,0x14
5f0044ed  6aff                 PUSH -0x1
5f0044ef  6aff                 PUSH -0x1
5f0044f1  51                   PUSH ECX
5f0044f2  ff154cd2005f         CALL dword ptr [0x5f00d24c]
5f0044f8  8d4c2414             LEA ECX,[ESP + 0x14]
5f0044fc  6a0f                 PUSH 0xf
5f0044fe  6a02                 PUSH 0x2
5f004500  6a02                 PUSH 0x2
5f004502  51                   PUSH ECX
5f004503  57                   PUSH EDI
5f004504  e827ceffff           CALL 0x5f001330
5f004509  83c414               ADD ESP,0x14
5f00450c  5d                   POP EBP
5f00450d  5f                   POP EDI
5f00450e  5e                   POP ESI
5f00450f  5b                   POP EBX
5f004510  83c414               ADD ESP,0x14
5f004513  c3                   RET
switchD_5f004417::caseD_6:
5f004514  8d442414             LEA EAX,[ESP + 0x14]
5f004518  6a0f                 PUSH 0xf
5f00451a  8b7c2430             MOV EDI,dword ptr [ESP + 0x30]
5f00451e  6a02                 PUSH 0x2
5f004520  6a00                 PUSH 0x0
5f004522  50                   PUSH EAX
5f004523  57                   PUSH EDI
5f004524  e807ceffff           CALL 0x5f001330
5f004529  83c414               ADD ESP,0x14
switchD_5f004417::caseD_3:
5f00452c  5d                   POP EBP
5f00452d  5f                   POP EDI
5f00452e  5e                   POP ESI
5f00452f  5b                   POP EBX
5f004530  83c414               ADD ESP,0x14
5f004533  c3                   RET
switchD_5f004417::switchdataD_5f004534:
5f004534  addr 5f00441e
5f004538  addr 5f0044a9
5f00453c  addr 5f0044c9
5f004540  addr 5f004514
5f004544  addr 5f0044a9
5f004548  addr 5f0044c9
5f00454c  addr 5f004514
5f004550  addr 5f00441e
5f004554  addr 5f0044c9
5f004558  addr 5f00452c
switchD_5f004417::switchdataD_5f00455c:
5f00455c  db 0h
5f00455d  db 0h
5f00455e  db 0h
5f00455f  db 9h
5f004560  db 1h
5f004561  db 2h
5f004562  db 3h
5f004563  db 4h
5f004564  db 5h
5f004565  db 6h
5f004566  db 9h
5f004567  db 9h
5f004568  db 7h
5f004569  db 9h
5f00456a  db 9h
5f00456b  db 9h
5f00456c  db 8h
5f00456d  db 8h
5f00456e  db 8h
; undefined 1 bytes at 5f00456f

; ==== FUNCTION StaticWndProc3d entry=5f004570 sig=LRESULT __stdcall StaticWndProc3d(HWND param_1, uint param_2, HDC param_3, undefined4 * param_4)
5f004570  83ec40               SUB ESP,0x40
5f004573  53                   PUSH EBX
5f004574  56                   PUSH ESI
5f004575  57                   PUSH EDI
5f004576  8b7c2454             MOV EDI,dword ptr [ESP + 0x54]
5f00457a  81ff82000000         CMP EDI,0x82
5f004580  7523                 JNZ 0x5f0045a5
5f004582  8b44245c             MOV EAX,dword ptr [ESP + 0x5c]
5f004586  6a04                 PUSH 0x4
5f004588  8b5c245c             MOV EBX,dword ptr [ESP + 0x5c]
5f00458c  50                   PUSH EAX
5f00458d  8b742458             MOV ESI,dword ptr [ESP + 0x58]
5f004591  53                   PUSH EBX
5f004592  57                   PUSH EDI
5f004593  56                   PUSH ESI
5f004594  e8b7ccffff           CALL 0x5f001250
5f004599  83c414               ADD ESP,0x14
5f00459c  5f                   POP EDI
5f00459d  5e                   POP ESI
5f00459e  5b                   POP EBX
5f00459f  83c440               ADD ESP,0x40
5f0045a2  c21000               RET 0x10
5f0045a5  33c0                 XOR EAX,EAX
5f0045a7  8b742450             MOV ESI,dword ptr [ESP + 0x50]
5f0045ab  66a14451005f         MOV AX,[0x5f005144]
5f0045b1  50                   PUSH EAX
5f0045b2  56                   PUSH ESI
5f0045b3  ff15fcd2005f         CALL dword ptr [0x5f00d2fc]
5f0045b9  85c0                 TEST EAX,EAX
5f0045bb  7427                 JZ 0x5f0045e4
5f0045bd  8b44245c             MOV EAX,dword ptr [ESP + 0x5c]
5f0045c1  8b5c2458             MOV EBX,dword ptr [ESP + 0x58]
5f0045c5  50                   PUSH EAX
5f0045c6  53                   PUSH EBX
5f0045c7  57                   PUSH EDI
5f0045c8  56                   PUSH ESI
5f0045c9  6a04                 PUSH 0x4
5f0045cb  56                   PUSH ESI
5f0045cc  e84fcaffff           CALL 0x5f001020
5f0045d1  83c408               ADD ESP,0x8
5f0045d4  50                   PUSH EAX
5f0045d5  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f0045db  5f                   POP EDI
5f0045dc  5e                   POP ESI
5f0045dd  5b                   POP EBX
5f0045de  83c440               ADD ESP,0x40
5f0045e1  c21000               RET 0x10
5f0045e4  83ff0f               CMP EDI,0xf
5f0045e7  7709                 JA 0x5f0045f2
5f0045e9  7472                 JZ 0x5f00465d
5f0045eb  83ff0a               CMP EDI,0xa
5f0045ee  743d                 JZ 0x5f00462d
5f0045f0  eb14                 JMP 0x5f004606
5f0045f2  81ff43190000         CMP EDI,0x1943
5f0045f8  720c                 JC 0x5f004606
5f0045fa  81ff44190000         CMP EDI,0x1944
5f004600  0f869e000000         JBE 0x5f0046a4
5f004606  8b44245c             MOV EAX,dword ptr [ESP + 0x5c]
5f00460a  8b5c2458             MOV EBX,dword ptr [ESP + 0x58]
5f00460e  50                   PUSH EAX
5f00460f  53                   PUSH EBX
5f004610  57                   PUSH EDI
5f004611  56                   PUSH ESI
5f004612  6a04                 PUSH 0x4
5f004614  56                   PUSH ESI
5f004615  e806caffff           CALL 0x5f001020
5f00461a  83c408               ADD ESP,0x8
5f00461d  50                   PUSH EAX
5f00461e  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f004624  5f                   POP EDI
5f004625  5e                   POP ESI
5f004626  5b                   POP EBX
5f004627  83c440               ADD ESP,0x40
5f00462a  c21000               RET 0x10
5f00462d  56                   PUSH ESI
5f00462e  ff1570d2005f         CALL dword ptr [0x5f00d270]
5f004634  50                   PUSH EAX
5f004635  8bf8                 MOV EDI,EAX
5f004637  56                   PUSH ESI
5f004638  e8a3ceffff           CALL 0x5f0014e0
5f00463d  83c408               ADD ESP,0x8
5f004640  57                   PUSH EDI
5f004641  56                   PUSH ESI
5f004642  e889fdffff           CALL 0x5f0043d0
5f004647  83c408               ADD ESP,0x8
5f00464a  57                   PUSH EDI
5f00464b  56                   PUSH ESI
5f00464c  ff15a4d2005f         CALL dword ptr [0x5f00d2a4]
5f004652  33c0                 XOR EAX,EAX
5f004654  5f                   POP EDI
5f004655  5e                   POP ESI
5f004656  5b                   POP EBX
5f004657  83c440               ADD ESP,0x40
5f00465a  c21000               RET 0x10
5f00465d  8b5c2458             MOV EBX,dword ptr [ESP + 0x58]
5f004661  8bfb                 MOV EDI,EBX
5f004663  85ff                 TEST EDI,EDI
5f004665  7518                 JNZ 0x5f00467f
5f004667  8d44240c             LEA EAX,[ESP + 0xc]
5f00466b  50                   PUSH EAX
5f00466c  56                   PUSH ESI
5f00466d  ff15b0d2005f         CALL dword ptr [0x5f00d2b0]
5f004673  50                   PUSH EAX
5f004674  8bf8                 MOV EDI,EAX
5f004676  56                   PUSH ESI
5f004677  e864ceffff           CALL 0x5f0014e0
5f00467c  83c408               ADD ESP,0x8
5f00467f  57                   PUSH EDI
5f004680  56                   PUSH ESI
5f004681  e84afdffff           CALL 0x5f0043d0
5f004686  83c408               ADD ESP,0x8
5f004689  85db                 TEST EBX,EBX
5f00468b  750c                 JNZ 0x5f004699
5f00468d  8d44240c             LEA EAX,[ESP + 0xc]
5f004691  50                   PUSH EAX
5f004692  56                   PUSH ESI
5f004693  ff15acd2005f         CALL dword ptr [0x5f00d2ac]
5f004699  33c0                 XOR EAX,EAX
5f00469b  5f                   POP EDI
5f00469c  5e                   POP ESI
5f00469d  5b                   POP EBX
5f00469e  83c440               ADD ESP,0x40
5f0046a1  c21000               RET 0x10
5f0046a4  8b44245c             MOV EAX,dword ptr [ESP + 0x5c]
5f0046a8  5f                   POP EDI
5f0046a9  5e                   POP ESI
5f0046aa  5b                   POP EBX
5f0046ab  c70001000000         MOV dword ptr [EAX],0x1
5f0046b1  b8ec030000           MOV EAX,0x3ec
5f0046b6  83c440               ADD ESP,0x40
5f0046b9  c21000               RET 0x10
; undefined 4 bytes at 5f0046bc

; ==== FUNCTION entry entry=5f0046c0 sig=undefined4 __stdcall entry(undefined4 param_1, int param_2)
5f0046c0  83ec04               SUB ESP,0x4
5f0046c3  837c240c01           CMP dword ptr [ESP + 0xc],0x1
5f0046c8  56                   PUSH ESI
5f0046c9  0f85bd000000         JNZ 0x5f00478c
5f0046cf  68e4c1005f           PUSH 0x5f00c1e4
5f0046d4  ff1500d2005f         CALL dword ptr [0x5f00d200]
5f0046da  68c8c1005f           PUSH 0x5f00c1c8
5f0046df  50                   PUSH EAX
5f0046e0  ff15f4d1005f         CALL dword ptr [0x5f00d1f4]
5f0046e6  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
5f0046ea  89442404             MOV dword ptr [ESP + 0x4],EAX
5f0046ee  85c0                 TEST EAX,EAX
5f0046f0  7405                 JZ 0x5f0046f7
5f0046f2  56                   PUSH ESI
5f0046f3  ff542408             CALL dword ptr [ESP + 0x8]
5f0046f7  681051005f           PUSH 0x5f005110
5f0046fc  ff1504d2005f         CALL dword ptr [0x5f00d204]
5f004702  681051005f           PUSH 0x5f005110
5f004707  ff1520d2005f         CALL dword ptr [0x5f00d220]
5f00470d  89354c51005f         MOV dword ptr [0x5f00514c],ESI
5f004713  89354851005f         MOV dword ptr [0x5f005148],ESI
5f004719  ff1508d2005f         CALL dword ptr [0x5f00d208]
5f00471f  660fb6c8             MOVZX CX,AL
5f004723  66c1e108             SHL CX,0x8
5f004727  660fb6d4             MOVZX DX,AH
5f00472b  660bca               OR CX,DX
5f00472e  a900000080           TEST EAX,0x80000000
5f004733  66890d5051005f       MOV word ptr [0x5f005150],CX
5f00473a  7410                 JZ 0x5f00474c
5f00473c  66c7055251005f1000   MOV word ptr [0x5f005152],0x10
5f004745  6681f95f03           CMP CX,0x35f
5f00474a  7209                 JC 0x5f004755
5f00474c  66c7055251005f2000   MOV word ptr [0x5f005152],0x20
5f004755  6a07                 PUSH 0x7
5f004757  8b356cd2005f         MOV ESI,dword ptr [0x5f00d26c]
5f00475d  ffd6                 CALL ESI
5f00475f  48                   DEC EAX
5f004760  6a08                 PUSH 0x8
5f004762  a324a2005f           MOV [0x5f00a224],EAX
5f004767  ffd6                 CALL ESI
5f004769  48                   DEC EAX
5f00476a  6a04                 PUSH 0x4
5f00476c  a328a2005f           MOV [0x5f00a228],EAX
5f004771  ffd6                 CALL ESI
5f004773  6a1e                 PUSH 0x1e
5f004775  a32ca2005f           MOV [0x5f00a22c],EAX
5f00477a  ffd6                 CALL ESI
5f00477c  681051005f           PUSH 0x5f005110
5f004781  a330a2005f           MOV [0x5f00a230],EAX
5f004786  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f00478c  b801000000           MOV EAX,0x1
5f004791  5e                   POP ESI
5f004792  83c404               ADD ESP,0x4
5f004795  c20c00               RET 0xc
; undefined 8 bytes at 5f004798

; ==== FUNCTION FUN_5f0047a0 entry=5f0047a0 sig=HBITMAP __stdcall FUN_5f0047a0(HMODULE param_1, LPCSTR param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8)
5f0047a0  8b442408             MOV EAX,dword ptr [ESP + 0x8]
5f0047a4  53                   PUSH EBX
5f0047a5  56                   PUSH ESI
5f0047a6  57                   PUSH EDI
5f0047a7  8b742410             MOV ESI,dword ptr [ESP + 0x10]
5f0047ab  55                   PUSH EBP
5f0047ac  6a02                 PUSH 0x2
5f0047ae  50                   PUSH EAX
5f0047af  56                   PUSH ESI
5f0047b0  ff15fcd1005f         CALL dword ptr [0x5f00d1fc]
5f0047b6  8bf8                 MOV EDI,EAX
5f0047b8  85ff                 TEST EDI,EDI
5f0047ba  7509                 JNZ 0x5f0047c5
5f0047bc  33c0                 XOR EAX,EAX
5f0047be  5d                   POP EBP
5f0047bf  5f                   POP EDI
5f0047c0  5e                   POP ESI
5f0047c1  5b                   POP EBX
5f0047c2  c22000               RET 0x20
5f0047c5  57                   PUSH EDI
5f0047c6  56                   PUSH ESI
5f0047c7  ff15f8d1005f         CALL dword ptr [0x5f00d1f8]
5f0047cd  8bd8                 MOV EBX,EAX
5f0047cf  57                   PUSH EDI
5f0047d0  56                   PUSH ESI
5f0047d1  ff153cd2005f         CALL dword ptr [0x5f00d23c]
5f0047d7  8bf0                 MOV ESI,EAX
5f0047d9  85f6                 TEST ESI,ESI
5f0047db  7509                 JNZ 0x5f0047e6
5f0047dd  33c0                 XOR EAX,EAX
5f0047df  5d                   POP EBP
5f0047e0  5f                   POP EDI
5f0047e1  5e                   POP ESI
5f0047e2  5b                   POP EBX
5f0047e3  c22000               RET 0x20
5f0047e6  53                   PUSH EBX
5f0047e7  6a40                 PUSH 0x40
5f0047e9  ff1538d2005f         CALL dword ptr [0x5f00d238]
5f0047ef  8be8                 MOV EBP,EAX
5f0047f1  85ed                 TEST EBP,EBP
5f0047f3  7509                 JNZ 0x5f0047fe
5f0047f5  33c0                 XOR EAX,EAX
5f0047f7  5d                   POP EBP
5f0047f8  5f                   POP EDI
5f0047f9  5e                   POP ESI
5f0047fa  5b                   POP EBX
5f0047fb  c22000               RET 0x20
5f0047fe  8bfd                 MOV EDI,EBP
5f004800  8bcb                 MOV ECX,EBX
5f004802  c1e902               SHR ECX,0x2
5f004805  f3a5                 MOVSD.REP ES:EDI,ESI
5f004807  8bcb                 MOV ECX,EBX
5f004809  83e103               AND ECX,0x3
5f00480c  f3a4                 MOVSB.REP ES:EDI,ESI
5f00480e  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
5f004812  33c9                 XOR ECX,ECX
5f004814  8acc                 MOV CL,AH
5f004816  33d2                 XOR EDX,EDX
5f004818  c1e108               SHL ECX,0x8
5f00481b  8ad0                 MOV DL,AL
5f00481d  c1e210               SHL EDX,0x10
5f004820  c1e810               SHR EAX,0x10
5f004823  0bca                 OR ECX,EDX
5f004825  33d2                 XOR EDX,EDX
5f004827  8ad0                 MOV DL,AL
5f004829  8b442424             MOV EAX,dword ptr [ESP + 0x24]
5f00482d  0bca                 OR ECX,EDX
5f00482f  33d2                 XOR EDX,EDX
5f004831  8ad0                 MOV DL,AL
5f004833  894d28               MOV dword ptr [EBP + 0x28],ECX
5f004836  c1e210               SHL EDX,0x10
5f004839  33c9                 XOR ECX,ECX
5f00483b  8acc                 MOV CL,AH
5f00483d  c1e108               SHL ECX,0x8
5f004840  c1e810               SHR EAX,0x10
5f004843  0bca                 OR ECX,EDX
5f004845  33d2                 XOR EDX,EDX
5f004847  8ad0                 MOV DL,AL
5f004849  8b442420             MOV EAX,dword ptr [ESP + 0x20]
5f00484d  0bca                 OR ECX,EDX
5f00484f  33d2                 XOR EDX,EDX
5f004851  8ad0                 MOV DL,AL
5f004853  894d44               MOV dword ptr [EBP + 0x44],ECX
5f004856  c1e210               SHL EDX,0x10
5f004859  33c9                 XOR ECX,ECX
5f00485b  8acc                 MOV CL,AH
5f00485d  c1e108               SHL ECX,0x8
5f004860  c1e810               SHR EAX,0x10
5f004863  0bca                 OR ECX,EDX
5f004865  33d2                 XOR EDX,EDX
5f004867  8ad0                 MOV DL,AL
5f004869  8b442428             MOV EAX,dword ptr [ESP + 0x28]
5f00486d  0bca                 OR ECX,EDX
5f00486f  33d2                 XOR EDX,EDX
5f004871  8ad0                 MOV DL,AL
5f004873  894d48               MOV dword ptr [EBP + 0x48],ECX
5f004876  c1e210               SHL EDX,0x10
5f004879  33c9                 XOR ECX,ECX
5f00487b  8acc                 MOV CL,AH
5f00487d  c1e108               SHL ECX,0x8
5f004880  c1e810               SHR EAX,0x10
5f004883  0bca                 OR ECX,EDX
5f004885  33d2                 XOR EDX,EDX
5f004887  8ad0                 MOV DL,AL
5f004889  0bca                 OR ECX,EDX
5f00488b  894d64               MOV dword ptr [EBP + 0x64],ECX
5f00488e  8b44242c             MOV EAX,dword ptr [ESP + 0x2c]
5f004892  33c9                 XOR ECX,ECX
5f004894  8acc                 MOV CL,AH
5f004896  33d2                 XOR EDX,EDX
5f004898  c1e108               SHL ECX,0x8
5f00489b  8ad0                 MOV DL,AL
5f00489d  c1e210               SHL EDX,0x10
5f0048a0  c1e810               SHR EAX,0x10
5f0048a3  0bca                 OR ECX,EDX
5f0048a5  33d2                 XOR EDX,EDX
5f0048a7  8ad0                 MOV DL,AL
5f0048a9  8b442430             MOV EAX,dword ptr [ESP + 0x30]
5f0048ad  c1e810               SHR EAX,0x10
5f0048b0  0bca                 OR ECX,EDX
5f0048b2  33d2                 XOR EDX,EDX
5f0048b4  894d54               MOV dword ptr [EBP + 0x54],ECX
5f0048b7  33c9                 XOR ECX,ECX
5f0048b9  8ad0                 MOV DL,AL
5f0048bb  8a4c2431             MOV CL,byte ptr [ESP + 0x31]
5f0048bf  33c0                 XOR EAX,EAX
5f0048c1  c1e108               SHL ECX,0x8
5f0048c4  8a442430             MOV AL,byte ptr [ESP + 0x30]
5f0048c8  c1e010               SHL EAX,0x10
5f0048cb  0bca                 OR ECX,EDX
5f0048cd  0bc8                 OR ECX,EAX
5f0048cf  6a00                 PUSH 0x0
5f0048d1  894d50               MOV dword ptr [EBP + 0x50],ECX
5f0048d4  ff1570d2005f         CALL dword ptr [0x5f00d270]
5f0048da  8bf8                 MOV EDI,EAX
5f0048dc  6a00                 PUSH 0x0
5f0048de  55                   PUSH EBP
5f0048df  8d4568               LEA EAX,[EBP + 0x68]
5f0048e2  50                   PUSH EAX
5f0048e3  6a04                 PUSH 0x4
5f0048e5  55                   PUSH EBP
5f0048e6  57                   PUSH EDI
5f0048e7  ff15e4d1005f         CALL dword ptr [0x5f00d1e4]
5f0048ed  8bf0                 MOV ESI,EAX
5f0048ef  57                   PUSH EDI
5f0048f0  6a00                 PUSH 0x0
5f0048f2  ff15a4d2005f         CALL dword ptr [0x5f00d2a4]
5f0048f8  55                   PUSH EBP
5f0048f9  ff15ecd1005f         CALL dword ptr [0x5f00d1ec]
5f0048ff  8bc6                 MOV EAX,ESI
5f004901  5d                   POP EBP
5f004902  5f                   POP EDI
5f004903  5e                   POP ESI
5f004904  5b                   POP EBX
5f004905  c22000               RET 0x20

; ==== FUNCTION FUN_5f004908 entry=5f004908 sig=undefined __stdcall FUN_5f004908(void)
5f004908  51                   PUSH ECX
5f004909  8bcc                 MOV ECX,ESP
5f00490b  83c108               ADD ECX,0x8
5f00490e  3d00100000           CMP EAX,0x1000
5f004913  7210                 JC 0x5f004925
5f004915  81e900100000         SUB ECX,0x1000
5f00491b  830900               OR dword ptr [ECX],0x0
5f00491e  2d00100000           SUB EAX,0x1000
5f004923  ebe9                 JMP 0x5f00490e
5f004925  2bc8                 SUB ECX,EAX
5f004927  830900               OR dword ptr [ECX],0x0
5f00492a  8bc4                 MOV EAX,ESP
5f00492c  8be1                 MOV ESP,ECX
5f00492e  8b08                 MOV ECX,dword ptr [EAX]
5f004930  8b4004               MOV EAX,dword ptr [EAX + 0x4]
5f004933  ffe0                 JMP EAX
; undefined 1 bytes at 5f004935

; ==== FUNCTION KERNEL32.DLL::lstrcmpiA entry=5f004936 sig=int __stdcall lstrcmpiA(LPCSTR lpString1, LPCSTR lpString2)
5f004936  ff2540d2005f         JMP dword ptr [0x5f00d240]

; ==== FUNCTION KERNEL32.DLL::GetCurrentThreadId entry=5f00493c sig=DWORD __stdcall GetCurrentThreadId(void)
5f00493c  ff252cd2005f         JMP dword ptr [0x5f00d22c]

; ==== FUNCTION KERNEL32.DLL::lstrlenA entry=5f004942 sig=int __stdcall lstrlenA(LPCSTR lpString)
5f004942  ff2534d2005f         JMP dword ptr [0x5f00d234]

; ==== FUNCTION KERNEL32.DLL::LeaveCriticalSection entry=5f004948 sig=void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
5f004948  ff2530d2005f         JMP dword ptr [0x5f00d230]

; ==== FUNCTION KERNEL32.DLL::EnterCriticalSection entry=5f00494e sig=void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
5f00494e  ff2520d2005f         JMP dword ptr [0x5f00d220]

; ==== FUNCTION KERNEL32.DLL::GetProfileStringA entry=5f004954 sig=DWORD __stdcall GetProfileStringA(LPCSTR lpAppName, LPCSTR lpKeyName, LPCSTR lpDefault, LPSTR lpReturnedString, DWORD nSize)
5f004954  ff2528d2005f         JMP dword ptr [0x5f00d228]

; ==== FUNCTION KERNEL32.DLL::GlobalAddAtomA entry=5f00495a sig=ATOM __stdcall GlobalAddAtomA(LPCSTR lpString)
5f00495a  ff2524d2005f         JMP dword ptr [0x5f00d224]

; ==== FUNCTION KERNEL32.DLL::GetWindowsDirectoryA entry=5f004960 sig=UINT __stdcall GetWindowsDirectoryA(LPSTR lpBuffer, UINT uSize)
5f004960  ff2514d2005f         JMP dword ptr [0x5f00d214]

; ==== FUNCTION KERNEL32.DLL::GetSystemDirectoryA entry=5f004966 sig=UINT __stdcall GetSystemDirectoryA(LPSTR lpBuffer, UINT uSize)
5f004966  ff251cd2005f         JMP dword ptr [0x5f00d21c]

; ==== FUNCTION KERNEL32.DLL::GetModuleFileNameA entry=5f00496c sig=DWORD __stdcall GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize)
5f00496c  ff2518d2005f         JMP dword ptr [0x5f00d218]

; ==== FUNCTION KERNEL32.DLL::GetVersion entry=5f004972 sig=DWORD __stdcall GetVersion(void)
5f004972  ff2508d2005f         JMP dword ptr [0x5f00d208]

; ==== FUNCTION KERNEL32.DLL::GetEnvironmentVariableA entry=5f004978 sig=DWORD __stdcall GetEnvironmentVariableA(LPCSTR lpName, LPSTR lpBuffer, DWORD nSize)
5f004978  ff2510d2005f         JMP dword ptr [0x5f00d210]

; ==== FUNCTION KERNEL32.DLL::GlobalDeleteAtom entry=5f00497e sig=ATOM __stdcall GlobalDeleteAtom(ATOM nAtom)
5f00497e  ff250cd2005f         JMP dword ptr [0x5f00d20c]

; ==== FUNCTION KERNEL32.DLL::lstrcmpA entry=5f004984 sig=int __stdcall lstrcmpA(LPCSTR lpString1, LPCSTR lpString2)
5f004984  ff25f0d1005f         JMP dword ptr [0x5f00d1f0]

; ==== FUNCTION KERNEL32.DLL::InitializeCriticalSection entry=5f00498a sig=void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
5f00498a  ff2504d2005f         JMP dword ptr [0x5f00d204]

; ==== FUNCTION KERNEL32.DLL::GetProcAddress entry=5f004990 sig=FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
5f004990  ff25f4d1005f         JMP dword ptr [0x5f00d1f4]

; ==== FUNCTION KERNEL32.DLL::GetModuleHandleA entry=5f004996 sig=HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)
5f004996  ff2500d2005f         JMP dword ptr [0x5f00d200]

; ==== FUNCTION KERNEL32.DLL::GlobalFree entry=5f00499c sig=HGLOBAL __stdcall GlobalFree(HGLOBAL hMem)
5f00499c  ff25ecd1005f         JMP dword ptr [0x5f00d1ec]

; ==== FUNCTION KERNEL32.DLL::GlobalAlloc entry=5f0049a2 sig=HGLOBAL __stdcall GlobalAlloc(UINT uFlags, SIZE_T dwBytes)
5f0049a2  ff2538d2005f         JMP dword ptr [0x5f00d238]

; ==== FUNCTION KERNEL32.DLL::LoadResource entry=5f0049a8 sig=HGLOBAL __stdcall LoadResource(HMODULE hModule, HRSRC hResInfo)
5f0049a8  ff253cd2005f         JMP dword ptr [0x5f00d23c]

; ==== FUNCTION KERNEL32.DLL::SizeofResource entry=5f0049ae sig=DWORD __stdcall SizeofResource(HMODULE hModule, HRSRC hResInfo)
5f0049ae  ff25f8d1005f         JMP dword ptr [0x5f00d1f8]

; ==== FUNCTION KERNEL32.DLL::FindResourceA entry=5f0049b4 sig=HRSRC __stdcall FindResourceA(HMODULE hModule, LPCSTR lpName, LPCSTR lpType)
5f0049b4  ff25fcd1005f         JMP dword ptr [0x5f00d1fc]

; ==== FUNCTION USER32.DLL::GetPropA entry=5f0049ba sig=HANDLE __stdcall GetPropA(HWND hWnd, LPCSTR lpString)
5f0049ba  ff25fcd2005f         JMP dword ptr [0x5f00d2fc]

; ==== FUNCTION USER32.DLL::SetPropA entry=5f0049c0 sig=BOOL __stdcall SetPropA(HWND hWnd, LPCSTR lpString, HANDLE hData)
5f0049c0  ff25f8d2005f         JMP dword ptr [0x5f00d2f8]

; ==== FUNCTION USER32.DLL::SetWindowLongA entry=5f0049c6 sig=LONG __stdcall SetWindowLongA(HWND hWnd, int nIndex, LONG dwNewLong)
5f0049c6  ff25f4d2005f         JMP dword ptr [0x5f00d2f4]

; ==== FUNCTION USER32.DLL::GetClassNameA entry=5f0049cc sig=int __stdcall GetClassNameA(HWND hWnd, LPSTR lpClassName, int nMaxCount)
5f0049cc  ff25f0d2005f         JMP dword ptr [0x5f00d2f0]

; ==== FUNCTION USER32.DLL::IsWindowUnicode entry=5f0049d2 sig=BOOL __stdcall IsWindowUnicode(HWND hWnd)
5f0049d2  ff25ecd2005f         JMP dword ptr [0x5f00d2ec]

; ==== FUNCTION USER32.DLL::SendMessageA entry=5f0049d8 sig=LRESULT __stdcall SendMessageA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
5f0049d8  ff25e8d2005f         JMP dword ptr [0x5f00d2e8]

; ==== FUNCTION USER32.DLL::GetWindowLongA entry=5f0049de sig=LONG __stdcall GetWindowLongA(HWND hWnd, int nIndex)
5f0049de  ff25e4d2005f         JMP dword ptr [0x5f00d2e4]

; ==== FUNCTION USER32.DLL::UnhookWindowsHookEx entry=5f0049e4 sig=BOOL __stdcall UnhookWindowsHookEx(HHOOK hhk)
5f0049e4  ff25e0d2005f         JMP dword ptr [0x5f00d2e0]

; ==== FUNCTION USER32.DLL::CallNextHookEx entry=5f0049ea sig=LRESULT __stdcall CallNextHookEx(HHOOK hhk, int nCode, WPARAM wParam, LPARAM lParam)
5f0049ea  ff25dcd2005f         JMP dword ptr [0x5f00d2dc]

; ==== FUNCTION USER32.DLL::SetWindowsHookExA entry=5f0049f0 sig=HHOOK __stdcall SetWindowsHookExA(int idHook, HOOKPROC lpfn, HINSTANCE hmod, DWORD dwThreadId)
5f0049f0  ff25d8d2005f         JMP dword ptr [0x5f00d2d8]

; ==== FUNCTION USER32.DLL::RemovePropA entry=5f0049f6 sig=HANDLE __stdcall RemovePropA(HWND hWnd, LPCSTR lpString)
5f0049f6  ff25d4d2005f         JMP dword ptr [0x5f00d2d4]

; ==== FUNCTION USER32.DLL::CallWindowProcA entry=5f0049fc sig=LRESULT __stdcall CallWindowProcA(WNDPROC lpPrevWndFunc, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
5f0049fc  ff25d0d2005f         JMP dword ptr [0x5f00d2d0]

; ==== FUNCTION USER32.DLL::GetClientRect entry=5f004a02 sig=BOOL __stdcall GetClientRect(HWND hWnd, LPRECT lpRect)
5f004a02  ff25ccd2005f         JMP dword ptr [0x5f00d2cc]

; ==== FUNCTION USER32.DLL::CharNextA entry=5f004a08 sig=LPSTR __stdcall CharNextA(LPCSTR lpsz)
5f004a08  ff25c8d2005f         JMP dword ptr [0x5f00d2c8]

; ==== FUNCTION USER32.DLL::GetWindow entry=5f004a0e sig=HWND __stdcall GetWindow(HWND hWnd, UINT uCmd)
5f004a0e  ff25c4d2005f         JMP dword ptr [0x5f00d2c4]

; ==== FUNCTION USER32.DLL::GetParent entry=5f004a14 sig=HWND __stdcall GetParent(HWND hWnd)
5f004a14  ff2558d2005f         JMP dword ptr [0x5f00d258]

; ==== FUNCTION USER32.DLL::ReleaseDC entry=5f004a1a sig=int __stdcall ReleaseDC(HWND hWnd, HDC hDC)
5f004a1a  ff25a4d2005f         JMP dword ptr [0x5f00d2a4]

; ==== FUNCTION USER32.DLL::OffsetRect entry=5f004a20 sig=BOOL __stdcall OffsetRect(LPRECT lprc, int dx, int dy)
5f004a20  ff254cd2005f         JMP dword ptr [0x5f00d24c]

; ==== FUNCTION USER32.DLL::InflateRect entry=5f004a26 sig=BOOL __stdcall InflateRect(LPRECT lprc, int dx, int dy)
5f004a26  ff2550d2005f         JMP dword ptr [0x5f00d250]

; ==== FUNCTION USER32.DLL::GetWindowRect entry=5f004a2c sig=BOOL __stdcall GetWindowRect(HWND hWnd, LPRECT lpRect)
5f004a2c  ff2554d2005f         JMP dword ptr [0x5f00d254]

; ==== FUNCTION USER32.DLL::GetWindowDC entry=5f004a32 sig=HDC __stdcall GetWindowDC(HWND hWnd)
5f004a32  ff2500d3005f         JMP dword ptr [0x5f00d300]

; ==== FUNCTION USER32.DLL::IsIconic entry=5f004a38 sig=BOOL __stdcall IsIconic(HWND hWnd)
5f004a38  ff255cd2005f         JMP dword ptr [0x5f00d25c]

; ==== FUNCTION USER32.DLL::DefWindowProcA entry=5f004a3e sig=LRESULT __stdcall DefWindowProcA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
5f004a3e  ff2560d2005f         JMP dword ptr [0x5f00d260]

; ==== FUNCTION USER32.DLL::DefDlgProcA entry=5f004a44 sig=LRESULT __stdcall DefDlgProcA(HWND hDlg, UINT Msg, WPARAM wParam, LPARAM lParam)
5f004a44  ff2564d2005f         JMP dword ptr [0x5f00d264]

; ==== FUNCTION USER32.DLL::GetClassInfoA entry=5f004a4a sig=BOOL __stdcall GetClassInfoA(HINSTANCE hInstance, LPCSTR lpClassName, LPWNDCLASSA lpWndClass)
5f004a4a  ff2568d2005f         JMP dword ptr [0x5f00d268]

; ==== FUNCTION USER32.DLL::GetSystemMetrics entry=5f004a50 sig=int __stdcall GetSystemMetrics(int nIndex)
5f004a50  ff256cd2005f         JMP dword ptr [0x5f00d26c]

; ==== FUNCTION USER32.DLL::GetDC entry=5f004a56 sig=HDC __stdcall GetDC(HWND hWnd)
5f004a56  ff2570d2005f         JMP dword ptr [0x5f00d270]

; ==== FUNCTION USER32.DLL::CharPrevA entry=5f004a5c sig=LPSTR __stdcall CharPrevA(LPCSTR lpszStart, LPCSTR lpszCurrent)
5f004a5c  ff2574d2005f         JMP dword ptr [0x5f00d274]

; ==== FUNCTION USER32.DLL::MessageBoxA entry=5f004a62 sig=int __stdcall MessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType)
5f004a62  ff2578d2005f         JMP dword ptr [0x5f00d278]

; ==== FUNCTION USER32.DLL::GetSysColor entry=5f004a68 sig=DWORD __stdcall GetSysColor(int nIndex)
5f004a68  ff257cd2005f         JMP dword ptr [0x5f00d27c]

; ==== FUNCTION USER32.DLL::InvalidateRect entry=5f004a6e sig=BOOL __stdcall InvalidateRect(HWND hWnd, RECT * lpRect, BOOL bErase)
5f004a6e  ff2580d2005f         JMP dword ptr [0x5f00d280]

; ==== FUNCTION USER32.DLL::ScreenToClient entry=5f004a74 sig=BOOL __stdcall ScreenToClient(HWND hWnd, LPPOINT lpPoint)
5f004a74  ff2584d2005f         JMP dword ptr [0x5f00d284]

; ==== FUNCTION USER32.DLL::ValidateRect entry=5f004a7a sig=BOOL __stdcall ValidateRect(HWND hWnd, RECT * lpRect)
5f004a7a  ff2588d2005f         JMP dword ptr [0x5f00d288]

; ==== FUNCTION USER32.DLL::DrawFocusRect entry=5f004a80 sig=BOOL __stdcall DrawFocusRect(HDC hDC, RECT * lprc)
5f004a80  ff258cd2005f         JMP dword ptr [0x5f00d28c]

; ==== FUNCTION USER32.DLL::IntersectRect entry=5f004a86 sig=BOOL __stdcall IntersectRect(LPRECT lprcDst, RECT * lprcSrc1, RECT * lprcSrc2)
5f004a86  ff2590d2005f         JMP dword ptr [0x5f00d290]

; ==== FUNCTION USER32.DLL::GetFocus entry=5f004a8c sig=HWND __stdcall GetFocus(void)
5f004a8c  ff2594d2005f         JMP dword ptr [0x5f00d294]

; ==== FUNCTION USER32.DLL::DrawTextA entry=5f004a92 sig=int __stdcall DrawTextA(HDC hdc, LPCSTR lpchText, int cchText, LPRECT lprc, UINT format)
5f004a92  ff2598d2005f         JMP dword ptr [0x5f00d298]

; ==== FUNCTION USER32.DLL::IsWindowEnabled entry=5f004a98 sig=BOOL __stdcall IsWindowEnabled(HWND hWnd)
5f004a98  ff259cd2005f         JMP dword ptr [0x5f00d29c]

; ==== FUNCTION USER32.DLL::ClientToScreen entry=5f004a9e sig=BOOL __stdcall ClientToScreen(HWND hWnd, LPPOINT lpPoint)
5f004a9e  ff25a0d2005f         JMP dword ptr [0x5f00d2a0]

; ==== FUNCTION USER32.DLL::GetWindowTextA entry=5f004aa4 sig=int __stdcall GetWindowTextA(HWND hWnd, LPSTR lpString, int nMaxCount)
5f004aa4  ff2548d2005f         JMP dword ptr [0x5f00d248]

; ==== FUNCTION USER32.DLL::ExcludeUpdateRgn entry=5f004aaa sig=int __stdcall ExcludeUpdateRgn(HDC hDC, HWND hWnd)
5f004aaa  ff25a8d2005f         JMP dword ptr [0x5f00d2a8]

; ==== FUNCTION USER32.DLL::EndPaint entry=5f004ab0 sig=BOOL __stdcall EndPaint(HWND hWnd, PAINTSTRUCT * lpPaint)
5f004ab0  ff25acd2005f         JMP dword ptr [0x5f00d2ac]

; ==== FUNCTION USER32.DLL::BeginPaint entry=5f004ab6 sig=HDC __stdcall BeginPaint(HWND hWnd, LPPAINTSTRUCT lpPaint)
5f004ab6  ff25b0d2005f         JMP dword ptr [0x5f00d2b0]

; ==== FUNCTION USER32.DLL::ShowCaret entry=5f004abc sig=BOOL __stdcall ShowCaret(HWND hWnd)
5f004abc  ff25b4d2005f         JMP dword ptr [0x5f00d2b4]

; ==== FUNCTION USER32.DLL::MapWindowPoints entry=5f004ac2 sig=int __stdcall MapWindowPoints(HWND hWndFrom, HWND hWndTo, LPPOINT lpPoints, UINT cPoints)
5f004ac2  ff25b8d2005f         JMP dword ptr [0x5f00d2b8]

; ==== FUNCTION USER32.DLL::HideCaret entry=5f004ac8 sig=BOOL __stdcall HideCaret(HWND hWnd)
5f004ac8  ff25bcd2005f         JMP dword ptr [0x5f00d2bc]

; ==== FUNCTION USER32.DLL::GetWindowTextLengthA entry=5f004ace sig=int __stdcall GetWindowTextLengthA(HWND hWnd)
5f004ace  ff25c0d2005f         JMP dword ptr [0x5f00d2c0]

; ==== FUNCTION GDI32.DLL::DeleteObject entry=5f004ad4 sig=BOOL __stdcall DeleteObject(HGDIOBJ ho)
5f004ad4  ff25acd1005f         JMP dword ptr [0x5f00d1ac]

; ==== FUNCTION GDI32.DLL::PatBlt entry=5f004ada sig=BOOL __stdcall PatBlt(HDC hdc, int x, int y, int w, int h, DWORD rop)
5f004ada  ff25b0d1005f         JMP dword ptr [0x5f00d1b0]

; ==== FUNCTION GDI32.DLL::SetBkColor entry=5f004ae0 sig=COLORREF __stdcall SetBkColor(HDC hdc, COLORREF color)
5f004ae0  ff25bcd1005f         JMP dword ptr [0x5f00d1bc]

; ==== FUNCTION GDI32.DLL::ExtTextOutA entry=5f004ae6 sig=BOOL __stdcall ExtTextOutA(HDC hdc, int x, int y, UINT options, RECT * lprect, LPCSTR lpString, UINT c, INT * lpDx)
5f004ae6  ff25b4d1005f         JMP dword ptr [0x5f00d1b4]

; ==== FUNCTION GDI32.DLL::IntersectClipRect entry=5f004aec sig=int __stdcall IntersectClipRect(HDC hdc, int left, int top, int right, int bottom)
5f004aec  ff25b8d1005f         JMP dword ptr [0x5f00d1b8]

; ==== FUNCTION GDI32.DLL::GetTextExtentPointA entry=5f004af2 sig=BOOL __stdcall GetTextExtentPointA(HDC hdc, LPCSTR lpString, int c, LPSIZE lpsz)
5f004af2  ff25c8d1005f         JMP dword ptr [0x5f00d1c8]

; ==== FUNCTION GDI32.DLL::SetTextColor entry=5f004af8 sig=COLORREF __stdcall SetTextColor(HDC hdc, COLORREF color)
5f004af8  ff25c0d1005f         JMP dword ptr [0x5f00d1c0]

; ==== FUNCTION GDI32.DLL::SelectObject entry=5f004afe sig=HGDIOBJ __stdcall SelectObject(HDC hdc, HGDIOBJ h)
5f004afe  ff25c4d1005f         JMP dword ptr [0x5f00d1c4]

; ==== FUNCTION GDI32.DLL::GetDeviceCaps entry=5f004b04 sig=int __stdcall GetDeviceCaps(HDC hdc, int index)
5f004b04  ff25d4d1005f         JMP dword ptr [0x5f00d1d4]

; ==== FUNCTION GDI32.DLL::CreateSolidBrush entry=5f004b0a sig=HBRUSH __stdcall CreateSolidBrush(COLORREF color)
5f004b0a  ff25ccd1005f         JMP dword ptr [0x5f00d1cc]

; ==== FUNCTION GDI32.DLL::DeleteDC entry=5f004b10 sig=BOOL __stdcall DeleteDC(HDC hdc)
5f004b10  ff25d0d1005f         JMP dword ptr [0x5f00d1d0]

; ==== FUNCTION GDI32.DLL::BitBlt entry=5f004b16 sig=BOOL __stdcall BitBlt(HDC hdc, int x, int y, int cx, int cy, HDC hdcSrc, int x1, int y1, DWORD rop)
5f004b16  ff25e0d1005f         JMP dword ptr [0x5f00d1e0]

; ==== FUNCTION GDI32.DLL::CreateCompatibleDC entry=5f004b1c sig=HDC __stdcall CreateCompatibleDC(HDC hdc)
5f004b1c  ff25d8d1005f         JMP dword ptr [0x5f00d1d8]

; ==== FUNCTION GDI32.DLL::SetBkMode entry=5f004b22 sig=int __stdcall SetBkMode(HDC hdc, int mode)
5f004b22  ff25dcd1005f         JMP dword ptr [0x5f00d1dc]

; ==== FUNCTION GDI32.DLL::CreateDIBitmap entry=5f004b28 sig=HBITMAP __stdcall CreateDIBitmap(HDC hdc, BITMAPINFOHEADER * pbmih, DWORD flInit, void * pjBits, BITMAPINFO * pbmi, UINT iUsage)
5f004b28  ff25e4d1005f         JMP dword ptr [0x5f00d1e4]

; ==== FUNCTION FUN_5f004b2e entry=5f004b2e sig=undefined FUN_5f004b2e(void)
5f004b2e  0000                 ADD byte ptr [EAX],AL
5f004b30  0000                 ADD byte ptr [EAX],AL
5f004b32  0000                 ADD byte ptr [EAX],AL
5f004b34  0000                 ADD byte ptr [EAX],AL
5f004b36  0000                 ADD byte ptr [EAX],AL
5f004b38  0000                 ADD byte ptr [EAX],AL
5f004b3a  0000                 ADD byte ptr [EAX],AL
5f004b3c  0000                 ADD byte ptr [EAX],AL
5f004b3e  0000                 ADD byte ptr [EAX],AL
5f004b40  0000                 ADD byte ptr [EAX],AL
5f004b42  0000                 ADD byte ptr [EAX],AL
5f004b44  0000                 ADD byte ptr [EAX],AL
5f004b46  0000                 ADD byte ptr [EAX],AL
5f004b48  0000                 ADD byte ptr [EAX],AL
5f004b4a  0000                 ADD byte ptr [EAX],AL
5f004b4c  0000                 ADD byte ptr [EAX],AL
5f004b4e  0000                 ADD byte ptr [EAX],AL
5f004b50  0000                 ADD byte ptr [EAX],AL
5f004b52  0000                 ADD byte ptr [EAX],AL
5f004b54  0000                 ADD byte ptr [EAX],AL
5f004b56  0000                 ADD byte ptr [EAX],AL
5f004b58  0000                 ADD byte ptr [EAX],AL
5f004b5a  0000                 ADD byte ptr [EAX],AL
5f004b5c  0000                 ADD byte ptr [EAX],AL
5f004b5e  0000                 ADD byte ptr [EAX],AL
5f004b60  0000                 ADD byte ptr [EAX],AL
5f004b62  0000                 ADD byte ptr [EAX],AL
5f004b64  0000                 ADD byte ptr [EAX],AL
5f004b66  0000                 ADD byte ptr [EAX],AL
5f004b68  0000                 ADD byte ptr [EAX],AL
5f004b6a  0000                 ADD byte ptr [EAX],AL
5f004b6c  0000                 ADD byte ptr [EAX],AL
5f004b6e  0000                 ADD byte ptr [EAX],AL
5f004b70  0000                 ADD byte ptr [EAX],AL
5f004b72  0000                 ADD byte ptr [EAX],AL
5f004b74  0000                 ADD byte ptr [EAX],AL
5f004b76  0000                 ADD byte ptr [EAX],AL
5f004b78  0000                 ADD byte ptr [EAX],AL
5f004b7a  0000                 ADD byte ptr [EAX],AL
5f004b7c  0000                 ADD byte ptr [EAX],AL
5f004b7e  0000                 ADD byte ptr [EAX],AL
5f004b80  0000                 ADD byte ptr [EAX],AL
5f004b82  0000                 ADD byte ptr [EAX],AL
5f004b84  0000                 ADD byte ptr [EAX],AL
5f004b86  0000                 ADD byte ptr [EAX],AL
5f004b88  0000                 ADD byte ptr [EAX],AL
5f004b8a  0000                 ADD byte ptr [EAX],AL
5f004b8c  0000                 ADD byte ptr [EAX],AL
5f004b8e  0000                 ADD byte ptr [EAX],AL
5f004b90  0000                 ADD byte ptr [EAX],AL
5f004b92  0000                 ADD byte ptr [EAX],AL
5f004b94  0000                 ADD byte ptr [EAX],AL
5f004b96  0000                 ADD byte ptr [EAX],AL
5f004b98  0000                 ADD byte ptr [EAX],AL
5f004b9a  0000                 ADD byte ptr [EAX],AL
5f004b9c  0000                 ADD byte ptr [EAX],AL
5f004b9e  0000                 ADD byte ptr [EAX],AL
5f004ba0  0000                 ADD byte ptr [EAX],AL
5f004ba2  0000                 ADD byte ptr [EAX],AL
5f004ba4  0000                 ADD byte ptr [EAX],AL
5f004ba6  0000                 ADD byte ptr [EAX],AL
5f004ba8  0000                 ADD byte ptr [EAX],AL
5f004baa  0000                 ADD byte ptr [EAX],AL
5f004bac  0000                 ADD byte ptr [EAX],AL
5f004bae  0000                 ADD byte ptr [EAX],AL
5f004bb0  0000                 ADD byte ptr [EAX],AL
5f004bb2  0000                 ADD byte ptr [EAX],AL
5f004bb4  0000                 ADD byte ptr [EAX],AL
5f004bb6  0000                 ADD byte ptr [EAX],AL
5f004bb8  0000                 ADD byte ptr [EAX],AL
5f004bba  0000                 ADD byte ptr [EAX],AL
5f004bbc  0000                 ADD byte ptr [EAX],AL
5f004bbe  0000                 ADD byte ptr [EAX],AL
5f004bc0  0000                 ADD byte ptr [EAX],AL
5f004bc2  0000                 ADD byte ptr [EAX],AL
5f004bc4  0000                 ADD byte ptr [EAX],AL
5f004bc6  0000                 ADD byte ptr [EAX],AL
5f004bc8  0000                 ADD byte ptr [EAX],AL
5f004bca  0000                 ADD byte ptr [EAX],AL
5f004bcc  0000                 ADD byte ptr [EAX],AL
5f004bce  0000                 ADD byte ptr [EAX],AL
5f004bd0  0000                 ADD byte ptr [EAX],AL
5f004bd2  0000                 ADD byte ptr [EAX],AL
5f004bd4  0000                 ADD byte ptr [EAX],AL
5f004bd6  0000                 ADD byte ptr [EAX],AL
5f004bd8  0000                 ADD byte ptr [EAX],AL
5f004bda  0000                 ADD byte ptr [EAX],AL
5f004bdc  0000                 ADD byte ptr [EAX],AL
5f004bde  0000                 ADD byte ptr [EAX],AL
5f004be0  0000                 ADD byte ptr [EAX],AL
5f004be2  0000                 ADD byte ptr [EAX],AL
5f004be4  0000                 ADD byte ptr [EAX],AL
5f004be6  0000                 ADD byte ptr [EAX],AL
5f004be8  0000                 ADD byte ptr [EAX],AL
5f004bea  0000                 ADD byte ptr [EAX],AL
5f004bec  0000                 ADD byte ptr [EAX],AL
5f004bee  0000                 ADD byte ptr [EAX],AL
5f004bf0  0000                 ADD byte ptr [EAX],AL
5f004bf2  0000                 ADD byte ptr [EAX],AL
5f004bf4  0000                 ADD byte ptr [EAX],AL
5f004bf6  0000                 ADD byte ptr [EAX],AL
5f004bf8  0000                 ADD byte ptr [EAX],AL
5f004bfa  0000                 ADD byte ptr [EAX],AL
5f004bfc  0000                 ADD byte ptr [EAX],AL
5f004bfe  0000                 ADD byte ptr [EAX],AL
; undefined 260 bytes at 5f005000
5f005104  undefined4 ??
5f005108  undefined4 ??
5f00510c  undefined4 ??
; undefined 32 bytes at 5f005110
5f005130  undefined4 ??
5f005134  undefined4 ??
5f005138  undefined2 ??
5f00513a  undefined2 ??
5f00513c  undefined2 ??
5f00513e  undefined2 ??
5f005140  undefined2 ??
5f005142  undefined2 ??
5f005144  undefined2 ??
; undefined 2 bytes at 5f005146
5f005148  undefined4 ??
5f00514c  undefined4 ??
5f005150  undefined2 ??
5f005152  undefined2 ??
5f005154  undefined1 ??
; undefined 3 bytes at 5f005155
5f005158  undefined4 ??
; undefined 4 bytes at 5f00515c
5f005160  undefined4 ??
; undefined 8 bytes at 5f005164
5f00516c  undefined4 ??
; undefined 4 bytes at 5f005170
5f005174  undefined4 ??
5f005178  undefined4 ??
5f00517c  undefined4 ??
5f005180  undefined4 ??
5f005184  undefined4 ??
5f005188  undefined4 ??
5f00518c  undefined4 ??
5f005190  undefined4 ??
5f005194  undefined4 ??
5f005198  undefined4 ??
5f00519c  undefined4 ??
; undefined 4 bytes at 5f0051a0
5f0051a4  undefined4 ??
5f0051a8  undefined4 ??
; undefined 4 bytes at 5f0051ac
5f0051b0  undefined4 ??
; undefined 4 bytes at 5f0051b4
5f0051b8  undefined4 ??
5f0051bc  undefined4 ??
5f0051c0  undefined4 ??
5f0051c4  undefined4 ??
; undefined 20424 bytes at 5f0051c8
5f00a190  undefined4 ??
5f00a194  undefined4 ??
; undefined 16 bytes at 5f00a198
5f00a1a8  undefined4 ??
; undefined 116 bytes at 5f00a1ac
5f00a220  undefined4 ??
; undefined 4 bytes at 5f00a224
5f00a228  undefined4 ??
5f00a22c  undefined4 ??
; undefined 4 bytes at 5f00a230
5f00a234  undefined1 ??
5f00a235  undefined1 ??
; undefined 2 bytes at 5f00a236
5f00b000  IMAGE_DEBUG_DIRECTORY 
; undefined 4 bytes at 5f00b01c
5f00b020  ds "Win32 3D control dll"
5f00b038  ds "Button"
; undefined 13 bytes at 5f00b03f
5f00b04c  addr 5f0038a0
5f00b050  addr 5f002bc0
5f00b054  undefined2 0001h
; undefined 2 bytes at 5f00b056
5f00b058  ds "ListBox"
; undefined 12 bytes at 5f00b060
5f00b06c  addr 5f004270
5f00b070  addr 5f002c40
5f00b074  undefined2 0002h
; undefined 22 bytes at 5f00b076
5f00b08c  addr 5f004010
5f00b090  addr 5f002bf0
; undefined 4 bytes at 5f00b094
5f00b098  ds "ComboBox"
; undefined 11 bytes at 5f00b0a1
5f00b0ac  addr 5f0042a0
5f00b0b0  addr 5f002cd0
; undefined 4 bytes at 5f00b0b4
5f00b0b8  ds "Static"
; undefined 12 bytes at 5f00b0c0
5f00b0cc  addr 5f004570
5f00b0d0  addr 5f002da0
; undefined 4 bytes at 5f00b0d4
5f00b0d8  ds "ComboLBox"
; undefined 8 bytes at 5f00b0e4
5f00b0ec  addr 5f004270
5f00b0f0  addr 5f002c90
; undefined 4 bytes at 5f00b0f4
5f00b0f8  undefined2 0014h
5f00b0fa  undefined2 000Fh
; undefined 268 bytes at 5f00b0fc
5f00c008  ds "hangeul"
5f00c010  ds "kanji"
; undefined 2 bytes at 5f00c016
5f00c018  ds "english"
5f00c020  ds "roman"
; undefined 2 bytes at 5f00c026
5f00c028  ds "hangeulmenu"
5f00c034  ds "kanjimenu"
; undefined 2 bytes at 5f00c03e
5f00c040  ds "windows"
5f00c048  ds "C3dHNew"
5f00c050  ds "C3dLNew"
5f00c058  ds "C3dNew"
; undefined 29 bytes at 5f00c05f
5f00c07c  ds "This application uses CTL3D32.DLL, which has not been correctly installed.  CTL3D32.DLL must be installed in the Windows system directory."
; undefined 1 bytes at 5f00c107
5f00c108  ds "This application uses CTL3D32.DLL, which is not the correct version.  This version of CTL3D32.DLL is designed only for Win32s or Windows 95 systems."
; undefined 3 bytes at 5f00c19d
5f00c1a0  ds "CTL3D32.DLL"
5f00c1ac  ds "Ctl3d_RunAlways"
5f00c1bc  ds "#32770"
; undefined 5 bytes at 5f00c1c3
5f00c1c8  ds "DisableThreadLibraryCalls"
; undefined 2 bytes at 5f00c1e2
5f00c1e4  ds "KERNEL32.DLL"
; undefined 15 bytes at 5f00c1f1
5f00d000  ddw D090h
5f00d004  ddw 0h
5f00d008  ddw 0h
5f00d00c  ddw D4A8h
5f00d010  ddw D1ECh
5f00d014  ddw D0ECh
5f00d018  ddw 0h
5f00d01c  ddw 0h
5f00d020  ddw D78Ch
5f00d024  ddw D248h
5f00d028  ddw D050h
5f00d02c  ddw 0h
5f00d030  ddw 0h
5f00d034  ddw D886h
5f00d038  ddw D1ACh
; undefined 20 bytes at 5f00d03c
5f00d050  ddw D798h
5f00d054  ddw D7A8h
5f00d058  ddw D7C0h
5f00d05c  ddw D7CEh
5f00d060  ddw D7B2h
5f00d064  ddw D7F8h
5f00d068  ddw D808h
5f00d06c  ddw D7E2h
5f00d070  ddw D828h
5f00d074  ddw D83Ch
5f00d078  ddw D818h
5f00d07c  ddw D852h
5f00d080  ddw D868h
5f00d084  ddw D848h
5f00d088  ddw D874h
; undefined 4 bytes at 5f00d08c
5f00d090  ddw D45Ah
5f00d094  ddw D40Ch
5f00d098  ddw D434h
5f00d09c  ddw D486h
5f00d0a0  ddw D498h
5f00d0a4  ddw D446h
5f00d0a8  ddw D418h
5f00d0ac  ddw D3D0h
5f00d0b0  ddw D3F8h
5f00d0b4  ddw D3DEh
5f00d0b8  ddw D38Ch
5f00d0bc  ddw D3BAh
5f00d0c0  ddw D3A4h
5f00d0c4  ddw D34Eh
5f00d0c8  ddw D37Ah
5f00d0cc  ddw D366h
5f00d0d0  ddw D314h
5f00d0d4  ddw D336h
5f00d0d8  ddw D32Ah
5f00d0dc  ddw D468h
5f00d0e0  ddw D476h
5f00d0e4  ddw D308h
; undefined 4 bytes at 5f00d0e8
5f00d0ec  ddw D70Ah
5f00d0f0  ddw D5C0h
5f00d0f4  ddw D5CEh
5f00d0f8  ddw D5DCh
5f00d0fc  ddw D5A8h
5f00d100  ddw D5FAh
5f00d104  ddw D606h
5f00d108  ddw D618h
5f00d10c  ddw D626h
5f00d110  ddw D636h
5f00d114  ddw D64Ah
5f00d118  ddw D652h
5f00d11c  ddw D65Eh
5f00d120  ddw D66Ch
5f00d124  ddw D67Ah
5f00d128  ddw D68Ch
5f00d12c  ddw D69Eh
5f00d130  ddw D6AEh
5f00d134  ddw D6BEh
5f00d138  ddw D6CEh
5f00d13c  ddw D6DAh
5f00d140  ddw D6E6h
5f00d144  ddw D6F8h
5f00d148  ddw D5B4h
5f00d14c  ddw D71Ch
5f00d150  ddw D730h
5f00d154  ddw D73Ch
5f00d158  ddw D74Ah
5f00d15c  ddw D756h
5f00d160  ddw D768h
5f00d164  ddw D774h
5f00d168  ddw D59Ch
5f00d16c  ddw D590h
5f00d170  ddw D580h
5f00d174  ddw D56Eh
5f00d178  ddw D560h
5f00d17c  ddw D54Ch
5f00d180  ddw D53Ah
5f00d184  ddw D524h
5f00d188  ddw D512h
5f00d18c  ddw D502h
5f00d190  ddw D4F0h
5f00d194  ddw D4E0h
5f00d198  ddw D4CEh
5f00d19c  ddw D4C2h
5f00d1a0  ddw D4B6h
5f00d1a4  ddw D5ECh
; undefined 4 bytes at 5f00d1a8
5f00d1ac  addr 0000d798
5f00d1b0  addr 0000d7a8
5f00d1b4  addr 0000d7c0
5f00d1b8  addr 0000d7ce
5f00d1bc  addr 0000d7b2
5f00d1c0  addr 0000d7f8
5f00d1c4  addr 0000d808
5f00d1c8  addr 0000d7e2
5f00d1cc  addr 0000d828
5f00d1d0  addr 0000d83c
5f00d1d4  addr 0000d818
5f00d1d8  addr 0000d852
5f00d1dc  addr 0000d868
5f00d1e0  addr 0000d848
5f00d1e4  addr 0000d874
; undefined 4 bytes at 5f00d1e8
5f00d1ec  addr 0000d45a
5f00d1f0  addr 0000d40c
5f00d1f4  addr 0000d434
5f00d1f8  addr 0000d486
5f00d1fc  addr 0000d498
5f00d200  addr 0000d446
5f00d204  addr 0000d418
5f00d208  addr 0000d3d0
5f00d20c  addr 0000d3f8
5f00d210  addr 0000d3de
5f00d214  addr 0000d38c
5f00d218  addr 0000d3ba
5f00d21c  addr 0000d3a4
5f00d220  addr 0000d34e
5f00d224  addr 0000d37a
5f00d228  addr 0000d366
5f00d22c  addr 0000d314
5f00d230  addr 0000d336
5f00d234  addr 0000d32a
5f00d238  addr 0000d468
5f00d23c  addr 0000d476
5f00d240  addr 0000d308
; undefined 4 bytes at 5f00d244
5f00d248  addr 0000d70a
5f00d24c  addr 0000d5c0
5f00d250  addr 0000d5ce
5f00d254  addr 0000d5dc
5f00d258  addr 0000d5a8
5f00d25c  addr 0000d5fa
5f00d260  addr 0000d606
5f00d264  addr 0000d618
5f00d268  addr 0000d626
5f00d26c  addr 0000d636
5f00d270  addr 0000d64a
5f00d274  addr 0000d652
5f00d278  addr 0000d65e
5f00d27c  addr 0000d66c
5f00d280  addr 0000d67a
5f00d284  addr 0000d68c
5f00d288  addr 0000d69e
5f00d28c  addr 0000d6ae
5f00d290  addr 0000d6be
5f00d294  addr 0000d6ce
5f00d298  addr 0000d6da
5f00d29c  addr 0000d6e6
5f00d2a0  addr 0000d6f8
5f00d2a4  addr 0000d5b4
5f00d2a8  addr 0000d71c
5f00d2ac  addr 0000d730
5f00d2b0  addr 0000d73c
5f00d2b4  addr 0000d74a
5f00d2b8  addr 0000d756
5f00d2bc  addr 0000d768
5f00d2c0  addr 0000d774
5f00d2c4  addr 0000d59c
5f00d2c8  addr 0000d590
5f00d2cc  addr 0000d580
5f00d2d0  addr 0000d56e
5f00d2d4  addr 0000d560
5f00d2d8  addr 0000d54c
5f00d2dc  addr 0000d53a
5f00d2e0  addr 0000d524
5f00d2e4  addr 0000d512
5f00d2e8  addr 0000d502
5f00d2ec  addr 0000d4f0
5f00d2f0  addr 0000d4e0
5f00d2f4  addr 0000d4ce
5f00d2f8  addr 0000d4c2
5f00d2fc  addr 0000d4b6
5f00d300  addr 0000d5ec
; undefined 4 bytes at 5f00d304
5f00d308  dw 26Ch
5f00d30a  ds "lstrcmpiA"
5f00d314  dw C7h
5f00d316  ds "GetCurrentThreadId"
; undefined 1 bytes at 5f00d329
5f00d32a  dw 275h
5f00d32c  ds "lstrlenA"
; undefined 1 bytes at 5f00d335
5f00d336  dw 177h
5f00d338  ds "LeaveCriticalSection"
; undefined 1 bytes at 5f00d34d
5f00d34e  dw 4Fh
5f00d350  ds "EnterCriticalSection"
; undefined 1 bytes at 5f00d365
5f00d366  dw 10Fh
5f00d368  ds "GetProfileStringA"
5f00d37a  dw 13Eh
5f00d37c  ds "GlobalAddAtomA"
; undefined 1 bytes at 5f00d38b
5f00d38c  dw 13Ch
5f00d38e  ds "GetWindowsDirectoryA"
; undefined 1 bytes at 5f00d3a3
5f00d3a4  dw 11Dh
5f00d3a6  ds "GetSystemDirectoryA"
5f00d3ba  dw E9h
5f00d3bc  ds "GetModuleFileNameA"
; undefined 1 bytes at 5f00d3cf
5f00d3d0  dw 137h
5f00d3d2  ds "GetVersion"
; undefined 1 bytes at 5f00d3dd
5f00d3de  dw D3h
5f00d3e0  ds "GetEnvironmentVariableA"
5f00d3f8  dw 142h
5f00d3fa  ds "GlobalDeleteAtom"
; undefined 1 bytes at 5f00d40b
5f00d40c  dw 269h
5f00d40e  ds "lstrcmpA"
; undefined 1 bytes at 5f00d417
5f00d418  dw 164h
5f00d41a  ds "InitializeCriticalSection"
5f00d434  dw 103h
5f00d436  ds "GetProcAddress"
; undefined 1 bytes at 5f00d445
5f00d446  dw EBh
5f00d448  ds "GetModuleHandleA"
; undefined 1 bytes at 5f00d459
5f00d45a  dw 147h
5f00d45c  ds "GlobalFree"
; undefined 1 bytes at 5f00d467
5f00d468  dw 140h
5f00d46a  ds "GlobalAlloc"
5f00d476  dw 17Dh
5f00d478  ds "LoadResource"
; undefined 1 bytes at 5f00d485
5f00d486  dw 217h
5f00d488  ds "SizeofResource"
; undefined 1 bytes at 5f00d497
5f00d498  dw 7Eh
5f00d49a  ds "FindResourceA"
5f00d4a8  ds "KERNEL32.dll"
; undefined 1 bytes at 5f00d4b5
5f00d4b6  dw 118h
5f00d4b8  ds "GetPropA"
; undefined 1 bytes at 5f00d4c1
5f00d4c2  dw 1F1h
5f00d4c4  ds "SetPropA"
; undefined 1 bytes at 5f00d4cd
5f00d4ce  dw 204h
5f00d4d0  ds "SetWindowLongA"
; undefined 1 bytes at 5f00d4df
5f00d4e0  dw D9h
5f00d4e2  ds "GetClassNameA"
5f00d4f0  dw 15Eh
5f00d4f2  ds "IsWindowUnicode"
5f00d502  dw 1C6h
5f00d504  ds "SendMessageA"
; undefined 1 bytes at 5f00d511
5f00d512  dw 130h
5f00d514  ds "GetWindowLongA"
; undefined 1 bytes at 5f00d523
5f00d524  dw 22Eh
5f00d526  ds "UnhookWindowsHookEx"
5f00d53a  dw 10h
5f00d53c  ds "CallNextHookEx"
; undefined 1 bytes at 5f00d54b
5f00d54c  dw 20Eh
5f00d54e  ds "SetWindowsHookExA"
5f00d560  dw 1BBh
5f00d562  ds "RemovePropA"
5f00d56e  dw 11h
5f00d570  ds "CallWindowProcA"
5f00d580  dw DCh
5f00d582  ds "GetClientRect"
5f00d590  dw 1Eh
5f00d592  ds "CharNextA"
5f00d59c  dw 12Dh
5f00d59e  ds "GetWindow"
5f00d5a8  dw 115h
5f00d5aa  ds "GetParent"
5f00d5b4  dw 1B9h
5f00d5b6  ds "ReleaseDC"
5f00d5c0  dw 197h
5f00d5c2  ds "OffsetRect"
; undefined 1 bytes at 5f00d5cd
5f00d5ce  dw 141h
5f00d5d0  ds "InflateRect"
5f00d5dc  dw 133h
5f00d5de  ds "GetWindowRect"
5f00d5ec  dw 12Fh
5f00d5ee  ds "GetWindowDC"
5f00d5fa  dw 159h
5f00d5fc  ds "IsIconic"
; undefined 1 bytes at 5f00d605
5f00d606  dw 7Dh
5f00d608  ds "DefWindowProcA"
; undefined 1 bytes at 5f00d617
5f00d618  dw 77h
5f00d61a  ds "DefDlgProcA"
5f00d626  dw D3h
5f00d628  ds "GetClassInfoA"
5f00d636  dw 123h
5f00d638  ds "GetSystemMetrics"
; undefined 1 bytes at 5f00d649
5f00d64a  dw E6h
5f00d64c  ds "GetDC"
5f00d652  dw 21h
5f00d654  ds "CharPrevA"
5f00d65e  dw 188h
5f00d660  ds "MessageBoxA"
5f00d66c  dw 120h
5f00d66e  ds "GetSysColor"
5f00d67a  dw 148h
5f00d67c  ds "InvalidateRect"
; undefined 1 bytes at 5f00d68b
5f00d68c  dw 1BFh
5f00d68e  ds "ScreenToClient"
; undefined 1 bytes at 5f00d69d
5f00d69e  dw 23Bh
5f00d6a0  ds "ValidateRect"
; undefined 1 bytes at 5f00d6ad
5f00d6ae  dw 9Bh
5f00d6b0  ds "DrawFocusRect"
5f00d6be  dw 147h
5f00d6c0  ds "IntersectRect"
5f00d6ce  dw F0h
5f00d6d0  ds "GetFocus"
; undefined 1 bytes at 5f00d6d9
5f00d6da  dw A3h
5f00d6dc  ds "DrawTextA"
5f00d6e6  dw 15Dh
5f00d6e8  ds "IsWindowEnabled"
5f00d6f8  dw 33h
5f00d6fa  ds "ClientToScreen"
; undefined 1 bytes at 5f00d709
5f00d70a  dw 135h
5f00d70c  ds "GetWindowTextA"
; undefined 1 bytes at 5f00d71b
5f00d71c  dw C3h
5f00d71e  ds "ExcludeUpdateRgn"
; undefined 1 bytes at 5f00d72f
5f00d730  dw AFh
5f00d732  ds "EndPaint"
; undefined 1 bytes at 5f00d73b
5f00d73c  dw 9h
5f00d73e  ds "BeginPaint"
; undefined 1 bytes at 5f00d749
5f00d74a  dw 211h
5f00d74c  ds "ShowCaret"
5f00d756  dw 183h
5f00d758  ds "MapWindowPoints"
5f00d768  dw 13Dh
5f00d76a  ds "HideCaret"
5f00d774  dw 136h
5f00d776  ds "GetWindowTextLengthA"
; undefined 1 bytes at 5f00d78b
5f00d78c  ds "USER32.dll"
; undefined 1 bytes at 5f00d797
5f00d798  dw 46h
5f00d79a  ds "DeleteObject"
; undefined 1 bytes at 5f00d7a7
5f00d7a8  dw 115h
5f00d7aa  ds "PatBlt"
; undefined 1 bytes at 5f00d7b1
5f00d7b2  dw 142h
5f00d7b4  ds "SetBkColor"
; undefined 1 bytes at 5f00d7bf
5f00d7c0  dw 63h
5f00d7c2  ds "ExtTextOutA"
5f00d7ce  dw 108h
5f00d7d0  ds "IntersectClipRect"
5f00d7e2  dw FBh
5f00d7e4  ds "GetTextExtentPointA"
5f00d7f8  dw 163h
5f00d7fa  ds "SetTextColor"
; undefined 1 bytes at 5f00d807
5f00d808  dw 13Ch
5f00d80a  ds "SelectObject"
; undefined 1 bytes at 5f00d817
5f00d818  dw BCh
5f00d81a  ds "GetDeviceCaps"
5f00d828  dw 40h
5f00d82a  ds "CreateSolidBrush"
; undefined 1 bytes at 5f00d83b
5f00d83c  dw 43h
5f00d83e  ds "DeleteDC"
; undefined 1 bytes at 5f00d847
5f00d848  dw Ah
5f00d84a  ds "BitBlt"
; undefined 1 bytes at 5f00d851
5f00d852  dw 1Fh
5f00d854  ds "CreateCompatibleDC"
; undefined 1 bytes at 5f00d867
5f00d868  dw 143h
5f00d86a  ds "SetBkMode"
5f00d874  dw 25h
5f00d876  ds "CreateDIBitmap"
; undefined 1 bytes at 5f00d885
5f00d886  ds "GDI32.dll"
; undefined 368 bytes at 5f00d890
5f00e000  IMAGE_DIRECTORY_ENTRY_EXPORT 
5f00e028  ibo32 5f001910
5f00e02c  ibo32 5f001b00
5f00e030  ibo32 5f001930
5f00e034  ibo32 5f001d00
5f00e038  ibo32 5f001920
5f00e03c  ibo32 5f001da0
5f00e040  ibo32 5f0038a0
5f00e044  ibo32 5f004010
5f00e048  ibo32 5f004270
5f00e04c  ibo32 5f0042a0
5f00e050  ibo32 5f004570
5f00e054  ibo32 5f0015d0
5f00e058  ibo32 5f001620
5f00e05c  ibo32 NaP
; undefined 52 bytes at 5f00e060
5f00e094  ibo32 5f00e136
5f00e098  ibo32 5f00e143
5f00e09c  ibo32 5f00e152
5f00e0a0  ibo32 5f00e164
5f00e0a4  ibo32 5f00e178
5f00e0a8  ibo32 5f00e189
5f00e0ac  ibo32 5f00e197
5f00e0b0  ibo32 5f00e1a7
5f00e0b4  ibo32 5f00e1ba
5f00e0b8  ibo32 5f00e1c7
5f00e0bc  ibo32 5f00e1d4
5f00e0c0  ibo32 5f00e1e0
5f00e0c4  ibo32 5f00e1f4
5f00e0c8  ibo32 5f00e202
5f00e0cc  ibo32 5f00e210
5f00e0d0  ibo32 5f00e221
5f00e0d4  ibo32 5f00e234
5f00e0d8  ibo32 5f00e245
5f00e0dc  ibo32 5f00e258
5f00e0e0  ibo32 5f00e26c
5f00e0e4  ibo32 5f00e27c
5f00e0e8  ibo32 5f00e28f
5f00e0ec  ibo32 5f00e2a1
5f00e0f0  ibo32 5f00e2af
5f00e0f4  ibo32 5f00e2bd
5f00e0f8  dw 6h
5f00e0fa  dw 9h
5f00e0fc  dw Fh
5f00e0fe  dw 1Ah
5f00e100  dw 5h
5f00e102  dw 3h
5f00e104  dw 11h
5f00e106  dw 13h
5f00e108  dw 10h
5f00e10a  dw 4h
5f00e10c  dw 0h
5f00e10e  dw 16h
5f00e110  dw Bh
5f00e112  dw 12h
5f00e114  dw 2h
5f00e116  dw 18h
5f00e118  dw 1h
5f00e11a  dw 14h
5f00e11c  dw 17h
5f00e11e  dw Ch
5f00e120  dw 19h
5f00e122  dw 15h
5f00e124  dw 7h
5f00e126  dw 8h
5f00e128  dw Ah
5f00e12a  ds "CTL3D32.dll"
5f00e136  ds "BtnWndProc3d"
5f00e143  ds "ComboWndProc3d"
5f00e152  ds "Ctl3dAutoSubclass"
5f00e164  ds "Ctl3dAutoSubclassEx"
5f00e178  ds "Ctl3dColorChange"
5f00e189  ds "Ctl3dCtlColor"
5f00e197  ds "Ctl3dCtlColorEx"
5f00e1a7  ds "Ctl3dDlgFramePaint"
5f00e1ba  ds "Ctl3dDlgProc"
5f00e1c7  ds "Ctl3dEnabled"
5f00e1d4  ds "Ctl3dGetVer"
5f00e1e0  ds "Ctl3dIsAutoSubclass"
5f00e1f4  ds "Ctl3dRegister"
5f00e202  ds "Ctl3dSetStyle"
5f00e210  ds "Ctl3dSubclassCtl"
5f00e221  ds "Ctl3dSubclassCtlEx"
5f00e234  ds "Ctl3dSubclassDlg"
5f00e245  ds "Ctl3dSubclassDlgEx"
5f00e258  ds "Ctl3dUnAutoSubclass"
5f00e26c  ds "Ctl3dUnregister"
5f00e27c  ds "Ctl3dUnsubclassCtl"
5f00e28f  ds "Ctl3dWinIniChange"
5f00e2a1  ds "EditWndProc3d"
5f00e2af  ds "ListWndProc3d"
5f00e2bd  ds "StaticWndProc3d"
; undefined 307 bytes at 5f00e2cd
5f00f000  IMAGE_RESOURCE_DIRECTORY 
5f00f010  IMAGE_RESOURCE_DIRECTORY_ENTRY 
5f00f018  IMAGE_RESOURCE_DIRECTORY_ENTRY 
5f00f020  IMAGE_RESOURCE_DIRECTORY 
5f00f030  IMAGE_RESOURCE_DIRECTORY_ENTRY 
5f00f038  IMAGE_RESOURCE_DIRECTORY 
5f00f048  IMAGE_RESOURCE_DIRECTORY_ENTRY 
5f00f050  IMAGE_RESOURCE_DIRECTORY 
5f00f060  IMAGE_RESOURCE_DIRECTORY_ENTRY 
5f00f068  IMAGE_RESOURCE_DIRECTORY 
5f00f078  IMAGE_RESOURCE_DIRECTORY_ENTRY 
5f00f080  IMAGE_RESOURCE_DATA_ENTRY 
5f00f090  IMAGE_RESOURCE_DATA_ENTRY 
Rsrc_Version_1_409:
5f00f0a0  VS_VERSION_INFO 
5f00f0fc  StringFileInfo 
5f00f102  unicode u"StringFileInfo"
5f00f120  StringTable 
5f00f126  unicode u"040904E4"
5f00f138  StringInfo 
5f00f13e  unicode u"CompanyName"
; undefined 2 bytes at 5f00f156
5f00f158  unicode u"Microsoft Corporation"
5f00f184  StringInfo 
5f00f18a  unicode u"FileDescription"
; undefined 2 bytes at 5f00f1aa
5f00f1ac  unicode u"Ctl3D 3D Windows Controls"
5f00f1e0  StringInfo 
5f00f1e6  unicode u"FileVersion"
; undefined 2 bytes at 5f00f1fe
5f00f200  unicode u"2.31.000"
; undefined 2 bytes at 5f00f212
5f00f214  StringInfo 
5f00f21a  unicode u"InternalName"
5f00f234  unicode u"CTL3D32"
5f00f244  StringInfo 
5f00f24a  unicode u"LegalCopyright"
5f00f268  unicode u"Copyright © Microsoft Corp. "
5f00f2a2  StringInfo 
5f00f2a8  unicode u"2-1995"
; undefined 2 bytes at 5f00f2b6
5f00f2b8  unicode u"H",14h,00h,01h,00h,"ProductName"
; undefined 2 bytes at 5f00f2d6
5f00f2d8  StringInfo 
5f00f2de  unicode u"Windows Controls"
5f00f300  unicode u"6\t",01h,00h,"ProductVersion"
5f00f324  StringInfo 
5f00f32a  unicode u"1,0,0"
; undefined 2 bytes at 5f00f336
5f00f338  unicode u"D"
5f00f33c  rFileInfo 
5f00f342  unicode u"rFileInfo"
; undefined 2 bytes at 5f00f356
5f00f358  Translation 
5f00f35e  unicode u"Translation"
; undefined 6 bytes at 5f00f376
Rsrc_Bitmap_67c7_409:
5f00f37c  BitmapRes <Bitmap-Image>
; undefined 160 bytes at 5f00f960
5f010000  IMAGE_BASE_RELOCATION 
5f010008  dw 3010h
5f01000a  dw 3018h
5f01000c  dw 3040h
5f01000e  dw 304Ch
5f010010  dw 3055h
5f010012  dw 305Dh
5f010014  dw 3077h
5f010016  dw 3084h
5f010018  dw 3097h
5f01001a  dw 30ABh
5f01001c  dw 30BFh
5f01001e  dw 30D3h
5f010020  dw 30E3h
5f010022  dw 30FEh
5f010024  dw 3108h
5f010026  dw 311Ah
5f010028  dw 3123h
5f01002a  dw 312Ah
5f01002c  dw 313Ah
5f01002e  dw 3143h
5f010030  dw 314Bh
5f010032  dw 3174h
5f010034  dw 317Dh
5f010036  dw 3185h
5f010038  dw 318Fh
5f01003a  dw 3196h
5f01003c  dw 319Dh
5f01003e  dw 31ADh
5f010040  dw 31D7h
5f010042  dw 31E3h
5f010044  dw 31F7h
5f010046  dw 31FCh
5f010048  dw 3201h
5f01004a  dw 3219h
5f01004c  dw 321Fh
5f01004e  dw 3225h
5f010050  dw 322Ch
5f010052  dw 3232h
5f010054  dw 323Ah
5f010056  dw 323Fh
5f010058  dw 3278h
5f01005a  dw 3280h
5f01005c  dw 3288h
5f01005e  dw 3294h
5f010060  dw 32BEh
5f010062  dw 32D2h
5f010064  dw 32E4h
5f010066  dw 32EBh
5f010068  dw 3324h
5f01006a  dw 3343h
5f01006c  dw 334Fh
5f01006e  dw 339Ch
5f010070  dw 33CBh
5f010072  dw 33E1h
5f010074  dw 33E9h
5f010076  dw 3414h
5f010078  dw 344Eh
5f01007a  dw 3456h
5f01007c  dw 34EFh
5f01007e  dw 350Eh
5f010080  dw 3538h
5f010082  dw 354Eh
5f010084  dw 3556h
5f010086  dw 3590h
5f010088  dw 35A4h
5f01008a  dw 35D1h
5f01008c  dw 35D7h
5f01008e  dw 35DCh
5f010090  dw 35E2h
5f010092  dw 35E8h
5f010094  dw 35EEh
5f010096  dw 360Eh
5f010098  dw 3628h
5f01009a  dw 362Fh
5f01009c  dw 3635h
5f01009e  dw 363Bh
5f0100a0  dw 364Bh
5f0100a2  dw 3656h
5f0100a4  dw 365Dh
5f0100a6  dw 3669h
5f0100a8  dw 3671h
5f0100aa  dw 3678h
5f0100ac  dw 367Eh
5f0100ae  dw 3684h
5f0100b0  dw 368Ch
5f0100b2  dw 36A1h
5f0100b4  dw 36AAh
5f0100b6  dw 36B1h
5f0100b8  dw 36B7h
5f0100ba  dw 36BDh
5f0100bc  dw 36C3h
5f0100be  dw 36F3h
5f0100c0  dw 3706h
5f0100c2  dw 3727h
5f0100c4  dw 372Dh
5f0100c6  dw 3733h
5f0100c8  dw 3743h
5f0100ca  dw 374Dh
5f0100cc  dw 3754h
5f0100ce  dw 3766h
5f0100d0  dw 376Eh
5f0100d2  dw 3774h
5f0100d4  dw 377Ch
5f0100d6  dw 378Ah
5f0100d8  dw 3798h
5f0100da  dw 379Eh
5f0100dc  dw 37A8h
5f0100de  dw 37AEh
5f0100e0  dw 37B8h
5f0100e2  dw 37BDh
5f0100e4  dw 37C7h
5f0100e6  dw 37D0h
5f0100e8  dw 37DAh
5f0100ea  dw 37E0h
5f0100ec  dw 37E6h
5f0100ee  dw 37ECh
5f0100f0  dw 37F2h
5f0100f2  dw 37F7h
5f0100f4  dw 37FDh
5f0100f6  dw 3811h
5f0100f8  dw 3818h
5f0100fa  dw 381Eh
5f0100fc  dw 3832h
5f0100fe  dw 383Ah
5f010100  dw 3841h
5f010102  dw 384Fh
5f010104  dw 3868h
5f010106  dw 386Fh
5f010108  dw 3875h
5f01010a  dw 387Bh
5f01010c  dw 388Bh
5f01010e  dw 3896h
5f010110  dw 389Dh
5f010112  dw 38A5h
5f010114  dw 38ACh
5f010116  dw 38B2h
5f010118  dw 38B8h
5f01011a  dw 38C0h
5f01011c  dw 38D5h
5f01011e  dw 38DEh
5f010120  dw 38E5h
5f010122  dw 38EBh
5f010124  dw 3921h
5f010126  dw 3932h
5f010128  dw 3962h
5f01012a  dw 397Fh
5f01012c  dw 3987h
5f01012e  dw 398Dh
5f010130  dw 3997h
5f010132  dw 39ADh
5f010134  dw 39CBh
5f010136  dw 39E1h
5f010138  dw 39F5h
5f01013a  dw 39FBh
5f01013c  dw 3A0Bh
5f01013e  dw 3A1Bh
5f010140  dw 3A2Dh
5f010142  dw 3A35h
5f010144  dw 3A3Eh
5f010146  dw 3A72h
5f010148  dw 3AAFh
5f01014a  dw 3AB8h
5f01014c  dw 3ACDh
5f01014e  dw 3ADFh
5f010150  dw 3B02h
5f010152  dw 3B1Dh
5f010154  dw 3B97h
5f010156  dw 3B9Fh
5f010158  dw 3BADh
5f01015a  dw 3BE7h
5f01015c  dw 3BEFh
5f01015e  dw 3C12h
5f010160  dw 3C2Fh
5f010162  dw 3C92h
5f010164  dw 3CAFh
5f010166  dw 3CDAh
5f010168  dw 3D12h
5f01016a  dw 3D36h
5f01016c  dw 3D47h
5f01016e  dw 3D54h
5f010170  dw 3D69h
5f010172  dw 3D71h
5f010174  dw 3D77h
5f010176  dw 3D7Fh
5f010178  dw 3D84h
5f01017a  dw 3DA2h
5f01017c  dw 3DA8h
5f01017e  dw 3DB9h
5f010180  dw 3DBFh
5f010182  dw 3E2Ch
5f010184  dw 3E3Fh
5f010186  dw 3E45h
5f010188  dw 3E61h
5f01018a  dw 3E8Eh
5f01018c  dw 3E96h
5f01018e  dw 3EC3h
5f010190  dw 3EDEh
5f010192  dw 3EECh
5f010194  dw 3F2Fh
5f010196  dw 3F52h
5f010198  dw 3F58h
5f01019a  dw 3F60h
5f01019c  dw 3F8Eh
5f01019e  dw 3FACh
5f0101a0  dw 3FB6h
5f0101a2  dw 3FCEh
5f0101a4  dw 3FDCh
5f0101a6  dw 0h
5f0101a8  IMAGE_BASE_RELOCATION 
5f0101b0  dw 3021h
5f0101b2  dw 3055h
5f0101b4  dw 3064h
5f0101b6  dw 307Ch
5f0101b8  dw 3084h
5f0101ba  dw 30A5h
5f0101bc  dw 30B3h
5f0101be  dw 30B9h
5f0101c0  dw 30C6h
5f0101c2  dw 30CCh
5f0101c4  dw 30D2h
5f0101c6  dw 30D7h
5f0101c8  dw 30DCh
5f0101ca  dw 30E7h
5f0101cc  dw 30EEh
5f0101ce  dw 30FAh
5f0101d0  dw 3107h
5f0101d2  dw 310Ch
5f0101d4  dw 3111h
5f0101d6  dw 311Ch
5f0101d8  dw 3129h
5f0101da  dw 312Fh
5f0101dc  dw 3135h
5f0101de  dw 314Ah
5f0101e0  dw 3150h
5f0101e2  dw 315Ch
5f0101e4  dw 3162h
5f0101e6  dw 3177h
5f0101e8  dw 3185h
5f0101ea  dw 318Ah
5f0101ec  dw 3192h
5f0101ee  dw 3198h
5f0101f0  dw 31A1h
5f0101f2  dw 31A7h
5f0101f4  dw 31ACh
5f0101f6  dw 31C0h
5f0101f8  dw 31C5h
5f0101fa  dw 31CCh
5f0101fc  dw 31D1h
5f0101fe  dw 31D6h
5f010200  dw 31DEh
5f010202  dw 31E9h
5f010204  dw 31F0h
5f010206  dw 3213h
5f010208  dw 321Dh
5f01020a  dw 3223h
5f01020c  dw 3239h
5f01020e  dw 3243h
5f010210  dw 324Eh
5f010212  dw 3254h
5f010214  dw 325Bh
5f010216  dw 3260h
5f010218  dw 326Dh
5f01021a  dw 3278h
5f01021c  dw 3298h
5f01021e  dw 329Dh
5f010220  dw 32B7h
5f010222  dw 32C4h
5f010224  dw 32CAh
5f010226  dw 32D6h
5f010228  dw 32DCh
5f01022a  dw 32E4h
5f01022c  dw 32F2h
5f01022e  dw 32FAh
5f010230  dw 3308h
5f010232  dw 3310h
5f010234  dw 3315h
5f010236  dw 331Eh
5f010238  dw 3325h
5f01023a  dw 3339h
5f01023c  dw 3341h
5f01023e  dw 3346h
5f010240  dw 334Fh
5f010242  dw 3356h
5f010244  dw 336Ah
5f010246  dw 3372h
5f010248  dw 3384h
5f01024a  dw 33A0h
5f01024c  dw 33A5h
5f01024e  dw 33ABh
5f010250  dw 33CCh
5f010252  dw 33ECh
5f010254  dw 33F6h
5f010256  dw 33FBh
5f010258  dw 3409h
5f01025a  dw 341Fh
5f01025c  dw 3432h
5f01025e  dw 3438h
5f010260  dw 343Dh
5f010262  dw 3450h
5f010264  dw 345Eh
5f010266  dw 3467h
5f010268  dw 346Dh
5f01026a  dw 3478h
5f01026c  dw 347Fh
5f01026e  dw 3488h
5f010270  dw 3492h
5f010272  dw 349Bh
5f010274  dw 34A5h
5f010276  dw 34AEh
5f010278  dw 34B8h
5f01027a  dw 34C1h
5f01027c  dw 34CBh
5f01027e  dw 34D4h
5f010280  dw 34DEh
5f010282  dw 34E7h
5f010284  dw 34F0h
5f010286  dw 34F9h
5f010288  dw 34FFh
5f01028a  dw 3515h
5f01028c  dw 352Dh
5f01028e  dw 353Ch
5f010290  dw 3550h
5f010292  dw 3593h
5f010294  dw 35CEh
5f010296  dw 35E3h
5f010298  dw 3632h
5f01029a  dw 363Dh
5f01029c  dw 365Ah
5f01029e  dw 36DFh
5f0102a0  dw 36E7h
5f0102a2  dw 3709h
5f0102a4  dw 3746h
5f0102a6  dw 378Bh
5f0102a8  dw 3796h
5f0102aa  dw 37D5h
5f0102ac  dw 37F5h
5f0102ae  dw 3802h
5f0102b0  dw 3829h
5f0102b2  dw 384Dh
5f0102b4  dw 386Eh
5f0102b6  dw 3875h
5f0102b8  dw 3884h
5f0102ba  dw 38ADh
5f0102bc  dw 38B7h
5f0102be  dw 38BDh
5f0102c0  dw 38E5h
5f0102c2  dw 3904h
5f0102c4  dw 3924h
5f0102c6  dw 394Ch
5f0102c8  dw 396Ah
5f0102ca  dw 398Fh
5f0102cc  dw 39E9h
5f0102ce  dw 39F6h
5f0102d0  dw 3A19h
5f0102d2  dw 3A20h
5f0102d4  dw 3A26h
5f0102d6  dw 3A2Ch
5f0102d8  dw 3A36h
5f0102da  dw 3A3Dh
5f0102dc  dw 3A4Bh
5f0102de  dw 3A55h
5f0102e0  dw 3A5Bh
5f0102e2  dw 3A61h
5f0102e4  dw 3A68h
5f0102e6  dw 3A6Eh
5f0102e8  dw 3A85h
5f0102ea  dw 3A95h
5f0102ec  dw 3A9Ah
5f0102ee  dw 3AA0h
5f0102f0  dw 3AC3h
5f0102f2  dw 3ACDh
5f0102f4  dw 3ADEh
5f0102f6  dw 3B0Bh
5f0102f8  dw 3B1Bh
5f0102fa  dw 3B2Fh
5f0102fc  dw 3B48h
5f0102fe  dw 3B69h
5f010300  dw 3B73h
5f010302  dw 3BA7h
5f010304  dw 3BB0h
5f010306  dw 3BC3h
5f010308  dw 3BF6h
5f01030a  dw 3C10h
5f01030c  dw 3C19h
5f01030e  dw 3C20h
5f010310  dw 3C46h
5f010312  dw 3C60h
5f010314  dw 3C69h
5f010316  dw 3C70h
5f010318  dw 3C93h
5f01031a  dw 3CAFh
5f01031c  dw 3CD3h
5f01031e  dw 3D0Dh
5f010320  dw 3D59h
5f010322  dw 3DD4h
5f010324  dw 3E1Dh
5f010326  dw 3E23h
5f010328  dw 3E3Ch
5f01032a  dw 3E4Ah
5f01032c  dw 3E5Fh
5f01032e  dw 3E78h
5f010330  dw 3E8Fh
5f010332  dw 3E9Dh
5f010334  dw 3EC0h
5f010336  dw 3EF2h
5f010338  dw 3EFBh
5f01033a  dw 3F5Ah
5f01033c  dw 3F61h
5f01033e  dw 3F69h
5f010340  dw 3F93h
5f010342  dw 3FAFh
5f010344  dw 3FBDh
5f010346  dw 3FCCh
5f010348  dw 3FD3h
5f01034a  dw 3FDBh
5f01034c  IMAGE_BASE_RELOCATION 
5f010354  dw 3003h
5f010356  dw 3054h
5f010358  dw 3067h
5f01035a  dw 308Eh
5f01035c  dw 30A5h
5f01035e  dw 30BEh
5f010360  dw 30D6h
5f010362  dw 30F0h
5f010364  dw 3106h
5f010366  dw 310Dh
5f010368  dw 3115h
5f01036a  dw 3139h
5f01036c  dw 3159h
5f01036e  dw 3165h
5f010370  dw 316Fh
5f010372  dw 319Dh
5f010374  dw 31BEh
5f010376  dw 31D4h
5f010378  dw 31DEh
5f01037a  dw 31EEh
5f01037c  dw 3216h
5f01037e  dw 3221h
5f010380  dw 322Ah
5f010382  dw 3232h
5f010384  dw 32B7h
5f010386  dw 32F6h
5f010388  dw 32FCh
5f01038a  dw 3313h
5f01038c  dw 3324h
5f01038e  dw 3330h
5f010390  dw 3343h
5f010392  dw 3366h
5f010394  dw 3375h
5f010396  dw 338Fh
5f010398  dw 3399h
5f01039a  dw 33C9h
5f01039c  dw 33D9h
5f01039e  dw 33E5h
5f0103a0  dw 33EFh
5f0103a2  dw 33FBh
5f0103a4  dw 340Dh
5f0103a6  dw 3415h
5f0103a8  dw 342Ch
5f0103aa  dw 3472h
5f0103ac  dw 3479h
5f0103ae  dw 348Dh
5f0103b0  dw 34FBh
5f0103b2  dw 350Fh
5f0103b4  dw 354Eh
5f0103b6  dw 355Dh
5f0103b8  dw 3565h
5f0103ba  dw 3600h
5f0103bc  dw 3654h
5f0103be  dw 367Ah
5f0103c0  dw 369Bh
5f0103c2  dw 36DFh
5f0103c4  dw 36FFh
5f0103c6  dw 3707h
5f0103c8  dw 371Fh
5f0103ca  dw 3744h
5f0103cc  dw 374Ch
5f0103ce  dw 3753h
5f0103d0  dw 3786h
5f0103d2  dw 378Eh
5f0103d4  dw 37A6h
5f0103d6  dw 3820h
5f0103d8  dw 3835h
5f0103da  dw 3841h
5f0103dc  dw 384Dh
5f0103de  dw 3860h
5f0103e0  dw 3870h
5f0103e2  dw 3874h
5f0103e4  dw 3878h
5f0103e6  dw 387Ch
5f0103e8  dw 3880h
5f0103ea  dw 3884h
5f0103ec  dw 3888h
5f0103ee  dw 388Ch
5f0103f0  dw 3890h
5f0103f2  dw 3894h
5f0103f4  dw 38DFh
5f0103f6  dw 38E7h
5f0103f8  dw 3908h
5f0103fa  dw 3934h
5f0103fc  dw 396Eh
5f0103fe  dw 398Eh
5f010400  dw 39A4h
5f010402  dw 39BEh
5f010404  dw 39E9h
5f010406  dw 39FFh
5f010408  dw 3A0Eh
5f01040a  dw 3A36h
5f01040c  dw 3A57h
5f01040e  dw 3A64h
5f010410  dw 3A83h
5f010412  dw 3AA1h
5f010414  dw 3AB3h
5f010416  dw 3AC2h
5f010418  dw 3AD2h
5f01041a  dw 3AF1h
5f01041c  dw 3B10h
5f01041e  dw 3B23h
5f010420  dw 3B50h
5f010422  dw 3B54h
5f010424  dw 3B58h
5f010426  dw 3B5Ch
5f010428  dw 3B60h
5f01042a  dw 3B64h
5f01042c  dw 3B68h
5f01042e  dw 3B6Ch
5f010430  dw 3B70h
5f010432  dw 3B90h
5f010434  dw 3BBCh
5f010436  dw 3BD2h
5f010438  dw 3BDEh
5f01043a  dw 3BE5h
5f01043c  dw 3BEDh
5f01043e  dw 3C08h
5f010440  dw 3C3Ah
5f010442  dw 3C67h
5f010444  dw 3C88h
5f010446  dw 3C9Ah
5f010448  dw 3CA3h
5f01044a  dw 3CAAh
5f01044c  dw 3CCEh
5f01044e  dw 3CE5h
5f010450  dw 3CEDh
5f010452  dw 3CF8h
5f010454  dw 3D0Eh
5f010456  dw 3D29h
5f010458  dw 3D35h
5f01045a  dw 3D72h
5f01045c  dw 3D82h
5f01045e  dw 3D89h
5f010460  dw 3DCAh
5f010462  dw 3E29h
5f010464  dw 3E7Ah
5f010466  dw 3E9Ch
5f010468  dw 3EAAh
5f01046a  dw 3F00h
5f01046c  dw 3F08h
5f01046e  dw 3F2Ch
5f010470  dw 3F46h
5f010472  dw 3F58h
5f010474  dw 3FC8h
5f010476  dw 3FE7h
5f010478  IMAGE_BASE_RELOCATION 
5f010480  dw 307Eh
5f010482  dw 3086h
5f010484  dw 30ABh
5f010486  dw 30E3h
5f010488  dw 3136h
5f01048a  dw 3154h
5f01048c  dw 317Eh
5f01048e  dw 31A0h
5f010490  dw 31B4h
5f010492  dw 31D5h
5f010494  dw 3204h
5f010496  dw 3225h
5f010498  dw 322Dh
5f01049a  dw 324Bh
5f01049c  dw 331Ah
5f01049e  dw 3324h
5f0104a0  dw 334Ch
5f0104a2  dw 3382h
5f0104a4  dw 338Dh
5f0104a6  dw 33A5h
5f0104a8  dw 33B7h
5f0104aa  dw 33E0h
5f0104ac  dw 33FBh
5f0104ae  dw 3413h
5f0104b0  dw 341Ah
5f0104b2  dw 3422h
5f0104b4  dw 343Bh
5f0104b6  dw 344Ch
5f0104b8  dw 345Ah
5f0104ba  dw 346Bh
5f0104bc  dw 348Dh
5f0104be  dw 349Dh
5f0104c0  dw 34F4h
5f0104c2  dw 3534h
5f0104c4  dw 3538h
5f0104c6  dw 353Ch
5f0104c8  dw 3540h
5f0104ca  dw 3544h
5f0104cc  dw 3548h
5f0104ce  dw 354Ch
5f0104d0  dw 3550h
5f0104d2  dw 3554h
5f0104d4  dw 3558h
5f0104d6  dw 35ADh
5f0104d8  dw 35B5h
5f0104da  dw 35D7h
5f0104dc  dw 3620h
5f0104de  dw 3630h
5f0104e0  dw 364Eh
5f0104e2  dw 366Fh
5f0104e4  dw 3695h
5f0104e6  dw 36D0h
5f0104e8  dw 36D6h
5f0104ea  dw 36DBh
5f0104ec  dw 36E2h
5f0104ee  dw 36F8h
5f0104f0  dw 36FEh
5f0104f2  dw 3703h
5f0104f4  dw 3709h
5f0104f6  dw 370Fh
5f0104f8  dw 3715h
5f0104fa  dw 371Bh
5f0104fc  dw 3736h
5f0104fe  dw 373Fh
5f010500  dw 374Fh
5f010502  dw 3759h
5f010504  dw 3763h
5f010506  dw 376Dh
5f010508  dw 3776h
5f01050a  dw 377Dh
5f01050c  dw 3782h
5f01050e  dw 3788h
5f010510  dw 37B2h
5f010512  dw 37C9h
5f010514  dw 37D3h
5f010516  dw 37EBh
5f010518  dw 38D6h
5f01051a  dw 38E9h
5f01051c  dw 38F4h
5f01051e  dw 38FBh
5f010520  dw 3938h
5f010522  dw 393Eh
5f010524  dw 3944h
5f010526  dw 394Ah
5f010528  dw 3950h
5f01052a  dw 3956h
5f01052c  dw 395Ch
5f01052e  dw 3962h
5f010530  dw 3968h
5f010532  dw 396Eh
5f010534  dw 3974h
5f010536  dw 397Ah
5f010538  dw 3980h
5f01053a  dw 3986h
5f01053c  dw 398Ch
5f01053e  dw 3992h
5f010540  dw 3998h
5f010542  dw 399Eh
5f010544  dw 39A4h
5f010546  dw 39AAh
5f010548  dw 39B0h
5f01054a  dw 39B6h
5f01054c  dw 39BCh
5f01054e  dw 39C2h
5f010550  dw 39C8h
5f010552  dw 39CEh
5f010554  dw 39D4h
5f010556  dw 39DAh
5f010558  dw 39E0h
5f01055a  dw 39E6h
5f01055c  dw 39ECh
5f01055e  dw 39F2h
5f010560  dw 39F8h
5f010562  dw 39FEh
5f010564  dw 3A04h
5f010566  dw 3A0Ah
5f010568  dw 3A10h
5f01056a  dw 3A16h
5f01056c  dw 3A1Ch
5f01056e  dw 3A22h
5f010570  dw 3A28h
5f010572  dw 3A2Eh
5f010574  dw 3A34h
5f010576  dw 3A3Ah
5f010578  dw 3A40h
5f01057a  dw 3A46h
5f01057c  dw 3A4Ch
5f01057e  dw 3A52h
5f010580  dw 3A58h
5f010582  dw 3A5Eh
5f010584  dw 3A64h
5f010586  dw 3A6Ah
5f010588  dw 3A70h
5f01058a  dw 3A76h
5f01058c  dw 3A7Ch
5f01058e  dw 3A82h
5f010590  dw 3A88h
5f010592  dw 3A8Eh
5f010594  dw 3A94h
5f010596  dw 3A9Ah
5f010598  dw 3AA0h
5f01059a  dw 3AA6h
5f01059c  dw 3AACh
5f01059e  dw 3AB2h
5f0105a0  dw 3AB8h
5f0105a2  dw 3ABEh
5f0105a4  dw 3AC4h
5f0105a6  dw 3ACAh
5f0105a8  dw 3AD0h
5f0105aa  dw 3AD6h
5f0105ac  dw 3ADCh
5f0105ae  dw 3AE2h
5f0105b0  dw 3AE8h
5f0105b2  dw 3AEEh
5f0105b4  dw 3AF4h
5f0105b6  dw 3AFAh
5f0105b8  dw 3B00h
5f0105ba  dw 3B06h
5f0105bc  dw 3B0Ch
5f0105be  dw 3B12h
5f0105c0  dw 3B18h
5f0105c2  dw 3B1Eh
5f0105c4  dw 3B24h
5f0105c6  dw 3B2Ah
5f0105c8  IMAGE_BASE_RELOCATION 
5f0105d0  dw 304Ch
5f0105d2  dw 3050h
5f0105d4  dw 306Ch
5f0105d6  dw 3070h
5f0105d8  dw 308Ch
5f0105da  dw 3090h
5f0105dc  dw 30ACh
5f0105de  dw 30B0h
5f0105e0  dw 30CCh
5f0105e2  dw 30D0h
5f0105e4  dw 30ECh
5f0105e6  dw 30F0h
; undefined 536 bytes at 5f0105e8
