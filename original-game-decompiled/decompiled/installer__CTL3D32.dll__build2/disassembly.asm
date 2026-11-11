; Ghidra listing for stream_004_0001d003.exe (x86:LE:32:default). Labels and types are tool-generated unless they came from the binary.
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
5f00100d  668b0d4e52005f       MOV CX,word ptr [0x5f00524e]
5f001014  51                   PUSH ECX
5f001015  50                   PUSH EAX
5f001016  ff1500d3005f         CALL dword ptr [0x5f00d300]
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
5f00103e  8b3d90a3005f         MOV EDI,dword ptr [0x5f00a390]
5f001044  eb0a                 JMP 0x5f001050
5f001046  8d0480               LEA EAX,[EAX + EAX*0x4]
5f001049  8b3cc5a4a2005f       MOV EDI,dword ptr [EAX*0x8 + 0x5f00a2a4]
5f001050  57                   PUSH EDI
5f001051  33c0                 XOR EAX,EAX
5f001053  66a14e52005f         MOV AX,[0x5f00524e]
5f001059  50                   PUSH EAX
5f00105a  56                   PUSH ESI
5f00105b  ff15fcd2005f         CALL dword ptr [0x5f00d2fc]
5f001061  8bc7                 MOV EAX,EDI
5f001063  5f                   POP EDI
5f001064  5e                   POP ESI
5f001065  c3                   RET
; undefined 10 bytes at 5f001066

; ==== FUNCTION FUN_5f001070 entry=5f001070 sig=undefined __cdecl FUN_5f001070(HWND param_1, LONG param_2)
5f001070  83ec20               SUB ESP,0x20
5f001073  33c0                 XOR EAX,EAX
5f001075  66a14852005f         MOV AX,[0x5f005248]
5f00107b  56                   PUSH ESI
5f00107c  8b742428             MOV ESI,dword ptr [ESP + 0x28]
5f001080  57                   PUSH EDI
5f001081  50                   PUSH EAX
5f001082  8b3d00d3005f         MOV EDI,dword ptr [0x5f00d300]
5f001088  56                   PUSH ESI
5f001089  ffd7                 CALL EDI
5f00108b  85c0                 TEST EAX,EAX
5f00108d  0f85d2000000         JNZ 0x5f001165
5f001093  33c0                 XOR EAX,EAX
5f001095  66a14e52005f         MOV AX,[0x5f00524e]
5f00109b  50                   PUSH EAX
5f00109c  56                   PUSH ESI
5f00109d  ffd7                 CALL EDI
5f00109f  85c0                 TEST EAX,EAX
5f0010a1  0f85be000000         JNZ 0x5f001165
5f0010a7  33c0                 XOR EAX,EAX
5f0010a9  66a15252005f         MOV AX,[0x5f005252]
5f0010af  50                   PUSH EAX
5f0010b0  56                   PUSH ESI
5f0010b1  ffd7                 CALL EDI
5f0010b3  85c0                 TEST EAX,EAX
5f0010b5  0f85aa000000         JNZ 0x5f001165
5f0010bb  33c0                 XOR EAX,EAX
5f0010bd  66a14c52005f         MOV AX,[0x5f00524c]
5f0010c3  50                   PUSH EAX
5f0010c4  56                   PUSH ESI
5f0010c5  ffd7                 CALL EDI
5f0010c7  85c0                 TEST EAX,EAX
5f0010c9  0f8596000000         JNZ 0x5f001165
5f0010cf  33c0                 XOR EAX,EAX
5f0010d1  66a15052005f         MOV AX,[0x5f005250]
5f0010d7  50                   PUSH EAX
5f0010d8  56                   PUSH ESI
5f0010d9  ffd7                 CALL EDI
5f0010db  85c0                 TEST EAX,EAX
5f0010dd  0f8582000000         JNZ 0x5f001165
5f0010e3  33c0                 XOR EAX,EAX
5f0010e5  66a14a52005f         MOV AX,[0x5f00524a]
5f0010eb  50                   PUSH EAX
5f0010ec  56                   PUSH ESI
5f0010ed  ffd7                 CALL EDI
5f0010ef  85c0                 TEST EAX,EAX
5f0010f1  7572                 JNZ 0x5f001165
5f0010f3  56                   PUSH ESI
5f0010f4  e807ffffff           CALL 0x5f001000
5f0010f9  83c404               ADD ESP,0x4
5f0010fc  85c0                 TEST EAX,EAX
5f0010fe  7565                 JNZ 0x5f001165
5f001100  803da5a3005f00       CMP byte ptr [0x5f00a3a5],0x0
5f001107  743d                 JZ 0x5f001146
5f001109  56                   PUSH ESI
5f00110a  ff15ecd2005f         CALL dword ptr [0x5f00d2ec]
5f001110  85c0                 TEST EAX,EAX
5f001112  7532                 JNZ 0x5f001146
5f001114  8d442408             LEA EAX,[ESP + 0x8]
5f001118  6a10                 PUSH 0x10
5f00111a  50                   PUSH EAX
5f00111b  56                   PUSH ESI
5f00111c  ff15f0d2005f         CALL dword ptr [0x5f00d2f0]
5f001122  8d4c2408             LEA ECX,[ESP + 0x8]
5f001126  6800c0005f           PUSH 0x5f00c000
5f00112b  51                   PUSH ECX
5f00112c  ff153cd2005f         CALL dword ptr [0x5f00d23c]
5f001132  85c0                 TEST EAX,EAX
5f001134  7510                 JNZ 0x5f001146
5f001136  8b442430             MOV EAX,dword ptr [ESP + 0x30]
5f00113a  50                   PUSH EAX
5f00113b  6afc                 PUSH -0x4
5f00113d  56                   PUSH ESI
5f00113e  ff15f4d2005f         CALL dword ptr [0x5f00d2f4]
5f001144  eb0e                 JMP 0x5f001154
5f001146  8b442430             MOV EAX,dword ptr [ESP + 0x30]
5f00114a  50                   PUSH EAX
5f00114b  6afc                 PUSH -0x4
5f00114d  56                   PUSH ESI
5f00114e  ff15f8d2005f         CALL dword ptr [0x5f00d2f8]
5f001154  50                   PUSH EAX
5f001155  33c0                 XOR EAX,EAX
5f001157  66a14e52005f         MOV AX,[0x5f00524e]
5f00115d  50                   PUSH EAX
5f00115e  56                   PUSH ESI
5f00115f  ff15fcd2005f         CALL dword ptr [0x5f00d2fc]
5f001165  5f                   POP EDI
5f001166  5e                   POP ESI
5f001167  83c420               ADD ESP,0x20
5f00116a  c3                   RET
; undefined 5 bytes at 5f00116b

; ==== FUNCTION FUN_5f001170 entry=5f001170 sig=LRESULT __stdcall FUN_5f001170(int param_1, WPARAM param_2, int param_3)
5f001170  8b442408             MOV EAX,dword ptr [ESP + 0x8]
5f001174  83ec04               SUB ESP,0x4
5f001177  8b4c2408             MOV ECX,dword ptr [ESP + 0x8]
5f00117b  56                   PUSH ESI
5f00117c  8b742414             MOV ESI,dword ptr [ESP + 0x14]
5f001180  57                   PUSH EDI
5f001181  56                   PUSH ESI
5f001182  8b150c52005f         MOV EDX,dword ptr [0x5f00520c]
5f001188  50                   PUSH EAX
5f001189  51                   PUSH ECX
5f00118a  52                   PUSH EDX
5f00118b  ff15dcd2005f         CALL dword ptr [0x5f00d2dc]
5f001191  8bf8                 MOV EDI,EAX
5f001193  8b0d0852005f         MOV ECX,dword ptr [0x5f005208]
5f001199  394e0c               CMP dword ptr [ESI + 0xc],ECX
5f00119c  7577                 JNZ 0x5f001215
5f00119e  a10c52005f           MOV EAX,[0x5f00520c]
5f0011a3  50                   PUSH EAX
5f0011a4  ff15e0d2005f         CALL dword ptr [0x5f00d2e0]
5f0011aa  66813d6052005f5f03   CMP word ptr [0x5f005260],0x35f
5f0011b3  7218                 JC 0x5f0011cd
5f0011b5  6af0                 PUSH -0x10
5f0011b7  8b460c               MOV EAX,dword ptr [ESI + 0xc]
5f0011ba  50                   PUSH EAX
5f0011bb  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f0011c1  c744240800000000     MOV dword ptr [ESP + 0x8],0x0
5f0011c9  a804                 TEST AL,0x4
5f0011cb  7508                 JNZ 0x5f0011d5
5f0011cd  c744240801000000     MOV dword ptr [ESP + 0x8],0x1
5f0011d5  8d442408             LEA EAX,[ESP + 0x8]
5f0011d9  8b4e0c               MOV ECX,dword ptr [ESI + 0xc]
5f0011dc  50                   PUSH EAX
5f0011dd  6a00                 PUSH 0x0
5f0011df  68f0110000           PUSH 0x11f0
5f0011e4  51                   PUSH ECX
5f0011e5  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f0011eb  837c240800           CMP dword ptr [ESP + 0x8],0x0
5f0011f0  7412                 JZ 0x5f001204
5f0011f2  a11052005f           MOV EAX,[0x5f005210]
5f0011f7  8b4e0c               MOV ECX,dword ptr [ESI + 0xc]
5f0011fa  50                   PUSH EAX
5f0011fb  51                   PUSH ECX
5f0011fc  e86ffeffff           CALL 0x5f001070
5f001201  83c408               ADD ESP,0x8
5f001204  33c0                 XOR EAX,EAX
5f001206  a30c52005f           MOV [0x5f00520c],EAX
5f00120b  a31052005f           MOV [0x5f005210],EAX
5f001210  a30852005f           MOV [0x5f005208],EAX
5f001215  8bc7                 MOV EAX,EDI
5f001217  5f                   POP EDI
5f001218  5e                   POP ESI
5f001219  83c404               ADD ESP,0x4
5f00121c  c20c00               RET 0xc
; undefined 1 bytes at 5f00121f

; ==== FUNCTION FUN_5f001220 entry=5f001220 sig=undefined __cdecl FUN_5f001220(undefined4 param_1, undefined4 param_2)
5f001220  8b442408             MOV EAX,dword ptr [ESP + 0x8]
5f001224  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
5f001228  a31052005f           MOV [0x5f005210],EAX
5f00122d  890d0852005f         MOV dword ptr [0x5f005208],ECX
5f001233  ff1540d2005f         CALL dword ptr [0x5f00d240]
5f001239  50                   PUSH EAX
5f00123a  8b0d5c52005f         MOV ECX,dword ptr [0x5f00525c]
5f001240  51                   PUSH ECX
5f001241  687011005f           PUSH 0x5f001170
5f001246  6a04                 PUSH 0x4
5f001248  ff15d8d2005f         CALL dword ptr [0x5f00d2d8]
5f00124e  a30c52005f           MOV [0x5f00520c],EAX
5f001253  c3                   RET
; undefined 12 bytes at 5f001254

; ==== FUNCTION FUN_5f001260 entry=5f001260 sig=LRESULT __cdecl FUN_5f001260(HWND param_1, UINT param_2, WPARAM param_3, LPARAM param_4, int param_5)
5f001260  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f001264  53                   PUSH EBX
5f001265  56                   PUSH ESI
5f001266  57                   PUSH EDI
5f001267  8b742410             MOV ESI,dword ptr [ESP + 0x10]
5f00126b  50                   PUSH EAX
5f00126c  56                   PUSH ESI
5f00126d  e8aefdffff           CALL 0x5f001020
5f001272  8b4c2424             MOV ECX,dword ptr [ESP + 0x24]
5f001276  8b542420             MOV EDX,dword ptr [ESP + 0x20]
5f00127a  8b5c241c             MOV EBX,dword ptr [ESP + 0x1c]
5f00127e  83c408               ADD ESP,0x8
5f001281  51                   PUSH ECX
5f001282  52                   PUSH EDX
5f001283  53                   PUSH EBX
5f001284  56                   PUSH ESI
5f001285  50                   PUSH EAX
5f001286  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f00128c  8bf8                 MOV EDI,EAX
5f00128e  8b1dd4d2005f         MOV EBX,dword ptr [0x5f00d2d4]
5f001294  33c0                 XOR EAX,EAX
5f001296  66a14e52005f         MOV AX,[0x5f00524e]
5f00129c  50                   PUSH EAX
5f00129d  56                   PUSH ESI
5f00129e  ffd3                 CALL EBX
5f0012a0  33c0                 XOR EAX,EAX
5f0012a2  66a15452005f         MOV AX,[0x5f005254]
5f0012a8  50                   PUSH EAX
5f0012a9  56                   PUSH ESI
5f0012aa  ffd3                 CALL EBX
5f0012ac  8bc7                 MOV EAX,EDI
5f0012ae  5f                   POP EDI
5f0012af  5e                   POP ESI
5f0012b0  5b                   POP EBX
5f0012b1  c3                   RET
; undefined 14 bytes at 5f0012b2

; ==== FUNCTION FUN_5f0012c0 entry=5f0012c0 sig=undefined __cdecl FUN_5f0012c0(undefined4 * param_1)
5f0012c0  56                   PUSH ESI
5f0012c1  8b742408             MOV ESI,dword ptr [ESP + 0x8]
5f0012c5  8b06                 MOV EAX,dword ptr [ESI]
5f0012c7  85c0                 TEST EAX,EAX
5f0012c9  740d                 JZ 0x5f0012d8
5f0012cb  50                   PUSH EAX
5f0012cc  ff15bcd1005f         CALL dword ptr [0x5f00d1bc]
5f0012d2  c70600000000         MOV dword ptr [ESI],0x0
5f0012d8  5e                   POP ESI
5f0012d9  c3                   RET
; undefined 6 bytes at 5f0012da

; ==== FUNCTION FUN_5f0012e0 entry=5f0012e0 sig=undefined __stdcall FUN_5f0012e0(void)
5f0012e0  56                   PUSH ESI
5f0012e1  be8452005f           MOV ESI,0x5f005284
5f0012e6  56                   PUSH ESI
5f0012e7  e8d4ffffff           CALL 0x5f0012c0
5f0012ec  83c404               ADD ESP,0x4
5f0012ef  83c604               ADD ESI,0x4
5f0012f2  81fe9052005f         CMP ESI,0x5f005290
5f0012f8  72ec                 JC 0x5f0012e6
5f0012fa  689052005f           PUSH 0x5f005290
5f0012ff  e8bcffffff           CALL 0x5f0012c0
5f001304  83c404               ADD ESP,0x4
5f001307  5e                   POP ESI
5f001308  c3                   RET
; undefined 7 bytes at 5f001309

; ==== FUNCTION FUN_5f001310 entry=5f001310 sig=undefined __cdecl FUN_5f001310(HDC param_1, int * param_2)
5f001310  8b442408             MOV EAX,dword ptr [ESP + 0x8]
5f001314  56                   PUSH ESI
5f001315  682100f000           PUSH 0xf00021
5f00131a  8b7004               MOV ESI,dword ptr [EAX + 0x4]
5f00131d  8b10                 MOV EDX,dword ptr [EAX]
5f00131f  8b480c               MOV ECX,dword ptr [EAX + 0xc]
5f001322  2bce                 SUB ECX,ESI
5f001324  8b4008               MOV EAX,dword ptr [EAX + 0x8]
5f001327  51                   PUSH ECX
5f001328  2bc2                 SUB EAX,EDX
5f00132a  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
5f00132e  50                   PUSH EAX
5f00132f  56                   PUSH ESI
5f001330  52                   PUSH EDX
5f001331  51                   PUSH ECX
5f001332  ff15b4d1005f         CALL dword ptr [0x5f00d1b4]
5f001338  5e                   POP ESI
5f001339  c3                   RET
; undefined 6 bytes at 5f00133a

; ==== FUNCTION FUN_5f001340 entry=5f001340 sig=undefined __cdecl FUN_5f001340(HDC param_1, int * param_2, ushort param_3, ushort param_4, ushort param_5)
5f001340  8b44240c             MOV EAX,dword ptr [ESP + 0xc]
5f001344  83ec10               SUB ESP,0x10
5f001347  25ffff0000           AND EAX,0xffff
5f00134c  53                   PUSH EBX
5f00134d  56                   PUSH ESI
5f00134e  57                   PUSH EDI
5f00134f  55                   PUSH EBP
5f001350  8b0c856452005f       MOV ECX,dword ptr [EAX*0x4 + 0x5f005264]
5f001357  8b7c2424             MOV EDI,dword ptr [ESP + 0x24]
5f00135b  51                   PUSH ECX
5f00135c  57                   PUSH EDI
5f00135d  ff15b8d1005f         CALL dword ptr [0x5f00d1b8]
5f001363  8bf0                 MOV ESI,EAX
5f001365  8b5c2428             MOV EBX,dword ptr [ESP + 0x28]
5f001369  8d4c2410             LEA ECX,[ESP + 0x10]
5f00136d  8b03                 MOV EAX,dword ptr [EBX]
5f00136f  8b5304               MOV EDX,dword ptr [EBX + 0x4]
5f001372  8b6b08               MOV EBP,dword ptr [EBX + 0x8]
5f001375  8901                 MOV dword ptr [ECX],EAX
5f001377  8b430c               MOV EAX,dword ptr [EBX + 0xc]
5f00137a  895104               MOV dword ptr [ECX + 0x4],EDX
5f00137d  896908               MOV dword ptr [ECX + 0x8],EBP
5f001380  668b6c2434           MOV BP,word ptr [ESP + 0x34]
5f001385  89410c               MOV dword ptr [ECX + 0xc],EAX
5f001388  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f00138c  40                   INC EAX
5f00138d  66f7c50200           TEST BP,0x2
5f001392  8944241c             MOV dword ptr [ESP + 0x1c],EAX
5f001396  7418                 JZ 0x5f0013b0
5f001398  8d442410             LEA EAX,[ESP + 0x10]
5f00139c  6a00                 PUSH 0x0
5f00139e  6a00                 PUSH 0x0
5f0013a0  6a00                 PUSH 0x0
5f0013a2  50                   PUSH EAX
5f0013a3  6a02                 PUSH 0x2
5f0013a5  6a00                 PUSH 0x0
5f0013a7  6a00                 PUSH 0x0
5f0013a9  57                   PUSH EDI
5f0013aa  ff15c8d1005f         CALL dword ptr [0x5f00d1c8]
5f0013b0  8b430c               MOV EAX,dword ptr [EBX + 0xc]
5f0013b3  8944241c             MOV dword ptr [ESP + 0x1c],EAX
5f0013b7  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f0013bb  40                   INC EAX
5f0013bc  66f7c50100           TEST BP,0x1
5f0013c1  89442418             MOV dword ptr [ESP + 0x18],EAX
5f0013c5  7418                 JZ 0x5f0013df
5f0013c7  8d442410             LEA EAX,[ESP + 0x10]
5f0013cb  6a00                 PUSH 0x0
5f0013cd  6a00                 PUSH 0x0
5f0013cf  6a00                 PUSH 0x0
5f0013d1  50                   PUSH EAX
5f0013d2  6a02                 PUSH 0x2
5f0013d4  6a00                 PUSH 0x0
5f0013d6  6a00                 PUSH 0x0
5f0013d8  57                   PUSH EDI
5f0013d9  ff15c8d1005f         CALL dword ptr [0x5f00d1c8]
5f0013df  668b442430           MOV AX,word ptr [ESP + 0x30]
5f0013e4  663b44242c           CMP AX,word ptr [ESP + 0x2c]
5f0013e9  7412                 JZ 0x5f0013fd
5f0013eb  0fb7c0               MOVZX EAX,AX
5f0013ee  8b0c856452005f       MOV ECX,dword ptr [EAX*0x4 + 0x5f005264]
5f0013f5  51                   PUSH ECX
5f0013f6  57                   PUSH EDI
5f0013f7  ff15b8d1005f         CALL dword ptr [0x5f00d1b8]
5f0013fd  8b4308               MOV EAX,dword ptr [EBX + 0x8]
5f001400  89442418             MOV dword ptr [ESP + 0x18],EAX
5f001404  48                   DEC EAX
5f001405  66f7c50400           TEST BP,0x4
5f00140a  89442410             MOV dword ptr [ESP + 0x10],EAX
5f00140e  7418                 JZ 0x5f001428
5f001410  8d442410             LEA EAX,[ESP + 0x10]
5f001414  6a00                 PUSH 0x0
5f001416  6a00                 PUSH 0x0
5f001418  6a00                 PUSH 0x0
5f00141a  50                   PUSH EAX
5f00141b  6a02                 PUSH 0x2
5f00141d  6a00                 PUSH 0x0
5f00141f  6a00                 PUSH 0x0
5f001421  57                   PUSH EDI
5f001422  ff15c8d1005f         CALL dword ptr [0x5f00d1c8]
5f001428  66f7c50800           TEST BP,0x8
5f00142d  7433                 JZ 0x5f001462
5f00142f  8b03                 MOV EAX,dword ptr [EBX]
5f001431  89442410             MOV dword ptr [ESP + 0x10],EAX
5f001435  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
5f001439  48                   DEC EAX
5f00143a  66f7c50010           TEST BP,0x1000
5f00143f  89442414             MOV dword ptr [ESP + 0x14],EAX
5f001443  7405                 JZ 0x5f00144a
5f001445  836c241802           SUB dword ptr [ESP + 0x18],0x2
5f00144a  8d442410             LEA EAX,[ESP + 0x10]
5f00144e  6a00                 PUSH 0x0
5f001450  6a00                 PUSH 0x0
5f001452  6a00                 PUSH 0x0
5f001454  50                   PUSH EAX
5f001455  6a02                 PUSH 0x2
5f001457  6a00                 PUSH 0x0
5f001459  6a00                 PUSH 0x0
5f00145b  57                   PUSH EDI
5f00145c  ff15c8d1005f         CALL dword ptr [0x5f00d1c8]
5f001462  56                   PUSH ESI
5f001463  57                   PUSH EDI
5f001464  ff15b8d1005f         CALL dword ptr [0x5f00d1b8]
5f00146a  5d                   POP EBP
5f00146b  5f                   POP EDI
5f00146c  5e                   POP ESI
5f00146d  5b                   POP EBX
5f00146e  83c410               ADD ESP,0x10
5f001471  c3                   RET
; undefined 14 bytes at 5f001472

; ==== FUNCTION FUN_5f001480 entry=5f001480 sig=undefined __cdecl FUN_5f001480(HDC param_1, int * param_2, ushort param_3)
5f001480  8b4c2408             MOV ECX,dword ptr [ESP + 0x8]
5f001484  83ec10               SUB ESP,0x10
5f001487  8d542400             LEA EDX,[ESP]
5f00148b  56                   PUSH ESI
5f00148c  57                   PUSH EDI
5f00148d  8b01                 MOV EAX,dword ptr [ECX]
5f00148f  8b7104               MOV ESI,dword ptr [ECX + 0x4]
5f001492  8b7908               MOV EDI,dword ptr [ECX + 0x8]
5f001495  8902                 MOV dword ptr [EDX],EAX
5f001497  8b410c               MOV EAX,dword ptr [ECX + 0xc]
5f00149a  897204               MOV dword ptr [EDX + 0x4],ESI
5f00149d  897a08               MOV dword ptr [EDX + 0x8],EDI
5f0014a0  668b7c2424           MOV DI,word ptr [ESP + 0x24]
5f0014a5  89420c               MOV dword ptr [EDX + 0xc],EAX
5f0014a8  668bc7               MOV AX,DI
5f0014ab  8d542408             LEA EDX,[ESP + 0x8]
5f0014af  66250f00             AND AX,0xf
5f0014b3  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
5f0014b7  50                   PUSH EAX
5f0014b8  6a01                 PUSH 0x1
5f0014ba  6a07                 PUSH 0x7
5f0014bc  52                   PUSH EDX
5f0014bd  56                   PUSH ESI
5f0014be  e87dfeffff           CALL 0x5f001340
5f0014c3  ff4c241c             DEC dword ptr [ESP + 0x1c]
5f0014c7  ff4c2420             DEC dword ptr [ESP + 0x20]
5f0014cb  8d4c241c             LEA ECX,[ESP + 0x1c]
5f0014cf  ff442424             INC dword ptr [ESP + 0x24]
5f0014d3  ff442428             INC dword ptr [ESP + 0x28]
5f0014d7  83c414               ADD ESP,0x14
5f0014da  57                   PUSH EDI
5f0014db  6a00                 PUSH 0x0
5f0014dd  6a02                 PUSH 0x2
5f0014df  51                   PUSH ECX
5f0014e0  56                   PUSH ESI
5f0014e1  e85afeffff           CALL 0x5f001340
5f0014e6  83c414               ADD ESP,0x14
5f0014e9  5f                   POP EDI
5f0014ea  5e                   POP ESI
5f0014eb  83c410               ADD ESP,0x10
5f0014ee  c3                   RET
; undefined 1 bytes at 5f0014ef

; ==== FUNCTION FUN_5f0014f0 entry=5f0014f0 sig=undefined __cdecl FUN_5f0014f0(HWND param_1, HDC param_2)
5f0014f0  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
5f0014f4  83ec10               SUB ESP,0x10
5f0014f7  8d442400             LEA EAX,[ESP]
5f0014fb  50                   PUSH EAX
5f0014fc  51                   PUSH ECX
5f0014fd  ff15ccd2005f         CALL dword ptr [0x5f00d2cc]
5f001503  8b4c240c             MOV ECX,dword ptr [ESP + 0xc]
5f001507  8b542408             MOV EDX,dword ptr [ESP + 0x8]
5f00150b  8b442404             MOV EAX,dword ptr [ESP + 0x4]
5f00150f  51                   PUSH ECX
5f001510  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
5f001514  52                   PUSH EDX
5f001515  8b542420             MOV EDX,dword ptr [ESP + 0x20]
5f001519  50                   PUSH EAX
5f00151a  51                   PUSH ECX
5f00151b  52                   PUSH EDX
5f00151c  ff15c0d1005f         CALL dword ptr [0x5f00d1c0]
5f001522  83c410               ADD ESP,0x10
5f001525  c3                   RET
; undefined 10 bytes at 5f001526

; ==== FUNCTION FUN_5f001530 entry=5f001530 sig=undefined __cdecl FUN_5f001530(HDC param_1, WCHAR * param_2, LONG * param_3, LONG * param_4)
5f001530  8b442408             MOV EAX,dword ptr [ESP + 0x8]
5f001534  81ec08020000         SUB ESP,0x208
5f00153a  66833800             CMP word ptr [EAX],0x0
5f00153e  53                   PUSH EBX
5f00153f  56                   PUSH ESI
5f001540  57                   PUSH EDI
5f001541  8d7c2414             LEA EDI,[ESP + 0x14]
5f001545  55                   PUSH EBP
5f001546  7465                 JZ 0x5f0015ad
5f001548  8b35a4d2005f         MOV ESI,dword ptr [0x5f00d2a4]
5f00154e  33db                 XOR EBX,EBX
5f001550  668b08               MOV CX,word ptr [EAX]
5f001553  6683f926             CMP CX,0x26
5f001557  750a                 JNZ 0x5f001563
5f001559  83c002               ADD EAX,0x2
5f00155c  663918               CMP word ptr [EAX],BX
5f00155f  753b                 JNZ 0x5f00159c
5f001561  eb4a                 JMP 0x5f0015ad
5f001563  381da5a3005f         CMP byte ptr [0x5f00a3a5],BL
5f001569  7431                 JZ 0x5f00159c
5f00156b  0fbe15a4a3005f       MOVSX EDX,byte ptr [0x5f00a3a4]
5f001572  0fb7e9               MOVZX EBP,CX
5f001575  3bd5                 CMP EDX,EBP
5f001577  750a                 JNZ 0x5f001583
5f001579  83c002               ADD EAX,0x2
5f00157c  663918               CMP word ptr [EAX],BX
5f00157f  751b                 JNZ 0x5f00159c
5f001581  eb2a                 JMP 0x5f0015ad
5f001583  6683f91e             CMP CX,0x1e
5f001587  7406                 JZ 0x5f00158f
5f001589  6683f91f             CMP CX,0x1f
5f00158d  750d                 JNZ 0x5f00159c
5f00158f  83c002               ADD EAX,0x2
5f001592  663918               CMP word ptr [EAX],BX
5f001595  7416                 JZ 0x5f0015ad
5f001597  50                   PUSH EAX
5f001598  ffd6                 CALL ESI
5f00159a  eb0c                 JMP 0x5f0015a8
5f00159c  668b08               MOV CX,word ptr [EAX]
5f00159f  83c002               ADD EAX,0x2
5f0015a2  66890f               MOV word ptr [EDI],CX
5f0015a5  83c702               ADD EDI,0x2
5f0015a8  663918               CMP word ptr [EAX],BX
5f0015ab  75a3                 JNZ 0x5f001550
5f0015ad  66c7070000           MOV word ptr [EDI],0x0
5f0015b2  8d442410             LEA EAX,[ESP + 0x10]
5f0015b6  8d4c2418             LEA ECX,[ESP + 0x18]
5f0015ba  50                   PUSH EAX
5f0015bb  51                   PUSH ECX
5f0015bc  ff1544d2005f         CALL dword ptr [0x5f00d244]
5f0015c2  8d4c241c             LEA ECX,[ESP + 0x1c]
5f0015c6  50                   PUSH EAX
5f0015c7  8b842424020000       MOV EAX,dword ptr [ESP + 0x224]
5f0015ce  51                   PUSH ECX
5f0015cf  50                   PUSH EAX
5f0015d0  ff15c4d1005f         CALL dword ptr [0x5f00d1c4]
5f0015d6  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
5f0015da  8b842424020000       MOV EAX,dword ptr [ESP + 0x224]
5f0015e1  8b542414             MOV EDX,dword ptr [ESP + 0x14]
5f0015e5  8908                 MOV dword ptr [EAX],ECX
5f0015e7  8b8c2428020000       MOV ECX,dword ptr [ESP + 0x228]
5f0015ee  5d                   POP EBP
5f0015ef  5f                   POP EDI
5f0015f0  5e                   POP ESI
5f0015f1  5b                   POP EBX
5f0015f2  8911                 MOV dword ptr [ECX],EDX
5f0015f4  81c408020000         ADD ESP,0x208
5f0015fa  c3                   RET
; undefined 5 bytes at 5f0015fb

; ==== FUNCTION Ctl3dRegister entry=5f001600 sig=undefined4 __stdcall Ctl3dRegister(undefined4 param_1)
5f001600  682052005f           PUSH 0x5f005220
5f001605  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f00160b  682052005f           PUSH 0x5f005220
5f001610  ff054452005f         INC dword ptr [0x5f005244]
5f001616  ff1528d2005f         CALL dword ptr [0x5f00d228]
5f00161c  833d4452005f01       CMP dword ptr [0x5f005244],0x1
5f001623  7505                 JNZ 0x5f00162a
5f001625  e8560b0000           CALL 0x5f002180
5f00162a  e831020000           CALL 0x5f001860
5f00162f  85c0                 TEST EAX,EAX
5f001631  740a                 JZ 0x5f00163d
5f001633  8b442404             MOV EAX,dword ptr [ESP + 0x4]
5f001637  50                   PUSH EAX
5f001638  e8d3000000           CALL 0x5f001710
5f00163d  a14052005f           MOV EAX,[0x5f005240]
5f001642  c20400               RET 0x4
; undefined 11 bytes at 5f001645

; ==== FUNCTION Ctl3dUnregister entry=5f001650 sig=undefined4 __stdcall Ctl3dUnregister(int param_1)
5f001650  53                   PUSH EBX
5f001651  56                   PUSH ESI
5f001652  57                   PUSH EDI
5f001653  55                   PUSH EBP
5f001654  33ed                 XOR EBP,EBP
5f001656  ff1540d2005f         CALL dword ptr [0x5f00d240]
5f00165c  8bd8                 MOV EBX,EAX
5f00165e  682052005f           PUSH 0x5f005220
5f001663  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f001669  392d9c52005f         CMP dword ptr [0x5f00529c],EBP
5f00166f  7e6f                 JLE 0x5f0016e0
5f001671  8d04ad00000000       LEA EAX,[EBP*0x4 + 0x0]
5f001678  399c80a452005f       CMP dword ptr [EAX + EAX*0x4 + 0x5f0052a4],EBX
5f00167f  8d3480               LEA ESI,[EAX + EAX*0x4]
5f001682  7553                 JNZ 0x5f0016d7
5f001684  8b86ac52005f         MOV EAX,dword ptr [ESI + 0x5f0052ac]
5f00168a  48                   DEC EAX
5f00168b  8986ac52005f         MOV dword ptr [ESI + 0x5f0052ac],EAX
5f001691  740c                 JZ 0x5f00169f
5f001693  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f001697  3986a052005f         CMP dword ptr [ESI + 0x5f0052a0],EAX
5f00169d  7538                 JNZ 0x5f0016d7
5f00169f  8b86a852005f         MOV EAX,dword ptr [ESI + 0x5f0052a8]
5f0016a5  50                   PUSH EAX
5f0016a6  ff15e0d2005f         CALL dword ptr [0x5f00d2e0]
5f0016ac  ff0d9c52005f         DEC dword ptr [0x5f00529c]
5f0016b2  3b2d9c52005f         CMP EBP,dword ptr [0x5f00529c]
5f0016b8  7d1d                 JGE 0x5f0016d7
5f0016ba  8dbea052005f         LEA EDI,[ESI + 0x5f0052a0]
5f0016c0  8d4714               LEA EAX,[EDI + 0x14]
5f0016c3  b905000000           MOV ECX,0x5
5f0016c8  8bf0                 MOV ESI,EAX
5f0016ca  45                   INC EBP
5f0016cb  f3a5                 MOVSD.REP ES:EDI,ESI
5f0016cd  8bf8                 MOV EDI,EAX
5f0016cf  3b2d9c52005f         CMP EBP,dword ptr [0x5f00529c]
5f0016d5  7ce9                 JL 0x5f0016c0
5f0016d7  45                   INC EBP
5f0016d8  3b2d9c52005f         CMP EBP,dword ptr [0x5f00529c]
5f0016de  7c91                 JL 0x5f001671
5f0016e0  682052005f           PUSH 0x5f005220
5f0016e5  ff0d4452005f         DEC dword ptr [0x5f005244]
5f0016eb  ff1528d2005f         CALL dword ptr [0x5f00d228]
5f0016f1  833d4452005f00       CMP dword ptr [0x5f005244],0x0
5f0016f8  7505                 JNZ 0x5f0016ff
5f0016fa  e8810d0000           CALL 0x5f002480
5f0016ff  b801000000           MOV EAX,0x1
5f001704  5d                   POP EBP
5f001705  5f                   POP EDI
5f001706  5e                   POP ESI
5f001707  5b                   POP EBX
5f001708  c20400               RET 0x4
; undefined 5 bytes at 5f00170b

; ==== FUNCTION Ctl3dAutoSubclass entry=5f001710 sig=undefined __stdcall Ctl3dAutoSubclass(undefined4 param_1)
5f001710  8b442404             MOV EAX,dword ptr [ESP + 0x4]
5f001714  6a00                 PUSH 0x0
5f001716  50                   PUSH EAX
5f001717  e804000000           CALL 0x5f001720
5f00171c  c20400               RET 0x4
; undefined 1 bytes at 5f00171f

; ==== FUNCTION Ctl3dAutoSubclassEx entry=5f001720 sig=undefined4 __stdcall Ctl3dAutoSubclassEx(undefined4 param_1, uint param_2)
5f001720  66813d6052005f0a03   CMP word ptr [0x5f005260],0x30a
5f001729  56                   PUSH ESI
5f00172a  57                   PUSH EDI
5f00172b  7307                 JNC 0x5f001734
5f00172d  33c0                 XOR EAX,EAX
5f00172f  5f                   POP EDI
5f001730  5e                   POP ESI
5f001731  c20800               RET 0x8
5f001734  833d4052005f00       CMP dword ptr [0x5f005240],0x0
5f00173b  7507                 JNZ 0x5f001744
5f00173d  33c0                 XOR EAX,EAX
5f00173f  5f                   POP EDI
5f001740  5e                   POP ESI
5f001741  c20800               RET 0x8
5f001744  8b742410             MOV ESI,dword ptr [ESP + 0x10]
5f001748  83ce01               OR ESI,0x1
5f00174b  f7c602000000         TEST ESI,0x2
5f001751  7403                 JZ 0x5f001756
5f001753  83e6fc               AND ESI,0xfffffffc
5f001756  682052005f           PUSH 0x5f005220
5f00175b  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f001761  813d9c52005f00040000 CMP dword ptr [0x5f00529c],0x400
5f00176b  0f84d6000000         JZ 0x5f001847
5f001771  ff1540d2005f         CALL dword ptr [0x5f00d240]
5f001777  8bf8                 MOV EDI,EAX
5f001779  33c0                 XOR EAX,EAX
5f00177b  39059c52005f         CMP dword ptr [0x5f00529c],EAX
5f001781  7e19                 JLE 0x5f00179c
5f001783  b9a452005f           MOV ECX,0x5f0052a4
5f001788  3939                 CMP dword ptr [ECX],EDI
5f00178a  0f84ab000000         JZ 0x5f00183b
5f001790  83c114               ADD ECX,0x14
5f001793  40                   INC EAX
5f001794  3b059c52005f         CMP EAX,dword ptr [0x5f00529c]
5f00179a  7cec                 JL 0x5f001788
5f00179c  57                   PUSH EDI
5f00179d  a15c52005f           MOV EAX,[0x5f00525c]
5f0017a2  50                   PUSH EAX
5f0017a3  68602a005f           PUSH 0x5f002a60
5f0017a8  6a05                 PUSH 0x5
5f0017aa  ff15d8d2005f         CALL dword ptr [0x5f00d2d8]
5f0017b0  85c0                 TEST EAX,EAX
5f0017b2  0f848f000000         JZ 0x5f001847
5f0017b8  8b159c52005f         MOV EDX,dword ptr [0x5f00529c]
5f0017be  8b4c240c             MOV ECX,dword ptr [ESP + 0xc]
5f0017c2  c1e202               SHL EDX,0x2
5f0017c5  898c92a052005f       MOV dword ptr [EDX + EDX*0x4 + 0x5f0052a0],ECX
5f0017cc  8b0d9c52005f         MOV ECX,dword ptr [0x5f00529c]
5f0017d2  c1e102               SHL ECX,0x2
5f0017d5  89bc89a452005f       MOV dword ptr [ECX + ECX*0x4 + 0x5f0052a4],EDI
5f0017dc  8b0d9c52005f         MOV ECX,dword ptr [0x5f00529c]
5f0017e2  c1e102               SHL ECX,0x2
5f0017e5  898489a852005f       MOV dword ptr [ECX + ECX*0x4 + 0x5f0052a8],EAX
5f0017ec  a19c52005f           MOV EAX,[0x5f00529c]
5f0017f1  c1e002               SHL EAX,0x2
5f0017f4  c78480ac52005f01000000 MOV dword ptr [EAX + EAX*0x4 + 0x5f0052ac],0x1
5f0017ff  a19c52005f           MOV EAX,[0x5f00529c]
5f001804  c1e002               SHL EAX,0x2
5f001807  89b480b052005f       MOV dword ptr [EAX + EAX*0x4 + 0x5f0052b0],ESI
5f00180e  8b0d9c52005f         MOV ECX,dword ptr [0x5f00529c]
5f001814  893d9452005f         MOV dword ptr [0x5f005294],EDI
5f00181a  890d9852005f         MOV dword ptr [0x5f005298],ECX
5f001820  ff059c52005f         INC dword ptr [0x5f00529c]
5f001826  682052005f           PUSH 0x5f005220
5f00182b  ff1528d2005f         CALL dword ptr [0x5f00d228]
5f001831  b801000000           MOV EAX,0x1
5f001836  5f                   POP EDI
5f001837  5e                   POP ESI
5f001838  c20800               RET 0x8
5f00183b  c1e002               SHL EAX,0x2
5f00183e  ff8480ac52005f       INC dword ptr [EAX + EAX*0x4 + 0x5f0052ac]
5f001845  ebdf                 JMP 0x5f001826
5f001847  682052005f           PUSH 0x5f005220
5f00184c  ff1528d2005f         CALL dword ptr [0x5f00d228]
5f001852  33c0                 XOR EAX,EAX
5f001854  5f                   POP EDI
5f001855  5e                   POP ESI
5f001856  c20800               RET 0x8
; undefined 7 bytes at 5f001859

; ==== FUNCTION Ctl3dIsAutoSubclass entry=5f001860 sig=undefined4 __stdcall Ctl3dIsAutoSubclass(void)
5f001860  ff1540d2005f         CALL dword ptr [0x5f00d240]
5f001866  33d2                 XOR EDX,EDX
5f001868  39159c52005f         CMP dword ptr [0x5f00529c],EDX
5f00186e  7e15                 JLE 0x5f001885
5f001870  b9a452005f           MOV ECX,0x5f0052a4
5f001875  3901                 CMP dword ptr [ECX],EAX
5f001877  740f                 JZ 0x5f001888
5f001879  83c114               ADD ECX,0x14
5f00187c  42                   INC EDX
5f00187d  3b159c52005f         CMP EDX,dword ptr [0x5f00529c]
5f001883  7cf0                 JL 0x5f001875
5f001885  33c0                 XOR EAX,EAX
5f001887  c3                   RET
5f001888  b801000000           MOV EAX,0x1
5f00188d  c3                   RET
; undefined 2 bytes at 5f00188e

; ==== FUNCTION Ctl3dUnAutoSubclass entry=5f001890 sig=undefined4 __stdcall Ctl3dUnAutoSubclass(void)
5f001890  53                   PUSH EBX
5f001891  56                   PUSH ESI
5f001892  57                   PUSH EDI
5f001893  55                   PUSH EBP
5f001894  33ed                 XOR EBP,EBP
5f001896  ff1540d2005f         CALL dword ptr [0x5f00d240]
5f00189c  8bd8                 MOV EBX,EAX
5f00189e  682052005f           PUSH 0x5f005220
5f0018a3  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f0018a9  392d9c52005f         CMP dword ptr [0x5f00529c],EBP
5f0018af  7e63                 JLE 0x5f001914
5f0018b1  8d04ad00000000       LEA EAX,[EBP*0x4 + 0x0]
5f0018b8  399c80a452005f       CMP dword ptr [EAX + EAX*0x4 + 0x5f0052a4],EBX
5f0018bf  8d3480               LEA ESI,[EAX + EAX*0x4]
5f0018c2  7547                 JNZ 0x5f00190b
5f0018c4  8b86ac52005f         MOV EAX,dword ptr [ESI + 0x5f0052ac]
5f0018ca  48                   DEC EAX
5f0018cb  8986ac52005f         MOV dword ptr [ESI + 0x5f0052ac],EAX
5f0018d1  7538                 JNZ 0x5f00190b
5f0018d3  8b86a852005f         MOV EAX,dword ptr [ESI + 0x5f0052a8]
5f0018d9  50                   PUSH EAX
5f0018da  ff15e0d2005f         CALL dword ptr [0x5f00d2e0]
5f0018e0  ff0d9c52005f         DEC dword ptr [0x5f00529c]
5f0018e6  3b2d9c52005f         CMP EBP,dword ptr [0x5f00529c]
5f0018ec  7d1d                 JGE 0x5f00190b
5f0018ee  8dbea052005f         LEA EDI,[ESI + 0x5f0052a0]
5f0018f4  8d4714               LEA EAX,[EDI + 0x14]
5f0018f7  b905000000           MOV ECX,0x5
5f0018fc  8bf0                 MOV ESI,EAX
5f0018fe  45                   INC EBP
5f0018ff  f3a5                 MOVSD.REP ES:EDI,ESI
5f001901  8bf8                 MOV EDI,EAX
5f001903  3b2d9c52005f         CMP EBP,dword ptr [0x5f00529c]
5f001909  7ce9                 JL 0x5f0018f4
5f00190b  45                   INC EBP
5f00190c  3b2d9c52005f         CMP EBP,dword ptr [0x5f00529c]
5f001912  7c9d                 JL 0x5f0018b1
5f001914  682052005f           PUSH 0x5f005220
5f001919  ff1528d2005f         CALL dword ptr [0x5f00d228]
5f00191f  b801000000           MOV EAX,0x1
5f001924  5d                   POP EBP
5f001925  5f                   POP EDI
5f001926  5e                   POP ESI
5f001927  5b                   POP EBX
5f001928  c3                   RET
; undefined 7 bytes at 5f001929

; ==== FUNCTION Ctl3dSetStyle entry=5f001930 sig=undefined2 __stdcall Ctl3dSetStyle(void)
5f001930  6633c0               XOR AX,AX
5f001933  c20c00               RET 0xc
; undefined 10 bytes at 5f001936

; ==== FUNCTION Ctl3dGetVer entry=5f001940 sig=undefined2 __stdcall Ctl3dGetVer(void)
5f001940  66b83102             MOV AX,0x231
5f001944  c3                   RET
; undefined 11 bytes at 5f001945

; ==== FUNCTION Ctl3dEnabled entry=5f001950 sig=undefined4 __stdcall Ctl3dEnabled(void)
5f001950  a14052005f           MOV EAX,[0x5f005240]
5f001955  c3                   RET
; undefined 10 bytes at 5f001956

; ==== FUNCTION Ctl3dSubclassCtl entry=5f001960 sig=bool __stdcall Ctl3dSubclassCtl(HWND param_1)
5f001960  833d4052005f00       CMP dword ptr [0x5f005240],0x0
5f001967  7505                 JNZ 0x5f00196e
5f001969  33c0                 XOR EAX,EAX
5f00196b  c20400               RET 0x4
5f00196e  8b442404             MOV EAX,dword ptr [ESP + 0x4]
5f001972  6a00                 PUSH 0x0
5f001974  6a00                 PUSH 0x0
5f001976  68ffff0000           PUSH 0xffff
5f00197b  50                   PUSH EAX
5f00197c  e8bf140000           CALL 0x5f002e40
5f001981  83c410               ADD ESP,0x10
5f001984  c20400               RET 0x4
; undefined 9 bytes at 5f001987

; ==== FUNCTION Ctl3dUnsubclassCtl entry=5f001990 sig=undefined4 __stdcall Ctl3dUnsubclassCtl(HWND param_1)
5f001990  833d4052005f00       CMP dword ptr [0x5f005240],0x0
5f001997  53                   PUSH EBX
5f001998  56                   PUSH ESI
5f001999  57                   PUSH EDI
5f00199a  55                   PUSH EBP
5f00199b  7509                 JNZ 0x5f0019a6
5f00199d  33c0                 XOR EAX,EAX
5f00199f  5d                   POP EBP
5f0019a0  5f                   POP EDI
5f0019a1  5e                   POP ESI
5f0019a2  5b                   POP EBX
5f0019a3  c20400               RET 0x4
5f0019a6  8b742414             MOV ESI,dword ptr [ESP + 0x14]
5f0019aa  6afc                 PUSH -0x4
5f0019ac  56                   PUSH ESI
5f0019ad  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f0019b3  33c9                 XOR ECX,ECX
5f0019b5  8b3dd4d2005f         MOV EDI,dword ptr [0x5f00d2d4]
5f0019bb  8b1df8d2005f         MOV EBX,dword ptr [0x5f00d2f8]
5f0019c1  8d1489               LEA EDX,[ECX + ECX*0x4]
5f0019c4  3904d5a0a2005f       CMP dword ptr [EDX*0x8 + 0x5f00a2a0],EAX
5f0019cb  7525                 JNZ 0x5f0019f2
5f0019cd  51                   PUSH ECX
5f0019ce  56                   PUSH ESI
5f0019cf  e84cf6ffff           CALL 0x5f001020
5f0019d4  83c408               ADD ESP,0x8
5f0019d7  8be8                 MOV EBP,EAX
5f0019d9  33c0                 XOR EAX,EAX
5f0019db  66a14e52005f         MOV AX,[0x5f00524e]
5f0019e1  50                   PUSH EAX
5f0019e2  56                   PUSH ESI
5f0019e3  ffd7                 CALL EDI
5f0019e5  55                   PUSH EBP
5f0019e6  6afc                 PUSH -0x4
5f0019e8  56                   PUSH ESI
5f0019e9  ffd3                 CALL EBX
5f0019eb  33c0                 XOR EAX,EAX
5f0019ed  b910000000           MOV ECX,0x10
5f0019f2  41                   INC ECX
5f0019f3  83f906               CMP ECX,0x6
5f0019f6  7cc9                 JL 0x5f0019c1
5f0019f8  756f                 JNZ 0x5f001a69
5f0019fa  3df026005f           CMP EAX,0x5f0026f0
5f0019ff  7520                 JNZ 0x5f001a21
5f001a01  51                   PUSH ECX
5f001a02  56                   PUSH ESI
5f001a03  e818f6ffff           CALL 0x5f001020
5f001a08  83c408               ADD ESP,0x8
5f001a0b  8be8                 MOV EBP,EAX
5f001a0d  33c0                 XOR EAX,EAX
5f001a0f  66a14e52005f         MOV AX,[0x5f00524e]
5f001a15  50                   PUSH EAX
5f001a16  56                   PUSH ESI
5f001a17  ffd7                 CALL EDI
5f001a19  55                   PUSH EBP
5f001a1a  6afc                 PUSH -0x4
5f001a1c  56                   PUSH ESI
5f001a1d  ffd3                 CALL EBX
5f001a1f  eb48                 JMP 0x5f001a69
5f001a21  33c0                 XOR EAX,EAX
5f001a23  8b3d00d3005f         MOV EDI,dword ptr [0x5f00d300]
5f001a29  66a14e52005f         MOV AX,[0x5f00524e]
5f001a2f  50                   PUSH EAX
5f001a30  56                   PUSH ESI
5f001a31  ffd7                 CALL EDI
5f001a33  85c0                 TEST EAX,EAX
5f001a35  7520                 JNZ 0x5f001a57
5f001a37  33c0                 XOR EAX,EAX
5f001a39  66a15252005f         MOV AX,[0x5f005252]
5f001a3f  50                   PUSH EAX
5f001a40  56                   PUSH ESI
5f001a41  ffd7                 CALL EDI
5f001a43  85c0                 TEST EAX,EAX
5f001a45  7510                 JNZ 0x5f001a57
5f001a47  33c0                 XOR EAX,EAX
5f001a49  66a15052005f         MOV AX,[0x5f005250]
5f001a4f  50                   PUSH EAX
5f001a50  56                   PUSH ESI
5f001a51  ffd7                 CALL EDI
5f001a53  85c0                 TEST EAX,EAX
5f001a55  7412                 JZ 0x5f001a69
5f001a57  6a01                 PUSH 0x1
5f001a59  33c0                 XOR EAX,EAX
5f001a5b  66a15452005f         MOV AX,[0x5f005254]
5f001a61  50                   PUSH EAX
5f001a62  56                   PUSH ESI
5f001a63  ff15fcd2005f         CALL dword ptr [0x5f00d2fc]
5f001a69  6a05                 PUSH 0x5
5f001a6b  56                   PUSH ESI
5f001a6c  8b355cd2005f         MOV ESI,dword ptr [0x5f00d25c]
5f001a72  ffd6                 CALL ESI
5f001a74  8bf8                 MOV EDI,EAX
5f001a76  85ff                 TEST EDI,EDI
5f001a78  7411                 JZ 0x5f001a8b
5f001a7a  57                   PUSH EDI
5f001a7b  e810ffffff           CALL 0x5f001990
5f001a80  6a02                 PUSH 0x2
5f001a82  57                   PUSH EDI
5f001a83  ffd6                 CALL ESI
5f001a85  8bf8                 MOV EDI,EAX
5f001a87  85ff                 TEST EDI,EDI
5f001a89  75ef                 JNZ 0x5f001a7a
5f001a8b  b801000000           MOV EAX,0x1
5f001a90  5d                   POP EBP
5f001a91  5f                   POP EDI
5f001a92  5e                   POP ESI
5f001a93  5b                   POP EBX
5f001a94  c20400               RET 0x4
; undefined 9 bytes at 5f001a97

; ==== FUNCTION Ctl3dSubclassCtlEx entry=5f001aa0 sig=undefined4 __stdcall Ctl3dSubclassCtlEx(HWND param_1, int param_2)
5f001aa0  833d4052005f00       CMP dword ptr [0x5f005240],0x0
5f001aa7  53                   PUSH EBX
5f001aa8  56                   PUSH ESI
5f001aa9  57                   PUSH EDI
5f001aaa  7508                 JNZ 0x5f001ab4
5f001aac  33c0                 XOR EAX,EAX
5f001aae  5f                   POP EDI
5f001aaf  5e                   POP ESI
5f001ab0  5b                   POP EBX
5f001ab1  c20800               RET 0x8
5f001ab4  8b7c2414             MOV EDI,dword ptr [ESP + 0x14]
5f001ab8  85ff                 TEST EDI,EDI
5f001aba  7c6e                 JL 0x5f001b2a
5f001abc  83ff06               CMP EDI,0x6
5f001abf  7f69                 JG 0x5f001b2a
5f001ac1  8b742410             MOV ESI,dword ptr [ESP + 0x10]
5f001ac5  56                   PUSH ESI
5f001ac6  e835f5ffff           CALL 0x5f001000
5f001acb  83c404               ADD ESP,0x4
5f001ace  85c0                 TEST EAX,EAX
5f001ad0  7408                 JZ 0x5f001ada
5f001ad2  33c0                 XOR EAX,EAX
5f001ad4  5f                   POP EDI
5f001ad5  5e                   POP ESI
5f001ad6  5b                   POP EBX
5f001ad7  c20800               RET 0x8
5f001ada  6af0                 PUSH -0x10
5f001adc  56                   PUSH ESI
5f001add  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f001ae3  8bd8                 MOV EBX,EAX
5f001ae5  56                   PUSH ESI
5f001ae6  ff1558d2005f         CALL dword ptr [0x5f00d258]
5f001aec  50                   PUSH EAX
5f001aed  6a00                 PUSH 0x0
5f001aef  68ffff0000           PUSH 0xffff
5f001af4  8d047f               LEA EAX,[EDI + EDI*0x2]
5f001af7  53                   PUSH EBX
5f001af8  56                   PUSH ESI
5f001af9  8d1c87               LEA EBX,[EDI + EAX*0x4]
5f001afc  ff149d64b0005f       CALL dword ptr [EBX*0x4 + 0x5f00b064]
5f001b03  83c414               ADD ESP,0x14
5f001b06  83f801               CMP EAX,0x1
5f001b09  7514                 JNZ 0x5f001b1f
5f001b0b  8d04bf               LEA EAX,[EDI + EDI*0x4]
5f001b0e  8b0cc5a0a2005f       MOV ECX,dword ptr [EAX*0x8 + 0x5f00a2a0]
5f001b15  51                   PUSH ECX
5f001b16  56                   PUSH ESI
5f001b17  e854f5ffff           CALL 0x5f001070
5f001b1c  83c408               ADD ESP,0x8
5f001b1f  b801000000           MOV EAX,0x1
5f001b24  5f                   POP EDI
5f001b25  5e                   POP ESI
5f001b26  5b                   POP EBX
5f001b27  c20800               RET 0x8
5f001b2a  33c0                 XOR EAX,EAX
5f001b2c  5f                   POP EDI
5f001b2d  5e                   POP ESI
5f001b2e  5b                   POP EBX
5f001b2f  c20800               RET 0x8
; undefined 14 bytes at 5f001b32

; ==== FUNCTION Ctl3dSubclassDlg entry=5f001b40 sig=undefined4 __stdcall Ctl3dSubclassDlg(HWND param_1, ushort param_2)
5f001b40  833d4052005f00       CMP dword ptr [0x5f005240],0x0
5f001b47  53                   PUSH EBX
5f001b48  56                   PUSH ESI
5f001b49  57                   PUSH EDI
5f001b4a  7508                 JNZ 0x5f001b54
5f001b4c  33c0                 XOR EAX,EAX
5f001b4e  5f                   POP EDI
5f001b4f  5e                   POP ESI
5f001b50  5b                   POP EBX
5f001b51  c20800               RET 0x8
5f001b54  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f001b58  6a05                 PUSH 0x5
5f001b5a  50                   PUSH EAX
5f001b5b  8b355cd2005f         MOV ESI,dword ptr [0x5f00d25c]
5f001b61  ffd6                 CALL ESI
5f001b63  8bd8                 MOV EBX,EAX
5f001b65  85db                 TEST EBX,EBX
5f001b67  741e                 JZ 0x5f001b87
5f001b69  668b7c2414           MOV DI,word ptr [ESP + 0x14]
5f001b6e  6a00                 PUSH 0x0
5f001b70  6a00                 PUSH 0x0
5f001b72  57                   PUSH EDI
5f001b73  53                   PUSH EBX
5f001b74  e8c7120000           CALL 0x5f002e40
5f001b79  83c410               ADD ESP,0x10
5f001b7c  6a02                 PUSH 0x2
5f001b7e  53                   PUSH EBX
5f001b7f  ffd6                 CALL ESI
5f001b81  8bd8                 MOV EBX,EAX
5f001b83  85db                 TEST EBX,EBX
5f001b85  75e7                 JNZ 0x5f001b6e
5f001b87  b801000000           MOV EAX,0x1
5f001b8c  5f                   POP EDI
5f001b8d  5e                   POP ESI
5f001b8e  5b                   POP EBX
5f001b8f  c20800               RET 0x8
; undefined 14 bytes at 5f001b92

; ==== FUNCTION FUN_5f001ba0 entry=5f001ba0 sig=undefined __cdecl FUN_5f001ba0(HWND param_1, ushort param_2, undefined4 param_3)
5f001ba0  83ec04               SUB ESP,0x4
5f001ba3  53                   PUSH EBX
5f001ba4  56                   PUSH ESI
5f001ba5  8b742410             MOV ESI,dword ptr [ESP + 0x10]
5f001ba9  57                   PUSH EDI
5f001baa  56                   PUSH ESI
5f001bab  e850f4ffff           CALL 0x5f001000
5f001bb0  83c404               ADD ESP,0x4
5f001bb3  85c0                 TEST EAX,EAX
5f001bb5  751c                 JNZ 0x5f001bd3
5f001bb7  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
5f001bbb  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
5f001bbf  50                   PUSH EAX
5f001bc0  6a00                 PUSH 0x0
5f001bc2  51                   PUSH ECX
5f001bc3  56                   PUSH ESI
5f001bc4  e877120000           CALL 0x5f002e40
5f001bc9  83c410               ADD ESP,0x10
5f001bcc  5f                   POP EDI
5f001bcd  5e                   POP ESI
5f001bce  5b                   POP EBX
5f001bcf  83c404               ADD ESP,0x4
5f001bd2  c3                   RET
5f001bd3  33c0                 XOR EAX,EAX
5f001bd5  66a15452005f         MOV AX,[0x5f005254]
5f001bdb  50                   PUSH EAX
5f001bdc  56                   PUSH ESI
5f001bdd  ff1500d3005f         CALL dword ptr [0x5f00d300]
5f001be3  85c0                 TEST EAX,EAX
5f001be5  7562                 JNZ 0x5f001c49
5f001be7  8d7c240c             LEA EDI,[ESP + 0xc]
5f001beb  8b1de8d2005f         MOV EBX,dword ptr [0x5f00d2e8]
5f001bf1  c744240c9a020000     MOV dword ptr [ESP + 0xc],0x29a
5f001bf9  57                   PUSH EDI
5f001bfa  6a00                 PUSH 0x0
5f001bfc  6844190000           PUSH 0x1944
5f001c01  56                   PUSH ESI
5f001c02  ffd3                 CALL EBX
5f001c04  817c240c9a020000     CMP dword ptr [ESP + 0xc],0x29a
5f001c0c  753b                 JNZ 0x5f001c49
5f001c0e  57                   PUSH EDI
5f001c0f  6a00                 PUSH 0x0
5f001c11  6843190000           PUSH 0x1943
5f001c16  56                   PUSH ESI
5f001c17  ffd3                 CALL EBX
5f001c19  817c240c9a020000     CMP dword ptr [ESP + 0xc],0x29a
5f001c21  7526                 JNZ 0x5f001c49
5f001c23  33c0                 XOR EAX,EAX
5f001c25  66a14e52005f         MOV AX,[0x5f00524e]
5f001c2b  50                   PUSH EAX
5f001c2c  56                   PUSH ESI
5f001c2d  ff15d4d2005f         CALL dword ptr [0x5f00d2d4]
5f001c33  668b442418           MOV AX,word ptr [ESP + 0x18]
5f001c38  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
5f001c3c  51                   PUSH ECX
5f001c3d  6a00                 PUSH 0x0
5f001c3f  50                   PUSH EAX
5f001c40  56                   PUSH ESI
5f001c41  e8fa110000           CALL 0x5f002e40
5f001c46  83c410               ADD ESP,0x10
5f001c49  5f                   POP EDI
5f001c4a  5e                   POP ESI
5f001c4b  5b                   POP EBX
5f001c4c  83c404               ADD ESP,0x4
5f001c4f  c3                   RET

; ==== FUNCTION FUN_5f001c50 entry=5f001c50 sig=undefined4 __stdcall FUN_5f001c50(HWND param_1, ushort param_2)
5f001c50  833d4052005f00       CMP dword ptr [0x5f005240],0x0
5f001c57  53                   PUSH EBX
5f001c58  56                   PUSH ESI
5f001c59  57                   PUSH EDI
5f001c5a  55                   PUSH EBP
5f001c5b  7509                 JNZ 0x5f001c66
5f001c5d  33c0                 XOR EAX,EAX
5f001c5f  5d                   POP EBP
5f001c60  5f                   POP EDI
5f001c61  5e                   POP ESI
5f001c62  5b                   POP EBX
5f001c63  c20800               RET 0x8
5f001c66  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f001c6a  6a05                 PUSH 0x5
5f001c6c  50                   PUSH EAX
5f001c6d  8b2d5cd2005f         MOV EBP,dword ptr [0x5f00d25c]
5f001c73  ffd5                 CALL EBP
5f001c75  8bf8                 MOV EDI,EAX
5f001c77  85ff                 TEST EDI,EDI
5f001c79  743d                 JZ 0x5f001cb8
5f001c7b  668b742418           MOV SI,word ptr [ESP + 0x18]
5f001c80  6a00                 PUSH 0x0
5f001c82  56                   PUSH ESI
5f001c83  57                   PUSH EDI
5f001c84  e817ffffff           CALL 0x5f001ba0
5f001c89  83c40c               ADD ESP,0xc
5f001c8c  6a05                 PUSH 0x5
5f001c8e  57                   PUSH EDI
5f001c8f  ffd5                 CALL EBP
5f001c91  8bd8                 MOV EBX,EAX
5f001c93  85db                 TEST EBX,EBX
5f001c95  7416                 JZ 0x5f001cad
5f001c97  57                   PUSH EDI
5f001c98  56                   PUSH ESI
5f001c99  53                   PUSH EBX
5f001c9a  e801ffffff           CALL 0x5f001ba0
5f001c9f  83c40c               ADD ESP,0xc
5f001ca2  6a02                 PUSH 0x2
5f001ca4  53                   PUSH EBX
5f001ca5  ffd5                 CALL EBP
5f001ca7  8bd8                 MOV EBX,EAX
5f001ca9  85db                 TEST EBX,EBX
5f001cab  75ea                 JNZ 0x5f001c97
5f001cad  6a02                 PUSH 0x2
5f001caf  57                   PUSH EDI
5f001cb0  ffd5                 CALL EBP
5f001cb2  8bf8                 MOV EDI,EAX
5f001cb4  85ff                 TEST EDI,EDI
5f001cb6  75c8                 JNZ 0x5f001c80
5f001cb8  b801000000           MOV EAX,0x1
5f001cbd  5d                   POP EBP
5f001cbe  5f                   POP EDI
5f001cbf  5e                   POP ESI
5f001cc0  5b                   POP EBX
5f001cc1  c20800               RET 0x8
; undefined 12 bytes at 5f001cc4

; ==== FUNCTION Ctl3dSubclassDlgEx entry=5f001cd0 sig=undefined4 __stdcall Ctl3dSubclassDlgEx(HWND param_1, ushort param_2)
5f001cd0  833d4052005f00       CMP dword ptr [0x5f005240],0x0
5f001cd7  53                   PUSH EBX
5f001cd8  56                   PUSH ESI
5f001cd9  57                   PUSH EDI
5f001cda  55                   PUSH EBP
5f001cdb  7509                 JNZ 0x5f001ce6
5f001cdd  33c0                 XOR EAX,EAX
5f001cdf  5d                   POP EBP
5f001ce0  5f                   POP EDI
5f001ce1  5e                   POP ESI
5f001ce2  5b                   POP EBX
5f001ce3  c20800               RET 0x8
5f001ce6  8b7c2414             MOV EDI,dword ptr [ESP + 0x14]
5f001cea  6a05                 PUSH 0x5
5f001cec  57                   PUSH EDI
5f001ced  8b355cd2005f         MOV ESI,dword ptr [0x5f00d25c]
5f001cf3  ffd6                 CALL ESI
5f001cf5  8bd8                 MOV EBX,EAX
5f001cf7  85db                 TEST EBX,EBX
5f001cf9  741e                 JZ 0x5f001d19
5f001cfb  668b6c2418           MOV BP,word ptr [ESP + 0x18]
5f001d00  6a00                 PUSH 0x0
5f001d02  6a00                 PUSH 0x0
5f001d04  55                   PUSH EBP
5f001d05  53                   PUSH EBX
5f001d06  e835110000           CALL 0x5f002e40
5f001d0b  83c410               ADD ESP,0x10
5f001d0e  6a02                 PUSH 0x2
5f001d10  53                   PUSH EBX
5f001d11  ffd6                 CALL ESI
5f001d13  8bd8                 MOV EBX,EAX
5f001d15  85db                 TEST EBX,EBX
5f001d17  75e7                 JNZ 0x5f001d00
5f001d19  68f026005f           PUSH 0x5f0026f0
5f001d1e  57                   PUSH EDI
5f001d1f  e84cf3ffff           CALL 0x5f001070
5f001d24  83c408               ADD ESP,0x8
5f001d27  b801000000           MOV EAX,0x1
5f001d2c  5d                   POP EBP
5f001d2d  5f                   POP EDI
5f001d2e  5e                   POP ESI
5f001d2f  5b                   POP EBX
5f001d30  c20800               RET 0x8
; undefined 13 bytes at 5f001d33

; ==== FUNCTION Ctl3dCtlColor entry=5f001d40 sig=undefined4 __stdcall Ctl3dCtlColor(void)
5f001d40  33c0                 XOR EAX,EAX
5f001d42  c20800               RET 0x8
; undefined 11 bytes at 5f001d45

; ==== FUNCTION Ctl3dCtlColorEx entry=5f001d50 sig=undefined4 __stdcall Ctl3dCtlColorEx(uint param_1, HDC param_2, HWND param_3)
5f001d50  833d4052005f00       CMP dword ptr [0x5f005240],0x0
5f001d57  56                   PUSH ESI
5f001d58  7472                 JZ 0x5f001dcc
5f001d5a  8b442408             MOV EAX,dword ptr [ESP + 0x8]
5f001d5e  3d34010000           CMP EAX,0x134
5f001d63  7267                 JC 0x5f001dcc
5f001d65  3d37010000           CMP EAX,0x137
5f001d6a  7460                 JZ 0x5f001dcc
5f001d6c  3d34010000           CMP EAX,0x134
5f001d71  7531                 JNZ 0x5f001da4
5f001d73  66813d6052005f5f03   CMP word ptr [0x5f005260],0x35f
5f001d7c  7320                 JNC 0x5f001d9e
5f001d7e  8b742410             MOV ESI,dword ptr [ESP + 0x10]
5f001d82  6a05                 PUSH 0x5
5f001d84  56                   PUSH ESI
5f001d85  ff155cd2005f         CALL dword ptr [0x5f00d25c]
5f001d8b  85c0                 TEST EAX,EAX
5f001d8d  740f                 JZ 0x5f001d9e
5f001d8f  6af0                 PUSH -0x10
5f001d91  56                   PUSH ESI
5f001d92  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f001d98  2403                 AND AL,0x3
5f001d9a  3c03                 CMP AL,0x3
5f001d9c  7506                 JNZ 0x5f001da4
5f001d9e  33c0                 XOR EAX,EAX
5f001da0  5e                   POP ESI
5f001da1  c20c00               RET 0xc
5f001da4  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
5f001da8  a17052005f           MOV EAX,[0x5f005270]
5f001dad  50                   PUSH EAX
5f001dae  56                   PUSH ESI
5f001daf  ff15d4d1005f         CALL dword ptr [0x5f00d1d4]
5f001db5  8b0d6852005f         MOV ECX,dword ptr [0x5f005268]
5f001dbb  51                   PUSH ECX
5f001dbc  56                   PUSH ESI
5f001dbd  ff15b8d1005f         CALL dword ptr [0x5f00d1b8]
5f001dc3  a18852005f           MOV EAX,[0x5f005288]
5f001dc8  5e                   POP ESI
5f001dc9  c20c00               RET 0xc
5f001dcc  33c0                 XOR EAX,EAX
5f001dce  5e                   POP ESI
5f001dcf  c20c00               RET 0xc
; undefined 14 bytes at 5f001dd2

; ==== FUNCTION Ctl3dColorChange entry=5f001de0 sig=undefined4 __stdcall Ctl3dColorChange(void)
5f001de0  56                   PUSH ESI
5f001de1  682052005f           PUSH 0x5f005220
5f001de6  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f001dec  6a00                 PUSH 0x0
5f001dee  e86d070000           CALL 0x5f002560
5f001df3  83c404               ADD ESP,0x4
5f001df6  8bf0                 MOV ESI,EAX
5f001df8  682052005f           PUSH 0x5f005220
5f001dfd  ff1528d2005f         CALL dword ptr [0x5f00d228]
5f001e03  8bc6                 MOV EAX,ESI
5f001e05  5e                   POP ESI
5f001e06  c3                   RET
; undefined 9 bytes at 5f001e07

; ==== FUNCTION Ctl3dDlgFramePaint entry=5f001e10 sig=undefined __stdcall Ctl3dDlgFramePaint(HWND param_1, UINT param_2, WPARAM param_3, LPARAM param_4)
5f001e10  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f001e14  6a01                 PUSH 0x1
5f001e16  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
5f001e1a  50                   PUSH EAX
5f001e1b  8b542410             MOV EDX,dword ptr [ESP + 0x10]
5f001e1f  51                   PUSH ECX
5f001e20  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f001e24  52                   PUSH EDX
5f001e25  50                   PUSH EAX
5f001e26  e805000000           CALL 0x5f001e30
5f001e2b  c21000               RET 0x10
; undefined 2 bytes at 5f001e2e

; ==== FUNCTION FUN_5f001e30 entry=5f001e30 sig=LRESULT __stdcall FUN_5f001e30(HWND param_1, UINT param_2, WPARAM param_3, LPARAM param_4, int param_5)
5f001e30  83ec3c               SUB ESP,0x3c
5f001e33  837c245000           CMP dword ptr [ESP + 0x50],0x0
5f001e38  53                   PUSH EBX
5f001e39  56                   PUSH ESI
5f001e3a  57                   PUSH EDI
5f001e3b  55                   PUSH EBP
5f001e3c  7408                 JZ 0x5f001e46
5f001e3e  33c0                 XOR EAX,EAX
5f001e40  8b742450             MOV ESI,dword ptr [ESP + 0x50]
5f001e44  eb0f                 JMP 0x5f001e55
5f001e46  8b742450             MOV ESI,dword ptr [ESP + 0x50]
5f001e4a  6a06                 PUSH 0x6
5f001e4c  56                   PUSH ESI
5f001e4d  e8cef1ffff           CALL 0x5f001020
5f001e52  83c408               ADD ESP,0x8
5f001e55  8b4c245c             MOV ECX,dword ptr [ESP + 0x5c]
5f001e59  85c0                 TEST EAX,EAX
5f001e5b  51                   PUSH ECX
5f001e5c  7414                 JZ 0x5f001e72
5f001e5e  8b54245c             MOV EDX,dword ptr [ESP + 0x5c]
5f001e62  8b5c2458             MOV EBX,dword ptr [ESP + 0x58]
5f001e66  52                   PUSH EDX
5f001e67  53                   PUSH EBX
5f001e68  56                   PUSH ESI
5f001e69  50                   PUSH EAX
5f001e6a  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f001e70  eb11                 JMP 0x5f001e83
5f001e72  8b44245c             MOV EAX,dword ptr [ESP + 0x5c]
5f001e76  8b542458             MOV EDX,dword ptr [ESP + 0x58]
5f001e7a  50                   PUSH EAX
5f001e7b  52                   PUSH EDX
5f001e7c  56                   PUSH ESI
5f001e7d  ff1568d2005f         CALL dword ptr [0x5f00d268]
5f001e83  833d4052005f00       CMP dword ptr [0x5f005240],0x0
5f001e8a  89442410             MOV dword ptr [ESP + 0x10],EAX
5f001e8e  750e                 JNZ 0x5f001e9e
5f001e90  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f001e94  5d                   POP EBP
5f001e95  5f                   POP EDI
5f001e96  5e                   POP ESI
5f001e97  5b                   POP EBX
5f001e98  83c43c               ADD ESP,0x3c
5f001e9b  c21400               RET 0x14
5f001e9e  56                   PUSH ESI
5f001e9f  ff1564d2005f         CALL dword ptr [0x5f00d264]
5f001ea5  85c0                 TEST EAX,EAX
5f001ea7  740e                 JZ 0x5f001eb7
5f001ea9  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f001ead  5d                   POP EBP
5f001eae  5f                   POP EDI
5f001eaf  5e                   POP ESI
5f001eb0  5b                   POP EBX
5f001eb1  83c43c               ADD ESP,0x3c
5f001eb4  c21400               RET 0x14
5f001eb7  c744241401000000     MOV dword ptr [ESP + 0x14],0x1
5f001ebf  8d442414             LEA EAX,[ESP + 0x14]
5f001ec3  50                   PUSH EAX
5f001ec4  6a00                 PUSH 0x0
5f001ec6  68ef110000           PUSH 0x11ef
5f001ecb  56                   PUSH ESI
5f001ecc  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f001ed2  6af0                 PUSH -0x10
5f001ed4  8b2de4d2005f         MOV EBP,dword ptr [0x5f00d2e4]
5f001eda  56                   PUSH ESI
5f001edb  ffd5                 CALL EBP
5f001edd  837c241400           CMP dword ptr [ESP + 0x14],0x0
5f001ee2  0f84e0010000         JZ 0x5f0020c8
5f001ee8  8bc8                 MOV ECX,EAX
5f001eea  81e180004010         AND ECX,0x10400080
5f001ef0  81f980004010         CMP ECX,0x10400080
5f001ef6  0f85cc010000         JNZ 0x5f0020c8
5f001efc  250000c000           AND EAX,0xc00000
5f001f01  8b1d98a3005f         MOV EBX,dword ptr [0x5f00a398]
5f001f07  2d0000c000           SUB EAX,0xc00000
5f001f0c  83f801               CMP EAX,0x1
5f001f0f  56                   PUSH ESI
5f001f10  1bed                 SBB EBP,EBP
5f001f12  f7dd                 NEG EBP
5f001f14  83fd01               CMP EBP,0x1
5f001f17  1bc0                 SBB EAX,EAX
5f001f19  40                   INC EAX
5f001f1a  2bd8                 SUB EBX,EAX
5f001f1c  ff1508d3005f         CALL dword ptr [0x5f00d308]
5f001f22  8bf8                 MOV EDI,EAX
5f001f24  8d44241c             LEA EAX,[ESP + 0x1c]
5f001f28  50                   PUSH EAX
5f001f29  56                   PUSH ESI
5f001f2a  ff1504d3005f         CALL dword ptr [0x5f00d304]
5f001f30  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
5f001f34  8b542420             MOV EDX,dword ptr [ESP + 0x20]
5f001f38  294c2424             SUB dword ptr [ESP + 0x24],ECX
5f001f3c  6a0f                 PUSH 0xf
5f001f3e  8d442420             LEA EAX,[ESP + 0x20]
5f001f42  6a07                 PUSH 0x7
5f001f44  29542430             SUB dword ptr [ESP + 0x30],EDX
5f001f48  6a02                 PUSH 0x2
5f001f4a  c744242c00000000     MOV dword ptr [ESP + 0x2c],0x0
5f001f52  c744242800000000     MOV dword ptr [ESP + 0x28],0x0
5f001f5a  50                   PUSH EAX
5f001f5b  57                   PUSH EDI
5f001f5c  e8dff3ffff           CALL 0x5f001340
5f001f61  8d4c2430             LEA ECX,[ESP + 0x30]
5f001f65  83c414               ADD ESP,0x14
5f001f68  6aff                 PUSH -0x1
5f001f6a  6aff                 PUSH -0x1
5f001f6c  51                   PUSH ECX
5f001f6d  ff1554d2005f         CALL dword ptr [0x5f00d254]
5f001f73  8d4c241c             LEA ECX,[ESP + 0x1c]
5f001f77  6a0f                 PUSH 0xf
5f001f79  6a02                 PUSH 0x2
5f001f7b  6a00                 PUSH 0x0
5f001f7d  51                   PUSH ECX
5f001f7e  57                   PUSH EDI
5f001f7f  e8bcf3ffff           CALL 0x5f001340
5f001f84  8d4c2430             LEA ECX,[ESP + 0x30]
5f001f88  83c414               ADD ESP,0x14
5f001f8b  6aff                 PUSH -0x1
5f001f8d  6aff                 PUSH -0x1
5f001f8f  51                   PUSH ECX
5f001f90  ff1554d2005f         CALL dword ptr [0x5f00d254]
5f001f96  8b0d8852005f         MOV ECX,dword ptr [0x5f005288]
5f001f9c  51                   PUSH ECX
5f001f9d  57                   PUSH EDI
5f001f9e  ff15ccd1005f         CALL dword ptr [0x5f00d1cc]
5f001fa4  8d4c242c             LEA ECX,[ESP + 0x2c]
5f001fa8  89442418             MOV dword ptr [ESP + 0x18],EAX
5f001fac  8d44241c             LEA EAX,[ESP + 0x1c]
5f001fb0  8b10                 MOV EDX,dword ptr [EAX]
5f001fb2  8911                 MOV dword ptr [ECX],EDX
5f001fb4  8b5004               MOV EDX,dword ptr [EAX + 0x4]
5f001fb7  895104               MOV dword ptr [ECX + 0x4],EDX
5f001fba  8b5008               MOV EDX,dword ptr [EAX + 0x8]
5f001fbd  8b400c               MOV EAX,dword ptr [EAX + 0xc]
5f001fc0  51                   PUSH ECX
5f001fc1  57                   PUSH EDI
5f001fc2  895108               MOV dword ptr [ECX + 0x8],EDX
5f001fc5  89410c               MOV dword ptr [ECX + 0xc],EAX
5f001fc8  8b442424             MOV EAX,dword ptr [ESP + 0x24]
5f001fcc  030594a3005f         ADD EAX,dword ptr [0x5f00a394]
5f001fd2  8944243c             MOV dword ptr [ESP + 0x3c],EAX
5f001fd6  e835f3ffff           CALL 0x5f001310
5f001fdb  8b44242c             MOV EAX,dword ptr [ESP + 0x2c]
5f001fdf  8d4c2434             LEA ECX,[ESP + 0x34]
5f001fe3  2b442424             SUB EAX,dword ptr [ESP + 0x24]
5f001fe7  83c408               ADD ESP,0x8
5f001fea  2b0594a3005f         SUB EAX,dword ptr [0x5f00a394]
5f001ff0  6a00                 PUSH 0x0
5f001ff2  50                   PUSH EAX
5f001ff3  51                   PUSH ECX
5f001ff4  ff1550d2005f         CALL dword ptr [0x5f00d250]
5f001ffa  8d4c242c             LEA ECX,[ESP + 0x2c]
5f001ffe  51                   PUSH ECX
5f001fff  57                   PUSH EDI
5f002000  e80bf3ffff           CALL 0x5f001310
5f002005  8b442424             MOV EAX,dword ptr [ESP + 0x24]
5f002009  83c408               ADD ESP,0x8
5f00200c  030594a3005f         ADD EAX,dword ptr [0x5f00a394]
5f002012  8944242c             MOV dword ptr [ESP + 0x2c],EAX
5f002016  8b442424             MOV EAX,dword ptr [ESP + 0x24]
5f00201a  2b0594a3005f         SUB EAX,dword ptr [0x5f00a394]
5f002020  8d4c242c             LEA ECX,[ESP + 0x2c]
5f002024  89442434             MOV dword ptr [ESP + 0x34],EAX
5f002028  51                   PUSH ECX
5f002029  8b442434             MOV EAX,dword ptr [ESP + 0x34]
5f00202d  57                   PUSH EDI
5f00202e  03c3                 ADD EAX,EBX
5f002030  89442440             MOV dword ptr [ESP + 0x40],EAX
5f002034  e8d7f2ffff           CALL 0x5f001310
5f002039  83c408               ADD ESP,0x8
5f00203c  85ed                 TEST EBP,EBP
5f00203e  7446                 JZ 0x5f002086
5f002040  8b6c2430             MOV EBP,dword ptr [ESP + 0x30]
5f002044  8d54242c             LEA EDX,[ESP + 0x2c]
5f002048  8d4c243c             LEA ECX,[ESP + 0x3c]
5f00204c  8b02                 MOV EAX,dword ptr [EDX]
5f00204e  035c2430             ADD EBX,dword ptr [ESP + 0x30]
5f002052  8901                 MOV dword ptr [ECX],EAX
5f002054  8b4208               MOV EAX,dword ptr [EDX + 0x8]
5f002057  896904               MOV dword ptr [ECX + 0x4],EBP
5f00205a  8b520c               MOV EDX,dword ptr [EDX + 0xc]
5f00205d  894108               MOV dword ptr [ECX + 0x8],EAX
5f002060  a19ca3005f           MOV EAX,[0x5f00a39c]
5f002065  6a0f                 PUSH 0xf
5f002067  03c3                 ADD EAX,EBX
5f002069  6a00                 PUSH 0x0
5f00206b  6a02                 PUSH 0x2
5f00206d  89510c               MOV dword ptr [ECX + 0xc],EDX
5f002070  8d4c2448             LEA ECX,[ESP + 0x48]
5f002074  895c244c             MOV dword ptr [ESP + 0x4c],EBX
5f002078  89442454             MOV dword ptr [ESP + 0x54],EAX
5f00207c  51                   PUSH ECX
5f00207d  57                   PUSH EDI
5f00207e  e8bdf2ffff           CALL 0x5f001340
5f002083  83c414               ADD ESP,0x14
5f002086  8b442428             MOV EAX,dword ptr [ESP + 0x28]
5f00208a  8d4c242c             LEA ECX,[ESP + 0x2c]
5f00208e  2b442420             SUB EAX,dword ptr [ESP + 0x20]
5f002092  51                   PUSH ECX
5f002093  2b0594a3005f         SUB EAX,dword ptr [0x5f00a394]
5f002099  57                   PUSH EDI
5f00209a  01442438             ADD dword ptr [ESP + 0x38],EAX
5f00209e  8b442438             MOV EAX,dword ptr [ESP + 0x38]
5f0020a2  030598a3005f         ADD EAX,dword ptr [0x5f00a398]
5f0020a8  89442440             MOV dword ptr [ESP + 0x40],EAX
5f0020ac  e85ff2ffff           CALL 0x5f001310
5f0020b1  8b4c2420             MOV ECX,dword ptr [ESP + 0x20]
5f0020b5  83c408               ADD ESP,0x8
5f0020b8  51                   PUSH ECX
5f0020b9  57                   PUSH EDI
5f0020ba  ff15ccd1005f         CALL dword ptr [0x5f00d1cc]
5f0020c0  57                   PUSH EDI
5f0020c1  56                   PUSH ESI
5f0020c2  ff154cd2005f         CALL dword ptr [0x5f00d24c]
5f0020c8  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f0020cc  5d                   POP EBP
5f0020cd  5f                   POP EDI
5f0020ce  5e                   POP ESI
5f0020cf  5b                   POP EBX
5f0020d0  83c43c               ADD ESP,0x3c
5f0020d3  c21400               RET 0x14
; undefined 10 bytes at 5f0020d6

; ==== FUNCTION Ctl3dWinIniChange entry=5f0020e0 sig=undefined __stdcall Ctl3dWinIniChange(void)
5f0020e0  83ec14               SUB ESP,0x14
5f0020e3  803da5a3005f00       CMP byte ptr [0x5f00a3a5],0x0
5f0020ea  56                   PUSH ESI
5f0020eb  57                   PUSH EDI
5f0020ec  0f8487000000         JZ 0x5f002179
5f0020f2  682052005f           PUSH 0x5f005220
5f0020f7  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f0020fd  8d442408             LEA EAX,[ESP + 0x8]
5f002101  6a09                 PUSH 0x9
5f002103  50                   PUSH EAX
5f002104  8b3d2cd2005f         MOV EDI,dword ptr [0x5f00d22c]
5f00210a  c605a4a3005f1e       MOV byte ptr [0x5f00a3a4],0x1e
5f002111  6838c0005f           PUSH 0x5f00c038
5f002116  685cc0005f           PUSH 0x5f00c05c
5f00211b  6870c0005f           PUSH 0x5f00c070
5f002120  ffd7                 CALL EDI
5f002122  8d4c2408             LEA ECX,[ESP + 0x8]
5f002126  681cc0005f           PUSH 0x5f00c01c
5f00212b  51                   PUSH ECX
5f00212c  8b353cd2005f         MOV ESI,dword ptr [0x5f00d23c]
5f002132  ffd6                 CALL ESI
5f002134  85c0                 TEST EAX,EAX
5f002136  7507                 JNZ 0x5f00213f
5f002138  c605a4a3005f1f       MOV byte ptr [0x5f00a3a4],0x1f
5f00213f  8d442408             LEA EAX,[ESP + 0x8]
5f002143  6a09                 PUSH 0x9
5f002145  50                   PUSH EAX
5f002146  6828c0005f           PUSH 0x5f00c028
5f00214b  6844c0005f           PUSH 0x5f00c044
5f002150  6870c0005f           PUSH 0x5f00c070
5f002155  ffd7                 CALL EDI
5f002157  8d442408             LEA EAX,[ESP + 0x8]
5f00215b  680cc0005f           PUSH 0x5f00c00c
5f002160  50                   PUSH EAX
5f002161  ffd6                 CALL ESI
5f002163  85c0                 TEST EAX,EAX
5f002165  7507                 JNZ 0x5f00216e
5f002167  c605a4a3005f1f       MOV byte ptr [0x5f00a3a4],0x1f
5f00216e  682052005f           PUSH 0x5f005220
5f002173  ff1528d2005f         CALL dword ptr [0x5f00d228]
5f002179  5f                   POP EDI
5f00217a  5e                   POP ESI
5f00217b  83c414               ADD ESP,0x14
5f00217e  c3                   RET
; undefined 1 bytes at 5f00217f

; ==== FUNCTION FUN_5f002180 entry=5f002180 sig=uint __stdcall FUN_5f002180(void)
5f002180  81ec34020000         SUB ESP,0x234
5f002186  53                   PUSH EBX
5f002187  56                   PUSH ESI
5f002188  57                   PUSH EDI
5f002189  682052005f           PUSH 0x5f005220
5f00218e  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f002194  8d44240c             LEA EAX,[ESP + 0xc]
5f002198  6a02                 PUSH 0x2
5f00219a  50                   PUSH EAX
5f00219b  6800c2005f           PUSH 0x5f00c200
5f0021a0  ff1514d2005f         CALL dword ptr [0x5f00d214]
5f0021a6  85c0                 TEST EAX,EAX
5f0021a8  740c                 JZ 0x5f0021b6
5f0021aa  66837c240c31         CMP word ptr [ESP + 0xc],0x31
5f0021b0  0f84fc000000         JZ 0x5f0022b2
5f0021b6  ff1518d2005f         CALL dword ptr [0x5f00d218]
5f0021bc  a900000080           TEST EAX,0x80000000
5f0021c1  7438                 JZ 0x5f0021fb
5f0021c3  6a10                 PUSH 0x10
5f0021c5  68f4c1005f           PUSH 0x5f00c1f4
5f0021ca  6868c1005f           PUSH 0x5f00c168
5f0021cf  6a00                 PUSH 0x0
5f0021d1  ff1580d2005f         CALL dword ptr [0x5f00d280]
5f0021d7  c7054052005f00000000 MOV dword ptr [0x5f005240],0x0
5f0021e1  682052005f           PUSH 0x5f005220
5f0021e6  ff1528d2005f         CALL dword ptr [0x5f00d228]
5f0021ec  a14052005f           MOV EAX,[0x5f005240]
5f0021f1  5f                   POP EDI
5f0021f2  5e                   POP ESI
5f0021f3  5b                   POP EBX
5f0021f4  81c434020000         ADD ESP,0x234
5f0021fa  c3                   RET
5f0021fb  6804010000           PUSH 0x104
5f002200  a15852005f           MOV EAX,[0x5f005258]
5f002205  680050005f           PUSH 0x5f005000
5f00220a  50                   PUSH EAX
5f00220b  ff1510d2005f         CALL dword ptr [0x5f00d210]
5f002211  8d0445fe4f005f       LEA EAX,[EAX*0x2 + 0x5f004ffe]
5f002218  3d0050005f           CMP EAX,0x5f005000
5f00221d  7231                 JC 0x5f002250
5f00221f  8b357cd2005f         MOV ESI,dword ptr [0x5f00d27c]
5f002225  6683385c             CMP word ptr [EAX],0x5c
5f002229  7411                 JZ 0x5f00223c
5f00222b  50                   PUSH EAX
5f00222c  680050005f           PUSH 0x5f005000
5f002231  ffd6                 CALL ESI
5f002233  3d0050005f           CMP EAX,0x5f005000
5f002238  73eb                 JNC 0x5f002225
5f00223a  eb14                 JMP 0x5f002250
5f00223c  668378fe3a           CMP word ptr [EAX + -0x2],0x3a
5f002241  7407                 JZ 0x5f00224a
5f002243  66c7000000           MOV word ptr [EAX],0x0
5f002248  eb06                 JMP 0x5f002250
5f00224a  66c740020000         MOV word ptr [EAX + 0x2],0x0
5f002250  8d442438             LEA EAX,[ESP + 0x38]
5f002254  6804010000           PUSH 0x104
5f002259  50                   PUSH EAX
5f00225a  ff1520d2005f         CALL dword ptr [0x5f00d220]
5f002260  8d4c2438             LEA ECX,[ESP + 0x38]
5f002264  8b353cd2005f         MOV ESI,dword ptr [0x5f00d23c]
5f00226a  51                   PUSH ECX
5f00226b  680050005f           PUSH 0x5f005000
5f002270  ffd6                 CALL ESI
5f002272  85c0                 TEST EAX,EAX
5f002274  743c                 JZ 0x5f0022b2
5f002276  8d442438             LEA EAX,[ESP + 0x38]
5f00227a  6804010000           PUSH 0x104
5f00227f  50                   PUSH EAX
5f002280  ff1524d2005f         CALL dword ptr [0x5f00d224]
5f002286  8d4c2438             LEA ECX,[ESP + 0x38]
5f00228a  51                   PUSH ECX
5f00228b  680050005f           PUSH 0x5f005000
5f002290  ffd6                 CALL ESI
5f002292  85c0                 TEST EAX,EAX
5f002294  741c                 JZ 0x5f0022b2
5f002296  682052005f           PUSH 0x5f005220
5f00229b  ff1528d2005f         CALL dword ptr [0x5f00d228]
5f0022a1  6a10                 PUSH 0x10
5f0022a3  68f4c1005f           PUSH 0x5f00c1f4
5f0022a8  68dcc0005f           PUSH 0x5f00c0dc
5f0022ad  e91dffffff           JMP 0x5f0021cf
5f0022b2  6a00                 PUSH 0x0
5f0022b4  ff1578d2005f         CALL dword ptr [0x5f00d278]
5f0022ba  8bd8                 MOV EBX,EAX
5f0022bc  6a0c                 PUSH 0xc
5f0022be  53                   PUSH EBX
5f0022bf  8b35d0d1005f         MOV ESI,dword ptr [0x5f00d1d0]
5f0022c5  ffd6                 CALL ESI
5f0022c7  8bf8                 MOV EDI,EAX
5f0022c9  6a0e                 PUSH 0xe
5f0022cb  53                   PUSH EBX
5f0022cc  ffd6                 CALL ESI
5f0022ce  0faff8               IMUL EDI,EAX
5f0022d1  b801000000           MOV EAX,0x1
5f0022d6  83ff04               CMP EDI,0x4
5f0022d9  7d02                 JGE 0x5f0022dd
5f0022db  33c0                 XOR EAX,EAX
5f0022dd  6a01                 PUSH 0x1
5f0022df  8b3d74d2005f         MOV EDI,dword ptr [0x5f00d274]
5f0022e5  a34052005f           MOV [0x5f005240],EAX
5f0022ea  ffd7                 CALL EDI
5f0022ec  3d5e010000           CMP EAX,0x15e
5f0022f1  7515                 JNZ 0x5f002308
5f0022f3  6a00                 PUSH 0x0
5f0022f5  ffd7                 CALL EDI
5f0022f7  3d80020000           CMP EAX,0x280
5f0022fc  750a                 JNZ 0x5f002308
5f0022fe  c7054052005f00000000 MOV dword ptr [0x5f005240],0x0
5f002308  53                   PUSH EBX
5f002309  6a00                 PUSH 0x0
5f00230b  ff154cd2005f         CALL dword ptr [0x5f00d24c]
5f002311  833d4052005f00       CMP dword ptr [0x5f005240],0x0
5f002318  0f84c3feffff         JZ 0x5f0021e1
5f00231e  68c8c0005f           PUSH 0x5f00c0c8
5f002323  8b351cd2005f         MOV ESI,dword ptr [0x5f00d21c]
5f002329  ffd6                 CALL ESI
5f00232b  66a34852005f         MOV [0x5f005248],AX
5f002331  6685c0               TEST AX,AX
5f002334  0f849dfeffff         JZ 0x5f0021d7
5f00233a  68a0c0005f           PUSH 0x5f00c0a0
5f00233f  ffd6                 CALL ESI
5f002341  66a34e52005f         MOV [0x5f00524e],AX
5f002347  6685c0               TEST AX,AX
5f00234a  0f8487feffff         JZ 0x5f0021d7
5f002350  68bcc0005f           PUSH 0x5f00c0bc
5f002355  ffd6                 CALL ESI
5f002357  66a34c52005f         MOV [0x5f00524c],AX
5f00235d  68b0c0005f           PUSH 0x5f00c0b0
5f002362  ffd6                 CALL ESI
5f002364  66833d4c52005f00     CMP word ptr [0x5f00524c],0x0
5f00236c  66a34a52005f         MOV [0x5f00524a],AX
5f002372  0f84eb000000         JZ 0x5f002463
5f002378  6685c0               TEST AX,AX
5f00237b  0f84e2000000         JZ 0x5f002463
5f002381  6890c0005f           PUSH 0x5f00c090
5f002386  ffd6                 CALL ESI
5f002388  66a35252005f         MOV [0x5f005252],AX
5f00238e  6880c0005f           PUSH 0x5f00c080
5f002393  ffd6                 CALL ESI
5f002395  66833d5252005f00     CMP word ptr [0x5f005252],0x0
5f00239d  66a35052005f         MOV [0x5f005250],AX
5f0023a3  0f84a4000000         JZ 0x5f00244d
5f0023a9  6685c0               TEST AX,AX
5f0023ac  0f849b000000         JZ 0x5f00244d
5f0023b2  68d0c0005f           PUSH 0x5f00c0d0
5f0023b7  ffd6                 CALL ESI
5f0023b9  66a35452005f         MOV [0x5f005254],AX
5f0023bf  6685c0               TEST AX,AX
5f0023c2  0f840ffeffff         JZ 0x5f0021d7
5f0023c8  6a2a                 PUSH 0x2a
5f0023ca  ffd7                 CALL EDI
5f0023cc  a2a5a3005f           MOV [0x5f00a3a5],AL
5f0023d1  e80afdffff           CALL 0x5f0020e0
5f0023d6  6a01                 PUSH 0x1
5f0023d8  e883010000           CALL 0x5f002560
5f0023dd  83c404               ADD ESP,0x4
5f0023e0  85c0                 TEST EAX,EAX
5f0023e2  0f84effdffff         JZ 0x5f0021d7
5f0023e8  bba0a2005f           MOV EBX,0x5f00a2a0
5f0023ed  be60b0005f           MOV ESI,0x5f00b060
5f0023f2  8b3d70d2005f         MOV EDI,dword ptr [0x5f00d270]
5f0023f8  8b06                 MOV EAX,dword ptr [ESI]
5f0023fa  8d56d8               LEA EDX,[ESI + -0x28]
5f0023fd  8903                 MOV dword ptr [EBX],EAX
5f0023ff  8d4c2410             LEA ECX,[ESP + 0x10]
5f002403  51                   PUSH ECX
5f002404  83c328               ADD EBX,0x28
5f002407  52                   PUSH EDX
5f002408  83c634               ADD ESI,0x34
5f00240b  6a00                 PUSH 0x0
5f00240d  ffd7                 CALL EDI
5f00240f  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
5f002413  81fe98b1005f         CMP ESI,0x5f00b198
5f002419  894bdc               MOV dword ptr [EBX + -0x24],ECX
5f00241c  72da                 JC 0x5f0023f8
5f00241e  8d442410             LEA EAX,[ESP + 0x10]
5f002422  50                   PUSH EAX
5f002423  6802800000           PUSH 0x8002
5f002428  6a00                 PUSH 0x0
5f00242a  ffd7                 CALL EDI
5f00242c  85c0                 TEST EAX,EAX
5f00242e  740e                 JZ 0x5f00243e
5f002430  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f002434  a390a3005f           MOV [0x5f00a390],EAX
5f002439  e9a3fdffff           JMP 0x5f0021e1
5f00243e  a16cd2005f           MOV EAX,[0x5f00d26c]
5f002443  a390a3005f           MOV [0x5f00a390],EAX
5f002448  e994fdffff           JMP 0x5f0021e1
5f00244d  33c0                 XOR EAX,EAX
5f00244f  5f                   POP EDI
5f002450  c7054052005f00000000 MOV dword ptr [0x5f005240],0x0
5f00245a  5e                   POP ESI
5f00245b  5b                   POP EBX
5f00245c  81c434020000         ADD ESP,0x234
5f002462  c3                   RET
5f002463  33c0                 XOR EAX,EAX
5f002465  5f                   POP EDI
5f002466  c7054052005f00000000 MOV dword ptr [0x5f005240],0x0
5f002470  5e                   POP ESI
5f002471  5b                   POP EBX
5f002472  81c434020000         ADD ESP,0x234
5f002478  c3                   RET
; undefined 7 bytes at 5f002479

; ==== FUNCTION FUN_5f002480 entry=5f002480 sig=undefined __stdcall FUN_5f002480(void)
5f002480  56                   PUSH ESI
5f002481  682052005f           PUSH 0x5f005220
5f002486  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f00248c  b8a0a2005f           MOV EAX,0x5f00a2a0
5f002491  833800               CMP dword ptr [EAX],0x0
5f002494  7406                 JZ 0x5f00249c
5f002496  c70000000000         MOV dword ptr [EAX],0x0
5f00249c  83c028               ADD EAX,0x28
5f00249f  3d90a3005f           CMP EAX,0x5f00a390
5f0024a4  72eb                 JC 0x5f002491
5f0024a6  e835eeffff           CALL 0x5f0012e0
5f0024ab  66833d4852005f00     CMP word ptr [0x5f005248],0x0
5f0024b3  7411                 JZ 0x5f0024c6
5f0024b5  66a14852005f         MOV AX,[0x5f005248]
5f0024bb  8b35fcd1005f         MOV ESI,dword ptr [0x5f00d1fc]
5f0024c1  50                   PUSH EAX
5f0024c2  ffd6                 CALL ESI
5f0024c4  eb06                 JMP 0x5f0024cc
5f0024c6  8b35fcd1005f         MOV ESI,dword ptr [0x5f00d1fc]
5f0024cc  66833d4e52005f00     CMP word ptr [0x5f00524e],0x0
5f0024d4  7409                 JZ 0x5f0024df
5f0024d6  66a14e52005f         MOV AX,[0x5f00524e]
5f0024dc  50                   PUSH EAX
5f0024dd  ffd6                 CALL ESI
5f0024df  66833d4c52005f00     CMP word ptr [0x5f00524c],0x0
5f0024e7  7409                 JZ 0x5f0024f2
5f0024e9  66a14c52005f         MOV AX,[0x5f00524c]
5f0024ef  50                   PUSH EAX
5f0024f0  ffd6                 CALL ESI
5f0024f2  66833d4a52005f00     CMP word ptr [0x5f00524a],0x0
5f0024fa  7409                 JZ 0x5f002505
5f0024fc  66a14a52005f         MOV AX,[0x5f00524a]
5f002502  50                   PUSH EAX
5f002503  ffd6                 CALL ESI
5f002505  66833d5252005f00     CMP word ptr [0x5f005252],0x0
5f00250d  7409                 JZ 0x5f002518
5f00250f  66a15252005f         MOV AX,[0x5f005252]
5f002515  50                   PUSH EAX
5f002516  ffd6                 CALL ESI
5f002518  66833d5052005f00     CMP word ptr [0x5f005250],0x0
5f002520  7409                 JZ 0x5f00252b
5f002522  66a15052005f         MOV AX,[0x5f005250]
5f002528  50                   PUSH EAX
5f002529  ffd6                 CALL ESI
5f00252b  66833d5452005f00     CMP word ptr [0x5f005254],0x0
5f002533  7409                 JZ 0x5f00253e
5f002535  66a15452005f         MOV AX,[0x5f005254]
5f00253b  50                   PUSH EAX
5f00253c  ffd6                 CALL ESI
5f00253e  c7054052005f00000000 MOV dword ptr [0x5f005240],0x0
5f002548  682052005f           PUSH 0x5f005220
5f00254d  ff1528d2005f         CALL dword ptr [0x5f00d228]
5f002553  5e                   POP ESI
5f002554  c3                   RET
; undefined 11 bytes at 5f002555

; ==== FUNCTION FUN_5f002560 entry=5f002560 sig=undefined4 __cdecl FUN_5f002560(int param_1)
5f002560  83ec30               SUB ESP,0x30
5f002563  833d4052005f00       CMP dword ptr [0x5f005240],0x0
5f00256a  53                   PUSH EBX
5f00256b  56                   PUSH ESI
5f00256c  57                   PUSH EDI
5f00256d  7509                 JNZ 0x5f002578
5f00256f  33c0                 XOR EAX,EAX
5f002571  5f                   POP EDI
5f002572  5e                   POP ESI
5f002573  5b                   POP EBX
5f002574  83c430               ADD ESP,0x30
5f002577  c3                   RET
5f002578  6633db               XOR BX,BX
5f00257b  8b3d84d2005f         MOV EDI,dword ptr [0x5f00d284]
5f002581  0fb7f3               MOVZX ESI,BX
5f002584  6643                 INC BX
5f002586  33c0                 XOR EAX,EAX
5f002588  668b047570b1005f     MOV AX,word ptr [ESI*0x2 + 0x5f00b170]
5f002590  50                   PUSH EAX
5f002591  ffd7                 CALL EDI
5f002593  6683fb08             CMP BX,0x8
5f002597  8944b41c             MOV dword ptr [ESP + ESI*0x4 + 0x1c],EAX
5f00259b  72e4                 JC 0x5f002581
5f00259d  66813d6052005f0003   CMP word ptr [0x5f005260],0x300
5f0025a6  7508                 JNZ 0x5f0025b0
5f0025a8  c744241cffffff00     MOV dword ptr [ESP + 0x1c],0xffffff
5f0025b0  837c243400           CMP dword ptr [ESP + 0x34],0x0
5f0025b5  740a                 JZ 0x5f0025c1
5f0025b7  8b442434             MOV EAX,dword ptr [ESP + 0x34]
5f0025bb  39442420             CMP dword ptr [ESP + 0x20],EAX
5f0025bf  751a                 JNZ 0x5f0025db
5f0025c1  817c242080808000     CMP dword ptr [ESP + 0x20],0x808080
5f0025c9  c7442434c0c0c000     MOV dword ptr [ESP + 0x34],0xc0c0c0
5f0025d1  7408                 JZ 0x5f0025db
5f0025d3  c744243480808000     MOV dword ptr [ESP + 0x34],0x808080
5f0025db  837c244000           CMP dword ptr [ESP + 0x40],0x0
5f0025e0  751e                 JNZ 0x5f002600
5f0025e2  be6452005f           MOV ESI,0x5f005264
5f0025e7  8d7c241c             LEA EDI,[ESP + 0x1c]
5f0025eb  b920000000           MOV ECX,0x20
5f0025f0  f3a6                 CMPSB.REPE ES:EDI,ESI
5f0025f2  750c                 JNZ 0x5f002600
5f0025f4  b801000000           MOV EAX,0x1
5f0025f9  5f                   POP EDI
5f0025fa  5e                   POP ESI
5f0025fb  5b                   POP EBX
5f0025fc  83c430               ADD ESP,0x30
5f0025ff  c3                   RET
5f002600  8b442438             MOV EAX,dword ptr [ESP + 0x38]
5f002604  8b4c242c             MOV ECX,dword ptr [ESP + 0x2c]
5f002608  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
5f00260c  50                   PUSH EAX
5f00260d  8b442428             MOV EAX,dword ptr [ESP + 0x28]
5f002611  51                   PUSH ECX
5f002612  8b4c2428             MOV ECX,dword ptr [ESP + 0x28]
5f002616  52                   PUSH EDX
5f002617  8b54243c             MOV EDX,dword ptr [ESP + 0x3c]
5f00261b  50                   PUSH EAX
5f00261c  51                   PUSH ECX
5f00261d  a15852005f           MOV EAX,[0x5f005258]
5f002622  6633ff               XOR DI,DI
5f002625  52                   PUSH EDX
5f002626  68c7670000           PUSH 0x67c7
5f00262b  50                   PUSH EAX
5f00262c  e8bf210000           CALL 0x5f0047f0
5f002631  8b35e0d1005f         MOV ESI,dword ptr [0x5f00d1e0]
5f002637  8944240c             MOV dword ptr [ESP + 0xc],EAX
5f00263b  0fb7c7               MOVZX EAX,DI
5f00263e  6647                 INC DI
5f002640  8b4c841c             MOV ECX,dword ptr [ESP + EAX*0x4 + 0x1c]
5f002644  8d1c8500000000       LEA EBX,[EAX*0x4 + 0x0]
5f00264b  51                   PUSH ECX
5f00264c  ffd6                 CALL ESI
5f00264e  6683ff03             CMP DI,0x3
5f002652  89441c10             MOV dword ptr [ESP + EBX*0x1 + 0x10],EAX
5f002656  72e3                 JC 0x5f00263b
5f002658  33c0                 XOR EAX,EAX
5f00265a  33c9                 XOR ECX,ECX
5f00265c  0fb7d0               MOVZX EDX,AX
5f00265f  394c9410             CMP dword ptr [ESP + EDX*0x4 + 0x10],ECX
5f002663  7453                 JZ 0x5f0026b8
5f002665  6640                 INC AX
5f002667  663d0300             CMP AX,0x3
5f00266b  72ef                 JC 0x5f00265c
5f00266d  837c240c00           CMP dword ptr [ESP + 0xc],0x0
5f002672  7444                 JZ 0x5f0026b8
5f002674  e867ecffff           CALL 0x5f0012e0
5f002679  8b5c2414             MOV EBX,dword ptr [ESP + 0x14]
5f00267d  8d4c2410             LEA ECX,[ESP + 0x10]
5f002681  ba8452005f           MOV EDX,0x5f005284
5f002686  8d74241c             LEA ESI,[ESP + 0x1c]
5f00268a  8b01                 MOV EAX,dword ptr [ECX]
5f00268c  bf6452005f           MOV EDI,0x5f005264
5f002691  8b4908               MOV ECX,dword ptr [ECX + 0x8]
5f002694  8902                 MOV dword ptr [EDX],EAX
5f002696  895a04               MOV dword ptr [EDX + 0x4],EBX
5f002699  894a08               MOV dword ptr [EDX + 0x8],ECX
5f00269c  b908000000           MOV ECX,0x8
5f0026a1  f3a5                 MOVSD.REP ES:EDI,ESI
5f0026a3  8b44240c             MOV EAX,dword ptr [ESP + 0xc]
5f0026a7  5f                   POP EDI
5f0026a8  5e                   POP ESI
5f0026a9  a39052005f           MOV [0x5f005290],EAX
5f0026ae  b801000000           MOV EAX,0x1
5f0026b3  5b                   POP EBX
5f0026b4  83c430               ADD ESP,0x30
5f0026b7  c3                   RET
5f0026b8  6633f6               XOR SI,SI
5f0026bb  0fb7c6               MOVZX EAX,SI
5f0026be  6646                 INC SI
5f0026c0  8d4c8410             LEA ECX,[ESP + EAX*0x4 + 0x10]
5f0026c4  51                   PUSH ECX
5f0026c5  e8f6ebffff           CALL 0x5f0012c0
5f0026ca  83c404               ADD ESP,0x4
5f0026cd  6683fe03             CMP SI,0x3
5f0026d1  72e8                 JC 0x5f0026bb
5f0026d3  8d44240c             LEA EAX,[ESP + 0xc]
5f0026d7  50                   PUSH EAX
5f0026d8  e8e3ebffff           CALL 0x5f0012c0
5f0026dd  83c404               ADD ESP,0x4
5f0026e0  33c0                 XOR EAX,EAX
5f0026e2  5f                   POP EDI
5f0026e3  5e                   POP ESI
5f0026e4  5b                   POP EBX
5f0026e5  83c430               ADD ESP,0x30
5f0026e8  c3                   RET
; undefined 7 bytes at 5f0026e9

; ==== FUNCTION Ctl3dDlgProc entry=5f0026f0 sig=LRESULT __stdcall Ctl3dDlgProc(HWND param_1, uint param_2, HDC param_3, HWND param_4)
5f0026f0  83ec28               SUB ESP,0x28
5f0026f3  53                   PUSH EBX
5f0026f4  56                   PUSH ESI
5f0026f5  57                   PUSH EDI
5f0026f6  55                   PUSH EBP
5f0026f7  8b7c2440             MOV EDI,dword ptr [ESP + 0x40]
5f0026fb  81ff82000000         CMP EDI,0x82
5f002701  7524                 JNZ 0x5f002727
5f002703  8b6c2448             MOV EBP,dword ptr [ESP + 0x48]
5f002707  6a06                 PUSH 0x6
5f002709  8b5c2448             MOV EBX,dword ptr [ESP + 0x48]
5f00270d  55                   PUSH EBP
5f00270e  8b742444             MOV ESI,dword ptr [ESP + 0x44]
5f002712  53                   PUSH EBX
5f002713  57                   PUSH EDI
5f002714  56                   PUSH ESI
5f002715  e846ebffff           CALL 0x5f001260
5f00271a  83c414               ADD ESP,0x14
5f00271d  5d                   POP EBP
5f00271e  5f                   POP EDI
5f00271f  5e                   POP ESI
5f002720  5b                   POP EBX
5f002721  83c428               ADD ESP,0x28
5f002724  c21000               RET 0x10
5f002727  33c0                 XOR EAX,EAX
5f002729  8b74243c             MOV ESI,dword ptr [ESP + 0x3c]
5f00272d  66a15452005f         MOV AX,[0x5f005254]
5f002733  50                   PUSH EAX
5f002734  56                   PUSH ESI
5f002735  ff1500d3005f         CALL dword ptr [0x5f00d300]
5f00273b  85c0                 TEST EAX,EAX
5f00273d  7428                 JZ 0x5f002767
5f00273f  8b6c2448             MOV EBP,dword ptr [ESP + 0x48]
5f002743  8b5c2444             MOV EBX,dword ptr [ESP + 0x44]
5f002747  55                   PUSH EBP
5f002748  53                   PUSH EBX
5f002749  57                   PUSH EDI
5f00274a  56                   PUSH ESI
5f00274b  6a06                 PUSH 0x6
5f00274d  56                   PUSH ESI
5f00274e  e8cde8ffff           CALL 0x5f001020
5f002753  83c408               ADD ESP,0x8
5f002756  50                   PUSH EAX
5f002757  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f00275d  5d                   POP EBP
5f00275e  5f                   POP EDI
5f00275f  5e                   POP ESI
5f002760  5b                   POP EBX
5f002761  83c428               ADD ESP,0x28
5f002764  c21000               RET 0x10
5f002767  81ff86000000         CMP EDI,0x86
5f00276d  7735                 JA 0x5f0027a4
5f00276f  81ff85000000         CMP EDI,0x85
5f002775  7361                 JNC 0x5f0027d8
5f002777  83ff0c               CMP EDI,0xc
5f00277a  745c                 JZ 0x5f0027d8
5f00277c  8b5c2444             MOV EBX,dword ptr [ESP + 0x44]
5f002780  8b6c2448             MOV EBP,dword ptr [ESP + 0x48]
5f002784  55                   PUSH EBP
5f002785  53                   PUSH EBX
5f002786  57                   PUSH EDI
5f002787  56                   PUSH ESI
5f002788  6a06                 PUSH 0x6
5f00278a  56                   PUSH ESI
5f00278b  e890e8ffff           CALL 0x5f001020
5f002790  83c408               ADD ESP,0x8
5f002793  50                   PUSH EAX
5f002794  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f00279a  5d                   POP EBP
5f00279b  5f                   POP EDI
5f00279c  5e                   POP ESI
5f00279d  5b                   POP EBX
5f00279e  83c428               ADD ESP,0x28
5f0027a1  c21000               RET 0x10
5f0027a4  81ff38010000         CMP EDI,0x138
5f0027aa  7716                 JA 0x5f0027c2
5f0027ac  81ff32010000         CMP EDI,0x132
5f0027b2  0f833b010000         JNC 0x5f0028f3
5f0027b8  81ff10010000         CMP EDI,0x110
5f0027be  7473                 JZ 0x5f002833
5f0027c0  ebba                 JMP 0x5f00277c
5f0027c2  81ff43190000         CMP EDI,0x1943
5f0027c8  72b2                 JC 0x5f00277c
5f0027ca  81ff44190000         CMP EDI,0x1944
5f0027d0  0f8630020000         JBE 0x5f002a06
5f0027d6  eba4                 JMP 0x5f00277c
5f0027d8  66813d6052005f5f03   CMP word ptr [0x5f005260],0x35f
5f0027e1  7328                 JNC 0x5f00280b
5f0027e3  56                   PUSH ESI
5f0027e4  ff1564d2005f         CALL dword ptr [0x5f00d264]
5f0027ea  85c0                 TEST EAX,EAX
5f0027ec  751d                 JNZ 0x5f00280b
5f0027ee  8b6c2448             MOV EBP,dword ptr [ESP + 0x48]
5f0027f2  6a00                 PUSH 0x0
5f0027f4  8b5c2448             MOV EBX,dword ptr [ESP + 0x48]
5f0027f8  55                   PUSH EBP
5f0027f9  53                   PUSH EBX
5f0027fa  57                   PUSH EDI
5f0027fb  56                   PUSH ESI
5f0027fc  e82ff6ffff           CALL 0x5f001e30
5f002801  5d                   POP EBP
5f002802  5f                   POP EDI
5f002803  5e                   POP ESI
5f002804  5b                   POP EBX
5f002805  83c428               ADD ESP,0x28
5f002808  c21000               RET 0x10
5f00280b  8b6c2448             MOV EBP,dword ptr [ESP + 0x48]
5f00280f  8b5c2444             MOV EBX,dword ptr [ESP + 0x44]
5f002813  55                   PUSH EBP
5f002814  53                   PUSH EBX
5f002815  57                   PUSH EDI
5f002816  56                   PUSH ESI
5f002817  6a06                 PUSH 0x6
5f002819  56                   PUSH ESI
5f00281a  e801e8ffff           CALL 0x5f001020
5f00281f  83c408               ADD ESP,0x8
5f002822  50                   PUSH EAX
5f002823  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f002829  5d                   POP EBP
5f00282a  5f                   POP EDI
5f00282b  5e                   POP ESI
5f00282c  5b                   POP EBX
5f00282d  83c428               ADD ESP,0x28
5f002830  c21000               RET 0x10
5f002833  6a06                 PUSH 0x6
5f002835  56                   PUSH ESI
5f002836  e8e5e7ffff           CALL 0x5f001020
5f00283b  8944241c             MOV dword ptr [ESP + 0x1c],EAX
5f00283f  83c408               ADD ESP,0x8
5f002842  66813d6052005f5f03   CMP word ptr [0x5f005260],0x35f
5f00284b  7215                 JC 0x5f002862
5f00284d  6af0                 PUSH -0x10
5f00284f  56                   PUSH ESI
5f002850  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f002856  c744241000000000     MOV dword ptr [ESP + 0x10],0x0
5f00285e  a804                 TEST AL,0x4
5f002860  7508                 JNZ 0x5f00286a
5f002862  c744241001000000     MOV dword ptr [ESP + 0x10],0x1
5f00286a  8d442410             LEA EAX,[ESP + 0x10]
5f00286e  50                   PUSH EAX
5f00286f  6a00                 PUSH 0x0
5f002871  68f0110000           PUSH 0x11f0
5f002876  56                   PUSH ESI
5f002877  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f00287d  837c241000           CMP dword ptr [ESP + 0x10],0x0
5f002882  7527                 JNZ 0x5f0028ab
5f002884  56                   PUSH ESI
5f002885  e806f1ffff           CALL 0x5f001990
5f00288a  8b6c2448             MOV EBP,dword ptr [ESP + 0x48]
5f00288e  8b5c2444             MOV EBX,dword ptr [ESP + 0x44]
5f002892  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f002896  55                   PUSH EBP
5f002897  53                   PUSH EBX
5f002898  57                   PUSH EDI
5f002899  56                   PUSH ESI
5f00289a  50                   PUSH EAX
5f00289b  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f0028a1  5d                   POP EBP
5f0028a2  5f                   POP EDI
5f0028a3  5e                   POP ESI
5f0028a4  5b                   POP EBX
5f0028a5  83c428               ADD ESP,0x28
5f0028a8  c21000               RET 0x10
5f0028ab  8b6c2448             MOV EBP,dword ptr [ESP + 0x48]
5f0028af  8b5c2444             MOV EBX,dword ptr [ESP + 0x44]
5f0028b3  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f0028b7  55                   PUSH EBP
5f0028b8  53                   PUSH EBX
5f0028b9  57                   PUSH EDI
5f0028ba  56                   PUSH ESI
5f0028bb  50                   PUSH EAX
5f0028bc  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f0028c2  66813d6052005f5f03   CMP word ptr [0x5f005260],0x35f
5f0028cb  8bf8                 MOV EDI,EAX
5f0028cd  720d                 JC 0x5f0028dc
5f0028cf  6af0                 PUSH -0x10
5f0028d1  56                   PUSH ESI
5f0028d2  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f0028d8  a804                 TEST AL,0x4
5f0028da  750b                 JNZ 0x5f0028e7
5f0028dc  68ffff0000           PUSH 0xffff
5f0028e1  56                   PUSH ESI
5f0028e2  e869f3ffff           CALL 0x5f001c50
5f0028e7  8bc7                 MOV EAX,EDI
5f0028e9  5d                   POP EBP
5f0028ea  5f                   POP EDI
5f0028eb  5e                   POP ESI
5f0028ec  5b                   POP EBX
5f0028ed  83c428               ADD ESP,0x28
5f0028f0  c21000               RET 0x10
5f0028f3  8d442418             LEA EAX,[ESP + 0x18]
5f0028f7  6a10                 PUSH 0x10
5f0028f9  50                   PUSH EAX
5f0028fa  56                   PUSH ESI
5f0028fb  ff15f0d2005f         CALL dword ptr [0x5f00d2f0]
5f002901  8d4c2418             LEA ECX,[ESP + 0x18]
5f002905  51                   PUSH ECX
5f002906  6820c2005f           PUSH 0x5f00c220
5f00290b  ff150cd2005f         CALL dword ptr [0x5f00d20c]
5f002911  85c0                 TEST EAX,EAX
5f002913  743a                 JZ 0x5f00294f
5f002915  8b6c2448             MOV EBP,dword ptr [ESP + 0x48]
5f002919  8b5c2444             MOV EBX,dword ptr [ESP + 0x44]
5f00291d  55                   PUSH EBP
5f00291e  8d87bf0c0000         LEA EAX,[EDI + 0xcbf]
5f002924  53                   PUSH EBX
5f002925  50                   PUSH EAX
5f002926  56                   PUSH ESI
5f002927  6a06                 PUSH 0x6
5f002929  56                   PUSH ESI
5f00292a  e8f1e6ffff           CALL 0x5f001020
5f00292f  83c408               ADD ESP,0x8
5f002932  50                   PUSH EAX
5f002933  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f002939  85c0                 TEST EAX,EAX
5f00293b  0f84ab000000         JZ 0x5f0029ec
5f002941  83f801               CMP EAX,0x1
5f002944  0f85aa000000         JNZ 0x5f0029f4
5f00294a  e99d000000           JMP 0x5f0029ec
5f00294f  6a04                 PUSH 0x4
5f002951  56                   PUSH ESI
5f002952  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f002958  85c0                 TEST EAX,EAX
5f00295a  750e                 JNZ 0x5f00296a
5f00295c  8b6c2448             MOV EBP,dword ptr [ESP + 0x48]
5f002960  8b5c2444             MOV EBX,dword ptr [ESP + 0x44]
5f002964  55                   PUSH EBP
5f002965  e983000000           JMP 0x5f0029ed
5f00296a  3d0000ffff           CMP EAX,0xffff0000
5f00296f  763a                 JBE 0x5f0029ab
5f002971  66813d6052005f0a03   CMP word ptr [0x5f005260],0x30a
5f00297a  772f                 JA 0x5f0029ab
5f00297c  8b6c2448             MOV EBP,dword ptr [ESP + 0x48]
5f002980  8b5c2444             MOV EBX,dword ptr [ESP + 0x44]
5f002984  55                   PUSH EBP
5f002985  8d87bf0c0000         LEA EAX,[EDI + 0xcbf]
5f00298b  53                   PUSH EBX
5f00298c  50                   PUSH EAX
5f00298d  56                   PUSH ESI
5f00298e  6a06                 PUSH 0x6
5f002990  56                   PUSH ESI
5f002991  e88ae6ffff           CALL 0x5f001020
5f002996  83c408               ADD ESP,0x8
5f002999  50                   PUSH EAX
5f00299a  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f0029a0  85c0                 TEST EAX,EAX
5f0029a2  7448                 JZ 0x5f0029ec
5f0029a4  83f801               CMP EAX,0x1
5f0029a7  754b                 JNZ 0x5f0029f4
5f0029a9  eb41                 JMP 0x5f0029ec
5f0029ab  8b6c2448             MOV EBP,dword ptr [ESP + 0x48]
5f0029af  8b5c2444             MOV EBX,dword ptr [ESP + 0x44]
5f0029b3  55                   PUSH EBP
5f0029b4  53                   PUSH EBX
5f0029b5  57                   PUSH EDI
5f0029b6  56                   PUSH ESI
5f0029b7  50                   PUSH EAX
5f0029b8  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f0029be  85c0                 TEST EAX,EAX
5f0029c0  7405                 JZ 0x5f0029c7
5f0029c2  83f801               CMP EAX,0x1
5f0029c5  752d                 JNZ 0x5f0029f4
5f0029c7  55                   PUSH EBP
5f0029c8  8d87bf0c0000         LEA EAX,[EDI + 0xcbf]
5f0029ce  53                   PUSH EBX
5f0029cf  50                   PUSH EAX
5f0029d0  56                   PUSH ESI
5f0029d1  6a06                 PUSH 0x6
5f0029d3  56                   PUSH ESI
5f0029d4  e847e6ffff           CALL 0x5f001020
5f0029d9  83c408               ADD ESP,0x8
5f0029dc  50                   PUSH EAX
5f0029dd  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f0029e3  85c0                 TEST EAX,EAX
5f0029e5  7405                 JZ 0x5f0029ec
5f0029e7  83f801               CMP EAX,0x1
5f0029ea  7508                 JNZ 0x5f0029f4
5f0029ec  55                   PUSH EBP
5f0029ed  53                   PUSH EBX
5f0029ee  57                   PUSH EDI
5f0029ef  e85cf3ffff           CALL 0x5f001d50
5f0029f4  85c0                 TEST EAX,EAX
5f0029f6  0f8488fdffff         JZ 0x5f002784
5f0029fc  5d                   POP EBP
5f0029fd  5f                   POP EDI
5f0029fe  5e                   POP ESI
5f0029ff  5b                   POP EBX
5f002a00  83c428               ADD ESP,0x28
5f002a03  c21000               RET 0x10
5f002a06  8b6c2448             MOV EBP,dword ptr [ESP + 0x48]
5f002a0a  b8ee030000           MOV EAX,0x3ee
5f002a0f  c7450001000000       MOV dword ptr [EBP],0x1
5f002a16  5d                   POP EBP
5f002a17  5f                   POP EDI
5f002a18  5e                   POP ESI
5f002a19  5b                   POP EBX
5f002a1a  83c428               ADD ESP,0x28
5f002a1d  c21000               RET 0x10

; ==== FUNCTION FUN_5f002a20 entry=5f002a20 sig=undefined4 __cdecl FUN_5f002a20(HWND param_1)
5f002a20  56                   PUSH ESI
5f002a21  8b742408             MOV ESI,dword ptr [ESP + 0x8]
5f002a25  56                   PUSH ESI
5f002a26  e8d5e5ffff           CALL 0x5f001000
5f002a2b  83c404               ADD ESP,0x4
5f002a2e  85c0                 TEST EAX,EAX
5f002a30  7504                 JNZ 0x5f002a36
5f002a32  33c0                 XOR EAX,EAX
5f002a34  5e                   POP ESI
5f002a35  c3                   RET
5f002a36  66813d6052005f5f03   CMP word ptr [0x5f005260],0x35f
5f002a3f  7211                 JC 0x5f002a52
5f002a41  6af0                 PUSH -0x10
5f002a43  56                   PUSH ESI
5f002a44  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f002a4a  a804                 TEST AL,0x4
5f002a4c  7404                 JZ 0x5f002a52
5f002a4e  33c0                 XOR EAX,EAX
5f002a50  5e                   POP ESI
5f002a51  c3                   RET
5f002a52  b801000000           MOV EAX,0x1
5f002a57  5e                   POP ESI
5f002a58  c3                   RET
; undefined 7 bytes at 5f002a59

; ==== FUNCTION FUN_5f002a60 entry=5f002a60 sig=undefined __stdcall FUN_5f002a60(int param_1, HWND param_2, int * param_3)
5f002a60  83ec04               SUB ESP,0x4
5f002a63  53                   PUSH EBX
5f002a64  56                   PUSH ESI
5f002a65  57                   PUSH EDI
5f002a66  55                   PUSH EBP
5f002a67  ff1540d2005f         CALL dword ptr [0x5f00d240]
5f002a6d  8bf0                 MOV ESI,EAX
5f002a6f  682052005f           PUSH 0x5f005220
5f002a74  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f002a7a  3b359452005f         CMP ESI,dword ptr [0x5f005294]
5f002a80  7461                 JZ 0x5f002ae3
5f002a82  33c9                 XOR ECX,ECX
5f002a84  3b0d9c52005f         CMP ECX,dword ptr [0x5f00529c]
5f002a8a  7d29                 JGE 0x5f002ab5
5f002a8c  b8a452005f           MOV EAX,0x5f0052a4
5f002a91  3930                 CMP dword ptr [EAX],ESI
5f002a93  740e                 JZ 0x5f002aa3
5f002a95  83c014               ADD EAX,0x14
5f002a98  41                   INC ECX
5f002a99  3b0d9c52005f         CMP ECX,dword ptr [0x5f00529c]
5f002a9f  7cf0                 JL 0x5f002a91
5f002aa1  eb0c                 JMP 0x5f002aaf
5f002aa3  890d9852005f         MOV dword ptr [0x5f005298],ECX
5f002aa9  89359452005f         MOV dword ptr [0x5f005294],ESI
5f002aaf  3b0d9c52005f         CMP ECX,dword ptr [0x5f00529c]
5f002ab5  752c                 JNZ 0x5f002ae3
5f002ab7  682052005f           PUSH 0x5f005220
5f002abc  ff1528d2005f         CALL dword ptr [0x5f00d228]
5f002ac2  8b5c2420             MOV EBX,dword ptr [ESP + 0x20]
5f002ac6  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
5f002aca  8b742418             MOV ESI,dword ptr [ESP + 0x18]
5f002ace  53                   PUSH EBX
5f002acf  50                   PUSH EAX
5f002ad0  56                   PUSH ESI
5f002ad1  6a00                 PUSH 0x0
5f002ad3  ff15dcd2005f         CALL dword ptr [0x5f00d2dc]
5f002ad9  5d                   POP EBP
5f002ada  5f                   POP EDI
5f002adb  5e                   POP ESI
5f002adc  5b                   POP EBX
5f002add  83c404               ADD ESP,0x4
5f002ae0  c20c00               RET 0xc
5f002ae3  8b3d9852005f         MOV EDI,dword ptr [0x5f005298]
5f002ae9  682052005f           PUSH 0x5f005220
5f002aee  ff1528d2005f         CALL dword ptr [0x5f00d228]
5f002af4  8b742418             MOV ESI,dword ptr [ESP + 0x18]
5f002af8  8b5c2420             MOV EBX,dword ptr [ESP + 0x20]
5f002afc  83fe03               CMP ESI,0x3
5f002aff  0f85e7000000         JNZ 0x5f002bec
5f002b05  8b2b                 MOV EBP,dword ptr [EBX]
5f002b07  817d2802800000       CMP dword ptr [EBP + 0x28],0x8002
5f002b0e  757e                 JNZ 0x5f002b8e
5f002b10  66833d6252005f20     CMP word ptr [0x5f005262],0x20
5f002b18  7560                 JNZ 0x5f002b7a
5f002b1a  66813d6052005f5f03   CMP word ptr [0x5f005260],0x35f
5f002b23  721b                 JC 0x5f002b40
5f002b25  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
5f002b29  6af0                 PUSH -0x10
5f002b2b  50                   PUSH EAX
5f002b2c  8b2de4d2005f         MOV EBP,dword ptr [0x5f00d2e4]
5f002b32  ffd5                 CALL EBP
5f002b34  c744241000000000     MOV dword ptr [ESP + 0x10],0x0
5f002b3c  a804                 TEST AL,0x4
5f002b3e  7508                 JNZ 0x5f002b48
5f002b40  c744241001000000     MOV dword ptr [ESP + 0x10],0x1
5f002b48  8b6c241c             MOV EBP,dword ptr [ESP + 0x1c]
5f002b4c  8d442410             LEA EAX,[ESP + 0x10]
5f002b50  50                   PUSH EAX
5f002b51  6a00                 PUSH 0x0
5f002b53  68f0110000           PUSH 0x11f0
5f002b58  55                   PUSH EBP
5f002b59  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f002b5f  837c241000           CMP dword ptr [ESP + 0x10],0x0
5f002b64  0f8482000000         JZ 0x5f002bec
5f002b6a  68f026005f           PUSH 0x5f0026f0
5f002b6f  55                   PUSH EBP
5f002b70  e8fbe4ffff           CALL 0x5f001070
5f002b75  83c408               ADD ESP,0x8
5f002b78  eb72                 JMP 0x5f002bec
5f002b7a  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
5f002b7e  68f026005f           PUSH 0x5f0026f0
5f002b83  50                   PUSH EAX
5f002b84  e897e6ffff           CALL 0x5f001220
5f002b89  83c408               ADD ESP,0x8
5f002b8c  eb5e                 JMP 0x5f002bec
5f002b8e  8d04bd00000000       LEA EAX,[EDI*0x4 + 0x0]
5f002b95  f68480b052005f01     TEST byte ptr [EAX + EAX*0x4 + 0x5f0052b0],0x1
5f002b9d  744d                 JZ 0x5f002bec
5f002b9f  8b450c               MOV EAX,dword ptr [EBP + 0xc]
5f002ba2  50                   PUSH EAX
5f002ba3  e878feffff           CALL 0x5f002a20
5f002ba8  83c404               ADD ESP,0x4
5f002bab  85c0                 TEST EAX,EAX
5f002bad  7525                 JNZ 0x5f002bd4
5f002baf  8b450c               MOV EAX,dword ptr [EBP + 0xc]
5f002bb2  85c0                 TEST EAX,EAX
5f002bb4  7436                 JZ 0x5f002bec
5f002bb6  66833d6252005f18     CMP word ptr [0x5f005262],0x18
5f002bbe  742c                 JZ 0x5f002bec
5f002bc0  50                   PUSH EAX
5f002bc1  ff1558d2005f         CALL dword ptr [0x5f00d258]
5f002bc7  50                   PUSH EAX
5f002bc8  e853feffff           CALL 0x5f002a20
5f002bcd  83c404               ADD ESP,0x4
5f002bd0  85c0                 TEST EAX,EAX
5f002bd2  7418                 JZ 0x5f002bec
5f002bd4  8b450c               MOV EAX,dword ptr [EBP + 0xc]
5f002bd7  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
5f002bdb  50                   PUSH EAX
5f002bdc  6a01                 PUSH 0x1
5f002bde  68ffff0000           PUSH 0xffff
5f002be3  51                   PUSH ECX
5f002be4  e857020000           CALL 0x5f002e40
5f002be9  83c410               ADD ESP,0x10
5f002bec  c1e702               SHL EDI,0x2
5f002bef  53                   PUSH EBX
5f002bf0  8b442420             MOV EAX,dword ptr [ESP + 0x20]
5f002bf4  8b8cbfa852005f       MOV ECX,dword ptr [EDI + EDI*0x4 + 0x5f0052a8]
5f002bfb  50                   PUSH EAX
5f002bfc  56                   PUSH ESI
5f002bfd  51                   PUSH ECX
5f002bfe  ff15dcd2005f         CALL dword ptr [0x5f00d2dc]
5f002c04  5d                   POP EBP
5f002c05  5f                   POP EDI
5f002c06  5e                   POP ESI
5f002c07  5b                   POP EBX
5f002c08  83c404               ADD ESP,0x4
5f002c0b  c20c00               RET 0xc
; undefined 2 bytes at 5f002c0e

; ==== FUNCTION FUN_5f002c10 entry=5f002c10 sig=undefined4 __cdecl FUN_5f002c10(undefined4 param_1, ushort param_2)
5f002c10  66813d6052005f5f03   CMP word ptr [0x5f005260],0x35f
5f002c19  7203                 JC 0x5f002c1e
5f002c1b  33c0                 XOR EAX,EAX
5f002c1d  c3                   RET
5f002c1e  8b442408             MOV EAX,dword ptr [ESP + 0x8]
5f002c22  83e0df               AND EAX,0xffffffdf
5f002c25  663d0900             CMP AX,0x9
5f002c29  7706                 JA 0x5f002c31
5f002c2b  b801000000           MOV EAX,0x1
5f002c30  c3                   RET
5f002c31  33c0                 XOR EAX,EAX
5f002c33  c3                   RET
; undefined 12 bytes at 5f002c34

; ==== FUNCTION FUN_5f002c40 entry=5f002c40 sig=bool __stdcall FUN_5f002c40(void)
5f002c40  83ec20               SUB ESP,0x20
5f002c43  66813d6052005f5f03   CMP word ptr [0x5f005260],0x35f
5f002c4c  7230                 JC 0x5f002c7e
5f002c4e  8b442434             MOV EAX,dword ptr [ESP + 0x34]
5f002c52  85c0                 TEST EAX,EAX
5f002c54  7428                 JZ 0x5f002c7e
5f002c56  8d4c2400             LEA ECX,[ESP]
5f002c5a  6a10                 PUSH 0x10
5f002c5c  51                   PUSH ECX
5f002c5d  50                   PUSH EAX
5f002c5e  ff15f0d2005f         CALL dword ptr [0x5f00d2f0]
5f002c64  8d4c2400             LEA ECX,[ESP]
5f002c68  68d4b0005f           PUSH 0x5f00b0d4
5f002c6d  51                   PUSH ECX
5f002c6e  ff150cd2005f         CALL dword ptr [0x5f00d20c]
5f002c74  83f801               CMP EAX,0x1
5f002c77  1bc0                 SBB EAX,EAX
5f002c79  83c420               ADD ESP,0x20
5f002c7c  40                   INC EAX
5f002c7d  c3                   RET
5f002c7e  b801000000           MOV EAX,0x1
5f002c83  83c420               ADD ESP,0x20
5f002c86  c3                   RET
; undefined 9 bytes at 5f002c87

; ==== FUNCTION FUN_5f002c90 entry=5f002c90 sig=bool __stdcall FUN_5f002c90(void)
5f002c90  83ec20               SUB ESP,0x20
5f002c93  66813d6052005f5f03   CMP word ptr [0x5f005260],0x35f
5f002c9c  7230                 JC 0x5f002cce
5f002c9e  8b442434             MOV EAX,dword ptr [ESP + 0x34]
5f002ca2  85c0                 TEST EAX,EAX
5f002ca4  7428                 JZ 0x5f002cce
5f002ca6  8d4c2400             LEA ECX,[ESP]
5f002caa  6a10                 PUSH 0x10
5f002cac  51                   PUSH ECX
5f002cad  50                   PUSH EAX
5f002cae  ff15f0d2005f         CALL dword ptr [0x5f00d2f0]
5f002cb4  8d4c2400             LEA ECX,[ESP]
5f002cb8  68d4b0005f           PUSH 0x5f00b0d4
5f002cbd  51                   PUSH ECX
5f002cbe  ff150cd2005f         CALL dword ptr [0x5f00d20c]
5f002cc4  83f801               CMP EAX,0x1
5f002cc7  1bc0                 SBB EAX,EAX
5f002cc9  83c420               ADD ESP,0x20
5f002ccc  40                   INC EAX
5f002ccd  c3                   RET
5f002cce  b801000000           MOV EAX,0x1
5f002cd3  83c420               ADD ESP,0x20
5f002cd6  c3                   RET
; undefined 9 bytes at 5f002cd7

; ==== FUNCTION FUN_5f002ce0 entry=5f002ce0 sig=undefined4 __stdcall FUN_5f002ce0(void)
5f002ce0  66813d6052005f5f03   CMP word ptr [0x5f005260],0x35f
5f002ce9  7203                 JC 0x5f002cee
5f002ceb  33c0                 XOR EAX,EAX
5f002ced  c3                   RET
5f002cee  66837c241001         CMP word ptr [ESP + 0x10],0x1
5f002cf4  7523                 JNZ 0x5f002d19
5f002cf6  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f002cfa  6af0                 PUSH -0x10
5f002cfc  50                   PUSH EAX
5f002cfd  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f002d03  83e003               AND EAX,0x3
5f002d06  83f802               CMP EAX,0x2
5f002d09  740b                 JZ 0x5f002d16
5f002d0b  83f803               CMP EAX,0x3
5f002d0e  7406                 JZ 0x5f002d16
5f002d10  b801000000           MOV EAX,0x1
5f002d15  c3                   RET
5f002d16  33c0                 XOR EAX,EAX
5f002d18  c3                   RET
5f002d19  b801000000           MOV EAX,0x1
5f002d1e  c3                   RET
; undefined 1 bytes at 5f002d1f

; ==== FUNCTION FUN_5f002d20 entry=5f002d20 sig=undefined4 __cdecl FUN_5f002d20(HWND param_1, uint param_2, undefined4 param_3, short param_4)
5f002d20  66813d6052005f5f03   CMP word ptr [0x5f005260],0x35f
5f002d29  53                   PUSH EBX
5f002d2a  56                   PUSH ESI
5f002d2b  57                   PUSH EDI
5f002d2c  55                   PUSH EBP
5f002d2d  7207                 JC 0x5f002d36
5f002d2f  33c0                 XOR EAX,EAX
5f002d31  5d                   POP EBP
5f002d32  5f                   POP EDI
5f002d33  5e                   POP ESI
5f002d34  5b                   POP EBX
5f002d35  c3                   RET
5f002d36  8b442418             MOV EAX,dword ptr [ESP + 0x18]
5f002d3a  83e003               AND EAX,0x3
5f002d3d  83f802               CMP EAX,0x2
5f002d40  753a                 JNZ 0x5f002d7c
5f002d42  668b5c2420           MOV BX,word ptr [ESP + 0x20]
5f002d47  6683fb01             CMP BX,0x1
5f002d4b  7507                 JNZ 0x5f002d54
5f002d4d  33c0                 XOR EAX,EAX
5f002d4f  5d                   POP EBP
5f002d50  5f                   POP EDI
5f002d51  5e                   POP ESI
5f002d52  5b                   POP EBX
5f002d53  c3                   RET
5f002d54  8b7c2414             MOV EDI,dword ptr [ESP + 0x14]
5f002d58  6a05                 PUSH 0x5
5f002d5a  57                   PUSH EDI
5f002d5b  ff155cd2005f         CALL dword ptr [0x5f00d25c]
5f002d61  85c0                 TEST EAX,EAX
5f002d63  740d                 JZ 0x5f002d72
5f002d65  57                   PUSH EDI
5f002d66  53                   PUSH EBX
5f002d67  6a04                 PUSH 0x4
5f002d69  50                   PUSH EAX
5f002d6a  e8d1000000           CALL 0x5f002e40
5f002d6f  83c410               ADD ESP,0x10
5f002d72  b801000000           MOV EAX,0x1
5f002d77  5d                   POP EBP
5f002d78  5f                   POP EDI
5f002d79  5e                   POP ESI
5f002d7a  5b                   POP EBX
5f002d7b  c3                   RET
5f002d7c  83f803               CMP EAX,0x3
5f002d7f  750a                 JNZ 0x5f002d8b
5f002d81  b801000000           MOV EAX,0x1
5f002d86  5d                   POP EBP
5f002d87  5f                   POP EDI
5f002d88  5e                   POP ESI
5f002d89  5b                   POP EBX
5f002d8a  c3                   RET
5f002d8b  668b5c2420           MOV BX,word ptr [ESP + 0x20]
5f002d90  6683fb01             CMP BX,0x1
5f002d94  750a                 JNZ 0x5f002da0
5f002d96  b801000000           MOV EAX,0x1
5f002d9b  5d                   POP EBP
5f002d9c  5f                   POP EDI
5f002d9d  5e                   POP ESI
5f002d9e  5b                   POP EBX
5f002d9f  c3                   RET
5f002da0  8b7c2414             MOV EDI,dword ptr [ESP + 0x14]
5f002da4  6a05                 PUSH 0x5
5f002da6  57                   PUSH EDI
5f002da7  8b355cd2005f         MOV ESI,dword ptr [0x5f00d25c]
5f002dad  ffd6                 CALL ESI
5f002daf  8be8                 MOV EBP,EAX
5f002db1  85ed                 TEST EBP,EBP
5f002db3  742d                 JZ 0x5f002de2
5f002db5  57                   PUSH EDI
5f002db6  53                   PUSH EBX
5f002db7  6a02                 PUSH 0x2
5f002db9  55                   PUSH EBP
5f002dba  e881000000           CALL 0x5f002e40
5f002dbf  83c410               ADD ESP,0x10
5f002dc2  6a02                 PUSH 0x2
5f002dc4  55                   PUSH EBP
5f002dc5  ffd6                 CALL ESI
5f002dc7  85c0                 TEST EAX,EAX
5f002dc9  740d                 JZ 0x5f002dd8
5f002dcb  57                   PUSH EDI
5f002dcc  53                   PUSH EBX
5f002dcd  6a04                 PUSH 0x4
5f002dcf  50                   PUSH EAX
5f002dd0  e86b000000           CALL 0x5f002e40
5f002dd5  83c410               ADD ESP,0x10
5f002dd8  b801000000           MOV EAX,0x1
5f002ddd  5d                   POP EBP
5f002dde  5f                   POP EDI
5f002ddf  5e                   POP ESI
5f002de0  5b                   POP EBX
5f002de1  c3                   RET
5f002de2  33c0                 XOR EAX,EAX
5f002de4  5d                   POP EBP
5f002de5  5f                   POP EDI
5f002de6  5e                   POP ESI
5f002de7  5b                   POP EBX
5f002de8  c3                   RET
; undefined 7 bytes at 5f002de9

; ==== FUNCTION FUN_5f002df0 entry=5f002df0 sig=undefined4 __cdecl FUN_5f002df0(undefined4 param_1, uint param_2, ushort param_3)
5f002df0  8b442408             MOV EAX,dword ptr [ESP + 0x8]
5f002df4  66251f00             AND AX,0x1f
5f002df8  0fb7c8               MOVZX ECX,AX
5f002dfb  83f903               CMP ECX,0x3
5f002dfe  743c                 JZ 0x5f002e3c
5f002e00  668b44240c           MOV AX,word ptr [ESP + 0xc]
5f002e05  a810                 TEST AL,0x10
5f002e07  740a                 JZ 0x5f002e13
5f002e09  83f902               CMP ECX,0x2
5f002e0c  7e28                 JLE 0x5f002e36
5f002e0e  83f90c               CMP ECX,0xc
5f002e11  7423                 JZ 0x5f002e36
5f002e13  a820                 TEST AL,0x20
5f002e15  7425                 JZ 0x5f002e3c
5f002e17  83f904               CMP ECX,0x4
5f002e1a  7c05                 JL 0x5f002e21
5f002e1c  83f909               CMP ECX,0x9
5f002e1f  7e15                 JLE 0x5f002e36
5f002e21  66813d6052005f5f03   CMP word ptr [0x5f005260],0x35f
5f002e2a  7310                 JNC 0x5f002e3c
5f002e2c  83f910               CMP ECX,0x10
5f002e2f  7c0b                 JL 0x5f002e3c
5f002e31  83f912               CMP ECX,0x12
5f002e34  7f06                 JG 0x5f002e3c
5f002e36  b801000000           MOV EAX,0x1
5f002e3b  c3                   RET
5f002e3c  33c0                 XOR EAX,EAX
5f002e3e  c3                   RET
; undefined 1 bytes at 5f002e3f

; ==== FUNCTION FUN_5f002e40 entry=5f002e40 sig=bool __cdecl FUN_5f002e40(HWND param_1, ushort param_2, short param_3, undefined4 param_4)
5f002e40  83ec20               SUB ESP,0x20
5f002e43  53                   PUSH EBX
5f002e44  56                   PUSH ESI
5f002e45  8b74242c             MOV ESI,dword ptr [ESP + 0x2c]
5f002e49  57                   PUSH EDI
5f002e4a  55                   PUSH EBP
5f002e4b  56                   PUSH ESI
5f002e4c  e8afe1ffff           CALL 0x5f001000
5f002e51  83c404               ADD ESP,0x4
5f002e54  85c0                 TEST EAX,EAX
5f002e56  740a                 JZ 0x5f002e62
5f002e58  33c0                 XOR EAX,EAX
5f002e5a  5d                   POP EBP
5f002e5b  5f                   POP EDI
5f002e5c  5e                   POP ESI
5f002e5d  5b                   POP EBX
5f002e5e  83c420               ADD ESP,0x20
5f002e61  c3                   RET
5f002e62  8d442410             LEA EAX,[ESP + 0x10]
5f002e66  6a10                 PUSH 0x10
5f002e68  50                   PUSH EAX
5f002e69  33ed                 XOR EBP,EBP
5f002e6b  56                   PUSH ESI
5f002e6c  bb68b0005f           MOV EBX,0x5f00b068
5f002e71  ff15f0d2005f         CALL dword ptr [0x5f00d2f0]
5f002e77  668b7c2438           MOV DI,word ptr [ESP + 0x38]
5f002e7c  66853b               TEST word ptr [EBX],DI
5f002e7f  7413                 JZ 0x5f002e94
5f002e81  8d442410             LEA EAX,[ESP + 0x10]
5f002e85  8d4bd0               LEA ECX,[EBX + -0x30]
5f002e88  50                   PUSH EAX
5f002e89  51                   PUSH ECX
5f002e8a  ff150cd2005f         CALL dword ptr [0x5f00d20c]
5f002e90  85c0                 TEST EAX,EAX
5f002e92  7416                 JZ 0x5f002eaa
5f002e94  83c334               ADD EBX,0x34
5f002e97  45                   INC EBP
5f002e98  81fba0b1005f         CMP EBX,0x5f00b1a0
5f002e9e  72dc                 JC 0x5f002e7c
5f002ea0  33c0                 XOR EAX,EAX
5f002ea2  5d                   POP EBP
5f002ea3  5f                   POP EDI
5f002ea4  5e                   POP ESI
5f002ea5  5b                   POP EBX
5f002ea6  83c420               ADD ESP,0x20
5f002ea9  c3                   RET
5f002eaa  6af0                 PUSH -0x10
5f002eac  56                   PUSH ESI
5f002ead  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f002eb3  668b5c243c           MOV BX,word ptr [ESP + 0x3c]
5f002eb8  8b4c2440             MOV ECX,dword ptr [ESP + 0x40]
5f002ebc  51                   PUSH ECX
5f002ebd  53                   PUSH EBX
5f002ebe  57                   PUSH EDI
5f002ebf  50                   PUSH EAX
5f002ec0  56                   PUSH ESI
5f002ec1  8d446d00             LEA EAX,[EBP + EBP*0x2]
5f002ec5  8d7c8500             LEA EDI,[EBP + EAX*0x4]
5f002ec9  ff14bd64b0005f       CALL dword ptr [EDI*0x4 + 0x5f00b064]
5f002ed0  83c414               ADD ESP,0x14
5f002ed3  8bf8                 MOV EDI,EAX
5f002ed5  83ff01               CMP EDI,0x1
5f002ed8  754b                 JNZ 0x5f002f25
5f002eda  6683fb01             CMP BX,0x1
5f002ede  752d                 JNZ 0x5f002f0d
5f002ee0  66833d6252005f10     CMP word ptr [0x5f005262],0x10
5f002ee8  7523                 JNZ 0x5f002f0d
5f002eea  8d44ad00             LEA EAX,[EBP + EBP*0x4]
5f002eee  8b0cc5a0a2005f       MOV ECX,dword ptr [EAX*0x8 + 0x5f00a2a0]
5f002ef5  51                   PUSH ECX
5f002ef6  56                   PUSH ESI
5f002ef7  e824e3ffff           CALL 0x5f001220
5f002efc  83c408               ADD ESP,0x8
5f002eff  83ff01               CMP EDI,0x1
5f002f02  1bc0                 SBB EAX,EAX
5f002f04  5d                   POP EBP
5f002f05  40                   INC EAX
5f002f06  5f                   POP EDI
5f002f07  5e                   POP ESI
5f002f08  5b                   POP EBX
5f002f09  83c420               ADD ESP,0x20
5f002f0c  c3                   RET
5f002f0d  8d44ad00             LEA EAX,[EBP + EBP*0x4]
5f002f11  8b0cc5a0a2005f       MOV ECX,dword ptr [EAX*0x8 + 0x5f00a2a0]
5f002f18  51                   PUSH ECX
5f002f19  56                   PUSH ESI
5f002f1a  e851e1ffff           CALL 0x5f001070
5f002f1f  83c408               ADD ESP,0x8
5f002f22  83ff01               CMP EDI,0x1
5f002f25  1bc0                 SBB EAX,EAX
5f002f27  5d                   POP EBP
5f002f28  40                   INC EAX
5f002f29  5f                   POP EDI
5f002f2a  5e                   POP ESI
5f002f2b  5b                   POP EBX
5f002f2c  83c420               ADD ESP,0x20
5f002f2f  c3                   RET

; ==== FUNCTION FUN_5f002f30 entry=5f002f30 sig=undefined __cdecl FUN_5f002f30(HWND param_1, int param_2)
5f002f30  83ec10               SUB ESP,0x10
5f002f33  8d442400             LEA EAX,[ESP]
5f002f37  53                   PUSH EBX
5f002f38  56                   PUSH ESI
5f002f39  57                   PUSH EDI
5f002f3a  8b742420             MOV ESI,dword ptr [ESP + 0x20]
5f002f3e  50                   PUSH EAX
5f002f3f  56                   PUSH ESI
5f002f40  ff1504d3005f         CALL dword ptr [0x5f00d304]
5f002f46  6af0                 PUSH -0x10
5f002f48  56                   PUSH ESI
5f002f49  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f002f4f  a900000010           TEST EAX,0x10000000
5f002f54  8bf8                 MOV EDI,EAX
5f002f56  0f848b000000         JZ 0x5f002fe7
5f002f5c  8b442424             MOV EAX,dword ptr [ESP + 0x24]
5f002f60  85c0                 TEST EAX,EAX
5f002f62  743b                 JZ 0x5f002f9f
5f002f64  8b4818               MOV ECX,dword ptr [EAX + 0x18]
5f002f67  f6c1c0               TEST CL,0xc0
5f002f6a  750a                 JNZ 0x5f002f76
5f002f6c  f6c102               TEST CL,0x2
5f002f6f  7405                 JZ 0x5f002f76
5f002f71  f6c101               TEST CL,0x1
5f002f74  7571                 JNZ 0x5f002fe7
5f002f76  80e103               AND CL,0x3
5f002f79  80f902               CMP CL,0x2
5f002f7c  7521                 JNZ 0x5f002f9f
5f002f7e  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
5f002f82  2b4810               SUB ECX,dword ptr [EAX + 0x10]
5f002f85  3b4c240c             CMP ECX,dword ptr [ESP + 0xc]
5f002f89  7514                 JNZ 0x5f002f9f
5f002f8b  8b4014               MOV EAX,dword ptr [EAX + 0x14]
5f002f8e  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
5f002f92  2b4c2410             SUB ECX,dword ptr [ESP + 0x10]
5f002f96  3bc8                 CMP ECX,EAX
5f002f98  7c05                 JL 0x5f002f9f
5f002f9a  40                   INC EAX
5f002f9b  01442410             ADD dword ptr [ESP + 0x10],EAX
5f002f9f  8d44240c             LEA EAX,[ESP + 0xc]
5f002fa3  6a01                 PUSH 0x1
5f002fa5  6a01                 PUSH 0x1
5f002fa7  50                   PUSH EAX
5f002fa8  ff1554d2005f         CALL dword ptr [0x5f00d254]
5f002fae  56                   PUSH ESI
5f002faf  ff1558d2005f         CALL dword ptr [0x5f00d258]
5f002fb5  8bf0                 MOV ESI,EAX
5f002fb7  8b1d8cd2005f         MOV EBX,dword ptr [0x5f00d28c]
5f002fbd  8d44240c             LEA EAX,[ESP + 0xc]
5f002fc1  50                   PUSH EAX
5f002fc2  56                   PUSH ESI
5f002fc3  ffd3                 CALL EBX
5f002fc5  8d4c2414             LEA ECX,[ESP + 0x14]
5f002fc9  51                   PUSH ECX
5f002fca  56                   PUSH ESI
5f002fcb  ffd3                 CALL EBX
5f002fcd  f7c700002000         TEST EDI,0x200000
5f002fd3  7404                 JZ 0x5f002fd9
5f002fd5  ff442414             INC dword ptr [ESP + 0x14]
5f002fd9  8d44240c             LEA EAX,[ESP + 0xc]
5f002fdd  6a00                 PUSH 0x0
5f002fdf  50                   PUSH EAX
5f002fe0  56                   PUSH ESI
5f002fe1  ff1588d2005f         CALL dword ptr [0x5f00d288]
5f002fe7  5f                   POP EDI
5f002fe8  5e                   POP ESI
5f002fe9  5b                   POP EBX
5f002fea  83c410               ADD ESP,0x10
5f002fed  c3                   RET
; undefined 2 bytes at 5f002fee

; ==== FUNCTION FUN_5f002ff0 entry=5f002ff0 sig=undefined __cdecl FUN_5f002ff0(HWND param_1)
5f002ff0  83ec10               SUB ESP,0x10
5f002ff3  53                   PUSH EBX
5f002ff4  56                   PUSH ESI
5f002ff5  57                   PUSH EDI
5f002ff6  6af0                 PUSH -0x10
5f002ff8  8b7c2424             MOV EDI,dword ptr [ESP + 0x24]
5f002ffc  57                   PUSH EDI
5f002ffd  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f003003  8bf0                 MOV ESI,EAX
5f003005  8d44240c             LEA EAX,[ESP + 0xc]
5f003009  50                   PUSH EAX
5f00300a  57                   PUSH EDI
5f00300b  ff1504d3005f         CALL dword ptr [0x5f00d304]
5f003011  8d4c240c             LEA ECX,[ESP + 0xc]
5f003015  6a01                 PUSH 0x1
5f003017  6a01                 PUSH 0x1
5f003019  51                   PUSH ECX
5f00301a  ff1554d2005f         CALL dword ptr [0x5f00d254]
5f003020  57                   PUSH EDI
5f003021  ff1558d2005f         CALL dword ptr [0x5f00d258]
5f003027  8bf8                 MOV EDI,EAX
5f003029  8b1d8cd2005f         MOV EBX,dword ptr [0x5f00d28c]
5f00302f  8d44240c             LEA EAX,[ESP + 0xc]
5f003033  50                   PUSH EAX
5f003034  57                   PUSH EDI
5f003035  ffd3                 CALL EBX
5f003037  8d4c2414             LEA ECX,[ESP + 0x14]
5f00303b  51                   PUSH ECX
5f00303c  57                   PUSH EDI
5f00303d  ffd3                 CALL EBX
5f00303f  f7c600002000         TEST ESI,0x200000
5f003045  7404                 JZ 0x5f00304b
5f003047  ff442414             INC dword ptr [ESP + 0x14]
5f00304b  8d44240c             LEA EAX,[ESP + 0xc]
5f00304f  50                   PUSH EAX
5f003050  57                   PUSH EDI
5f003051  ff1590d2005f         CALL dword ptr [0x5f00d290]
5f003057  5f                   POP EDI
5f003058  5e                   POP ESI
5f003059  5b                   POP EBX
5f00305a  83c410               ADD ESP,0x10
5f00305d  c3                   RET
; undefined 2 bytes at 5f00305e

; ==== FUNCTION FUN_5f003060 entry=5f003060 sig=undefined __cdecl FUN_5f003060(HWND param_1, HDC param_2, RECT * param_3, WCHAR * param_4, int param_5, short param_6, int param_7)
5f003060  83ec1c               SUB ESP,0x1c
5f003063  8d4c240c             LEA ECX,[ESP + 0xc]
5f003067  53                   PUSH EBX
5f003068  56                   PUSH ESI
5f003069  57                   PUSH EDI
5f00306a  8b7c2434             MOV EDI,dword ptr [ESP + 0x34]
5f00306e  55                   PUSH EBP
5f00306f  8b07                 MOV EAX,dword ptr [EDI]
5f003071  8b5704               MOV EDX,dword ptr [EDI + 0x4]
5f003074  8b5f08               MOV EBX,dword ptr [EDI + 0x8]
5f003077  6a0f                 PUSH 0xf
5f003079  6a07                 PUSH 0x7
5f00307b  8901                 MOV dword ptr [ECX],EAX
5f00307d  8b470c               MOV EAX,dword ptr [EDI + 0xc]
5f003080  6a07                 PUSH 0x7
5f003082  8b742440             MOV ESI,dword ptr [ESP + 0x40]
5f003086  57                   PUSH EDI
5f003087  56                   PUSH ESI
5f003088  895104               MOV dword ptr [ECX + 0x4],EDX
5f00308b  895908               MOV dword ptr [ECX + 0x8],EBX
5f00308e  89410c               MOV dword ptr [ECX + 0xc],EAX
5f003091  e8aae2ffff           CALL 0x5f001340
5f003096  8d4c2430             LEA ECX,[ESP + 0x30]
5f00309a  83c414               ADD ESP,0x14
5f00309d  6aff                 PUSH -0x1
5f00309f  6aff                 PUSH -0x1
5f0030a1  51                   PUSH ECX
5f0030a2  ff1554d2005f         CALL dword ptr [0x5f00d254]
5f0030a8  66837c244401         CMP word ptr [ESP + 0x44],0x1
5f0030ae  7532                 JNZ 0x5f0030e2
5f0030b0  8b442430             MOV EAX,dword ptr [ESP + 0x30]
5f0030b4  50                   PUSH EAX
5f0030b5  ff1560d2005f         CALL dword ptr [0x5f00d260]
5f0030bb  85c0                 TEST EAX,EAX
5f0030bd  7423                 JZ 0x5f0030e2
5f0030bf  8d44241c             LEA EAX,[ESP + 0x1c]
5f0030c3  6a0f                 PUSH 0xf
5f0030c5  6a07                 PUSH 0x7
5f0030c7  6a07                 PUSH 0x7
5f0030c9  50                   PUSH EAX
5f0030ca  56                   PUSH ESI
5f0030cb  e870e2ffff           CALL 0x5f001340
5f0030d0  8d442430             LEA EAX,[ESP + 0x30]
5f0030d4  83c414               ADD ESP,0x14
5f0030d7  6aff                 PUSH -0x1
5f0030d9  6aff                 PUSH -0x1
5f0030db  50                   PUSH EAX
5f0030dc  ff1554d2005f         CALL dword ptr [0x5f00d254]
5f0030e2  682100f000           PUSH 0xf00021
5f0030e7  8b4704               MOV EAX,dword ptr [EDI + 0x4]
5f0030ea  6a01                 PUSH 0x1
5f0030ec  8b0f                 MOV ECX,dword ptr [EDI]
5f0030ee  6a01                 PUSH 0x1
5f0030f0  50                   PUSH EAX
5f0030f1  51                   PUSH ECX
5f0030f2  56                   PUSH ESI
5f0030f3  ff15b4d1005f         CALL dword ptr [0x5f00d1b4]
5f0030f9  682100f000           PUSH 0xf00021
5f0030fe  8b4f04               MOV ECX,dword ptr [EDI + 0x4]
5f003101  6a01                 PUSH 0x1
5f003103  8b4708               MOV EAX,dword ptr [EDI + 0x8]
5f003106  6a01                 PUSH 0x1
5f003108  48                   DEC EAX
5f003109  51                   PUSH ECX
5f00310a  50                   PUSH EAX
5f00310b  56                   PUSH ESI
5f00310c  ff15b4d1005f         CALL dword ptr [0x5f00d1b4]
5f003112  682100f000           PUSH 0xf00021
5f003117  8b470c               MOV EAX,dword ptr [EDI + 0xc]
5f00311a  6a01                 PUSH 0x1
5f00311c  48                   DEC EAX
5f00311d  6a01                 PUSH 0x1
5f00311f  8b0f                 MOV ECX,dword ptr [EDI]
5f003121  50                   PUSH EAX
5f003122  51                   PUSH ECX
5f003123  56                   PUSH ESI
5f003124  ff15b4d1005f         CALL dword ptr [0x5f00d1b4]
5f00312a  682100f000           PUSH 0xf00021
5f00312f  8b470c               MOV EAX,dword ptr [EDI + 0xc]
5f003132  6a01                 PUSH 0x1
5f003134  48                   DEC EAX
5f003135  6a01                 PUSH 0x1
5f003137  50                   PUSH EAX
5f003138  8b4708               MOV EAX,dword ptr [EDI + 0x8]
5f00313b  48                   DEC EAX
5f00313c  50                   PUSH EAX
5f00313d  56                   PUSH ESI
5f00313e  ff15b4d1005f         CALL dword ptr [0x5f00d1b4]
5f003144  837c244801           CMP dword ptr [ESP + 0x48],0x1
5f003149  1bdb                 SBB EBX,EBX
5f00314b  f7db                 NEG EBX
5f00314d  43                   INC EBX
5f00314e  837c244800           CMP dword ptr [ESP + 0x48],0x0
5f003153  7407                 JZ 0x5f00315c
5f003155  a18c52005f           MOV EAX,[0x5f00528c]
5f00315a  eb05                 JMP 0x5f003161
5f00315c  a18452005f           MOV EAX,[0x5f005284]
5f003161  50                   PUSH EAX
5f003162  56                   PUSH ESI
5f003163  ff15ccd1005f         CALL dword ptr [0x5f00d1cc]
5f003169  8b4c2420             MOV ECX,dword ptr [ESP + 0x20]
5f00316d  682100f000           PUSH 0xf00021
5f003172  8b542420             MOV EDX,dword ptr [ESP + 0x20]
5f003176  89442414             MOV dword ptr [ESP + 0x14],EAX
5f00317a  8b44242c             MOV EAX,dword ptr [ESP + 0x2c]
5f00317e  2b442424             SUB EAX,dword ptr [ESP + 0x24]
5f003182  50                   PUSH EAX
5f003183  53                   PUSH EBX
5f003184  51                   PUSH ECX
5f003185  52                   PUSH EDX
5f003186  56                   PUSH ESI
5f003187  ff15b4d1005f         CALL dword ptr [0x5f00d1b4]
5f00318d  8b442424             MOV EAX,dword ptr [ESP + 0x24]
5f003191  682100f000           PUSH 0xf00021
5f003196  2b442420             SUB EAX,dword ptr [ESP + 0x20]
5f00319a  53                   PUSH EBX
5f00319b  8b4c2428             MOV ECX,dword ptr [ESP + 0x28]
5f00319f  50                   PUSH EAX
5f0031a0  8b542428             MOV EDX,dword ptr [ESP + 0x28]
5f0031a4  51                   PUSH ECX
5f0031a5  52                   PUSH EDX
5f0031a6  56                   PUSH ESI
5f0031a7  ff15b4d1005f         CALL dword ptr [0x5f00d1b4]
5f0031ad  837c244800           CMP dword ptr [ESP + 0x48],0x0
5f0031b2  7579                 JNZ 0x5f00322d
5f0031b4  a18c52005f           MOV EAX,[0x5f00528c]
5f0031b9  33ed                 XOR EBP,EBP
5f0031bb  50                   PUSH EAX
5f0031bc  56                   PUSH ESI
5f0031bd  ff15ccd1005f         CALL dword ptr [0x5f00d1cc]
5f0031c3  ff4c2428             DEC dword ptr [ESP + 0x28]
5f0031c7  ff4c2424             DEC dword ptr [ESP + 0x24]
5f0031cb  85db                 TEST EBX,EBX
5f0031cd  7e5e                 JLE 0x5f00322d
5f0031cf  8b442424             MOV EAX,dword ptr [ESP + 0x24]
5f0031d3  682100f000           PUSH 0xf00021
5f0031d8  2b442420             SUB EAX,dword ptr [ESP + 0x20]
5f0031dc  6a01                 PUSH 0x1
5f0031de  40                   INC EAX
5f0031df  8b4c2430             MOV ECX,dword ptr [ESP + 0x30]
5f0031e3  8b542424             MOV EDX,dword ptr [ESP + 0x24]
5f0031e7  50                   PUSH EAX
5f0031e8  51                   PUSH ECX
5f0031e9  52                   PUSH EDX
5f0031ea  56                   PUSH ESI
5f0031eb  ff15b4d1005f         CALL dword ptr [0x5f00d1b4]
5f0031f1  8b442428             MOV EAX,dword ptr [ESP + 0x28]
5f0031f5  682100f000           PUSH 0xf00021
5f0031fa  2b442424             SUB EAX,dword ptr [ESP + 0x24]
5f0031fe  8b4c2424             MOV ECX,dword ptr [ESP + 0x24]
5f003202  8b542428             MOV EDX,dword ptr [ESP + 0x28]
5f003206  50                   PUSH EAX
5f003207  6a01                 PUSH 0x1
5f003209  51                   PUSH ECX
5f00320a  52                   PUSH EDX
5f00320b  56                   PUSH ESI
5f00320c  ff15b4d1005f         CALL dword ptr [0x5f00d1b4]
5f003212  8d4bff               LEA ECX,[EBX + -0x1]
5f003215  3be9                 CMP EBP,ECX
5f003217  7d0f                 JGE 0x5f003228
5f003219  8d44241c             LEA EAX,[ESP + 0x1c]
5f00321d  6aff                 PUSH -0x1
5f00321f  6aff                 PUSH -0x1
5f003221  50                   PUSH EAX
5f003222  ff1554d2005f         CALL dword ptr [0x5f00d254]
5f003228  45                   INC EBP
5f003229  3beb                 CMP EBP,EBX
5f00322b  7ca2                 JL 0x5f0031cf
5f00322d  a18852005f           MOV EAX,[0x5f005288]
5f003232  ff44241c             INC dword ptr [ESP + 0x1c]
5f003236  ff442420             INC dword ptr [ESP + 0x20]
5f00323a  50                   PUSH EAX
5f00323b  56                   PUSH ESI
5f00323c  ff15ccd1005f         CALL dword ptr [0x5f00d1cc]
5f003242  8b442428             MOV EAX,dword ptr [ESP + 0x28]
5f003246  682100f000           PUSH 0xf00021
5f00324b  2b442424             SUB EAX,dword ptr [ESP + 0x24]
5f00324f  8b4c2424             MOV ECX,dword ptr [ESP + 0x24]
5f003253  8b542420             MOV EDX,dword ptr [ESP + 0x20]
5f003257  50                   PUSH EAX
5f003258  8b44242c             MOV EAX,dword ptr [ESP + 0x2c]
5f00325c  2b442424             SUB EAX,dword ptr [ESP + 0x24]
5f003260  50                   PUSH EAX
5f003261  51                   PUSH ECX
5f003262  52                   PUSH EDX
5f003263  56                   PUSH ESI
5f003264  ff15b4d1005f         CALL dword ptr [0x5f00d1b4]
5f00326a  8b4c2430             MOV ECX,dword ptr [ESP + 0x30]
5f00326e  51                   PUSH ECX
5f00326f  ff1560d2005f         CALL dword ptr [0x5f00d260]
5f003275  85c0                 TEST EAX,EAX
5f003277  750d                 JNZ 0x5f003286
5f003279  a17c52005f           MOV EAX,[0x5f00527c]
5f00327e  50                   PUSH EAX
5f00327f  56                   PUSH ESI
5f003280  ff15d4d1005f         CALL dword ptr [0x5f00d1d4]
5f003286  8d442418             LEA EAX,[ESP + 0x18]
5f00328a  8d4c2414             LEA ECX,[ESP + 0x14]
5f00328e  8b5c243c             MOV EBX,dword ptr [ESP + 0x3c]
5f003292  50                   PUSH EAX
5f003293  51                   PUSH ECX
5f003294  53                   PUSH EBX
5f003295  56                   PUSH ESI
5f003296  e895e2ffff           CALL 0x5f001530
5f00329b  8b442438             MOV EAX,dword ptr [ESP + 0x38]
5f00329f  2b442430             SUB EAX,dword ptr [ESP + 0x30]
5f0032a3  2b442428             SUB EAX,dword ptr [ESP + 0x28]
5f0032a7  83c410               ADD ESP,0x10
5f0032aa  99                   CDQ
5f0032ab  2bc2                 SUB EAX,EDX
5f0032ad  c1f801               SAR EAX,0x1
5f0032b0  01442420             ADD dword ptr [ESP + 0x20],EAX
5f0032b4  8b442424             MOV EAX,dword ptr [ESP + 0x24]
5f0032b8  2b44241c             SUB EAX,dword ptr [ESP + 0x1c]
5f0032bc  2b442414             SUB EAX,dword ptr [ESP + 0x14]
5f0032c0  8b4c2428             MOV ECX,dword ptr [ESP + 0x28]
5f0032c4  99                   CDQ
5f0032c5  2bc2                 SUB EAX,EDX
5f0032c7  c1f801               SAR EAX,0x1
5f0032ca  0144241c             ADD dword ptr [ESP + 0x1c],EAX
5f0032ce  8b442420             MOV EAX,dword ptr [ESP + 0x20]
5f0032d2  03442418             ADD EAX,dword ptr [ESP + 0x18]
5f0032d6  3bc1                 CMP EAX,ECX
5f0032d8  7c02                 JL 0x5f0032dc
5f0032da  8bc1                 MOV EAX,ECX
5f0032dc  8b4c2424             MOV ECX,dword ptr [ESP + 0x24]
5f0032e0  89442428             MOV dword ptr [ESP + 0x28],EAX
5f0032e4  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
5f0032e8  03442414             ADD EAX,dword ptr [ESP + 0x14]
5f0032ec  3bc1                 CMP EAX,ECX
5f0032ee  7c02                 JL 0x5f0032f2
5f0032f0  8bc1                 MOV EAX,ECX
5f0032f2  837c244800           CMP dword ptr [ESP + 0x48],0x0
5f0032f7  89442424             MOV dword ptr [ESP + 0x24],EAX
5f0032fb  7439                 JZ 0x5f003336
5f0032fd  8d44241c             LEA EAX,[ESP + 0x1c]
5f003301  6a01                 PUSH 0x1
5f003303  6a01                 PUSH 0x1
5f003305  8b2d50d2005f         MOV EBP,dword ptr [0x5f00d250]
5f00330b  50                   PUSH EAX
5f00330c  ffd5                 CALL EBP
5f00330e  8b4708               MOV EAX,dword ptr [EDI + 0x8]
5f003311  8b4c2424             MOV ECX,dword ptr [ESP + 0x24]
5f003315  83e803               SUB EAX,0x3
5f003318  3bc1                 CMP EAX,ECX
5f00331a  7c02                 JL 0x5f00331e
5f00331c  8bc1                 MOV EAX,ECX
5f00331e  8b4c2428             MOV ECX,dword ptr [ESP + 0x28]
5f003322  89442424             MOV dword ptr [ESP + 0x24],EAX
5f003326  8b470c               MOV EAX,dword ptr [EDI + 0xc]
5f003329  83e803               SUB EAX,0x3
5f00332c  3bc1                 CMP EAX,ECX
5f00332e  7c02                 JL 0x5f003332
5f003330  8bc1                 MOV EAX,ECX
5f003332  89442428             MOV dword ptr [ESP + 0x28],EAX
5f003336  8d44241c             LEA EAX,[ESP + 0x1c]
5f00333a  6a20                 PUSH 0x20
5f00333c  8b4c2444             MOV ECX,dword ptr [ESP + 0x44]
5f003340  50                   PUSH EAX
5f003341  51                   PUSH ECX
5f003342  53                   PUSH EBX
5f003343  56                   PUSH ESI
5f003344  ff15a0d2005f         CALL dword ptr [0x5f00d2a0]
5f00334a  8b2d9cd2005f         MOV EBP,dword ptr [0x5f00d29c]
5f003350  ffd5                 CALL EBP
5f003352  3b442430             CMP EAX,dword ptr [ESP + 0x30]
5f003356  752c                 JNZ 0x5f003384
5f003358  8d44241c             LEA EAX,[ESP + 0x1c]
5f00335c  6a01                 PUSH 0x1
5f00335e  6a01                 PUSH 0x1
5f003360  50                   PUSH EAX
5f003361  ff1554d2005f         CALL dword ptr [0x5f00d254]
5f003367  8d44241c             LEA EAX,[ESP + 0x1c]
5f00336b  57                   PUSH EDI
5f00336c  50                   PUSH EAX
5f00336d  8d442424             LEA EAX,[ESP + 0x24]
5f003371  50                   PUSH EAX
5f003372  ff1598d2005f         CALL dword ptr [0x5f00d298]
5f003378  8d4c241c             LEA ECX,[ESP + 0x1c]
5f00337c  51                   PUSH ECX
5f00337d  56                   PUSH ESI
5f00337e  ff1594d2005f         CALL dword ptr [0x5f00d294]
5f003384  837c241000           CMP dword ptr [ESP + 0x10],0x0
5f003389  740c                 JZ 0x5f003397
5f00338b  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f00338f  50                   PUSH EAX
5f003390  56                   PUSH ESI
5f003391  ff15ccd1005f         CALL dword ptr [0x5f00d1cc]
5f003397  5d                   POP EBP
5f003398  5f                   POP EDI
5f003399  5e                   POP ESI
5f00339a  5b                   POP EBX
5f00339b  83c41c               ADD ESP,0x1c
5f00339e  c3                   RET
; undefined 1 bytes at 5f00339f

; ==== FUNCTION FUN_5f0033a0 entry=5f0033a0 sig=undefined __cdecl FUN_5f0033a0(HWND param_1, HDC param_2, uint param_3)
5f0033a0  81ec54020000         SUB ESP,0x254
5f0033a6  53                   PUSH EBX
5f0033a7  56                   PUSH ESI
5f0033a8  57                   PUSH EDI
5f0033a9  55                   PUSH EBP
5f0033aa  8bbc2468020000       MOV EDI,dword ptr [ESP + 0x268]
5f0033b1  6af0                 PUSH -0x10
5f0033b3  57                   PUSH EDI
5f0033b4  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f0033ba  8bd8                 MOV EBX,EAX
5f0033bc  57                   PUSH EDI
5f0033bd  83e020               AND EAX,0x20
5f0033c0  83e31f               AND EBX,0x1f
5f0033c3  8b2d58d2005f         MOV EBP,dword ptr [0x5f00d258]
5f0033c9  89442424             MOV dword ptr [ESP + 0x24],EAX
5f0033cd  ffd5                 CALL EBP
5f0033cf  8bb4246c020000       MOV ESI,dword ptr [ESP + 0x26c]
5f0033d6  6a02                 PUSH 0x2
5f0033d8  89442420             MOV dword ptr [ESP + 0x20],EAX
5f0033dc  56                   PUSH ESI
5f0033dd  ff15e4d1005f         CALL dword ptr [0x5f00d1e4]
5f0033e3  8d442444             LEA EAX,[ESP + 0x44]
5f0033e7  8b2dccd2005f         MOV EBP,dword ptr [0x5f00d2cc]
5f0033ed  50                   PUSH EAX
5f0033ee  57                   PUSH EDI
5f0033ef  ffd5                 CALL EBP
5f0033f1  8b6c2448             MOV EBP,dword ptr [ESP + 0x48]
5f0033f5  8d542444             LEA EDX,[ESP + 0x44]
5f0033f9  8d4c2434             LEA ECX,[ESP + 0x34]
5f0033fd  8b02                 MOV EAX,dword ptr [EDX]
5f0033ff  6a00                 PUSH 0x0
5f003401  6a00                 PUSH 0x0
5f003403  6a31                 PUSH 0x31
5f003405  8901                 MOV dword ptr [ECX],EAX
5f003407  8b4208               MOV EAX,dword ptr [EDX + 0x8]
5f00340a  57                   PUSH EDI
5f00340b  8b520c               MOV EDX,dword ptr [EDX + 0xc]
5f00340e  896904               MOV dword ptr [ECX + 0x4],EBP
5f003411  894108               MOV dword ptr [ECX + 0x8],EAX
5f003414  89510c               MOV dword ptr [ECX + 0xc],EDX
5f003417  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f00341d  89442410             MOV dword ptr [ESP + 0x10],EAX
5f003421  85c0                 TEST EAX,EAX
5f003423  740c                 JZ 0x5f003431
5f003425  50                   PUSH EAX
5f003426  56                   PUSH ESI
5f003427  ff15ccd1005f         CALL dword ptr [0x5f00d1cc]
5f00342d  89442410             MOV dword ptr [ESP + 0x10],EAX
5f003431  6a0f                 PUSH 0xf
5f003433  8b2d84d2005f         MOV EBP,dword ptr [0x5f00d284]
5f003439  ffd5                 CALL EBP
5f00343b  50                   PUSH EAX
5f00343c  56                   PUSH ESI
5f00343d  ff15b8d1005f         CALL dword ptr [0x5f00d1b8]
5f003443  6a12                 PUSH 0x12
5f003445  ffd5                 CALL EBP
5f003447  50                   PUSH EAX
5f003448  56                   PUSH ESI
5f003449  ff15d4d1005f         CALL dword ptr [0x5f00d1d4]
5f00344f  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
5f003453  57                   PUSH EDI
5f003454  56                   PUSH ESI
5f003455  6835010000           PUSH 0x135
5f00345a  50                   PUSH EAX
5f00345b  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f003461  50                   PUSH EAX
5f003462  56                   PUSH ESI
5f003463  ff15ccd1005f         CALL dword ptr [0x5f00d1cc]
5f003469  8b4c243c             MOV ECX,dword ptr [ESP + 0x3c]
5f00346d  8b542438             MOV EDX,dword ptr [ESP + 0x38]
5f003471  8944242c             MOV dword ptr [ESP + 0x2c],EAX
5f003475  8b442440             MOV EAX,dword ptr [ESP + 0x40]
5f003479  50                   PUSH EAX
5f00347a  8b2dc0d1005f         MOV EBP,dword ptr [0x5f00d1c0]
5f003480  8b442438             MOV EAX,dword ptr [ESP + 0x38]
5f003484  51                   PUSH ECX
5f003485  52                   PUSH EDX
5f003486  50                   PUSH EAX
5f003487  56                   PUSH ESI
5f003488  ffd5                 CALL EBP
5f00348a  8bac2470020000       MOV EBP,dword ptr [ESP + 0x270]
5f003491  f7c510000000         TEST EBP,0x10
5f003497  742d                 JZ 0x5f0034c6
5f003499  83fb07               CMP EBX,0x7
5f00349c  7428                 JZ 0x5f0034c6
5f00349e  8b442440             MOV EAX,dword ptr [ESP + 0x40]
5f0034a2  682100f000           PUSH 0xf00021
5f0034a7  2b44243c             SUB EAX,dword ptr [ESP + 0x3c]
5f0034ab  8b4c243c             MOV ECX,dword ptr [ESP + 0x3c]
5f0034af  8b542438             MOV EDX,dword ptr [ESP + 0x38]
5f0034b3  50                   PUSH EAX
5f0034b4  8b442444             MOV EAX,dword ptr [ESP + 0x44]
5f0034b8  2b44243c             SUB EAX,dword ptr [ESP + 0x3c]
5f0034bc  50                   PUSH EAX
5f0034bd  51                   PUSH ECX
5f0034be  52                   PUSH EDX
5f0034bf  56                   PUSH ESI
5f0034c0  ff15b4d1005f         CALL dword ptr [0x5f00d1b4]
5f0034c6  57                   PUSH EDI
5f0034c7  ff1560d2005f         CALL dword ptr [0x5f00d260]
5f0034cd  89442428             MOV dword ptr [ESP + 0x28],EAX
5f0034d1  6a00                 PUSH 0x0
5f0034d3  6a00                 PUSH 0x0
5f0034d5  68f2000000           PUSH 0xf2
5f0034da  57                   PUSH EDI
5f0034db  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f0034e1  c744241800000000     MOV dword ptr [ESP + 0x18],0x0
5f0034e9  8bc8                 MOV ECX,EAX
5f0034eb  83e103               AND ECX,0x3
5f0034ee  894c2430             MOV dword ptr [ESP + 0x30],ECX
5f0034f2  83f901               CMP ECX,0x1
5f0034f5  1bc9                 SBB ECX,ECX
5f0034f7  83e004               AND EAX,0x4
5f0034fa  41                   INC ECX
5f0034fb  89442454             MOV dword ptr [ESP + 0x54],EAX
5f0034ff  c1f801               SAR EAX,0x1
5f003502  0bc1                 OR EAX,ECX
5f003504  8bd0                 MOV EDX,EAX
5f003506  c1e003               SHL EAX,0x3
5f003509  2bc2                 SUB EAX,EDX
5f00350b  03c0                 ADD EAX,EAX
5f00350d  837c242800           CMP dword ptr [ESP + 0x28],0x0
5f003512  89442414             MOV dword ptr [ESP + 0x14],EAX
5f003516  7515                 JNZ 0x5f00352d
5f003518  83c102               ADD ECX,0x2
5f00351b  8bc1                 MOV EAX,ECX
5f00351d  c1e103               SHL ECX,0x3
5f003520  2bc8                 SUB ECX,EAX
5f003522  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f003526  8d1448               LEA EDX,[EAX + ECX*0x2]
5f003529  89542414             MOV dword ptr [ESP + 0x14],EDX
5f00352d  f7c50a000000         TEST EBP,0xa
5f003533  7509                 JNZ 0x5f00353e
5f003535  85db                 TEST EBX,EBX
5f003537  7405                 JZ 0x5f00353e
5f003539  83fb01               CMP EBX,0x1
5f00353c  7515                 JNZ 0x5f003553
5f00353e  8d442464             LEA EAX,[ESP + 0x64]
5f003542  6800010000           PUSH 0x100
5f003547  50                   PUSH EAX
5f003548  57                   PUSH EDI
5f003549  ff15acd2005f         CALL dword ptr [0x5f00d2ac]
5f00354f  89442424             MOV dword ptr [ESP + 0x24],EAX
5f003553  83fb09               CMP EBX,0x9
5f003556  0f8739030000         JA 0x5f003895
switchD_5f00355c::switchD:
5f00355c  ff249dc038005f       JMP dword ptr [EBX*0x4 + 0x5f0038c0]
switchD_5f00355c::caseD_0:
5f003563  8b442454             MOV EAX,dword ptr [ESP + 0x54]
5f003567  8b4c2424             MOV ECX,dword ptr [ESP + 0x24]
5f00356b  8d542464             LEA EDX,[ESP + 0x64]
5f00356f  50                   PUSH EAX
5f003570  8d442448             LEA EAX,[ESP + 0x48]
5f003574  53                   PUSH EBX
5f003575  51                   PUSH ECX
5f003576  52                   PUSH EDX
5f003577  50                   PUSH EAX
5f003578  56                   PUSH ESI
5f003579  57                   PUSH EDI
5f00357a  e8e1faffff           CALL 0x5f003060
5f00357f  83c41c               ADD ESP,0x1c
5f003582  e90e030000           JMP 0x5f003895
switchD_5f00355c::caseD_4:
5f003587  c74424180d000000     MOV dword ptr [ESP + 0x18],0xd
switchD_5f00355c::caseD_2:
5f00358f  f7c504000000         TEST EBP,0x4
5f003595  0f840c020000         JZ 0x5f0037a7
5f00359b  56                   PUSH ESI
5f00359c  ff15e8d1005f         CALL dword ptr [0x5f00d1e8]
5f0035a2  8bf8                 MOV EDI,EAX
5f0035a4  85ff                 TEST EDI,EDI
5f0035a6  0f84fb010000         JZ 0x5f0037a7
5f0035ac  a19052005f           MOV EAX,[0x5f005290]
5f0035b1  50                   PUSH EAX
5f0035b2  57                   PUSH EDI
5f0035b3  ff15ccd1005f         CALL dword ptr [0x5f00d1cc]
5f0035b9  8bd8                 MOV EBX,EAX
5f0035bb  85db                 TEST EBX,EBX
5f0035bd  0f84dd010000         JZ 0x5f0037a0
5f0035c3  8b442418             MOV EAX,dword ptr [ESP + 0x18]
5f0035c7  682000cc00           PUSH 0xcc0020
5f0035cc  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
5f0035d0  50                   PUSH EAX
5f0035d1  8b442448             MOV EAX,dword ptr [ESP + 0x48]
5f0035d5  51                   PUSH ECX
5f0035d6  837c242c00           CMP dword ptr [ESP + 0x2c],0x0
5f0035db  57                   PUSH EDI
5f0035dc  6a0d                 PUSH 0xd
5f0035de  6a0e                 PUSH 0xe
5f0035e0  0f8492010000         JZ 0x5f003778
5f0035e6  2b442450             SUB EAX,dword ptr [ESP + 0x50]
5f0035ea  8b4c2450             MOV ECX,dword ptr [ESP + 0x50]
5f0035ee  83e80d               SUB EAX,0xd
5f0035f1  99                   CDQ
5f0035f2  2bc2                 SUB EAX,EDX
5f0035f4  c1f801               SAR EAX,0x1
5f0035f7  03c8                 ADD ECX,EAX
5f0035f9  8b442454             MOV EAX,dword ptr [ESP + 0x54]
5f0035fd  51                   PUSH ECX
5f0035fe  83e80e               SUB EAX,0xe
5f003601  e98a010000           JMP 0x5f003790
switchD_5f00355c::caseD_5:
5f003606  837c243002           CMP dword ptr [ESP + 0x30],0x2
5f00360b  7582                 JNZ 0x5f00358f
5f00360d  c74424181a000000     MOV dword ptr [ESP + 0x18],0x1a
5f003615  e975ffffff           JMP 0x5f00358f
switchD_5f00355c::caseD_7:
5f00361a  f7c506000000         TEST EBP,0x6
5f003620  0f846f020000         JZ 0x5f003895
5f003626  8d442420             LEA EAX,[ESP + 0x20]
5f00362a  8d4c2430             LEA ECX,[ESP + 0x30]
5f00362e  8d542464             LEA EDX,[ESP + 0x64]
5f003632  50                   PUSH EAX
5f003633  51                   PUSH ECX
5f003634  52                   PUSH EDX
5f003635  56                   PUSH ESI
5f003636  e8f5deffff           CALL 0x5f001530
5f00363b  83c410               ADD ESP,0x10
5f00363e  837c242000           CMP dword ptr [ESP + 0x20],0x0
5f003643  7518                 JNZ 0x5f00365d
5f003645  8d442420             LEA EAX,[ESP + 0x20]
5f003649  8d4c2454             LEA ECX,[ESP + 0x54]
5f00364d  50                   PUSH EAX
5f00364e  51                   PUSH ECX
5f00364f  6830c2005f           PUSH 0x5f00c230
5f003654  56                   PUSH ESI
5f003655  e8d6deffff           CALL 0x5f001530
5f00365a  83c410               ADD ESP,0x10
5f00365d  8344243404           ADD dword ptr [ESP + 0x34],0x4
5f003662  8b442434             MOV EAX,dword ptr [ESP + 0x34]
5f003666  03442430             ADD EAX,dword ptr [ESP + 0x30]
5f00366a  83c004               ADD EAX,0x4
5f00366d  8944243c             MOV dword ptr [ESP + 0x3c],EAX
5f003671  8b442438             MOV EAX,dword ptr [ESP + 0x38]
5f003675  03442420             ADD EAX,dword ptr [ESP + 0x20]
5f003679  f7c520000000         TEST EBP,0x20
5f00367f  89442440             MOV dword ptr [ESP + 0x40],EAX
5f003683  7475                 JZ 0x5f0036fa
5f003685  8b5c2438             MOV EBX,dword ptr [ESP + 0x38]
5f003689  8b6c243c             MOV EBP,dword ptr [ESP + 0x3c]
5f00368d  8d4c2434             LEA ECX,[ESP + 0x34]
5f003691  8d542454             LEA EDX,[ESP + 0x54]
5f003695  8b01                 MOV EAX,dword ptr [ECX]
5f003697  8902                 MOV dword ptr [EDX],EAX
5f003699  8b410c               MOV EAX,dword ptr [ECX + 0xc]
5f00369c  8b4c244c             MOV ECX,dword ptr [ESP + 0x4c]
5f0036a0  52                   PUSH EDX
5f0036a1  57                   PUSH EDI
5f0036a2  8b35a8d2005f         MOV ESI,dword ptr [0x5f00d2a8]
5f0036a8  895a04               MOV dword ptr [EDX + 0x4],EBX
5f0036ab  896a08               MOV dword ptr [EDX + 0x8],EBP
5f0036ae  89420c               MOV dword ptr [EDX + 0xc],EAX
5f0036b1  894c2464             MOV dword ptr [ESP + 0x64],ECX
5f0036b5  ffd6                 CALL ESI
5f0036b7  8d4c245c             LEA ECX,[ESP + 0x5c]
5f0036bb  51                   PUSH ECX
5f0036bc  57                   PUSH EDI
5f0036bd  ffd6                 CALL ESI
5f0036bf  8d442454             LEA EAX,[ESP + 0x54]
5f0036c3  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
5f0036c7  50                   PUSH EAX
5f0036c8  8b358cd2005f         MOV ESI,dword ptr [0x5f00d28c]
5f0036ce  51                   PUSH ECX
5f0036cf  ffd6                 CALL ESI
5f0036d1  8d4c245c             LEA ECX,[ESP + 0x5c]
5f0036d5  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
5f0036d9  51                   PUSH ECX
5f0036da  50                   PUSH EAX
5f0036db  ffd6                 CALL ESI
5f0036dd  8d4c2454             LEA ECX,[ESP + 0x54]
5f0036e1  6a01                 PUSH 0x1
5f0036e3  8b542420             MOV EDX,dword ptr [ESP + 0x20]
5f0036e7  51                   PUSH ECX
5f0036e8  52                   PUSH EDX
5f0036e9  ff1588d2005f         CALL dword ptr [0x5f00d288]
5f0036ef  5d                   POP EBP
5f0036f0  5f                   POP EDI
5f0036f1  5e                   POP ESI
5f0036f2  5b                   POP EBX
5f0036f3  81c454020000         ADD ESP,0x254
5f0036f9  c3                   RET
5f0036fa  8b442420             MOV EAX,dword ptr [ESP + 0x20]
5f0036fe  ff4c244c             DEC dword ptr [ESP + 0x4c]
5f003702  ff4c2450             DEC dword ptr [ESP + 0x50]
5f003706  6a0f                 PUSH 0xf
5f003708  99                   CDQ
5f003709  2bc2                 SUB EAX,EDX
5f00370b  6a02                 PUSH 0x2
5f00370d  c1f801               SAR EAX,0x1
5f003710  6a02                 PUSH 0x2
5f003712  01442454             ADD dword ptr [ESP + 0x54],EAX
5f003716  8d442450             LEA EAX,[ESP + 0x50]
5f00371a  50                   PUSH EAX
5f00371b  56                   PUSH ESI
5f00371c  e81fdcffff           CALL 0x5f001340
5f003721  8d442458             LEA EAX,[ESP + 0x58]
5f003725  83c414               ADD ESP,0x14
5f003728  6a01                 PUSH 0x1
5f00372a  6a01                 PUSH 0x1
5f00372c  50                   PUSH EAX
5f00372d  ff1550d2005f         CALL dword ptr [0x5f00d250]
5f003733  8d4c2444             LEA ECX,[ESP + 0x44]
5f003737  6a0f                 PUSH 0xf
5f003739  6a00                 PUSH 0x0
5f00373b  6a00                 PUSH 0x0
5f00373d  51                   PUSH ECX
5f00373e  56                   PUSH ESI
5f00373f  e8fcdbffff           CALL 0x5f001340
5f003744  83c414               ADD ESP,0x14
5f003747  837c242800           CMP dword ptr [ESP + 0x28],0x0
5f00374c  750d                 JNZ 0x5f00375b
5f00374e  a17c52005f           MOV EAX,[0x5f00527c]
5f003753  50                   PUSH EAX
5f003754  56                   PUSH ESI
5f003755  ff15d4d1005f         CALL dword ptr [0x5f00d1d4]
5f00375b  8d442434             LEA EAX,[ESP + 0x34]
5f00375f  6a20                 PUSH 0x20
5f003761  8b4c2428             MOV ECX,dword ptr [ESP + 0x28]
5f003765  50                   PUSH EAX
5f003766  8d54246c             LEA EDX,[ESP + 0x6c]
5f00376a  51                   PUSH ECX
5f00376b  52                   PUSH EDX
5f00376c  56                   PUSH ESI
5f00376d  ff15a0d2005f         CALL dword ptr [0x5f00d2a0]
5f003773  e91d010000           JMP 0x5f003895
5f003778  2b442450             SUB EAX,dword ptr [ESP + 0x50]
5f00377c  8b4c2450             MOV ECX,dword ptr [ESP + 0x50]
5f003780  83e80d               SUB EAX,0xd
5f003783  99                   CDQ
5f003784  2bc2                 SUB EAX,EDX
5f003786  c1f801               SAR EAX,0x1
5f003789  03c8                 ADD ECX,EAX
5f00378b  8b44244c             MOV EAX,dword ptr [ESP + 0x4c]
5f00378f  51                   PUSH ECX
5f003790  50                   PUSH EAX
5f003791  56                   PUSH ESI
5f003792  ff15dcd1005f         CALL dword ptr [0x5f00d1dc]
5f003798  53                   PUSH EBX
5f003799  57                   PUSH EDI
5f00379a  ff15ccd1005f         CALL dword ptr [0x5f00d1cc]
5f0037a0  57                   PUSH EDI
5f0037a1  ff15d8d1005f         CALL dword ptr [0x5f00d1d8]
5f0037a7  f7c502000000         TEST EBP,0x2
5f0037ad  744b                 JZ 0x5f0037fa
5f0037af  837c242000           CMP dword ptr [ESP + 0x20],0x0
5f0037b4  740d                 JZ 0x5f0037c3
5f0037b6  8b44244c             MOV EAX,dword ptr [ESP + 0x4c]
5f0037ba  83e812               SUB EAX,0x12
5f0037bd  8944243c             MOV dword ptr [ESP + 0x3c],EAX
5f0037c1  eb0b                 JMP 0x5f0037ce
5f0037c3  8b442444             MOV EAX,dword ptr [ESP + 0x44]
5f0037c7  83c012               ADD EAX,0x12
5f0037ca  89442434             MOV dword ptr [ESP + 0x34],EAX
5f0037ce  837c242800           CMP dword ptr [ESP + 0x28],0x0
5f0037d3  750d                 JNZ 0x5f0037e2
5f0037d5  a17c52005f           MOV EAX,[0x5f00527c]
5f0037da  50                   PUSH EAX
5f0037db  56                   PUSH ESI
5f0037dc  ff15d4d1005f         CALL dword ptr [0x5f00d1d4]
5f0037e2  8d442434             LEA EAX,[ESP + 0x34]
5f0037e6  6a24                 PUSH 0x24
5f0037e8  8b4c2428             MOV ECX,dword ptr [ESP + 0x28]
5f0037ec  50                   PUSH EAX
5f0037ed  8d54246c             LEA EDX,[ESP + 0x6c]
5f0037f1  51                   PUSH ECX
5f0037f2  52                   PUSH EDX
5f0037f3  56                   PUSH ESI
5f0037f4  ff15a0d2005f         CALL dword ptr [0x5f00d2a0]
5f0037fa  f7c508000000         TEST EBP,0x8
5f003800  0f848f000000         JZ 0x5f003895
5f003806  8d442430             LEA EAX,[ESP + 0x30]
5f00380a  8d4c2454             LEA ECX,[ESP + 0x54]
5f00380e  8d542464             LEA EDX,[ESP + 0x64]
5f003812  50                   PUSH EAX
5f003813  51                   PUSH ECX
5f003814  52                   PUSH EDX
5f003815  56                   PUSH ESI
5f003816  e815ddffff           CALL 0x5f001530
5f00381b  8b442450             MOV EAX,dword ptr [ESP + 0x50]
5f00381f  2b442440             SUB EAX,dword ptr [ESP + 0x40]
5f003823  2b442448             SUB EAX,dword ptr [ESP + 0x48]
5f003827  83c410               ADD ESP,0x10
5f00382a  99                   CDQ
5f00382b  2bc2                 SUB EAX,EDX
5f00382d  c1f801               SAR EAX,0x1
5f003830  89442438             MOV dword ptr [ESP + 0x38],EAX
5f003834  03442430             ADD EAX,dword ptr [ESP + 0x30]
5f003838  837c242000           CMP dword ptr [ESP + 0x20],0x0
5f00383d  89442440             MOV dword ptr [ESP + 0x40],EAX
5f003841  8b442444             MOV EAX,dword ptr [ESP + 0x44]
5f003845  740b                 JZ 0x5f003852
5f003847  836c244c12           SUB dword ptr [ESP + 0x4c],0x12
5f00384c  89442434             MOV dword ptr [ESP + 0x34],EAX
5f003850  eb07                 JMP 0x5f003859
5f003852  83c012               ADD EAX,0x12
5f003855  89442434             MOV dword ptr [ESP + 0x34],EAX
5f003859  8b442434             MOV EAX,dword ptr [ESP + 0x34]
5f00385d  6a01                 PUSH 0x1
5f00385f  03442458             ADD EAX,dword ptr [ESP + 0x58]
5f003863  6a01                 PUSH 0x1
5f003865  8d4c243c             LEA ECX,[ESP + 0x3c]
5f003869  89442444             MOV dword ptr [ESP + 0x44],EAX
5f00386d  51                   PUSH ECX
5f00386e  ff1554d2005f         CALL dword ptr [0x5f00d254]
5f003874  8d4c2444             LEA ECX,[ESP + 0x44]
5f003878  8d442434             LEA EAX,[ESP + 0x34]
5f00387c  51                   PUSH ECX
5f00387d  50                   PUSH EAX
5f00387e  8d44243c             LEA EAX,[ESP + 0x3c]
5f003882  50                   PUSH EAX
5f003883  ff1598d2005f         CALL dword ptr [0x5f00d298]
5f003889  8d4c2434             LEA ECX,[ESP + 0x34]
5f00388d  51                   PUSH ECX
5f00388e  56                   PUSH ESI
5f00388f  ff1594d2005f         CALL dword ptr [0x5f00d294]
switchD_5f00355c::caseD_8:
5f003895  8b44242c             MOV EAX,dword ptr [ESP + 0x2c]
5f003899  50                   PUSH EAX
5f00389a  56                   PUSH ESI
5f00389b  ff15ccd1005f         CALL dword ptr [0x5f00d1cc]
5f0038a1  837c241000           CMP dword ptr [ESP + 0x10],0x0
5f0038a6  740c                 JZ 0x5f0038b4
5f0038a8  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f0038ac  50                   PUSH EAX
5f0038ad  56                   PUSH ESI
5f0038ae  ff15ccd1005f         CALL dword ptr [0x5f00d1cc]
5f0038b4  5d                   POP EBP
5f0038b5  5f                   POP EDI
5f0038b6  5e                   POP ESI
5f0038b7  5b                   POP EBX
5f0038b8  81c454020000         ADD ESP,0x254
5f0038be  c3                   RET
; undefined 1 bytes at 5f0038bf
switchD_5f00355c::switchdataD_5f0038c0:
5f0038c0  addr 5f003563
5f0038c4  addr 5f003563
5f0038c8  addr 5f00358f
5f0038cc  addr 5f00358f
5f0038d0  addr 5f003587
5f0038d4  addr 5f003606
5f0038d8  addr 5f003606
5f0038dc  addr 5f00361a
5f0038e0  addr 5f003895
5f0038e4  addr 5f003587
; undefined 8 bytes at 5f0038e8

; ==== FUNCTION BtnWndProc3d entry=5f0038f0 sig=LRESULT __stdcall BtnWndProc3d(HWND param_1, uint param_2, HDC param_3, undefined4 * param_4)
5f0038f0  83ec48               SUB ESP,0x48
5f0038f3  53                   PUSH EBX
5f0038f4  56                   PUSH ESI
5f0038f5  57                   PUSH EDI
5f0038f6  55                   PUSH EBP
5f0038f7  8b7c2460             MOV EDI,dword ptr [ESP + 0x60]
5f0038fb  81ff82000000         CMP EDI,0x82
5f003901  7524                 JNZ 0x5f003927
5f003903  8b442468             MOV EAX,dword ptr [ESP + 0x68]
5f003907  6a00                 PUSH 0x0
5f003909  8b5c2468             MOV EBX,dword ptr [ESP + 0x68]
5f00390d  50                   PUSH EAX
5f00390e  8b742464             MOV ESI,dword ptr [ESP + 0x64]
5f003912  53                   PUSH EBX
5f003913  57                   PUSH EDI
5f003914  56                   PUSH ESI
5f003915  e846d9ffff           CALL 0x5f001260
5f00391a  83c414               ADD ESP,0x14
5f00391d  5d                   POP EBP
5f00391e  5f                   POP EDI
5f00391f  5e                   POP ESI
5f003920  5b                   POP EBX
5f003921  83c448               ADD ESP,0x48
5f003924  c21000               RET 0x10
5f003927  33c0                 XOR EAX,EAX
5f003929  8b74245c             MOV ESI,dword ptr [ESP + 0x5c]
5f00392d  66a15452005f         MOV AX,[0x5f005254]
5f003933  50                   PUSH EAX
5f003934  56                   PUSH ESI
5f003935  ff1500d3005f         CALL dword ptr [0x5f00d300]
5f00393b  85c0                 TEST EAX,EAX
5f00393d  742a                 JZ 0x5f003969
5f00393f  8b442468             MOV EAX,dword ptr [ESP + 0x68]
5f003943  8b5c2464             MOV EBX,dword ptr [ESP + 0x64]
5f003947  50                   PUSH EAX
5f003948  53                   PUSH EBX
5f003949  57                   PUSH EDI
5f00394a  56                   PUSH ESI
5f00394b  6a00                 PUSH 0x0
5f00394d  56                   PUSH ESI
5f00394e  e8cdd6ffff           CALL 0x5f001020
5f003953  83c408               ADD ESP,0x8
5f003956  8b2dd0d2005f         MOV EBP,dword ptr [0x5f00d2d0]
5f00395c  50                   PUSH EAX
5f00395d  ffd5                 CALL EBP
5f00395f  5d                   POP EBP
5f003960  5f                   POP EDI
5f003961  5e                   POP ESI
5f003962  5b                   POP EBX
5f003963  83c448               ADD ESP,0x48
5f003966  c21000               RET 0x10
5f003969  81fff1000000         CMP EDI,0xf1
5f00396f  8bc7                 MOV EAX,EDI
5f003971  7715                 JA 0x5f003988
5f003973  0f841d010000         JZ 0x5f003a96
5f003979  83e807               SUB EAX,0x7
5f00397c  83f808               CMP EAX,0x8
5f00397f  7724                 JA 0x5f0039a5
switchD_5f003981::switchD:
5f003981  ff2485a03b005f       JMP dword ptr [EAX*0x4 + 0x5f003ba0]
5f003988  3df3000000           CMP EAX,0xf3
5f00398d  0f8403010000         JZ 0x5f003a96
5f003993  3d43190000           CMP EAX,0x1943
5f003998  720b                 JC 0x5f0039a5
5f00399a  3d44190000           CMP EAX,0x1944
5f00399f  0f86e0010000         JBE 0x5f003b85
switchD_5f003981::caseD_9:
5f0039a5  8b442468             MOV EAX,dword ptr [ESP + 0x68]
5f0039a9  8b5c2464             MOV EBX,dword ptr [ESP + 0x64]
5f0039ad  50                   PUSH EAX
5f0039ae  53                   PUSH EBX
5f0039af  57                   PUSH EDI
5f0039b0  56                   PUSH ESI
5f0039b1  6a00                 PUSH 0x0
5f0039b3  56                   PUSH ESI
5f0039b4  e867d6ffff           CALL 0x5f001020
5f0039b9  83c408               ADD ESP,0x8
5f0039bc  8b2dd0d2005f         MOV EBP,dword ptr [0x5f00d2d0]
5f0039c2  50                   PUSH EAX
5f0039c3  ffd5                 CALL EBP
5f0039c5  5d                   POP EBP
5f0039c6  5f                   POP EDI
5f0039c7  5e                   POP ESI
5f0039c8  5b                   POP EBX
5f0039c9  83c448               ADD ESP,0x48
5f0039cc  c21000               RET 0x10
switchD_5f003981::caseD_7:
5f0039cf  bd16000000           MOV EBP,0x16
5f0039d4  e9c2000000           JMP 0x5f003a9b
switchD_5f003981::caseD_8:
5f0039d9  6af0                 PUSH -0x10
5f0039db  56                   PUSH ESI
5f0039dc  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f0039e2  241f                 AND AL,0x1f
5f0039e4  3c09                 CMP AL,0x9
5f0039e6  7510                 JNZ 0x5f0039f8
5f0039e8  6a00                 PUSH 0x0
5f0039ea  6a00                 PUSH 0x0
5f0039ec  68f3000000           PUSH 0xf3
5f0039f1  56                   PUSH ESI
5f0039f2  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f0039f8  33ed                 XOR EBP,EBP
5f0039fa  e99c000000           JMP 0x5f003a9b
switchD_5f003981::caseD_a:
5f0039ff  bd06000000           MOV EBP,0x6
5f003a04  e992000000           JMP 0x5f003a9b
switchD_5f003981::caseD_c:
5f003a09  6af0                 PUSH -0x10
5f003a0b  56                   PUSH ESI
5f003a0c  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f003a12  a900000010           TEST EAX,0x10000000
5f003a17  740d                 JZ 0x5f003a26
5f003a19  241f                 AND AL,0x1f
5f003a1b  3c07                 CMP AL,0x7
5f003a1d  7507                 JNZ 0x5f003a26
5f003a1f  bd22000000           MOV EBP,0x22
5f003a24  eb75                 JMP 0x5f003a9b
5f003a26  bd16000000           MOV EBP,0x16
5f003a2b  eb6e                 JMP 0x5f003a9b
switchD_5f003981::caseD_f:
5f003a2d  6a00                 PUSH 0x0
5f003a2f  6a00                 PUSH 0x0
5f003a31  68f2000000           PUSH 0xf2
5f003a36  56                   PUSH ESI
5f003a37  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f003a3d  8bf8                 MOV EDI,EAX
5f003a3f  8b5c2464             MOV EBX,dword ptr [ESP + 0x64]
5f003a43  8beb                 MOV EBP,EBX
5f003a45  85ed                 TEST EBP,EBP
5f003a47  7510                 JNZ 0x5f003a59
5f003a49  8d442418             LEA EAX,[ESP + 0x18]
5f003a4d  8b2db8d2005f         MOV EBP,dword ptr [0x5f00d2b8]
5f003a53  50                   PUSH EAX
5f003a54  56                   PUSH ESI
5f003a55  ffd5                 CALL EBP
5f003a57  8be8                 MOV EBP,EAX
5f003a59  6af0                 PUSH -0x10
5f003a5b  56                   PUSH ESI
5f003a5c  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f003a62  a900000010           TEST EAX,0x10000000
5f003a67  7411                 JZ 0x5f003a7a
5f003a69  83e708               AND EDI,0x8
5f003a6c  83cf06               OR EDI,0x6
5f003a6f  57                   PUSH EDI
5f003a70  55                   PUSH EBP
5f003a71  56                   PUSH ESI
5f003a72  e829f9ffff           CALL 0x5f0033a0
5f003a77  83c40c               ADD ESP,0xc
5f003a7a  85db                 TEST EBX,EBX
5f003a7c  750c                 JNZ 0x5f003a8a
5f003a7e  8d442418             LEA EAX,[ESP + 0x18]
5f003a82  50                   PUSH EAX
5f003a83  56                   PUSH ESI
5f003a84  ff15b4d2005f         CALL dword ptr [0x5f00d2b4]
5f003a8a  33c0                 XOR EAX,EAX
5f003a8c  5d                   POP EBP
5f003a8d  5f                   POP EDI
5f003a8e  5e                   POP ESI
5f003a8f  5b                   POP EBX
5f003a90  83c448               ADD ESP,0x48
5f003a93  c21000               RET 0x10
5f003a96  bd04000000           MOV EBP,0x4
5f003a9b  6a00                 PUSH 0x0
5f003a9d  6a00                 PUSH 0x0
5f003a9f  68f2000000           PUSH 0xf2
5f003aa4  56                   PUSH ESI
5f003aa5  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f003aab  89442410             MOV dword ptr [ESP + 0x10],EAX
5f003aaf  6af0                 PUSH -0x10
5f003ab1  56                   PUSH ESI
5f003ab2  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f003ab8  a900000010           TEST EAX,0x10000000
5f003abd  0f84e2feffff         JZ 0x5f0039a5
5f003ac3  83ff07               CMP EDI,0x7
5f003ac6  740f                 JZ 0x5f003ad7
5f003ac8  25ffffffef           AND EAX,0xefffffff
5f003acd  50                   PUSH EAX
5f003ace  6af0                 PUSH -0x10
5f003ad0  56                   PUSH ESI
5f003ad1  ff15f8d2005f         CALL dword ptr [0x5f00d2f8]
5f003ad7  8b442468             MOV EAX,dword ptr [ESP + 0x68]
5f003adb  8b5c2464             MOV EBX,dword ptr [ESP + 0x64]
5f003adf  50                   PUSH EAX
5f003ae0  53                   PUSH EBX
5f003ae1  57                   PUSH EDI
5f003ae2  56                   PUSH ESI
5f003ae3  6a00                 PUSH 0x0
5f003ae5  56                   PUSH ESI
5f003ae6  e835d5ffff           CALL 0x5f001020
5f003aeb  83c408               ADD ESP,0x8
5f003aee  50                   PUSH EAX
5f003aef  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f003af5  89442414             MOV dword ptr [ESP + 0x14],EAX
5f003af9  83ff07               CMP EDI,0x7
5f003afc  7418                 JZ 0x5f003b16
5f003afe  6af0                 PUSH -0x10
5f003b00  56                   PUSH ESI
5f003b01  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f003b07  0d00000010           OR EAX,0x10000000
5f003b0c  50                   PUSH EAX
5f003b0d  6af0                 PUSH -0x10
5f003b0f  56                   PUSH ESI
5f003b10  ff15f8d2005f         CALL dword ptr [0x5f00d2f8]
5f003b16  6a00                 PUSH 0x0
5f003b18  6a00                 PUSH 0x0
5f003b1a  68f2000000           PUSH 0xf2
5f003b1f  56                   PUSH ESI
5f003b20  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f003b26  8bd8                 MOV EBX,EAX
5f003b28  81fff3000000         CMP EDI,0xf3
5f003b2e  7408                 JZ 0x5f003b38
5f003b30  81fff1000000         CMP EDI,0xf1
5f003b36  7506                 JNZ 0x5f003b3e
5f003b38  395c2410             CMP dword ptr [ESP + 0x10],EBX
5f003b3c  7439                 JZ 0x5f003b77
5f003b3e  56                   PUSH ESI
5f003b3f  ff1578d2005f         CALL dword ptr [0x5f00d278]
5f003b45  8bf8                 MOV EDI,EAX
5f003b47  85ff                 TEST EDI,EDI
5f003b49  742c                 JZ 0x5f003b77
5f003b4b  335c2410             XOR EBX,dword ptr [ESP + 0x10]
5f003b4f  f6c303               TEST BL,0x3
5f003b52  7403                 JZ 0x5f003b57
5f003b54  83cd04               OR EBP,0x4
5f003b57  56                   PUSH ESI
5f003b58  83e308               AND EBX,0x8
5f003b5b  57                   PUSH EDI
5f003b5c  0bdd                 OR EBX,EBP
5f003b5e  ff15b0d2005f         CALL dword ptr [0x5f00d2b0]
5f003b64  53                   PUSH EBX
5f003b65  57                   PUSH EDI
5f003b66  56                   PUSH ESI
5f003b67  e834f8ffff           CALL 0x5f0033a0
5f003b6c  83c40c               ADD ESP,0xc
5f003b6f  57                   PUSH EDI
5f003b70  56                   PUSH ESI
5f003b71  ff154cd2005f         CALL dword ptr [0x5f00d24c]
5f003b77  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f003b7b  5d                   POP EBP
5f003b7c  5f                   POP EDI
5f003b7d  5e                   POP ESI
5f003b7e  5b                   POP EBX
5f003b7f  83c448               ADD ESP,0x48
5f003b82  c21000               RET 0x10
5f003b85  8b442468             MOV EAX,dword ptr [ESP + 0x68]
5f003b89  5d                   POP EBP
5f003b8a  5f                   POP EDI
5f003b8b  5e                   POP ESI
5f003b8c  5b                   POP EBX
5f003b8d  c70001000000         MOV dword ptr [EAX],0x1
5f003b93  b8e8030000           MOV EAX,0x3e8
5f003b98  83c448               ADD ESP,0x48
5f003b9b  c21000               RET 0x10

; ==== FUNCTION FUN_5f003b9e entry=5f003b9e sig=undefined __stdcall FUN_5f003b9e(void)
5f003b9e  8bff                 MOV EDI,EDI
switchD_5f003981::switchdataD_5f003ba0:
5f003ba0  addr 5f0039cf
5f003ba4  addr 5f0039d9
5f003ba8  addr 5f0039a5
5f003bac  addr 5f0039ff
5f003bb0  addr 5f0039a5
5f003bb4  addr 5f003a09
5f003bb8  addr 5f0039a5
5f003bbc  addr 5f0039a5
5f003bc0  addr 5f003a2d
; undefined 12 bytes at 5f003bc4

; ==== FUNCTION FUN_5f003bd0 entry=5f003bd0 sig=undefined __cdecl FUN_5f003bd0(HWND param_1, int param_2, int param_3)
5f003bd0  83ec54               SUB ESP,0x54
5f003bd3  53                   PUSH EBX
5f003bd4  56                   PUSH ESI
5f003bd5  8b742460             MOV ESI,dword ptr [ESP + 0x60]
5f003bd9  57                   PUSH EDI
5f003bda  55                   PUSH EBP
5f003bdb  6af0                 PUSH -0x10
5f003bdd  56                   PUSH ESI
5f003bde  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f003be4  89442410             MOV dword ptr [ESP + 0x10],EAX
5f003be8  a900000010           TEST EAX,0x10000000
5f003bed  0f840b030000         JZ 0x5f003efe
5f003bf3  837c247003           CMP dword ptr [ESP + 0x70],0x3
5f003bf8  751e                 JNZ 0x5f003c18
5f003bfa  2403                 AND AL,0x3
5f003bfc  3c03                 CMP AL,0x3
5f003bfe  7518                 JNZ 0x5f003c18
5f003c00  6a00                 PUSH 0x0
5f003c02  6a00                 PUSH 0x0
5f003c04  6857010000           PUSH 0x157
5f003c09  56                   PUSH ESI
5f003c0a  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f003c10  85c0                 TEST EAX,EAX
5f003c12  0f85e6020000         JNZ 0x5f003efe
5f003c18  837c246c00           CMP dword ptr [ESP + 0x6c],0x0
5f003c1d  7407                 JZ 0x5f003c26
5f003c1f  56                   PUSH ESI
5f003c20  ff15c4d2005f         CALL dword ptr [0x5f00d2c4]
5f003c26  8d442424             LEA EAX,[ESP + 0x24]
5f003c2a  50                   PUSH EAX
5f003c2b  56                   PUSH ESI
5f003c2c  ff1504d3005f         CALL dword ptr [0x5f00d304]
5f003c32  56                   PUSH ESI
5f003c33  ff1558d2005f         CALL dword ptr [0x5f00d258]
5f003c39  8bf8                 MOV EDI,EAX
5f003c3b  8b1d8cd2005f         MOV EBX,dword ptr [0x5f00d28c]
5f003c41  8d442424             LEA EAX,[ESP + 0x24]
5f003c45  50                   PUSH EAX
5f003c46  57                   PUSH EDI
5f003c47  ffd3                 CALL EBX
5f003c49  8d4c242c             LEA ECX,[ESP + 0x2c]
5f003c4d  66bd0f00             MOV BP,0xf
5f003c51  51                   PUSH ECX
5f003c52  57                   PUSH EDI
5f003c53  ffd3                 CALL EBX
5f003c55  57                   PUSH EDI
5f003c56  ff1578d2005f         CALL dword ptr [0x5f00d278]
5f003c5c  8bd8                 MOV EBX,EAX
5f003c5e  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f003c62  2500001000           AND EAX,0x100000
5f003c67  8944241c             MOV dword ptr [ESP + 0x1c],EAX
5f003c6b  7404                 JZ 0x5f003c71
5f003c6d  66bd0700             MOV BP,0x7
5f003c71  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f003c75  2500002000           AND EAX,0x200000
5f003c7a  89442420             MOV dword ptr [ESP + 0x20],EAX
5f003c7e  7405                 JZ 0x5f003c85
5f003c80  6681e5fbff           AND BP,0xfffb
5f003c85  6af4                 PUSH -0xc
5f003c87  56                   PUSH ESI
5f003c88  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f003c8e  8b4c246c             MOV ECX,dword ptr [ESP + 0x6c]
5f003c92  2bc8                 SUB ECX,EAX
5f003c94  81f918fcffff         CMP ECX,0xfffffc18
5f003c9a  0f8552010000         JNZ 0x5f003df2
5f003ca0  c74424189a020000     MOV dword ptr [ESP + 0x18],0x29a
5f003ca8  8d442418             LEA EAX,[ESP + 0x18]
5f003cac  50                   PUSH EAX
5f003cad  6a00                 PUSH 0x0
5f003caf  6844190000           PUSH 0x1944
5f003cb4  57                   PUSH EDI
5f003cb5  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f003cbb  817c24189a020000     CMP dword ptr [ESP + 0x18],0x29a
5f003cc3  89442434             MOV dword ptr [ESP + 0x34],EAX
5f003cc7  7517                 JNZ 0x5f003ce0
5f003cc9  8d442418             LEA EAX,[ESP + 0x18]
5f003ccd  50                   PUSH EAX
5f003cce  6a00                 PUSH 0x0
5f003cd0  6843190000           PUSH 0x1943
5f003cd5  57                   PUSH EDI
5f003cd6  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f003cdc  89442434             MOV dword ptr [ESP + 0x34],EAX
5f003ce0  8d442444             LEA EAX,[ESP + 0x44]
5f003ce4  6a10                 PUSH 0x10
5f003ce6  50                   PUSH EAX
5f003ce7  57                   PUSH EDI
5f003ce8  ff15f0d2005f         CALL dword ptr [0x5f00d2f0]
5f003cee  8d4c2444             LEA ECX,[ESP + 0x44]
5f003cf2  68d4b0005f           PUSH 0x5f00b0d4
5f003cf7  51                   PUSH ECX
5f003cf8  ff150cd2005f         CALL dword ptr [0x5f00d20c]
5f003cfe  85c0                 TEST EAX,EAX
5f003d00  7419                 JZ 0x5f003d1b
5f003d02  837c241801           CMP dword ptr [ESP + 0x18],0x1
5f003d07  0f85e5000000         JNZ 0x5f003df2
5f003d0d  817c2434eb030000     CMP dword ptr [ESP + 0x34],0x3eb
5f003d15  0f85d7000000         JNZ 0x5f003df2
5f003d1b  57                   PUSH EDI
5f003d1c  ff1558d2005f         CALL dword ptr [0x5f00d258]
5f003d22  89442414             MOV dword ptr [ESP + 0x14],EAX
5f003d26  6a02                 PUSH 0x2
5f003d28  8d442428             LEA EAX,[ESP + 0x28]
5f003d2c  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
5f003d30  50                   PUSH EAX
5f003d31  51                   PUSH ECX
5f003d32  57                   PUSH EDI
5f003d33  ff15c0d2005f         CALL dword ptr [0x5f00d2c0]
5f003d39  53                   PUSH EBX
5f003d3a  57                   PUSH EDI
5f003d3b  ff154cd2005f         CALL dword ptr [0x5f00d24c]
5f003d41  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
5f003d45  51                   PUSH ECX
5f003d46  ff1578d2005f         CALL dword ptr [0x5f00d278]
5f003d4c  837c246c00           CMP dword ptr [ESP + 0x6c],0x0
5f003d51  8bd8                 MOV EBX,EAX
5f003d53  0f848c000000         JZ 0x5f003de5
5f003d59  6af0                 PUSH -0x10
5f003d5b  57                   PUSH EDI
5f003d5c  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f003d62  83e003               AND EAX,0x3
5f003d65  83f802               CMP EAX,0x2
5f003d68  744c                 JZ 0x5f003db6
5f003d6a  83f803               CMP EAX,0x3
5f003d6d  7447                 JZ 0x5f003db6
5f003d6f  6681e5f7ff           AND BP,0xfff7
5f003d74  6a05                 PUSH 0x5
5f003d76  57                   PUSH EDI
5f003d77  ff155cd2005f         CALL dword ptr [0x5f00d25c]
5f003d7d  8d4c2434             LEA ECX,[ESP + 0x34]
5f003d81  51                   PUSH ECX
5f003d82  50                   PUSH EAX
5f003d83  ff1504d3005f         CALL dword ptr [0x5f00d304]
5f003d89  8b442434             MOV EAX,dword ptr [ESP + 0x34]
5f003d8d  6808100000           PUSH 0x1008
5f003d92  2b442440             SUB EAX,dword ptr [ESP + 0x40]
5f003d96  8d4c2428             LEA ECX,[ESP + 0x28]
5f003d9a  01442430             ADD dword ptr [ESP + 0x30],EAX
5f003d9e  51                   PUSH ECX
5f003d9f  53                   PUSH EBX
5f003da0  e8dbd6ffff           CALL 0x5f001480
5f003da5  8b442448             MOV EAX,dword ptr [ESP + 0x48]
5f003da9  2b442440             SUB EAX,dword ptr [ESP + 0x40]
5f003dad  01442438             ADD dword ptr [ESP + 0x38],EAX
5f003db1  83c40c               ADD ESP,0xc
5f003db4  eb38                 JMP 0x5f003dee
5f003db6  6a00                 PUSH 0x0
5f003db8  6a00                 PUSH 0x0
5f003dba  6857010000           PUSH 0x157
5f003dbf  57                   PUSH EDI
5f003dc0  ff15e8d2005f         CALL dword ptr [0x5f00d2e8]
5f003dc6  85c0                 TEST EAX,EAX
5f003dc8  7424                 JZ 0x5f003dee
5f003dca  8b442414             MOV EAX,dword ptr [ESP + 0x14]
5f003dce  53                   PUSH EBX
5f003dcf  50                   PUSH EAX
5f003dd0  ff154cd2005f         CALL dword ptr [0x5f00d24c]
5f003dd6  56                   PUSH ESI
5f003dd7  ff15bcd2005f         CALL dword ptr [0x5f00d2bc]
5f003ddd  5d                   POP EBP
5f003dde  5f                   POP EDI
5f003ddf  5e                   POP ESI
5f003de0  5b                   POP EBX
5f003de1  83c454               ADD ESP,0x54
5f003de4  c3                   RET
5f003de5  6681e5fdff           AND BP,0xfffd
5f003dea  ff442428             INC dword ptr [ESP + 0x28]
5f003dee  8b7c2414             MOV EDI,dword ptr [ESP + 0x14]
5f003df2  8d442424             LEA EAX,[ESP + 0x24]
5f003df6  55                   PUSH EBP
5f003df7  50                   PUSH EAX
5f003df8  53                   PUSH EBX
5f003df9  e882d6ffff           CALL 0x5f001480
5f003dfe  83c40c               ADD ESP,0xc
5f003e01  837c247003           CMP dword ptr [ESP + 0x70],0x3
5f003e06  753e                 JNZ 0x5f003e46
5f003e08  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f003e0c  2403                 AND AL,0x3
5f003e0e  3c03                 CMP AL,0x3
5f003e10  7534                 JNZ 0x5f003e46
5f003e12  8b6c242c             MOV EBP,dword ptr [ESP + 0x2c]
5f003e16  6a02                 PUSH 0x2
5f003e18  ff1574d2005f         CALL dword ptr [0x5f00d274]
5f003e1e  2be8                 SUB EBP,EAX
5f003e20  6a0c                 PUSH 0xc
5f003e22  8d442428             LEA EAX,[ESP + 0x28]
5f003e26  6a07                 PUSH 0x7
5f003e28  896c242c             MOV dword ptr [ESP + 0x2c],EBP
5f003e2c  6a07                 PUSH 0x7
5f003e2e  50                   PUSH EAX
5f003e2f  53                   PUSH EBX
5f003e30  e80bd5ffff           CALL 0x5f001340
5f003e35  83c414               ADD ESP,0x14
5f003e38  56                   PUSH ESI
5f003e39  e8b2f1ffff           CALL 0x5f002ff0
5f003e3e  83c404               ADD ESP,0x4
5f003e41  e9a2000000           JMP 0x5f003ee8
5f003e46  837c242000           CMP dword ptr [ESP + 0x20],0x0
5f003e4b  7452                 JZ 0x5f003e9f
5f003e4d  8d442424             LEA EAX,[ESP + 0x24]
5f003e51  6a04                 PUSH 0x4
5f003e53  ff442430             INC dword ptr [ESP + 0x30]
5f003e57  6a00                 PUSH 0x0
5f003e59  6a00                 PUSH 0x0
5f003e5b  50                   PUSH EAX
5f003e5c  53                   PUSH EBX
5f003e5d  e8ded4ffff           CALL 0x5f001340
5f003e62  8b442438             MOV EAX,dword ptr [ESP + 0x38]
5f003e66  ff4c2440             DEC dword ptr [ESP + 0x40]
5f003e6a  8b6c2440             MOV EBP,dword ptr [ESP + 0x40]
5f003e6e  89442458             MOV dword ptr [ESP + 0x58],EAX
5f003e72  83c414               ADD ESP,0x14
5f003e75  6a02                 PUSH 0x2
5f003e77  ff1574d2005f         CALL dword ptr [0x5f00d274]
5f003e7d  2be8                 SUB EBP,EAX
5f003e7f  6a08                 PUSH 0x8
5f003e81  8d442428             LEA EAX,[ESP + 0x28]
5f003e85  6a07                 PUSH 0x7
5f003e87  896c242c             MOV dword ptr [ESP + 0x2c],EBP
5f003e8b  6a07                 PUSH 0x7
5f003e8d  50                   PUSH EAX
5f003e8e  53                   PUSH EBX
5f003e8f  e8acd4ffff           CALL 0x5f001340
5f003e94  8b442458             MOV EAX,dword ptr [ESP + 0x58]
5f003e98  89442438             MOV dword ptr [ESP + 0x38],EAX
5f003e9c  83c414               ADD ESP,0x14
5f003e9f  837c241c00           CMP dword ptr [ESP + 0x1c],0x0
5f003ea4  7442                 JZ 0x5f003ee8
5f003ea6  8d442424             LEA EAX,[ESP + 0x24]
5f003eaa  6a08                 PUSH 0x8
5f003eac  ff442434             INC dword ptr [ESP + 0x34]
5f003eb0  6a00                 PUSH 0x0
5f003eb2  6a00                 PUSH 0x0
5f003eb4  50                   PUSH EAX
5f003eb5  53                   PUSH EBX
5f003eb6  e885d4ffff           CALL 0x5f001340
5f003ebb  ff4c2444             DEC dword ptr [ESP + 0x44]
5f003ebf  83c414               ADD ESP,0x14
5f003ec2  8b6c2430             MOV EBP,dword ptr [ESP + 0x30]
5f003ec6  6a15                 PUSH 0x15
5f003ec8  ff1574d2005f         CALL dword ptr [0x5f00d274]
5f003ece  2be8                 SUB EBP,EAX
5f003ed0  6a04                 PUSH 0x4
5f003ed2  8d442428             LEA EAX,[ESP + 0x28]
5f003ed6  6a07                 PUSH 0x7
5f003ed8  896c2430             MOV dword ptr [ESP + 0x30],EBP
5f003edc  6a07                 PUSH 0x7
5f003ede  50                   PUSH EAX
5f003edf  53                   PUSH EBX
5f003ee0  e85bd4ffff           CALL 0x5f001340
5f003ee5  83c414               ADD ESP,0x14
5f003ee8  53                   PUSH EBX
5f003ee9  57                   PUSH EDI
5f003eea  ff154cd2005f         CALL dword ptr [0x5f00d24c]
5f003ef0  837c246c00           CMP dword ptr [ESP + 0x6c],0x0
5f003ef5  7407                 JZ 0x5f003efe
5f003ef7  56                   PUSH ESI
5f003ef8  ff15bcd2005f         CALL dword ptr [0x5f00d2bc]
5f003efe  5d                   POP EBP
5f003eff  5f                   POP EDI
5f003f00  5e                   POP ESI
5f003f01  5b                   POP EBX
5f003f02  83c454               ADD ESP,0x54
5f003f05  c3                   RET
; undefined 10 bytes at 5f003f06

; ==== FUNCTION FUN_5f003f10 entry=5f003f10 sig=uint __cdecl FUN_5f003f10(HWND param_1, uint param_2, WPARAM param_3, undefined4 * param_4, int param_5)
5f003f10  83ec04               SUB ESP,0x4
5f003f13  53                   PUSH EBX
5f003f14  56                   PUSH ESI
5f003f15  57                   PUSH EDI
5f003f16  55                   PUSH EBP
5f003f17  8b7c241c             MOV EDI,dword ptr [ESP + 0x1c]
5f003f1b  81ff82000000         CMP EDI,0x82
5f003f21  7525                 JNZ 0x5f003f48
5f003f23  8b5c2428             MOV EBX,dword ptr [ESP + 0x28]
5f003f27  8b6c2424             MOV EBP,dword ptr [ESP + 0x24]
5f003f2b  8b442420             MOV EAX,dword ptr [ESP + 0x20]
5f003f2f  53                   PUSH EBX
5f003f30  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
5f003f34  55                   PUSH EBP
5f003f35  50                   PUSH EAX
5f003f36  57                   PUSH EDI
5f003f37  56                   PUSH ESI
5f003f38  e823d3ffff           CALL 0x5f001260
5f003f3d  83c414               ADD ESP,0x14
5f003f40  5d                   POP EBP
5f003f41  5f                   POP EDI
5f003f42  5e                   POP ESI
5f003f43  5b                   POP EBX
5f003f44  83c404               ADD ESP,0x4
5f003f47  c3                   RET
5f003f48  33c0                 XOR EAX,EAX
5f003f4a  8b742418             MOV ESI,dword ptr [ESP + 0x18]
5f003f4e  66a15452005f         MOV AX,[0x5f005254]
5f003f54  50                   PUSH EAX
5f003f55  56                   PUSH ESI
5f003f56  ff1500d3005f         CALL dword ptr [0x5f00d300]
5f003f5c  8b6c2424             MOV EBP,dword ptr [ESP + 0x24]
5f003f60  85c0                 TEST EAX,EAX
5f003f62  8b442420             MOV EAX,dword ptr [ESP + 0x20]
5f003f66  55                   PUSH EBP
5f003f67  8b5c242c             MOV EBX,dword ptr [ESP + 0x2c]
5f003f6b  50                   PUSH EAX
5f003f6c  57                   PUSH EDI
5f003f6d  56                   PUSH ESI
5f003f6e  53                   PUSH EBX
5f003f6f  56                   PUSH ESI
5f003f70  7419                 JZ 0x5f003f8b
5f003f72  e8a9d0ffff           CALL 0x5f001020
5f003f77  83c408               ADD ESP,0x8
5f003f7a  8b2dd0d2005f         MOV EBP,dword ptr [0x5f00d2d0]
5f003f80  50                   PUSH EAX
5f003f81  ffd5                 CALL EBP
5f003f83  5d                   POP EBP
5f003f84  5f                   POP EDI
5f003f85  5e                   POP ESI
5f003f86  5b                   POP EBX
5f003f87  83c404               ADD ESP,0x4
5f003f8a  c3                   RET
5f003f8b  e890d0ffff           CALL 0x5f001020
5f003f90  83c408               ADD ESP,0x8
5f003f93  50                   PUSH EAX
5f003f94  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f003f9a  89442410             MOV dword ptr [ESP + 0x10],EAX
5f003f9e  83fb03               CMP EBX,0x3
5f003fa1  751f                 JNZ 0x5f003fc2
5f003fa3  6af0                 PUSH -0x10
5f003fa5  56                   PUSH ESI
5f003fa6  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f003fac  8bc8                 MOV ECX,EAX
5f003fae  80e103               AND CL,0x3
5f003fb1  80f902               CMP CL,0x2
5f003fb4  7510                 JNZ 0x5f003fc6
5f003fb6  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f003fba  5d                   POP EBP
5f003fbb  5f                   POP EDI
5f003fbc  5e                   POP ESI
5f003fbd  5b                   POP EBX
5f003fbe  83c404               ADD ESP,0x4
5f003fc1  c3                   RET
5f003fc2  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f003fc6  83ff18               CMP EDI,0x18
5f003fc9  7713                 JA 0x5f003fde
5f003fcb  7448                 JZ 0x5f004015
5f003fcd  83ff0f               CMP EDI,0xf
5f003fd0  7423                 JZ 0x5f003ff5
5f003fd2  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f003fd6  5d                   POP EBP
5f003fd7  5f                   POP EDI
5f003fd8  5e                   POP ESI
5f003fd9  5b                   POP EBX
5f003fda  83c404               ADD ESP,0x4
5f003fdd  c3                   RET
5f003fde  83ff46               CMP EDI,0x46
5f003fe1  7451                 JZ 0x5f004034
5f003fe3  81ff43190000         CMP EDI,0x1943
5f003fe9  72e7                 JC 0x5f003fd2
5f003feb  81ff44190000         CMP EDI,0x1944
5f003ff1  7658                 JBE 0x5f00404b
5f003ff3  ebdd                 JMP 0x5f003fd2
5f003ff5  83fb03               CMP EBX,0x3
5f003ff8  750d                 JNZ 0x5f004007
5f003ffa  83e003               AND EAX,0x3
5f003ffd  83f802               CMP EAX,0x2
5f004000  7405                 JZ 0x5f004007
5f004002  83f803               CMP EAX,0x3
5f004005  75cb                 JNZ 0x5f003fd2
5f004007  53                   PUSH EBX
5f004008  6a01                 PUSH 0x1
5f00400a  56                   PUSH ESI
5f00400b  e8c0fbffff           CALL 0x5f003bd0
5f004010  83c40c               ADD ESP,0xc
5f004013  ebbd                 JMP 0x5f003fd2
5f004015  66813d6052005f0a03   CMP word ptr [0x5f005260],0x30a
5f00401e  73b2                 JNC 0x5f003fd2
5f004020  837c242000           CMP dword ptr [ESP + 0x20],0x0
5f004025  75ab                 JNZ 0x5f003fd2
5f004027  6a00                 PUSH 0x0
5f004029  56                   PUSH ESI
5f00402a  e801efffff           CALL 0x5f002f30
5f00402f  83c408               ADD ESP,0x8
5f004032  eb9e                 JMP 0x5f003fd2
5f004034  66813d6052005f0a03   CMP word ptr [0x5f005260],0x30a
5f00403d  7293                 JC 0x5f003fd2
5f00403f  55                   PUSH EBP
5f004040  56                   PUSH ESI
5f004041  e8eaeeffff           CALL 0x5f002f30
5f004046  83c408               ADD ESP,0x8
5f004049  eb87                 JMP 0x5f003fd2
5f00404b  b8ea030000           MOV EAX,0x3ea
5f004050  c7450001000000       MOV dword ptr [EBP],0x1
5f004057  5d                   POP EBP
5f004058  5f                   POP EDI
5f004059  5e                   POP ESI
5f00405a  5b                   POP EBX
5f00405b  83c404               ADD ESP,0x4
5f00405e  c3                   RET
; undefined 1 bytes at 5f00405f

; ==== FUNCTION EditWndProc3d entry=5f004060 sig=undefined __stdcall EditWndProc3d(HWND param_1, uint param_2, WPARAM param_3, undefined4 * param_4)
5f004060  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f004064  6a02                 PUSH 0x2
5f004066  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
5f00406a  50                   PUSH EAX
5f00406b  8b542410             MOV EDX,dword ptr [ESP + 0x10]
5f00406f  51                   PUSH ECX
5f004070  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f004074  52                   PUSH EDX
5f004075  50                   PUSH EAX
5f004076  e895feffff           CALL 0x5f003f10
5f00407b  83c414               ADD ESP,0x14
5f00407e  c21000               RET 0x10
; undefined 15 bytes at 5f004081

; ==== FUNCTION FUN_5f004090 entry=5f004090 sig=LRESULT __cdecl FUN_5f004090(HWND param_1, uint param_2, WPARAM param_3, LONG * param_4, int param_5)
5f004090  83ec20               SUB ESP,0x20
5f004093  53                   PUSH EBX
5f004094  56                   PUSH ESI
5f004095  8b742430             MOV ESI,dword ptr [ESP + 0x30]
5f004099  57                   PUSH EDI
5f00409a  81fe82000000         CMP ESI,0x82
5f0040a0  7524                 JNZ 0x5f0040c6
5f0040a2  8b442440             MOV EAX,dword ptr [ESP + 0x40]
5f0040a6  8b4c243c             MOV ECX,dword ptr [ESP + 0x3c]
5f0040aa  8b542438             MOV EDX,dword ptr [ESP + 0x38]
5f0040ae  50                   PUSH EAX
5f0040af  8b7c2434             MOV EDI,dword ptr [ESP + 0x34]
5f0040b3  51                   PUSH ECX
5f0040b4  52                   PUSH EDX
5f0040b5  56                   PUSH ESI
5f0040b6  57                   PUSH EDI
5f0040b7  e8a4d1ffff           CALL 0x5f001260
5f0040bc  83c414               ADD ESP,0x14
5f0040bf  5f                   POP EDI
5f0040c0  5e                   POP ESI
5f0040c1  5b                   POP EBX
5f0040c2  83c420               ADD ESP,0x20
5f0040c5  c3                   RET
5f0040c6  33c0                 XOR EAX,EAX
5f0040c8  8b7c2430             MOV EDI,dword ptr [ESP + 0x30]
5f0040cc  66a15452005f         MOV AX,[0x5f005254]
5f0040d2  50                   PUSH EAX
5f0040d3  57                   PUSH EDI
5f0040d4  ff1500d3005f         CALL dword ptr [0x5f00d300]
5f0040da  85c0                 TEST EAX,EAX
5f0040dc  7428                 JZ 0x5f004106
5f0040de  8b44243c             MOV EAX,dword ptr [ESP + 0x3c]
5f0040e2  8b4c2438             MOV ECX,dword ptr [ESP + 0x38]
5f0040e6  8b542440             MOV EDX,dword ptr [ESP + 0x40]
5f0040ea  50                   PUSH EAX
5f0040eb  51                   PUSH ECX
5f0040ec  56                   PUSH ESI
5f0040ed  57                   PUSH EDI
5f0040ee  52                   PUSH EDX
5f0040ef  57                   PUSH EDI
5f0040f0  e82bcfffff           CALL 0x5f001020
5f0040f5  83c408               ADD ESP,0x8
5f0040f8  50                   PUSH EAX
5f0040f9  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f0040ff  5f                   POP EDI
5f004100  5e                   POP ESI
5f004101  5b                   POP EBX
5f004102  83c420               ADD ESP,0x20
5f004105  c3                   RET
5f004106  83fe18               CMP ESI,0x18
5f004109  7733                 JA 0x5f00413e
5f00410b  0f8490000000         JZ 0x5f0041a1
5f004111  83fe0f               CMP ESI,0xf
5f004114  7453                 JZ 0x5f004169
5f004116  8b44243c             MOV EAX,dword ptr [ESP + 0x3c]
5f00411a  8b4c2438             MOV ECX,dword ptr [ESP + 0x38]
5f00411e  8b542440             MOV EDX,dword ptr [ESP + 0x40]
5f004122  50                   PUSH EAX
5f004123  51                   PUSH ECX
5f004124  56                   PUSH ESI
5f004125  57                   PUSH EDI
5f004126  52                   PUSH EDX
5f004127  57                   PUSH EDI
5f004128  e8f3ceffff           CALL 0x5f001020
5f00412d  83c408               ADD ESP,0x8
5f004130  50                   PUSH EAX
5f004131  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f004137  5f                   POP EDI
5f004138  5e                   POP ESI
5f004139  5b                   POP EBX
5f00413a  83c420               ADD ESP,0x20
5f00413d  c3                   RET
5f00413e  81fe83000000         CMP ESI,0x83
5f004144  770d                 JA 0x5f004153
5f004146  0f84a1000000         JZ 0x5f0041ed
5f00414c  83fe46               CMP ESI,0x46
5f00414f  747a                 JZ 0x5f0041cb
5f004151  ebc3                 JMP 0x5f004116
5f004153  81fe43190000         CMP ESI,0x1943
5f004159  72bb                 JC 0x5f004116
5f00415b  81fe44190000         CMP ESI,0x1944
5f004161  0f8641010000         JBE 0x5f0042a8
5f004167  ebad                 JMP 0x5f004116
5f004169  8b5c2440             MOV EBX,dword ptr [ESP + 0x40]
5f00416d  8b44243c             MOV EAX,dword ptr [ESP + 0x3c]
5f004171  8b4c2438             MOV ECX,dword ptr [ESP + 0x38]
5f004175  50                   PUSH EAX
5f004176  51                   PUSH ECX
5f004177  56                   PUSH ESI
5f004178  57                   PUSH EDI
5f004179  53                   PUSH EBX
5f00417a  57                   PUSH EDI
5f00417b  e8a0ceffff           CALL 0x5f001020
5f004180  83c408               ADD ESP,0x8
5f004183  50                   PUSH EAX
5f004184  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f00418a  8bf0                 MOV ESI,EAX
5f00418c  53                   PUSH EBX
5f00418d  6a00                 PUSH 0x0
5f00418f  57                   PUSH EDI
5f004190  e83bfaffff           CALL 0x5f003bd0
5f004195  83c40c               ADD ESP,0xc
5f004198  8bc6                 MOV EAX,ESI
5f00419a  5f                   POP EDI
5f00419b  5e                   POP ESI
5f00419c  5b                   POP EBX
5f00419d  83c420               ADD ESP,0x20
5f0041a0  c3                   RET
5f0041a1  66813d6052005f0a03   CMP word ptr [0x5f005260],0x30a
5f0041aa  0f8366ffffff         JNC 0x5f004116
5f0041b0  837c243800           CMP dword ptr [ESP + 0x38],0x0
5f0041b5  0f855bffffff         JNZ 0x5f004116
5f0041bb  6a00                 PUSH 0x0
5f0041bd  57                   PUSH EDI
5f0041be  e86dedffff           CALL 0x5f002f30
5f0041c3  83c408               ADD ESP,0x8
5f0041c6  e94bffffff           JMP 0x5f004116
5f0041cb  66813d6052005f0a03   CMP word ptr [0x5f005260],0x30a
5f0041d4  0f823cffffff         JC 0x5f004116
5f0041da  8b44243c             MOV EAX,dword ptr [ESP + 0x3c]
5f0041de  50                   PUSH EAX
5f0041df  57                   PUSH EDI
5f0041e0  e84bedffff           CALL 0x5f002f30
5f0041e5  83c408               ADD ESP,0x8
5f0041e8  e929ffffff           JMP 0x5f004116
5f0041ed  66813d6052005f0a03   CMP word ptr [0x5f005260],0x30a
5f0041f6  0f831affffff         JNC 0x5f004116
5f0041fc  8d44241c             LEA EAX,[ESP + 0x1c]
5f004200  50                   PUSH EAX
5f004201  57                   PUSH EDI
5f004202  ff1504d3005f         CALL dword ptr [0x5f00d304]
5f004208  8b4c243c             MOV ECX,dword ptr [ESP + 0x3c]
5f00420c  8b442438             MOV EAX,dword ptr [ESP + 0x38]
5f004210  8b542440             MOV EDX,dword ptr [ESP + 0x40]
5f004214  51                   PUSH ECX
5f004215  50                   PUSH EAX
5f004216  56                   PUSH ESI
5f004217  57                   PUSH EDI
5f004218  52                   PUSH EDX
5f004219  57                   PUSH EDI
5f00421a  e801ceffff           CALL 0x5f001020
5f00421f  83c408               ADD ESP,0x8
5f004222  50                   PUSH EAX
5f004223  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f004229  8bf0                 MOV ESI,EAX
5f00422b  8b54243c             MOV EDX,dword ptr [ESP + 0x3c]
5f00422f  8d4c240c             LEA ECX,[ESP + 0xc]
5f004233  8b02                 MOV EAX,dword ptr [EDX]
5f004235  8b5a04               MOV EBX,dword ptr [EDX + 0x4]
5f004238  6a01                 PUSH 0x1
5f00423a  6a02                 PUSH 0x2
5f00423c  8901                 MOV dword ptr [ECX],EAX
5f00423e  8b4208               MOV EAX,dword ptr [EDX + 0x8]
5f004241  895904               MOV dword ptr [ECX + 0x4],EBX
5f004244  8b520c               MOV EDX,dword ptr [EDX + 0xc]
5f004247  894108               MOV dword ptr [ECX + 0x8],EAX
5f00424a  89510c               MOV dword ptr [ECX + 0xc],EDX
5f00424d  8d4c2414             LEA ECX,[ESP + 0x14]
5f004251  51                   PUSH ECX
5f004252  ff1554d2005f         CALL dword ptr [0x5f00d254]
5f004258  8b4c2428             MOV ECX,dword ptr [ESP + 0x28]
5f00425c  394c2418             CMP dword ptr [ESP + 0x18],ECX
5f004260  7d3d                 JGE 0x5f00429f
5f004262  8b442418             MOV EAX,dword ptr [ESP + 0x18]
5f004266  57                   PUSH EDI
5f004267  40                   INC EAX
5f004268  89442414             MOV dword ptr [ESP + 0x14],EAX
5f00426c  8d4101               LEA EAX,[ECX + 0x1]
5f00426f  8944241c             MOV dword ptr [ESP + 0x1c],EAX
5f004273  ff1558d2005f         CALL dword ptr [0x5f00d258]
5f004279  8bf8                 MOV EDI,EAX
5f00427b  8b1d8cd2005f         MOV EBX,dword ptr [0x5f00d28c]
5f004281  8d44240c             LEA EAX,[ESP + 0xc]
5f004285  50                   PUSH EAX
5f004286  57                   PUSH EDI
5f004287  ffd3                 CALL EBX
5f004289  8d4c2414             LEA ECX,[ESP + 0x14]
5f00428d  51                   PUSH ECX
5f00428e  57                   PUSH EDI
5f00428f  ffd3                 CALL EBX
5f004291  8d44240c             LEA EAX,[ESP + 0xc]
5f004295  6a01                 PUSH 0x1
5f004297  50                   PUSH EAX
5f004298  57                   PUSH EDI
5f004299  ff1588d2005f         CALL dword ptr [0x5f00d288]
5f00429f  8bc6                 MOV EAX,ESI
5f0042a1  5f                   POP EDI
5f0042a2  5e                   POP ESI
5f0042a3  5b                   POP EBX
5f0042a4  83c420               ADD ESP,0x20
5f0042a7  c3                   RET
5f0042a8  8b44243c             MOV EAX,dword ptr [ESP + 0x3c]
5f0042ac  5f                   POP EDI
5f0042ad  5e                   POP ESI
5f0042ae  5b                   POP EBX
5f0042af  c70001000000         MOV dword ptr [EAX],0x1
5f0042b5  b8e9030000           MOV EAX,0x3e9
5f0042ba  83c420               ADD ESP,0x20
5f0042bd  c3                   RET
; undefined 2 bytes at 5f0042be

; ==== FUNCTION ListWndProc3d entry=5f0042c0 sig=undefined __stdcall ListWndProc3d(HWND param_1, uint param_2, WPARAM param_3, LONG * param_4)
5f0042c0  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f0042c4  6a01                 PUSH 0x1
5f0042c6  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
5f0042ca  50                   PUSH EAX
5f0042cb  8b542410             MOV EDX,dword ptr [ESP + 0x10]
5f0042cf  51                   PUSH ECX
5f0042d0  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f0042d4  52                   PUSH EDX
5f0042d5  50                   PUSH EAX
5f0042d6  e8b5fdffff           CALL 0x5f004090
5f0042db  83c414               ADD ESP,0x14
5f0042de  c21000               RET 0x10
; undefined 15 bytes at 5f0042e1

; ==== FUNCTION ComboWndProc3d entry=5f0042f0 sig=uint __stdcall ComboWndProc3d(HWND param_1, uint param_2, WPARAM param_3, undefined4 * param_4)
5f0042f0  8b4c2408             MOV ECX,dword ptr [ESP + 0x8]
5f0042f4  81f943190000         CMP ECX,0x1943
5f0042fa  7208                 JC 0x5f004304
5f0042fc  81f944190000         CMP ECX,0x1944
5f004302  761d                 JBE 0x5f004321
5f004304  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f004308  6a03                 PUSH 0x3
5f00430a  8b542410             MOV EDX,dword ptr [ESP + 0x10]
5f00430e  50                   PUSH EAX
5f00430f  52                   PUSH EDX
5f004310  51                   PUSH ECX
5f004311  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
5f004315  51                   PUSH ECX
5f004316  e8f5fbffff           CALL 0x5f003f10
5f00431b  83c414               ADD ESP,0x14
5f00431e  c21000               RET 0x10
5f004321  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f004325  c70001000000         MOV dword ptr [EAX],0x1
5f00432b  b8eb030000           MOV EAX,0x3eb
5f004330  c21000               RET 0x10
; undefined 13 bytes at 5f004333

; ==== FUNCTION FUN_5f004340 entry=5f004340 sig=undefined __cdecl FUN_5f004340(HWND param_1, HDC param_2, LPRECT param_3, uint param_4)
5f004340  55                   PUSH EBP
5f004341  8bec                 MOV EBP,ESP
5f004343  83ec08               SUB ESP,0x8
5f004346  53                   PUSH EBX
5f004347  56                   PUSH ESI
5f004348  57                   PUSH EDI
5f004349  8b7510               MOV ESI,dword ptr [EBP + 0x10]
5f00434c  682100f000           PUSH 0xf00021
5f004351  8b5604               MOV EDX,dword ptr [ESI + 0x4]
5f004354  8b0e                 MOV ECX,dword ptr [ESI]
5f004356  8b460c               MOV EAX,dword ptr [ESI + 0xc]
5f004359  2bc2                 SUB EAX,EDX
5f00435b  50                   PUSH EAX
5f00435c  8b4608               MOV EAX,dword ptr [ESI + 0x8]
5f00435f  2bc1                 SUB EAX,ECX
5f004361  50                   PUSH EAX
5f004362  52                   PUSH EDX
5f004363  51                   PUSH ECX
5f004364  8b4d0c               MOV ECX,dword ptr [EBP + 0xc]
5f004367  51                   PUSH ECX
5f004368  ff15b4d1005f         CALL dword ptr [0x5f00d1b4]
5f00436e  8b7d08               MOV EDI,dword ptr [EBP + 0x8]
5f004371  57                   PUSH EDI
5f004372  ff15c8d2005f         CALL dword ptr [0x5f00d2c8]
5f004378  8bd8                 MOV EBX,EAX
5f00437a  8d04450d000000       LEA EAX,[EAX*0x2 + 0xd]
5f004381  83e0fc               AND EAX,0xfffffffc
5f004384  e8d3050000           CALL 0x5f00495c
5f004389  8965fc               MOV dword ptr [EBP + -0x4],ESP
5f00438c  837dfc00             CMP dword ptr [EBP + -0x4],0x0
5f004390  747a                 JZ 0x5f00440c
5f004392  83c304               ADD EBX,0x4
5f004395  8b45fc               MOV EAX,dword ptr [EBP + -0x4]
5f004398  53                   PUSH EBX
5f004399  50                   PUSH EAX
5f00439a  57                   PUSH EDI
5f00439b  ff15acd2005f         CALL dword ptr [0x5f00d2ac]
5f0043a1  85c0                 TEST EAX,EAX
5f0043a3  7467                 JZ 0x5f00440c
5f0043a5  66bb4001             MOV BX,0x140
5f0043a9  8b7d14               MOV EDI,dword ptr [EBP + 0x14]
5f0043ac  8bc7                 MOV EAX,EDI
5f0043ae  240f                 AND AL,0xf
5f0043b0  3c0c                 CMP AL,0xc
5f0043b2  740b                 JZ 0x5f0043bf
5f0043b4  8bdf                 MOV EBX,EDI
5f0043b6  6683e30f             AND BX,0xf
5f0043ba  6681cb5001           OR BX,0x150
5f0043bf  f7c780000000         TEST EDI,0x80
5f0043c5  7403                 JZ 0x5f0043ca
5f0043c7  80cf08               OR BH,0x8
5f0043ca  81e700000008         AND EDI,0x8000000
5f0043d0  7413                 JZ 0x5f0043e5
5f0043d2  a17c52005f           MOV EAX,[0x5f00527c]
5f0043d7  8b4d0c               MOV ECX,dword ptr [EBP + 0xc]
5f0043da  50                   PUSH EAX
5f0043db  51                   PUSH ECX
5f0043dc  ff15d4d1005f         CALL dword ptr [0x5f00d1d4]
5f0043e2  8945f8               MOV dword ptr [EBP + -0x8],EAX
5f0043e5  8b4dfc               MOV ECX,dword ptr [EBP + -0x4]
5f0043e8  8b550c               MOV EDX,dword ptr [EBP + 0xc]
5f0043eb  0fb7c3               MOVZX EAX,BX
5f0043ee  50                   PUSH EAX
5f0043ef  56                   PUSH ESI
5f0043f0  6aff                 PUSH -0x1
5f0043f2  51                   PUSH ECX
5f0043f3  52                   PUSH EDX
5f0043f4  ff15a0d2005f         CALL dword ptr [0x5f00d2a0]
5f0043fa  85ff                 TEST EDI,EDI
5f0043fc  740e                 JZ 0x5f00440c
5f0043fe  8b45f8               MOV EAX,dword ptr [EBP + -0x8]
5f004401  8b4d0c               MOV ECX,dword ptr [EBP + 0xc]
5f004404  50                   PUSH EAX
5f004405  51                   PUSH ECX
5f004406  ff15d4d1005f         CALL dword ptr [0x5f00d1d4]
5f00440c  8d65ec               LEA ESP,[EBP + -0x14]
5f00440f  5f                   POP EDI
5f004410  5e                   POP ESI
5f004411  5b                   POP EBX
5f004412  8be5                 MOV ESP,EBP
5f004414  5d                   POP EBP
5f004415  c3                   RET
; undefined 10 bytes at 5f004416

; ==== FUNCTION FUN_5f004420 entry=5f004420 sig=undefined __cdecl FUN_5f004420(HWND param_1, HDC param_2)
5f004420  83ec14               SUB ESP,0x14
5f004423  53                   PUSH EBX
5f004424  56                   PUSH ESI
5f004425  8b742420             MOV ESI,dword ptr [ESP + 0x20]
5f004429  57                   PUSH EDI
5f00442a  55                   PUSH EBP
5f00442b  6af0                 PUSH -0x10
5f00442d  56                   PUSH ESI
5f00442e  ff15e4d2005f         CALL dword ptr [0x5f00d2e4]
5f004434  89442410             MOV dword ptr [ESP + 0x10],EAX
5f004438  a900000010           TEST EAX,0x10000000
5f00443d  0f8439010000         JZ 0x5f00457c
5f004443  8d442414             LEA EAX,[ESP + 0x14]
5f004447  50                   PUSH EAX
5f004448  56                   PUSH ESI
5f004449  ff15ccd2005f         CALL dword ptr [0x5f00d2cc]
5f00444f  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f004453  83e01f               AND EAX,0x1f
5f004456  83f812               CMP EAX,0x12
5f004459  0f871d010000         JA 0x5f00457c
5f00445f  33c9                 XOR ECX,ECX
5f004461  8a88ac45005f         MOV CL,byte ptr [EAX + 0x5f0045ac]
switchD_5f004467::switchD:
5f004467  ff248d8445005f       JMP dword ptr [ECX*0x4 + 0x5f004584]
switchD_5f004467::caseD_0:
5f00446e  6a00                 PUSH 0x0
5f004470  8b1de8d2005f         MOV EBX,dword ptr [0x5f00d2e8]
5f004476  6a00                 PUSH 0x0
5f004478  6a31                 PUSH 0x31
5f00447a  56                   PUSH ESI
5f00447b  ffd3                 CALL EBX
5f00447d  8be8                 MOV EBP,EAX
5f00447f  85ed                 TEST EBP,EBP
5f004481  7410                 JZ 0x5f004493
5f004483  8b7c242c             MOV EDI,dword ptr [ESP + 0x2c]
5f004487  55                   PUSH EBP
5f004488  57                   PUSH EDI
5f004489  ff15ccd1005f         CALL dword ptr [0x5f00d1cc]
5f00448f  8be8                 MOV EBP,EAX
5f004491  eb04                 JMP 0x5f004497
5f004493  8b7c242c             MOV EDI,dword ptr [ESP + 0x2c]
5f004497  6a02                 PUSH 0x2
5f004499  57                   PUSH EDI
5f00449a  ff15e4d1005f         CALL dword ptr [0x5f00d1e4]
5f0044a0  56                   PUSH ESI
5f0044a1  57                   PUSH EDI
5f0044a2  6838010000           PUSH 0x138
5f0044a7  56                   PUSH ESI
5f0044a8  ff1558d2005f         CALL dword ptr [0x5f00d258]
5f0044ae  50                   PUSH EAX
5f0044af  ffd3                 CALL EBX
5f0044b1  8bd8                 MOV EBX,EAX
5f0044b3  85db                 TEST EBX,EBX
5f0044b5  740a                 JZ 0x5f0044c1
5f0044b7  53                   PUSH EBX
5f0044b8  57                   PUSH EDI
5f0044b9  ff15ccd1005f         CALL dword ptr [0x5f00d1cc]
5f0044bf  8bd8                 MOV EBX,EAX
5f0044c1  8b442410             MOV EAX,dword ptr [ESP + 0x10]
5f0044c5  8d4c2414             LEA ECX,[ESP + 0x14]
5f0044c9  50                   PUSH EAX
5f0044ca  51                   PUSH ECX
5f0044cb  57                   PUSH EDI
5f0044cc  56                   PUSH ESI
5f0044cd  e86efeffff           CALL 0x5f004340
5f0044d2  83c410               ADD ESP,0x10
5f0044d5  85ed                 TEST EBP,EBP
5f0044d7  7408                 JZ 0x5f0044e1
5f0044d9  55                   PUSH EBP
5f0044da  57                   PUSH EDI
5f0044db  ff15ccd1005f         CALL dword ptr [0x5f00d1cc]
5f0044e1  85db                 TEST EBX,EBX
5f0044e3  0f8493000000         JZ 0x5f00457c
5f0044e9  53                   PUSH EBX
5f0044ea  57                   PUSH EDI
5f0044eb  ff15ccd1005f         CALL dword ptr [0x5f00d1cc]
5f0044f1  5d                   POP EBP
5f0044f2  5f                   POP EDI
5f0044f3  5e                   POP ESI
5f0044f4  5b                   POP EBX
5f0044f5  83c414               ADD ESP,0x14
5f0044f8  c3                   RET
switchD_5f004467::caseD_4:
5f0044f9  8d442414             LEA EAX,[ESP + 0x14]
5f0044fd  6a0f                 PUSH 0xf
5f0044ff  8b7c2430             MOV EDI,dword ptr [ESP + 0x30]
5f004503  6a00                 PUSH 0x0
5f004505  6a02                 PUSH 0x2
5f004507  50                   PUSH EAX
5f004508  57                   PUSH EDI
5f004509  e832ceffff           CALL 0x5f001340
5f00450e  83c414               ADD ESP,0x14
5f004511  5d                   POP EBP
5f004512  5f                   POP EDI
5f004513  5e                   POP ESI
5f004514  5b                   POP EBX
5f004515  83c414               ADD ESP,0x14
5f004518  c3                   RET
switchD_5f004467::caseD_5:
5f004519  8d442414             LEA EAX,[ESP + 0x14]
5f00451d  6a0f                 PUSH 0xf
5f00451f  8b7c2430             MOV EDI,dword ptr [ESP + 0x30]
5f004523  6a00                 PUSH 0x0
5f004525  ff44241c             INC dword ptr [ESP + 0x1c]
5f004529  6a00                 PUSH 0x0
5f00452b  ff442424             INC dword ptr [ESP + 0x24]
5f00452f  50                   PUSH EAX
5f004530  57                   PUSH EDI
5f004531  e80aceffff           CALL 0x5f001340
5f004536  8d4c2428             LEA ECX,[ESP + 0x28]
5f00453a  83c414               ADD ESP,0x14
5f00453d  6aff                 PUSH -0x1
5f00453f  6aff                 PUSH -0x1
5f004541  51                   PUSH ECX
5f004542  ff1550d2005f         CALL dword ptr [0x5f00d250]
5f004548  8d4c2414             LEA ECX,[ESP + 0x14]
5f00454c  6a0f                 PUSH 0xf
5f00454e  6a02                 PUSH 0x2
5f004550  6a02                 PUSH 0x2
5f004552  51                   PUSH ECX
5f004553  57                   PUSH EDI
5f004554  e8e7cdffff           CALL 0x5f001340
5f004559  83c414               ADD ESP,0x14
5f00455c  5d                   POP EBP
5f00455d  5f                   POP EDI
5f00455e  5e                   POP ESI
5f00455f  5b                   POP EBX
5f004560  83c414               ADD ESP,0x14
5f004563  c3                   RET
switchD_5f004467::caseD_6:
5f004564  8d442414             LEA EAX,[ESP + 0x14]
5f004568  6a0f                 PUSH 0xf
5f00456a  8b7c2430             MOV EDI,dword ptr [ESP + 0x30]
5f00456e  6a02                 PUSH 0x2
5f004570  6a00                 PUSH 0x0
5f004572  50                   PUSH EAX
5f004573  57                   PUSH EDI
5f004574  e8c7cdffff           CALL 0x5f001340
5f004579  83c414               ADD ESP,0x14
switchD_5f004467::caseD_3:
5f00457c  5d                   POP EBP
5f00457d  5f                   POP EDI
5f00457e  5e                   POP ESI
5f00457f  5b                   POP EBX
5f004580  83c414               ADD ESP,0x14
5f004583  c3                   RET
switchD_5f004467::switchdataD_5f004584:
5f004584  addr 5f00446e
5f004588  addr 5f0044f9
5f00458c  addr 5f004519
5f004590  addr 5f004564
5f004594  addr 5f0044f9
5f004598  addr 5f004519
5f00459c  addr 5f004564
5f0045a0  addr 5f00446e
5f0045a4  addr 5f004519
5f0045a8  addr 5f00457c
switchD_5f004467::switchdataD_5f0045ac:
5f0045ac  db 0h
5f0045ad  db 0h
5f0045ae  db 0h
5f0045af  db 9h
5f0045b0  db 1h
5f0045b1  db 2h
5f0045b2  db 3h
5f0045b3  db 4h
5f0045b4  db 5h
5f0045b5  db 6h
5f0045b6  db 9h
5f0045b7  db 9h
5f0045b8  db 7h
5f0045b9  db 9h
5f0045ba  db 9h
5f0045bb  db 9h
5f0045bc  db 8h
5f0045bd  db 8h
5f0045be  db 8h
; undefined 1 bytes at 5f0045bf

; ==== FUNCTION StaticWndProc3d entry=5f0045c0 sig=LRESULT __stdcall StaticWndProc3d(HWND param_1, uint param_2, HDC param_3, undefined4 * param_4)
5f0045c0  83ec40               SUB ESP,0x40
5f0045c3  53                   PUSH EBX
5f0045c4  56                   PUSH ESI
5f0045c5  57                   PUSH EDI
5f0045c6  8b7c2454             MOV EDI,dword ptr [ESP + 0x54]
5f0045ca  81ff82000000         CMP EDI,0x82
5f0045d0  7523                 JNZ 0x5f0045f5
5f0045d2  8b44245c             MOV EAX,dword ptr [ESP + 0x5c]
5f0045d6  6a04                 PUSH 0x4
5f0045d8  8b5c245c             MOV EBX,dword ptr [ESP + 0x5c]
5f0045dc  50                   PUSH EAX
5f0045dd  8b742458             MOV ESI,dword ptr [ESP + 0x58]
5f0045e1  53                   PUSH EBX
5f0045e2  57                   PUSH EDI
5f0045e3  56                   PUSH ESI
5f0045e4  e877ccffff           CALL 0x5f001260
5f0045e9  83c414               ADD ESP,0x14
5f0045ec  5f                   POP EDI
5f0045ed  5e                   POP ESI
5f0045ee  5b                   POP EBX
5f0045ef  83c440               ADD ESP,0x40
5f0045f2  c21000               RET 0x10
5f0045f5  33c0                 XOR EAX,EAX
5f0045f7  8b742450             MOV ESI,dword ptr [ESP + 0x50]
5f0045fb  66a15452005f         MOV AX,[0x5f005254]
5f004601  50                   PUSH EAX
5f004602  56                   PUSH ESI
5f004603  ff1500d3005f         CALL dword ptr [0x5f00d300]
5f004609  85c0                 TEST EAX,EAX
5f00460b  7427                 JZ 0x5f004634
5f00460d  8b44245c             MOV EAX,dword ptr [ESP + 0x5c]
5f004611  8b5c2458             MOV EBX,dword ptr [ESP + 0x58]
5f004615  50                   PUSH EAX
5f004616  53                   PUSH EBX
5f004617  57                   PUSH EDI
5f004618  56                   PUSH ESI
5f004619  6a04                 PUSH 0x4
5f00461b  56                   PUSH ESI
5f00461c  e8ffc9ffff           CALL 0x5f001020
5f004621  83c408               ADD ESP,0x8
5f004624  50                   PUSH EAX
5f004625  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f00462b  5f                   POP EDI
5f00462c  5e                   POP ESI
5f00462d  5b                   POP EBX
5f00462e  83c440               ADD ESP,0x40
5f004631  c21000               RET 0x10
5f004634  83ff0f               CMP EDI,0xf
5f004637  7709                 JA 0x5f004642
5f004639  7472                 JZ 0x5f0046ad
5f00463b  83ff0a               CMP EDI,0xa
5f00463e  743d                 JZ 0x5f00467d
5f004640  eb14                 JMP 0x5f004656
5f004642  81ff43190000         CMP EDI,0x1943
5f004648  720c                 JC 0x5f004656
5f00464a  81ff44190000         CMP EDI,0x1944
5f004650  0f869e000000         JBE 0x5f0046f4
5f004656  8b44245c             MOV EAX,dword ptr [ESP + 0x5c]
5f00465a  8b5c2458             MOV EBX,dword ptr [ESP + 0x58]
5f00465e  50                   PUSH EAX
5f00465f  53                   PUSH EBX
5f004660  57                   PUSH EDI
5f004661  56                   PUSH ESI
5f004662  6a04                 PUSH 0x4
5f004664  56                   PUSH ESI
5f004665  e8b6c9ffff           CALL 0x5f001020
5f00466a  83c408               ADD ESP,0x8
5f00466d  50                   PUSH EAX
5f00466e  ff15d0d2005f         CALL dword ptr [0x5f00d2d0]
5f004674  5f                   POP EDI
5f004675  5e                   POP ESI
5f004676  5b                   POP EBX
5f004677  83c440               ADD ESP,0x40
5f00467a  c21000               RET 0x10
5f00467d  56                   PUSH ESI
5f00467e  ff1578d2005f         CALL dword ptr [0x5f00d278]
5f004684  50                   PUSH EAX
5f004685  8bf8                 MOV EDI,EAX
5f004687  56                   PUSH ESI
5f004688  e863ceffff           CALL 0x5f0014f0
5f00468d  83c408               ADD ESP,0x8
5f004690  57                   PUSH EDI
5f004691  56                   PUSH ESI
5f004692  e889fdffff           CALL 0x5f004420
5f004697  83c408               ADD ESP,0x8
5f00469a  57                   PUSH EDI
5f00469b  56                   PUSH ESI
5f00469c  ff154cd2005f         CALL dword ptr [0x5f00d24c]
5f0046a2  33c0                 XOR EAX,EAX
5f0046a4  5f                   POP EDI
5f0046a5  5e                   POP ESI
5f0046a6  5b                   POP EBX
5f0046a7  83c440               ADD ESP,0x40
5f0046aa  c21000               RET 0x10
5f0046ad  8b5c2458             MOV EBX,dword ptr [ESP + 0x58]
5f0046b1  8bfb                 MOV EDI,EBX
5f0046b3  85ff                 TEST EDI,EDI
5f0046b5  7518                 JNZ 0x5f0046cf
5f0046b7  8d44240c             LEA EAX,[ESP + 0xc]
5f0046bb  50                   PUSH EAX
5f0046bc  56                   PUSH ESI
5f0046bd  ff15b8d2005f         CALL dword ptr [0x5f00d2b8]
5f0046c3  50                   PUSH EAX
5f0046c4  8bf8                 MOV EDI,EAX
5f0046c6  56                   PUSH ESI
5f0046c7  e824ceffff           CALL 0x5f0014f0
5f0046cc  83c408               ADD ESP,0x8
5f0046cf  57                   PUSH EDI
5f0046d0  56                   PUSH ESI
5f0046d1  e84afdffff           CALL 0x5f004420
5f0046d6  83c408               ADD ESP,0x8
5f0046d9  85db                 TEST EBX,EBX
5f0046db  750c                 JNZ 0x5f0046e9
5f0046dd  8d44240c             LEA EAX,[ESP + 0xc]
5f0046e1  50                   PUSH EAX
5f0046e2  56                   PUSH ESI
5f0046e3  ff15b4d2005f         CALL dword ptr [0x5f00d2b4]
5f0046e9  33c0                 XOR EAX,EAX
5f0046eb  5f                   POP EDI
5f0046ec  5e                   POP ESI
5f0046ed  5b                   POP EBX
5f0046ee  83c440               ADD ESP,0x40
5f0046f1  c21000               RET 0x10
5f0046f4  8b44245c             MOV EAX,dword ptr [ESP + 0x5c]
5f0046f8  5f                   POP EDI
5f0046f9  5e                   POP ESI
5f0046fa  5b                   POP EBX
5f0046fb  c70001000000         MOV dword ptr [EAX],0x1
5f004701  b8ec030000           MOV EAX,0x3ec
5f004706  83c440               ADD ESP,0x40
5f004709  c21000               RET 0x10
; undefined 4 bytes at 5f00470c

; ==== FUNCTION entry entry=5f004710 sig=undefined4 __stdcall entry(undefined4 param_1, int param_2)
5f004710  83ec04               SUB ESP,0x4
5f004713  837c240c01           CMP dword ptr [ESP + 0xc],0x1
5f004718  56                   PUSH ESI
5f004719  0f85bd000000         JNZ 0x5f0047dc
5f00471f  6850c2005f           PUSH 0x5f00c250
5f004724  ff15f4d1005f         CALL dword ptr [0x5f00d1f4]
5f00472a  6834c2005f           PUSH 0x5f00c234
5f00472f  50                   PUSH EAX
5f004730  ff15f8d1005f         CALL dword ptr [0x5f00d1f8]
5f004736  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
5f00473a  89442404             MOV dword ptr [ESP + 0x4],EAX
5f00473e  85c0                 TEST EAX,EAX
5f004740  7405                 JZ 0x5f004747
5f004742  56                   PUSH ESI
5f004743  ff542408             CALL dword ptr [ESP + 0x8]
5f004747  682052005f           PUSH 0x5f005220
5f00474c  ff1508d2005f         CALL dword ptr [0x5f00d208]
5f004752  682052005f           PUSH 0x5f005220
5f004757  ff1530d2005f         CALL dword ptr [0x5f00d230]
5f00475d  89355c52005f         MOV dword ptr [0x5f00525c],ESI
5f004763  89355852005f         MOV dword ptr [0x5f005258],ESI
5f004769  ff1518d2005f         CALL dword ptr [0x5f00d218]
5f00476f  660fb6c8             MOVZX CX,AL
5f004773  66c1e108             SHL CX,0x8
5f004777  660fb6d4             MOVZX DX,AH
5f00477b  660bca               OR CX,DX
5f00477e  a900000080           TEST EAX,0x80000000
5f004783  66890d6052005f       MOV word ptr [0x5f005260],CX
5f00478a  7410                 JZ 0x5f00479c
5f00478c  66c7056252005f1000   MOV word ptr [0x5f005262],0x10
5f004795  6681f95f03           CMP CX,0x35f
5f00479a  7209                 JC 0x5f0047a5
5f00479c  66c7056252005f2000   MOV word ptr [0x5f005262],0x20
5f0047a5  6a07                 PUSH 0x7
5f0047a7  8b3574d2005f         MOV ESI,dword ptr [0x5f00d274]
5f0047ad  ffd6                 CALL ESI
5f0047af  48                   DEC EAX
5f0047b0  6a08                 PUSH 0x8
5f0047b2  a394a3005f           MOV [0x5f00a394],EAX
5f0047b7  ffd6                 CALL ESI
5f0047b9  48                   DEC EAX
5f0047ba  6a04                 PUSH 0x4
5f0047bc  a398a3005f           MOV [0x5f00a398],EAX
5f0047c1  ffd6                 CALL ESI
5f0047c3  6a1e                 PUSH 0x1e
5f0047c5  a39ca3005f           MOV [0x5f00a39c],EAX
5f0047ca  ffd6                 CALL ESI
5f0047cc  682052005f           PUSH 0x5f005220
5f0047d1  a3a0a3005f           MOV [0x5f00a3a0],EAX
5f0047d6  ff1528d2005f         CALL dword ptr [0x5f00d228]
5f0047dc  b801000000           MOV EAX,0x1
5f0047e1  5e                   POP ESI
5f0047e2  83c404               ADD ESP,0x4
5f0047e5  c20c00               RET 0xc
; undefined 8 bytes at 5f0047e8

; ==== FUNCTION FUN_5f0047f0 entry=5f0047f0 sig=HBITMAP __stdcall FUN_5f0047f0(HMODULE param_1, LPCWSTR param_2, uint param_3, uint param_4, uint param_5, uint param_6, uint param_7, uint param_8)
5f0047f0  8b442408             MOV EAX,dword ptr [ESP + 0x8]
5f0047f4  53                   PUSH EBX
5f0047f5  56                   PUSH ESI
5f0047f6  57                   PUSH EDI
5f0047f7  8b742410             MOV ESI,dword ptr [ESP + 0x10]
5f0047fb  55                   PUSH EBP
5f0047fc  6a02                 PUSH 0x2
5f0047fe  50                   PUSH EAX
5f0047ff  56                   PUSH ESI
5f004800  ff1504d2005f         CALL dword ptr [0x5f00d204]
5f004806  8bf8                 MOV EDI,EAX
5f004808  85ff                 TEST EDI,EDI
5f00480a  7509                 JNZ 0x5f004815
5f00480c  33c0                 XOR EAX,EAX
5f00480e  5d                   POP EBP
5f00480f  5f                   POP EDI
5f004810  5e                   POP ESI
5f004811  5b                   POP EBX
5f004812  c22000               RET 0x20
5f004815  57                   PUSH EDI
5f004816  56                   PUSH ESI
5f004817  ff1500d2005f         CALL dword ptr [0x5f00d200]
5f00481d  8bd8                 MOV EBX,EAX
5f00481f  57                   PUSH EDI
5f004820  56                   PUSH ESI
5f004821  ff1538d2005f         CALL dword ptr [0x5f00d238]
5f004827  8bf0                 MOV ESI,EAX
5f004829  85f6                 TEST ESI,ESI
5f00482b  7509                 JNZ 0x5f004836
5f00482d  33c0                 XOR EAX,EAX
5f00482f  5d                   POP EBP
5f004830  5f                   POP EDI
5f004831  5e                   POP ESI
5f004832  5b                   POP EBX
5f004833  c22000               RET 0x20
5f004836  53                   PUSH EBX
5f004837  6a40                 PUSH 0x40
5f004839  ff1534d2005f         CALL dword ptr [0x5f00d234]
5f00483f  8be8                 MOV EBP,EAX
5f004841  85ed                 TEST EBP,EBP
5f004843  7509                 JNZ 0x5f00484e
5f004845  33c0                 XOR EAX,EAX
5f004847  5d                   POP EBP
5f004848  5f                   POP EDI
5f004849  5e                   POP ESI
5f00484a  5b                   POP EBX
5f00484b  c22000               RET 0x20
5f00484e  8bfd                 MOV EDI,EBP
5f004850  8bcb                 MOV ECX,EBX
5f004852  c1e902               SHR ECX,0x2
5f004855  f3a5                 MOVSD.REP ES:EDI,ESI
5f004857  8bcb                 MOV ECX,EBX
5f004859  83e103               AND ECX,0x3
5f00485c  f3a4                 MOVSB.REP ES:EDI,ESI
5f00485e  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
5f004862  33c9                 XOR ECX,ECX
5f004864  8acc                 MOV CL,AH
5f004866  33d2                 XOR EDX,EDX
5f004868  c1e108               SHL ECX,0x8
5f00486b  8ad0                 MOV DL,AL
5f00486d  c1e210               SHL EDX,0x10
5f004870  c1e810               SHR EAX,0x10
5f004873  0bca                 OR ECX,EDX
5f004875  33d2                 XOR EDX,EDX
5f004877  8ad0                 MOV DL,AL
5f004879  8b442424             MOV EAX,dword ptr [ESP + 0x24]
5f00487d  0bca                 OR ECX,EDX
5f00487f  33d2                 XOR EDX,EDX
5f004881  8ad0                 MOV DL,AL
5f004883  894d28               MOV dword ptr [EBP + 0x28],ECX
5f004886  c1e210               SHL EDX,0x10
5f004889  33c9                 XOR ECX,ECX
5f00488b  8acc                 MOV CL,AH
5f00488d  c1e108               SHL ECX,0x8
5f004890  c1e810               SHR EAX,0x10
5f004893  0bca                 OR ECX,EDX
5f004895  33d2                 XOR EDX,EDX
5f004897  8ad0                 MOV DL,AL
5f004899  8b442420             MOV EAX,dword ptr [ESP + 0x20]
5f00489d  0bca                 OR ECX,EDX
5f00489f  33d2                 XOR EDX,EDX
5f0048a1  8ad0                 MOV DL,AL
5f0048a3  894d44               MOV dword ptr [EBP + 0x44],ECX
5f0048a6  c1e210               SHL EDX,0x10
5f0048a9  33c9                 XOR ECX,ECX
5f0048ab  8acc                 MOV CL,AH
5f0048ad  c1e108               SHL ECX,0x8
5f0048b0  c1e810               SHR EAX,0x10
5f0048b3  0bca                 OR ECX,EDX
5f0048b5  33d2                 XOR EDX,EDX
5f0048b7  8ad0                 MOV DL,AL
5f0048b9  8b442428             MOV EAX,dword ptr [ESP + 0x28]
5f0048bd  0bca                 OR ECX,EDX
5f0048bf  33d2                 XOR EDX,EDX
5f0048c1  8ad0                 MOV DL,AL
5f0048c3  894d48               MOV dword ptr [EBP + 0x48],ECX
5f0048c6  c1e210               SHL EDX,0x10
5f0048c9  33c9                 XOR ECX,ECX
5f0048cb  8acc                 MOV CL,AH
5f0048cd  c1e108               SHL ECX,0x8
5f0048d0  c1e810               SHR EAX,0x10
5f0048d3  0bca                 OR ECX,EDX
5f0048d5  33d2                 XOR EDX,EDX
5f0048d7  8ad0                 MOV DL,AL
5f0048d9  0bca                 OR ECX,EDX
5f0048db  894d64               MOV dword ptr [EBP + 0x64],ECX
5f0048de  33c9                 XOR ECX,ECX
5f0048e0  8b44242c             MOV EAX,dword ptr [ESP + 0x2c]
5f0048e4  c1e810               SHR EAX,0x10
5f0048e7  8a4c242d             MOV CL,byte ptr [ESP + 0x2d]
5f0048eb  c1e108               SHL ECX,0x8
5f0048ee  33d2                 XOR EDX,EDX
5f0048f0  8ad0                 MOV DL,AL
5f0048f2  33c0                 XOR EAX,EAX
5f0048f4  0bca                 OR ECX,EDX
5f0048f6  8a44242c             MOV AL,byte ptr [ESP + 0x2c]
5f0048fa  c1e010               SHL EAX,0x10
5f0048fd  0bc8                 OR ECX,EAX
5f0048ff  8b442430             MOV EAX,dword ptr [ESP + 0x30]
5f004903  c1e810               SHR EAX,0x10
5f004906  33d2                 XOR EDX,EDX
5f004908  8ad0                 MOV DL,AL
5f00490a  894d54               MOV dword ptr [EBP + 0x54],ECX
5f00490d  33c9                 XOR ECX,ECX
5f00490f  33c0                 XOR EAX,EAX
5f004911  8a4c2431             MOV CL,byte ptr [ESP + 0x31]
5f004915  8a442430             MOV AL,byte ptr [ESP + 0x30]
5f004919  c1e108               SHL ECX,0x8
5f00491c  6a00                 PUSH 0x0
5f00491e  c1e010               SHL EAX,0x10
5f004921  0bca                 OR ECX,EDX
5f004923  0bc8                 OR ECX,EAX
5f004925  894d50               MOV dword ptr [EBP + 0x50],ECX
5f004928  ff1578d2005f         CALL dword ptr [0x5f00d278]
5f00492e  8bf8                 MOV EDI,EAX
5f004930  6a00                 PUSH 0x0
5f004932  55                   PUSH EBP
5f004933  8d4568               LEA EAX,[EBP + 0x68]
5f004936  50                   PUSH EAX
5f004937  6a04                 PUSH 0x4
5f004939  55                   PUSH EBP
5f00493a  57                   PUSH EDI
5f00493b  ff15b0d1005f         CALL dword ptr [0x5f00d1b0]
5f004941  8bf0                 MOV ESI,EAX
5f004943  57                   PUSH EDI
5f004944  6a00                 PUSH 0x0
5f004946  ff154cd2005f         CALL dword ptr [0x5f00d24c]
5f00494c  55                   PUSH EBP
5f00494d  ff15f0d1005f         CALL dword ptr [0x5f00d1f0]
5f004953  8bc6                 MOV EAX,ESI
5f004955  5d                   POP EBP
5f004956  5f                   POP EDI
5f004957  5e                   POP ESI
5f004958  5b                   POP EBX
5f004959  c22000               RET 0x20

; ==== FUNCTION FUN_5f00495c entry=5f00495c sig=undefined __stdcall FUN_5f00495c(void)
5f00495c  51                   PUSH ECX
5f00495d  8bcc                 MOV ECX,ESP
5f00495f  83c108               ADD ECX,0x8
5f004962  3d00100000           CMP EAX,0x1000
5f004967  7210                 JC 0x5f004979
5f004969  81e900100000         SUB ECX,0x1000
5f00496f  830900               OR dword ptr [ECX],0x0
5f004972  2d00100000           SUB EAX,0x1000
5f004977  ebe9                 JMP 0x5f004962
5f004979  2bc8                 SUB ECX,EAX
5f00497b  830900               OR dword ptr [ECX],0x0
5f00497e  8bc4                 MOV EAX,ESP
5f004980  8be1                 MOV ESP,ECX
5f004982  8b08                 MOV ECX,dword ptr [EAX]
5f004984  8b4004               MOV EAX,dword ptr [EAX + 0x4]
5f004987  ffe0                 JMP EAX
; undefined 1 bytes at 5f004989

; ==== FUNCTION KERNEL32.DLL::lstrcmpiW entry=5f00498a sig=int __stdcall lstrcmpiW(LPCWSTR lpString1, LPCWSTR lpString2)
5f00498a  ff253cd2005f         JMP dword ptr [0x5f00d23c]

; ==== FUNCTION KERNEL32.DLL::GetCurrentThreadId entry=5f004990 sig=DWORD __stdcall GetCurrentThreadId(void)
5f004990  ff2540d2005f         JMP dword ptr [0x5f00d240]

; ==== FUNCTION KERNEL32.DLL::lstrlenW entry=5f004996 sig=int __stdcall lstrlenW(LPCWSTR lpString)
5f004996  ff2544d2005f         JMP dword ptr [0x5f00d244]

; ==== FUNCTION KERNEL32.DLL::LeaveCriticalSection entry=5f00499c sig=void __stdcall LeaveCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
5f00499c  ff2528d2005f         JMP dword ptr [0x5f00d228]

; ==== FUNCTION KERNEL32.DLL::EnterCriticalSection entry=5f0049a2 sig=void __stdcall EnterCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
5f0049a2  ff2530d2005f         JMP dword ptr [0x5f00d230]

; ==== FUNCTION KERNEL32.DLL::GetProfileStringW entry=5f0049a8 sig=DWORD __stdcall GetProfileStringW(LPCWSTR lpAppName, LPCWSTR lpKeyName, LPCWSTR lpDefault, LPWSTR lpReturnedString, DWORD nSize)
5f0049a8  ff252cd2005f         JMP dword ptr [0x5f00d22c]

; ==== FUNCTION KERNEL32.DLL::GlobalAddAtomW entry=5f0049ae sig=ATOM __stdcall GlobalAddAtomW(LPCWSTR lpString)
5f0049ae  ff251cd2005f         JMP dword ptr [0x5f00d21c]

; ==== FUNCTION KERNEL32.DLL::GetWindowsDirectoryW entry=5f0049b4 sig=UINT __stdcall GetWindowsDirectoryW(LPWSTR lpBuffer, UINT uSize)
5f0049b4  ff2524d2005f         JMP dword ptr [0x5f00d224]

; ==== FUNCTION KERNEL32.DLL::GetSystemDirectoryW entry=5f0049ba sig=UINT __stdcall GetSystemDirectoryW(LPWSTR lpBuffer, UINT uSize)
5f0049ba  ff2520d2005f         JMP dword ptr [0x5f00d220]

; ==== FUNCTION KERNEL32.DLL::GetModuleFileNameW entry=5f0049c0 sig=DWORD __stdcall GetModuleFileNameW(HMODULE hModule, LPWSTR lpFilename, DWORD nSize)
5f0049c0  ff2510d2005f         JMP dword ptr [0x5f00d210]

; ==== FUNCTION KERNEL32.DLL::GetVersion entry=5f0049c6 sig=DWORD __stdcall GetVersion(void)
5f0049c6  ff2518d2005f         JMP dword ptr [0x5f00d218]

; ==== FUNCTION KERNEL32.DLL::GetEnvironmentVariableW entry=5f0049cc sig=DWORD __stdcall GetEnvironmentVariableW(LPCWSTR lpName, LPWSTR lpBuffer, DWORD nSize)
5f0049cc  ff2514d2005f         JMP dword ptr [0x5f00d214]

; ==== FUNCTION KERNEL32.DLL::GlobalDeleteAtom entry=5f0049d2 sig=ATOM __stdcall GlobalDeleteAtom(ATOM nAtom)
5f0049d2  ff25fcd1005f         JMP dword ptr [0x5f00d1fc]

; ==== FUNCTION KERNEL32.DLL::lstrcmpW entry=5f0049d8 sig=int __stdcall lstrcmpW(LPCWSTR lpString1, LPCWSTR lpString2)
5f0049d8  ff250cd2005f         JMP dword ptr [0x5f00d20c]

; ==== FUNCTION KERNEL32.DLL::InitializeCriticalSection entry=5f0049de sig=void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
5f0049de  ff2508d2005f         JMP dword ptr [0x5f00d208]

; ==== FUNCTION KERNEL32.DLL::GetProcAddress entry=5f0049e4 sig=FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
5f0049e4  ff25f8d1005f         JMP dword ptr [0x5f00d1f8]

; ==== FUNCTION KERNEL32.DLL::GetModuleHandleA entry=5f0049ea sig=HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)
5f0049ea  ff25f4d1005f         JMP dword ptr [0x5f00d1f4]

; ==== FUNCTION KERNEL32.DLL::GlobalFree entry=5f0049f0 sig=HGLOBAL __stdcall GlobalFree(HGLOBAL hMem)
5f0049f0  ff25f0d1005f         JMP dword ptr [0x5f00d1f0]

; ==== FUNCTION KERNEL32.DLL::GlobalAlloc entry=5f0049f6 sig=HGLOBAL __stdcall GlobalAlloc(UINT uFlags, SIZE_T dwBytes)
5f0049f6  ff2534d2005f         JMP dword ptr [0x5f00d234]

; ==== FUNCTION KERNEL32.DLL::LoadResource entry=5f0049fc sig=HGLOBAL __stdcall LoadResource(HMODULE hModule, HRSRC hResInfo)
5f0049fc  ff2538d2005f         JMP dword ptr [0x5f00d238]

; ==== FUNCTION KERNEL32.DLL::SizeofResource entry=5f004a02 sig=DWORD __stdcall SizeofResource(HMODULE hModule, HRSRC hResInfo)
5f004a02  ff2500d2005f         JMP dword ptr [0x5f00d200]

; ==== FUNCTION KERNEL32.DLL::FindResourceW entry=5f004a08 sig=HRSRC __stdcall FindResourceW(HMODULE hModule, LPCWSTR lpName, LPCWSTR lpType)
5f004a08  ff2504d2005f         JMP dword ptr [0x5f00d204]

; ==== FUNCTION USER32.DLL::GetPropW entry=5f004a0e sig=HANDLE __stdcall GetPropW(HWND hWnd, LPCWSTR lpString)
5f004a0e  ff2500d3005f         JMP dword ptr [0x5f00d300]

; ==== FUNCTION USER32.DLL::SetPropW entry=5f004a14 sig=BOOL __stdcall SetPropW(HWND hWnd, LPCWSTR lpString, HANDLE hData)
5f004a14  ff25fcd2005f         JMP dword ptr [0x5f00d2fc]

; ==== FUNCTION USER32.DLL::SetWindowLongW entry=5f004a1a sig=LONG __stdcall SetWindowLongW(HWND hWnd, int nIndex, LONG dwNewLong)
5f004a1a  ff25f8d2005f         JMP dword ptr [0x5f00d2f8]

; ==== FUNCTION USER32.DLL::SetWindowLongA entry=5f004a20 sig=LONG __stdcall SetWindowLongA(HWND hWnd, int nIndex, LONG dwNewLong)
5f004a20  ff25f4d2005f         JMP dword ptr [0x5f00d2f4]

; ==== FUNCTION USER32.DLL::GetClassNameW entry=5f004a26 sig=int __stdcall GetClassNameW(HWND hWnd, LPWSTR lpClassName, int nMaxCount)
5f004a26  ff25f0d2005f         JMP dword ptr [0x5f00d2f0]

; ==== FUNCTION USER32.DLL::IsWindowUnicode entry=5f004a2c sig=BOOL __stdcall IsWindowUnicode(HWND hWnd)
5f004a2c  ff25ecd2005f         JMP dword ptr [0x5f00d2ec]

; ==== FUNCTION USER32.DLL::SendMessageW entry=5f004a32 sig=LRESULT __stdcall SendMessageW(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
5f004a32  ff25e8d2005f         JMP dword ptr [0x5f00d2e8]

; ==== FUNCTION USER32.DLL::GetWindowLongW entry=5f004a38 sig=LONG __stdcall GetWindowLongW(HWND hWnd, int nIndex)
5f004a38  ff25e4d2005f         JMP dword ptr [0x5f00d2e4]

; ==== FUNCTION USER32.DLL::UnhookWindowsHookEx entry=5f004a3e sig=BOOL __stdcall UnhookWindowsHookEx(HHOOK hhk)
5f004a3e  ff25e0d2005f         JMP dword ptr [0x5f00d2e0]

; ==== FUNCTION USER32.DLL::CallNextHookEx entry=5f004a44 sig=LRESULT __stdcall CallNextHookEx(HHOOK hhk, int nCode, WPARAM wParam, LPARAM lParam)
5f004a44  ff25dcd2005f         JMP dword ptr [0x5f00d2dc]

; ==== FUNCTION USER32.DLL::SetWindowsHookExW entry=5f004a4a sig=HHOOK __stdcall SetWindowsHookExW(int idHook, HOOKPROC lpfn, HINSTANCE hmod, DWORD dwThreadId)
5f004a4a  ff25d8d2005f         JMP dword ptr [0x5f00d2d8]

; ==== FUNCTION USER32.DLL::RemovePropW entry=5f004a50 sig=HANDLE __stdcall RemovePropW(HWND hWnd, LPCWSTR lpString)
5f004a50  ff25d4d2005f         JMP dword ptr [0x5f00d2d4]

; ==== FUNCTION USER32.DLL::CallWindowProcW entry=5f004a56 sig=LRESULT __stdcall CallWindowProcW(WNDPROC lpPrevWndFunc, HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
5f004a56  ff25d0d2005f         JMP dword ptr [0x5f00d2d0]

; ==== FUNCTION USER32.DLL::GetClientRect entry=5f004a5c sig=BOOL __stdcall GetClientRect(HWND hWnd, LPRECT lpRect)
5f004a5c  ff25ccd2005f         JMP dword ptr [0x5f00d2cc]

; ==== FUNCTION USER32.DLL::CharNextW entry=5f004a62 sig=LPWSTR __stdcall CharNextW(LPCWSTR lpsz)
5f004a62  ff25a4d2005f         JMP dword ptr [0x5f00d2a4]

; ==== FUNCTION USER32.DLL::GetWindow entry=5f004a68 sig=HWND __stdcall GetWindow(HWND hWnd, UINT uCmd)
5f004a68  ff255cd2005f         JMP dword ptr [0x5f00d25c]

; ==== FUNCTION USER32.DLL::GetParent entry=5f004a6e sig=HWND __stdcall GetParent(HWND hWnd)
5f004a6e  ff2558d2005f         JMP dword ptr [0x5f00d258]

; ==== FUNCTION USER32.DLL::ReleaseDC entry=5f004a74 sig=int __stdcall ReleaseDC(HWND hWnd, HDC hDC)
5f004a74  ff254cd2005f         JMP dword ptr [0x5f00d24c]

; ==== FUNCTION USER32.DLL::OffsetRect entry=5f004a7a sig=BOOL __stdcall OffsetRect(LPRECT lprc, int dx, int dy)
5f004a7a  ff2550d2005f         JMP dword ptr [0x5f00d250]

; ==== FUNCTION USER32.DLL::InflateRect entry=5f004a80 sig=BOOL __stdcall InflateRect(LPRECT lprc, int dx, int dy)
5f004a80  ff2554d2005f         JMP dword ptr [0x5f00d254]

; ==== FUNCTION USER32.DLL::GetWindowRect entry=5f004a86 sig=BOOL __stdcall GetWindowRect(HWND hWnd, LPRECT lpRect)
5f004a86  ff2504d3005f         JMP dword ptr [0x5f00d304]

; ==== FUNCTION USER32.DLL::GetWindowDC entry=5f004a8c sig=HDC __stdcall GetWindowDC(HWND hWnd)
5f004a8c  ff2508d3005f         JMP dword ptr [0x5f00d308]

; ==== FUNCTION USER32.DLL::IsIconic entry=5f004a92 sig=BOOL __stdcall IsIconic(HWND hWnd)
5f004a92  ff2564d2005f         JMP dword ptr [0x5f00d264]

; ==== FUNCTION USER32.DLL::DefWindowProcW entry=5f004a98 sig=LRESULT __stdcall DefWindowProcW(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
5f004a98  ff2568d2005f         JMP dword ptr [0x5f00d268]

; ==== FUNCTION USER32.DLL::DefDlgProcW entry=5f004a9e sig=LRESULT __stdcall DefDlgProcW(HWND hDlg, UINT Msg, WPARAM wParam, LPARAM lParam)
5f004a9e  ff256cd2005f         JMP dword ptr [0x5f00d26c]

; ==== FUNCTION USER32.DLL::GetClassInfoW entry=5f004aa4 sig=BOOL __stdcall GetClassInfoW(HINSTANCE hInstance, LPCWSTR lpClassName, LPWNDCLASSW lpWndClass)
5f004aa4  ff2570d2005f         JMP dword ptr [0x5f00d270]

; ==== FUNCTION USER32.DLL::GetSystemMetrics entry=5f004aaa sig=int __stdcall GetSystemMetrics(int nIndex)
5f004aaa  ff2574d2005f         JMP dword ptr [0x5f00d274]

; ==== FUNCTION USER32.DLL::GetDC entry=5f004ab0 sig=HDC __stdcall GetDC(HWND hWnd)
5f004ab0  ff2578d2005f         JMP dword ptr [0x5f00d278]

; ==== FUNCTION USER32.DLL::CharPrevW entry=5f004ab6 sig=LPWSTR __stdcall CharPrevW(LPCWSTR lpszStart, LPCWSTR lpszCurrent)
5f004ab6  ff257cd2005f         JMP dword ptr [0x5f00d27c]

; ==== FUNCTION USER32.DLL::MessageBoxA entry=5f004abc sig=int __stdcall MessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType)
5f004abc  ff2580d2005f         JMP dword ptr [0x5f00d280]

; ==== FUNCTION USER32.DLL::GetSysColor entry=5f004ac2 sig=DWORD __stdcall GetSysColor(int nIndex)
5f004ac2  ff2584d2005f         JMP dword ptr [0x5f00d284]

; ==== FUNCTION USER32.DLL::InvalidateRect entry=5f004ac8 sig=BOOL __stdcall InvalidateRect(HWND hWnd, RECT * lpRect, BOOL bErase)
5f004ac8  ff2588d2005f         JMP dword ptr [0x5f00d288]

; ==== FUNCTION USER32.DLL::ScreenToClient entry=5f004ace sig=BOOL __stdcall ScreenToClient(HWND hWnd, LPPOINT lpPoint)
5f004ace  ff258cd2005f         JMP dword ptr [0x5f00d28c]

; ==== FUNCTION USER32.DLL::ValidateRect entry=5f004ad4 sig=BOOL __stdcall ValidateRect(HWND hWnd, RECT * lpRect)
5f004ad4  ff2590d2005f         JMP dword ptr [0x5f00d290]

; ==== FUNCTION USER32.DLL::DrawFocusRect entry=5f004ada sig=BOOL __stdcall DrawFocusRect(HDC hDC, RECT * lprc)
5f004ada  ff2594d2005f         JMP dword ptr [0x5f00d294]

; ==== FUNCTION USER32.DLL::IntersectRect entry=5f004ae0 sig=BOOL __stdcall IntersectRect(LPRECT lprcDst, RECT * lprcSrc1, RECT * lprcSrc2)
5f004ae0  ff2598d2005f         JMP dword ptr [0x5f00d298]

; ==== FUNCTION USER32.DLL::GetFocus entry=5f004ae6 sig=HWND __stdcall GetFocus(void)
5f004ae6  ff259cd2005f         JMP dword ptr [0x5f00d29c]

; ==== FUNCTION USER32.DLL::DrawTextW entry=5f004aec sig=int __stdcall DrawTextW(HDC hdc, LPCWSTR lpchText, int cchText, LPRECT lprc, UINT format)
5f004aec  ff25a0d2005f         JMP dword ptr [0x5f00d2a0]

; ==== FUNCTION USER32.DLL::IsWindowEnabled entry=5f004af2 sig=BOOL __stdcall IsWindowEnabled(HWND hWnd)
5f004af2  ff2560d2005f         JMP dword ptr [0x5f00d260]

; ==== FUNCTION USER32.DLL::ClientToScreen entry=5f004af8 sig=BOOL __stdcall ClientToScreen(HWND hWnd, LPPOINT lpPoint)
5f004af8  ff25a8d2005f         JMP dword ptr [0x5f00d2a8]

; ==== FUNCTION USER32.DLL::GetWindowTextW entry=5f004afe sig=int __stdcall GetWindowTextW(HWND hWnd, LPWSTR lpString, int nMaxCount)
5f004afe  ff25acd2005f         JMP dword ptr [0x5f00d2ac]

; ==== FUNCTION USER32.DLL::ExcludeUpdateRgn entry=5f004b04 sig=int __stdcall ExcludeUpdateRgn(HDC hDC, HWND hWnd)
5f004b04  ff25b0d2005f         JMP dword ptr [0x5f00d2b0]

; ==== FUNCTION USER32.DLL::EndPaint entry=5f004b0a sig=BOOL __stdcall EndPaint(HWND hWnd, PAINTSTRUCT * lpPaint)
5f004b0a  ff25b4d2005f         JMP dword ptr [0x5f00d2b4]

; ==== FUNCTION USER32.DLL::BeginPaint entry=5f004b10 sig=HDC __stdcall BeginPaint(HWND hWnd, LPPAINTSTRUCT lpPaint)
5f004b10  ff25b8d2005f         JMP dword ptr [0x5f00d2b8]

; ==== FUNCTION USER32.DLL::ShowCaret entry=5f004b16 sig=BOOL __stdcall ShowCaret(HWND hWnd)
5f004b16  ff25bcd2005f         JMP dword ptr [0x5f00d2bc]

; ==== FUNCTION USER32.DLL::MapWindowPoints entry=5f004b1c sig=int __stdcall MapWindowPoints(HWND hWndFrom, HWND hWndTo, LPPOINT lpPoints, UINT cPoints)
5f004b1c  ff25c0d2005f         JMP dword ptr [0x5f00d2c0]

; ==== FUNCTION USER32.DLL::HideCaret entry=5f004b22 sig=BOOL __stdcall HideCaret(HWND hWnd)
5f004b22  ff25c4d2005f         JMP dword ptr [0x5f00d2c4]

; ==== FUNCTION USER32.DLL::GetWindowTextLengthW entry=5f004b28 sig=int __stdcall GetWindowTextLengthW(HWND hWnd)
5f004b28  ff25c8d2005f         JMP dword ptr [0x5f00d2c8]

; ==== FUNCTION GDI32.DLL::DeleteObject entry=5f004b2e sig=BOOL __stdcall DeleteObject(HGDIOBJ ho)
5f004b2e  ff25bcd1005f         JMP dword ptr [0x5f00d1bc]

; ==== FUNCTION GDI32.DLL::PatBlt entry=5f004b34 sig=BOOL __stdcall PatBlt(HDC hdc, int x, int y, int w, int h, DWORD rop)
5f004b34  ff25b4d1005f         JMP dword ptr [0x5f00d1b4]

; ==== FUNCTION GDI32.DLL::SetBkColor entry=5f004b3a sig=COLORREF __stdcall SetBkColor(HDC hdc, COLORREF color)
5f004b3a  ff25b8d1005f         JMP dword ptr [0x5f00d1b8]

; ==== FUNCTION GDI32.DLL::ExtTextOutW entry=5f004b40 sig=BOOL __stdcall ExtTextOutW(HDC hdc, int x, int y, UINT options, RECT * lprect, LPCWSTR lpString, UINT c, INT * lpDx)
5f004b40  ff25c8d1005f         JMP dword ptr [0x5f00d1c8]

; ==== FUNCTION GDI32.DLL::IntersectClipRect entry=5f004b46 sig=int __stdcall IntersectClipRect(HDC hdc, int left, int top, int right, int bottom)
5f004b46  ff25c0d1005f         JMP dword ptr [0x5f00d1c0]

; ==== FUNCTION GDI32.DLL::GetTextExtentPointW entry=5f004b4c sig=BOOL __stdcall GetTextExtentPointW(HDC hdc, LPCWSTR lpString, int c, LPSIZE lpsz)
5f004b4c  ff25c4d1005f         JMP dword ptr [0x5f00d1c4]

; ==== FUNCTION GDI32.DLL::SetTextColor entry=5f004b52 sig=COLORREF __stdcall SetTextColor(HDC hdc, COLORREF color)
5f004b52  ff25d4d1005f         JMP dword ptr [0x5f00d1d4]

; ==== FUNCTION GDI32.DLL::SelectObject entry=5f004b58 sig=HGDIOBJ __stdcall SelectObject(HDC hdc, HGDIOBJ h)
5f004b58  ff25ccd1005f         JMP dword ptr [0x5f00d1cc]

; ==== FUNCTION GDI32.DLL::GetDeviceCaps entry=5f004b5e sig=int __stdcall GetDeviceCaps(HDC hdc, int index)
5f004b5e  ff25d0d1005f         JMP dword ptr [0x5f00d1d0]

; ==== FUNCTION GDI32.DLL::CreateSolidBrush entry=5f004b64 sig=HBRUSH __stdcall CreateSolidBrush(COLORREF color)
5f004b64  ff25e0d1005f         JMP dword ptr [0x5f00d1e0]

; ==== FUNCTION GDI32.DLL::DeleteDC entry=5f004b6a sig=BOOL __stdcall DeleteDC(HDC hdc)
5f004b6a  ff25d8d1005f         JMP dword ptr [0x5f00d1d8]

; ==== FUNCTION GDI32.DLL::BitBlt entry=5f004b70 sig=BOOL __stdcall BitBlt(HDC hdc, int x, int y, int cx, int cy, HDC hdcSrc, int x1, int y1, DWORD rop)
5f004b70  ff25dcd1005f         JMP dword ptr [0x5f00d1dc]

; ==== FUNCTION GDI32.DLL::CreateCompatibleDC entry=5f004b76 sig=HDC __stdcall CreateCompatibleDC(HDC hdc)
5f004b76  ff25e8d1005f         JMP dword ptr [0x5f00d1e8]

; ==== FUNCTION GDI32.DLL::SetBkMode entry=5f004b7c sig=int __stdcall SetBkMode(HDC hdc, int mode)
5f004b7c  ff25e4d1005f         JMP dword ptr [0x5f00d1e4]

; ==== FUNCTION GDI32.DLL::CreateDIBitmap entry=5f004b82 sig=HBITMAP __stdcall CreateDIBitmap(HDC hdc, BITMAPINFOHEADER * pbmih, DWORD flInit, void * pjBits, BITMAPINFO * pbmi, UINT iUsage)
5f004b82  ff25b0d1005f         JMP dword ptr [0x5f00d1b0]

; ==== FUNCTION FUN_5f004b88 entry=5f004b88 sig=undefined FUN_5f004b88(void)
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
; undefined 520 bytes at 5f005000
5f005208  undefined4 ??
5f00520c  undefined4 ??
5f005210  undefined4 ??
; undefined 44 bytes at 5f005214
5f005240  undefined4 ??
5f005244  undefined4 ??
5f005248  undefined2 ??
5f00524a  undefined2 ??
5f00524c  undefined2 ??
5f00524e  undefined2 ??
5f005250  undefined2 ??
5f005252  undefined2 ??
5f005254  undefined2 ??
; undefined 2 bytes at 5f005256
5f005258  undefined4 ??
5f00525c  undefined4 ??
5f005260  undefined2 ??
5f005262  undefined2 ??
5f005264  undefined1 ??
; undefined 3 bytes at 5f005265
5f005268  undefined4 ??
; undefined 4 bytes at 5f00526c
5f005270  undefined4 ??
; undefined 8 bytes at 5f005274
5f00527c  undefined4 ??
; undefined 4 bytes at 5f005280
5f005284  undefined4 ??
5f005288  undefined4 ??
5f00528c  undefined4 ??
5f005290  undefined4 ??
5f005294  undefined4 ??
5f005298  undefined4 ??
5f00529c  undefined4 ??
5f0052a0  undefined4 ??
5f0052a4  undefined4 ??
5f0052a8  undefined4 ??
5f0052ac  undefined4 ??
; undefined 4 bytes at 5f0052b0
5f0052b4  undefined4 ??
5f0052b8  undefined4 ??
; undefined 4 bytes at 5f0052bc
5f0052c0  undefined4 ??
; undefined 4 bytes at 5f0052c4
5f0052c8  undefined4 ??
5f0052cc  undefined4 ??
5f0052d0  undefined4 ??
5f0052d4  undefined4 ??
; undefined 20424 bytes at 5f0052d8
5f00a2a0  undefined4 ??
5f00a2a4  undefined4 ??
; undefined 32 bytes at 5f00a2a8
5f00a2c8  undefined4 ??
; undefined 196 bytes at 5f00a2cc
5f00a390  undefined4 ??
; undefined 4 bytes at 5f00a394
5f00a398  undefined4 ??
5f00a39c  undefined4 ??
; undefined 4 bytes at 5f00a3a0
5f00a3a4  undefined1 ??
5f00a3a5  undefined1 ??
; undefined 2 bytes at 5f00a3a6
5f00b000  IMAGE_DEBUG_DIRECTORY 
; undefined 4 bytes at 5f00b01c
5f00b020  ds "Win32 3D control dll"
5f00b038  unicode u"Button"
; undefined 26 bytes at 5f00b046
5f00b060  addr 5f0038f0
5f00b064  addr 5f002c10
5f00b068  undefined2 0001h
; undefined 2 bytes at 5f00b06a
5f00b06c  unicode u"ListBox"
; undefined 24 bytes at 5f00b07c
5f00b094  addr 5f0042c0
5f00b098  addr 5f002c90
5f00b09c  undefined2 0002h
; undefined 42 bytes at 5f00b09e
5f00b0c8  addr 5f004060
5f00b0cc  addr 5f002c40
; undefined 4 bytes at 5f00b0d0
5f00b0d4  unicode u"ComboBox"
; undefined 22 bytes at 5f00b0e6
5f00b0fc  addr 5f0042f0
5f00b100  addr 5f002d20
; undefined 4 bytes at 5f00b104
5f00b108  unicode u"Static"
; undefined 24 bytes at 5f00b118
5f00b130  addr 5f0045c0
5f00b134  addr 5f002df0
; undefined 4 bytes at 5f00b138
5f00b13c  unicode u"ComboLBox"
; undefined 20 bytes at 5f00b150
5f00b164  addr 5f0042c0
5f00b168  addr 5f002ce0
; undefined 4 bytes at 5f00b16c
5f00b170  undefined2 0014h
5f00b172  undefined2 000Fh
; undefined 140 bytes at 5f00b174
5f00c000  unicode u"edit"
; undefined 2 bytes at 5f00c00a
5f00c00c  unicode u"hangeul"
5f00c01c  unicode u"kanji"
5f00c028  unicode u"english"
5f00c038  unicode u"roman"
5f00c044  unicode u"hangeulmenu"
5f00c05c  unicode u"kanjimenu"
5f00c070  unicode u"windows"
5f00c080  unicode u"C3dHNew"
5f00c090  unicode u"C3dLNew"
5f00c0a0  unicode u"C3dNew"
; undefined 2 bytes at 5f00c0ae
5f00c0b0  unicode u"C3dH"
; undefined 2 bytes at 5f00c0ba
5f00c0bc  unicode u"C3dL"
; undefined 10 bytes at 5f00c0c6
5f00c0d0  unicode u"C3dD"
; undefined 2 bytes at 5f00c0da
5f00c0dc  ds "This application uses CTL3D32.DLL, which has not been correctly installed.  CTL3D32.DLL must be installed in the Windows system directory."
; undefined 1 bytes at 5f00c167
5f00c168  ds "This application uses CTL3D32.DLL, which is not the correct version.  This version of CTL3D32.DLL is designed only for Windows NT systems."
; undefined 1 bytes at 5f00c1f3
5f00c1f4  ds "CTL3D32.DLL"
5f00c200  unicode u"Ctl3d_RunAlways"
5f00c220  unicode u"#32770"
; undefined 6 bytes at 5f00c22e
5f00c234  ds "DisableThreadLibraryCalls"
; undefined 2 bytes at 5f00c24e
5f00c250  ds "KERNEL32.DLL"
; undefined 419 bytes at 5f00c25d
5f00d000  ddw D090h
5f00d004  ddw 0h
5f00d008  ddw 0h
5f00d00c  ddw D4B0h
5f00d010  ddw D1F0h
5f00d014  ddw D0ECh
5f00d018  ddw 0h
5f00d01c  ddw 0h
5f00d020  ddw D7A6h
5f00d024  ddw D24Ch
5f00d028  ddw D050h
5f00d02c  ddw 0h
5f00d030  ddw 0h
5f00d034  ddw D8A0h
5f00d038  ddw D1B0h
; undefined 20 bytes at 5f00d03c
5f00d050  ddw D88Eh
5f00d054  ddw D7C2h
5f00d058  ddw D7CCh
5f00d05c  ddw D7B2h
5f00d060  ddw D7E8h
5f00d064  ddw D7FCh
5f00d068  ddw D7DAh
5f00d06c  ddw D822h
5f00d070  ddw D832h
5f00d074  ddw D812h
5f00d078  ddw D856h
5f00d07c  ddw D862h
5f00d080  ddw D842h
5f00d084  ddw D882h
5f00d088  ddw D86Ch
; undefined 4 bytes at 5f00d08c
5f00d090  ddw D462h
5f00d094  ddw D44Eh
5f00d098  ddw D43Ch
5f00d09c  ddw D400h
5f00d0a0  ddw D48Eh
5f00d0a4  ddw D4A0h
5f00d0a8  ddw D420h
5f00d0ac  ddw D414h
5f00d0b0  ddw D3C2h
5f00d0b4  ddw D3E6h
5f00d0b8  ddw D3D8h
5f00d0bc  ddw D382h
5f00d0c0  ddw D3ACh
5f00d0c4  ddw D394h
5f00d0c8  ddw D33Eh
5f00d0cc  ddw D36Eh
5f00d0d0  ddw D356h
5f00d0d4  ddw D470h
5f00d0d8  ddw D47Eh
5f00d0dc  ddw D310h
5f00d0e0  ddw D31Ch
5f00d0e4  ddw D332h
; undefined 4 bytes at 5f00d0e8
5f00d0ec  ddw D5CEh
5f00d0f0  ddw D5DAh
5f00d0f4  ddw D5E8h
5f00d0f8  ddw D5C2h
5f00d0fc  ddw D5B6h
5f00d100  ddw D700h
5f00d104  ddw D614h
5f00d108  ddw D620h
5f00d10c  ddw D632h
5f00d110  ddw D640h
5f00d114  ddw D650h
5f00d118  ddw D664h
5f00d11c  ddw D66Ch
5f00d120  ddw D678h
5f00d124  ddw D686h
5f00d128  ddw D694h
5f00d12c  ddw D6A6h
5f00d130  ddw D6B8h
5f00d134  ddw D6C8h
5f00d138  ddw D6D8h
5f00d13c  ddw D6E8h
5f00d140  ddw D6F4h
5f00d144  ddw D5AAh
5f00d148  ddw D712h
5f00d14c  ddw D724h
5f00d150  ddw D736h
5f00d154  ddw D74Ah
5f00d158  ddw D756h
5f00d15c  ddw D764h
5f00d160  ddw D770h
5f00d164  ddw D782h
5f00d168  ddw D78Eh
5f00d16c  ddw D59Ah
5f00d170  ddw D588h
5f00d174  ddw D57Ah
5f00d178  ddw D566h
5f00d17c  ddw D554h
5f00d180  ddw D53Eh
5f00d184  ddw D52Ch
5f00d188  ddw D51Ch
5f00d18c  ddw D50Ah
5f00d190  ddw D4FAh
5f00d194  ddw D4E8h
5f00d198  ddw D4D6h
5f00d19c  ddw D4CAh
5f00d1a0  ddw D4BEh
5f00d1a4  ddw D5F6h
5f00d1a8  ddw D606h
; undefined 4 bytes at 5f00d1ac
5f00d1b0  addr 0000d88e
5f00d1b4  addr 0000d7c2
5f00d1b8  addr 0000d7cc
5f00d1bc  addr 0000d7b2
5f00d1c0  addr 0000d7e8
5f00d1c4  addr 0000d7fc
5f00d1c8  addr 0000d7da
5f00d1cc  addr 0000d822
5f00d1d0  addr 0000d832
5f00d1d4  addr 0000d812
5f00d1d8  addr 0000d856
5f00d1dc  addr 0000d862
5f00d1e0  addr 0000d842
5f00d1e4  addr 0000d882
5f00d1e8  addr 0000d86c
; undefined 4 bytes at 5f00d1ec
5f00d1f0  addr 0000d462
5f00d1f4  addr 0000d44e
5f00d1f8  addr 0000d43c
5f00d1fc  addr 0000d400
5f00d200  addr 0000d48e
5f00d204  addr 0000d4a0
5f00d208  addr 0000d420
5f00d20c  addr 0000d414
5f00d210  addr 0000d3c2
5f00d214  addr 0000d3e6
5f00d218  addr 0000d3d8
5f00d21c  addr 0000d382
5f00d220  addr 0000d3ac
5f00d224  addr 0000d394
5f00d228  addr 0000d33e
5f00d22c  addr 0000d36e
5f00d230  addr 0000d356
5f00d234  addr 0000d470
5f00d238  addr 0000d47e
5f00d23c  addr 0000d310
5f00d240  addr 0000d31c
5f00d244  addr 0000d332
; undefined 4 bytes at 5f00d248
5f00d24c  addr 0000d5ce
5f00d250  addr 0000d5da
5f00d254  addr 0000d5e8
5f00d258  addr 0000d5c2
5f00d25c  addr 0000d5b6
5f00d260  addr 0000d700
5f00d264  addr 0000d614
5f00d268  addr 0000d620
5f00d26c  addr 0000d632
5f00d270  addr 0000d640
5f00d274  addr 0000d650
5f00d278  addr 0000d664
5f00d27c  addr 0000d66c
5f00d280  addr 0000d678
5f00d284  addr 0000d686
5f00d288  addr 0000d694
5f00d28c  addr 0000d6a6
5f00d290  addr 0000d6b8
5f00d294  addr 0000d6c8
5f00d298  addr 0000d6d8
5f00d29c  addr 0000d6e8
5f00d2a0  addr 0000d6f4
5f00d2a4  addr 0000d5aa
5f00d2a8  addr 0000d712
5f00d2ac  addr 0000d724
5f00d2b0  addr 0000d736
5f00d2b4  addr 0000d74a
5f00d2b8  addr 0000d756
5f00d2bc  addr 0000d764
5f00d2c0  addr 0000d770
5f00d2c4  addr 0000d782
5f00d2c8  addr 0000d78e
5f00d2cc  addr 0000d59a
5f00d2d0  addr 0000d588
5f00d2d4  addr 0000d57a
5f00d2d8  addr 0000d566
5f00d2dc  addr 0000d554
5f00d2e0  addr 0000d53e
5f00d2e4  addr 0000d52c
5f00d2e8  addr 0000d51c
5f00d2ec  addr 0000d50a
5f00d2f0  addr 0000d4fa
5f00d2f4  addr 0000d4e8
5f00d2f8  addr 0000d4d6
5f00d2fc  addr 0000d4ca
5f00d300  addr 0000d4be
5f00d304  addr 0000d5f6
5f00d308  addr 0000d606
; undefined 4 bytes at 5f00d30c
5f00d310  dw 26Dh
5f00d312  ds "lstrcmpiW"
5f00d31c  dw C7h
5f00d31e  ds "GetCurrentThreadId"
; undefined 1 bytes at 5f00d331
5f00d332  dw 276h
5f00d334  ds "lstrlenW"
; undefined 1 bytes at 5f00d33d
5f00d33e  dw 177h
5f00d340  ds "LeaveCriticalSection"
; undefined 1 bytes at 5f00d355
5f00d356  dw 4Fh
5f00d358  ds "EnterCriticalSection"
; undefined 1 bytes at 5f00d36d
5f00d36e  dw 110h
5f00d370  ds "GetProfileStringW"
5f00d382  dw 13Fh
5f00d384  ds "GlobalAddAtomW"
; undefined 1 bytes at 5f00d393
5f00d394  dw 13Dh
5f00d396  ds "GetWindowsDirectoryW"
; undefined 1 bytes at 5f00d3ab
5f00d3ac  dw 11Eh
5f00d3ae  ds "GetSystemDirectoryW"
5f00d3c2  dw EAh
5f00d3c4  ds "GetModuleFileNameW"
; undefined 1 bytes at 5f00d3d7
5f00d3d8  dw 137h
5f00d3da  ds "GetVersion"
; undefined 1 bytes at 5f00d3e5
5f00d3e6  dw D4h
5f00d3e8  ds "GetEnvironmentVariableW"
5f00d400  dw 142h
5f00d402  ds "GlobalDeleteAtom"
; undefined 1 bytes at 5f00d413
5f00d414  dw 26Ah
5f00d416  ds "lstrcmpW"
; undefined 1 bytes at 5f00d41f
5f00d420  dw 164h
5f00d422  ds "InitializeCriticalSection"
5f00d43c  dw 103h
5f00d43e  ds "GetProcAddress"
; undefined 1 bytes at 5f00d44d
5f00d44e  dw EBh
5f00d450  ds "GetModuleHandleA"
; undefined 1 bytes at 5f00d461
5f00d462  dw 147h
5f00d464  ds "GlobalFree"
; undefined 1 bytes at 5f00d46f
5f00d470  dw 140h
5f00d472  ds "GlobalAlloc"
5f00d47e  dw 17Dh
5f00d480  ds "LoadResource"
; undefined 1 bytes at 5f00d48d
5f00d48e  dw 217h
5f00d490  ds "SizeofResource"
; undefined 1 bytes at 5f00d49f
5f00d4a0  dw 81h
5f00d4a2  ds "FindResourceW"
5f00d4b0  ds "KERNEL32.dll"
; undefined 1 bytes at 5f00d4bd
5f00d4be  dw 119h
5f00d4c0  ds "GetPropW"
; undefined 1 bytes at 5f00d4c9
5f00d4ca  dw 1F2h
5f00d4cc  ds "SetPropW"
; undefined 1 bytes at 5f00d4d5
5f00d4d6  dw 205h
5f00d4d8  ds "SetWindowLongW"
; undefined 1 bytes at 5f00d4e7
5f00d4e8  dw 204h
5f00d4ea  ds "SetWindowLongA"
; undefined 1 bytes at 5f00d4f9
5f00d4fa  dw DAh
5f00d4fc  ds "GetClassNameW"
5f00d50a  dw 15Eh
5f00d50c  ds "IsWindowUnicode"
5f00d51c  dw 1CBh
5f00d51e  ds "SendMessageW"
; undefined 1 bytes at 5f00d52b
5f00d52c  dw 131h
5f00d52e  ds "GetWindowLongW"
; undefined 1 bytes at 5f00d53d
5f00d53e  dw 22Eh
5f00d540  ds "UnhookWindowsHookEx"
5f00d554  dw 10h
5f00d556  ds "CallNextHookEx"
; undefined 1 bytes at 5f00d565
5f00d566  dw 20Fh
5f00d568  ds "SetWindowsHookExW"
5f00d57a  dw 1BCh
5f00d57c  ds "RemovePropW"
5f00d588  dw 12h
5f00d58a  ds "CallWindowProcW"
5f00d59a  dw DCh
5f00d59c  ds "GetClientRect"
5f00d5aa  dw 20h
5f00d5ac  ds "CharNextW"
5f00d5b6  dw 12Dh
5f00d5b8  ds "GetWindow"
5f00d5c2  dw 115h
5f00d5c4  ds "GetParent"
5f00d5ce  dw 1B9h
5f00d5d0  ds "ReleaseDC"
5f00d5da  dw 197h
5f00d5dc  ds "OffsetRect"
; undefined 1 bytes at 5f00d5e7
5f00d5e8  dw 141h
5f00d5ea  ds "InflateRect"
5f00d5f6  dw 133h
5f00d5f8  ds "GetWindowRect"
5f00d606  dw 12Fh
5f00d608  ds "GetWindowDC"
5f00d614  dw 159h
5f00d616  ds "IsIconic"
; undefined 1 bytes at 5f00d61f
5f00d620  dw 7Eh
5f00d622  ds "DefWindowProcW"
; undefined 1 bytes at 5f00d631
5f00d632  dw 78h
5f00d634  ds "DefDlgProcW"
5f00d640  dw D6h
5f00d642  ds "GetClassInfoW"
5f00d650  dw 123h
5f00d652  ds "GetSystemMetrics"
; undefined 1 bytes at 5f00d663
5f00d664  dw E6h
5f00d666  ds "GetDC"
5f00d66c  dw 23h
5f00d66e  ds "CharPrevW"
5f00d678  dw 188h
5f00d67a  ds "MessageBoxA"
5f00d686  dw 120h
5f00d688  ds "GetSysColor"
5f00d694  dw 148h
5f00d696  ds "InvalidateRect"
; undefined 1 bytes at 5f00d6a5
5f00d6a6  dw 1BFh
5f00d6a8  ds "ScreenToClient"
; undefined 1 bytes at 5f00d6b7
5f00d6b8  dw 23Bh
5f00d6ba  ds "ValidateRect"
; undefined 1 bytes at 5f00d6c7
5f00d6c8  dw 9Bh
5f00d6ca  ds "DrawFocusRect"
5f00d6d8  dw 147h
5f00d6da  ds "IntersectRect"
5f00d6e8  dw F0h
5f00d6ea  ds "GetFocus"
; undefined 1 bytes at 5f00d6f3
5f00d6f4  dw A6h
5f00d6f6  ds "DrawTextW"
5f00d700  dw 15Dh
5f00d702  ds "IsWindowEnabled"
5f00d712  dw 33h
5f00d714  ds "ClientToScreen"
; undefined 1 bytes at 5f00d723
5f00d724  dw 138h
5f00d726  ds "GetWindowTextW"
; undefined 1 bytes at 5f00d735
5f00d736  dw C3h
5f00d738  ds "ExcludeUpdateRgn"
; undefined 1 bytes at 5f00d749
5f00d74a  dw AFh
5f00d74c  ds "EndPaint"
; undefined 1 bytes at 5f00d755
5f00d756  dw 9h
5f00d758  ds "BeginPaint"
; undefined 1 bytes at 5f00d763
5f00d764  dw 211h
5f00d766  ds "ShowCaret"
5f00d770  dw 183h
5f00d772  ds "MapWindowPoints"
5f00d782  dw 13Dh
5f00d784  ds "HideCaret"
5f00d78e  dw 137h
5f00d790  ds "GetWindowTextLengthW"
; undefined 1 bytes at 5f00d7a5
5f00d7a6  ds "USER32.dll"
; undefined 1 bytes at 5f00d7b1
5f00d7b2  dw 46h
5f00d7b4  ds "DeleteObject"
; undefined 1 bytes at 5f00d7c1
5f00d7c2  dw 115h
5f00d7c4  ds "PatBlt"
; undefined 1 bytes at 5f00d7cb
5f00d7cc  dw 142h
5f00d7ce  ds "SetBkColor"
; undefined 1 bytes at 5f00d7d9
5f00d7da  dw 64h
5f00d7dc  ds "ExtTextOutW"
5f00d7e8  dw 108h
5f00d7ea  ds "IntersectClipRect"
5f00d7fc  dw FCh
5f00d7fe  ds "GetTextExtentPointW"
5f00d812  dw 163h
5f00d814  ds "SetTextColor"
; undefined 1 bytes at 5f00d821
5f00d822  dw 13Ch
5f00d824  ds "SelectObject"
; undefined 1 bytes at 5f00d831
5f00d832  dw BCh
5f00d834  ds "GetDeviceCaps"
5f00d842  dw 40h
5f00d844  ds "CreateSolidBrush"
; undefined 1 bytes at 5f00d855
5f00d856  dw 43h
5f00d858  ds "DeleteDC"
; undefined 1 bytes at 5f00d861
5f00d862  dw Ah
5f00d864  ds "BitBlt"
; undefined 1 bytes at 5f00d86b
5f00d86c  dw 1Fh
5f00d86e  ds "CreateCompatibleDC"
; undefined 1 bytes at 5f00d881
5f00d882  dw 143h
5f00d884  ds "SetBkMode"
5f00d88e  dw 25h
5f00d890  ds "CreateDIBitmap"
; undefined 1 bytes at 5f00d89f
5f00d8a0  ds "GDI32.dll"
; undefined 342 bytes at 5f00d8aa
5f00e000  IMAGE_DIRECTORY_ENTRY_EXPORT 
5f00e028  ibo32 5f001940
5f00e02c  ibo32 5f001b40
5f00e030  ibo32 5f001960
5f00e034  ibo32 5f001d40
5f00e038  ibo32 5f001950
5f00e03c  ibo32 5f001de0
5f00e040  ibo32 5f0038f0
5f00e044  ibo32 5f004060
5f00e048  ibo32 5f0042c0
5f00e04c  ibo32 5f0042f0
5f00e050  ibo32 5f0045c0
5f00e054  ibo32 5f001600
5f00e058  ibo32 5f001650
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
5f010020  dw 30E7h
5f010022  dw 3102h
5f010024  dw 310Ch
5f010026  dw 311Eh
5f010028  dw 3127h
5f01002a  dw 312Eh
5f01002c  dw 3140h
5f01002e  dw 3150h
5f010030  dw 3159h
5f010032  dw 3161h
5f010034  dw 3184h
5f010036  dw 318Dh
5f010038  dw 3195h
5f01003a  dw 319Fh
5f01003c  dw 31A6h
5f01003e  dw 31ADh
5f010040  dw 31BDh
5f010042  dw 31E7h
5f010044  dw 31F3h
5f010046  dw 3207h
5f010048  dw 320Ch
5f01004a  dw 3211h
5f01004c  dw 3229h
5f01004e  dw 322Fh
5f010050  dw 3235h
5f010052  dw 323Ch
5f010054  dw 3242h
5f010056  dw 324Ah
5f010058  dw 324Fh
5f01005a  dw 3288h
5f01005c  dw 3290h
5f01005e  dw 3298h
5f010060  dw 32A4h
5f010062  dw 32CEh
5f010064  dw 32E2h
5f010066  dw 32F4h
5f010068  dw 32FBh
5f01006a  dw 3334h
5f01006c  dw 3353h
5f01006e  dw 335Fh
5f010070  dw 33ACh
5f010072  dw 33DBh
5f010074  dw 33F1h
5f010076  dw 33F9h
5f010078  dw 3424h
5f01007a  dw 345Eh
5f01007c  dw 3466h
5f01007e  dw 34FFh
5f010080  dw 351Eh
5f010082  dw 354Ah
5f010084  dw 3565h
5f010086  dw 356Eh
5f010088  dw 35BEh
5f01008a  dw 35D2h
5f01008c  dw 3601h
5f01008e  dw 3607h
5f010090  dw 360Ch
5f010092  dw 3612h
5f010094  dw 3618h
5f010096  dw 361Eh
5f010098  dw 363Eh
5f01009a  dw 3658h
5f01009c  dw 365Fh
5f01009e  dw 3665h
5f0100a0  dw 366Bh
5f0100a2  dw 367Bh
5f0100a4  dw 3686h
5f0100a6  dw 368Dh
5f0100a8  dw 3699h
5f0100aa  dw 36A1h
5f0100ac  dw 36A8h
5f0100ae  dw 36AEh
5f0100b0  dw 36B4h
5f0100b2  dw 36BCh
5f0100b4  dw 36D1h
5f0100b6  dw 36DAh
5f0100b8  dw 36E1h
5f0100ba  dw 36E7h
5f0100bc  dw 36EDh
5f0100be  dw 36F3h
5f0100c0  dw 3723h
5f0100c2  dw 3736h
5f0100c4  dw 3757h
5f0100c6  dw 375Dh
5f0100c8  dw 3763h
5f0100ca  dw 3773h
5f0100cc  dw 377Dh
5f0100ce  dw 3784h
5f0100d0  dw 3796h
5f0100d2  dw 379Eh
5f0100d4  dw 37A4h
5f0100d6  dw 37ACh
5f0100d8  dw 37BAh
5f0100da  dw 37C8h
5f0100dc  dw 37CEh
5f0100de  dw 37D8h
5f0100e0  dw 37DEh
5f0100e2  dw 37E8h
5f0100e4  dw 37EDh
5f0100e6  dw 37F7h
5f0100e8  dw 3800h
5f0100ea  dw 380Ah
5f0100ec  dw 3810h
5f0100ee  dw 3816h
5f0100f0  dw 381Ch
5f0100f2  dw 3822h
5f0100f4  dw 3827h
5f0100f6  dw 382Dh
5f0100f8  dw 3841h
5f0100fa  dw 3848h
5f0100fc  dw 384Eh
5f0100fe  dw 3862h
5f010100  dw 386Ah
5f010102  dw 3871h
5f010104  dw 387Fh
5f010106  dw 3898h
5f010108  dw 389Fh
5f01010a  dw 38A5h
5f01010c  dw 38ABh
5f01010e  dw 38BBh
5f010110  dw 38C6h
5f010112  dw 38CDh
5f010114  dw 38D5h
5f010116  dw 38DCh
5f010118  dw 38E2h
5f01011a  dw 38E8h
5f01011c  dw 38F0h
5f01011e  dw 3905h
5f010120  dw 390Eh
5f010122  dw 3915h
5f010124  dw 391Bh
5f010126  dw 3951h
5f010128  dw 3962h
5f01012a  dw 3992h
5f01012c  dw 39AFh
5f01012e  dw 39B7h
5f010130  dw 39BDh
5f010132  dw 39C7h
5f010134  dw 39DDh
5f010136  dw 39FBh
5f010138  dw 3A11h
5f01013a  dw 3A25h
5f01013c  dw 3A2Bh
5f01013e  dw 3A3Bh
5f010140  dw 3A4Bh
5f010142  dw 3A5Dh
5f010144  dw 3A65h
5f010146  dw 3A6Eh
5f010148  dw 3AA2h
5f01014a  dw 3ADFh
5f01014c  dw 3AE8h
5f01014e  dw 3AFFh
5f010150  dw 3B11h
5f010152  dw 3B42h
5f010154  dw 3B5Dh
5f010156  dw 3BD7h
5f010158  dw 3BDFh
5f01015a  dw 3BEDh
5f01015c  dw 3C27h
5f01015e  dw 3C2Fh
5f010160  dw 3C52h
5f010162  dw 3C6Fh
5f010164  dw 3CD2h
5f010166  dw 3CEFh
5f010168  dw 3D1Ah
5f01016a  dw 3D52h
5f01016c  dw 3D76h
5f01016e  dw 3D87h
5f010170  dw 3D94h
5f010172  dw 3DA9h
5f010174  dw 3DB1h
5f010176  dw 3DB7h
5f010178  dw 3DBFh
5f01017a  dw 3DC4h
5f01017c  dw 3DE2h
5f01017e  dw 3DE8h
5f010180  dw 3DF9h
5f010182  dw 3DFFh
5f010184  dw 3E6Ch
5f010186  dw 3E7Fh
5f010188  dw 3E85h
5f01018a  dw 3EA1h
5f01018c  dw 3ECEh
5f01018e  dw 3ED6h
5f010190  dw 3F03h
5f010192  dw 3F1Eh
5f010194  dw 3F2Ch
5f010196  dw 3F6Fh
5f010198  dw 3F92h
5f01019a  dw 3F98h
5f01019c  dw 3FA0h
5f01019e  dw 3FCEh
5f0101a0  dw 3FECh
5f0101a2  dw 3FF6h
5f0101a4  IMAGE_BASE_RELOCATION 
5f0101ac  dw 300Eh
5f0101ae  dw 301Ch
5f0101b0  dw 3061h
5f0101b2  dw 3095h
5f0101b4  dw 30A4h
5f0101b6  dw 30BCh
5f0101b8  dw 30C4h
5f0101ba  dw 30E5h
5f0101bc  dw 30F3h
5f0101be  dw 30F9h
5f0101c0  dw 3106h
5f0101c2  dw 310Ch
5f0101c4  dw 3112h
5f0101c6  dw 3117h
5f0101c8  dw 311Ch
5f0101ca  dw 3127h
5f0101cc  dw 312Eh
5f0101ce  dw 313Ah
5f0101d0  dw 3147h
5f0101d2  dw 314Ch
5f0101d4  dw 3151h
5f0101d6  dw 315Ch
5f0101d8  dw 3169h
5f0101da  dw 316Fh
5f0101dc  dw 3175h
5f0101de  dw 318Ah
5f0101e0  dw 3190h
5f0101e2  dw 319Ch
5f0101e4  dw 31A2h
5f0101e6  dw 31B8h
5f0101e8  dw 31C6h
5f0101ea  dw 31CBh
5f0101ec  dw 31D3h
5f0101ee  dw 31D9h
5f0101f0  dw 31E2h
5f0101f2  dw 31E8h
5f0101f4  dw 31EDh
5f0101f6  dw 3201h
5f0101f8  dw 3206h
5f0101fa  dw 320Dh
5f0101fc  dw 3214h
5f0101fe  dw 3219h
5f010200  dw 3221h
5f010202  dw 322Dh
5f010204  dw 3234h
5f010206  dw 325Ch
5f010208  dw 3266h
5f01020a  dw 326Ch
5f01020c  dw 3282h
5f01020e  dw 328Ch
5f010210  dw 3297h
5f010212  dw 329Dh
5f010214  dw 32A4h
5f010216  dw 32A9h
5f010218  dw 32B6h
5f01021a  dw 32C1h
5f01021c  dw 32E1h
5f01021e  dw 32E6h
5f010220  dw 3300h
5f010222  dw 330Dh
5f010224  dw 3313h
5f010226  dw 331Fh
5f010228  dw 3325h
5f01022a  dw 332Dh
5f01022c  dw 333Bh
5f01022e  dw 3343h
5f010230  dw 3351h
5f010232  dw 3359h
5f010234  dw 335Eh
5f010236  dw 3367h
5f010238  dw 336Eh
5f01023a  dw 3382h
5f01023c  dw 338Ah
5f01023e  dw 338Fh
5f010240  dw 3398h
5f010242  dw 339Fh
5f010244  dw 33B3h
5f010246  dw 33BBh
5f010248  dw 33CDh
5f01024a  dw 33E9h
5f01024c  dw 33EEh
5f01024e  dw 33F4h
5f010250  dw 3415h
5f010252  dw 3435h
5f010254  dw 343Fh
5f010256  dw 3444h
5f010258  dw 3452h
5f01025a  dw 3468h
5f01025c  dw 3482h
5f01025e  dw 3488h
5f010260  dw 348Dh
5f010262  dw 34A0h
5f010264  dw 34AEh
5f010266  dw 34B7h
5f010268  dw 34BDh
5f01026a  dw 34C8h
5f01026c  dw 34CFh
5f01026e  dw 34D8h
5f010270  dw 34E2h
5f010272  dw 34EBh
5f010274  dw 34F5h
5f010276  dw 34FEh
5f010278  dw 3508h
5f01027a  dw 3511h
5f01027c  dw 351Bh
5f01027e  dw 3524h
5f010280  dw 352Eh
5f010282  dw 3537h
5f010284  dw 3540h
5f010286  dw 3549h
5f010288  dw 354Fh
5f01028a  dw 3565h
5f01028c  dw 357Dh
5f01028e  dw 358Ch
5f010290  dw 35A0h
5f010292  dw 35E3h
5f010294  dw 361Eh
5f010296  dw 3633h
5f010298  dw 3682h
5f01029a  dw 368Dh
5f01029c  dw 36AAh
5f01029e  dw 372Fh
5f0102a0  dw 3737h
5f0102a2  dw 3759h
5f0102a4  dw 3796h
5f0102a6  dw 37DBh
5f0102a8  dw 37E6h
5f0102aa  dw 3825h
5f0102ac  dw 3845h
5f0102ae  dw 3852h
5f0102b0  dw 3879h
5f0102b2  dw 389Dh
5f0102b4  dw 38BEh
5f0102b6  dw 38C5h
5f0102b8  dw 38D4h
5f0102ba  dw 38FDh
5f0102bc  dw 3907h
5f0102be  dw 390Dh
5f0102c0  dw 3935h
5f0102c2  dw 3954h
5f0102c4  dw 3974h
5f0102c6  dw 399Ch
5f0102c8  dw 39BAh
5f0102ca  dw 39DFh
5f0102cc  dw 3A39h
5f0102ce  dw 3A46h
5f0102d0  dw 3A69h
5f0102d2  dw 3A70h
5f0102d4  dw 3A76h
5f0102d6  dw 3A7Ch
5f0102d8  dw 3A86h
5f0102da  dw 3A8Dh
5f0102dc  dw 3A9Bh
5f0102de  dw 3AA5h
5f0102e0  dw 3AABh
5f0102e2  dw 3AB1h
5f0102e4  dw 3AB8h
5f0102e6  dw 3ABEh
5f0102e8  dw 3AD5h
5f0102ea  dw 3AE5h
5f0102ec  dw 3AEAh
5f0102ee  dw 3AF0h
5f0102f0  dw 3B13h
5f0102f2  dw 3B1Dh
5f0102f4  dw 3B2Eh
5f0102f6  dw 3B5Bh
5f0102f8  dw 3B6Bh
5f0102fa  dw 3B7Fh
5f0102fc  dw 3B98h
5f0102fe  dw 3BB9h
5f010300  dw 3BC3h
5f010302  dw 3BF7h
5f010304  dw 3C00h
5f010306  dw 3C13h
5f010308  dw 3C46h
5f01030a  dw 3C60h
5f01030c  dw 3C69h
5f01030e  dw 3C70h
5f010310  dw 3C96h
5f010312  dw 3CB0h
5f010314  dw 3CB9h
5f010316  dw 3CC0h
5f010318  dw 3CE3h
5f01031a  dw 3CFFh
5f01031c  dw 3D23h
5f01031e  dw 3D5Dh
5f010320  dw 3DA9h
5f010322  dw 3E24h
5f010324  dw 3E6Dh
5f010326  dw 3E73h
5f010328  dw 3E8Ch
5f01032a  dw 3E9Ah
5f01032c  dw 3EAFh
5f01032e  dw 3ECCh
5f010330  dw 3EE3h
5f010332  dw 3EF1h
5f010334  dw 3F14h
5f010336  dw 3F42h
5f010338  dw 3F4Bh
5f01033a  dw 3FAAh
5f01033c  dw 3FB1h
5f01033e  dw 3FB9h
5f010340  dw 3FE3h
5f010342  dw 3FFFh
5f010344  IMAGE_BASE_RELOCATION 
5f01034c  dw 300Dh
5f01034e  dw 301Ch
5f010350  dw 3023h
5f010352  dw 302Bh
5f010354  dw 3053h
5f010356  dw 30A4h
5f010358  dw 30B7h
5f01035a  dw 30DEh
5f01035c  dw 30F5h
5f01035e  dw 310Eh
5f010360  dw 3126h
5f010362  dw 3140h
5f010364  dw 3156h
5f010366  dw 315Dh
5f010368  dw 3165h
5f01036a  dw 3189h
5f01036c  dw 31A9h
5f01036e  dw 31B5h
5f010370  dw 31BFh
5f010372  dw 31EDh
5f010374  dw 320Eh
5f010376  dw 3224h
5f010378  dw 322Eh
5f01037a  dw 323Eh
5f01037c  dw 3266h
5f01037e  dw 3271h
5f010380  dw 327Ah
5f010382  dw 3282h
5f010384  dw 3307h
5f010386  dw 3346h
5f010388  dw 334Ch
5f01038a  dw 3363h
5f01038c  dw 3374h
5f01038e  dw 3380h
5f010390  dw 3393h
5f010392  dw 33B6h
5f010394  dw 33C5h
5f010396  dw 33DFh
5f010398  dw 33E9h
5f01039a  dw 3419h
5f01039c  dw 3429h
5f01039e  dw 3435h
5f0103a0  dw 343Fh
5f0103a2  dw 344Bh
5f0103a4  dw 345Dh
5f0103a6  dw 3465h
5f0103a8  dw 347Ch
5f0103aa  dw 34C2h
5f0103ac  dw 34C9h
5f0103ae  dw 34DDh
5f0103b0  dw 354Bh
5f0103b2  dw 355Fh
5f0103b4  dw 359Eh
5f0103b6  dw 35ADh
5f0103b8  dw 35B5h
5f0103ba  dw 3650h
5f0103bc  dw 36A4h
5f0103be  dw 36CAh
5f0103c0  dw 36EBh
5f0103c2  dw 372Fh
5f0103c4  dw 374Fh
5f0103c6  dw 3757h
5f0103c8  dw 376Fh
5f0103ca  dw 3794h
5f0103cc  dw 379Ch
5f0103ce  dw 37A3h
5f0103d0  dw 37D6h
5f0103d2  dw 37DEh
5f0103d4  dw 37F6h
5f0103d6  dw 3870h
5f0103d8  dw 3885h
5f0103da  dw 3891h
5f0103dc  dw 389Dh
5f0103de  dw 38B0h
5f0103e0  dw 38C0h
5f0103e2  dw 38C4h
5f0103e4  dw 38C8h
5f0103e6  dw 38CCh
5f0103e8  dw 38D0h
5f0103ea  dw 38D4h
5f0103ec  dw 38D8h
5f0103ee  dw 38DCh
5f0103f0  dw 38E0h
5f0103f2  dw 38E4h
5f0103f4  dw 392Fh
5f0103f6  dw 3937h
5f0103f8  dw 3958h
5f0103fa  dw 3984h
5f0103fc  dw 39BEh
5f0103fe  dw 39DEh
5f010400  dw 39F4h
5f010402  dw 3A0Eh
5f010404  dw 3A39h
5f010406  dw 3A4Fh
5f010408  dw 3A5Eh
5f01040a  dw 3A86h
5f01040c  dw 3AA7h
5f01040e  dw 3AB4h
5f010410  dw 3AD3h
5f010412  dw 3AF1h
5f010414  dw 3B03h
5f010416  dw 3B12h
5f010418  dw 3B22h
5f01041a  dw 3B41h
5f01041c  dw 3B60h
5f01041e  dw 3B73h
5f010420  dw 3BA0h
5f010422  dw 3BA4h
5f010424  dw 3BA8h
5f010426  dw 3BACh
5f010428  dw 3BB0h
5f01042a  dw 3BB4h
5f01042c  dw 3BB8h
5f01042e  dw 3BBCh
5f010430  dw 3BC0h
5f010432  dw 3BE0h
5f010434  dw 3C0Ch
5f010436  dw 3C22h
5f010438  dw 3C2Eh
5f01043a  dw 3C35h
5f01043c  dw 3C3Dh
5f01043e  dw 3C58h
5f010440  dw 3C8Ah
5f010442  dw 3CB7h
5f010444  dw 3CD8h
5f010446  dw 3CEAh
5f010448  dw 3CF3h
5f01044a  dw 3CFAh
5f01044c  dw 3D1Eh
5f01044e  dw 3D35h
5f010450  dw 3D3Dh
5f010452  dw 3D48h
5f010454  dw 3D5Eh
5f010456  dw 3D79h
5f010458  dw 3D85h
5f01045a  dw 3DC2h
5f01045c  dw 3DD2h
5f01045e  dw 3DD9h
5f010460  dw 3E1Ah
5f010462  dw 3E79h
5f010464  dw 3ECAh
5f010466  dw 3EECh
5f010468  dw 3EFAh
5f01046a  dw 3F50h
5f01046c  dw 3F58h
5f01046e  dw 3F7Ch
5f010470  dw 3F96h
5f010472  dw 3FA8h
5f010474  IMAGE_BASE_RELOCATION 
5f01047c  dw 3018h
5f01047e  dw 3037h
5f010480  dw 30CEh
5f010482  dw 30D6h
5f010484  dw 30FBh
5f010486  dw 3133h
5f010488  dw 3186h
5f01048a  dw 31A4h
5f01048c  dw 31CEh
5f01048e  dw 31F0h
5f010490  dw 3204h
5f010492  dw 3225h
5f010494  dw 3254h
5f010496  dw 3275h
5f010498  dw 327Dh
5f01049a  dw 329Bh
5f01049c  dw 336Ah
5f01049e  dw 3374h
5f0104a0  dw 339Dh
5f0104a2  dw 33D3h
5f0104a4  dw 33DEh
5f0104a6  dw 33F6h
5f0104a8  dw 3408h
5f0104aa  dw 3430h
5f0104ac  dw 344Bh
5f0104ae  dw 3463h
5f0104b0  dw 346Ah
5f0104b2  dw 3472h
5f0104b4  dw 348Bh
5f0104b6  dw 349Ch
5f0104b8  dw 34AAh
5f0104ba  dw 34BBh
5f0104bc  dw 34DDh
5f0104be  dw 34EDh
5f0104c0  dw 3544h
5f0104c2  dw 3584h
5f0104c4  dw 3588h
5f0104c6  dw 358Ch
5f0104c8  dw 3590h
5f0104ca  dw 3594h
5f0104cc  dw 3598h
5f0104ce  dw 359Ch
5f0104d0  dw 35A0h
5f0104d2  dw 35A4h
5f0104d4  dw 35A8h
5f0104d6  dw 35FDh
5f0104d8  dw 3605h
5f0104da  dw 3627h
5f0104dc  dw 3670h
5f0104de  dw 3680h
5f0104e0  dw 369Eh
5f0104e2  dw 36BFh
5f0104e4  dw 36E5h
5f0104e6  dw 3720h
5f0104e8  dw 3726h
5f0104ea  dw 372Bh
5f0104ec  dw 3732h
5f0104ee  dw 3748h
5f0104f0  dw 374Eh
5f0104f2  dw 3753h
5f0104f4  dw 3759h
5f0104f6  dw 375Fh
5f0104f8  dw 3765h
5f0104fa  dw 376Bh
5f0104fc  dw 3786h
5f0104fe  dw 378Fh
5f010500  dw 379Fh
5f010502  dw 37A9h
5f010504  dw 37B3h
5f010506  dw 37BDh
5f010508  dw 37C6h
5f01050a  dw 37CDh
5f01050c  dw 37D2h
5f01050e  dw 37D8h
5f010510  dw 3802h
5f010512  dw 3819h
5f010514  dw 3823h
5f010516  dw 383Bh
5f010518  dw 392Ah
5f01051a  dw 393Dh
5f01051c  dw 3948h
5f01051e  dw 394Fh
5f010520  dw 398Ch
5f010522  dw 3992h
5f010524  dw 3998h
5f010526  dw 399Eh
5f010528  dw 39A4h
5f01052a  dw 39AAh
5f01052c  dw 39B0h
5f01052e  dw 39B6h
5f010530  dw 39BCh
5f010532  dw 39C2h
5f010534  dw 39C8h
5f010536  dw 39CEh
5f010538  dw 39D4h
5f01053a  dw 39DAh
5f01053c  dw 39E0h
5f01053e  dw 39E6h
5f010540  dw 39ECh
5f010542  dw 39F2h
5f010544  dw 39F8h
5f010546  dw 39FEh
5f010548  dw 3A04h
5f01054a  dw 3A0Ah
5f01054c  dw 3A10h
5f01054e  dw 3A16h
5f010550  dw 3A1Ch
5f010552  dw 3A22h
5f010554  dw 3A28h
5f010556  dw 3A2Eh
5f010558  dw 3A34h
5f01055a  dw 3A3Ah
5f01055c  dw 3A40h
5f01055e  dw 3A46h
5f010560  dw 3A4Ch
5f010562  dw 3A52h
5f010564  dw 3A58h
5f010566  dw 3A5Eh
5f010568  dw 3A64h
5f01056a  dw 3A6Ah
5f01056c  dw 3A70h
5f01056e  dw 3A76h
5f010570  dw 3A7Ch
5f010572  dw 3A82h
5f010574  dw 3A88h
5f010576  dw 3A8Eh
5f010578  dw 3A94h
5f01057a  dw 3A9Ah
5f01057c  dw 3AA0h
5f01057e  dw 3AA6h
5f010580  dw 3AACh
5f010582  dw 3AB2h
5f010584  dw 3AB8h
5f010586  dw 3ABEh
5f010588  dw 3AC4h
5f01058a  dw 3ACAh
5f01058c  dw 3AD0h
5f01058e  dw 3AD6h
5f010590  dw 3ADCh
5f010592  dw 3AE2h
5f010594  dw 3AE8h
5f010596  dw 3AEEh
5f010598  dw 3AF4h
5f01059a  dw 3AFAh
5f01059c  dw 3B00h
5f01059e  dw 3B06h
5f0105a0  dw 3B0Ch
5f0105a2  dw 3B12h
5f0105a4  dw 3B18h
5f0105a6  dw 3B1Eh
5f0105a8  dw 3B24h
5f0105aa  dw 3B2Ah
5f0105ac  dw 3B30h
5f0105ae  dw 3B36h
5f0105b0  dw 3B3Ch
5f0105b2  dw 3B42h
5f0105b4  dw 3B48h
5f0105b6  dw 3B4Eh
5f0105b8  dw 3B54h
5f0105ba  dw 3B5Ah
5f0105bc  dw 3B60h
5f0105be  dw 3B66h
5f0105c0  dw 3B6Ch
5f0105c2  dw 3B72h
5f0105c4  dw 3B78h
5f0105c6  dw 3B7Eh
5f0105c8  dw 3B84h
5f0105ca  dw 0h
5f0105cc  IMAGE_BASE_RELOCATION 
5f0105d4  dw 3060h
5f0105d6  dw 3064h
5f0105d8  dw 3094h
5f0105da  dw 3098h
5f0105dc  dw 30C8h
5f0105de  dw 30CCh
5f0105e0  dw 30FCh
5f0105e2  dw 3100h
5f0105e4  dw 3130h
5f0105e6  dw 3134h
5f0105e8  dw 3164h
5f0105ea  dw 3168h
; undefined 532 bytes at 5f0105ec
