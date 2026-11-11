; Ghidra listing for EXPRMNTL.R32 (x86:LE:32:default). Labels and types are tool-generated unless they came from the binary.
13000000  IMAGE_DOS_HEADER 
13000080  IMAGE_NT_HEADERS32 
13000178  IMAGE_SECTION_HEADER 
130001a0  IMAGE_SECTION_HEADER 
130001c8  IMAGE_SECTION_HEADER 
130001f0  IMAGE_SECTION_HEADER 
13000218  IMAGE_SECTION_HEADER 
13000240  IMAGE_SECTION_HEADER 
; undefined 408 bytes at 13000268

; ==== FUNCTION MenuSrv entry=13001000 sig=undefined __cdecl MenuSrv(int param_1)
13001000  56                   PUSH ESI
13001001  8b742408             MOV ESI,dword ptr [ESP + 0x8]
13001005  6683beb200000000     CMP word ptr [ESI + 0xb2],0x0
1300100d  753a                 JNZ 0x13001049
1300100f  b801000000           MOV EAX,0x1
13001014  6844800013           PUSH 0x13008044
13001019  668986a6000000       MOV word ptr [ESI + 0xa6],AX
13001020  8986ae000000         MOV dword ptr [ESI + 0xae],EAX
13001026  668986bc000000       MOV word ptr [ESI + 0xbc],AX
1300102d  56                   PUSH ESI
1300102e  c786aa00000028000000 MOV dword ptr [ESI + 0xaa],0x28
13001038  66c786a40000000600   MOV word ptr [ESI + 0xa4],0x6
13001041  e84a280000           CALL 0x13003890
13001046  83c408               ADD ESP,0x8
13001049  6683beb200000001     CMP word ptr [ESI + 0xb2],0x1
13001051  7512                 JNZ 0x13001065
13001053  6a00                 PUSH 0x0
13001055  6a01                 PUSH 0x1
13001057  6830800013           PUSH 0x13008030
1300105c  56                   PUSH ESI
1300105d  e8be2b0000           CALL 0x13003c20
13001062  83c410               ADD ESP,0x10
13001065  6683beb200000002     CMP word ptr [ESI + 0xb2],0x2
1300106d  7532                 JNZ 0x130010a1
1300106f  6820130013           PUSH 0x13001320
13001074  6a07                 PUSH 0x7
13001076  6a00                 PUSH 0x0
13001078  6a01                 PUSH 0x1
1300107a  56                   PUSH ESI
1300107b  e8e02b0000           CALL 0x13003c60
13001080  83c414               ADD ESP,0x14
13001083  6683beb200000002     CMP word ptr [ESI + 0xb2],0x2
1300108b  7532                 JNZ 0x130010bf
1300108d  68e0140013           PUSH 0x130014e0
13001092  6a22                 PUSH 0x22
13001094  6a00                 PUSH 0x0
13001096  6a01                 PUSH 0x1
13001098  56                   PUSH ESI
13001099  e8c22b0000           CALL 0x13003c60
1300109e  83c414               ADD ESP,0x14
130010a1  6683beb200000002     CMP word ptr [ESI + 0xb2],0x2
130010a9  7532                 JNZ 0x130010dd
130010ab  6870130013           PUSH 0x13001370
130010b0  6a08                 PUSH 0x8
130010b2  6a00                 PUSH 0x0
130010b4  6a01                 PUSH 0x1
130010b6  56                   PUSH ESI
130010b7  e8a42b0000           CALL 0x13003c60
130010bc  83c414               ADD ESP,0x14
130010bf  6683beb200000002     CMP word ptr [ESI + 0xb2],0x2
130010c7  7532                 JNZ 0x130010fb
130010c9  6800140013           PUSH 0x13001400
130010ce  6a09                 PUSH 0x9
130010d0  6a00                 PUSH 0x0
130010d2  6a01                 PUSH 0x1
130010d4  56                   PUSH ESI
130010d5  e8862b0000           CALL 0x13003c60
130010da  83c414               ADD ESP,0x14
130010dd  6683beb200000002     CMP word ptr [ESI + 0xb2],0x2
130010e5  7532                 JNZ 0x13001119
130010e7  68601a0013           PUSH 0x13001a60
130010ec  6a25                 PUSH 0x25
130010ee  6a00                 PUSH 0x0
130010f0  6a01                 PUSH 0x1
130010f2  56                   PUSH ESI
130010f3  e8682b0000           CALL 0x13003c60
130010f8  83c414               ADD ESP,0x14
130010fb  6683beb200000002     CMP word ptr [ESI + 0xb2],0x2
13001103  7532                 JNZ 0x13001137
13001105  6840150013           PUSH 0x13001540
1300110a  6a11                 PUSH 0x11
1300110c  6a00                 PUSH 0x0
1300110e  6a01                 PUSH 0x1
13001110  56                   PUSH ESI
13001111  e84a2b0000           CALL 0x13003c60
13001116  83c414               ADD ESP,0x14
13001119  6683beb200000002     CMP word ptr [ESI + 0xb2],0x2
13001121  7532                 JNZ 0x13001155
13001123  68f0150013           PUSH 0x130015f0
13001128  6a13                 PUSH 0x13
1300112a  6a00                 PUSH 0x0
1300112c  6a01                 PUSH 0x1
1300112e  56                   PUSH ESI
1300112f  e82c2b0000           CALL 0x13003c60
13001134  83c414               ADD ESP,0x14
13001137  6683beb200000002     CMP word ptr [ESI + 0xb2],0x2
1300113f  7532                 JNZ 0x13001173
13001141  68a0160013           PUSH 0x130016a0
13001146  6a12                 PUSH 0x12
13001148  6a00                 PUSH 0x0
1300114a  6a01                 PUSH 0x1
1300114c  56                   PUSH ESI
1300114d  e80e2b0000           CALL 0x13003c60
13001152  83c414               ADD ESP,0x14
13001155  6683beb200000002     CMP word ptr [ESI + 0xb2],0x2
1300115d  7532                 JNZ 0x13001191
1300115f  68d0170013           PUSH 0x130017d0
13001164  6a0d                 PUSH 0xd
13001166  6a00                 PUSH 0x0
13001168  6a01                 PUSH 0x1
1300116a  56                   PUSH ESI
1300116b  e8f02a0000           CALL 0x13003c60
13001170  83c414               ADD ESP,0x14
13001173  6683beb200000002     CMP word ptr [ESI + 0xb2],0x2
1300117b  7532                 JNZ 0x130011af
1300117d  6830180013           PUSH 0x13001830
13001182  6a0e                 PUSH 0xe
13001184  6a00                 PUSH 0x0
13001186  6a01                 PUSH 0x1
13001188  56                   PUSH ESI
13001189  e8d22a0000           CALL 0x13003c60
1300118e  83c414               ADD ESP,0x14
13001191  6683beb200000002     CMP word ptr [ESI + 0xb2],0x2
13001199  7532                 JNZ 0x130011cd
1300119b  6890180013           PUSH 0x13001890
130011a0  6a16                 PUSH 0x16
130011a2  6a00                 PUSH 0x0
130011a4  6a01                 PUSH 0x1
130011a6  56                   PUSH ESI
130011a7  e8b42a0000           CALL 0x13003c60
130011ac  83c414               ADD ESP,0x14
130011af  6683beb200000002     CMP word ptr [ESI + 0xb2],0x2
130011b7  7532                 JNZ 0x130011eb
130011b9  68a0190013           PUSH 0x130019a0
130011be  6a17                 PUSH 0x17
130011c0  6a00                 PUSH 0x0
130011c2  6a01                 PUSH 0x1
130011c4  56                   PUSH ESI
130011c5  e8962a0000           CALL 0x13003c60
130011ca  83c414               ADD ESP,0x14
130011cd  6683beb200000002     CMP word ptr [ESI + 0xb2],0x2
130011d5  7532                 JNZ 0x13001209
130011d7  68201a0013           PUSH 0x13001a20
130011dc  6a19                 PUSH 0x19
130011de  6a00                 PUSH 0x0
130011e0  6a01                 PUSH 0x1
130011e2  56                   PUSH ESI
130011e3  e8782a0000           CALL 0x13003c60
130011e8  83c414               ADD ESP,0x14
130011eb  6683beb200000002     CMP word ptr [ESI + 0xb2],0x2
130011f3  7532                 JNZ 0x13001227
130011f5  68d0120013           PUSH 0x130012d0
130011fa  6a2e                 PUSH 0x2e
130011fc  6a00                 PUSH 0x0
130011fe  6a01                 PUSH 0x1
13001200  56                   PUSH ESI
13001201  e85a2a0000           CALL 0x13003c60
13001206  83c414               ADD ESP,0x14
13001209  6683beb200000002     CMP word ptr [ESI + 0xb2],0x2
13001211  7532                 JNZ 0x13001245
13001213  68201b0013           PUSH 0x13001b20
13001218  6a00                 PUSH 0x0
1300121a  6a01                 PUSH 0x1
1300121c  6a01                 PUSH 0x1
1300121e  56                   PUSH ESI
1300121f  e83c2a0000           CALL 0x13003c60
13001224  83c414               ADD ESP,0x14
13001227  6683beb200000002     CMP word ptr [ESI + 0xb2],0x2
1300122f  7532                 JNZ 0x13001263
13001231  68901d0013           PUSH 0x13001d90
13001236  6a01                 PUSH 0x1
13001238  6a01                 PUSH 0x1
1300123a  6a01                 PUSH 0x1
1300123c  56                   PUSH ESI
1300123d  e81e2a0000           CALL 0x13003c60
13001242  83c414               ADD ESP,0x14
13001245  6683beb200000002     CMP word ptr [ESI + 0xb2],0x2
1300124d  7532                 JNZ 0x13001281
1300124f  68a01d0013           PUSH 0x13001da0
13001254  6a02                 PUSH 0x2
13001256  6a01                 PUSH 0x1
13001258  6a01                 PUSH 0x1
1300125a  56                   PUSH ESI
1300125b  e8002a0000           CALL 0x13003c60
13001260  83c414               ADD ESP,0x14
13001263  6683beb200000002     CMP word ptr [ESI + 0xb2],0x2
1300126b  7532                 JNZ 0x1300129f
1300126d  68901e0013           PUSH 0x13001e90
13001272  6a03                 PUSH 0x3
13001274  6a01                 PUSH 0x1
13001276  6a01                 PUSH 0x1
13001278  56                   PUSH ESI
13001279  e8e2290000           CALL 0x13003c60
1300127e  83c414               ADD ESP,0x14
13001281  6683beb200000002     CMP word ptr [ESI + 0xb2],0x2
13001289  7532                 JNZ 0x130012bd
1300128b  68a01e0013           PUSH 0x13001ea0
13001290  6a05                 PUSH 0x5
13001292  6a01                 PUSH 0x1
13001294  6a01                 PUSH 0x1
13001296  56                   PUSH ESI
13001297  e8c4290000           CALL 0x13003c60
1300129c  83c414               ADD ESP,0x14
1300129f  6683beb200000002     CMP word ptr [ESI + 0xb2],0x2
130012a7  7514                 JNZ 0x130012bd
130012a9  68801e0013           PUSH 0x13001e80
130012ae  6a04                 PUSH 0x4
130012b0  6a01                 PUSH 0x1
130012b2  6a01                 PUSH 0x1
130012b4  56                   PUSH ESI
130012b5  e8a6290000           CALL 0x13003c60
130012ba  83c414               ADD ESP,0x14
130012bd  56                   PUSH ESI
130012be  e8cd290000           CALL 0x13003c90
130012c3  83c404               ADD ESP,0x4
130012c6  5e                   POP ESI
130012c7  c3                   RET
; undefined 8 bytes at 130012c8

; ==== FUNCTION FUN_130012d0 entry=130012d0 sig=undefined4 __cdecl FUN_130012d0(undefined4 param_1)
130012d0  83ec04               SUB ESP,0x4
130012d3  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
130012d9  0fbf151c700013       MOVSX EDX,word ptr [0x1300701c]
130012e0  8d442400             LEA EAX,[ESP]
130012e4  50                   PUSH EAX
130012e5  6a2c                 PUSH 0x2c
130012e7  6a01                 PUSH 0x1
130012e9  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
130012ec  50                   PUSH EAX
130012ed  e88e260000           CALL 0x13003980
130012f2  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
130012f6  8b542410             MOV EDX,dword ptr [ESP + 0x10]
130012fa  83c410               ADD ESP,0x10
130012fd  6a0c                 PUSH 0xc
130012ff  6a17                 PUSH 0x17
13001301  684c800013           PUSH 0x1300804c
13001306  51                   PUSH ECX
13001307  52                   PUSH EDX
13001308  ffd0                 CALL EAX
1300130a  83c414               ADD ESP,0x14
1300130d  a3348d0013           MOV [0x13008d34],EAX
13001312  33c0                 XOR EAX,EAX
13001314  83c404               ADD ESP,0x4
13001317  c3                   RET
; undefined 8 bytes at 13001318

; ==== FUNCTION FUN_13001320 entry=13001320 sig=undefined4 __cdecl FUN_13001320(undefined2 * param_1)
13001320  8b442404             MOV EAX,dword ptr [ESP + 0x4]
13001324  ba17000000           MOV EDX,0x17
13001329  668910               MOV word ptr [EAX],DX
1300132c  33c9                 XOR ECX,ECX
1300132e  6689500a             MOV word ptr [EAX + 0xa],DX
13001332  894806               MOV dword ptr [EAX + 0x6],ECX
13001335  66895014             MOV word ptr [EAX + 0x14],DX
13001339  894810               MOV dword ptr [EAX + 0x10],ECX
1300133c  ba01000000           MOV EDX,0x1
13001341  89481a               MOV dword ptr [EAX + 0x1a],ECX
13001344  895016               MOV dword ptr [EAX + 0x16],EDX
13001347  885026               MOV byte ptr [EAX + 0x26],DL
1300134a  89481e               MOV dword ptr [EAX + 0x1e],ECX
1300134d  894822               MOV dword ptr [EAX + 0x22],ECX
13001350  c7400265000000       MOV dword ptr [EAX + 0x2],0x65
13001357  c7400c66000000       MOV dword ptr [EAX + 0xc],0x66
1300135e  33c0                 XOR EAX,EAX
13001360  c3                   RET
; undefined 15 bytes at 13001361

; ==== FUNCTION FUN_13001370 entry=13001370 sig=undefined4 __cdecl FUN_13001370(undefined4 * param_1, undefined4 * param_2)
13001370  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
13001374  53                   PUSH EBX
13001375  66c7011700           MOV word ptr [ECX],0x17
1300137a  56                   PUSH ESI
1300137b  57                   PUSH EDI
1300137c  33d2                 XOR EDX,EDX
1300137e  8b742414             MOV ESI,dword ptr [ESP + 0x14]
13001382  55                   PUSH EBP
13001383  c74102d1070000       MOV dword ptr [ECX + 0x2],0x7d1
1300138a  895106               MOV dword ptr [ECX + 0x6],EDX
1300138d  8d790a               LEA EDI,[ECX + 0xa]
13001390  8b06                 MOV EAX,dword ptr [ESI]
13001392  8901                 MOV dword ptr [ECX],EAX
13001394  8b5e04               MOV EBX,dword ptr [ESI + 0x4]
13001397  8d460a               LEA EAX,[ESI + 0xa]
1300139a  895904               MOV dword ptr [ECX + 0x4],EBX
1300139d  668b6e08             MOV BP,word ptr [ESI + 0x8]
130013a1  66896908             MOV word ptr [ECX + 0x8],BP
130013a5  895110               MOV dword ptr [ECX + 0x10],EDX
130013a8  c7410c01000000       MOV dword ptr [ECX + 0xc],0x1
130013af  66c7071700           MOV word ptr [EDI],0x17
130013b4  8b18                 MOV EBX,dword ptr [EAX]
130013b6  891f                 MOV dword ptr [EDI],EBX
130013b8  8b6804               MOV EBP,dword ptr [EAX + 0x4]
130013bb  896f04               MOV dword ptr [EDI + 0x4],EBP
130013be  83c614               ADD ESI,0x14
130013c1  668b4008             MOV AX,word ptr [EAX + 0x8]
130013c5  66894708             MOV word ptr [EDI + 0x8],AX
130013c9  89511a               MOV dword ptr [ECX + 0x1a],EDX
130013cc  c7411601000000       MOV dword ptr [ECX + 0x16],0x1
130013d3  8d7914               LEA EDI,[ECX + 0x14]
130013d6  66c7071700           MOV word ptr [EDI],0x17
130013db  8b06                 MOV EAX,dword ptr [ESI]
130013dd  8907                 MOV dword ptr [EDI],EAX
130013df  8b5e04               MOV EBX,dword ptr [ESI + 0x4]
130013e2  33c0                 XOR EAX,EAX
130013e4  895f04               MOV dword ptr [EDI + 0x4],EBX
130013e7  668b6e08             MOV BP,word ptr [ESI + 0x8]
130013eb  66896f08             MOV word ptr [EDI + 0x8],BP
130013ef  89511e               MOV dword ptr [ECX + 0x1e],EDX
130013f2  5d                   POP EBP
130013f3  895122               MOV dword ptr [ECX + 0x22],EDX
130013f6  c6412601             MOV byte ptr [ECX + 0x26],0x1
130013fa  5f                   POP EDI
130013fb  5e                   POP ESI
130013fc  5b                   POP EBX
130013fd  c3                   RET
; undefined 2 bytes at 130013fe

; ==== FUNCTION FUN_13001400 entry=13001400 sig=undefined4 __cdecl FUN_13001400(int param_1)
13001400  83ec1c               SUB ESP,0x1c
13001403  53                   PUSH EBX
13001404  56                   PUSH ESI
13001405  8b742428             MOV ESI,dword ptr [ESP + 0x28]
13001409  57                   PUSH EDI
1300140a  55                   PUSH EBP
1300140b  33ff                 XOR EDI,EDI
1300140d  397e22               CMP dword ptr [ESI + 0x22],EDI
13001410  0f84a8000000         JZ 0x130014be
13001416  897c241e             MOV dword ptr [ESP + 0x1e],EDI
1300141a  897c2422             MOV dword ptr [ESP + 0x22],EDI
1300141e  8d4c2410             LEA ECX,[ESP + 0x10]
13001422  897c241a             MOV dword ptr [ESP + 0x1a],EDI
13001426  897c2426             MOV dword ptr [ESP + 0x26],EDI
1300142a  51                   PUSH ECX
1300142b  0fbf051c700013       MOVSX EAX,word ptr [0x1300701c]
13001432  66c744241c6900       MOV word ptr [ESP + 0x1c],0x69
13001439  8d1c8500000000       LEA EBX,[EAX*0x4 + 0x0]
13001440  6a05                 PUSH 0x5
13001442  6a01                 PUSH 0x1
13001444  a1308d0013           MOV EAX,[0x13008d30]
13001449  8b1418               MOV EDX,dword ptr [EAX + EBX*0x1]
1300144c  52                   PUSH EDX
1300144d  e82e250000           CALL 0x13003980
13001452  8d4c2428             LEA ECX,[ESP + 0x28]
13001456  83c410               ADD ESP,0x10
13001459  8be8                 MOV EBP,EAX
1300145b  51                   PUSH ECX
1300145c  57                   PUSH EDI
1300145d  6860800013           PUSH 0x13008060
13001462  56                   PUSH ESI
13001463  e808250000           CALL 0x13003970
13001468  83c404               ADD ESP,0x4
1300146b  50                   PUSH EAX
1300146c  8b442420             MOV EAX,dword ptr [ESP + 0x20]
13001470  50                   PUSH EAX
13001471  ffd5                 CALL EBP
13001473  83c414               ADD ESP,0x14
13001476  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
1300147c  a3348d0013           MOV [0x13008d34],EAX
13001481  8d442414             LEA EAX,[ESP + 0x14]
13001485  50                   PUSH EAX
13001486  8b1419               MOV EDX,dword ptr [ECX + EBX*0x1]
13001489  6a24                 PUSH 0x24
1300148b  6a01                 PUSH 0x1
1300148d  52                   PUSH EDX
1300148e  e8ed240000           CALL 0x13003980
13001493  8b54242a             MOV EDX,dword ptr [ESP + 0x2a]
13001497  8b5c2424             MOV EBX,dword ptr [ESP + 0x24]
1300149b  83c410               ADD ESP,0x10
1300149e  8b4e22               MOV ECX,dword ptr [ESI + 0x22]
130014a1  51                   PUSH ECX
130014a2  52                   PUSH EDX
130014a3  53                   PUSH EBX
130014a4  ffd0                 CALL EAX
130014a6  8d4c2424             LEA ECX,[ESP + 0x24]
130014aa  83c40c               ADD ESP,0xc
130014ad  a3348d0013           MOV [0x13008d34],EAX
130014b2  51                   PUSH ECX
130014b3  897e22               MOV dword ptr [ESI + 0x22],EDI
130014b6  e825270000           CALL 0x13003be0
130014bb  83c404               ADD ESP,0x4
130014be  6a01                 PUSH 0x1
130014c0  56                   PUSH ESI
130014c1  e8da080000           CALL 0x13001da0
130014c6  83c408               ADD ESP,0x8
130014c9  33c0                 XOR EAX,EAX
130014cb  5d                   POP EBP
130014cc  5f                   POP EDI
130014cd  5e                   POP ESI
130014ce  5b                   POP EBX
130014cf  83c41c               ADD ESP,0x1c
130014d2  c3                   RET
; undefined 13 bytes at 130014d3

; ==== FUNCTION FUN_130014e0 entry=130014e0 sig=undefined4 __cdecl FUN_130014e0(undefined4 * param_1, undefined4 * param_2)
130014e0  8b542408             MOV EDX,dword ptr [ESP + 0x8]
130014e4  56                   PUSH ESI
130014e5  8b4c2408             MOV ECX,dword ptr [ESP + 0x8]
130014e9  57                   PUSH EDI
130014ea  8b02                 MOV EAX,dword ptr [EDX]
130014ec  8901                 MOV dword ptr [ECX],EAX
130014ee  8b7204               MOV ESI,dword ptr [EDX + 0x4]
130014f1  897104               MOV dword ptr [ECX + 0x4],ESI
130014f4  8d720a               LEA ESI,[EDX + 0xa]
130014f7  668b7a08             MOV DI,word ptr [EDX + 0x8]
130014fb  66897908             MOV word ptr [ECX + 0x8],DI
130014ff  8d790a               LEA EDI,[ECX + 0xa]
13001502  8b06                 MOV EAX,dword ptr [ESI]
13001504  83c214               ADD EDX,0x14
13001507  83c114               ADD ECX,0x14
1300150a  8907                 MOV dword ptr [EDI],EAX
1300150c  8b4604               MOV EAX,dword ptr [ESI + 0x4]
1300150f  894704               MOV dword ptr [EDI + 0x4],EAX
13001512  668b7608             MOV SI,word ptr [ESI + 0x8]
13001516  66897708             MOV word ptr [EDI + 0x8],SI
1300151a  8b02                 MOV EAX,dword ptr [EDX]
1300151c  5f                   POP EDI
1300151d  8901                 MOV dword ptr [ECX],EAX
1300151f  33c0                 XOR EAX,EAX
13001521  8b7204               MOV ESI,dword ptr [EDX + 0x4]
13001524  897104               MOV dword ptr [ECX + 0x4],ESI
13001527  5e                   POP ESI
13001528  668b5208             MOV DX,word ptr [EDX + 0x8]
1300152c  66895108             MOV word ptr [ECX + 0x8],DX
13001530  c3                   RET
; undefined 15 bytes at 13001531

; ==== FUNCTION FUN_13001540 entry=13001540 sig=undefined4 __cdecl FUN_13001540(int param_1, int param_2, undefined4 param_3, int * param_4)
13001540  83ec10               SUB ESP,0x10
13001543  8d442404             LEA EAX,[ESP + 0x4]
13001547  53                   PUSH EBX
13001548  56                   PUSH ESI
13001549  57                   PUSH EDI
1300154a  8b74242c             MOV ESI,dword ptr [ESP + 0x2c]
1300154e  50                   PUSH EAX
1300154f  8b5c2428             MOV EBX,dword ptr [ESP + 0x28]
13001553  6a04                 PUSH 0x4
13001555  6a01                 PUSH 0x1
13001557  c70602000000         MOV dword ptr [ESI],0x2
1300155d  53                   PUSH EBX
1300155e  e81d240000           CALL 0x13003980
13001563  8d4c241c             LEA ECX,[ESP + 0x1c]
13001567  8b7c2430             MOV EDI,dword ptr [ESP + 0x30]
1300156b  8b542420             MOV EDX,dword ptr [ESP + 0x20]
1300156f  83c410               ADD ESP,0x10
13001572  51                   PUSH ECX
13001573  57                   PUSH EDI
13001574  52                   PUSH EDX
13001575  ffd0                 CALL EAX
13001577  8d4c2420             LEA ECX,[ESP + 0x20]
1300157b  83c40c               ADD ESP,0xc
1300157e  a3348d0013           MOV [0x13008d34],EAX
13001583  8b44240c             MOV EAX,dword ptr [ESP + 0xc]
13001587  51                   PUSH ECX
13001588  0106                 ADD dword ptr [ESI],EAX
1300158a  6a04                 PUSH 0x4
1300158c  6a01                 PUSH 0x1
1300158e  53                   PUSH EBX
1300158f  e8ec230000           CALL 0x13003980
13001594  8d4c241c             LEA ECX,[ESP + 0x1c]
13001598  83c410               ADD ESP,0x10
1300159b  8d570a               LEA EDX,[EDI + 0xa]
1300159e  51                   PUSH ECX
1300159f  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
130015a3  52                   PUSH EDX
130015a4  51                   PUSH ECX
130015a5  ffd0                 CALL EAX
130015a7  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
130015ab  8d542424             LEA EDX,[ESP + 0x24]
130015af  83c40c               ADD ESP,0xc
130015b2  a3348d0013           MOV [0x13008d34],EAX
130015b7  010e                 ADD dword ptr [ESI],ECX
130015b9  52                   PUSH EDX
130015ba  6a04                 PUSH 0x4
130015bc  6a01                 PUSH 0x1
130015be  53                   PUSH EBX
130015bf  83c714               ADD EDI,0x14
130015c2  e8b9230000           CALL 0x13003980
130015c7  8d4c241c             LEA ECX,[ESP + 0x1c]
130015cb  8b542428             MOV EDX,dword ptr [ESP + 0x28]
130015cf  83c410               ADD ESP,0x10
130015d2  51                   PUSH ECX
130015d3  57                   PUSH EDI
130015d4  52                   PUSH EDX
130015d5  ffd0                 CALL EAX
130015d7  83c40c               ADD ESP,0xc
130015da  a3348d0013           MOV [0x13008d34],EAX
130015df  8b44240c             MOV EAX,dword ptr [ESP + 0xc]
130015e3  0106                 ADD dword ptr [ESI],EAX
130015e5  33c0                 XOR EAX,EAX
130015e7  5f                   POP EDI
130015e8  5e                   POP ESI
130015e9  5b                   POP EBX
130015ea  83c410               ADD ESP,0x10
130015ed  c3                   RET
; undefined 2 bytes at 130015ee

; ==== FUNCTION FUN_130015f0 entry=130015f0 sig=undefined4 __cdecl FUN_130015f0(int param_1, int param_2)
130015f0  83ec14               SUB ESP,0x14
130015f3  66c74424020200       MOV word ptr [ESP + 0x2],0x2
130015fa  8d442404             LEA EAX,[ESP + 0x4]
130015fe  56                   PUSH ESI
130015ff  8b742420             MOV ESI,dword ptr [ESP + 0x20]
13001603  57                   PUSH EDI
13001604  50                   PUSH EAX
13001605  6a07                 PUSH 0x7
13001607  6a01                 PUSH 0x1
13001609  56                   PUSH ESI
1300160a  e871230000           CALL 0x13003980
1300160f  8d4c241a             LEA ECX,[ESP + 0x1a]
13001613  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
13001617  83c410               ADD ESP,0x10
1300161a  6a01                 PUSH 0x1
1300161c  51                   PUSH ECX
1300161d  52                   PUSH EDX
1300161e  ffd0                 CALL EAX
13001620  8d4c241c             LEA ECX,[ESP + 0x1c]
13001624  83c40c               ADD ESP,0xc
13001627  a3348d0013           MOV [0x13008d34],EAX
1300162c  51                   PUSH ECX
1300162d  6a05                 PUSH 0x5
1300162f  6a01                 PUSH 0x1
13001631  56                   PUSH ESI
13001632  e849230000           CALL 0x13003980
13001637  8b7c2430             MOV EDI,dword ptr [ESP + 0x30]
1300163b  8b4c2420             MOV ECX,dword ptr [ESP + 0x20]
1300163f  83c410               ADD ESP,0x10
13001642  57                   PUSH EDI
13001643  51                   PUSH ECX
13001644  ffd0                 CALL EAX
13001646  83c408               ADD ESP,0x8
13001649  a3348d0013           MOV [0x13008d34],EAX
1300164e  8d442414             LEA EAX,[ESP + 0x14]
13001652  50                   PUSH EAX
13001653  6a05                 PUSH 0x5
13001655  6a01                 PUSH 0x1
13001657  56                   PUSH ESI
13001658  e823230000           CALL 0x13003980
1300165d  8b542424             MOV EDX,dword ptr [ESP + 0x24]
13001661  83c410               ADD ESP,0x10
13001664  8d4f0a               LEA ECX,[EDI + 0xa]
13001667  51                   PUSH ECX
13001668  52                   PUSH EDX
13001669  ffd0                 CALL EAX
1300166b  8d4c2420             LEA ECX,[ESP + 0x20]
1300166f  83c408               ADD ESP,0x8
13001672  a3348d0013           MOV [0x13008d34],EAX
13001677  51                   PUSH ECX
13001678  6a05                 PUSH 0x5
1300167a  83c714               ADD EDI,0x14
1300167d  6a01                 PUSH 0x1
1300167f  56                   PUSH ESI
13001680  e8fb220000           CALL 0x13003980
13001685  8b4c2428             MOV ECX,dword ptr [ESP + 0x28]
13001689  83c410               ADD ESP,0x10
1300168c  57                   PUSH EDI
1300168d  51                   PUSH ECX
1300168e  ffd0                 CALL EAX
13001690  83c408               ADD ESP,0x8
13001693  5f                   POP EDI
13001694  a3348d0013           MOV [0x13008d34],EAX
13001699  33c0                 XOR EAX,EAX
1300169b  5e                   POP ESI
1300169c  83c414               ADD ESP,0x14
1300169f  c3                   RET

; ==== FUNCTION FUN_130016a0 entry=130016a0 sig=undefined4 __cdecl FUN_130016a0(int param_1, int param_2)
130016a0  83ec10               SUB ESP,0x10
130016a3  8d442404             LEA EAX,[ESP + 0x4]
130016a7  56                   PUSH ESI
130016a8  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
130016ac  57                   PUSH EDI
130016ad  50                   PUSH EAX
130016ae  6a08                 PUSH 0x8
130016b0  6a01                 PUSH 0x1
130016b2  56                   PUSH ESI
130016b3  e8c8220000           CALL 0x13003980
130016b8  8d4c241a             LEA ECX,[ESP + 0x1a]
130016bc  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
130016c0  83c410               ADD ESP,0x10
130016c3  6a01                 PUSH 0x1
130016c5  51                   PUSH ECX
130016c6  52                   PUSH EDX
130016c7  ffd0                 CALL EAX
130016c9  83c40c               ADD ESP,0xc
130016cc  a3348d0013           MOV [0x13008d34],EAX
130016d1  66837c240a01         CMP word ptr [ESP + 0xa],0x1
130016d7  7567                 JNZ 0x13001740
130016d9  8d44240c             LEA EAX,[ESP + 0xc]
130016dd  50                   PUSH EAX
130016de  6a06                 PUSH 0x6
130016e0  6a01                 PUSH 0x1
130016e2  56                   PUSH ESI
130016e3  e898220000           CALL 0x13003980
130016e8  8b7c242c             MOV EDI,dword ptr [ESP + 0x2c]
130016ec  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
130016f0  83c410               ADD ESP,0x10
130016f3  57                   PUSH EDI
130016f4  51                   PUSH ECX
130016f5  ffd0                 CALL EAX
130016f7  83c408               ADD ESP,0x8
130016fa  a3348d0013           MOV [0x13008d34],EAX
130016ff  8d442410             LEA EAX,[ESP + 0x10]
13001703  50                   PUSH EAX
13001704  6a06                 PUSH 0x6
13001706  6a01                 PUSH 0x1
13001708  56                   PUSH ESI
13001709  e872220000           CALL 0x13003980
1300170e  8b542420             MOV EDX,dword ptr [ESP + 0x20]
13001712  83c410               ADD ESP,0x10
13001715  8d4f0a               LEA ECX,[EDI + 0xa]
13001718  51                   PUSH ECX
13001719  52                   PUSH EDX
1300171a  ffd0                 CALL EAX
1300171c  83c408               ADD ESP,0x8
1300171f  a3348d0013           MOV [0x13008d34],EAX
13001724  c7471601000000       MOV dword ptr [EDI + 0x16],0x1
1300172b  c7471a00000000       MOV dword ptr [EDI + 0x1a],0x0
13001732  66c747141700         MOV word ptr [EDI + 0x14],0x17
13001738  33c0                 XOR EAX,EAX
1300173a  5f                   POP EDI
1300173b  5e                   POP ESI
1300173c  83c410               ADD ESP,0x10
1300173f  c3                   RET
13001740  66837c240a02         CMP word ptr [ESP + 0xa],0x2
13001746  7578                 JNZ 0x130017c0
13001748  8d44240c             LEA EAX,[ESP + 0xc]
1300174c  50                   PUSH EAX
1300174d  6a06                 PUSH 0x6
1300174f  6a01                 PUSH 0x1
13001751  56                   PUSH ESI
13001752  e829220000           CALL 0x13003980
13001757  8b7c242c             MOV EDI,dword ptr [ESP + 0x2c]
1300175b  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
1300175f  83c410               ADD ESP,0x10
13001762  57                   PUSH EDI
13001763  51                   PUSH ECX
13001764  ffd0                 CALL EAX
13001766  83c408               ADD ESP,0x8
13001769  a3348d0013           MOV [0x13008d34],EAX
1300176e  8d442410             LEA EAX,[ESP + 0x10]
13001772  50                   PUSH EAX
13001773  6a06                 PUSH 0x6
13001775  6a01                 PUSH 0x1
13001777  56                   PUSH ESI
13001778  e803220000           CALL 0x13003980
1300177d  8b542420             MOV EDX,dword ptr [ESP + 0x20]
13001781  83c410               ADD ESP,0x10
13001784  8d4f0a               LEA ECX,[EDI + 0xa]
13001787  51                   PUSH ECX
13001788  52                   PUSH EDX
13001789  ffd0                 CALL EAX
1300178b  8d4c241c             LEA ECX,[ESP + 0x1c]
1300178f  83c408               ADD ESP,0x8
13001792  a3348d0013           MOV [0x13008d34],EAX
13001797  51                   PUSH ECX
13001798  6a06                 PUSH 0x6
1300179a  83c714               ADD EDI,0x14
1300179d  6a01                 PUSH 0x1
1300179f  56                   PUSH ESI
130017a0  e8db210000           CALL 0x13003980
130017a5  8b4c2424             MOV ECX,dword ptr [ESP + 0x24]
130017a9  83c410               ADD ESP,0x10
130017ac  57                   PUSH EDI
130017ad  51                   PUSH ECX
130017ae  ffd0                 CALL EAX
130017b0  83c408               ADD ESP,0x8
130017b3  a3348d0013           MOV [0x13008d34],EAX
130017b8  33c0                 XOR EAX,EAX
130017ba  5f                   POP EDI
130017bb  5e                   POP ESI
130017bc  83c410               ADD ESP,0x10
130017bf  c3                   RET
130017c0  b800000100           MOV EAX,0x10000
130017c5  5f                   POP EDI
130017c6  5e                   POP ESI
130017c7  83c410               ADD ESP,0x10
130017ca  c3                   RET
; undefined 5 bytes at 130017cb

; ==== FUNCTION FUN_130017d0 entry=130017d0 sig=undefined4 __cdecl FUN_130017d0(int param_1)
130017d0  83ec08               SUB ESP,0x8
130017d3  8d442400             LEA EAX,[ESP]
130017d7  56                   PUSH ESI
130017d8  8b742410             MOV ESI,dword ptr [ESP + 0x10]
130017dc  50                   PUSH EAX
130017dd  6a21                 PUSH 0x21
130017df  6a00                 PUSH 0x0
130017e1  56                   PUSH ESI
130017e2  e899210000           CALL 0x13003980
130017e7  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
130017eb  83c410               ADD ESP,0x10
130017ee  56                   PUSH ESI
130017ef  6a01                 PUSH 0x1
130017f1  51                   PUSH ECX
130017f2  ffd0                 CALL EAX
130017f4  83c40c               ADD ESP,0xc
130017f7  a3348d0013           MOV [0x13008d34],EAX
130017fc  8d442408             LEA EAX,[ESP + 0x8]
13001800  50                   PUSH EAX
13001801  6a21                 PUSH 0x21
13001803  6a00                 PUSH 0x0
13001805  56                   PUSH ESI
13001806  83c60a               ADD ESI,0xa
13001809  e872210000           CALL 0x13003980
1300180e  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
13001812  83c410               ADD ESP,0x10
13001815  56                   PUSH ESI
13001816  6a01                 PUSH 0x1
13001818  51                   PUSH ECX
13001819  ffd0                 CALL EAX
1300181b  83c40c               ADD ESP,0xc
1300181e  a3348d0013           MOV [0x13008d34],EAX
13001823  33c0                 XOR EAX,EAX
13001825  5e                   POP ESI
13001826  83c408               ADD ESP,0x8
13001829  c3                   RET
; undefined 6 bytes at 1300182a

; ==== FUNCTION FUN_13001830 entry=13001830 sig=undefined4 __cdecl FUN_13001830(int param_1)
13001830  83ec08               SUB ESP,0x8
13001833  8d442400             LEA EAX,[ESP]
13001837  56                   PUSH ESI
13001838  8b742410             MOV ESI,dword ptr [ESP + 0x10]
1300183c  50                   PUSH EAX
1300183d  6a21                 PUSH 0x21
1300183f  6a00                 PUSH 0x0
13001841  56                   PUSH ESI
13001842  e839210000           CALL 0x13003980
13001847  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
1300184b  83c410               ADD ESP,0x10
1300184e  56                   PUSH ESI
1300184f  6a02                 PUSH 0x2
13001851  51                   PUSH ECX
13001852  ffd0                 CALL EAX
13001854  83c40c               ADD ESP,0xc
13001857  a3348d0013           MOV [0x13008d34],EAX
1300185c  8d442408             LEA EAX,[ESP + 0x8]
13001860  50                   PUSH EAX
13001861  6a21                 PUSH 0x21
13001863  6a00                 PUSH 0x0
13001865  56                   PUSH ESI
13001866  83c60a               ADD ESI,0xa
13001869  e812210000           CALL 0x13003980
1300186e  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
13001872  83c410               ADD ESP,0x10
13001875  56                   PUSH ESI
13001876  6a02                 PUSH 0x2
13001878  51                   PUSH ECX
13001879  ffd0                 CALL EAX
1300187b  83c40c               ADD ESP,0xc
1300187e  a3348d0013           MOV [0x13008d34],EAX
13001883  33c0                 XOR EAX,EAX
13001885  5e                   POP ESI
13001886  83c408               ADD ESP,0x8
13001889  c3                   RET
; undefined 6 bytes at 1300188a

; ==== FUNCTION FUN_13001890 entry=13001890 sig=undefined4 __cdecl FUN_13001890(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
13001890  8b442408             MOV EAX,dword ptr [ESP + 0x8]
13001894  56                   PUSH ESI
13001895  684c800013           PUSH 0x1300804c
1300189a  50                   PUSH EAX
1300189b  e850200000           CALL 0x130038f0
130018a0  83c408               ADD ESP,0x8
130018a3  84c0                 TEST AL,AL
130018a5  0f84ee000000         JZ 0x13001999
130018ab  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
130018af  668b31               MOV SI,word ptr [ECX]
130018b2  6683fe17             CMP SI,0x17
130018b6  740a                 JZ 0x130018c2
130018b8  6683fe6a             CMP SI,0x6a
130018bc  0f85d0000000         JNZ 0x13001992
130018c2  8b442410             MOV EAX,dword ptr [ESP + 0x10]
130018c6  85c0                 TEST EAX,EAX
130018c8  0f84c4000000         JZ 0x13001992
130018ce  66833801             CMP word ptr [EAX],0x1
130018d2  0f85ba000000         JNZ 0x13001992
130018d8  8b4002               MOV EAX,dword ptr [EAX + 0x2]
130018db  8bd0                 MOV EDX,EAX
130018dd  81e2000000ff         AND EDX,0xff000000
130018e3  81fa00000080         CMP EDX,0x80000000
130018e9  0f859c000000         JNZ 0x1300198b
130018ef  25ffffff00           AND EAX,0xffffff
130018f4  83f801               CMP EAX,0x1
130018f7  0f8c8e000000         JL 0x1300198b
130018fd  83f803               CMP EAX,0x3
13001900  0f8f85000000         JG 0x1300198b
13001906  6683fe6a             CMP SI,0x6a
1300190a  7513                 JNZ 0x1300191f
1300190c  c7410200000000       MOV dword ptr [ECX + 0x2],0x0
13001913  c7410600000000       MOV dword ptr [ECX + 0x6],0x0
1300191a  66c7011700           MOV word ptr [ECX],0x17
1300191f  83f801               CMP EAX,0x1
13001922  7411                 JZ 0x13001935
13001924  83f802               CMP EAX,0x2
13001927  7426                 JZ 0x1300194f
13001929  83f803               CMP EAX,0x3
1300192c  743f                 JZ 0x1300196d
1300192e  b800000100           MOV EAX,0x10000
13001933  5e                   POP ESI
13001934  c3                   RET
13001935  8b542408             MOV EDX,dword ptr [ESP + 0x8]
13001939  8b02                 MOV EAX,dword ptr [EDX]
1300193b  8901                 MOV dword ptr [ECX],EAX
1300193d  33c0                 XOR EAX,EAX
1300193f  8b7204               MOV ESI,dword ptr [EDX + 0x4]
13001942  897104               MOV dword ptr [ECX + 0x4],ESI
13001945  5e                   POP ESI
13001946  668b5208             MOV DX,word ptr [EDX + 0x8]
1300194a  66895108             MOV word ptr [ECX + 0x8],DX
1300194e  c3                   RET
1300194f  8b542408             MOV EDX,dword ptr [ESP + 0x8]
13001953  8b420a               MOV EAX,dword ptr [EDX + 0xa]
13001956  83c20a               ADD EDX,0xa
13001959  8901                 MOV dword ptr [ECX],EAX
1300195b  33c0                 XOR EAX,EAX
1300195d  8b7204               MOV ESI,dword ptr [EDX + 0x4]
13001960  897104               MOV dword ptr [ECX + 0x4],ESI
13001963  5e                   POP ESI
13001964  668b5208             MOV DX,word ptr [EDX + 0x8]
13001968  66895108             MOV word ptr [ECX + 0x8],DX
1300196c  c3                   RET
1300196d  8b542408             MOV EDX,dword ptr [ESP + 0x8]
13001971  8b4214               MOV EAX,dword ptr [EDX + 0x14]
13001974  83c214               ADD EDX,0x14
13001977  8901                 MOV dword ptr [ECX],EAX
13001979  33c0                 XOR EAX,EAX
1300197b  8b7204               MOV ESI,dword ptr [EDX + 0x4]
1300197e  897104               MOV dword ptr [ECX + 0x4],ESI
13001981  5e                   POP ESI
13001982  668b5208             MOV DX,word ptr [EDX + 0x8]
13001986  66895108             MOV word ptr [ECX + 0x8],DX
1300198a  c3                   RET
1300198b  b800000100           MOV EAX,0x10000
13001990  5e                   POP ESI
13001991  c3                   RET
13001992  b800000100           MOV EAX,0x10000
13001997  5e                   POP ESI
13001998  c3                   RET
13001999  b800000100           MOV EAX,0x10000
1300199e  5e                   POP ESI
1300199f  c3                   RET

; ==== FUNCTION FUN_130019a0 entry=130019a0 sig=undefined4 __cdecl FUN_130019a0(undefined4 param_1, uint * param_2, undefined4 param_3, undefined4 param_4)
130019a0  8b442408             MOV EAX,dword ptr [ESP + 0x8]
130019a4  83ec30               SUB ESP,0x30
130019a7  6874800013           PUSH 0x13008074
130019ac  50                   PUSH EAX
130019ad  e83e1f0000           CALL 0x130038f0
130019b2  83c408               ADD ESP,0x8
130019b5  84c0                 TEST AL,AL
130019b7  745c                 JZ 0x13001a15
130019b9  66c74424041400       MOV word ptr [ESP + 0x4],0x14
130019c0  8d442400             LEA EAX,[ESP]
130019c4  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
130019ca  0fbf1548700013       MOVSX EDX,word ptr [0x13007048]
130019d1  66c74424060100       MOV word ptr [ESP + 0x6],0x1
130019d8  50                   PUSH EAX
130019d9  6a00                 PUSH 0x0
130019db  6a01                 PUSH 0x1
130019dd  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
130019e0  50                   PUSH EAX
130019e1  e89a1f0000           CALL 0x13003980
130019e6  8d4c2414             LEA ECX,[ESP + 0x14]
130019ea  8b542450             MOV EDX,dword ptr [ESP + 0x50]
130019ee  83c410               ADD ESP,0x10
130019f1  51                   PUSH ECX
130019f2  52                   PUSH EDX
130019f3  8b4c243c             MOV ECX,dword ptr [ESP + 0x3c]
130019f7  8b542408             MOV EDX,dword ptr [ESP + 0x8]
130019fb  51                   PUSH ECX
130019fc  52                   PUSH EDX
130019fd  ffd0                 CALL EAX
130019ff  83c410               ADD ESP,0x10
13001a02  a3348d0013           MOV [0x13008d34],EAX
13001a07  66837c240600         CMP word ptr [ESP + 0x6],0x0
13001a0d  7406                 JZ 0x13001a15
13001a0f  33c0                 XOR EAX,EAX
13001a11  83c430               ADD ESP,0x30
13001a14  c3                   RET
13001a15  b800000100           MOV EAX,0x10000
13001a1a  83c430               ADD ESP,0x30
13001a1d  c3                   RET
; undefined 2 bytes at 13001a1e

; ==== FUNCTION FUN_13001a20 entry=13001a20 sig=undefined4 __cdecl FUN_13001a20(int param_1, int param_2)
13001a20  8b442404             MOV EAX,dword ptr [ESP + 0x4]
13001a24  56                   PUSH ESI
13001a25  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
13001a29  8b4e0c               MOV ECX,dword ptr [ESI + 0xc]
13001a2c  394802               CMP dword ptr [EAX + 0x2],ECX
13001a2f  750c                 JNZ 0x13001a3d
13001a31  8b5610               MOV EDX,dword ptr [ESI + 0x10]
13001a34  395006               CMP dword ptr [EAX + 0x6],EDX
13001a37  7504                 JNZ 0x13001a3d
13001a39  33c0                 XOR EAX,EAX
13001a3b  5e                   POP ESI
13001a3c  c3                   RET
13001a3d  81f9d2070000         CMP ECX,0x7d2
13001a43  7414                 JZ 0x13001a59
13001a45  39480c               CMP dword ptr [EAX + 0xc],ECX
13001a48  7508                 JNZ 0x13001a52
13001a4a  8b4010               MOV EAX,dword ptr [EAX + 0x10]
13001a4d  394610               CMP dword ptr [ESI + 0x10],EAX
13001a50  7407                 JZ 0x13001a59
13001a52  b800000100           MOV EAX,0x10000
13001a57  5e                   POP ESI
13001a58  c3                   RET
13001a59  33c0                 XOR EAX,EAX
13001a5b  5e                   POP ESI
13001a5c  c3                   RET
; undefined 3 bytes at 13001a5d

; ==== FUNCTION FUN_13001a60 entry=13001a60 sig=undefined4 __cdecl FUN_13001a60(int param_1, undefined4 param_2, undefined4 param_3)
13001a60  83ec0c               SUB ESP,0xc
13001a63  0fbf0510700013       MOVSX EAX,word ptr [0x13007010]
13001a6a  8d4c2400             LEA ECX,[ESP]
13001a6e  53                   PUSH EBX
13001a6f  56                   PUSH ESI
13001a70  57                   PUSH EDI
13001a71  55                   PUSH EBP
13001a72  8d348500000000       LEA ESI,[EAX*0x4 + 0x0]
13001a79  51                   PUSH ECX
13001a7a  a1308d0013           MOV EAX,[0x13008d30]
13001a7f  6a04                 PUSH 0x4
13001a81  6a01                 PUSH 0x1
13001a83  8b1430               MOV EDX,dword ptr [EAX + ESI*0x1]
13001a86  52                   PUSH EDX
13001a87  e8f41e0000           CALL 0x13003980
13001a8c  8b6c2430             MOV EBP,dword ptr [ESP + 0x30]
13001a90  8b5c2438             MOV EBX,dword ptr [ESP + 0x38]
13001a94  8b7c2434             MOV EDI,dword ptr [ESP + 0x34]
13001a98  8b4c2420             MOV ECX,dword ptr [ESP + 0x20]
13001a9c  83c410               ADD ESP,0x10
13001a9f  55                   PUSH EBP
13001aa0  53                   PUSH EBX
13001aa1  57                   PUSH EDI
13001aa2  51                   PUSH ECX
13001aa3  ffd0                 CALL EAX
13001aa5  83c410               ADD ESP,0x10
13001aa8  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13001aae  a3348d0013           MOV [0x13008d34],EAX
13001ab3  8d442414             LEA EAX,[ESP + 0x14]
13001ab7  50                   PUSH EAX
13001ab8  8b1431               MOV EDX,dword ptr [ECX + ESI*0x1]
13001abb  6a04                 PUSH 0x4
13001abd  6a01                 PUSH 0x1
13001abf  52                   PUSH EDX
13001ac0  e8bb1e0000           CALL 0x13003980
13001ac5  8b542424             MOV EDX,dword ptr [ESP + 0x24]
13001ac9  83c410               ADD ESP,0x10
13001acc  8d4d0a               LEA ECX,[EBP + 0xa]
13001acf  51                   PUSH ECX
13001ad0  53                   PUSH EBX
13001ad1  57                   PUSH EDI
13001ad2  52                   PUSH EDX
13001ad3  ffd0                 CALL EAX
13001ad5  8d4c2428             LEA ECX,[ESP + 0x28]
13001ad9  83c410               ADD ESP,0x10
13001adc  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
13001ae2  a3348d0013           MOV [0x13008d34],EAX
13001ae7  51                   PUSH ECX
13001ae8  6a04                 PUSH 0x4
13001aea  6a01                 PUSH 0x1
13001aec  8b0432               MOV EAX,dword ptr [EDX + ESI*0x1]
13001aef  50                   PUSH EAX
13001af0  83c514               ADD EBP,0x14
13001af3  e8881e0000           CALL 0x13003980
13001af8  8b4c2428             MOV ECX,dword ptr [ESP + 0x28]
13001afc  83c410               ADD ESP,0x10
13001aff  55                   PUSH EBP
13001b00  53                   PUSH EBX
13001b01  57                   PUSH EDI
13001b02  51                   PUSH ECX
13001b03  ffd0                 CALL EAX
13001b05  83c410               ADD ESP,0x10
13001b08  a3348d0013           MOV [0x13008d34],EAX
13001b0d  33c0                 XOR EAX,EAX
13001b0f  5d                   POP EBP
13001b10  5f                   POP EDI
13001b11  5e                   POP ESI
13001b12  5b                   POP EBX
13001b13  83c40c               ADD ESP,0xc
13001b16  c3                   RET
; undefined 9 bytes at 13001b17

; ==== FUNCTION FUN_13001b20 entry=13001b20 sig=undefined4 __cdecl FUN_13001b20(int param_1)
13001b20  83ec4c               SUB ESP,0x4c
13001b23  53                   PUSH EBX
13001b24  56                   PUSH ESI
13001b25  57                   PUSH EDI
13001b26  55                   PUSH EBP
13001b27  8b7c2460             MOV EDI,dword ptr [ESP + 0x60]
13001b2b  33db                 XOR EBX,EBX
13001b2d  57                   PUSH EDI
13001b2e  e83d1e0000           CALL 0x13003970
13001b33  895c2452             MOV dword ptr [ESP + 0x52],EBX
13001b37  895c2456             MOV dword ptr [ESP + 0x56],EBX
13001b3b  895c244e             MOV dword ptr [ESP + 0x4e],EBX
13001b3f  895c245a             MOV dword ptr [ESP + 0x5a],EBX
13001b43  895c241e             MOV dword ptr [ESP + 0x1e],EBX
13001b47  895c2422             MOV dword ptr [ESP + 0x22],EBX
13001b4b  895c241a             MOV dword ptr [ESP + 0x1a],EBX
13001b4f  895c2426             MOV dword ptr [ESP + 0x26],EBX
13001b53  8be8                 MOV EBP,EAX
13001b55  83c404               ADD ESP,0x4
13001b58  66c74424286600       MOV word ptr [ESP + 0x28],0x66
13001b5f  b869000000           MOV EAX,0x69
13001b64  895c242e             MOV dword ptr [ESP + 0x2e],EBX
13001b68  6689442448           MOV word ptr [ESP + 0x48],AX
13001b6d  895c2432             MOV dword ptr [ESP + 0x32],EBX
13001b71  6689442414           MOV word ptr [ESP + 0x14],AX
13001b76  895c2436             MOV dword ptr [ESP + 0x36],EBX
13001b7a  c744242affffffff     MOV dword ptr [ESP + 0x2a],0xffffffff
13001b82  0fbf0d40700013       MOVSX ECX,word ptr [0x13007040]
13001b89  8d442410             LEA EAX,[ESP + 0x10]
13001b8d  8d348d00000000       LEA ESI,[ECX*0x4 + 0x0]
13001b94  50                   PUSH EAX
13001b95  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13001b9b  6a0e                 PUSH 0xe
13001b9d  6a01                 PUSH 0x1
13001b9f  8b1431               MOV EDX,dword ptr [ECX + ESI*0x1]
13001ba2  52                   PUSH EDX
13001ba3  e8d81d0000           CALL 0x13003980
13001ba8  8d4c2446             LEA ECX,[ESP + 0x46]
13001bac  8b542420             MOV EDX,dword ptr [ESP + 0x20]
13001bb0  83c410               ADD ESP,0x10
13001bb3  6800010000           PUSH 0x100
13001bb8  51                   PUSH ECX
13001bb9  52                   PUSH EDX
13001bba  ffd0                 CALL EAX
13001bbc  83c40c               ADD ESP,0xc
13001bbf  a3348d0013           MOV [0x13008d34],EAX
13001bc4  395c2436             CMP dword ptr [ESP + 0x36],EBX
13001bc8  740e                 JZ 0x13001bd8
13001bca  8b442436             MOV EAX,dword ptr [ESP + 0x36]
13001bce  c744242e00010000     MOV dword ptr [ESP + 0x2e],0x100
13001bd6  8818                 MOV byte ptr [EAX],BL
13001bd8  0fbf051c700013       MOVSX EAX,word ptr [0x1300701c]
13001bdf  8d4c2410             LEA ECX,[ESP + 0x10]
13001be3  8d1c8500000000       LEA EBX,[EAX*0x4 + 0x0]
13001bea  51                   PUSH ECX
13001beb  a1308d0013           MOV EAX,[0x13008d30]
13001bf0  6a05                 PUSH 0x5
13001bf2  6a01                 PUSH 0x1
13001bf4  8b1418               MOV EDX,dword ptr [EAX + EBX*0x1]
13001bf7  52                   PUSH EDX
13001bf8  e8831d0000           CALL 0x13003980
13001bfd  8d4c2458             LEA ECX,[ESP + 0x58]
13001c01  8b542420             MOV EDX,dword ptr [ESP + 0x20]
13001c05  83c410               ADD ESP,0x10
13001c08  51                   PUSH ECX
13001c09  6a00                 PUSH 0x0
13001c0b  6860800013           PUSH 0x13008060
13001c10  55                   PUSH EBP
13001c11  52                   PUSH EDX
13001c12  ffd0                 CALL EAX
13001c14  8d4c2450             LEA ECX,[ESP + 0x50]
13001c18  83c414               ADD ESP,0x14
13001c1b  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
13001c21  a3348d0013           MOV [0x13008d34],EAX
13001c26  51                   PUSH ECX
13001c27  6a05                 PUSH 0x5
13001c29  6a01                 PUSH 0x1
13001c2b  8b041a               MOV EAX,dword ptr [EDX + EBX*0x1]
13001c2e  50                   PUSH EAX
13001c2f  e84c1d0000           CALL 0x13003980
13001c34  8d4c2424             LEA ECX,[ESP + 0x24]
13001c38  8b54244c             MOV EDX,dword ptr [ESP + 0x4c]
13001c3c  83c410               ADD ESP,0x10
13001c3f  51                   PUSH ECX
13001c40  6a00                 PUSH 0x0
13001c42  68c4800013           PUSH 0x130080c4
13001c47  55                   PUSH EBP
13001c48  52                   PUSH EDX
13001c49  ffd0                 CALL EAX
13001c4b  8d4c2454             LEA ECX,[ESP + 0x54]
13001c4f  83c414               ADD ESP,0x14
13001c52  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
13001c58  a3348d0013           MOV [0x13008d34],EAX
13001c5d  51                   PUSH ECX
13001c5e  6a05                 PUSH 0x5
13001c60  6a01                 PUSH 0x1
13001c62  8b041a               MOV EAX,dword ptr [EDX + EBX*0x1]
13001c65  50                   PUSH EAX
13001c66  e8151d0000           CALL 0x13003980
13001c6b  8d4c2438             LEA ECX,[ESP + 0x38]
13001c6f  8b542426             MOV EDX,dword ptr [ESP + 0x26]
13001c73  83c410               ADD ESP,0x10
13001c76  51                   PUSH ECX
13001c77  6a00                 PUSH 0x0
13001c79  8b4c2448             MOV ECX,dword ptr [ESP + 0x48]
13001c7d  68b0800013           PUSH 0x130080b0
13001c82  52                   PUSH EDX
13001c83  51                   PUSH ECX
13001c84  ffd0                 CALL EAX
13001c86  83c414               ADD ESP,0x14
13001c89  a3348d0013           MOV [0x13008d34],EAX
13001c8e  8d4c2444             LEA ECX,[ESP + 0x44]
13001c92  51                   PUSH ECX
13001c93  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
13001c99  6a05                 PUSH 0x5
13001c9b  6a01                 PUSH 0x1
13001c9d  8b041a               MOV EAX,dword ptr [EDX + EBX*0x1]
13001ca0  50                   PUSH EAX
13001ca1  e8da1c0000           CALL 0x13003980
13001ca6  8d4c2424             LEA ECX,[ESP + 0x24]
13001caa  8b542426             MOV EDX,dword ptr [ESP + 0x26]
13001cae  83c410               ADD ESP,0x10
13001cb1  51                   PUSH ECX
13001cb2  6a00                 PUSH 0x0
13001cb4  8b4c244c             MOV ECX,dword ptr [ESP + 0x4c]
13001cb8  689c800013           PUSH 0x1300809c
13001cbd  52                   PUSH EDX
13001cbe  51                   PUSH ECX
13001cbf  ffd0                 CALL EAX
13001cc1  83c414               ADD ESP,0x14
13001cc4  a3348d0013           MOV [0x13008d34],EAX
13001cc9  837c241600           CMP dword ptr [ESP + 0x16],0x0
13001cce  745a                 JZ 0x13001d2a
13001cd0  396c2416             CMP dword ptr [ESP + 0x16],EBP
13001cd4  7412                 JZ 0x13001ce8
13001cd6  8b442416             MOV EAX,dword ptr [ESP + 0x16]
13001cda  6a01                 PUSH 0x1
13001cdc  6a00                 PUSH 0x0
13001cde  50                   PUSH EAX
13001cdf  57                   PUSH EDI
13001ce0  e8ab000000           CALL 0x13001d90
13001ce5  83c410               ADD ESP,0x10
13001ce8  8d442410             LEA EAX,[ESP + 0x10]
13001cec  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13001cf2  50                   PUSH EAX
13001cf3  6a05                 PUSH 0x5
13001cf5  6a01                 PUSH 0x1
13001cf7  8b1419               MOV EDX,dword ptr [ECX + EBX*0x1]
13001cfa  52                   PUSH EDX
13001cfb  e8801c0000           CALL 0x13003980
13001d00  8d4c2424             LEA ECX,[ESP + 0x24]
13001d04  8b542426             MOV EDX,dword ptr [ESP + 0x26]
13001d08  83c410               ADD ESP,0x10
13001d0b  51                   PUSH ECX
13001d0c  6a00                 PUSH 0x0
13001d0e  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
13001d12  6888800013           PUSH 0x13008088
13001d17  52                   PUSH EDX
13001d18  51                   PUSH ECX
13001d19  ffd0                 CALL EAX
13001d1b  83c414               ADD ESP,0x14
13001d1e  a3348d0013           MOV [0x13008d34],EAX
13001d23  837c241600           CMP dword ptr [ESP + 0x16],0x0
13001d28  75a6                 JNZ 0x13001cd0
13001d2a  8d442414             LEA EAX,[ESP + 0x14]
13001d2e  50                   PUSH EAX
13001d2f  e8ac1e0000           CALL 0x13003be0
13001d34  8d44244c             LEA EAX,[ESP + 0x4c]
13001d38  83c404               ADD ESP,0x4
13001d3b  50                   PUSH EAX
13001d3c  e89f1e0000           CALL 0x13003be0
13001d41  83c404               ADD ESP,0x4
13001d44  837c243600           CMP dword ptr [ESP + 0x36],0x0
13001d49  742f                 JZ 0x13001d7a
13001d4b  8d442410             LEA EAX,[ESP + 0x10]
13001d4f  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13001d55  50                   PUSH EAX
13001d56  6a10                 PUSH 0x10
13001d58  6a01                 PUSH 0x1
13001d5a  8b1431               MOV EDX,dword ptr [ECX + ESI*0x1]
13001d5d  52                   PUSH EDX
13001d5e  e81d1c0000           CALL 0x13003980
13001d63  8b4c2446             MOV ECX,dword ptr [ESP + 0x46]
13001d67  8b542420             MOV EDX,dword ptr [ESP + 0x20]
13001d6b  83c410               ADD ESP,0x10
13001d6e  51                   PUSH ECX
13001d6f  52                   PUSH EDX
13001d70  ffd0                 CALL EAX
13001d72  83c408               ADD ESP,0x8
13001d75  a3348d0013           MOV [0x13008d34],EAX
13001d7a  33c0                 XOR EAX,EAX
13001d7c  5d                   POP EBP
13001d7d  5f                   POP EDI
13001d7e  5e                   POP ESI
13001d7f  5b                   POP EBX
13001d80  83c44c               ADD ESP,0x4c
13001d83  c3                   RET
; undefined 12 bytes at 13001d84

; ==== FUNCTION FUN_13001d90 entry=13001d90 sig=undefined4 __stdcall FUN_13001d90(void)
13001d90  33c0                 XOR EAX,EAX
13001d92  c3                   RET
; undefined 13 bytes at 13001d93

; ==== FUNCTION FUN_13001da0 entry=13001da0 sig=undefined4 __cdecl FUN_13001da0(int param_1, char param_2)
13001da0  83ec1c               SUB ESP,0x1c
13001da3  53                   PUSH EBX
13001da4  56                   PUSH ESI
13001da5  57                   PUSH EDI
13001da6  33db                 XOR EBX,EBX
13001da8  385c2430             CMP byte ptr [ESP + 0x30],BL
13001dac  55                   PUSH EBP
13001dad  0f84b5000000         JZ 0x13001e68
13001db3  8b742430             MOV ESI,dword ptr [ESP + 0x30]
13001db7  395e1e               CMP dword ptr [ESI + 0x1e],EBX
13001dba  0f84a8000000         JZ 0x13001e68
13001dc0  895c241e             MOV dword ptr [ESP + 0x1e],EBX
13001dc4  895c2422             MOV dword ptr [ESP + 0x22],EBX
13001dc8  8d4c2410             LEA ECX,[ESP + 0x10]
13001dcc  895c241a             MOV dword ptr [ESP + 0x1a],EBX
13001dd0  895c2426             MOV dword ptr [ESP + 0x26],EBX
13001dd4  51                   PUSH ECX
13001dd5  0fbf051c700013       MOVSX EAX,word ptr [0x1300701c]
13001ddc  66c744241c6900       MOV word ptr [ESP + 0x1c],0x69
13001de3  8d3c8500000000       LEA EDI,[EAX*0x4 + 0x0]
13001dea  6a05                 PUSH 0x5
13001dec  6a01                 PUSH 0x1
13001dee  a1308d0013           MOV EAX,[0x13008d30]
13001df3  8b1438               MOV EDX,dword ptr [EAX + EDI*0x1]
13001df6  52                   PUSH EDX
13001df7  e8841b0000           CALL 0x13003980
13001dfc  8d4c2428             LEA ECX,[ESP + 0x28]
13001e00  83c410               ADD ESP,0x10
13001e03  8be8                 MOV EBP,EAX
13001e05  51                   PUSH ECX
13001e06  53                   PUSH EBX
13001e07  6860800013           PUSH 0x13008060
13001e0c  56                   PUSH ESI
13001e0d  e85e1b0000           CALL 0x13003970
13001e12  83c404               ADD ESP,0x4
13001e15  50                   PUSH EAX
13001e16  8b442420             MOV EAX,dword ptr [ESP + 0x20]
13001e1a  50                   PUSH EAX
13001e1b  ffd5                 CALL EBP
13001e1d  83c414               ADD ESP,0x14
13001e20  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13001e26  a3348d0013           MOV [0x13008d34],EAX
13001e2b  8d442414             LEA EAX,[ESP + 0x14]
13001e2f  50                   PUSH EAX
13001e30  8b1439               MOV EDX,dword ptr [ECX + EDI*0x1]
13001e33  6a24                 PUSH 0x24
13001e35  6a01                 PUSH 0x1
13001e37  52                   PUSH EDX
13001e38  e8431b0000           CALL 0x13003980
13001e3d  8b54242a             MOV EDX,dword ptr [ESP + 0x2a]
13001e41  8b6c2424             MOV EBP,dword ptr [ESP + 0x24]
13001e45  83c410               ADD ESP,0x10
13001e48  8b4e1e               MOV ECX,dword ptr [ESI + 0x1e]
13001e4b  51                   PUSH ECX
13001e4c  52                   PUSH EDX
13001e4d  55                   PUSH EBP
13001e4e  ffd0                 CALL EAX
13001e50  8d4c2424             LEA ECX,[ESP + 0x24]
13001e54  83c40c               ADD ESP,0xc
13001e57  a3348d0013           MOV [0x13008d34],EAX
13001e5c  51                   PUSH ECX
13001e5d  895e1e               MOV dword ptr [ESI + 0x1e],EBX
13001e60  e87b1d0000           CALL 0x13003be0
13001e65  83c404               ADD ESP,0x4
13001e68  33c0                 XOR EAX,EAX
13001e6a  5d                   POP EBP
13001e6b  5f                   POP EDI
13001e6c  5e                   POP ESI
13001e6d  5b                   POP EBX
13001e6e  83c41c               ADD ESP,0x1c
13001e71  c3                   RET
; undefined 14 bytes at 13001e72

; ==== FUNCTION FUN_13001e80 entry=13001e80 sig=uint __cdecl FUN_13001e80(undefined4 param_1, int param_2)
13001e80  837c240801           CMP dword ptr [ESP + 0x8],0x1
13001e85  1bc0                 SBB EAX,EAX
13001e87  2500000100           AND EAX,0x10000
13001e8c  c3                   RET
; undefined 3 bytes at 13001e8d

; ==== FUNCTION FUN_13001e90 entry=13001e90 sig=undefined4 __stdcall FUN_13001e90(void)
13001e90  33c0                 XOR EAX,EAX
13001e92  c3                   RET
; undefined 13 bytes at 13001e93

; ==== FUNCTION FUN_13001ea0 entry=13001ea0 sig=undefined4 __cdecl FUN_13001ea0(int param_1, undefined4 param_2, short param_3)
13001ea0  668b44240c           MOV AX,word ptr [ESP + 0xc]
13001ea5  83ec50               SUB ESP,0x50
13001ea8  663d1a00             CMP AX,0x1a
13001eac  53                   PUSH EBX
13001ead  56                   PUSH ESI
13001eae  57                   PUSH EDI
13001eaf  55                   PUSH EBP
13001eb0  0f8597010000         JNZ 0x1300204d
13001eb6  33db                 XOR EBX,EBX
13001eb8  b869000000           MOV EAX,0x69
13001ebd  6689442410           MOV word ptr [ESP + 0x10],AX
13001ec2  895c2424             MOV dword ptr [ESP + 0x24],EBX
13001ec6  6689442428           MOV word ptr [ESP + 0x28],AX
13001ecb  895c2416             MOV dword ptr [ESP + 0x16],EBX
13001ecf  895c241a             MOV dword ptr [ESP + 0x1a],EBX
13001ed3  895c242e             MOV dword ptr [ESP + 0x2e],EBX
13001ed7  668944243c           MOV word ptr [ESP + 0x3c],AX
13001edc  895c2412             MOV dword ptr [ESP + 0x12],EBX
13001ee0  895c241e             MOV dword ptr [ESP + 0x1e],EBX
13001ee4  895c2432             MOV dword ptr [ESP + 0x32],EBX
13001ee8  895c242a             MOV dword ptr [ESP + 0x2a],EBX
13001eec  895c2442             MOV dword ptr [ESP + 0x42],EBX
13001ef0  8d442450             LEA EAX,[ESP + 0x50]
13001ef4  895c2436             MOV dword ptr [ESP + 0x36],EBX
13001ef8  895c2446             MOV dword ptr [ESP + 0x46],EBX
13001efc  50                   PUSH EAX
13001efd  895c2442             MOV dword ptr [ESP + 0x42],EBX
13001f01  6a05                 PUSH 0x5
13001f03  0fbf0d1c700013       MOVSX ECX,word ptr [0x1300701c]
13001f0a  895c2452             MOV dword ptr [ESP + 0x52],EBX
13001f0e  6a01                 PUSH 0x1
13001f10  8d3c8d00000000       LEA EDI,[ECX*0x4 + 0x0]
13001f17  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13001f1d  8b1439               MOV EDX,dword ptr [ECX + EDI*0x1]
13001f20  52                   PUSH EDX
13001f21  e85a1a0000           CALL 0x13003980
13001f26  8d4c244c             LEA ECX,[ESP + 0x4c]
13001f2a  8b742474             MOV ESI,dword ptr [ESP + 0x74]
13001f2e  83c410               ADD ESP,0x10
13001f31  8be8                 MOV EBP,EAX
13001f33  51                   PUSH ECX
13001f34  53                   PUSH EBX
13001f35  6860800013           PUSH 0x13008060
13001f3a  56                   PUSH ESI
13001f3b  e8301a0000           CALL 0x13003970
13001f40  8b4c2460             MOV ECX,dword ptr [ESP + 0x60]
13001f44  83c404               ADD ESP,0x4
13001f47  50                   PUSH EAX
13001f48  51                   PUSH ECX
13001f49  ffd5                 CALL EBP
13001f4b  83c414               ADD ESP,0x14
13001f4e  a3348d0013           MOV [0x13008d34],EAX
13001f53  8d442454             LEA EAX,[ESP + 0x54]
13001f57  50                   PUSH EAX
13001f58  6a20                 PUSH 0x20
13001f5a  53                   PUSH EBX
13001f5b  56                   PUSH ESI
13001f5c  e81f1a0000           CALL 0x13003980
13001f61  8d4c2434             LEA ECX,[ESP + 0x34]
13001f65  8b542464             MOV EDX,dword ptr [ESP + 0x64]
13001f69  83c410               ADD ESP,0x10
13001f6c  51                   PUSH ECX
13001f6d  52                   PUSH EDX
13001f6e  ffd0                 CALL EAX
13001f70  8d4c2460             LEA ECX,[ESP + 0x60]
13001f74  83c408               ADD ESP,0x8
13001f77  a3348d0013           MOV [0x13008d34],EAX
13001f7c  51                   PUSH ECX
13001f7d  6a05                 PUSH 0x5
13001f7f  6a01                 PUSH 0x1
13001f81  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
13001f87  8b043a               MOV EAX,dword ptr [EDX + EDI*0x1]
13001f8a  50                   PUSH EAX
13001f8b  e8f0190000           CALL 0x13003980
13001f90  8d4c2420             LEA ECX,[ESP + 0x20]
13001f94  8b542434             MOV EDX,dword ptr [ESP + 0x34]
13001f98  8b6c2468             MOV EBP,dword ptr [ESP + 0x68]
13001f9c  83c410               ADD ESP,0x10
13001f9f  51                   PUSH ECX
13001fa0  53                   PUSH EBX
13001fa1  68ec800013           PUSH 0x130080ec
13001fa6  52                   PUSH EDX
13001fa7  55                   PUSH EBP
13001fa8  ffd0                 CALL EAX
13001faa  8d4c2470             LEA ECX,[ESP + 0x70]
13001fae  83c414               ADD ESP,0x14
13001fb1  a3348d0013           MOV [0x13008d34],EAX
13001fb6  51                   PUSH ECX
13001fb7  6a05                 PUSH 0x5
13001fb9  a1308d0013           MOV EAX,[0x13008d30]
13001fbe  6a01                 PUSH 0x1
13001fc0  8b1438               MOV EDX,dword ptr [EAX + EDI*0x1]
13001fc3  52                   PUSH EDX
13001fc4  e8b7190000           CALL 0x13003980
13001fc9  8d4c2438             LEA ECX,[ESP + 0x38]
13001fcd  8b54244e             MOV EDX,dword ptr [ESP + 0x4e]
13001fd1  8b6c246c             MOV EBP,dword ptr [ESP + 0x6c]
13001fd5  83c410               ADD ESP,0x10
13001fd8  51                   PUSH ECX
13001fd9  53                   PUSH EBX
13001fda  68d8800013           PUSH 0x130080d8
13001fdf  52                   PUSH EDX
13001fe0  55                   PUSH EBP
13001fe1  ffd0                 CALL EAX
13001fe3  8b4c2426             MOV ECX,dword ptr [ESP + 0x26]
13001fe7  83c414               ADD ESP,0x14
13001fea  a3348d0013           MOV [0x13008d34],EAX
13001fef  394c242a             CMP dword ptr [ESP + 0x2a],ECX
13001ff3  7414                 JZ 0x13002009
13001ff5  385e26               CMP byte ptr [ESI + 0x26],BL
13001ff8  7422                 JZ 0x1300201c
13001ffa  53                   PUSH EBX
13001ffb  885e26               MOV byte ptr [ESI + 0x26],BL
13001ffe  56                   PUSH ESI
13001fff  e89cfdffff           CALL 0x13001da0
13002004  83c408               ADD ESP,0x8
13002007  eb13                 JMP 0x1300201c
13002009  807e2600             CMP byte ptr [ESI + 0x26],0x0
1300200d  750d                 JNZ 0x1300201c
1300200f  56                   PUSH ESI
13002010  e80bfbffff           CALL 0x13001b20
13002015  c6462601             MOV byte ptr [ESI + 0x26],0x1
13002019  83c404               ADD ESP,0x4
1300201c  8d442410             LEA EAX,[ESP + 0x10]
13002020  50                   PUSH EAX
13002021  e8ba1b0000           CALL 0x13003be0
13002026  8d44242c             LEA EAX,[ESP + 0x2c]
1300202a  83c404               ADD ESP,0x4
1300202d  50                   PUSH EAX
1300202e  e8ad1b0000           CALL 0x13003be0
13002033  8d442440             LEA EAX,[ESP + 0x40]
13002037  83c404               ADD ESP,0x4
1300203a  50                   PUSH EAX
1300203b  e8a01b0000           CALL 0x13003be0
13002040  83c404               ADD ESP,0x4
13002043  33c0                 XOR EAX,EAX
13002045  5d                   POP EBP
13002046  5f                   POP EDI
13002047  5e                   POP ESI
13002048  5b                   POP EBX
13002049  83c450               ADD ESP,0x50
1300204c  c3                   RET
1300204d  663d1e00             CMP AX,0x1e
13002051  0f85b9000000         JNZ 0x13002110
13002057  0fbf051c700013       MOVSX EAX,word ptr [0x1300701c]
1300205e  66c74424106900       MOV word ptr [ESP + 0x10],0x69
13002065  33ff                 XOR EDI,EDI
13002067  8d1c8500000000       LEA EBX,[EAX*0x4 + 0x0]
1300206e  8d4c2428             LEA ECX,[ESP + 0x28]
13002072  897c2416             MOV dword ptr [ESP + 0x16],EDI
13002076  51                   PUSH ECX
13002077  a1308d0013           MOV EAX,[0x13008d30]
1300207c  897c241e             MOV dword ptr [ESP + 0x1e],EDI
13002080  6a05                 PUSH 0x5
13002082  897c241a             MOV dword ptr [ESP + 0x1a],EDI
13002086  6a01                 PUSH 0x1
13002088  897c242a             MOV dword ptr [ESP + 0x2a],EDI
1300208c  8b1418               MOV EDX,dword ptr [EAX + EBX*0x1]
1300208f  52                   PUSH EDX
13002090  e8eb180000           CALL 0x13003980
13002095  8d4c2420             LEA ECX,[ESP + 0x20]
13002099  8b742474             MOV ESI,dword ptr [ESP + 0x74]
1300209d  83c410               ADD ESP,0x10
130020a0  8be8                 MOV EBP,EAX
130020a2  51                   PUSH ECX
130020a3  57                   PUSH EDI
130020a4  6860800013           PUSH 0x13008060
130020a9  56                   PUSH ESI
130020aa  e8c1180000           CALL 0x13003970
130020af  8b4c2438             MOV ECX,dword ptr [ESP + 0x38]
130020b3  83c404               ADD ESP,0x4
130020b6  50                   PUSH EAX
130020b7  51                   PUSH ECX
130020b8  ffd5                 CALL EBP
130020ba  83c414               ADD ESP,0x14
130020bd  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
130020c3  a3348d0013           MOV [0x13008d34],EAX
130020c8  8d44243c             LEA EAX,[ESP + 0x3c]
130020cc  50                   PUSH EAX
130020cd  8b1419               MOV EDX,dword ptr [ECX + EBX*0x1]
130020d0  6a24                 PUSH 0x24
130020d2  6a01                 PUSH 0x1
130020d4  52                   PUSH EDX
130020d5  e8a6180000           CALL 0x13003980
130020da  8b542422             MOV EDX,dword ptr [ESP + 0x22]
130020de  8b5c244c             MOV EBX,dword ptr [ESP + 0x4c]
130020e2  83c410               ADD ESP,0x10
130020e5  8b4e22               MOV ECX,dword ptr [ESI + 0x22]
130020e8  51                   PUSH ECX
130020e9  52                   PUSH EDX
130020ea  53                   PUSH EBX
130020eb  ffd0                 CALL EAX
130020ed  8d4c241c             LEA ECX,[ESP + 0x1c]
130020f1  83c40c               ADD ESP,0xc
130020f4  a3348d0013           MOV [0x13008d34],EAX
130020f9  51                   PUSH ECX
130020fa  897e22               MOV dword ptr [ESI + 0x22],EDI
130020fd  e8de1a0000           CALL 0x13003be0
13002102  83c404               ADD ESP,0x4
13002105  6a01                 PUSH 0x1
13002107  56                   PUSH ESI
13002108  e893fcffff           CALL 0x13001da0
1300210d  83c408               ADD ESP,0x8
13002110  33c0                 XOR EAX,EAX
13002112  5d                   POP EBP
13002113  5f                   POP EDI
13002114  5e                   POP ESI
13002115  5b                   POP EBX
13002116  83c450               ADD ESP,0x50
13002119  c3                   RET
; undefined 6 bytes at 1300211a

; ==== FUNCTION SysInfo entry=13002120 sig=undefined __cdecl SysInfo(int param_1)
13002120  56                   PUSH ESI
13002121  57                   PUSH EDI
13002122  8b7c240c             MOV EDI,dword ptr [ESP + 0xc]
13002126  6683bfb200000000     CMP word ptr [EDI + 0xb2],0x0
1300212e  753a                 JNZ 0x1300216a
13002130  b801000000           MOV EAX,0x1
13002135  68d8810013           PUSH 0x130081d8
1300213a  668987a6000000       MOV word ptr [EDI + 0xa6],AX
13002141  8987ae000000         MOV dword ptr [EDI + 0xae],EAX
13002147  668987bc000000       MOV word ptr [EDI + 0xbc],AX
1300214e  57                   PUSH EDI
1300214f  c787aa000000ac000000 MOV dword ptr [EDI + 0xaa],0xac
13002159  66c787a40000000000   MOV word ptr [EDI + 0xa4],0x0
13002162  e829170000           CALL 0x13003890
13002167  83c408               ADD ESP,0x8
1300216a  6683bfb200000001     CMP word ptr [EDI + 0xb2],0x1
13002172  7512                 JNZ 0x13002186
13002174  6a00                 PUSH 0x0
13002176  6a01                 PUSH 0x1
13002178  6830800013           PUSH 0x13008030
1300217d  57                   PUSH EDI
1300217e  e89d1a0000           CALL 0x13003c20
13002183  83c410               ADD ESP,0x10
13002186  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
1300218e  751c                 JNZ 0x130021ac
13002190  668b3518710013       MOV SI,word ptr [0x13007118]
13002197  68e0240013           PUSH 0x130024e0
1300219c  6a07                 PUSH 0x7
1300219e  6a00                 PUSH 0x0
130021a0  56                   PUSH ESI
130021a1  57                   PUSH EDI
130021a2  e8b91a0000           CALL 0x13003c60
130021a7  83c414               ADD ESP,0x14
130021aa  eb07                 JMP 0x130021b3
130021ac  668b3518710013       MOV SI,word ptr [0x13007118]
130021b3  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
130021bb  7530                 JNZ 0x130021ed
130021bd  68e0260013           PUSH 0x130026e0
130021c2  6a08                 PUSH 0x8
130021c4  6a00                 PUSH 0x0
130021c6  56                   PUSH ESI
130021c7  57                   PUSH EDI
130021c8  e8931a0000           CALL 0x13003c60
130021cd  83c414               ADD ESP,0x14
130021d0  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
130021d8  7530                 JNZ 0x1300220a
130021da  68902b0013           PUSH 0x13002b90
130021df  6a22                 PUSH 0x22
130021e1  6a00                 PUSH 0x0
130021e3  56                   PUSH ESI
130021e4  57                   PUSH EDI
130021e5  e8761a0000           CALL 0x13003c60
130021ea  83c414               ADD ESP,0x14
130021ed  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
130021f5  7530                 JNZ 0x13002227
130021f7  68c0320013           PUSH 0x130032c0
130021fc  6a09                 PUSH 0x9
130021fe  6a00                 PUSH 0x0
13002200  56                   PUSH ESI
13002201  57                   PUSH EDI
13002202  e8591a0000           CALL 0x13003c60
13002207  83c414               ADD ESP,0x14
1300220a  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
13002212  7530                 JNZ 0x13002244
13002214  6850220013           PUSH 0x13002250
13002219  6a2e                 PUSH 0x2e
1300221b  6a00                 PUSH 0x0
1300221d  56                   PUSH ESI
1300221e  57                   PUSH EDI
1300221f  e83c1a0000           CALL 0x13003c60
13002224  83c414               ADD ESP,0x14
13002227  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
1300222f  7513                 JNZ 0x13002244
13002231  6810350013           PUSH 0x13003510
13002236  6a16                 PUSH 0x16
13002238  6a00                 PUSH 0x0
1300223a  56                   PUSH ESI
1300223b  57                   PUSH EDI
1300223c  e81f1a0000           CALL 0x13003c60
13002241  83c414               ADD ESP,0x14
13002244  57                   PUSH EDI
13002245  e8461a0000           CALL 0x13003c90
1300224a  83c404               ADD ESP,0x4
1300224d  5f                   POP EDI
1300224e  5e                   POP ESI
1300224f  c3                   RET

; ==== FUNCTION FUN_13002250 entry=13002250 sig=undefined4 __cdecl FUN_13002250(undefined4 param_1)
13002250  83ec30               SUB ESP,0x30
13002253  0fbf05a8700013       MOVSX EAX,word ptr [0x130070a8]
1300225a  8d4c2400             LEA ECX,[ESP]
1300225e  56                   PUSH ESI
1300225f  57                   PUSH EDI
13002260  8d348500000000       LEA ESI,[EAX*0x4 + 0x0]
13002267  51                   PUSH ECX
13002268  a1308d0013           MOV EAX,[0x13008d30]
1300226d  6a2c                 PUSH 0x2c
1300226f  6a01                 PUSH 0x1
13002271  8b1430               MOV EDX,dword ptr [EAX + ESI*0x1]
13002274  52                   PUSH EDX
13002275  e806170000           CALL 0x13003980
1300227a  8b7c244c             MOV EDI,dword ptr [ESP + 0x4c]
1300227e  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
13002282  83c410               ADD ESP,0x10
13002285  6a04                 PUSH 0x4
13002287  6a66                 PUSH 0x66
13002289  68bc820013           PUSH 0x130082bc
1300228e  57                   PUSH EDI
1300228f  51                   PUSH ECX
13002290  ffd0                 CALL EAX
13002292  83c414               ADD ESP,0x14
13002295  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
1300229b  a3348d0013           MOV [0x13008d34],EAX
130022a0  8d44240c             LEA EAX,[ESP + 0xc]
130022a4  50                   PUSH EAX
130022a5  8b1431               MOV EDX,dword ptr [ECX + ESI*0x1]
130022a8  6a2c                 PUSH 0x2c
130022aa  6a01                 PUSH 0x1
130022ac  52                   PUSH EDX
130022ad  e8ce160000           CALL 0x13003980
130022b2  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
130022b6  83c410               ADD ESP,0x10
130022b9  6a04                 PUSH 0x4
130022bb  6a66                 PUSH 0x66
130022bd  68a8820013           PUSH 0x130082a8
130022c2  57                   PUSH EDI
130022c3  51                   PUSH ECX
130022c4  ffd0                 CALL EAX
130022c6  8d4c2424             LEA ECX,[ESP + 0x24]
130022ca  83c414               ADD ESP,0x14
130022cd  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
130022d3  a3348d0013           MOV [0x13008d34],EAX
130022d8  51                   PUSH ECX
130022d9  6a2c                 PUSH 0x2c
130022db  6a01                 PUSH 0x1
130022dd  8b0432               MOV EAX,dword ptr [EDX + ESI*0x1]
130022e0  50                   PUSH EAX
130022e1  e89a160000           CALL 0x13003980
130022e6  8b4c2420             MOV ECX,dword ptr [ESP + 0x20]
130022ea  83c410               ADD ESP,0x10
130022ed  6a04                 PUSH 0x4
130022ef  6a66                 PUSH 0x66
130022f1  6894820013           PUSH 0x13008294
130022f6  57                   PUSH EDI
130022f7  51                   PUSH ECX
130022f8  ffd0                 CALL EAX
130022fa  83c414               ADD ESP,0x14
130022fd  a3348d0013           MOV [0x13008d34],EAX
13002302  8d4c2414             LEA ECX,[ESP + 0x14]
13002306  51                   PUSH ECX
13002307  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
1300230d  6a2c                 PUSH 0x2c
1300230f  6a01                 PUSH 0x1
13002311  8b0432               MOV EAX,dword ptr [EDX + ESI*0x1]
13002314  50                   PUSH EAX
13002315  e866160000           CALL 0x13003980
1300231a  8b4c2424             MOV ECX,dword ptr [ESP + 0x24]
1300231e  83c410               ADD ESP,0x10
13002321  6a04                 PUSH 0x4
13002323  6a66                 PUSH 0x66
13002325  6880820013           PUSH 0x13008280
1300232a  57                   PUSH EDI
1300232b  51                   PUSH ECX
1300232c  ffd0                 CALL EAX
1300232e  8d4c242c             LEA ECX,[ESP + 0x2c]
13002332  83c414               ADD ESP,0x14
13002335  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
1300233b  a3348d0013           MOV [0x13008d34],EAX
13002340  51                   PUSH ECX
13002341  6a2c                 PUSH 0x2c
13002343  6a01                 PUSH 0x1
13002345  8b0432               MOV EAX,dword ptr [EDX + ESI*0x1]
13002348  50                   PUSH EAX
13002349  e832160000           CALL 0x13003980
1300234e  8b4c2428             MOV ECX,dword ptr [ESP + 0x28]
13002352  83c410               ADD ESP,0x10
13002355  6a05                 PUSH 0x5
13002357  6a01                 PUSH 0x1
13002359  686c820013           PUSH 0x1300826c
1300235e  57                   PUSH EDI
1300235f  51                   PUSH ECX
13002360  ffd0                 CALL EAX
13002362  8d4c2430             LEA ECX,[ESP + 0x30]
13002366  83c414               ADD ESP,0x14
13002369  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
1300236f  a3348d0013           MOV [0x13008d34],EAX
13002374  51                   PUSH ECX
13002375  6a2c                 PUSH 0x2c
13002377  6a01                 PUSH 0x1
13002379  8b0432               MOV EAX,dword ptr [EDX + ESI*0x1]
1300237c  50                   PUSH EAX
1300237d  e8fe150000           CALL 0x13003980
13002382  8b4c242c             MOV ECX,dword ptr [ESP + 0x2c]
13002386  83c410               ADD ESP,0x10
13002389  6a04                 PUSH 0x4
1300238b  6a01                 PUSH 0x1
1300238d  6858820013           PUSH 0x13008258
13002392  57                   PUSH EDI
13002393  51                   PUSH ECX
13002394  ffd0                 CALL EAX
13002396  8d4c2434             LEA ECX,[ESP + 0x34]
1300239a  83c414               ADD ESP,0x14
1300239d  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
130023a3  a3348d0013           MOV [0x13008d34],EAX
130023a8  51                   PUSH ECX
130023a9  6a2c                 PUSH 0x2c
130023ab  6a01                 PUSH 0x1
130023ad  8b0432               MOV EAX,dword ptr [EDX + ESI*0x1]
130023b0  50                   PUSH EAX
130023b1  e8ca150000           CALL 0x13003980
130023b6  8b4c2430             MOV ECX,dword ptr [ESP + 0x30]
130023ba  83c410               ADD ESP,0x10
130023bd  6a04                 PUSH 0x4
130023bf  6a66                 PUSH 0x66
130023c1  6844820013           PUSH 0x13008244
130023c6  57                   PUSH EDI
130023c7  51                   PUSH ECX
130023c8  ffd0                 CALL EAX
130023ca  8d4c2438             LEA ECX,[ESP + 0x38]
130023ce  83c414               ADD ESP,0x14
130023d1  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
130023d7  a3348d0013           MOV [0x13008d34],EAX
130023dc  51                   PUSH ECX
130023dd  6a2c                 PUSH 0x2c
130023df  6a01                 PUSH 0x1
130023e1  8b0432               MOV EAX,dword ptr [EDX + ESI*0x1]
130023e4  50                   PUSH EAX
130023e5  e896150000           CALL 0x13003980
130023ea  8b4c2434             MOV ECX,dword ptr [ESP + 0x34]
130023ee  83c410               ADD ESP,0x10
130023f1  6a04                 PUSH 0x4
130023f3  6a66                 PUSH 0x66
130023f5  6830820013           PUSH 0x13008230
130023fa  57                   PUSH EDI
130023fb  51                   PUSH ECX
130023fc  ffd0                 CALL EAX
130023fe  8d4c243c             LEA ECX,[ESP + 0x3c]
13002402  83c414               ADD ESP,0x14
13002405  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
1300240b  a3348d0013           MOV [0x13008d34],EAX
13002410  51                   PUSH ECX
13002411  6a2c                 PUSH 0x2c
13002413  6a01                 PUSH 0x1
13002415  8b0432               MOV EAX,dword ptr [EDX + ESI*0x1]
13002418  50                   PUSH EAX
13002419  e862150000           CALL 0x13003980
1300241e  8b4c2438             MOV ECX,dword ptr [ESP + 0x38]
13002422  83c410               ADD ESP,0x10
13002425  6a04                 PUSH 0x4
13002427  6a66                 PUSH 0x66
13002429  681c820013           PUSH 0x1300821c
1300242e  57                   PUSH EDI
1300242f  51                   PUSH ECX
13002430  ffd0                 CALL EAX
13002432  8d4c2440             LEA ECX,[ESP + 0x40]
13002436  83c414               ADD ESP,0x14
13002439  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
1300243f  a3348d0013           MOV [0x13008d34],EAX
13002444  51                   PUSH ECX
13002445  6a2c                 PUSH 0x2c
13002447  6a01                 PUSH 0x1
13002449  8b0432               MOV EAX,dword ptr [EDX + ESI*0x1]
1300244c  50                   PUSH EAX
1300244d  e82e150000           CALL 0x13003980
13002452  8b4c243c             MOV ECX,dword ptr [ESP + 0x3c]
13002456  83c410               ADD ESP,0x10
13002459  6a04                 PUSH 0x4
1300245b  6a01                 PUSH 0x1
1300245d  6808820013           PUSH 0x13008208
13002462  57                   PUSH EDI
13002463  51                   PUSH ECX
13002464  ffd0                 CALL EAX
13002466  8d4c2444             LEA ECX,[ESP + 0x44]
1300246a  83c414               ADD ESP,0x14
1300246d  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
13002473  a3348d0013           MOV [0x13008d34],EAX
13002478  51                   PUSH ECX
13002479  6a2c                 PUSH 0x2c
1300247b  6a01                 PUSH 0x1
1300247d  8b0432               MOV EAX,dword ptr [EDX + ESI*0x1]
13002480  50                   PUSH EAX
13002481  e8fa140000           CALL 0x13003980
13002486  8b4c2440             MOV ECX,dword ptr [ESP + 0x40]
1300248a  83c410               ADD ESP,0x10
1300248d  6a04                 PUSH 0x4
1300248f  6a0a                 PUSH 0xa
13002491  68f4810013           PUSH 0x130081f4
13002496  57                   PUSH EDI
13002497  51                   PUSH ECX
13002498  ffd0                 CALL EAX
1300249a  8d4c2448             LEA ECX,[ESP + 0x48]
1300249e  83c414               ADD ESP,0x14
130024a1  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
130024a7  a3348d0013           MOV [0x13008d34],EAX
130024ac  51                   PUSH ECX
130024ad  6a2c                 PUSH 0x2c
130024af  6a01                 PUSH 0x1
130024b1  8b0432               MOV EAX,dword ptr [EDX + ESI*0x1]
130024b4  50                   PUSH EAX
130024b5  e8c6140000           CALL 0x13003980
130024ba  8b4c2444             MOV ECX,dword ptr [ESP + 0x44]
130024be  83c410               ADD ESP,0x10
130024c1  6a04                 PUSH 0x4
130024c3  6a66                 PUSH 0x66
130024c5  68e0810013           PUSH 0x130081e0
130024ca  57                   PUSH EDI
130024cb  51                   PUSH ECX
130024cc  ffd0                 CALL EAX
130024ce  83c414               ADD ESP,0x14
130024d1  a3348d0013           MOV [0x13008d34],EAX
130024d6  33c0                 XOR EAX,EAX
130024d8  5f                   POP EDI
130024d9  5e                   POP ESI
130024da  83c430               ADD ESP,0x30
130024dd  c3                   RET
; undefined 2 bytes at 130024de

; ==== FUNCTION FUN_130024e0 entry=130024e0 sig=undefined4 __cdecl FUN_130024e0(undefined2 * param_1)
130024e0  81ec44010000         SUB ESP,0x144
130024e6  53                   PUSH EBX
130024e7  56                   PUSH ESI
130024e8  8bb42450010000       MOV ESI,dword ptr [ESP + 0x150]
130024ef  57                   PUSH EDI
130024f0  66c7061400           MOV word ptr [ESI],0x14
130024f5  55                   PUSH EBP
130024f6  bf01000000           MOV EDI,0x1
130024fb  66897e02             MOV word ptr [ESI + 0x2],DI
130024ff  ff153ca10013         CALL dword ptr [0x1300a13c]
13002505  33c9                 XOR ECX,ECX
13002507  8acc                 MOV CL,AH
13002509  51                   PUSH ECX
1300250a  33c9                 XOR ECX,ECX
1300250c  8ac8                 MOV CL,AL
1300250e  8d442458             LEA EAX,[ESP + 0x58]
13002512  51                   PUSH ECX
13002513  68f4820013           PUSH 0x130082f4
13002518  50                   PUSH EAX
13002519  e802140000           CALL 0x13003920
1300251e  8d4c2464             LEA ECX,[ESP + 0x64]
13002522  83c410               ADD ESP,0x10
13002525  8d5604               LEA EDX,[ESI + 0x4]
13002528  51                   PUSH ECX
13002529  52                   PUSH EDX
1300252a  6a00                 PUSH 0x0
1300252c  e87f170000           CALL 0x13003cb0
13002531  8d4c2440             LEA ECX,[ESP + 0x40]
13002535  8b1d38a10013         MOV EBX,dword ptr [0x1300a138]
1300253b  c744244020000000     MOV dword ptr [ESP + 0x40],0x20
13002543  83c40c               ADD ESP,0xc
13002546  51                   PUSH ECX
13002547  ffd3                 CALL EBX
13002549  66897e4c             MOV word ptr [ESI + 0x4c],DI
1300254d  8b4c243c             MOV ECX,dword ptr [ESP + 0x3c]
13002551  8d442434             LEA EAX,[ESP + 0x34]
13002555  894e4e               MOV dword ptr [ESI + 0x4e],ECX
13002558  c744243420000000     MOV dword ptr [ESP + 0x34],0x20
13002560  50                   PUSH EAX
13002561  ffd3                 CALL EBX
13002563  66897e52             MOV word ptr [ESI + 0x52],DI
13002567  8b4c2440             MOV ECX,dword ptr [ESP + 0x40]
1300256b  68e4820013           PUSH 0x130082e4
13002570  8d5658               LEA EDX,[ESI + 0x58]
13002573  52                   PUSH EDX
13002574  894e54               MOV dword ptr [ESI + 0x54],ECX
13002577  6a00                 PUSH 0x0
13002579  e832170000           CALL 0x13003cb0
1300257e  83c40c               ADD ESP,0xc
13002581  8d4e16               LEA ECX,[ESI + 0x16]
13002584  68dc820013           PUSH 0x130082dc
13002589  51                   PUSH ECX
1300258a  6a00                 PUSH 0x0
1300258c  e81f170000           CALL 0x13003cb0
13002591  8d4c241c             LEA ECX,[ESP + 0x1c]
13002595  83c40c               ADD ESP,0xc
13002598  8b3d34a10013         MOV EDI,dword ptr [0x1300a134]
1300259e  51                   PUSH ECX
1300259f  ffd7                 CALL EDI
130025a1  817c242882010000     CMP dword ptr [ESP + 0x28],0x182
130025a9  7507                 JNZ 0x130025b2
130025ab  b802000000           MOV EAX,0x2
130025b0  eb20                 JMP 0x130025d2
130025b2  817c2428e6010000     CMP dword ptr [ESP + 0x28],0x1e6
130025ba  b803000000           MOV EAX,0x3
130025bf  7411                 JZ 0x130025d2
130025c1  8b442428             MOV EAX,dword ptr [ESP + 0x28]
130025c5  2d4a020000           SUB EAX,0x24a
130025ca  83f801               CMP EAX,0x1
130025cd  1bc0                 SBB EAX,EAX
130025cf  83e004               AND EAX,0x4
130025d2  85c0                 TEST EAX,EAX
130025d4  7c05                 JL 0x130025db
130025d6  83f804               CMP EAX,0x4
130025d9  7e02                 JLE 0x130025dd
130025db  33c0                 XOR EAX,EAX
130025dd  8d1c85a0810013       LEA EBX,[EAX*0x4 + 0x130081a0]
130025e4  8d4e6a               LEA ECX,[ESI + 0x6a]
130025e7  8b03                 MOV EAX,dword ptr [EBX]
130025e9  50                   PUSH EAX
130025ea  51                   PUSH ECX
130025eb  6a00                 PUSH 0x0
130025ed  e8be160000           CALL 0x13003cb0
130025f2  83c40c               ADD ESP,0xc
130025f5  8b0b                 MOV ECX,dword ptr [EBX]
130025f7  8d5628               LEA EDX,[ESI + 0x28]
130025fa  51                   PUSH ECX
130025fb  52                   PUSH EDX
130025fc  6a00                 PUSH 0x0
130025fe  e8ad160000           CALL 0x13003cb0
13002603  8d4c241c             LEA ECX,[ESP + 0x1c]
13002607  83c40c               ADD ESP,0xc
1300260a  51                   PUSH ECX
1300260b  ffd7                 CALL EDI
1300260d  817c2428e6010000     CMP dword ptr [ESP + 0x28],0x1e6
13002615  740a                 JZ 0x13002621
13002617  817c24284a020000     CMP dword ptr [ESP + 0x28],0x24a
1300261f  7513                 JNZ 0x13002634
13002621  68d0820013           PUSH 0x130082d0
13002626  8d463a               LEA EAX,[ESI + 0x3a]
13002629  50                   PUSH EAX
1300262a  6a00                 PUSH 0x0
1300262c  e87f160000           CALL 0x13003cb0
13002631  83c40c               ADD ESP,0xc
13002634  68e4820013           PUSH 0x130082e4
13002639  8d467c               LEA EAX,[ESI + 0x7c]
1300263c  50                   PUSH EAX
1300263d  6a00                 PUSH 0x0
1300263f  e86c160000           CALL 0x13003cb0
13002644  83c40c               ADD ESP,0xc
13002647  6a00                 PUSH 0x0
13002649  ff15e0a10013         CALL dword ptr [0x1300a1e0]
1300264f  8bf8                 MOV EDI,EAX
13002651  6a0c                 PUSH 0xc
13002653  57                   PUSH EDI
13002654  ff151ca10013         CALL dword ptr [0x1300a11c]
1300265a  66c7868e0000000100   MOV word ptr [ESI + 0x8e],0x1
13002663  57                   PUSH EDI
13002664  898690000000         MOV dword ptr [ESI + 0x90],EAX
1300266a  6a00                 PUSH 0x0
1300266c  ff15dca10013         CALL dword ptr [0x1300a1dc]
13002672  6a00                 PUSH 0x0
13002674  8b1dd8a10013         MOV EBX,dword ptr [0x1300a1d8]
1300267a  ffd3                 CALL EBX
1300267c  8be8                 MOV EBP,EAX
1300267e  6a01                 PUSH 0x1
13002680  ffd3                 CALL EBX
13002682  66898698000000       MOV word ptr [ESI + 0x98],AX
13002689  6a00                 PUSH 0x0
1300268b  66c786940000000a00   MOV word ptr [ESI + 0x94],0xa
13002694  6689ae96000000       MOV word ptr [ESI + 0x96],BP
1300269b  ff15d4a10013         CALL dword ptr [0x1300a1d4]
130026a1  85c0                 TEST EAX,EAX
130026a3  7405                 JZ 0x130026aa
130026a5  83f807               CMP EAX,0x7
130026a8  7e02                 JLE 0x130026ac
130026aa  33c0                 XOR EAX,EAX
130026ac  8b0485b8810013       MOV EAX,dword ptr [EAX*0x4 + 0x130081b8]
130026b3  81c69a000000         ADD ESI,0x9a
130026b9  50                   PUSH EAX
130026ba  56                   PUSH ESI
130026bb  6a00                 PUSH 0x0
130026bd  e8ee150000           CALL 0x13003cb0
130026c2  83c40c               ADD ESP,0xc
130026c5  33c0                 XOR EAX,EAX
130026c7  5d                   POP EBP
130026c8  5f                   POP EDI
130026c9  5e                   POP ESI
130026ca  5b                   POP EBX
130026cb  81c444010000         ADD ESP,0x144
130026d1  c3                   RET
; undefined 14 bytes at 130026d2

; ==== FUNCTION FUN_130026e0 entry=130026e0 sig=undefined4 __cdecl FUN_130026e0(int param_1, int param_2)
130026e0  83ec04               SUB ESP,0x4
130026e3  53                   PUSH EBX
130026e4  56                   PUSH ESI
130026e5  8b742410             MOV ESI,dword ptr [ESP + 0x10]
130026e9  57                   PUSH EDI
130026ea  66c746046600         MOV word ptr [ESI + 0x4],0x66
130026f0  8b7c2418             MOV EDI,dword ptr [ESP + 0x18]
130026f4  55                   PUSH EBP
130026f5  c74606ffffffff       MOV dword ptr [ESI + 0x6],0xffffffff
130026fc  c7460a00000000       MOV dword ptr [ESI + 0xa],0x0
13002703  8d6e12               LEA EBP,[ESI + 0x12]
13002706  c7460e00000000       MOV dword ptr [ESI + 0xe],0x0
1300270d  c7450000000000       MOV dword ptr [EBP],0x0
13002714  837f0a00             CMP dword ptr [EDI + 0xa],0x0
13002718  7e4a                 JLE 0x13002764
1300271a  668b1dcc700013       MOV BX,word ptr [0x130070cc]
13002721  8d442410             LEA EAX,[ESP + 0x10]
13002725  50                   PUSH EAX
13002726  6a0e                 PUSH 0xe
13002728  6a01                 PUSH 0x1
1300272a  a1308d0013           MOV EAX,[0x13008d30]
1300272f  0fbfcb               MOVSX ECX,BX
13002732  8b1488               MOV EDX,dword ptr [EAX + ECX*0x4]
13002735  52                   PUSH EDX
13002736  e845120000           CALL 0x13003980
1300273b  8b542420             MOV EDX,dword ptr [ESP + 0x20]
1300273f  83c410               ADD ESP,0x10
13002742  8b4f0a               MOV ECX,dword ptr [EDI + 0xa]
13002745  51                   PUSH ECX
13002746  55                   PUSH EBP
13002747  52                   PUSH EDX
13002748  ffd0                 CALL EAX
1300274a  83c40c               ADD ESP,0xc
1300274d  a3348d0013           MOV [0x13008d34],EAX
13002752  8b4500               MOV EAX,dword ptr [EBP]
13002755  85c0                 TEST EAX,EAX
13002757  7412                 JZ 0x1300276b
13002759  8b4f0a               MOV ECX,dword ptr [EDI + 0xa]
1300275c  894e0a               MOV dword ptr [ESI + 0xa],ECX
1300275f  c60000               MOV byte ptr [EAX],0x0
13002762  eb07                 JMP 0x1300276b
13002764  668b1dcc700013       MOV BX,word ptr [0x130070cc]
1300276b  8d4704               LEA EAX,[EDI + 0x4]
1300276e  8d4e04               LEA ECX,[ESI + 0x4]
13002771  50                   PUSH EAX
13002772  51                   PUSH ECX
13002773  6a00                 PUSH 0x0
13002775  e876120000           CALL 0x130039f0
1300277a  83c40c               ADD ESP,0xc
1300277d  8d6e36               LEA EBP,[ESI + 0x36]
13002780  c7462affffffff       MOV dword ptr [ESI + 0x2a],0xffffffff
13002787  c7462e00000000       MOV dword ptr [ESI + 0x2e],0x0
1300278e  c7463200000000       MOV dword ptr [ESI + 0x32],0x0
13002795  66c746286600         MOV word ptr [ESI + 0x28],0x66
1300279b  c7450000000000       MOV dword ptr [EBP],0x0
130027a2  837f2e00             CMP dword ptr [EDI + 0x2e],0x0
130027a6  7e42                 JLE 0x130027ea
130027a8  8d442410             LEA EAX,[ESP + 0x10]
130027ac  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
130027b2  0fbfd3               MOVSX EDX,BX
130027b5  50                   PUSH EAX
130027b6  6a0e                 PUSH 0xe
130027b8  6a01                 PUSH 0x1
130027ba  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
130027bd  50                   PUSH EAX
130027be  e8bd110000           CALL 0x13003980
130027c3  8b542420             MOV EDX,dword ptr [ESP + 0x20]
130027c7  83c410               ADD ESP,0x10
130027ca  8b4f2e               MOV ECX,dword ptr [EDI + 0x2e]
130027cd  51                   PUSH ECX
130027ce  55                   PUSH EBP
130027cf  52                   PUSH EDX
130027d0  ffd0                 CALL EAX
130027d2  83c40c               ADD ESP,0xc
130027d5  a3348d0013           MOV [0x13008d34],EAX
130027da  8b4500               MOV EAX,dword ptr [EBP]
130027dd  85c0                 TEST EAX,EAX
130027df  7409                 JZ 0x130027ea
130027e1  8b4f2e               MOV ECX,dword ptr [EDI + 0x2e]
130027e4  894e2e               MOV dword ptr [ESI + 0x2e],ECX
130027e7  c60000               MOV byte ptr [EAX],0x0
130027ea  8d4728               LEA EAX,[EDI + 0x28]
130027ed  8d4e28               LEA ECX,[ESI + 0x28]
130027f0  50                   PUSH EAX
130027f1  8d6e16               LEA EBP,[ESI + 0x16]
130027f4  51                   PUSH ECX
130027f5  6a00                 PUSH 0x0
130027f7  e8f4110000           CALL 0x130039f0
130027fc  66c745006600         MOV word ptr [EBP],0x66
13002802  83c40c               ADD ESP,0xc
13002805  c74618ffffffff       MOV dword ptr [ESI + 0x18],0xffffffff
1300280c  c7461c00000000       MOV dword ptr [ESI + 0x1c],0x0
13002813  c7462000000000       MOV dword ptr [ESI + 0x20],0x0
1300281a  c7462400000000       MOV dword ptr [ESI + 0x24],0x0
13002821  837f1c00             CMP dword ptr [EDI + 0x1c],0x0
13002825  7e45                 JLE 0x1300286c
13002827  8d442410             LEA EAX,[ESP + 0x10]
1300282b  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13002831  0fbfd3               MOVSX EDX,BX
13002834  50                   PUSH EAX
13002835  6a0e                 PUSH 0xe
13002837  6a01                 PUSH 0x1
13002839  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
1300283c  50                   PUSH EAX
1300283d  e83e110000           CALL 0x13003980
13002842  83c410               ADD ESP,0x10
13002845  8b4f1c               MOV ECX,dword ptr [EDI + 0x1c]
13002848  8d5624               LEA EDX,[ESI + 0x24]
1300284b  51                   PUSH ECX
1300284c  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
13002850  52                   PUSH EDX
13002851  51                   PUSH ECX
13002852  ffd0                 CALL EAX
13002854  83c40c               ADD ESP,0xc
13002857  a3348d0013           MOV [0x13008d34],EAX
1300285c  8b4624               MOV EAX,dword ptr [ESI + 0x24]
1300285f  85c0                 TEST EAX,EAX
13002861  7409                 JZ 0x1300286c
13002863  8b4f1c               MOV ECX,dword ptr [EDI + 0x1c]
13002866  894e1c               MOV dword ptr [ESI + 0x1c],ECX
13002869  c60000               MOV byte ptr [EAX],0x0
1300286c  8d4716               LEA EAX,[EDI + 0x16]
1300286f  50                   PUSH EAX
13002870  55                   PUSH EBP
13002871  6a00                 PUSH 0x0
13002873  8d6e3a               LEA EBP,[ESI + 0x3a]
13002876  e875110000           CALL 0x130039f0
1300287b  66c745006600         MOV word ptr [EBP],0x66
13002881  83c40c               ADD ESP,0xc
13002884  c7463cffffffff       MOV dword ptr [ESI + 0x3c],0xffffffff
1300288b  c7464000000000       MOV dword ptr [ESI + 0x40],0x0
13002892  c7464400000000       MOV dword ptr [ESI + 0x44],0x0
13002899  c7464800000000       MOV dword ptr [ESI + 0x48],0x0
130028a0  837f4000             CMP dword ptr [EDI + 0x40],0x0
130028a4  7e45                 JLE 0x130028eb
130028a6  8d442410             LEA EAX,[ESP + 0x10]
130028aa  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
130028b0  0fbfcb               MOVSX ECX,BX
130028b3  50                   PUSH EAX
130028b4  6a0e                 PUSH 0xe
130028b6  6a01                 PUSH 0x1
130028b8  8b048a               MOV EAX,dword ptr [EDX + ECX*0x4]
130028bb  50                   PUSH EAX
130028bc  e8bf100000           CALL 0x13003980
130028c1  83c410               ADD ESP,0x10
130028c4  8b4f40               MOV ECX,dword ptr [EDI + 0x40]
130028c7  8d5648               LEA EDX,[ESI + 0x48]
130028ca  51                   PUSH ECX
130028cb  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
130028cf  52                   PUSH EDX
130028d0  51                   PUSH ECX
130028d1  ffd0                 CALL EAX
130028d3  83c40c               ADD ESP,0xc
130028d6  a3348d0013           MOV [0x13008d34],EAX
130028db  8b4648               MOV EAX,dword ptr [ESI + 0x48]
130028de  85c0                 TEST EAX,EAX
130028e0  7409                 JZ 0x130028eb
130028e2  8b4f40               MOV ECX,dword ptr [EDI + 0x40]
130028e5  894e40               MOV dword ptr [ESI + 0x40],ECX
130028e8  c60000               MOV byte ptr [EAX],0x0
130028eb  8d473a               LEA EAX,[EDI + 0x3a]
130028ee  50                   PUSH EAX
130028ef  55                   PUSH EBP
130028f0  6a00                 PUSH 0x0
130028f2  e8f9100000           CALL 0x130039f0
130028f7  83c40c               ADD ESP,0xc
130028fa  8d6e66               LEA EBP,[ESI + 0x66]
130028fd  c7465affffffff       MOV dword ptr [ESI + 0x5a],0xffffffff
13002904  c7465e00000000       MOV dword ptr [ESI + 0x5e],0x0
1300290b  c7466200000000       MOV dword ptr [ESI + 0x62],0x0
13002912  66c746586600         MOV word ptr [ESI + 0x58],0x66
13002918  c7450000000000       MOV dword ptr [EBP],0x0
1300291f  837f5e00             CMP dword ptr [EDI + 0x5e],0x0
13002923  7e42                 JLE 0x13002967
13002925  8d442410             LEA EAX,[ESP + 0x10]
13002929  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
1300292f  0fbfd3               MOVSX EDX,BX
13002932  50                   PUSH EAX
13002933  6a0e                 PUSH 0xe
13002935  6a01                 PUSH 0x1
13002937  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
1300293a  50                   PUSH EAX
1300293b  e840100000           CALL 0x13003980
13002940  8b542420             MOV EDX,dword ptr [ESP + 0x20]
13002944  83c410               ADD ESP,0x10
13002947  8b4f5e               MOV ECX,dword ptr [EDI + 0x5e]
1300294a  51                   PUSH ECX
1300294b  55                   PUSH EBP
1300294c  52                   PUSH EDX
1300294d  ffd0                 CALL EAX
1300294f  83c40c               ADD ESP,0xc
13002952  a3348d0013           MOV [0x13008d34],EAX
13002957  8b4500               MOV EAX,dword ptr [EBP]
1300295a  85c0                 TEST EAX,EAX
1300295c  7409                 JZ 0x13002967
1300295e  8b4f5e               MOV ECX,dword ptr [EDI + 0x5e]
13002961  894e5e               MOV dword ptr [ESI + 0x5e],ECX
13002964  c60000               MOV byte ptr [EAX],0x0
13002967  8d4758               LEA EAX,[EDI + 0x58]
1300296a  8d4e58               LEA ECX,[ESI + 0x58]
1300296d  50                   PUSH EAX
1300296e  8d6e6a               LEA EBP,[ESI + 0x6a]
13002971  51                   PUSH ECX
13002972  6a00                 PUSH 0x0
13002974  e877100000           CALL 0x130039f0
13002979  66c745006600         MOV word ptr [EBP],0x66
1300297f  83c40c               ADD ESP,0xc
13002982  c7466cffffffff       MOV dword ptr [ESI + 0x6c],0xffffffff
13002989  c7467000000000       MOV dword ptr [ESI + 0x70],0x0
13002990  c7467400000000       MOV dword ptr [ESI + 0x74],0x0
13002997  c7467800000000       MOV dword ptr [ESI + 0x78],0x0
1300299e  837f7000             CMP dword ptr [EDI + 0x70],0x0
130029a2  7e45                 JLE 0x130029e9
130029a4  8d442410             LEA EAX,[ESP + 0x10]
130029a8  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
130029ae  0fbfd3               MOVSX EDX,BX
130029b1  50                   PUSH EAX
130029b2  6a0e                 PUSH 0xe
130029b4  6a01                 PUSH 0x1
130029b6  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
130029b9  50                   PUSH EAX
130029ba  e8c10f0000           CALL 0x13003980
130029bf  83c410               ADD ESP,0x10
130029c2  8b4f70               MOV ECX,dword ptr [EDI + 0x70]
130029c5  8d5678               LEA EDX,[ESI + 0x78]
130029c8  51                   PUSH ECX
130029c9  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
130029cd  52                   PUSH EDX
130029ce  51                   PUSH ECX
130029cf  ffd0                 CALL EAX
130029d1  83c40c               ADD ESP,0xc
130029d4  a3348d0013           MOV [0x13008d34],EAX
130029d9  8b4678               MOV EAX,dword ptr [ESI + 0x78]
130029dc  85c0                 TEST EAX,EAX
130029de  7409                 JZ 0x130029e9
130029e0  8b4f70               MOV ECX,dword ptr [EDI + 0x70]
130029e3  894e70               MOV dword ptr [ESI + 0x70],ECX
130029e6  c60000               MOV byte ptr [EAX],0x0
130029e9  8d476a               LEA EAX,[EDI + 0x6a]
130029ec  50                   PUSH EAX
130029ed  55                   PUSH EBP
130029ee  6a00                 PUSH 0x0
130029f0  8d6e7c               LEA EBP,[ESI + 0x7c]
130029f3  e8f80f0000           CALL 0x130039f0
130029f8  66c745006600         MOV word ptr [EBP],0x66
130029fe  83c40c               ADD ESP,0xc
13002a01  c7467effffffff       MOV dword ptr [ESI + 0x7e],0xffffffff
13002a08  c7868200000000000000 MOV dword ptr [ESI + 0x82],0x0
13002a12  c7868600000000000000 MOV dword ptr [ESI + 0x86],0x0
13002a1c  c7868a00000000000000 MOV dword ptr [ESI + 0x8a],0x0
13002a26  83bf8200000000       CMP dword ptr [EDI + 0x82],0x0
13002a2d  7e54                 JLE 0x13002a83
13002a2f  8d442410             LEA EAX,[ESP + 0x10]
13002a33  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
13002a39  0fbfcb               MOVSX ECX,BX
13002a3c  50                   PUSH EAX
13002a3d  6a0e                 PUSH 0xe
13002a3f  6a01                 PUSH 0x1
13002a41  8b048a               MOV EAX,dword ptr [EDX + ECX*0x4]
13002a44  50                   PUSH EAX
13002a45  e8360f0000           CALL 0x13003980
13002a4a  83c410               ADD ESP,0x10
13002a4d  8b8f82000000         MOV ECX,dword ptr [EDI + 0x82]
13002a53  8d968a000000         LEA EDX,[ESI + 0x8a]
13002a59  51                   PUSH ECX
13002a5a  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
13002a5e  52                   PUSH EDX
13002a5f  51                   PUSH ECX
13002a60  ffd0                 CALL EAX
13002a62  83c40c               ADD ESP,0xc
13002a65  a3348d0013           MOV [0x13008d34],EAX
13002a6a  8b868a000000         MOV EAX,dword ptr [ESI + 0x8a]
13002a70  85c0                 TEST EAX,EAX
13002a72  740f                 JZ 0x13002a83
13002a74  8b8f82000000         MOV ECX,dword ptr [EDI + 0x82]
13002a7a  898e82000000         MOV dword ptr [ESI + 0x82],ECX
13002a80  c60000               MOV byte ptr [EAX],0x0
13002a83  8d477c               LEA EAX,[EDI + 0x7c]
13002a86  50                   PUSH EAX
13002a87  55                   PUSH EBP
13002a88  6a00                 PUSH 0x0
13002a8a  e8610f0000           CALL 0x130039f0
13002a8f  83c40c               ADD ESP,0xc
13002a92  8daea8000000         LEA EBP,[ESI + 0xa8]
13002a98  c7869c000000ffffffff MOV dword ptr [ESI + 0x9c],0xffffffff
13002aa2  c786a000000000000000 MOV dword ptr [ESI + 0xa0],0x0
13002aac  c786a400000000000000 MOV dword ptr [ESI + 0xa4],0x0
13002ab6  66c7869a0000006600   MOV word ptr [ESI + 0x9a],0x66
13002abf  c7450000000000       MOV dword ptr [EBP],0x0
13002ac6  83bfa000000000       CMP dword ptr [EDI + 0xa0],0x0
13002acd  7e4b                 JLE 0x13002b1a
13002acf  8d442410             LEA EAX,[ESP + 0x10]
13002ad3  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13002ad9  0fbfd3               MOVSX EDX,BX
13002adc  50                   PUSH EAX
13002add  6a0e                 PUSH 0xe
13002adf  6a01                 PUSH 0x1
13002ae1  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
13002ae4  50                   PUSH EAX
13002ae5  e8960e0000           CALL 0x13003980
13002aea  8b542420             MOV EDX,dword ptr [ESP + 0x20]
13002aee  83c410               ADD ESP,0x10
13002af1  8b8fa0000000         MOV ECX,dword ptr [EDI + 0xa0]
13002af7  51                   PUSH ECX
13002af8  55                   PUSH EBP
13002af9  52                   PUSH EDX
13002afa  ffd0                 CALL EAX
13002afc  83c40c               ADD ESP,0xc
13002aff  a3348d0013           MOV [0x13008d34],EAX
13002b04  8b4500               MOV EAX,dword ptr [EBP]
13002b07  85c0                 TEST EAX,EAX
13002b09  740f                 JZ 0x13002b1a
13002b0b  8b8fa0000000         MOV ECX,dword ptr [EDI + 0xa0]
13002b11  898ea0000000         MOV dword ptr [ESI + 0xa0],ECX
13002b17  c60000               MOV byte ptr [EAX],0x0
13002b1a  8d879a000000         LEA EAX,[EDI + 0x9a]
13002b20  8d8e9a000000         LEA ECX,[ESI + 0x9a]
13002b26  50                   PUSH EAX
13002b27  51                   PUSH ECX
13002b28  6a00                 PUSH 0x0
13002b2a  e8c10e0000           CALL 0x130039f0
13002b2f  83c40c               ADD ESP,0xc
13002b32  8d474c               LEA EAX,[EDI + 0x4c]
13002b35  8d564c               LEA EDX,[ESI + 0x4c]
13002b38  8b08                 MOV ECX,dword ptr [EAX]
13002b3a  890a                 MOV dword ptr [EDX],ECX
13002b3c  668b4004             MOV AX,word ptr [EAX + 0x4]
13002b40  66894204             MOV word ptr [EDX + 0x4],AX
13002b44  8d4752               LEA EAX,[EDI + 0x52]
13002b47  8d5652               LEA EDX,[ESI + 0x52]
13002b4a  8b08                 MOV ECX,dword ptr [EAX]
13002b4c  890a                 MOV dword ptr [EDX],ECX
13002b4e  668b4004             MOV AX,word ptr [EAX + 0x4]
13002b52  66894204             MOV word ptr [EDX + 0x4],AX
13002b56  8d878e000000         LEA EAX,[EDI + 0x8e]
13002b5c  8d968e000000         LEA EDX,[ESI + 0x8e]
13002b62  81c794000000         ADD EDI,0x94
13002b68  8b08                 MOV ECX,dword ptr [EAX]
13002b6a  81c694000000         ADD ESI,0x94
13002b70  890a                 MOV dword ptr [EDX],ECX
13002b72  668b4004             MOV AX,word ptr [EAX + 0x4]
13002b76  5d                   POP EBP
13002b77  66894204             MOV word ptr [EDX + 0x4],AX
13002b7b  8b07                 MOV EAX,dword ptr [EDI]
13002b7d  8906                 MOV dword ptr [ESI],EAX
13002b7f  33c0                 XOR EAX,EAX
13002b81  668b4f04             MOV CX,word ptr [EDI + 0x4]
13002b85  5f                   POP EDI
13002b86  66894e04             MOV word ptr [ESI + 0x4],CX
13002b8a  5e                   POP ESI
13002b8b  5b                   POP EBX
13002b8c  83c404               ADD ESP,0x4
13002b8f  c3                   RET

; ==== FUNCTION FUN_13002b90 entry=13002b90 sig=undefined4 __cdecl FUN_13002b90(int param_1, int param_2)
13002b90  83ec04               SUB ESP,0x4
13002b93  53                   PUSH EBX
13002b94  56                   PUSH ESI
13002b95  8b742410             MOV ESI,dword ptr [ESP + 0x10]
13002b99  57                   PUSH EDI
13002b9a  55                   PUSH EBP
13002b9b  837e1200             CMP dword ptr [ESI + 0x12],0x0
13002b9f  744f                 JZ 0x13002bf0
13002ba1  668b1dcc700013       MOV BX,word ptr [0x130070cc]
13002ba8  8d442410             LEA EAX,[ESP + 0x10]
13002bac  50                   PUSH EAX
13002bad  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13002bb3  0fbfd3               MOVSX EDX,BX
13002bb6  6a10                 PUSH 0x10
13002bb8  6a01                 PUSH 0x1
13002bba  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
13002bbd  50                   PUSH EAX
13002bbe  e8bd0d0000           CALL 0x13003980
13002bc3  8b542420             MOV EDX,dword ptr [ESP + 0x20]
13002bc7  83c410               ADD ESP,0x10
13002bca  8b4e12               MOV ECX,dword ptr [ESI + 0x12]
13002bcd  51                   PUSH ECX
13002bce  52                   PUSH EDX
13002bcf  ffd0                 CALL EAX
13002bd1  83c408               ADD ESP,0x8
13002bd4  a3348d0013           MOV [0x13008d34],EAX
13002bd9  c7461200000000       MOV dword ptr [ESI + 0x12],0x0
13002be0  c7460a00000000       MOV dword ptr [ESI + 0xa],0x0
13002be7  c7460e00000000       MOV dword ptr [ESI + 0xe],0x0
13002bee  eb07                 JMP 0x13002bf7
13002bf0  668b1dcc700013       MOV BX,word ptr [0x130070cc]
13002bf7  c74606ffffffff       MOV dword ptr [ESI + 0x6],0xffffffff
13002bfe  8d6e04               LEA EBP,[ESI + 0x4]
13002c01  8b7c241c             MOV EDI,dword ptr [ESP + 0x1c]
13002c05  c7460a00000000       MOV dword ptr [ESI + 0xa],0x0
13002c0c  c7460e00000000       MOV dword ptr [ESI + 0xe],0x0
13002c13  c7461200000000       MOV dword ptr [ESI + 0x12],0x0
13002c1a  66c745006600         MOV word ptr [EBP],0x66
13002c20  837f0a00             CMP dword ptr [EDI + 0xa],0x0
13002c24  7e45                 JLE 0x13002c6b
13002c26  8d442410             LEA EAX,[ESP + 0x10]
13002c2a  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
13002c30  0fbfcb               MOVSX ECX,BX
13002c33  50                   PUSH EAX
13002c34  6a0e                 PUSH 0xe
13002c36  6a01                 PUSH 0x1
13002c38  8b048a               MOV EAX,dword ptr [EDX + ECX*0x4]
13002c3b  50                   PUSH EAX
13002c3c  e83f0d0000           CALL 0x13003980
13002c41  83c410               ADD ESP,0x10
13002c44  8b4f0a               MOV ECX,dword ptr [EDI + 0xa]
13002c47  8d5612               LEA EDX,[ESI + 0x12]
13002c4a  51                   PUSH ECX
13002c4b  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
13002c4f  52                   PUSH EDX
13002c50  51                   PUSH ECX
13002c51  ffd0                 CALL EAX
13002c53  83c40c               ADD ESP,0xc
13002c56  a3348d0013           MOV [0x13008d34],EAX
13002c5b  8b4612               MOV EAX,dword ptr [ESI + 0x12]
13002c5e  85c0                 TEST EAX,EAX
13002c60  7409                 JZ 0x13002c6b
13002c62  8b4f0a               MOV ECX,dword ptr [EDI + 0xa]
13002c65  894e0a               MOV dword ptr [ESI + 0xa],ECX
13002c68  c60000               MOV byte ptr [EAX],0x0
13002c6b  8d4704               LEA EAX,[EDI + 0x4]
13002c6e  50                   PUSH EAX
13002c6f  55                   PUSH EBP
13002c70  6a00                 PUSH 0x0
13002c72  e8790d0000           CALL 0x130039f0
13002c77  83c40c               ADD ESP,0xc
13002c7a  837e3600             CMP dword ptr [ESI + 0x36],0x0
13002c7e  7446                 JZ 0x13002cc6
13002c80  8d442410             LEA EAX,[ESP + 0x10]
13002c84  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
13002c8a  0fbfcb               MOVSX ECX,BX
13002c8d  50                   PUSH EAX
13002c8e  6a10                 PUSH 0x10
13002c90  6a01                 PUSH 0x1
13002c92  8b048a               MOV EAX,dword ptr [EDX + ECX*0x4]
13002c95  50                   PUSH EAX
13002c96  e8e50c0000           CALL 0x13003980
13002c9b  8b542420             MOV EDX,dword ptr [ESP + 0x20]
13002c9f  83c410               ADD ESP,0x10
13002ca2  8b4e36               MOV ECX,dword ptr [ESI + 0x36]
13002ca5  51                   PUSH ECX
13002ca6  52                   PUSH EDX
13002ca7  ffd0                 CALL EAX
13002ca9  83c408               ADD ESP,0x8
13002cac  a3348d0013           MOV [0x13008d34],EAX
13002cb1  c7463600000000       MOV dword ptr [ESI + 0x36],0x0
13002cb8  c7462e00000000       MOV dword ptr [ESI + 0x2e],0x0
13002cbf  c7463200000000       MOV dword ptr [ESI + 0x32],0x0
13002cc6  c7462affffffff       MOV dword ptr [ESI + 0x2a],0xffffffff
13002ccd  c7462e00000000       MOV dword ptr [ESI + 0x2e],0x0
13002cd4  c7463200000000       MOV dword ptr [ESI + 0x32],0x0
13002cdb  c7463600000000       MOV dword ptr [ESI + 0x36],0x0
13002ce2  8d6e28               LEA EBP,[ESI + 0x28]
13002ce5  66c745006600         MOV word ptr [EBP],0x66
13002ceb  837f2e00             CMP dword ptr [EDI + 0x2e],0x0
13002cef  7e45                 JLE 0x13002d36
13002cf1  8d442410             LEA EAX,[ESP + 0x10]
13002cf5  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13002cfb  0fbfd3               MOVSX EDX,BX
13002cfe  50                   PUSH EAX
13002cff  6a0e                 PUSH 0xe
13002d01  6a01                 PUSH 0x1
13002d03  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
13002d06  50                   PUSH EAX
13002d07  e8740c0000           CALL 0x13003980
13002d0c  83c410               ADD ESP,0x10
13002d0f  8b4f2e               MOV ECX,dword ptr [EDI + 0x2e]
13002d12  8d5636               LEA EDX,[ESI + 0x36]
13002d15  51                   PUSH ECX
13002d16  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
13002d1a  52                   PUSH EDX
13002d1b  51                   PUSH ECX
13002d1c  ffd0                 CALL EAX
13002d1e  83c40c               ADD ESP,0xc
13002d21  a3348d0013           MOV [0x13008d34],EAX
13002d26  8b4636               MOV EAX,dword ptr [ESI + 0x36]
13002d29  85c0                 TEST EAX,EAX
13002d2b  7409                 JZ 0x13002d36
13002d2d  8b4f2e               MOV ECX,dword ptr [EDI + 0x2e]
13002d30  894e2e               MOV dword ptr [ESI + 0x2e],ECX
13002d33  c60000               MOV byte ptr [EAX],0x0
13002d36  8d4728               LEA EAX,[EDI + 0x28]
13002d39  50                   PUSH EAX
13002d3a  55                   PUSH EBP
13002d3b  6a00                 PUSH 0x0
13002d3d  8d6e24               LEA EBP,[ESI + 0x24]
13002d40  e8ab0c0000           CALL 0x130039f0
13002d45  83c40c               ADD ESP,0xc
13002d48  837d0000             CMP dword ptr [EBP],0x0
13002d4c  7446                 JZ 0x13002d94
13002d4e  8d442410             LEA EAX,[ESP + 0x10]
13002d52  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13002d58  0fbfd3               MOVSX EDX,BX
13002d5b  50                   PUSH EAX
13002d5c  6a10                 PUSH 0x10
13002d5e  6a01                 PUSH 0x1
13002d60  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
13002d63  50                   PUSH EAX
13002d64  e8170c0000           CALL 0x13003980
13002d69  8b542420             MOV EDX,dword ptr [ESP + 0x20]
13002d6d  83c410               ADD ESP,0x10
13002d70  8b4d00               MOV ECX,dword ptr [EBP]
13002d73  51                   PUSH ECX
13002d74  52                   PUSH EDX
13002d75  ffd0                 CALL EAX
13002d77  83c408               ADD ESP,0x8
13002d7a  a3348d0013           MOV [0x13008d34],EAX
13002d7f  c7461c00000000       MOV dword ptr [ESI + 0x1c],0x0
13002d86  c7462000000000       MOV dword ptr [ESI + 0x20],0x0
13002d8d  c7450000000000       MOV dword ptr [EBP],0x0
13002d94  c74618ffffffff       MOV dword ptr [ESI + 0x18],0xffffffff
13002d9b  c7461c00000000       MOV dword ptr [ESI + 0x1c],0x0
13002da2  c7462000000000       MOV dword ptr [ESI + 0x20],0x0
13002da9  66c746166600         MOV word ptr [ESI + 0x16],0x66
13002daf  c7450000000000       MOV dword ptr [EBP],0x0
13002db6  837f1c00             CMP dword ptr [EDI + 0x1c],0x0
13002dba  7e42                 JLE 0x13002dfe
13002dbc  8d442410             LEA EAX,[ESP + 0x10]
13002dc0  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
13002dc6  0fbfcb               MOVSX ECX,BX
13002dc9  50                   PUSH EAX
13002dca  6a0e                 PUSH 0xe
13002dcc  6a01                 PUSH 0x1
13002dce  8b048a               MOV EAX,dword ptr [EDX + ECX*0x4]
13002dd1  50                   PUSH EAX
13002dd2  e8a90b0000           CALL 0x13003980
13002dd7  8b542420             MOV EDX,dword ptr [ESP + 0x20]
13002ddb  83c410               ADD ESP,0x10
13002dde  8b4f1c               MOV ECX,dword ptr [EDI + 0x1c]
13002de1  51                   PUSH ECX
13002de2  55                   PUSH EBP
13002de3  52                   PUSH EDX
13002de4  ffd0                 CALL EAX
13002de6  83c40c               ADD ESP,0xc
13002de9  a3348d0013           MOV [0x13008d34],EAX
13002dee  8b4500               MOV EAX,dword ptr [EBP]
13002df1  85c0                 TEST EAX,EAX
13002df3  7409                 JZ 0x13002dfe
13002df5  8b4f1c               MOV ECX,dword ptr [EDI + 0x1c]
13002df8  894e1c               MOV dword ptr [ESI + 0x1c],ECX
13002dfb  c60000               MOV byte ptr [EAX],0x0
13002dfe  8d4716               LEA EAX,[EDI + 0x16]
13002e01  8d4e16               LEA ECX,[ESI + 0x16]
13002e04  50                   PUSH EAX
13002e05  8d6e48               LEA EBP,[ESI + 0x48]
13002e08  51                   PUSH ECX
13002e09  6a00                 PUSH 0x0
13002e0b  e8e00b0000           CALL 0x130039f0
13002e10  83c40c               ADD ESP,0xc
13002e13  837d0000             CMP dword ptr [EBP],0x0
13002e17  7446                 JZ 0x13002e5f
13002e19  8d442410             LEA EAX,[ESP + 0x10]
13002e1d  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
13002e23  0fbfcb               MOVSX ECX,BX
13002e26  50                   PUSH EAX
13002e27  6a10                 PUSH 0x10
13002e29  6a01                 PUSH 0x1
13002e2b  8b048a               MOV EAX,dword ptr [EDX + ECX*0x4]
13002e2e  50                   PUSH EAX
13002e2f  e84c0b0000           CALL 0x13003980
13002e34  8b542420             MOV EDX,dword ptr [ESP + 0x20]
13002e38  83c410               ADD ESP,0x10
13002e3b  8b4d00               MOV ECX,dword ptr [EBP]
13002e3e  51                   PUSH ECX
13002e3f  52                   PUSH EDX
13002e40  ffd0                 CALL EAX
13002e42  83c408               ADD ESP,0x8
13002e45  a3348d0013           MOV [0x13008d34],EAX
13002e4a  c7464000000000       MOV dword ptr [ESI + 0x40],0x0
13002e51  c7464400000000       MOV dword ptr [ESI + 0x44],0x0
13002e58  c7450000000000       MOV dword ptr [EBP],0x0
13002e5f  c7463cffffffff       MOV dword ptr [ESI + 0x3c],0xffffffff
13002e66  c7464000000000       MOV dword ptr [ESI + 0x40],0x0
13002e6d  c7464400000000       MOV dword ptr [ESI + 0x44],0x0
13002e74  66c7463a6600         MOV word ptr [ESI + 0x3a],0x66
13002e7a  c7450000000000       MOV dword ptr [EBP],0x0
13002e81  837f4000             CMP dword ptr [EDI + 0x40],0x0
13002e85  7e42                 JLE 0x13002ec9
13002e87  8d442410             LEA EAX,[ESP + 0x10]
13002e8b  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13002e91  0fbfd3               MOVSX EDX,BX
13002e94  50                   PUSH EAX
13002e95  6a0e                 PUSH 0xe
13002e97  6a01                 PUSH 0x1
13002e99  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
13002e9c  50                   PUSH EAX
13002e9d  e8de0a0000           CALL 0x13003980
13002ea2  8b542420             MOV EDX,dword ptr [ESP + 0x20]
13002ea6  83c410               ADD ESP,0x10
13002ea9  8b4f40               MOV ECX,dword ptr [EDI + 0x40]
13002eac  51                   PUSH ECX
13002ead  55                   PUSH EBP
13002eae  52                   PUSH EDX
13002eaf  ffd0                 CALL EAX
13002eb1  83c40c               ADD ESP,0xc
13002eb4  a3348d0013           MOV [0x13008d34],EAX
13002eb9  8b4500               MOV EAX,dword ptr [EBP]
13002ebc  85c0                 TEST EAX,EAX
13002ebe  7409                 JZ 0x13002ec9
13002ec0  8b4f40               MOV ECX,dword ptr [EDI + 0x40]
13002ec3  894e40               MOV dword ptr [ESI + 0x40],ECX
13002ec6  c60000               MOV byte ptr [EAX],0x0
13002ec9  8d473a               LEA EAX,[EDI + 0x3a]
13002ecc  8d4e3a               LEA ECX,[ESI + 0x3a]
13002ecf  50                   PUSH EAX
13002ed0  51                   PUSH ECX
13002ed1  6a00                 PUSH 0x0
13002ed3  e8180b0000           CALL 0x130039f0
13002ed8  83c40c               ADD ESP,0xc
13002edb  837e6600             CMP dword ptr [ESI + 0x66],0x0
13002edf  7446                 JZ 0x13002f27
13002ee1  8d442410             LEA EAX,[ESP + 0x10]
13002ee5  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13002eeb  0fbfd3               MOVSX EDX,BX
13002eee  50                   PUSH EAX
13002eef  6a10                 PUSH 0x10
13002ef1  6a01                 PUSH 0x1
13002ef3  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
13002ef6  50                   PUSH EAX
13002ef7  e8840a0000           CALL 0x13003980
13002efc  8b542420             MOV EDX,dword ptr [ESP + 0x20]
13002f00  83c410               ADD ESP,0x10
13002f03  8b4e66               MOV ECX,dword ptr [ESI + 0x66]
13002f06  51                   PUSH ECX
13002f07  52                   PUSH EDX
13002f08  ffd0                 CALL EAX
13002f0a  83c408               ADD ESP,0x8
13002f0d  a3348d0013           MOV [0x13008d34],EAX
13002f12  c7466600000000       MOV dword ptr [ESI + 0x66],0x0
13002f19  c7465e00000000       MOV dword ptr [ESI + 0x5e],0x0
13002f20  c7466200000000       MOV dword ptr [ESI + 0x62],0x0
13002f27  c7465affffffff       MOV dword ptr [ESI + 0x5a],0xffffffff
13002f2e  c7465e00000000       MOV dword ptr [ESI + 0x5e],0x0
13002f35  c7466200000000       MOV dword ptr [ESI + 0x62],0x0
13002f3c  c7466600000000       MOV dword ptr [ESI + 0x66],0x0
13002f43  8d6e58               LEA EBP,[ESI + 0x58]
13002f46  66c745006600         MOV word ptr [EBP],0x66
13002f4c  837f5e00             CMP dword ptr [EDI + 0x5e],0x0
13002f50  7e45                 JLE 0x13002f97
13002f52  8d442410             LEA EAX,[ESP + 0x10]
13002f56  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
13002f5c  0fbfcb               MOVSX ECX,BX
13002f5f  50                   PUSH EAX
13002f60  6a0e                 PUSH 0xe
13002f62  6a01                 PUSH 0x1
13002f64  8b048a               MOV EAX,dword ptr [EDX + ECX*0x4]
13002f67  50                   PUSH EAX
13002f68  e8130a0000           CALL 0x13003980
13002f6d  83c410               ADD ESP,0x10
13002f70  8b4f5e               MOV ECX,dword ptr [EDI + 0x5e]
13002f73  8d5666               LEA EDX,[ESI + 0x66]
13002f76  51                   PUSH ECX
13002f77  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
13002f7b  52                   PUSH EDX
13002f7c  51                   PUSH ECX
13002f7d  ffd0                 CALL EAX
13002f7f  83c40c               ADD ESP,0xc
13002f82  a3348d0013           MOV [0x13008d34],EAX
13002f87  8b4666               MOV EAX,dword ptr [ESI + 0x66]
13002f8a  85c0                 TEST EAX,EAX
13002f8c  7409                 JZ 0x13002f97
13002f8e  8b4f5e               MOV ECX,dword ptr [EDI + 0x5e]
13002f91  894e5e               MOV dword ptr [ESI + 0x5e],ECX
13002f94  c60000               MOV byte ptr [EAX],0x0
13002f97  8d4758               LEA EAX,[EDI + 0x58]
13002f9a  50                   PUSH EAX
13002f9b  55                   PUSH EBP
13002f9c  6a00                 PUSH 0x0
13002f9e  e84d0a0000           CALL 0x130039f0
13002fa3  83c40c               ADD ESP,0xc
13002fa6  837e7800             CMP dword ptr [ESI + 0x78],0x0
13002faa  7446                 JZ 0x13002ff2
13002fac  8d442410             LEA EAX,[ESP + 0x10]
13002fb0  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
13002fb6  0fbfcb               MOVSX ECX,BX
13002fb9  50                   PUSH EAX
13002fba  6a10                 PUSH 0x10
13002fbc  6a01                 PUSH 0x1
13002fbe  8b048a               MOV EAX,dword ptr [EDX + ECX*0x4]
13002fc1  50                   PUSH EAX
13002fc2  e8b9090000           CALL 0x13003980
13002fc7  8b542420             MOV EDX,dword ptr [ESP + 0x20]
13002fcb  83c410               ADD ESP,0x10
13002fce  8b4e78               MOV ECX,dword ptr [ESI + 0x78]
13002fd1  51                   PUSH ECX
13002fd2  52                   PUSH EDX
13002fd3  ffd0                 CALL EAX
13002fd5  83c408               ADD ESP,0x8
13002fd8  a3348d0013           MOV [0x13008d34],EAX
13002fdd  c7467800000000       MOV dword ptr [ESI + 0x78],0x0
13002fe4  c7467000000000       MOV dword ptr [ESI + 0x70],0x0
13002feb  c7467400000000       MOV dword ptr [ESI + 0x74],0x0
13002ff2  c7466cffffffff       MOV dword ptr [ESI + 0x6c],0xffffffff
13002ff9  c7467000000000       MOV dword ptr [ESI + 0x70],0x0
13003000  c7467400000000       MOV dword ptr [ESI + 0x74],0x0
13003007  c7467800000000       MOV dword ptr [ESI + 0x78],0x0
1300300e  8d6e6a               LEA EBP,[ESI + 0x6a]
13003011  66c745006600         MOV word ptr [EBP],0x66
13003017  837f7000             CMP dword ptr [EDI + 0x70],0x0
1300301b  7e45                 JLE 0x13003062
1300301d  8d442410             LEA EAX,[ESP + 0x10]
13003021  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13003027  0fbfd3               MOVSX EDX,BX
1300302a  50                   PUSH EAX
1300302b  6a0e                 PUSH 0xe
1300302d  6a01                 PUSH 0x1
1300302f  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
13003032  50                   PUSH EAX
13003033  e848090000           CALL 0x13003980
13003038  83c410               ADD ESP,0x10
1300303b  8b4f70               MOV ECX,dword ptr [EDI + 0x70]
1300303e  8d5678               LEA EDX,[ESI + 0x78]
13003041  51                   PUSH ECX
13003042  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
13003046  52                   PUSH EDX
13003047  51                   PUSH ECX
13003048  ffd0                 CALL EAX
1300304a  83c40c               ADD ESP,0xc
1300304d  a3348d0013           MOV [0x13008d34],EAX
13003052  8b4678               MOV EAX,dword ptr [ESI + 0x78]
13003055  85c0                 TEST EAX,EAX
13003057  7409                 JZ 0x13003062
13003059  8b4f70               MOV ECX,dword ptr [EDI + 0x70]
1300305c  894e70               MOV dword ptr [ESI + 0x70],ECX
1300305f  c60000               MOV byte ptr [EAX],0x0
13003062  8d476a               LEA EAX,[EDI + 0x6a]
13003065  50                   PUSH EAX
13003066  55                   PUSH EBP
13003067  6a00                 PUSH 0x0
13003069  e882090000           CALL 0x130039f0
1300306e  83c40c               ADD ESP,0xc
13003071  83be8a00000000       CMP dword ptr [ESI + 0x8a],0x0
13003078  7452                 JZ 0x130030cc
1300307a  8d442410             LEA EAX,[ESP + 0x10]
1300307e  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13003084  0fbfd3               MOVSX EDX,BX
13003087  50                   PUSH EAX
13003088  6a10                 PUSH 0x10
1300308a  6a01                 PUSH 0x1
1300308c  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
1300308f  50                   PUSH EAX
13003090  e8eb080000           CALL 0x13003980
13003095  8b542420             MOV EDX,dword ptr [ESP + 0x20]
13003099  83c410               ADD ESP,0x10
1300309c  8b8e8a000000         MOV ECX,dword ptr [ESI + 0x8a]
130030a2  51                   PUSH ECX
130030a3  52                   PUSH EDX
130030a4  ffd0                 CALL EAX
130030a6  83c408               ADD ESP,0x8
130030a9  a3348d0013           MOV [0x13008d34],EAX
130030ae  c7868a00000000000000 MOV dword ptr [ESI + 0x8a],0x0
130030b8  c7868200000000000000 MOV dword ptr [ESI + 0x82],0x0
130030c2  c7868600000000000000 MOV dword ptr [ESI + 0x86],0x0
130030cc  c7467effffffff       MOV dword ptr [ESI + 0x7e],0xffffffff
130030d3  c7868200000000000000 MOV dword ptr [ESI + 0x82],0x0
130030dd  c7868600000000000000 MOV dword ptr [ESI + 0x86],0x0
130030e7  c7868a00000000000000 MOV dword ptr [ESI + 0x8a],0x0
130030f1  8d6e7c               LEA EBP,[ESI + 0x7c]
130030f4  66c745006600         MOV word ptr [EBP],0x66
130030fa  83bf8200000000       CMP dword ptr [EDI + 0x82],0x0
13003101  7e54                 JLE 0x13003157
13003103  8d442410             LEA EAX,[ESP + 0x10]
13003107  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
1300310d  0fbfcb               MOVSX ECX,BX
13003110  50                   PUSH EAX
13003111  6a0e                 PUSH 0xe
13003113  6a01                 PUSH 0x1
13003115  8b048a               MOV EAX,dword ptr [EDX + ECX*0x4]
13003118  50                   PUSH EAX
13003119  e862080000           CALL 0x13003980
1300311e  83c410               ADD ESP,0x10
13003121  8b8f82000000         MOV ECX,dword ptr [EDI + 0x82]
13003127  8d968a000000         LEA EDX,[ESI + 0x8a]
1300312d  51                   PUSH ECX
1300312e  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
13003132  52                   PUSH EDX
13003133  51                   PUSH ECX
13003134  ffd0                 CALL EAX
13003136  83c40c               ADD ESP,0xc
13003139  a3348d0013           MOV [0x13008d34],EAX
1300313e  8b868a000000         MOV EAX,dword ptr [ESI + 0x8a]
13003144  85c0                 TEST EAX,EAX
13003146  740f                 JZ 0x13003157
13003148  8b8f82000000         MOV ECX,dword ptr [EDI + 0x82]
1300314e  898e82000000         MOV dword ptr [ESI + 0x82],ECX
13003154  c60000               MOV byte ptr [EAX],0x0
13003157  8d477c               LEA EAX,[EDI + 0x7c]
1300315a  50                   PUSH EAX
1300315b  55                   PUSH EBP
1300315c  6a00                 PUSH 0x0
1300315e  8daea8000000         LEA EBP,[ESI + 0xa8]
13003164  e887080000           CALL 0x130039f0
13003169  83c40c               ADD ESP,0xc
1300316c  837d0000             CMP dword ptr [EBP],0x0
13003170  744c                 JZ 0x130031be
13003172  8d442410             LEA EAX,[ESP + 0x10]
13003176  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
1300317c  0fbfcb               MOVSX ECX,BX
1300317f  50                   PUSH EAX
13003180  6a10                 PUSH 0x10
13003182  6a01                 PUSH 0x1
13003184  8b048a               MOV EAX,dword ptr [EDX + ECX*0x4]
13003187  50                   PUSH EAX
13003188  e8f3070000           CALL 0x13003980
1300318d  8b542420             MOV EDX,dword ptr [ESP + 0x20]
13003191  83c410               ADD ESP,0x10
13003194  8b4d00               MOV ECX,dword ptr [EBP]
13003197  51                   PUSH ECX
13003198  52                   PUSH EDX
13003199  ffd0                 CALL EAX
1300319b  83c408               ADD ESP,0x8
1300319e  a3348d0013           MOV [0x13008d34],EAX
130031a3  c786a000000000000000 MOV dword ptr [ESI + 0xa0],0x0
130031ad  c786a400000000000000 MOV dword ptr [ESI + 0xa4],0x0
130031b7  c7450000000000       MOV dword ptr [EBP],0x0
130031be  c7869c000000ffffffff MOV dword ptr [ESI + 0x9c],0xffffffff
130031c8  c786a000000000000000 MOV dword ptr [ESI + 0xa0],0x0
130031d2  c786a400000000000000 MOV dword ptr [ESI + 0xa4],0x0
130031dc  66c7869a0000006600   MOV word ptr [ESI + 0x9a],0x66
130031e5  c7450000000000       MOV dword ptr [EBP],0x0
130031ec  83bfa000000000       CMP dword ptr [EDI + 0xa0],0x0
130031f3  7e4b                 JLE 0x13003240
130031f5  8d442410             LEA EAX,[ESP + 0x10]
130031f9  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
130031ff  0fbfd3               MOVSX EDX,BX
13003202  50                   PUSH EAX
13003203  6a0e                 PUSH 0xe
13003205  6a01                 PUSH 0x1
13003207  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
1300320a  50                   PUSH EAX
1300320b  e870070000           CALL 0x13003980
13003210  8b542420             MOV EDX,dword ptr [ESP + 0x20]
13003214  83c410               ADD ESP,0x10
13003217  8b8fa0000000         MOV ECX,dword ptr [EDI + 0xa0]
1300321d  51                   PUSH ECX
1300321e  55                   PUSH EBP
1300321f  52                   PUSH EDX
13003220  ffd0                 CALL EAX
13003222  83c40c               ADD ESP,0xc
13003225  a3348d0013           MOV [0x13008d34],EAX
1300322a  8b4500               MOV EAX,dword ptr [EBP]
1300322d  85c0                 TEST EAX,EAX
1300322f  740f                 JZ 0x13003240
13003231  8b8fa0000000         MOV ECX,dword ptr [EDI + 0xa0]
13003237  898ea0000000         MOV dword ptr [ESI + 0xa0],ECX
1300323d  c60000               MOV byte ptr [EAX],0x0
13003240  8d879a000000         LEA EAX,[EDI + 0x9a]
13003246  8d8e9a000000         LEA ECX,[ESI + 0x9a]
1300324c  50                   PUSH EAX
1300324d  51                   PUSH ECX
1300324e  6a00                 PUSH 0x0
13003250  e89b070000           CALL 0x130039f0
13003255  83c40c               ADD ESP,0xc
13003258  8d474c               LEA EAX,[EDI + 0x4c]
1300325b  8d564c               LEA EDX,[ESI + 0x4c]
1300325e  8b08                 MOV ECX,dword ptr [EAX]
13003260  890a                 MOV dword ptr [EDX],ECX
13003262  668b4004             MOV AX,word ptr [EAX + 0x4]
13003266  66894204             MOV word ptr [EDX + 0x4],AX
1300326a  8d4752               LEA EAX,[EDI + 0x52]
1300326d  8d5652               LEA EDX,[ESI + 0x52]
13003270  8b08                 MOV ECX,dword ptr [EAX]
13003272  890a                 MOV dword ptr [EDX],ECX
13003274  668b4004             MOV AX,word ptr [EAX + 0x4]
13003278  66894204             MOV word ptr [EDX + 0x4],AX
1300327c  8d878e000000         LEA EAX,[EDI + 0x8e]
13003282  8d968e000000         LEA EDX,[ESI + 0x8e]
13003288  81c794000000         ADD EDI,0x94
1300328e  8b08                 MOV ECX,dword ptr [EAX]
13003290  81c694000000         ADD ESI,0x94
13003296  890a                 MOV dword ptr [EDX],ECX
13003298  668b4004             MOV AX,word ptr [EAX + 0x4]
1300329c  5d                   POP EBP
1300329d  66894204             MOV word ptr [EDX + 0x4],AX
130032a1  8b07                 MOV EAX,dword ptr [EDI]
130032a3  8906                 MOV dword ptr [ESI],EAX
130032a5  33c0                 XOR EAX,EAX
130032a7  668b4f04             MOV CX,word ptr [EDI + 0x4]
130032ab  5f                   POP EDI
130032ac  66894e04             MOV word ptr [ESI + 0x4],CX
130032b0  5e                   POP ESI
130032b1  5b                   POP EBX
130032b2  83c404               ADD ESP,0x4
130032b5  c3                   RET
; undefined 10 bytes at 130032b6

; ==== FUNCTION FUN_130032c0 entry=130032c0 sig=undefined4 __cdecl FUN_130032c0(int param_1)
130032c0  83ec04               SUB ESP,0x4
130032c3  53                   PUSH EBX
130032c4  56                   PUSH ESI
130032c5  8b742410             MOV ESI,dword ptr [ESP + 0x10]
130032c9  57                   PUSH EDI
130032ca  33db                 XOR EBX,EBX
130032cc  395e12               CMP dword ptr [ESI + 0x12],EBX
130032cf  7443                 JZ 0x13003314
130032d1  668b3dcc700013       MOV DI,word ptr [0x130070cc]
130032d8  8d44240c             LEA EAX,[ESP + 0xc]
130032dc  50                   PUSH EAX
130032dd  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
130032e3  0fbfd7               MOVSX EDX,DI
130032e6  6a10                 PUSH 0x10
130032e8  6a01                 PUSH 0x1
130032ea  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
130032ed  50                   PUSH EAX
130032ee  e88d060000           CALL 0x13003980
130032f3  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
130032f7  83c410               ADD ESP,0x10
130032fa  8b4e12               MOV ECX,dword ptr [ESI + 0x12]
130032fd  51                   PUSH ECX
130032fe  52                   PUSH EDX
130032ff  ffd0                 CALL EAX
13003301  83c408               ADD ESP,0x8
13003304  a3348d0013           MOV [0x13008d34],EAX
13003309  895e12               MOV dword ptr [ESI + 0x12],EBX
1300330c  895e0a               MOV dword ptr [ESI + 0xa],EBX
1300330f  895e0e               MOV dword ptr [ESI + 0xe],EBX
13003312  eb07                 JMP 0x1300331b
13003314  668b3dcc700013       MOV DI,word ptr [0x130070cc]
1300331b  33db                 XOR EBX,EBX
1300331d  395e36               CMP dword ptr [ESI + 0x36],EBX
13003320  743a                 JZ 0x1300335c
13003322  8d44240c             LEA EAX,[ESP + 0xc]
13003326  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
1300332c  0fbfd7               MOVSX EDX,DI
1300332f  50                   PUSH EAX
13003330  6a10                 PUSH 0x10
13003332  6a01                 PUSH 0x1
13003334  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
13003337  50                   PUSH EAX
13003338  e843060000           CALL 0x13003980
1300333d  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
13003341  83c410               ADD ESP,0x10
13003344  8b4e36               MOV ECX,dword ptr [ESI + 0x36]
13003347  51                   PUSH ECX
13003348  52                   PUSH EDX
13003349  ffd0                 CALL EAX
1300334b  83c408               ADD ESP,0x8
1300334e  a3348d0013           MOV [0x13008d34],EAX
13003353  895e36               MOV dword ptr [ESI + 0x36],EBX
13003356  895e2e               MOV dword ptr [ESI + 0x2e],EBX
13003359  895e32               MOV dword ptr [ESI + 0x32],EBX
1300335c  33db                 XOR EBX,EBX
1300335e  395e24               CMP dword ptr [ESI + 0x24],EBX
13003361  743a                 JZ 0x1300339d
13003363  8d44240c             LEA EAX,[ESP + 0xc]
13003367  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
1300336d  0fbfd7               MOVSX EDX,DI
13003370  50                   PUSH EAX
13003371  6a10                 PUSH 0x10
13003373  6a01                 PUSH 0x1
13003375  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
13003378  50                   PUSH EAX
13003379  e802060000           CALL 0x13003980
1300337e  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
13003382  83c410               ADD ESP,0x10
13003385  8b4e24               MOV ECX,dword ptr [ESI + 0x24]
13003388  51                   PUSH ECX
13003389  52                   PUSH EDX
1300338a  ffd0                 CALL EAX
1300338c  83c408               ADD ESP,0x8
1300338f  a3348d0013           MOV [0x13008d34],EAX
13003394  895e24               MOV dword ptr [ESI + 0x24],EBX
13003397  895e1c               MOV dword ptr [ESI + 0x1c],EBX
1300339a  895e20               MOV dword ptr [ESI + 0x20],EBX
1300339d  33db                 XOR EBX,EBX
1300339f  395e48               CMP dword ptr [ESI + 0x48],EBX
130033a2  743a                 JZ 0x130033de
130033a4  8d44240c             LEA EAX,[ESP + 0xc]
130033a8  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
130033ae  0fbfcf               MOVSX ECX,DI
130033b1  50                   PUSH EAX
130033b2  6a10                 PUSH 0x10
130033b4  6a01                 PUSH 0x1
130033b6  8b048a               MOV EAX,dword ptr [EDX + ECX*0x4]
130033b9  50                   PUSH EAX
130033ba  e8c1050000           CALL 0x13003980
130033bf  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
130033c3  83c410               ADD ESP,0x10
130033c6  8b4e48               MOV ECX,dword ptr [ESI + 0x48]
130033c9  51                   PUSH ECX
130033ca  52                   PUSH EDX
130033cb  ffd0                 CALL EAX
130033cd  83c408               ADD ESP,0x8
130033d0  a3348d0013           MOV [0x13008d34],EAX
130033d5  895e48               MOV dword ptr [ESI + 0x48],EBX
130033d8  895e40               MOV dword ptr [ESI + 0x40],EBX
130033db  895e44               MOV dword ptr [ESI + 0x44],EBX
130033de  33db                 XOR EBX,EBX
130033e0  395e66               CMP dword ptr [ESI + 0x66],EBX
130033e3  743a                 JZ 0x1300341f
130033e5  8d44240c             LEA EAX,[ESP + 0xc]
130033e9  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
130033ef  0fbfcf               MOVSX ECX,DI
130033f2  50                   PUSH EAX
130033f3  6a10                 PUSH 0x10
130033f5  6a01                 PUSH 0x1
130033f7  8b048a               MOV EAX,dword ptr [EDX + ECX*0x4]
130033fa  50                   PUSH EAX
130033fb  e880050000           CALL 0x13003980
13003400  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
13003404  83c410               ADD ESP,0x10
13003407  8b4e66               MOV ECX,dword ptr [ESI + 0x66]
1300340a  51                   PUSH ECX
1300340b  52                   PUSH EDX
1300340c  ffd0                 CALL EAX
1300340e  83c408               ADD ESP,0x8
13003411  a3348d0013           MOV [0x13008d34],EAX
13003416  895e66               MOV dword ptr [ESI + 0x66],EBX
13003419  895e5e               MOV dword ptr [ESI + 0x5e],EBX
1300341c  895e62               MOV dword ptr [ESI + 0x62],EBX
1300341f  33db                 XOR EBX,EBX
13003421  395e78               CMP dword ptr [ESI + 0x78],EBX
13003424  743a                 JZ 0x13003460
13003426  8d44240c             LEA EAX,[ESP + 0xc]
1300342a  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
13003430  0fbfcf               MOVSX ECX,DI
13003433  50                   PUSH EAX
13003434  6a10                 PUSH 0x10
13003436  6a01                 PUSH 0x1
13003438  8b048a               MOV EAX,dword ptr [EDX + ECX*0x4]
1300343b  50                   PUSH EAX
1300343c  e83f050000           CALL 0x13003980
13003441  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
13003445  83c410               ADD ESP,0x10
13003448  8b4e78               MOV ECX,dword ptr [ESI + 0x78]
1300344b  51                   PUSH ECX
1300344c  52                   PUSH EDX
1300344d  ffd0                 CALL EAX
1300344f  83c408               ADD ESP,0x8
13003452  a3348d0013           MOV [0x13008d34],EAX
13003457  895e78               MOV dword ptr [ESI + 0x78],EBX
1300345a  895e70               MOV dword ptr [ESI + 0x70],EBX
1300345d  895e74               MOV dword ptr [ESI + 0x74],EBX
13003460  33db                 XOR EBX,EBX
13003462  399e8a000000         CMP dword ptr [ESI + 0x8a],EBX
13003468  7446                 JZ 0x130034b0
1300346a  8d44240c             LEA EAX,[ESP + 0xc]
1300346e  8b15308d0013         MOV EDX,dword ptr [0x13008d30]
13003474  0fbfcf               MOVSX ECX,DI
13003477  50                   PUSH EAX
13003478  6a10                 PUSH 0x10
1300347a  6a01                 PUSH 0x1
1300347c  8b048a               MOV EAX,dword ptr [EDX + ECX*0x4]
1300347f  50                   PUSH EAX
13003480  e8fb040000           CALL 0x13003980
13003485  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
13003489  83c410               ADD ESP,0x10
1300348c  8b8e8a000000         MOV ECX,dword ptr [ESI + 0x8a]
13003492  51                   PUSH ECX
13003493  52                   PUSH EDX
13003494  ffd0                 CALL EAX
13003496  83c408               ADD ESP,0x8
13003499  a3348d0013           MOV [0x13008d34],EAX
1300349e  899e8a000000         MOV dword ptr [ESI + 0x8a],EBX
130034a4  899e82000000         MOV dword ptr [ESI + 0x82],EBX
130034aa  899e86000000         MOV dword ptr [ESI + 0x86],EBX
130034b0  33db                 XOR EBX,EBX
130034b2  399ea8000000         CMP dword ptr [ESI + 0xa8],EBX
130034b8  7446                 JZ 0x13003500
130034ba  8d44240c             LEA EAX,[ESP + 0xc]
130034be  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
130034c4  0fbfd7               MOVSX EDX,DI
130034c7  50                   PUSH EAX
130034c8  6a10                 PUSH 0x10
130034ca  6a01                 PUSH 0x1
130034cc  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
130034cf  50                   PUSH EAX
130034d0  e8ab040000           CALL 0x13003980
130034d5  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
130034d9  83c410               ADD ESP,0x10
130034dc  8b8ea8000000         MOV ECX,dword ptr [ESI + 0xa8]
130034e2  51                   PUSH ECX
130034e3  52                   PUSH EDX
130034e4  ffd0                 CALL EAX
130034e6  83c408               ADD ESP,0x8
130034e9  a3348d0013           MOV [0x13008d34],EAX
130034ee  899ea8000000         MOV dword ptr [ESI + 0xa8],EBX
130034f4  899ea0000000         MOV dword ptr [ESI + 0xa0],EBX
130034fa  899ea4000000         MOV dword ptr [ESI + 0xa4],EBX
13003500  33c0                 XOR EAX,EAX
13003502  5f                   POP EDI
13003503  5e                   POP ESI
13003504  5b                   POP EBX
13003505  83c404               ADD ESP,0x4
13003508  c3                   RET
; undefined 7 bytes at 13003509

; ==== FUNCTION FUN_13003510 entry=13003510 sig=undefined4 __cdecl FUN_13003510(int param_1, uint * param_2, undefined4 param_3, short * param_4)
13003510  83ec04               SUB ESP,0x4
13003513  56                   PUSH ESI
13003514  57                   PUSH EDI
13003515  bf00000100           MOV EDI,0x10000
1300351a  68bc820013           PUSH 0x130082bc
1300351f  8b742418             MOV ESI,dword ptr [ESP + 0x18]
13003523  56                   PUSH ESI
13003524  e8c7030000           CALL 0x130038f0
13003529  83c408               ADD ESP,0x8
1300352c  84c0                 TEST AL,AL
1300352e  7420                 JZ 0x13003550
13003530  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
13003534  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
13003538  56                   PUSH ESI
13003539  8d4104               LEA EAX,[ECX + 0x4]
1300353c  50                   PUSH EAX
1300353d  51                   PUSH ECX
1300353e  e88d020000           CALL 0x130037d0
13003543  83c40c               ADD ESP,0xc
13003546  8bf8                 MOV EDI,EAX
13003548  8bc7                 MOV EAX,EDI
1300354a  5f                   POP EDI
1300354b  5e                   POP ESI
1300354c  83c404               ADD ESP,0x4
1300354f  c3                   RET
13003550  68a8820013           PUSH 0x130082a8
13003555  56                   PUSH ESI
13003556  e895030000           CALL 0x130038f0
1300355b  83c408               ADD ESP,0x8
1300355e  84c0                 TEST AL,AL
13003560  7420                 JZ 0x13003582
13003562  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
13003566  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
1300356a  56                   PUSH ESI
1300356b  8d4128               LEA EAX,[ECX + 0x28]
1300356e  50                   PUSH EAX
1300356f  51                   PUSH ECX
13003570  e85b020000           CALL 0x130037d0
13003575  83c40c               ADD ESP,0xc
13003578  8bf8                 MOV EDI,EAX
1300357a  8bc7                 MOV EAX,EDI
1300357c  5f                   POP EDI
1300357d  5e                   POP ESI
1300357e  83c404               ADD ESP,0x4
13003581  c3                   RET
13003582  6894820013           PUSH 0x13008294
13003587  56                   PUSH ESI
13003588  e863030000           CALL 0x130038f0
1300358d  83c408               ADD ESP,0x8
13003590  84c0                 TEST AL,AL
13003592  7420                 JZ 0x130035b4
13003594  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
13003598  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
1300359c  56                   PUSH ESI
1300359d  8d4116               LEA EAX,[ECX + 0x16]
130035a0  50                   PUSH EAX
130035a1  51                   PUSH ECX
130035a2  e829020000           CALL 0x130037d0
130035a7  83c40c               ADD ESP,0xc
130035aa  8bf8                 MOV EDI,EAX
130035ac  8bc7                 MOV EAX,EDI
130035ae  5f                   POP EDI
130035af  5e                   POP ESI
130035b0  83c404               ADD ESP,0x4
130035b3  c3                   RET
130035b4  6880820013           PUSH 0x13008280
130035b9  56                   PUSH ESI
130035ba  e831030000           CALL 0x130038f0
130035bf  83c408               ADD ESP,0x8
130035c2  84c0                 TEST AL,AL
130035c4  7420                 JZ 0x130035e6
130035c6  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
130035ca  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
130035ce  56                   PUSH ESI
130035cf  8d413a               LEA EAX,[ECX + 0x3a]
130035d2  50                   PUSH EAX
130035d3  51                   PUSH ECX
130035d4  e8f7010000           CALL 0x130037d0
130035d9  83c40c               ADD ESP,0xc
130035dc  8bf8                 MOV EDI,EAX
130035de  8bc7                 MOV EAX,EDI
130035e0  5f                   POP EDI
130035e1  5e                   POP ESI
130035e2  83c404               ADD ESP,0x4
130035e5  c3                   RET
130035e6  686c820013           PUSH 0x1300826c
130035eb  56                   PUSH ESI
130035ec  e8ff020000           CALL 0x130038f0
130035f1  83c408               ADD ESP,0x8
130035f4  84c0                 TEST AL,AL
130035f6  7420                 JZ 0x13003618
130035f8  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
130035fc  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
13003600  56                   PUSH ESI
13003601  8d414c               LEA EAX,[ECX + 0x4c]
13003604  50                   PUSH EAX
13003605  51                   PUSH ECX
13003606  e825020000           CALL 0x13003830
1300360b  83c40c               ADD ESP,0xc
1300360e  8bf8                 MOV EDI,EAX
13003610  8bc7                 MOV EAX,EDI
13003612  5f                   POP EDI
13003613  5e                   POP ESI
13003614  83c404               ADD ESP,0x4
13003617  c3                   RET
13003618  6858820013           PUSH 0x13008258
1300361d  56                   PUSH ESI
1300361e  e8cd020000           CALL 0x130038f0
13003623  83c408               ADD ESP,0x8
13003626  84c0                 TEST AL,AL
13003628  7427                 JZ 0x13003651
1300362a  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
1300362e  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
13003632  56                   PUSH ESI
13003633  8d4152               LEA EAX,[ECX + 0x52]
13003636  c7415400001000       MOV dword ptr [ECX + 0x54],0x100000
1300363d  50                   PUSH EAX
1300363e  51                   PUSH ECX
1300363f  e8ec010000           CALL 0x13003830
13003644  83c40c               ADD ESP,0xc
13003647  8bf8                 MOV EDI,EAX
13003649  8bc7                 MOV EAX,EDI
1300364b  5f                   POP EDI
1300364c  5e                   POP ESI
1300364d  83c404               ADD ESP,0x4
13003650  c3                   RET
13003651  6844820013           PUSH 0x13008244
13003656  56                   PUSH ESI
13003657  e894020000           CALL 0x130038f0
1300365c  83c408               ADD ESP,0x8
1300365f  84c0                 TEST AL,AL
13003661  7420                 JZ 0x13003683
13003663  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
13003667  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
1300366b  56                   PUSH ESI
1300366c  8d4158               LEA EAX,[ECX + 0x58]
1300366f  50                   PUSH EAX
13003670  51                   PUSH ECX
13003671  e85a010000           CALL 0x130037d0
13003676  83c40c               ADD ESP,0xc
13003679  8bf8                 MOV EDI,EAX
1300367b  8bc7                 MOV EAX,EDI
1300367d  5f                   POP EDI
1300367e  5e                   POP ESI
1300367f  83c404               ADD ESP,0x4
13003682  c3                   RET
13003683  6830820013           PUSH 0x13008230
13003688  56                   PUSH ESI
13003689  e862020000           CALL 0x130038f0
1300368e  83c408               ADD ESP,0x8
13003691  84c0                 TEST AL,AL
13003693  7420                 JZ 0x130036b5
13003695  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
13003699  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
1300369d  56                   PUSH ESI
1300369e  8d416a               LEA EAX,[ECX + 0x6a]
130036a1  50                   PUSH EAX
130036a2  51                   PUSH ECX
130036a3  e828010000           CALL 0x130037d0
130036a8  83c40c               ADD ESP,0xc
130036ab  8bf8                 MOV EDI,EAX
130036ad  8bc7                 MOV EAX,EDI
130036af  5f                   POP EDI
130036b0  5e                   POP ESI
130036b1  83c404               ADD ESP,0x4
130036b4  c3                   RET
130036b5  681c820013           PUSH 0x1300821c
130036ba  56                   PUSH ESI
130036bb  e830020000           CALL 0x130038f0
130036c0  83c408               ADD ESP,0x8
130036c3  84c0                 TEST AL,AL
130036c5  7420                 JZ 0x130036e7
130036c7  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
130036cb  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
130036cf  56                   PUSH ESI
130036d0  8d417c               LEA EAX,[ECX + 0x7c]
130036d3  50                   PUSH EAX
130036d4  51                   PUSH ECX
130036d5  e8f6000000           CALL 0x130037d0
130036da  83c40c               ADD ESP,0xc
130036dd  8bf8                 MOV EDI,EAX
130036df  8bc7                 MOV EAX,EDI
130036e1  5f                   POP EDI
130036e2  5e                   POP ESI
130036e3  83c404               ADD ESP,0x4
130036e6  c3                   RET
130036e7  6808820013           PUSH 0x13008208
130036ec  56                   PUSH ESI
130036ed  e8fe010000           CALL 0x130038f0
130036f2  83c408               ADD ESP,0x8
130036f5  84c0                 TEST AL,AL
130036f7  7423                 JZ 0x1300371c
130036f9  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
130036fd  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
13003701  56                   PUSH ESI
13003702  8d818e000000         LEA EAX,[ECX + 0x8e]
13003708  50                   PUSH EAX
13003709  51                   PUSH ECX
1300370a  e821010000           CALL 0x13003830
1300370f  83c40c               ADD ESP,0xc
13003712  8bf8                 MOV EDI,EAX
13003714  8bc7                 MOV EAX,EDI
13003716  5f                   POP EDI
13003717  5e                   POP ESI
13003718  83c404               ADD ESP,0x4
1300371b  c3                   RET
1300371c  68f4810013           PUSH 0x130081f4
13003721  56                   PUSH ESI
13003722  e8c9010000           CALL 0x130038f0
13003727  83c408               ADD ESP,0x8
1300372a  84c0                 TEST AL,AL
1300372c  7461                 JZ 0x1300378f
1300372e  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
13003732  66833e6a             CMP word ptr [ESI],0x6a
13003736  750f                 JNZ 0x13003747
13003738  66c7060a00           MOV word ptr [ESI],0xa
1300373d  33c0                 XOR EAX,EAX
1300373f  66894604             MOV word ptr [ESI + 0x4],AX
13003743  66894602             MOV word ptr [ESI + 0x2],AX
13003747  8d442408             LEA EAX,[ESP + 0x8]
1300374b  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13003751  0fbf15d4700013       MOVSX EDX,word ptr [0x130070d4]
13003758  50                   PUSH EAX
13003759  6a00                 PUSH 0x0
1300375b  6a01                 PUSH 0x1
1300375d  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
13003760  50                   PUSH EAX
13003761  e81a020000           CALL 0x13003980
13003766  8b4c2420             MOV ECX,dword ptr [ESP + 0x20]
1300376a  83c410               ADD ESP,0x10
1300376d  56                   PUSH ESI
1300376e  8d9194000000         LEA EDX,[ECX + 0x94]
13003774  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
13003778  52                   PUSH EDX
13003779  51                   PUSH ECX
1300377a  56                   PUSH ESI
1300377b  ffd0                 CALL EAX
1300377d  83c410               ADD ESP,0x10
13003780  8bf8                 MOV EDI,EAX
13003782  a3348d0013           MOV [0x13008d34],EAX
13003787  8bc7                 MOV EAX,EDI
13003789  5f                   POP EDI
1300378a  5e                   POP ESI
1300378b  83c404               ADD ESP,0x4
1300378e  c3                   RET
1300378f  68e0810013           PUSH 0x130081e0
13003794  56                   PUSH ESI
13003795  e856010000           CALL 0x130038f0
1300379a  83c408               ADD ESP,0x8
1300379d  84c0                 TEST AL,AL
1300379f  741b                 JZ 0x130037bc
130037a1  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
130037a5  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
130037a9  56                   PUSH ESI
130037aa  8d819a000000         LEA EAX,[ECX + 0x9a]
130037b0  50                   PUSH EAX
130037b1  51                   PUSH ECX
130037b2  e819000000           CALL 0x130037d0
130037b7  83c40c               ADD ESP,0xc
130037ba  8bf8                 MOV EDI,EAX
130037bc  8bc7                 MOV EAX,EDI
130037be  5f                   POP EDI
130037bf  5e                   POP ESI
130037c0  83c404               ADD ESP,0x4
130037c3  c3                   RET
; undefined 12 bytes at 130037c4

; ==== FUNCTION FUN_130037d0 entry=130037d0 sig=undefined __cdecl FUN_130037d0(undefined4 param_1, undefined4 param_2, short * param_3)
130037d0  83ec04               SUB ESP,0x4
130037d3  56                   PUSH ESI
130037d4  8b742414             MOV ESI,dword ptr [ESP + 0x14]
130037d8  66833e6a             CMP word ptr [ESI],0x6a
130037dc  750d                 JNZ 0x130037eb
130037de  6a00                 PUSH 0x0
130037e0  56                   PUSH ESI
130037e1  6a00                 PUSH 0x0
130037e3  e8c8040000           CALL 0x13003cb0
130037e8  83c40c               ADD ESP,0xc
130037eb  8d442404             LEA EAX,[ESP + 0x4]
130037ef  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
130037f5  0fbf15d4700013       MOVSX EDX,word ptr [0x130070d4]
130037fc  50                   PUSH EAX
130037fd  6a00                 PUSH 0x0
130037ff  6a01                 PUSH 0x1
13003801  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
13003804  50                   PUSH EAX
13003805  e876010000           CALL 0x13003980
1300380a  8b4c2420             MOV ECX,dword ptr [ESP + 0x20]
1300380e  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
13003812  83c410               ADD ESP,0x10
13003815  56                   PUSH ESI
13003816  51                   PUSH ECX
13003817  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
1300381b  52                   PUSH EDX
1300381c  56                   PUSH ESI
1300381d  ffd0                 CALL EAX
1300381f  83c410               ADD ESP,0x10
13003822  a3348d0013           MOV [0x13008d34],EAX
13003827  5e                   POP ESI
13003828  83c404               ADD ESP,0x4
1300382b  c3                   RET
; undefined 4 bytes at 1300382c

; ==== FUNCTION FUN_13003830 entry=13003830 sig=undefined __cdecl FUN_13003830(undefined4 param_1, undefined4 param_2, short * param_3)
13003830  83ec04               SUB ESP,0x4
13003833  56                   PUSH ESI
13003834  8b742414             MOV ESI,dword ptr [ESP + 0x14]
13003838  66833e6a             CMP word ptr [ESI],0x6a
1300383c  750c                 JNZ 0x1300384a
1300383e  c7460200000000       MOV dword ptr [ESI + 0x2],0x0
13003845  66c7060100           MOV word ptr [ESI],0x1
1300384a  8d442404             LEA EAX,[ESP + 0x4]
1300384e  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13003854  0fbf15d4700013       MOVSX EDX,word ptr [0x130070d4]
1300385b  50                   PUSH EAX
1300385c  6a00                 PUSH 0x0
1300385e  6a01                 PUSH 0x1
13003860  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
13003863  50                   PUSH EAX
13003864  e817010000           CALL 0x13003980
13003869  8b4c2420             MOV ECX,dword ptr [ESP + 0x20]
1300386d  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
13003871  83c410               ADD ESP,0x10
13003874  56                   PUSH ESI
13003875  51                   PUSH ECX
13003876  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
1300387a  52                   PUSH EDX
1300387b  56                   PUSH ESI
1300387c  ffd0                 CALL EAX
1300387e  83c410               ADD ESP,0x10
13003881  a3348d0013           MOV [0x13008d34],EAX
13003886  5e                   POP ESI
13003887  83c404               ADD ESP,0x4
1300388a  c3                   RET
; undefined 5 bytes at 1300388b

; ==== FUNCTION FUN_13003890 entry=13003890 sig=undefined __cdecl FUN_13003890(int param_1, int param_2)
13003890  53                   PUSH EBX
13003891  33c9                 XOR ECX,ECX
13003893  8b442408             MOV EAX,dword ptr [ESP + 0x8]
13003897  56                   PUSH ESI
13003898  8b742410             MOV ESI,dword ptr [ESP + 0x10]
1300389c  57                   PUSH EDI
1300389d  55                   PUSH EBP
1300389e  33ff                 XOR EDI,EDI
130038a0  ba01000000           MOV EDX,0x1
130038a5  84c9                 TEST CL,CL
130038a7  7406                 JZ 0x130038af
130038a9  c6043800             MOV byte ptr [EAX + EDI*0x1],0x0
130038ad  eb12                 JMP 0x130038c1
130038af  8d2c3e               LEA EBP,[ESI + EDI*0x1]
130038b2  8a5d00               MOV BL,byte ptr [EBP]
130038b5  881c38               MOV byte ptr [EAX + EDI*0x1],BL
130038b8  385501               CMP byte ptr [EBP + 0x1],DL
130038bb  1adb                 SBB BL,BL
130038bd  f6db                 NEG BL
130038bf  0acb                 OR CL,BL
130038c1  47                   INC EDI
130038c2  83ff10               CMP EDI,0x10
130038c5  7cde                 JL 0x130038a5
130038c7  5d                   POP EBP
130038c8  5f                   POP EDI
130038c9  5e                   POP ESI
130038ca  5b                   POP EBX
130038cb  c3                   RET
; undefined 4 bytes at 130038cc

; ==== FUNCTION FUN_130038d0 entry=130038d0 sig=undefined __cdecl FUN_130038d0(undefined4 * param_1, undefined4 * param_2)
130038d0  8b4c2408             MOV ECX,dword ptr [ESP + 0x8]
130038d4  8b542404             MOV EDX,dword ptr [ESP + 0x4]
130038d8  8b01                 MOV EAX,dword ptr [ECX]
130038da  8902                 MOV dword ptr [EDX],EAX
130038dc  8b4104               MOV EAX,dword ptr [ECX + 0x4]
130038df  894204               MOV dword ptr [EDX + 0x4],EAX
130038e2  8b4108               MOV EAX,dword ptr [ECX + 0x8]
130038e5  894208               MOV dword ptr [EDX + 0x8],EAX
130038e8  8b490c               MOV ECX,dword ptr [ECX + 0xc]
130038eb  894a0c               MOV dword ptr [EDX + 0xc],ECX
130038ee  c3                   RET
; undefined 1 bytes at 130038ef

; ==== FUNCTION FUN_130038f0 entry=130038f0 sig=uint __cdecl FUN_130038f0(uint * param_1, uint * param_2)
130038f0  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
130038f4  8b542408             MOV EDX,dword ptr [ESP + 0x8]
130038f8  8b01                 MOV EAX,dword ptr [ECX]
130038fa  3902                 CMP dword ptr [EDX],EAX
130038fc  751b                 JNZ 0x13003919
130038fe  8b4104               MOV EAX,dword ptr [ECX + 0x4]
13003901  394204               CMP dword ptr [EDX + 0x4],EAX
13003904  7513                 JNZ 0x13003919
13003906  8b4108               MOV EAX,dword ptr [ECX + 0x8]
13003909  394208               CMP dword ptr [EDX + 0x8],EAX
1300390c  750b                 JNZ 0x13003919
1300390e  8b410c               MOV EAX,dword ptr [ECX + 0xc]
13003911  39420c               CMP dword ptr [EDX + 0xc],EAX
13003914  7503                 JNZ 0x13003919
13003916  b001                 MOV AL,0x1
13003918  c3                   RET
13003919  32c0                 XOR AL,AL
1300391b  c3                   RET
; undefined 4 bytes at 1300391c

; ==== FUNCTION FUN_13003920 entry=13003920 sig=undefined __cdecl FUN_13003920(undefined4 param_1, undefined4 param_2)
13003920  83ec04               SUB ESP,0x4
13003923  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13003929  0fbf155c710013       MOVSX EDX,word ptr [0x1300715c]
13003930  8d442400             LEA EAX,[ESP]
13003934  50                   PUSH EAX
13003935  6a1c                 PUSH 0x1c
13003937  6a01                 PUSH 0x1
13003939  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
1300393c  50                   PUSH EAX
1300393d  e83e000000           CALL 0x13003980
13003942  8d4c2420             LEA ECX,[ESP + 0x20]
13003946  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
1300394a  83c410               ADD ESP,0x10
1300394d  51                   PUSH ECX
1300394e  52                   PUSH EDX
1300394f  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
13003953  8b542408             MOV EDX,dword ptr [ESP + 0x8]
13003957  51                   PUSH ECX
13003958  52                   PUSH EDX
13003959  ffd0                 CALL EAX
1300395b  83c410               ADD ESP,0x10
1300395e  a3348d0013           MOV [0x13008d34],EAX
13003963  83c404               ADD ESP,0x4
13003966  c3                   RET
; undefined 9 bytes at 13003967

; ==== FUNCTION FUN_13003970 entry=13003970 sig=undefined4 __cdecl FUN_13003970(int param_1)
13003970  8b442404             MOV EAX,dword ptr [ESP + 0x4]
13003974  8b48f8               MOV ECX,dword ptr [EAX + -0x8]
13003977  8b4108               MOV EAX,dword ptr [ECX + 0x8]
1300397a  c3                   RET
; undefined 5 bytes at 1300397b

; ==== FUNCTION FUN_13003980 entry=13003980 sig=undefined4 __cdecl FUN_13003980(int param_1, int param_2, int param_3, int * param_4)
13003980  8b442404             MOV EAX,dword ptr [ESP + 0x4]
13003984  56                   PUSH ESI
13003985  66833d00830013ff     CMP word ptr [0x13008300],-0x1
1300398d  57                   PUSH EDI
1300398e  8b50f8               MOV EDX,dword ptr [EAX + -0x8]
13003991  7505                 JNZ 0x13003998
13003993  8b4214               MOV EAX,dword ptr [EDX + 0x14]
13003996  eb1b                 JMP 0x130039b3
13003998  8b40fc               MOV EAX,dword ptr [EAX + -0x4]
1300399b  0fbf0d00830013       MOVSX ECX,word ptr [0x13008300]
130039a2  8b7004               MOV ESI,dword ptr [EAX + 0x4]
130039a5  8b048e               MOV EAX,dword ptr [ESI + ECX*0x4]
130039a8  66c70500830013ffff   MOV word ptr [0x13008300],0xffff
130039b1  03c2                 ADD EAX,EDX
130039b3  8b48fc               MOV ECX,dword ptr [EAX + -0x4]
130039b6  8b7c2410             MOV EDI,dword ptr [ESP + 0x10]
130039ba  8b742414             MOV ESI,dword ptr [ESP + 0x14]
130039be  8b01                 MOV EAX,dword ptr [ECX]
130039c0  8b4904               MOV ECX,dword ptr [ECX + 0x4]
130039c3  8b04b8               MOV EAX,dword ptr [EAX + EDI*0x4]
130039c6  8b44f004             MOV EAX,dword ptr [EAX + ESI*0x8 + 0x4]
130039ca  8b0481               MOV EAX,dword ptr [ECX + EAX*0x4]
130039cd  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
130039d1  03c2                 ADD EAX,EDX
130039d3  8901                 MOV dword ptr [ECX],EAX
130039d5  8b50fc               MOV EDX,dword ptr [EAX + -0x4]
130039d8  8b02                 MOV EAX,dword ptr [EDX]
130039da  8b0cb8               MOV ECX,dword ptr [EAX + EDI*0x4]
130039dd  5f                   POP EDI
130039de  8b04f1               MOV EAX,dword ptr [ECX + ESI*0x8]
130039e1  5e                   POP ESI
130039e2  c3                   RET
; undefined 13 bytes at 130039e3

; ==== FUNCTION FUN_130039f0 entry=130039f0 sig=undefined __cdecl FUN_130039f0(undefined4 param_1, undefined2 * param_2, int param_3)
130039f0  83ec0c               SUB ESP,0xc
130039f3  53                   PUSH EBX
130039f4  56                   PUSH ESI
130039f5  57                   PUSH EDI
130039f6  55                   PUSH EBP
130039f7  8b7c2428             MOV EDI,dword ptr [ESP + 0x28]
130039fb  8b470e               MOV EAX,dword ptr [EDI + 0xe]
130039fe  85c0                 TEST EAX,EAX
13003a00  0f84bb010000         JZ 0x13003bc1
13003a06  837f0a00             CMP dword ptr [EDI + 0xa],0x0
13003a0a  0f8e5d010000         JLE 0x13003b6d
13003a10  8b742424             MOV ESI,dword ptr [ESP + 0x24]
13003a14  837e0e00             CMP dword ptr [ESI + 0xe],0x0
13003a18  66c7066600           MOV word ptr [ESI],0x66
13003a1d  8b6f0a               MOV EBP,dword ptr [EDI + 0xa]
13003a20  745a                 JZ 0x13003a7c
13003a22  8b5e06               MOV EBX,dword ptr [ESI + 0x6]
13003a25  85db                 TEST EBX,EBX
13003a27  7453                 JZ 0x13003a7c
13003a29  4b                   DEC EBX
13003a2a  3bdd                 CMP EBX,EBP
13003a2c  7c02                 JL 0x13003a30
13003a2e  8bdd                 MOV EBX,EBP
13003a30  8d442410             LEA EAX,[ESP + 0x10]
13003a34  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13003a3a  0fbf155c710013       MOVSX EDX,word ptr [0x1300715c]
13003a41  50                   PUSH EAX
13003a42  6a01                 PUSH 0x1
13003a44  6a01                 PUSH 0x1
13003a46  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
13003a49  50                   PUSH EAX
13003a4a  e831ffffff           CALL 0x13003980
13003a4f  8b6c2420             MOV EBP,dword ptr [ESP + 0x20]
13003a53  83c410               ADD ESP,0x10
13003a56  8b4f0e               MOV ECX,dword ptr [EDI + 0xe]
13003a59  8b560e               MOV EDX,dword ptr [ESI + 0xe]
13003a5c  53                   PUSH EBX
13003a5d  51                   PUSH ECX
13003a5e  52                   PUSH EDX
13003a5f  55                   PUSH EBP
13003a60  ffd0                 CALL EAX
13003a62  83c410               ADD ESP,0x10
13003a65  a3348d0013           MOV [0x13008d34],EAX
13003a6a  8b4e0e               MOV ECX,dword ptr [ESI + 0xe]
13003a6d  895e0a               MOV dword ptr [ESI + 0xa],EBX
13003a70  5d                   POP EBP
13003a71  5f                   POP EDI
13003a72  5e                   POP ESI
13003a73  c6041900             MOV byte ptr [ECX + EBX*0x1],0x0
13003a77  5b                   POP EBX
13003a78  83c40c               ADD ESP,0xc
13003a7b  c3                   RET
13003a7c  c744241400000000     MOV dword ptr [ESP + 0x14],0x0
13003a84  c74602ffffffff       MOV dword ptr [ESI + 0x2],0xffffffff
13003a8b  66c7066600           MOV word ptr [ESI],0x66
13003a90  45                   INC EBP
13003a91  c7460600000000       MOV dword ptr [ESI + 0x6],0x0
13003a98  c7460a00000000       MOV dword ptr [ESI + 0xa],0x0
13003a9f  c7460e00000000       MOV dword ptr [ESI + 0xe],0x0
13003aa6  85ed                 TEST EBP,EBP
13003aa8  7e43                 JLE 0x13003aed
13003aaa  8d442410             LEA EAX,[ESP + 0x10]
13003aae  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13003ab4  0fbf155c710013       MOVSX EDX,word ptr [0x1300715c]
13003abb  50                   PUSH EAX
13003abc  6a0e                 PUSH 0xe
13003abe  6a01                 PUSH 0x1
13003ac0  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
13003ac3  50                   PUSH EAX
13003ac4  e8b7feffff           CALL 0x13003980
13003ac9  8b542420             MOV EDX,dword ptr [ESP + 0x20]
13003acd  83c410               ADD ESP,0x10
13003ad0  8d4e0e               LEA ECX,[ESI + 0xe]
13003ad3  55                   PUSH EBP
13003ad4  51                   PUSH ECX
13003ad5  52                   PUSH EDX
13003ad6  ffd0                 CALL EAX
13003ad8  83c40c               ADD ESP,0xc
13003adb  a3348d0013           MOV [0x13008d34],EAX
13003ae0  8b460e               MOV EAX,dword ptr [ESI + 0xe]
13003ae3  85c0                 TEST EAX,EAX
13003ae5  7406                 JZ 0x13003aed
13003ae7  896e06               MOV dword ptr [ESI + 0x6],EBP
13003aea  c60000               MOV byte ptr [EAX],0x0
13003aed  0fbf055c710013       MOVSX EAX,word ptr [0x1300715c]
13003af4  8d4c2410             LEA ECX,[ESP + 0x10]
13003af8  8d1c8500000000       LEA EBX,[EAX*0x4 + 0x0]
13003aff  51                   PUSH ECX
13003b00  a1308d0013           MOV EAX,[0x13008d30]
13003b05  6a00                 PUSH 0x0
13003b07  6a01                 PUSH 0x1
13003b09  8b1418               MOV EDX,dword ptr [EAX + EBX*0x1]
13003b0c  52                   PUSH EDX
13003b0d  e86efeffff           CALL 0x13003980
13003b12  8b6c2420             MOV EBP,dword ptr [ESP + 0x20]
13003b16  83c410               ADD ESP,0x10
13003b19  8b4f0e               MOV ECX,dword ptr [EDI + 0xe]
13003b1c  8b560e               MOV EDX,dword ptr [ESI + 0xe]
13003b1f  51                   PUSH ECX
13003b20  52                   PUSH EDX
13003b21  55                   PUSH EBP
13003b22  ffd0                 CALL EAX
13003b24  8d4c2424             LEA ECX,[ESP + 0x24]
13003b28  83c40c               ADD ESP,0xc
13003b2b  a3348d0013           MOV [0x13008d34],EAX
13003b30  51                   PUSH ECX
13003b31  6a0c                 PUSH 0xc
13003b33  a1308d0013           MOV EAX,[0x13008d30]
13003b38  6a01                 PUSH 0x1
13003b3a  8b1418               MOV EDX,dword ptr [EAX + EBX*0x1]
13003b3d  52                   PUSH EDX
13003b3e  e83dfeffff           CALL 0x13003980
13003b43  8d542424             LEA EDX,[ESP + 0x24]
13003b47  8b5c2428             MOV EBX,dword ptr [ESP + 0x28]
13003b4b  83c410               ADD ESP,0x10
13003b4e  8b4e0e               MOV ECX,dword ptr [ESI + 0xe]
13003b51  51                   PUSH ECX
13003b52  52                   PUSH EDX
13003b53  53                   PUSH EBX
13003b54  ffd0                 CALL EAX
13003b56  8b4c2420             MOV ECX,dword ptr [ESP + 0x20]
13003b5a  83c40c               ADD ESP,0xc
13003b5d  a3348d0013           MOV [0x13008d34],EAX
13003b62  5d                   POP EBP
13003b63  5f                   POP EDI
13003b64  894e0a               MOV dword ptr [ESI + 0xa],ECX
13003b67  5e                   POP ESI
13003b68  5b                   POP EBX
13003b69  83c40c               ADD ESP,0xc
13003b6c  c3                   RET
13003b6d  85c0                 TEST EAX,EAX
13003b6f  7450                 JZ 0x13003bc1
13003b71  8b742424             MOV ESI,dword ptr [ESP + 0x24]
13003b75  8d7e0e               LEA EDI,[ESI + 0xe]
13003b78  833f00               CMP dword ptr [EDI],0x0
13003b7b  7548                 JNZ 0x13003bc5
13003b7d  8d442410             LEA EAX,[ESP + 0x10]
13003b81  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13003b87  0fbf155c710013       MOVSX EDX,word ptr [0x1300715c]
13003b8e  50                   PUSH EAX
13003b8f  6a0e                 PUSH 0xe
13003b91  6a01                 PUSH 0x1
13003b93  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
13003b96  50                   PUSH EAX
13003b97  e8e4fdffff           CALL 0x13003980
13003b9c  8b4c2420             MOV ECX,dword ptr [ESP + 0x20]
13003ba0  83c410               ADD ESP,0x10
13003ba3  6a01                 PUSH 0x1
13003ba5  57                   PUSH EDI
13003ba6  51                   PUSH ECX
13003ba7  ffd0                 CALL EAX
13003ba9  83c40c               ADD ESP,0xc
13003bac  a3348d0013           MOV [0x13008d34],EAX
13003bb1  c7460601000000       MOV dword ptr [ESI + 0x6],0x1
13003bb8  c74602ffffffff       MOV dword ptr [ESI + 0x2],0xffffffff
13003bbf  eb04                 JMP 0x13003bc5
13003bc1  8b742424             MOV ESI,dword ptr [ESP + 0x24]
13003bc5  c7460a00000000       MOV dword ptr [ESI + 0xa],0x0
13003bcc  8b460e               MOV EAX,dword ptr [ESI + 0xe]
13003bcf  85c0                 TEST EAX,EAX
13003bd1  7403                 JZ 0x13003bd6
13003bd3  c60000               MOV byte ptr [EAX],0x0
13003bd6  5d                   POP EBP
13003bd7  5f                   POP EDI
13003bd8  5e                   POP ESI
13003bd9  5b                   POP EBX
13003bda  83c40c               ADD ESP,0xc
13003bdd  c3                   RET
; undefined 2 bytes at 13003bde

; ==== FUNCTION FUN_13003be0 entry=13003be0 sig=undefined __cdecl FUN_13003be0(int param_1)
13003be0  8b542404             MOV EDX,dword ptr [ESP + 0x4]
13003be4  83c202               ADD EDX,0x2
13003be7  833a00               CMP dword ptr [EDX],0x0
13003bea  7424                 JZ 0x13003c10
13003bec  8b4204               MOV EAX,dword ptr [EDX + 0x4]
13003bef  85c0                 TEST EAX,EAX
13003bf1  750a                 JNZ 0x13003bfd
13003bf3  837a0800             CMP dword ptr [EDX + 0x8],0x0
13003bf7  7417                 JZ 0x13003c10
13003bf9  85c0                 TEST EAX,EAX
13003bfb  7406                 JZ 0x13003c03
13003bfd  8b4a08               MOV ECX,dword ptr [EDX + 0x8]
13003c00  894808               MOV dword ptr [EAX + 0x8],ECX
13003c03  8b4208               MOV EAX,dword ptr [EDX + 0x8]
13003c06  85c0                 TEST EAX,EAX
13003c08  7406                 JZ 0x13003c10
13003c0a  8b4a04               MOV ECX,dword ptr [EDX + 0x4]
13003c0d  894804               MOV dword ptr [EAX + 0x4],ECX
13003c10  33c0                 XOR EAX,EAX
13003c12  894204               MOV dword ptr [EDX + 0x4],EAX
13003c15  894208               MOV dword ptr [EDX + 0x8],EAX
13003c18  c3                   RET
; undefined 7 bytes at 13003c19

; ==== FUNCTION FUN_13003c20 entry=13003c20 sig=undefined __cdecl FUN_13003c20(int param_1, undefined4 * param_2, undefined2 param_3, short param_4)
13003c20  56                   PUSH ESI
13003c21  57                   PUSH EDI
13003c22  668b7c2418           MOV DI,word ptr [ESP + 0x18]
13003c27  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
13003c2b  66397e22             CMP word ptr [ESI + 0x22],DI
13003c2f  7f23                 JG 0x13003c54
13003c31  8b442410             MOV EAX,dword ptr [ESP + 0x10]
13003c35  8d4e11               LEA ECX,[ESI + 0x11]
13003c38  6647                 INC DI
13003c3a  50                   PUSH EAX
13003c3b  51                   PUSH ECX
13003c3c  e88ffcffff           CALL 0x130038d0
13003c41  668b4c241c           MOV CX,word ptr [ESP + 0x1c]
13003c46  83c408               ADD ESP,0x8
13003c49  66898ea8000000       MOV word ptr [ESI + 0xa8],CX
13003c50  66897e22             MOV word ptr [ESI + 0x22],DI
13003c54  5f                   POP EDI
13003c55  5e                   POP ESI
13003c56  c3                   RET
; undefined 9 bytes at 13003c57

; ==== FUNCTION FUN_13003c60 entry=13003c60 sig=undefined __cdecl FUN_13003c60(int param_1, short param_2, short param_3, short param_4, undefined4 param_5)
13003c60  8b442404             MOV EAX,dword ptr [ESP + 0x4]
13003c64  56                   PUSH ESI
13003c65  0fbf4c2410           MOVSX ECX,word ptr [ESP + 0x10]
13003c6a  8d748824             LEA ESI,[EAX + ECX*0x4 + 0x24]
13003c6e  8b442418             MOV EAX,dword ptr [ESP + 0x18]
13003c72  0fbf4c2414           MOVSX ECX,word ptr [ESP + 0x14]
13003c77  8d14cd00000000       LEA EDX,[ECX*0x8 + 0x0]
13003c7e  8b0e                 MOV ECX,dword ptr [ESI]
13003c80  890411               MOV dword ptr [ECX + EDX*0x1],EAX
13003c83  8b0e                 MOV ECX,dword ptr [ESI]
13003c85  0fbf44240c           MOVSX EAX,word ptr [ESP + 0xc]
13003c8a  5e                   POP ESI
13003c8b  89441104             MOV dword ptr [ECX + EDX*0x1 + 0x4],EAX
13003c8f  c3                   RET

; ==== FUNCTION FUN_13003c90 entry=13003c90 sig=undefined __cdecl FUN_13003c90(int param_1)
13003c90  8b442404             MOV EAX,dword ptr [ESP + 0x4]
13003c94  8b88b4000000         MOV ECX,dword ptr [EAX + 0xb4]
13003c9a  890d2c8d0013         MOV dword ptr [0x13008d2c],ECX
13003ca0  8b90b8000000         MOV EDX,dword ptr [EAX + 0xb8]
13003ca6  8915308d0013         MOV dword ptr [0x13008d30],EDX
13003cac  c3                   RET
; undefined 3 bytes at 13003cad

; ==== FUNCTION FUN_13003cb0 entry=13003cb0 sig=undefined __cdecl FUN_13003cb0(undefined4 param_1, undefined2 * param_2, int param_3)
13003cb0  83ec08               SUB ESP,0x8
13003cb3  53                   PUSH EBX
13003cb4  56                   PUSH ESI
13003cb5  57                   PUSH EDI
13003cb6  8b7c2420             MOV EDI,dword ptr [ESP + 0x20]
13003cba  85ff                 TEST EDI,EDI
13003cbc  0f84d4000000         JZ 0x13003d96
13003cc2  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
13003cc6  8d4c240c             LEA ECX,[ESP + 0xc]
13003cca  66c7066600           MOV word ptr [ESI],0x66
13003ccf  51                   PUSH ECX
13003cd0  c744241400000000     MOV dword ptr [ESP + 0x14],0x0
13003cd8  c74602ffffffff       MOV dword ptr [ESI + 0x2],0xffffffff
13003cdf  0fbf055c710013       MOVSX EAX,word ptr [0x1300715c]
13003ce6  8d1c8500000000       LEA EBX,[EAX*0x4 + 0x0]
13003ced  a1308d0013           MOV EAX,[0x13008d30]
13003cf2  6a0c                 PUSH 0xc
13003cf4  6a01                 PUSH 0x1
13003cf6  8b1418               MOV EDX,dword ptr [EAX + EBX*0x1]
13003cf9  52                   PUSH EDX
13003cfa  e881fcffff           CALL 0x13003980
13003cff  8d4c2420             LEA ECX,[ESP + 0x20]
13003d03  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
13003d07  83c410               ADD ESP,0x10
13003d0a  57                   PUSH EDI
13003d0b  51                   PUSH ECX
13003d0c  52                   PUSH EDX
13003d0d  ffd0                 CALL EAX
13003d0f  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
13003d13  83c40c               ADD ESP,0xc
13003d16  a3348d0013           MOV [0x13008d34],EAX
13003d1b  85c9                 TEST ECX,ECX
13003d1d  894e0a               MOV dword ptr [ESI + 0xa],ECX
13003d20  7431                 JZ 0x13003d53
13003d22  8d44240c             LEA EAX,[ESP + 0xc]
13003d26  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13003d2c  50                   PUSH EAX
13003d2d  6a0f                 PUSH 0xf
13003d2f  6a01                 PUSH 0x1
13003d31  8b1419               MOV EDX,dword ptr [ECX + EBX*0x1]
13003d34  52                   PUSH EDX
13003d35  e846fcffff           CALL 0x13003980
13003d3a  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
13003d3e  83c410               ADD ESP,0x10
13003d41  8d4e0e               LEA ECX,[ESI + 0xe]
13003d44  57                   PUSH EDI
13003d45  51                   PUSH ECX
13003d46  52                   PUSH EDX
13003d47  ffd0                 CALL EAX
13003d49  83c40c               ADD ESP,0xc
13003d4c  a3348d0013           MOV [0x13008d34],EAX
13003d51  eb35                 JMP 0x13003d88
13003d53  8d44240c             LEA EAX,[ESP + 0xc]
13003d57  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13003d5d  50                   PUSH EAX
13003d5e  6a0e                 PUSH 0xe
13003d60  6a01                 PUSH 0x1
13003d62  8b1419               MOV EDX,dword ptr [ECX + EBX*0x1]
13003d65  52                   PUSH EDX
13003d66  8d7e0e               LEA EDI,[ESI + 0xe]
13003d69  e812fcffff           CALL 0x13003980
13003d6e  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
13003d72  83c410               ADD ESP,0x10
13003d75  6a01                 PUSH 0x1
13003d77  57                   PUSH EDI
13003d78  51                   PUSH ECX
13003d79  ffd0                 CALL EAX
13003d7b  83c40c               ADD ESP,0xc
13003d7e  a3348d0013           MOV [0x13008d34],EAX
13003d83  8b07                 MOV EAX,dword ptr [EDI]
13003d85  c60000               MOV byte ptr [EAX],0x0
13003d88  8b460a               MOV EAX,dword ptr [ESI + 0xa]
13003d8b  5f                   POP EDI
13003d8c  40                   INC EAX
13003d8d  894606               MOV dword ptr [ESI + 0x6],EAX
13003d90  5e                   POP ESI
13003d91  5b                   POP EBX
13003d92  83c408               ADD ESP,0x8
13003d95  c3                   RET
13003d96  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
13003d9a  33c0                 XOR EAX,EAX
13003d9c  66c7066600           MOV word ptr [ESI],0x66
13003da1  89460e               MOV dword ptr [ESI + 0xe],EAX
13003da4  5f                   POP EDI
13003da5  894606               MOV dword ptr [ESI + 0x6],EAX
13003da8  c74602ffffffff       MOV dword ptr [ESI + 0x2],0xffffffff
13003daf  89460a               MOV dword ptr [ESI + 0xa],EAX
13003db2  5e                   POP ESI
13003db3  5b                   POP EBX
13003db4  83c408               ADD ESP,0x8
13003db7  c3                   RET
; undefined 8 bytes at 13003db8

; ==== FUNCTION FUN_13003dc0 entry=13003dc0 sig=undefined4 __cdecl FUN_13003dc0(short * param_1, short * param_2, undefined4 * param_3, undefined4 * param_4, undefined4 * param_5)
13003dc0  56                   PUSH ESI
13003dc1  b800000100           MOV EAX,0x10000
13003dc6  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
13003dca  85f6                 TEST ESI,ESI
13003dcc  0f84be000000         JZ 0x13003e90
13003dd2  66833e01             CMP word ptr [ESI],0x1
13003dd6  0f85b4000000         JNZ 0x13003e90
13003ddc  8b4c2408             MOV ECX,dword ptr [ESP + 0x8]
13003de0  668b11               MOV DX,word ptr [ECX]
13003de3  6683fa17             CMP DX,0x17
13003de7  740a                 JZ 0x13003df3
13003de9  6683fa6a             CMP DX,0x6a
13003ded  0f85a2000000         JNZ 0x13003e95
13003df3  6683fa6a             CMP DX,0x6a
13003df7  750d                 JNZ 0x13003e06
13003df9  66c7011700           MOV word ptr [ECX],0x17
13003dfe  33d2                 XOR EDX,EDX
13003e00  895102               MOV dword ptr [ECX + 0x2],EDX
13003e03  895106               MOV dword ptr [ECX + 0x6],EDX
13003e06  8b5602               MOV EDX,dword ptr [ESI + 0x2]
13003e09  8bf2                 MOV ESI,EDX
13003e0b  81e6ffffff00         AND ESI,0xffffff
13003e11  83fe01               CMP ESI,0x1
13003e14  757f                 JNZ 0x13003e95
13003e16  81e2000000ff         AND EDX,0xff000000
13003e1c  81fa00000020         CMP EDX,0x20000000
13003e22  7412                 JZ 0x13003e36
13003e24  81fa00000040         CMP EDX,0x40000000
13003e2a  7428                 JZ 0x13003e54
13003e2c  81fa00000080         CMP EDX,0x80000000
13003e32  743e                 JZ 0x13003e72
13003e34  5e                   POP ESI
13003e35  c3                   RET
13003e36  8b542418             MOV EDX,dword ptr [ESP + 0x18]
13003e3a  85d2                 TEST EDX,EDX
13003e3c  7457                 JZ 0x13003e95
13003e3e  8b02                 MOV EAX,dword ptr [EDX]
13003e40  8901                 MOV dword ptr [ECX],EAX
13003e42  33c0                 XOR EAX,EAX
13003e44  8b7204               MOV ESI,dword ptr [EDX + 0x4]
13003e47  897104               MOV dword ptr [ECX + 0x4],ESI
13003e4a  5e                   POP ESI
13003e4b  668b5208             MOV DX,word ptr [EDX + 0x8]
13003e4f  66895108             MOV word ptr [ECX + 0x8],DX
13003e53  c3                   RET
13003e54  8b542414             MOV EDX,dword ptr [ESP + 0x14]
13003e58  85d2                 TEST EDX,EDX
13003e5a  7439                 JZ 0x13003e95
13003e5c  8b02                 MOV EAX,dword ptr [EDX]
13003e5e  8901                 MOV dword ptr [ECX],EAX
13003e60  33c0                 XOR EAX,EAX
13003e62  8b7204               MOV ESI,dword ptr [EDX + 0x4]
13003e65  897104               MOV dword ptr [ECX + 0x4],ESI
13003e68  5e                   POP ESI
13003e69  668b5208             MOV DX,word ptr [EDX + 0x8]
13003e6d  66895108             MOV word ptr [ECX + 0x8],DX
13003e71  c3                   RET
13003e72  8b542410             MOV EDX,dword ptr [ESP + 0x10]
13003e76  85d2                 TEST EDX,EDX
13003e78  741b                 JZ 0x13003e95
13003e7a  8b02                 MOV EAX,dword ptr [EDX]
13003e7c  8901                 MOV dword ptr [ECX],EAX
13003e7e  33c0                 XOR EAX,EAX
13003e80  8b7204               MOV ESI,dword ptr [EDX + 0x4]
13003e83  897104               MOV dword ptr [ECX + 0x4],ESI
13003e86  5e                   POP ESI
13003e87  668b5208             MOV DX,word ptr [EDX + 0x8]
13003e8b  66895108             MOV word ptr [ECX + 0x8],DX
13003e8f  c3                   RET
13003e90  b800000100           MOV EAX,0x10000
13003e95  5e                   POP ESI
13003e96  c3                   RET
; undefined 9 bytes at 13003e97

; ==== FUNCTION Quit entry=13003ea0 sig=undefined __cdecl Quit(int param_1)
13003ea0  56                   PUSH ESI
13003ea1  57                   PUSH EDI
13003ea2  8b7c240c             MOV EDI,dword ptr [ESP + 0xc]
13003ea6  6683bfb200000000     CMP word ptr [EDI + 0xb2],0x0
13003eae  753a                 JNZ 0x13003eea
13003eb0  b801000000           MOV EAX,0x1
13003eb5  681c830013           PUSH 0x1300831c
13003eba  668987a6000000       MOV word ptr [EDI + 0xa6],AX
13003ec1  8987ae000000         MOV dword ptr [EDI + 0xae],EAX
13003ec7  668987bc000000       MOV word ptr [EDI + 0xbc],AX
13003ece  57                   PUSH EDI
13003ecf  c787aa00000014000000 MOV dword ptr [EDI + 0xaa],0x14
13003ed9  66c787a40000000000   MOV word ptr [EDI + 0xa4],0x0
13003ee2  e8a9f9ffff           CALL 0x13003890
13003ee7  83c408               ADD ESP,0x8
13003eea  6683bfb200000001     CMP word ptr [EDI + 0xb2],0x1
13003ef2  7512                 JNZ 0x13003f06
13003ef4  6a00                 PUSH 0x0
13003ef6  6a01                 PUSH 0x1
13003ef8  6830800013           PUSH 0x13008030
13003efd  57                   PUSH EDI
13003efe  e81dfdffff           CALL 0x13003c20
13003f03  83c410               ADD ESP,0x10
13003f06  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
13003f0e  751c                 JNZ 0x13003f2c
13003f10  668b3534720013       MOV SI,word ptr [0x13007234]
13003f17  6850410013           PUSH 0x13004150
13003f1c  6a07                 PUSH 0x7
13003f1e  6a00                 PUSH 0x0
13003f20  56                   PUSH ESI
13003f21  57                   PUSH EDI
13003f22  e839fdffff           CALL 0x13003c60
13003f27  83c414               ADD ESP,0x14
13003f2a  eb07                 JMP 0x13003f33
13003f2c  668b3534720013       MOV SI,word ptr [0x13007234]
13003f33  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
13003f3b  7530                 JNZ 0x13003f6d
13003f3d  6880410013           PUSH 0x13004180
13003f42  6a08                 PUSH 0x8
13003f44  6a00                 PUSH 0x0
13003f46  56                   PUSH ESI
13003f47  57                   PUSH EDI
13003f48  e813fdffff           CALL 0x13003c60
13003f4d  83c414               ADD ESP,0x14
13003f50  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
13003f58  7530                 JNZ 0x13003f8a
13003f5a  68c0410013           PUSH 0x130041c0
13003f5f  6a22                 PUSH 0x22
13003f61  6a00                 PUSH 0x0
13003f63  56                   PUSH ESI
13003f64  57                   PUSH EDI
13003f65  e8f6fcffff           CALL 0x13003c60
13003f6a  83c414               ADD ESP,0x14
13003f6d  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
13003f75  7530                 JNZ 0x13003fa7
13003f77  6800420013           PUSH 0x13004200
13003f7c  6a09                 PUSH 0x9
13003f7e  6a00                 PUSH 0x0
13003f80  56                   PUSH ESI
13003f81  57                   PUSH EDI
13003f82  e8d9fcffff           CALL 0x13003c60
13003f87  83c414               ADD ESP,0x14
13003f8a  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
13003f92  7530                 JNZ 0x13003fc4
13003f94  6820460013           PUSH 0x13004620
13003f99  6a16                 PUSH 0x16
13003f9b  6a00                 PUSH 0x0
13003f9d  56                   PUSH ESI
13003f9e  57                   PUSH EDI
13003f9f  e8bcfcffff           CALL 0x13003c60
13003fa4  83c414               ADD ESP,0x14
13003fa7  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
13003faf  7530                 JNZ 0x13003fe1
13003fb1  6810420013           PUSH 0x13004210
13003fb6  6a1a                 PUSH 0x1a
13003fb8  6a00                 PUSH 0x0
13003fba  56                   PUSH ESI
13003fbb  57                   PUSH EDI
13003fbc  e89ffcffff           CALL 0x13003c60
13003fc1  83c414               ADD ESP,0x14
13003fc4  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
13003fcc  7530                 JNZ 0x13003ffe
13003fce  6890420013           PUSH 0x13004290
13003fd3  6a1b                 PUSH 0x1b
13003fd5  6a00                 PUSH 0x0
13003fd7  56                   PUSH ESI
13003fd8  57                   PUSH EDI
13003fd9  e882fcffff           CALL 0x13003c60
13003fde  83c414               ADD ESP,0x14
13003fe1  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
13003fe9  7530                 JNZ 0x1300401b
13003feb  68f0420013           PUSH 0x130042f0
13003ff0  6a1d                 PUSH 0x1d
13003ff2  6a00                 PUSH 0x0
13003ff4  56                   PUSH ESI
13003ff5  57                   PUSH EDI
13003ff6  e865fcffff           CALL 0x13003c60
13003ffb  83c414               ADD ESP,0x14
13003ffe  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
13004006  7530                 JNZ 0x13004038
13004008  6800430013           PUSH 0x13004300
1300400d  6a11                 PUSH 0x11
1300400f  6a00                 PUSH 0x0
13004011  56                   PUSH ESI
13004012  57                   PUSH EDI
13004013  e848fcffff           CALL 0x13003c60
13004018  83c414               ADD ESP,0x14
1300401b  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
13004023  7530                 JNZ 0x13004055
13004025  6880430013           PUSH 0x13004380
1300402a  6a13                 PUSH 0x13
1300402c  6a00                 PUSH 0x0
1300402e  56                   PUSH ESI
1300402f  57                   PUSH EDI
13004030  e82bfcffff           CALL 0x13003c60
13004035  83c414               ADD ESP,0x14
13004038  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
13004040  7530                 JNZ 0x13004072
13004042  6810440013           PUSH 0x13004410
13004047  6a12                 PUSH 0x12
13004049  6a00                 PUSH 0x0
1300404b  56                   PUSH ESI
1300404c  57                   PUSH EDI
1300404d  e80efcffff           CALL 0x13003c60
13004052  83c414               ADD ESP,0x14
13004055  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
1300405d  7530                 JNZ 0x1300408f
1300405f  6820450013           PUSH 0x13004520
13004064  6a0d                 PUSH 0xd
13004066  6a00                 PUSH 0x0
13004068  56                   PUSH ESI
13004069  57                   PUSH EDI
1300406a  e8f1fbffff           CALL 0x13003c60
1300406f  83c414               ADD ESP,0x14
13004072  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
1300407a  7530                 JNZ 0x130040ac
1300407c  6880450013           PUSH 0x13004580
13004081  6a0e                 PUSH 0xe
13004083  6a00                 PUSH 0x0
13004085  56                   PUSH ESI
13004086  57                   PUSH EDI
13004087  e8d4fbffff           CALL 0x13003c60
1300408c  83c414               ADD ESP,0x14
1300408f  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
13004097  7530                 JNZ 0x130040c9
13004099  68e0450013           PUSH 0x130045e0
1300409e  6a19                 PUSH 0x19
130040a0  6a00                 PUSH 0x0
130040a2  56                   PUSH ESI
130040a3  57                   PUSH EDI
130040a4  e8b7fbffff           CALL 0x13003c60
130040a9  83c414               ADD ESP,0x14
130040ac  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
130040b4  7530                 JNZ 0x130040e6
130040b6  6860460013           PUSH 0x13004660
130040bb  6a25                 PUSH 0x25
130040bd  6a00                 PUSH 0x0
130040bf  56                   PUSH ESI
130040c0  57                   PUSH EDI
130040c1  e89afbffff           CALL 0x13003c60
130040c6  83c414               ADD ESP,0x14
130040c9  6683bfb200000002     CMP word ptr [EDI + 0xb2],0x2
130040d1  7513                 JNZ 0x130040e6
130040d3  6800410013           PUSH 0x13004100
130040d8  6a2e                 PUSH 0x2e
130040da  6a00                 PUSH 0x0
130040dc  56                   PUSH ESI
130040dd  57                   PUSH EDI
130040de  e87dfbffff           CALL 0x13003c60
130040e3  83c414               ADD ESP,0x14
130040e6  57                   PUSH EDI
130040e7  e8a4fbffff           CALL 0x13003c90
130040ec  83c404               ADD ESP,0x4
130040ef  5f                   POP EDI
130040f0  5e                   POP ESI
130040f1  c3                   RET
; undefined 14 bytes at 130040f2

; ==== FUNCTION FUN_13004100 entry=13004100 sig=undefined4 __cdecl FUN_13004100(undefined4 param_1)
13004100  83ec04               SUB ESP,0x4
13004103  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
13004109  0fbf15c4710013       MOVSX EDX,word ptr [0x130071c4]
13004110  8d442400             LEA EAX,[ESP]
13004114  50                   PUSH EAX
13004115  6a2c                 PUSH 0x2c
13004117  6a01                 PUSH 0x1
13004119  8b0491               MOV EAX,dword ptr [ECX + EDX*0x4]
1300411c  50                   PUSH EAX
1300411d  e85ef8ffff           CALL 0x13003980
13004122  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
13004126  8b542410             MOV EDX,dword ptr [ESP + 0x10]
1300412a  83c410               ADD ESP,0x10
1300412d  6a0c                 PUSH 0xc
1300412f  6a17                 PUSH 0x17
13004131  684c800013           PUSH 0x1300804c
13004136  51                   PUSH ECX
13004137  52                   PUSH EDX
13004138  ffd0                 CALL EAX
1300413a  83c414               ADD ESP,0x14
1300413d  a3348d0013           MOV [0x13008d34],EAX
13004142  33c0                 XOR EAX,EAX
13004144  83c404               ADD ESP,0x4
13004147  c3                   RET
; undefined 8 bytes at 13004148

; ==== FUNCTION FUN_13004150 entry=13004150 sig=undefined4 __cdecl FUN_13004150(undefined2 * param_1)
13004150  8b442404             MOV EAX,dword ptr [ESP + 0x4]
13004154  33c9                 XOR ECX,ECX
13004156  66c7001700           MOV word ptr [EAX],0x17
1300415b  894806               MOV dword ptr [EAX + 0x6],ECX
1300415e  c740020a070000       MOV dword ptr [EAX + 0x2],0x70a
13004165  c7400c0b070000       MOV dword ptr [EAX + 0xc],0x70b
1300416c  66c7400a1700         MOV word ptr [EAX + 0xa],0x17
13004172  894810               MOV dword ptr [EAX + 0x10],ECX
13004175  33c0                 XOR EAX,EAX
13004177  c3                   RET
; undefined 8 bytes at 13004178

; ==== FUNCTION FUN_13004180 entry=13004180 sig=undefined4 __cdecl FUN_13004180(undefined4 * param_1, undefined4 * param_2)
13004180  8b542408             MOV EDX,dword ptr [ESP + 0x8]
13004184  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
13004188  8b02                 MOV EAX,dword ptr [EDX]
1300418a  83c20a               ADD EDX,0xa
1300418d  8901                 MOV dword ptr [ECX],EAX
1300418f  83c10a               ADD ECX,0xa
13004192  8b42fa               MOV EAX,dword ptr [EDX + -0x6]
13004195  8941fa               MOV dword ptr [ECX + -0x6],EAX
13004198  668b42fe             MOV AX,word ptr [EDX + -0x2]
1300419c  668941fe             MOV word ptr [ECX + -0x2],AX
130041a0  8b02                 MOV EAX,dword ptr [EDX]
130041a2  8901                 MOV dword ptr [ECX],EAX
130041a4  8b4204               MOV EAX,dword ptr [EDX + 0x4]
130041a7  894104               MOV dword ptr [ECX + 0x4],EAX
130041aa  33c0                 XOR EAX,EAX
130041ac  668b5208             MOV DX,word ptr [EDX + 0x8]
130041b0  66895108             MOV word ptr [ECX + 0x8],DX
130041b4  c3                   RET
; undefined 11 bytes at 130041b5

; ==== FUNCTION FUN_130041c0 entry=130041c0 sig=undefined4 __cdecl FUN_130041c0(undefined4 * param_1, undefined4 * param_2)
130041c0  8b542408             MOV EDX,dword ptr [ESP + 0x8]
130041c4  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
130041c8  8b02                 MOV EAX,dword ptr [EDX]
130041ca  83c20a               ADD EDX,0xa
130041cd  8901                 MOV dword ptr [ECX],EAX
130041cf  83c10a               ADD ECX,0xa
130041d2  8b42fa               MOV EAX,dword ptr [EDX + -0x6]
130041d5  8941fa               MOV dword ptr [ECX + -0x6],EAX
130041d8  668b42fe             MOV AX,word ptr [EDX + -0x2]
130041dc  668941fe             MOV word ptr [ECX + -0x2],AX
130041e0  8b02                 MOV EAX,dword ptr [EDX]
130041e2  8901                 MOV dword ptr [ECX],EAX
130041e4  8b4204               MOV EAX,dword ptr [EDX + 0x4]
130041e7  894104               MOV dword ptr [ECX + 0x4],EAX
130041ea  33c0                 XOR EAX,EAX
130041ec  668b5208             MOV DX,word ptr [EDX + 0x8]
130041f0  66895108             MOV word ptr [ECX + 0x8],DX
130041f4  c3                   RET
; undefined 11 bytes at 130041f5

; ==== FUNCTION FUN_13004200 entry=13004200 sig=undefined4 __stdcall FUN_13004200(void)
13004200  33c0                 XOR EAX,EAX
13004202  c3                   RET
; undefined 13 bytes at 13004203

; ==== FUNCTION FUN_13004210 entry=13004210 sig=undefined4 __cdecl FUN_13004210(int param_1, int param_2, short param_3)
13004210  83ec08               SUB ESP,0x8
13004213  66837c241400         CMP word ptr [ESP + 0x14],0x0
13004219  56                   PUSH ESI
1300421a  57                   PUSH EDI
1300421b  755b                 JNZ 0x13004278
1300421d  8d442408             LEA EAX,[ESP + 0x8]
13004221  8b7c2418             MOV EDI,dword ptr [ESP + 0x18]
13004225  50                   PUSH EAX
13004226  6a00                 PUSH 0x0
13004228  6a01                 PUSH 0x1
1300422a  57                   PUSH EDI
1300422b  e850f7ffff           CALL 0x13003980
13004230  8b742424             MOV ESI,dword ptr [ESP + 0x24]
13004234  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
13004238  83c410               ADD ESP,0x10
1300423b  56                   PUSH ESI
1300423c  6a06                 PUSH 0x6
1300423e  51                   PUSH ECX
1300423f  ffd0                 CALL EAX
13004241  83c40c               ADD ESP,0xc
13004244  a3348d0013           MOV [0x13008d34],EAX
13004249  8d44240c             LEA EAX,[ESP + 0xc]
1300424d  83c60a               ADD ESI,0xa
13004250  50                   PUSH EAX
13004251  6a00                 PUSH 0x0
13004253  6a01                 PUSH 0x1
13004255  57                   PUSH EDI
13004256  e825f7ffff           CALL 0x13003980
1300425b  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
1300425f  83c410               ADD ESP,0x10
13004262  56                   PUSH ESI
13004263  6a08                 PUSH 0x8
13004265  51                   PUSH ECX
13004266  ffd0                 CALL EAX
13004268  83c40c               ADD ESP,0xc
1300426b  a3348d0013           MOV [0x13008d34],EAX
13004270  33c0                 XOR EAX,EAX
13004272  5f                   POP EDI
13004273  5e                   POP ESI
13004274  83c408               ADD ESP,0x8
13004277  c3                   RET
13004278  b800000100           MOV EAX,0x10000
1300427d  5f                   POP EDI
1300427e  5e                   POP ESI
1300427f  83c408               ADD ESP,0x8
13004282  c3                   RET
; undefined 13 bytes at 13004283

; ==== FUNCTION FUN_13004290 entry=13004290 sig=undefined4 __cdecl FUN_13004290(int param_1, int param_2)
13004290  83ec08               SUB ESP,0x8
13004293  8d442400             LEA EAX,[ESP]
13004297  56                   PUSH ESI
13004298  57                   PUSH EDI
13004299  50                   PUSH EAX
1300429a  8b7c241c             MOV EDI,dword ptr [ESP + 0x1c]
1300429e  6a01                 PUSH 0x1
130042a0  6a01                 PUSH 0x1
130042a2  57                   PUSH EDI
130042a3  e8d8f6ffff           CALL 0x13003980
130042a8  8b742424             MOV ESI,dword ptr [ESP + 0x24]
130042ac  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
130042b0  83c410               ADD ESP,0x10
130042b3  56                   PUSH ESI
130042b4  6a06                 PUSH 0x6
130042b6  51                   PUSH ECX
130042b7  ffd0                 CALL EAX
130042b9  83c40c               ADD ESP,0xc
130042bc  a3348d0013           MOV [0x13008d34],EAX
130042c1  8d44240c             LEA EAX,[ESP + 0xc]
130042c5  83c60a               ADD ESI,0xa
130042c8  50                   PUSH EAX
130042c9  6a01                 PUSH 0x1
130042cb  6a01                 PUSH 0x1
130042cd  57                   PUSH EDI
130042ce  e8adf6ffff           CALL 0x13003980
130042d3  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
130042d7  83c410               ADD ESP,0x10
130042da  56                   PUSH ESI
130042db  6a08                 PUSH 0x8
130042dd  51                   PUSH ECX
130042de  ffd0                 CALL EAX
130042e0  83c40c               ADD ESP,0xc
130042e3  a3348d0013           MOV [0x13008d34],EAX
130042e8  33c0                 XOR EAX,EAX
130042ea  5f                   POP EDI
130042eb  5e                   POP ESI
130042ec  83c408               ADD ESP,0x8
130042ef  c3                   RET

; ==== FUNCTION FUN_130042f0 entry=130042f0 sig=undefined4 __stdcall FUN_130042f0(void)
130042f0  33c0                 XOR EAX,EAX
130042f2  c3                   RET
; undefined 13 bytes at 130042f3

; ==== FUNCTION FUN_13004300 entry=13004300 sig=undefined4 __cdecl FUN_13004300(int param_1, int param_2, undefined4 param_3, int * param_4)
13004300  83ec0c               SUB ESP,0xc
13004303  8d442404             LEA EAX,[ESP + 0x4]
13004307  53                   PUSH EBX
13004308  56                   PUSH ESI
13004309  57                   PUSH EDI
1300430a  8b742428             MOV ESI,dword ptr [ESP + 0x28]
1300430e  50                   PUSH EAX
1300430f  8b7c2424             MOV EDI,dword ptr [ESP + 0x24]
13004313  6a04                 PUSH 0x4
13004315  6a01                 PUSH 0x1
13004317  c70602000000         MOV dword ptr [ESI],0x2
1300431d  57                   PUSH EDI
1300431e  e85df6ffff           CALL 0x13003980
13004323  8d4c241c             LEA ECX,[ESP + 0x1c]
13004327  8b5c242c             MOV EBX,dword ptr [ESP + 0x2c]
1300432b  8b542420             MOV EDX,dword ptr [ESP + 0x20]
1300432f  83c410               ADD ESP,0x10
13004332  51                   PUSH ECX
13004333  53                   PUSH EBX
13004334  52                   PUSH EDX
13004335  ffd0                 CALL EAX
13004337  8d4c2420             LEA ECX,[ESP + 0x20]
1300433b  83c40c               ADD ESP,0xc
1300433e  a3348d0013           MOV [0x13008d34],EAX
13004343  8b44240c             MOV EAX,dword ptr [ESP + 0xc]
13004347  51                   PUSH ECX
13004348  0106                 ADD dword ptr [ESI],EAX
1300434a  6a04                 PUSH 0x4
1300434c  6a01                 PUSH 0x1
1300434e  57                   PUSH EDI
1300434f  83c30a               ADD EBX,0xa
13004352  e829f6ffff           CALL 0x13003980
13004357  8d4c241c             LEA ECX,[ESP + 0x1c]
1300435b  8b542424             MOV EDX,dword ptr [ESP + 0x24]
1300435f  83c410               ADD ESP,0x10
13004362  51                   PUSH ECX
13004363  53                   PUSH EBX
13004364  52                   PUSH EDX
13004365  ffd0                 CALL EAX
13004367  83c40c               ADD ESP,0xc
1300436a  a3348d0013           MOV [0x13008d34],EAX
1300436f  8b44240c             MOV EAX,dword ptr [ESP + 0xc]
13004373  5f                   POP EDI
13004374  0106                 ADD dword ptr [ESI],EAX
13004376  33c0                 XOR EAX,EAX
13004378  5e                   POP ESI
13004379  5b                   POP EBX
1300437a  83c40c               ADD ESP,0xc
1300437d  c3                   RET
; undefined 2 bytes at 1300437e

; ==== FUNCTION FUN_13004380 entry=13004380 sig=undefined4 __cdecl FUN_13004380(int param_1, int param_2)
13004380  83ec10               SUB ESP,0x10
13004383  66c74424020100       MOV word ptr [ESP + 0x2],0x1
1300438a  8d442404             LEA EAX,[ESP + 0x4]
1300438e  56                   PUSH ESI
1300438f  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
13004393  57                   PUSH EDI
13004394  50                   PUSH EAX
13004395  6a07                 PUSH 0x7
13004397  6a01                 PUSH 0x1
13004399  56                   PUSH ESI
1300439a  e8e1f5ffff           CALL 0x13003980
1300439f  8d4c241a             LEA ECX,[ESP + 0x1a]
130043a3  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
130043a7  83c410               ADD ESP,0x10
130043aa  6a01                 PUSH 0x1
130043ac  51                   PUSH ECX
130043ad  52                   PUSH EDX
130043ae  ffd0                 CALL EAX
130043b0  8d4c241c             LEA ECX,[ESP + 0x1c]
130043b4  83c40c               ADD ESP,0xc
130043b7  a3348d0013           MOV [0x13008d34],EAX
130043bc  51                   PUSH ECX
130043bd  6a05                 PUSH 0x5
130043bf  6a01                 PUSH 0x1
130043c1  56                   PUSH ESI
130043c2  e8b9f5ffff           CALL 0x13003980
130043c7  8b7c242c             MOV EDI,dword ptr [ESP + 0x2c]
130043cb  8b4c2420             MOV ECX,dword ptr [ESP + 0x20]
130043cf  83c410               ADD ESP,0x10
130043d2  57                   PUSH EDI
130043d3  51                   PUSH ECX
130043d4  ffd0                 CALL EAX
130043d6  83c408               ADD ESP,0x8
130043d9  a3348d0013           MOV [0x13008d34],EAX
130043de  8d442414             LEA EAX,[ESP + 0x14]
130043e2  83c70a               ADD EDI,0xa
130043e5  50                   PUSH EAX
130043e6  6a05                 PUSH 0x5
130043e8  6a01                 PUSH 0x1
130043ea  56                   PUSH ESI
130043eb  e890f5ffff           CALL 0x13003980
130043f0  8b4c2424             MOV ECX,dword ptr [ESP + 0x24]
130043f4  83c410               ADD ESP,0x10
130043f7  57                   PUSH EDI
130043f8  51                   PUSH ECX
130043f9  ffd0                 CALL EAX
130043fb  83c408               ADD ESP,0x8
130043fe  a3348d0013           MOV [0x13008d34],EAX
13004403  33c0                 XOR EAX,EAX
13004405  5f                   POP EDI
13004406  5e                   POP ESI
13004407  83c410               ADD ESP,0x10
1300440a  c3                   RET
; undefined 5 bytes at 1300440b

; ==== FUNCTION FUN_13004410 entry=13004410 sig=undefined4 __cdecl FUN_13004410(int param_1, int param_2, undefined4 param_3, short param_4)
13004410  668b442410           MOV AX,word ptr [ESP + 0x10]
13004415  83ec0c               SUB ESP,0xc
13004418  6685c0               TEST AX,AX
1300441b  56                   PUSH ESI
1300441c  57                   PUSH EDI
1300441d  0f8e92000000         JLE 0x130044b5
13004423  8d44240c             LEA EAX,[ESP + 0xc]
13004427  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
1300442b  50                   PUSH EAX
1300442c  6a08                 PUSH 0x8
1300442e  6a01                 PUSH 0x1
13004430  56                   PUSH ESI
13004431  e84af5ffff           CALL 0x13003980
13004436  8d4c241a             LEA ECX,[ESP + 0x1a]
1300443a  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
1300443e  83c410               ADD ESP,0x10
13004441  6a01                 PUSH 0x1
13004443  51                   PUSH ECX
13004444  52                   PUSH EDX
13004445  ffd0                 CALL EAX
13004447  83c40c               ADD ESP,0xc
1300444a  a3348d0013           MOV [0x13008d34],EAX
1300444f  66837c240a01         CMP word ptr [ESP + 0xa],0x1
13004455  7553                 JNZ 0x130044aa
13004457  8d44240c             LEA EAX,[ESP + 0xc]
1300445b  50                   PUSH EAX
1300445c  6a06                 PUSH 0x6
1300445e  6a01                 PUSH 0x1
13004460  56                   PUSH ESI
13004461  e81af5ffff           CALL 0x13003980
13004466  8b7c2428             MOV EDI,dword ptr [ESP + 0x28]
1300446a  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
1300446e  83c410               ADD ESP,0x10
13004471  57                   PUSH EDI
13004472  51                   PUSH ECX
13004473  ffd0                 CALL EAX
13004475  83c408               ADD ESP,0x8
13004478  a3348d0013           MOV [0x13008d34],EAX
1300447d  8d442410             LEA EAX,[ESP + 0x10]
13004481  83c70a               ADD EDI,0xa
13004484  50                   PUSH EAX
13004485  6a06                 PUSH 0x6
13004487  6a01                 PUSH 0x1
13004489  56                   PUSH ESI
1300448a  e8f1f4ffff           CALL 0x13003980
1300448f  8b4c2420             MOV ECX,dword ptr [ESP + 0x20]
13004493  83c410               ADD ESP,0x10
13004496  57                   PUSH EDI
13004497  51                   PUSH ECX
13004498  ffd0                 CALL EAX
1300449a  83c408               ADD ESP,0x8
1300449d  a3348d0013           MOV [0x13008d34],EAX
130044a2  33c0                 XOR EAX,EAX
130044a4  5f                   POP EDI
130044a5  5e                   POP ESI
130044a6  83c40c               ADD ESP,0xc
130044a9  c3                   RET
130044aa  b800000100           MOV EAX,0x10000
130044af  5f                   POP EDI
130044b0  5e                   POP ESI
130044b1  83c40c               ADD ESP,0xc
130044b4  c3                   RET
130044b5  7557                 JNZ 0x1300450e
130044b7  8d44240c             LEA EAX,[ESP + 0xc]
130044bb  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
130044bf  50                   PUSH EAX
130044c0  6a06                 PUSH 0x6
130044c2  6a01                 PUSH 0x1
130044c4  56                   PUSH ESI
130044c5  e8b6f4ffff           CALL 0x13003980
130044ca  8b7c2428             MOV EDI,dword ptr [ESP + 0x28]
130044ce  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
130044d2  83c410               ADD ESP,0x10
130044d5  57                   PUSH EDI
130044d6  51                   PUSH ECX
130044d7  ffd0                 CALL EAX
130044d9  83c408               ADD ESP,0x8
130044dc  a3348d0013           MOV [0x13008d34],EAX
130044e1  8d442410             LEA EAX,[ESP + 0x10]
130044e5  83c70a               ADD EDI,0xa
130044e8  50                   PUSH EAX
130044e9  6a06                 PUSH 0x6
130044eb  6a01                 PUSH 0x1
130044ed  56                   PUSH ESI
130044ee  e88df4ffff           CALL 0x13003980
130044f3  8b4c2420             MOV ECX,dword ptr [ESP + 0x20]
130044f7  83c410               ADD ESP,0x10
130044fa  57                   PUSH EDI
130044fb  51                   PUSH ECX
130044fc  ffd0                 CALL EAX
130044fe  83c408               ADD ESP,0x8
13004501  a3348d0013           MOV [0x13008d34],EAX
13004506  33c0                 XOR EAX,EAX
13004508  5f                   POP EDI
13004509  5e                   POP ESI
1300450a  83c40c               ADD ESP,0xc
1300450d  c3                   RET
1300450e  b800000100           MOV EAX,0x10000
13004513  5f                   POP EDI
13004514  5e                   POP ESI
13004515  83c40c               ADD ESP,0xc
13004518  c3                   RET
; undefined 7 bytes at 13004519

; ==== FUNCTION FUN_13004520 entry=13004520 sig=undefined4 __cdecl FUN_13004520(int param_1)
13004520  83ec08               SUB ESP,0x8
13004523  8d442400             LEA EAX,[ESP]
13004527  56                   PUSH ESI
13004528  8b742410             MOV ESI,dword ptr [ESP + 0x10]
1300452c  50                   PUSH EAX
1300452d  6a21                 PUSH 0x21
1300452f  6a00                 PUSH 0x0
13004531  56                   PUSH ESI
13004532  e849f4ffff           CALL 0x13003980
13004537  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
1300453b  83c410               ADD ESP,0x10
1300453e  56                   PUSH ESI
1300453f  6a01                 PUSH 0x1
13004541  51                   PUSH ECX
13004542  ffd0                 CALL EAX
13004544  83c40c               ADD ESP,0xc
13004547  a3348d0013           MOV [0x13008d34],EAX
1300454c  8d442408             LEA EAX,[ESP + 0x8]
13004550  50                   PUSH EAX
13004551  6a21                 PUSH 0x21
13004553  6a00                 PUSH 0x0
13004555  56                   PUSH ESI
13004556  83c60a               ADD ESI,0xa
13004559  e822f4ffff           CALL 0x13003980
1300455e  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
13004562  83c410               ADD ESP,0x10
13004565  56                   PUSH ESI
13004566  6a01                 PUSH 0x1
13004568  51                   PUSH ECX
13004569  ffd0                 CALL EAX
1300456b  83c40c               ADD ESP,0xc
1300456e  a3348d0013           MOV [0x13008d34],EAX
13004573  33c0                 XOR EAX,EAX
13004575  5e                   POP ESI
13004576  83c408               ADD ESP,0x8
13004579  c3                   RET
; undefined 6 bytes at 1300457a

; ==== FUNCTION FUN_13004580 entry=13004580 sig=undefined4 __cdecl FUN_13004580(int param_1)
13004580  83ec08               SUB ESP,0x8
13004583  8d442400             LEA EAX,[ESP]
13004587  56                   PUSH ESI
13004588  8b742410             MOV ESI,dword ptr [ESP + 0x10]
1300458c  50                   PUSH EAX
1300458d  6a21                 PUSH 0x21
1300458f  6a00                 PUSH 0x0
13004591  56                   PUSH ESI
13004592  e8e9f3ffff           CALL 0x13003980
13004597  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
1300459b  83c410               ADD ESP,0x10
1300459e  56                   PUSH ESI
1300459f  6a02                 PUSH 0x2
130045a1  51                   PUSH ECX
130045a2  ffd0                 CALL EAX
130045a4  83c40c               ADD ESP,0xc
130045a7  a3348d0013           MOV [0x13008d34],EAX
130045ac  8d442408             LEA EAX,[ESP + 0x8]
130045b0  50                   PUSH EAX
130045b1  6a21                 PUSH 0x21
130045b3  6a00                 PUSH 0x0
130045b5  56                   PUSH ESI
130045b6  83c60a               ADD ESI,0xa
130045b9  e8c2f3ffff           CALL 0x13003980
130045be  8b4c2418             MOV ECX,dword ptr [ESP + 0x18]
130045c2  83c410               ADD ESP,0x10
130045c5  56                   PUSH ESI
130045c6  6a02                 PUSH 0x2
130045c8  51                   PUSH ECX
130045c9  ffd0                 CALL EAX
130045cb  83c40c               ADD ESP,0xc
130045ce  a3348d0013           MOV [0x13008d34],EAX
130045d3  33c0                 XOR EAX,EAX
130045d5  5e                   POP ESI
130045d6  83c408               ADD ESP,0x8
130045d9  c3                   RET
; undefined 6 bytes at 130045da

; ==== FUNCTION FUN_130045e0 entry=130045e0 sig=undefined4 __cdecl FUN_130045e0(int param_1, int param_2)
130045e0  8b442404             MOV EAX,dword ptr [ESP + 0x4]
130045e4  56                   PUSH ESI
130045e5  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
130045e9  8b4e0c               MOV ECX,dword ptr [ESI + 0xc]
130045ec  394802               CMP dword ptr [EAX + 0x2],ECX
130045ef  750c                 JNZ 0x130045fd
130045f1  8b5610               MOV EDX,dword ptr [ESI + 0x10]
130045f4  395006               CMP dword ptr [EAX + 0x6],EDX
130045f7  7504                 JNZ 0x130045fd
130045f9  33c0                 XOR EAX,EAX
130045fb  5e                   POP ESI
130045fc  c3                   RET
130045fd  39480c               CMP dword ptr [EAX + 0xc],ECX
13004600  750c                 JNZ 0x1300460e
13004602  8b4010               MOV EAX,dword ptr [EAX + 0x10]
13004605  394610               CMP dword ptr [ESI + 0x10],EAX
13004608  7504                 JNZ 0x1300460e
1300460a  33c0                 XOR EAX,EAX
1300460c  5e                   POP ESI
1300460d  c3                   RET
1300460e  b800000100           MOV EAX,0x10000
13004613  5e                   POP ESI
13004614  c3                   RET
; undefined 11 bytes at 13004615

; ==== FUNCTION FUN_13004620 entry=13004620 sig=undefined4 __cdecl FUN_13004620(undefined4 * param_1, uint * param_2, short * param_3, short * param_4)
13004620  8b442408             MOV EAX,dword ptr [ESP + 0x8]
13004624  684c800013           PUSH 0x1300804c
13004629  50                   PUSH EAX
1300462a  e8c1f2ffff           CALL 0x130038f0
1300462f  83c408               ADD ESP,0x8
13004632  84c0                 TEST AL,AL
13004634  741e                 JZ 0x13004654
13004636  8b442404             MOV EAX,dword ptr [ESP + 0x4]
1300463a  6a00                 PUSH 0x0
1300463c  8b542410             MOV EDX,dword ptr [ESP + 0x10]
13004640  8d480a               LEA ECX,[EAX + 0xa]
13004643  51                   PUSH ECX
13004644  50                   PUSH EAX
13004645  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
13004649  52                   PUSH EDX
1300464a  50                   PUSH EAX
1300464b  e870f7ffff           CALL 0x13003dc0
13004650  83c414               ADD ESP,0x14
13004653  c3                   RET
13004654  b800000100           MOV EAX,0x10000
13004659  c3                   RET
; undefined 6 bytes at 1300465a

; ==== FUNCTION FUN_13004660 entry=13004660 sig=undefined4 __cdecl FUN_13004660(int param_1, undefined4 param_2, undefined4 param_3)
13004660  83ec08               SUB ESP,0x8
13004663  0fbf05b8710013       MOVSX EAX,word ptr [0x130071b8]
1300466a  8d4c2400             LEA ECX,[ESP]
1300466e  53                   PUSH EBX
1300466f  56                   PUSH ESI
13004670  57                   PUSH EDI
13004671  55                   PUSH EBP
13004672  8d348500000000       LEA ESI,[EAX*0x4 + 0x0]
13004679  51                   PUSH ECX
1300467a  a1308d0013           MOV EAX,[0x13008d30]
1300467f  6a04                 PUSH 0x4
13004681  6a01                 PUSH 0x1
13004683  8b1430               MOV EDX,dword ptr [EAX + ESI*0x1]
13004686  52                   PUSH EDX
13004687  e8f4f2ffff           CALL 0x13003980
1300468c  8b7c242c             MOV EDI,dword ptr [ESP + 0x2c]
13004690  8b6c2434             MOV EBP,dword ptr [ESP + 0x34]
13004694  8b5c2430             MOV EBX,dword ptr [ESP + 0x30]
13004698  8b4c2420             MOV ECX,dword ptr [ESP + 0x20]
1300469c  83c410               ADD ESP,0x10
1300469f  57                   PUSH EDI
130046a0  55                   PUSH EBP
130046a1  53                   PUSH EBX
130046a2  51                   PUSH ECX
130046a3  ffd0                 CALL EAX
130046a5  83c410               ADD ESP,0x10
130046a8  8b0d308d0013         MOV ECX,dword ptr [0x13008d30]
130046ae  a3348d0013           MOV [0x13008d34],EAX
130046b3  8d442414             LEA EAX,[ESP + 0x14]
130046b7  50                   PUSH EAX
130046b8  8b1431               MOV EDX,dword ptr [ECX + ESI*0x1]
130046bb  6a04                 PUSH 0x4
130046bd  83c70a               ADD EDI,0xa
130046c0  6a01                 PUSH 0x1
130046c2  52                   PUSH EDX
130046c3  e8b8f2ffff           CALL 0x13003980
130046c8  8b4c2424             MOV ECX,dword ptr [ESP + 0x24]
130046cc  83c410               ADD ESP,0x10
130046cf  57                   PUSH EDI
130046d0  55                   PUSH EBP
130046d1  53                   PUSH EBX
130046d2  51                   PUSH ECX
130046d3  ffd0                 CALL EAX
130046d5  83c410               ADD ESP,0x10
130046d8  a3348d0013           MOV [0x13008d34],EAX
130046dd  33c0                 XOR EAX,EAX
130046df  5d                   POP EBP
130046e0  5f                   POP EDI
130046e1  5e                   POP ESI
130046e2  5b                   POP EBX
130046e3  83c408               ADD ESP,0x8
130046e6  c3                   RET
; undefined 9 bytes at 130046e7

; ==== FUNCTION FUN_130046f0 entry=130046f0 sig=undefined4 __stdcall FUN_130046f0(undefined4 param_1, int param_2)
130046f0  8b442408             MOV EAX,dword ptr [ESP + 0x8]
130046f4  83f801               CMP EAX,0x1
130046f7  0f85ec000000         JNZ 0x130047e9
130046fd  ff153ca10013         CALL dword ptr [0x1300a13c]
13004703  833d3883001300       CMP dword ptr [0x13008338],0x0
1300470a  a340830013           MOV [0x13008340],EAX
1300470f  753e                 JNZ 0x1300474f
13004711  3c03                 CMP AL,0x3
13004713  7511                 JNZ 0x13004726
13004715  a900000080           TEST EAX,0x80000000
1300471a  740a                 JZ 0x13004726
1300471c  6a02                 PUSH 0x2
1300471e  e8dd0f0000           CALL 0x13005700
13004723  83c404               ADD ESP,0x4
13004726  6840720013           PUSH 0x13007240
1300472b  ff1548a10013         CALL dword ptr [0x1300a148]
13004731  85c0                 TEST EAX,EAX
13004733  741a                 JZ 0x1300474f
13004735  6838720013           PUSH 0x13007238
1300473a  50                   PUSH EAX
1300473b  ff1544a10013         CALL dword ptr [0x1300a144]
13004741  85c0                 TEST EAX,EAX
13004743  740a                 JZ 0x1300474f
13004745  6a01                 PUSH 0x1
13004747  e8b40f0000           CALL 0x13005700
1300474c  83c404               ADD ESP,0x4
1300474f  e82c050000           CALL 0x13004c80
13004754  33c9                 XOR ECX,ECX
13004756  8b1540830013         MOV EDX,dword ptr [0x13008340]
1300475c  8ace                 MOV CL,DH
1300475e  8bc2                 MOV EAX,EDX
13004760  25ff000000           AND EAX,0xff
13004765  ff0524830013         INC dword ptr [0x13008324]
1300476b  c1ea10               SHR EDX,0x10
1300476e  890d4c830013         MOV dword ptr [0x1300834c],ECX
13004774  a348830013           MOV [0x13008348],EAX
13004779  891540830013         MOV dword ptr [0x13008340],EDX
1300477f  c1e008               SHL EAX,0x8
13004782  03c1                 ADD EAX,ECX
13004784  a344830013           MOV [0x13008344],EAX
13004789  e822030000           CALL 0x13004ab0
1300478e  85c0                 TEST EAX,EAX
13004790  750a                 JNZ 0x1300479c
13004792  e809050000           CALL 0x13004ca0
13004797  33c0                 XOR EAX,EAX
13004799  c20c00               RET 0xc
1300479c  ff1540a10013         CALL dword ptr [0x1300a140]
130047a2  a3649e0013           MOV [0x13009e64],EAX
130047a7  e8b40d0000           CALL 0x13005560
130047ac  833d649e001300       CMP dword ptr [0x13009e64],0x0
130047b3  a328830013           MOV [0x13008328],EAX
130047b8  7425                 JZ 0x130047df
130047ba  85c0                 TEST EAX,EAX
130047bc  7421                 JZ 0x130047df
130047be  e8ed040000           CALL 0x13004cb0
130047c3  e8880d0000           CALL 0x13005550
130047c8  e803080000           CALL 0x13004fd0
130047cd  e81e070000           CALL 0x13004ef0
130047d2  e879010000           CALL 0x13004950
130047d7  b801000000           MOV EAX,0x1
130047dc  c20c00               RET 0xc
130047df  e8bc040000           CALL 0x13004ca0
130047e4  33c0                 XOR EAX,EAX
130047e6  c20c00               RET 0xc
130047e9  85c0                 TEST EAX,EAX
130047eb  7539                 JNZ 0x13004826
130047ed  a124830013           MOV EAX,[0x13008324]
130047f2  85c0                 TEST EAX,EAX
130047f4  7e2b                 JLE 0x13004821
130047f6  48                   DEC EAX
130047f7  833d7883001300       CMP dword ptr [0x13008378],0x0
130047fe  a324830013           MOV [0x13008324],EAX
13004803  7505                 JNZ 0x1300480a
13004805  e896010000           CALL 0x130049a0
1300480a  e881060000           CALL 0x13004e90
1300480f  e8fc020000           CALL 0x13004b10
13004814  e887040000           CALL 0x13004ca0
13004819  b801000000           MOV EAX,0x1
1300481e  c20c00               RET 0xc
13004821  33c0                 XOR EAX,EAX
13004823  c20c00               RET 0xc
13004826  83f803               CMP EAX,0x3
13004829  750a                 JNZ 0x13004835
1300482b  6a00                 PUSH 0x0
1300482d  e89e030000           CALL 0x13004bd0
13004832  83c404               ADD ESP,0x4
13004835  b801000000           MOV EAX,0x1
1300483a  c20c00               RET 0xc
; undefined 3 bytes at 1300483d

; ==== FUNCTION entry entry=13004840 sig=int __stdcall entry(undefined4 param_1, int param_2, undefined4 param_3)
13004840  53                   PUSH EBX
13004841  56                   PUSH ESI
13004842  57                   PUSH EDI
13004843  bb01000000           MOV EBX,0x1
13004848  8b7c2414             MOV EDI,dword ptr [ESP + 0x14]
1300484c  55                   PUSH EBP
1300484d  3bfb                 CMP EDI,EBX
1300484f  752a                 JNZ 0x1300487b
13004851  011d24830013         ADD dword ptr [0x13008324],EBX
13004857  83ff01               CMP EDI,0x1
1300485a  7405                 JZ 0x13004861
1300485c  83ff02               CMP EDI,0x2
1300485f  754c                 JNZ 0x130048ad
13004861  a1689e0013           MOV EAX,[0x13009e68]
13004866  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
1300486a  85c0                 TEST EAX,EAX
1300486c  742b                 JZ 0x13004899
1300486e  8b6c2414             MOV EBP,dword ptr [ESP + 0x14]
13004872  56                   PUSH ESI
13004873  57                   PUSH EDI
13004874  55                   PUSH EBP
13004875  ffd0                 CALL EAX
13004877  8bd8                 MOV EBX,EAX
13004879  eb22                 JMP 0x1300489d
1300487b  85ff                 TEST EDI,EDI
1300487d  75d8                 JNZ 0x13004857
1300487f  a124830013           MOV EAX,[0x13008324]
13004884  85c0                 TEST EAX,EAX
13004886  7e08                 JLE 0x13004890
13004888  48                   DEC EAX
13004889  a324830013           MOV [0x13008324],EAX
1300488e  ebc7                 JMP 0x13004857
13004890  33c0                 XOR EAX,EAX
13004892  5d                   POP EBP
13004893  5f                   POP EDI
13004894  5e                   POP ESI
13004895  5b                   POP EBX
13004896  c20c00               RET 0xc
13004899  8b6c2414             MOV EBP,dword ptr [ESP + 0x14]
1300489d  85db                 TEST EBX,EBX
1300489f  7422                 JZ 0x130048c3
130048a1  56                   PUSH ESI
130048a2  57                   PUSH EDI
130048a3  55                   PUSH EBP
130048a4  e847feffff           CALL 0x130046f0
130048a9  8bd8                 MOV EBX,EAX
130048ab  eb08                 JMP 0x130048b5
130048ad  8b74241c             MOV ESI,dword ptr [ESP + 0x1c]
130048b1  8b6c2414             MOV EBP,dword ptr [ESP + 0x14]
130048b5  85db                 TEST EBX,EBX
130048b7  740e                 JZ 0x130048c7
130048b9  56                   PUSH ESI
130048ba  57                   PUSH EDI
130048bb  55                   PUSH EBP
130048bc  e84f0e0000           CALL 0x13005710
130048c1  8bd8                 MOV EBX,EAX
130048c3  85db                 TEST EBX,EBX
130048c5  750f                 JNZ 0x130048d6
130048c7  83ff01               CMP EDI,0x1
130048ca  750a                 JNZ 0x130048d6
130048cc  e83f020000           CALL 0x13004b10
130048d1  e8ca030000           CALL 0x13004ca0
130048d6  85ff                 TEST EDI,EDI
130048d8  7405                 JZ 0x130048df
130048da  83ff03               CMP EDI,0x3
130048dd  7522                 JNZ 0x13004901
130048df  56                   PUSH ESI
130048e0  57                   PUSH EDI
130048e1  55                   PUSH EBP
130048e2  e809feffff           CALL 0x130046f0
130048e7  85c0                 TEST EAX,EAX
130048e9  7502                 JNZ 0x130048ed
130048eb  33db                 XOR EBX,EBX
130048ed  85db                 TEST EBX,EBX
130048ef  7410                 JZ 0x13004901
130048f1  a1689e0013           MOV EAX,[0x13009e68]
130048f6  85c0                 TEST EAX,EAX
130048f8  7407                 JZ 0x13004901
130048fa  56                   PUSH ESI
130048fb  57                   PUSH EDI
130048fc  55                   PUSH EBP
130048fd  ffd0                 CALL EAX
130048ff  8bd8                 MOV EBX,EAX
13004901  8bc3                 MOV EAX,EBX
13004903  5d                   POP EBP
13004904  5f                   POP EDI
13004905  5e                   POP ESI
13004906  5b                   POP EBX
13004907  c20c00               RET 0xc
; undefined 6 bytes at 1300490a

; ==== FUNCTION __amsg_exit entry=13004910 sig=void __cdecl __amsg_exit(int param_1)
13004910  a134830013           MOV EAX,[0x13008334]
13004915  83f801               CMP EAX,0x1
13004918  740d                 JZ 0x13004927
1300491a  85c0                 TEST EAX,EAX
1300491c  750e                 JNZ 0x1300492c
1300491e  833d3883001301       CMP dword ptr [0x13008338],0x1
13004925  7505                 JNZ 0x1300492c
13004927  e8f40d0000           CALL 0x13005720
1300492c  8b442404             MOV EAX,dword ptr [ESP + 0x4]
13004930  50                   PUSH EAX
13004931  e82a0e0000           CALL 0x13005760
13004936  83c404               ADD ESP,0x4
13004939  68ff000000           PUSH 0xff
1300493e  ff1530830013         CALL dword ptr [0x13008330]
13004944  83c404               ADD ESP,0x4
13004947  c3                   RET
; undefined 8 bytes at 13004948

; ==== FUNCTION __cinit entry=13004950 sig=int __cdecl __cinit(int param_1)
13004950  a1609e0013           MOV EAX,[0x13009e60]
13004955  85c0                 TEST EAX,EAX
13004957  7402                 JZ 0x1300495b
13004959  ffd0                 CALL EAX
1300495b  6810800013           PUSH 0x13008010
13004960  6808800013           PUSH 0x13008008
13004965  e826010000           CALL 0x13004a90
1300496a  83c408               ADD ESP,0x8
1300496d  6804800013           PUSH 0x13008004
13004972  6800800013           PUSH 0x13008000
13004977  e814010000           CALL 0x13004a90
1300497c  83c408               ADD ESP,0x8
1300497f  c3                   RET

; ==== FUNCTION __exit entry=13004980 sig=noreturn void __cdecl __exit(int _Code)
13004980  8b442404             MOV EAX,dword ptr [ESP + 0x4]
13004984  6a00                 PUSH 0x0
13004986  6a01                 PUSH 0x1
13004988  50                   PUSH EAX
13004989  e822000000           CALL 0x130049b0
1300498e  83c40c               ADD ESP,0xc
13004991  c3                   RET
; undefined 14 bytes at 13004992

; ==== FUNCTION FUN_130049a0 entry=130049a0 sig=undefined __stdcall FUN_130049a0(void)
130049a0  6a01                 PUSH 0x1
130049a2  6a00                 PUSH 0x0
130049a4  6a00                 PUSH 0x0
130049a6  e805000000           CALL 0x130049b0
130049ab  83c40c               ADD ESP,0xc
130049ae  c3                   RET
; undefined 1 bytes at 130049af

; ==== FUNCTION FUN_130049b0 entry=130049b0 sig=undefined __cdecl FUN_130049b0(UINT param_1, int param_2, int param_3)
130049b0  53                   PUSH EBX
130049b1  56                   PUSH ESI
130049b2  57                   PUSH EDI
130049b3  e8b8000000           CALL 0x13004a70
130049b8  833d7c83001301       CMP dword ptr [0x1300837c],0x1
130049bf  8b742410             MOV ESI,dword ptr [ESP + 0x10]
130049c3  750e                 JNZ 0x130049d3
130049c5  56                   PUSH ESI
130049c6  ff1554a10013         CALL dword ptr [0x1300a154]
130049cc  50                   PUSH EAX
130049cd  ff1550a10013         CALL dword ptr [0x1300a150]
130049d3  c7057883001301000000 MOV dword ptr [0x13008378],0x1
130049dd  837c241400           CMP dword ptr [ESP + 0x14],0x0
130049e2  8b5c2418             MOV EBX,dword ptr [ESP + 0x18]
130049e6  881d74830013         MOV byte ptr [0x13008374],BL
130049ec  753f                 JNZ 0x13004a2d
130049ee  833d5c9e001300       CMP dword ptr [0x13009e5c],0x0
130049f5  7424                 JZ 0x13004a1b
130049f7  8b3d589e0013         MOV EDI,dword ptr [0x13009e58]
130049fd  83ef04               SUB EDI,0x4
13004a00  393d5c9e0013         CMP dword ptr [0x13009e5c],EDI
13004a06  7713                 JA 0x13004a1b
13004a08  8b07                 MOV EAX,dword ptr [EDI]
13004a0a  85c0                 TEST EAX,EAX
13004a0c  7402                 JZ 0x13004a10
13004a0e  ffd0                 CALL EAX
13004a10  83ef04               SUB EDI,0x4
13004a13  393d5c9e0013         CMP dword ptr [0x13009e5c],EDI
13004a19  76ed                 JBE 0x13004a08
13004a1b  681c800013           PUSH 0x1300801c
13004a20  6814800013           PUSH 0x13008014
13004a25  e866000000           CALL 0x13004a90
13004a2a  83c408               ADD ESP,0x8
13004a2d  6824800013           PUSH 0x13008024
13004a32  6820800013           PUSH 0x13008020
13004a37  e854000000           CALL 0x13004a90
13004a3c  83c408               ADD ESP,0x8
13004a3f  85db                 TEST EBX,EBX
13004a41  7409                 JZ 0x13004a4c
13004a43  e838000000           CALL 0x13004a80
13004a48  5f                   POP EDI
13004a49  5e                   POP ESI
13004a4a  5b                   POP EBX
13004a4b  c3                   RET
13004a4c  c7057c83001301000000 MOV dword ptr [0x1300837c],0x1
13004a56  56                   PUSH ESI
13004a57  ff154ca10013         CALL dword ptr [0x1300a14c]
13004a5d  5f                   POP EDI
13004a5e  5e                   POP ESI
13004a5f  5b                   POP EBX
13004a60  c3                   RET
; undefined 15 bytes at 13004a61

; ==== FUNCTION FUN_13004a70 entry=13004a70 sig=undefined __stdcall FUN_13004a70(void)
13004a70  6a0d                 PUSH 0xd
13004a72  e8790f0000           CALL 0x130059f0
13004a77  83c404               ADD ESP,0x4
13004a7a  c3                   RET
; undefined 5 bytes at 13004a7b

; ==== FUNCTION FUN_13004a80 entry=13004a80 sig=undefined __stdcall FUN_13004a80(void)
13004a80  6a0d                 PUSH 0xd
13004a82  e8d90f0000           CALL 0x13005a60
13004a87  83c404               ADD ESP,0x4
13004a8a  c3                   RET
; undefined 5 bytes at 13004a8b

; ==== FUNCTION __initterm entry=13004a90 sig=undefined __cdecl __initterm(undefined4 * param_1, undefined4 * param_2)
13004a90  56                   PUSH ESI
13004a91  57                   PUSH EDI
13004a92  8b7c2410             MOV EDI,dword ptr [ESP + 0x10]
13004a96  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
13004a9a  3bfe                 CMP EDI,ESI
13004a9c  760f                 JBE 0x13004aad
13004a9e  8b06                 MOV EAX,dword ptr [ESI]
13004aa0  85c0                 TEST EAX,EAX
13004aa2  7402                 JZ 0x13004aa6
13004aa4  ffd0                 CALL EAX
13004aa6  83c604               ADD ESI,0x4
13004aa9  3bfe                 CMP EDI,ESI
13004aab  77f1                 JA 0x13004a9e
13004aad  5f                   POP EDI
13004aae  5e                   POP ESI
13004aaf  c3                   RET

; ==== FUNCTION __mtinit entry=13004ab0 sig=int __cdecl __mtinit(void)
13004ab0  56                   PUSH ESI
13004ab1  e89a0e0000           CALL 0x13005950
13004ab6  ff1560a10013         CALL dword ptr [0x1300a160]
13004abc  a380830013           MOV [0x13008380],EAX
13004ac1  83f8ff               CMP EAX,-0x1
13004ac4  7504                 JNZ 0x13004aca
13004ac6  33c0                 XOR EAX,EAX
13004ac8  5e                   POP ESI
13004ac9  c3                   RET
13004aca  6a74                 PUSH 0x74
13004acc  6a01                 PUSH 0x1
13004ace  e88d100000           CALL 0x13005b60
13004ad3  83c408               ADD ESP,0x8
13004ad6  8bf0                 MOV ESI,EAX
13004ad8  85f6                 TEST ESI,ESI
13004ada  7430                 JZ 0x13004b0c
13004adc  56                   PUSH ESI
13004add  a180830013           MOV EAX,[0x13008380]
13004ae2  50                   PUSH EAX
13004ae3  ff155ca10013         CALL dword ptr [0x1300a15c]
13004ae9  85c0                 TEST EAX,EAX
13004aeb  741f                 JZ 0x13004b0c
13004aed  56                   PUSH ESI
13004aee  e84d000000           CALL 0x13004b40
13004af3  83c404               ADD ESP,0x4
13004af6  ff1558a10013         CALL dword ptr [0x1300a158]
13004afc  8906                 MOV dword ptr [ESI],EAX
13004afe  b801000000           MOV EAX,0x1
13004b03  c74604ffffffff       MOV dword ptr [ESI + 0x4],0xffffffff
13004b0a  5e                   POP ESI
13004b0b  c3                   RET
13004b0c  33c0                 XOR EAX,EAX
13004b0e  5e                   POP ESI
13004b0f  c3                   RET

; ==== FUNCTION __mtterm entry=13004b10 sig=void __cdecl __mtterm(void)
13004b10  e86b0e0000           CALL 0x13005980
13004b15  a180830013           MOV EAX,[0x13008380]
13004b1a  83f8ff               CMP EAX,-0x1
13004b1d  7411                 JZ 0x13004b30
13004b1f  50                   PUSH EAX
13004b20  ff1564a10013         CALL dword ptr [0x1300a164]
13004b26  c70580830013ffffffff MOV dword ptr [0x13008380],0xffffffff
13004b30  c3                   RET
; undefined 15 bytes at 13004b31

; ==== FUNCTION __initptd entry=13004b40 sig=void __cdecl __initptd(_ptiddata _Ptd, pthreadlocinfo _Locale)
13004b40  8b442404             MOV EAX,dword ptr [ESP + 0x4]
13004b44  c7405020870013       MOV dword ptr [EAX + 0x50],0x13008720
13004b4b  c7401401000000       MOV dword ptr [EAX + 0x14],0x1
13004b52  c3                   RET
; undefined 13 bytes at 13004b53

; ==== FUNCTION __getptd entry=13004b60 sig=_ptiddata __cdecl __getptd(void)
13004b60  56                   PUSH ESI
13004b61  57                   PUSH EDI
13004b62  ff1570a10013         CALL dword ptr [0x1300a170]
13004b68  8bf0                 MOV ESI,EAX
13004b6a  a180830013           MOV EAX,[0x13008380]
13004b6f  50                   PUSH EAX
13004b70  ff156ca10013         CALL dword ptr [0x1300a16c]
13004b76  8bf8                 MOV EDI,EAX
13004b78  85ff                 TEST EDI,EDI
13004b7a  7547                 JNZ 0x13004bc3
13004b7c  6a74                 PUSH 0x74
13004b7e  6a01                 PUSH 0x1
13004b80  e8db0f0000           CALL 0x13005b60
13004b85  83c408               ADD ESP,0x8
13004b88  8bf8                 MOV EDI,EAX
13004b8a  85ff                 TEST EDI,EDI
13004b8c  742b                 JZ 0x13004bb9
13004b8e  57                   PUSH EDI
13004b8f  a180830013           MOV EAX,[0x13008380]
13004b94  50                   PUSH EAX
13004b95  ff155ca10013         CALL dword ptr [0x1300a15c]
13004b9b  85c0                 TEST EAX,EAX
13004b9d  741a                 JZ 0x13004bb9
13004b9f  57                   PUSH EDI
13004ba0  e89bffffff           CALL 0x13004b40
13004ba5  83c404               ADD ESP,0x4
13004ba8  ff1558a10013         CALL dword ptr [0x1300a158]
13004bae  8907                 MOV dword ptr [EDI],EAX
13004bb0  c74704ffffffff       MOV dword ptr [EDI + 0x4],0xffffffff
13004bb7  eb0a                 JMP 0x13004bc3
13004bb9  6a10                 PUSH 0x10
13004bbb  e850fdffff           CALL 0x13004910
13004bc0  83c404               ADD ESP,0x4
13004bc3  56                   PUSH ESI
13004bc4  ff1568a10013         CALL dword ptr [0x1300a168]
13004bca  8bc7                 MOV EAX,EDI
13004bcc  5f                   POP EDI
13004bcd  5e                   POP ESI
13004bce  c3                   RET
; undefined 1 bytes at 13004bcf

; ==== FUNCTION __freeptd entry=13004bd0 sig=void __cdecl __freeptd(_ptiddata _Ptd)
13004bd0  833d80830013ff       CMP dword ptr [0x13008380],-0x1
13004bd7  56                   PUSH ESI
13004bd8  0f8491000000         JZ 0x13004c6f
13004bde  8b742408             MOV ESI,dword ptr [ESP + 0x8]
13004be2  85f6                 TEST ESI,ESI
13004be4  7512                 JNZ 0x13004bf8
13004be6  a180830013           MOV EAX,[0x13008380]
13004beb  50                   PUSH EAX
13004bec  ff156ca10013         CALL dword ptr [0x1300a16c]
13004bf2  8bf0                 MOV ESI,EAX
13004bf4  85f6                 TEST ESI,ESI
13004bf6  7469                 JZ 0x13004c61
13004bf8  8b4624               MOV EAX,dword ptr [ESI + 0x24]
13004bfb  85c0                 TEST EAX,EAX
13004bfd  7409                 JZ 0x13004c08
13004bff  50                   PUSH EAX
13004c00  e8bb0f0000           CALL 0x13005bc0
13004c05  83c404               ADD ESP,0x4
13004c08  8b4628               MOV EAX,dword ptr [ESI + 0x28]
13004c0b  85c0                 TEST EAX,EAX
13004c0d  7409                 JZ 0x13004c18
13004c0f  50                   PUSH EAX
13004c10  e8ab0f0000           CALL 0x13005bc0
13004c15  83c404               ADD ESP,0x4
13004c18  8b4630               MOV EAX,dword ptr [ESI + 0x30]
13004c1b  85c0                 TEST EAX,EAX
13004c1d  7409                 JZ 0x13004c28
13004c1f  50                   PUSH EAX
13004c20  e89b0f0000           CALL 0x13005bc0
13004c25  83c404               ADD ESP,0x4
13004c28  8b4638               MOV EAX,dword ptr [ESI + 0x38]
13004c2b  85c0                 TEST EAX,EAX
13004c2d  7409                 JZ 0x13004c38
13004c2f  50                   PUSH EAX
13004c30  e88b0f0000           CALL 0x13005bc0
13004c35  83c404               ADD ESP,0x4
13004c38  8b4640               MOV EAX,dword ptr [ESI + 0x40]
13004c3b  85c0                 TEST EAX,EAX
13004c3d  7409                 JZ 0x13004c48
13004c3f  50                   PUSH EAX
13004c40  e87b0f0000           CALL 0x13005bc0
13004c45  83c404               ADD ESP,0x4
13004c48  8b4644               MOV EAX,dword ptr [ESI + 0x44]
13004c4b  85c0                 TEST EAX,EAX
13004c4d  7409                 JZ 0x13004c58
13004c4f  50                   PUSH EAX
13004c50  e86b0f0000           CALL 0x13005bc0
13004c55  83c404               ADD ESP,0x4
13004c58  56                   PUSH ESI
13004c59  e8620f0000           CALL 0x13005bc0
13004c5e  83c404               ADD ESP,0x4
13004c61  6a00                 PUSH 0x0
13004c63  a180830013           MOV EAX,[0x13008380]
13004c68  50                   PUSH EAX
13004c69  ff155ca10013         CALL dword ptr [0x1300a15c]
13004c6f  5e                   POP ESI
13004c70  c3                   RET
; undefined 15 bytes at 13004c71

; ==== FUNCTION FUN_13004c80 entry=13004c80 sig=undefined __stdcall FUN_13004c80(void)
13004c80  6a00                 PUSH 0x0
13004c82  6800100000           PUSH 0x1000
13004c87  6a00                 PUSH 0x0
13004c89  ff1574a10013         CALL dword ptr [0x1300a174]
13004c8f  a3549e0013           MOV [0x13009e54],EAX
13004c94  c3                   RET
; undefined 11 bytes at 13004c95

; ==== FUNCTION FUN_13004ca0 entry=13004ca0 sig=undefined __stdcall FUN_13004ca0(void)
13004ca0  a1549e0013           MOV EAX,[0x13009e54]
13004ca5  50                   PUSH EAX
13004ca6  ff1578a10013         CALL dword ptr [0x1300a178]
13004cac  c3                   RET
; undefined 3 bytes at 13004cad

; ==== FUNCTION FUN_13004cb0 entry=13004cb0 sig=undefined __stdcall FUN_13004cb0(void)
13004cb0  83ec44               SUB ESP,0x44
13004cb3  53                   PUSH EBX
13004cb4  56                   PUSH ESI
13004cb5  57                   PUSH EDI
13004cb6  55                   PUSH EBP
13004cb7  6880040000           PUSH 0x480
13004cbc  e81f0f0000           CALL 0x13005be0
13004cc1  83c404               ADD ESP,0x4
13004cc4  8bf0                 MOV ESI,EAX
13004cc6  85f6                 TEST ESI,ESI
13004cc8  750a                 JNZ 0x13004cd4
13004cca  6a1b                 PUSH 0x1b
13004ccc  e83ffcffff           CALL 0x13004910
13004cd1  83c404               ADD ESP,0x4
13004cd4  8d8680040000         LEA EAX,[ESI + 0x480]
13004cda  8935509d0013         MOV dword ptr [0x13009d50],ESI
13004ce0  c705509e001320000000 MOV dword ptr [0x13009e50],0x20
13004cea  3bc6                 CMP EAX,ESI
13004cec  7628                 JBE 0x13004d16
13004cee  33c9                 XOR ECX,ECX
13004cf0  ba0a000000           MOV EDX,0xa
13004cf5  884e04               MOV byte ptr [ESI + 0x4],CL
13004cf8  83c624               ADD ESI,0x24
13004cfb  c746dcffffffff       MOV dword ptr [ESI + -0x24],0xffffffff
13004d02  8856e1               MOV byte ptr [ESI + -0x1f],DL
13004d05  894ee4               MOV dword ptr [ESI + -0x1c],ECX
13004d08  a1509d0013           MOV EAX,[0x13009d50]
13004d0d  0580040000           ADD EAX,0x480
13004d12  3bc6                 CMP EAX,ESI
13004d14  77df                 JA 0x13004cf5
13004d16  8d442410             LEA EAX,[ESP + 0x10]
13004d1a  50                   PUSH EAX
13004d1b  ff1528a10013         CALL dword ptr [0x1300a128]
13004d21  66837c244200         CMP word ptr [ESP + 0x42],0x0
13004d27  0f84d4000000         JZ 0x13004e01
13004d2d  837c244400           CMP dword ptr [ESP + 0x44],0x0
13004d32  0f84c9000000         JZ 0x13004e01
13004d38  8b442444             MOV EAX,dword ptr [ESP + 0x44]
13004d3c  8b28                 MOV EBP,dword ptr [EAX]
13004d3e  8d7804               LEA EDI,[EAX + 0x4]
13004d41  81fd00080000         CMP EBP,0x800
13004d47  8d1c2f               LEA EBX,[EDI + EBP*0x1]
13004d4a  7c05                 JL 0x13004d51
13004d4c  bd00080000           MOV EBP,0x800
13004d51  3b2d509e0013         CMP EBP,dword ptr [0x13009e50]
13004d57  7e5e                 JLE 0x13004db7
13004d59  be549d0013           MOV ESI,0x13009d54
13004d5e  6880040000           PUSH 0x480
13004d63  e8780e0000           CALL 0x13005be0
13004d68  83c404               ADD ESP,0x4
13004d6b  85c0                 TEST EAX,EAX
13004d6d  7442                 JZ 0x13004db1
13004d6f  8d8880040000         LEA ECX,[EAX + 0x480]
13004d75  8906                 MOV dword ptr [ESI],EAX
13004d77  8305509e001320       ADD dword ptr [0x13009e50],0x20
13004d7e  3bc8                 CMP ECX,EAX
13004d80  7622                 JBE 0x13004da4
13004d82  33c9                 XOR ECX,ECX
13004d84  884804               MOV byte ptr [EAX + 0x4],CL
13004d87  83c024               ADD EAX,0x24
13004d8a  c740dcffffffff       MOV dword ptr [EAX + -0x24],0xffffffff
13004d91  c640e10a             MOV byte ptr [EAX + -0x1f],0xa
13004d95  8948e4               MOV dword ptr [EAX + -0x1c],ECX
13004d98  8b16                 MOV EDX,dword ptr [ESI]
13004d9a  81c280040000         ADD EDX,0x480
13004da0  3bd0                 CMP EDX,EAX
13004da2  77e0                 JA 0x13004d84
13004da4  83c604               ADD ESI,0x4
13004da7  3b2d509e0013         CMP EBP,dword ptr [0x13009e50]
13004dad  7faf                 JG 0x13004d5e
13004daf  eb06                 JMP 0x13004db7
13004db1  8b2d509e0013         MOV EBP,dword ptr [0x13009e50]
13004db7  33f6                 XOR ESI,ESI
13004db9  85ed                 TEST EBP,EBP
13004dbb  7e44                 JLE 0x13004e01
13004dbd  8b03                 MOV EAX,dword ptr [EBX]
13004dbf  83f8ff               CMP EAX,-0x1
13004dc2  7434                 JZ 0x13004df8
13004dc4  f60701               TEST byte ptr [EDI],0x1
13004dc7  742f                 JZ 0x13004df8
13004dc9  50                   PUSH EAX
13004dca  ff1524a10013         CALL dword ptr [0x1300a124]
13004dd0  85c0                 TEST EAX,EAX
13004dd2  7424                 JZ 0x13004df8
13004dd4  8bc6                 MOV EAX,ESI
13004dd6  8bce                 MOV ECX,ESI
13004dd8  83e0e7               AND EAX,0xffffffe7
13004ddb  83e11f               AND ECX,0x1f
13004dde  c1f803               SAR EAX,0x3
13004de1  c1e102               SHL ECX,0x2
13004de4  8b90509d0013         MOV EDX,dword ptr [EAX + 0x13009d50]
13004dea  8b03                 MOV EAX,dword ptr [EBX]
13004dec  8d0cc9               LEA ECX,[ECX + ECX*0x8]
13004def  03ca                 ADD ECX,EDX
13004df1  8901                 MOV dword ptr [ECX],EAX
13004df3  8a17                 MOV DL,byte ptr [EDI]
13004df5  885104               MOV byte ptr [ECX + 0x4],DL
13004df8  46                   INC ESI
13004df9  47                   INC EDI
13004dfa  83c304               ADD EBX,0x4
13004dfd  3bee                 CMP EBP,ESI
13004dff  7fbc                 JG 0x13004dbd
13004e01  33f6                 XOR ESI,ESI
13004e03  33ff                 XOR EDI,EDI
13004e05  8b1d509d0013         MOV EBX,dword ptr [0x13009d50]
13004e0b  03de                 ADD EBX,ESI
13004e0d  833bff               CMP dword ptr [EBX],-0x1
13004e10  7557                 JNZ 0x13004e69
13004e12  b8f6ffffff           MOV EAX,0xfffffff6
13004e17  85f6                 TEST ESI,ESI
13004e19  c6430481             MOV byte ptr [EBX + 0x4],0x81
13004e1d  740e                 JZ 0x13004e2d
13004e1f  8d47ff               LEA EAX,[EDI + -0x1]
13004e22  83f801               CMP EAX,0x1
13004e25  b8f5ffffff           MOV EAX,0xfffffff5
13004e2a  83d0ff               ADC EAX,-0x1
13004e2d  50                   PUSH EAX
13004e2e  ff152ca10013         CALL dword ptr [0x1300a12c]
13004e34  83f8ff               CMP EAX,-0x1
13004e37  8be8                 MOV EBP,EAX
13004e39  7428                 JZ 0x13004e63
13004e3b  55                   PUSH EBP
13004e3c  ff1524a10013         CALL dword ptr [0x1300a124]
13004e42  85c0                 TEST EAX,EAX
13004e44  741d                 JZ 0x13004e63
13004e46  25ff000000           AND EAX,0xff
13004e4b  892b                 MOV dword ptr [EBX],EBP
13004e4d  83f802               CMP EAX,0x2
13004e50  7506                 JNZ 0x13004e58
13004e52  804b0440             OR byte ptr [EBX + 0x4],0x40
13004e56  eb15                 JMP 0x13004e6d
13004e58  83f803               CMP EAX,0x3
13004e5b  7510                 JNZ 0x13004e6d
13004e5d  804b0408             OR byte ptr [EBX + 0x4],0x8
13004e61  eb0a                 JMP 0x13004e6d
13004e63  804b0440             OR byte ptr [EBX + 0x4],0x40
13004e67  eb04                 JMP 0x13004e6d
13004e69  804b0480             OR byte ptr [EBX + 0x4],0x80
13004e6d  83c624               ADD ESI,0x24
13004e70  47                   INC EDI
13004e71  83fe6c               CMP ESI,0x6c
13004e74  7c8f                 JL 0x13004e05
13004e76  a1509e0013           MOV EAX,[0x13009e50]
13004e7b  50                   PUSH EAX
13004e7c  ff157ca10013         CALL dword ptr [0x1300a17c]
13004e82  5d                   POP EBP
13004e83  5f                   POP EDI
13004e84  5e                   POP ESI
13004e85  5b                   POP EBX
13004e86  83c444               ADD ESP,0x44
13004e89  c3                   RET
; undefined 6 bytes at 13004e8a

; ==== FUNCTION __ioterm entry=13004e90 sig=void __cdecl __ioterm(void)
13004e90  53                   PUSH EBX
13004e91  56                   PUSH ESI
13004e92  57                   PUSH EDI
13004e93  be509d0013           MOV ESI,0x13009d50
13004e98  55                   PUSH EBP
13004e99  8b3d8ca10013         MOV EDI,dword ptr [0x1300a18c]
13004e9f  8b1e                 MOV EBX,dword ptr [ESI]
13004ea1  85db                 TEST EBX,EBX
13004ea3  7430                 JZ 0x13004ed5
13004ea5  8d8380040000         LEA EAX,[EBX + 0x480]
13004eab  3bc3                 CMP EAX,EBX
13004ead  761b                 JBE 0x13004eca
13004eaf  33ed                 XOR EBP,EBP
13004eb1  396b08               CMP dword ptr [EBX + 0x8],EBP
13004eb4  7406                 JZ 0x13004ebc
13004eb6  8d430c               LEA EAX,[EBX + 0xc]
13004eb9  50                   PUSH EAX
13004eba  ffd7                 CALL EDI
13004ebc  83c324               ADD EBX,0x24
13004ebf  8b06                 MOV EAX,dword ptr [ESI]
13004ec1  0580040000           ADD EAX,0x480
13004ec6  3bc3                 CMP EAX,EBX
13004ec8  77e7                 JA 0x13004eb1
13004eca  8b06                 MOV EAX,dword ptr [ESI]
13004ecc  50                   PUSH EAX
13004ecd  e8ee0c0000           CALL 0x13005bc0
13004ed2  83c404               ADD ESP,0x4
13004ed5  83c604               ADD ESI,0x4
13004ed8  81fe509e0013         CMP ESI,0x13009e50
13004ede  72bf                 JC 0x13004e9f
13004ee0  5d                   POP EBP
13004ee1  5f                   POP EDI
13004ee2  5e                   POP ESI
13004ee3  5b                   POP EBX
13004ee4  c3                   RET
; undefined 11 bytes at 13004ee5

; ==== FUNCTION FUN_13004ef0 entry=13004ef0 sig=undefined __stdcall FUN_13004ef0(void)
13004ef0  83ec04               SUB ESP,0x4
13004ef3  33d2                 XOR EDX,EDX
13004ef5  53                   PUSH EBX
13004ef6  56                   PUSH ESI
13004ef7  57                   PUSH EDI
13004ef8  8b3528830013         MOV ESI,dword ptr [0x13008328]
13004efe  55                   PUSH EBP
13004eff  8bc6                 MOV EAX,ESI
13004f01  3816                 CMP byte ptr [ESI],DL
13004f03  741a                 JZ 0x13004f1f
13004f05  803e3d               CMP byte ptr [ESI],0x3d
13004f08  7401                 JZ 0x13004f0b
13004f0a  42                   INC EDX
13004f0b  8bfe                 MOV EDI,ESI
13004f0d  b9ffffffff           MOV ECX,0xffffffff
13004f12  2bc0                 SUB EAX,EAX
13004f14  f2ae                 SCASB.REPNE ES:EDI
13004f16  f7d1                 NOT ECX
13004f18  03f1                 ADD ESI,ECX
13004f1a  803e00               CMP byte ptr [ESI],0x0
13004f1d  75e6                 JNZ 0x13004f05
13004f1f  8d049504000000       LEA EAX,[EDX*0x4 + 0x4]
13004f26  50                   PUSH EAX
13004f27  e8b40c0000           CALL 0x13005be0
13004f2c  a35c830013           MOV [0x1300835c],EAX
13004f31  83c404               ADD ESP,0x4
13004f34  8bd8                 MOV EBX,EAX
13004f36  85db                 TEST EBX,EBX
13004f38  750a                 JNZ 0x13004f44
13004f3a  6a09                 PUSH 0x9
13004f3c  e8cff9ffff           CALL 0x13004910
13004f41  83c404               ADD ESP,0x4
13004f44  8b2d28830013         MOV EBP,dword ptr [0x13008328]
13004f4a  8bc5                 MOV EAX,EBP
13004f4c  807d0000             CMP byte ptr [EBP],0x0
13004f50  745e                 JZ 0x13004fb0
13004f52  8bfd                 MOV EDI,EBP
13004f54  b9ffffffff           MOV ECX,0xffffffff
13004f59  2bc0                 SUB EAX,EAX
13004f5b  f2ae                 SCASB.REPNE ES:EDI
13004f5d  f7d1                 NOT ECX
13004f5f  894c2410             MOV dword ptr [ESP + 0x10],ECX
13004f63  807d003d             CMP byte ptr [EBP],0x3d
13004f67  743d                 JZ 0x13004fa6
13004f69  51                   PUSH ECX
13004f6a  e8710c0000           CALL 0x13005be0
13004f6f  83c404               ADD ESP,0x4
13004f72  8903                 MOV dword ptr [EBX],EAX
13004f74  85c0                 TEST EAX,EAX
13004f76  750a                 JNZ 0x13004f82
13004f78  6a09                 PUSH 0x9
13004f7a  e891f9ffff           CALL 0x13004910
13004f7f  83c404               ADD ESP,0x4
13004f82  8bfd                 MOV EDI,EBP
13004f84  b9ffffffff           MOV ECX,0xffffffff
13004f89  2bc0                 SUB EAX,EAX
13004f8b  f2ae                 SCASB.REPNE ES:EDI
13004f8d  f7d1                 NOT ECX
13004f8f  2bf9                 SUB EDI,ECX
13004f91  8bc1                 MOV EAX,ECX
13004f93  c1e902               SHR ECX,0x2
13004f96  8bf7                 MOV ESI,EDI
13004f98  8b3b                 MOV EDI,dword ptr [EBX]
13004f9a  83c304               ADD EBX,0x4
13004f9d  f3a5                 MOVSD.REP ES:EDI,ESI
13004f9f  8bc8                 MOV ECX,EAX
13004fa1  83e103               AND ECX,0x3
13004fa4  f3a4                 MOVSB.REP ES:EDI,ESI
13004fa6  036c2410             ADD EBP,dword ptr [ESP + 0x10]
13004faa  807d0000             CMP byte ptr [EBP],0x0
13004fae  75a2                 JNZ 0x13004f52
13004fb0  a128830013           MOV EAX,[0x13008328]
13004fb5  50                   PUSH EAX
13004fb6  e8050c0000           CALL 0x13005bc0
13004fbb  83c404               ADD ESP,0x4
13004fbe  c70300000000         MOV dword ptr [EBX],0x0
13004fc4  5d                   POP EBP
13004fc5  5f                   POP EDI
13004fc6  5e                   POP ESI
13004fc7  5b                   POP EBX
13004fc8  83c404               ADD ESP,0x4
13004fcb  c3                   RET
; undefined 4 bytes at 13004fcc

; ==== FUNCTION __setargv entry=13004fd0 sig=int __cdecl __setargv(void)
13004fd0  83ec08               SUB ESP,0x8
13004fd3  56                   PUSH ESI
13004fd4  57                   PUSH EDI
13004fd5  6804010000           PUSH 0x104
13004fda  bec08b0013           MOV ESI,0x13008bc0
13004fdf  56                   PUSH ESI
13004fe0  6a00                 PUSH 0x0
13004fe2  ff1590a10013         CALL dword ptr [0x1300a190]
13004fe8  a1649e0013           MOV EAX,[0x13009e64]
13004fed  89356c830013         MOV dword ptr [0x1300836c],ESI
13004ff3  803800               CMP byte ptr [EAX],0x0
13004ff6  7406                 JZ 0x13004ffe
13004ff8  8b35649e0013         MOV ESI,dword ptr [0x13009e64]
13004ffe  8d44240c             LEA EAX,[ESP + 0xc]
13005002  8d4c2408             LEA ECX,[ESP + 0x8]
13005006  50                   PUSH EAX
13005007  51                   PUSH ECX
13005008  6a00                 PUSH 0x0
1300500a  6a00                 PUSH 0x0
1300500c  56                   PUSH ESI
1300500d  e85e000000           CALL 0x13005070
13005012  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
13005016  83c414               ADD ESP,0x14
13005019  c1e002               SHL EAX,0x2
1300501c  0344240c             ADD EAX,dword ptr [ESP + 0xc]
13005020  50                   PUSH EAX
13005021  e8ba0b0000           CALL 0x13005be0
13005026  83c404               ADD ESP,0x4
13005029  8bf8                 MOV EDI,EAX
1300502b  85ff                 TEST EDI,EDI
1300502d  750a                 JNZ 0x13005039
1300502f  6a08                 PUSH 0x8
13005031  e8daf8ffff           CALL 0x13004910
13005036  83c404               ADD ESP,0x4
13005039  8d44240c             LEA EAX,[ESP + 0xc]
1300503d  8d4c2408             LEA ECX,[ESP + 0x8]
13005041  8b542408             MOV EDX,dword ptr [ESP + 0x8]
13005045  50                   PUSH EAX
13005046  51                   PUSH ECX
13005047  8d0497               LEA EAX,[EDI + EDX*0x4]
1300504a  50                   PUSH EAX
1300504b  57                   PUSH EDI
1300504c  56                   PUSH ESI
1300504d  e81e000000           CALL 0x13005070
13005052  8b44241c             MOV EAX,dword ptr [ESP + 0x1c]
13005056  83c414               ADD ESP,0x14
13005059  48                   DEC EAX
1300505a  893d54830013         MOV dword ptr [0x13008354],EDI
13005060  5f                   POP EDI
13005061  a350830013           MOV [0x13008350],EAX
13005066  5e                   POP ESI
13005067  83c408               ADD ESP,0x8
1300506a  c3                   RET
; undefined 5 bytes at 1300506b

; ==== FUNCTION FUN_13005070 entry=13005070 sig=undefined __cdecl FUN_13005070(byte * param_1, undefined4 * param_2, byte * param_3, int * param_4, int * param_5)
13005070  8b442414             MOV EAX,dword ptr [ESP + 0x14]
13005074  53                   PUSH EBX
13005075  8b542414             MOV EDX,dword ptr [ESP + 0x14]
13005079  56                   PUSH ESI
1300507a  8b4c240c             MOV ECX,dword ptr [ESP + 0xc]
1300507e  57                   PUSH EDI
1300507f  8b7c2418             MOV EDI,dword ptr [ESP + 0x18]
13005083  55                   PUSH EBP
13005084  837c241800           CMP dword ptr [ESP + 0x18],0x0
13005089  c70000000000         MOV dword ptr [EAX],0x0
1300508f  c70201000000         MOV dword ptr [EDX],0x1
13005095  740b                 JZ 0x130050a2
13005097  8b542418             MOV EDX,dword ptr [ESP + 0x18]
1300509b  8344241804           ADD dword ptr [ESP + 0x18],0x4
130050a0  893a                 MOV dword ptr [EDX],EDI
130050a2  803922               CMP byte ptr [ECX],0x22
130050a5  7446                 JZ 0x130050ed
130050a7  ff00                 INC dword ptr [EAX]
130050a9  85ff                 TEST EDI,EDI
130050ab  7405                 JZ 0x130050b2
130050ad  8a11                 MOV DL,byte ptr [ECX]
130050af  8817                 MOV byte ptr [EDI],DL
130050b1  47                   INC EDI
130050b2  8a11                 MOV DL,byte ptr [ECX]
130050b4  41                   INC ECX
130050b5  33db                 XOR EBX,EBX
130050b7  8ada                 MOV BL,DL
130050b9  f683b183001304       TEST byte ptr [EBX + 0x130083b1],0x4
130050c0  740c                 JZ 0x130050ce
130050c2  ff00                 INC dword ptr [EAX]
130050c4  85ff                 TEST EDI,EDI
130050c6  7405                 JZ 0x130050cd
130050c8  8a19                 MOV BL,byte ptr [ECX]
130050ca  881f                 MOV byte ptr [EDI],BL
130050cc  47                   INC EDI
130050cd  41                   INC ECX
130050ce  80fa20               CMP DL,0x20
130050d1  7409                 JZ 0x130050dc
130050d3  84d2                 TEST DL,DL
130050d5  7409                 JZ 0x130050e0
130050d7  80fa09               CMP DL,0x9
130050da  75cb                 JNZ 0x130050a7
130050dc  84d2                 TEST DL,DL
130050de  7503                 JNZ 0x130050e3
130050e0  49                   DEC ECX
130050e1  eb50                 JMP 0x13005133
130050e3  85ff                 TEST EDI,EDI
130050e5  744c                 JZ 0x13005133
130050e7  c647ff00             MOV byte ptr [EDI + -0x1],0x0
130050eb  eb46                 JMP 0x13005133
130050ed  41                   INC ECX
130050ee  803922               CMP byte ptr [ECX],0x22
130050f1  7430                 JZ 0x13005123
130050f3  8a19                 MOV BL,byte ptr [ECX]
130050f5  84db                 TEST BL,BL
130050f7  742a                 JZ 0x13005123
130050f9  33d2                 XOR EDX,EDX
130050fb  8ad3                 MOV DL,BL
130050fd  f682b183001304       TEST byte ptr [EDX + 0x130083b1],0x4
13005104  740c                 JZ 0x13005112
13005106  ff00                 INC dword ptr [EAX]
13005108  85ff                 TEST EDI,EDI
1300510a  7406                 JZ 0x13005112
1300510c  8a11                 MOV DL,byte ptr [ECX]
1300510e  41                   INC ECX
1300510f  8817                 MOV byte ptr [EDI],DL
13005111  47                   INC EDI
13005112  ff00                 INC dword ptr [EAX]
13005114  85ff                 TEST EDI,EDI
13005116  7405                 JZ 0x1300511d
13005118  8a11                 MOV DL,byte ptr [ECX]
1300511a  8817                 MOV byte ptr [EDI],DL
1300511c  47                   INC EDI
1300511d  41                   INC ECX
1300511e  803922               CMP byte ptr [ECX],0x22
13005121  75d0                 JNZ 0x130050f3
13005123  ff00                 INC dword ptr [EAX]
13005125  85ff                 TEST EDI,EDI
13005127  7404                 JZ 0x1300512d
13005129  c60700               MOV byte ptr [EDI],0x0
1300512c  47                   INC EDI
1300512d  803922               CMP byte ptr [ECX],0x22
13005130  7501                 JNZ 0x13005133
13005132  41                   INC ECX
13005133  33f6                 XOR ESI,ESI
13005135  803900               CMP byte ptr [ECX],0x0
13005138  0f84e6000000         JZ 0x13005224
1300513e  8a11                 MOV DL,byte ptr [ECX]
13005140  80fa20               CMP DL,0x20
13005143  7405                 JZ 0x1300514a
13005145  80fa09               CMP DL,0x9
13005148  7503                 JNZ 0x1300514d
1300514a  41                   INC ECX
1300514b  ebf1                 JMP 0x1300513e
1300514d  803900               CMP byte ptr [ECX],0x0
13005150  0f84ce000000         JZ 0x13005224
13005156  837c241800           CMP dword ptr [ESP + 0x18],0x0
1300515b  740b                 JZ 0x13005168
1300515d  8b542418             MOV EDX,dword ptr [ESP + 0x18]
13005161  8344241804           ADD dword ptr [ESP + 0x18],0x4
13005166  893a                 MOV dword ptr [EDX],EDI
13005168  8b542420             MOV EDX,dword ptr [ESP + 0x20]
1300516c  ff02                 INC dword ptr [EDX]
1300516e  bb01000000           MOV EBX,0x1
13005173  33d2                 XOR EDX,EDX
13005175  80395c               CMP byte ptr [ECX],0x5c
13005178  7507                 JNZ 0x13005181
1300517a  41                   INC ECX
1300517b  42                   INC EDX
1300517c  80395c               CMP byte ptr [ECX],0x5c
1300517f  74f9                 JZ 0x1300517a
13005181  803922               CMP byte ptr [ECX],0x22
13005184  7522                 JNZ 0x130051a8
13005186  f6c201               TEST DL,0x1
13005189  751a                 JNZ 0x130051a5
1300518b  85f6                 TEST ESI,ESI
1300518d  740d                 JZ 0x1300519c
1300518f  8d6901               LEA EBP,[ECX + 0x1]
13005192  807d0022             CMP byte ptr [EBP],0x22
13005196  7504                 JNZ 0x1300519c
13005198  8bcd                 MOV ECX,EBP
1300519a  eb02                 JMP 0x1300519e
1300519c  33db                 XOR EBX,EBX
1300519e  83fe01               CMP ESI,0x1
130051a1  1bf6                 SBB ESI,ESI
130051a3  f7de                 NEG ESI
130051a5  c1ea01               SHR EDX,0x1
130051a8  8bea                 MOV EBP,EDX
130051aa  4a                   DEC EDX
130051ab  85ed                 TEST EBP,EBP
130051ad  7411                 JZ 0x130051c0
130051af  85ff                 TEST EDI,EDI
130051b1  7404                 JZ 0x130051b7
130051b3  c6075c               MOV byte ptr [EDI],0x5c
130051b6  47                   INC EDI
130051b7  8bea                 MOV EBP,EDX
130051b9  ff00                 INC dword ptr [EAX]
130051bb  4a                   DEC EDX
130051bc  85ed                 TEST EBP,EBP
130051be  75ef                 JNZ 0x130051af
130051c0  8a11                 MOV DL,byte ptr [ECX]
130051c2  84d2                 TEST DL,DL
130051c4  744f                 JZ 0x13005215
130051c6  85f6                 TEST ESI,ESI
130051c8  750a                 JNZ 0x130051d4
130051ca  80fa20               CMP DL,0x20
130051cd  7446                 JZ 0x13005215
130051cf  80fa09               CMP DL,0x9
130051d2  7441                 JZ 0x13005215
130051d4  85db                 TEST EBX,EBX
130051d6  7437                 JZ 0x1300520f
130051d8  85ff                 TEST EDI,EDI
130051da  7421                 JZ 0x130051fd
130051dc  33db                 XOR EBX,EBX
130051de  8ada                 MOV BL,DL
130051e0  f683b183001304       TEST byte ptr [EBX + 0x130083b1],0x4
130051e7  7406                 JZ 0x130051ef
130051e9  8817                 MOV byte ptr [EDI],DL
130051eb  41                   INC ECX
130051ec  47                   INC EDI
130051ed  ff00                 INC dword ptr [EAX]
130051ef  8a11                 MOV DL,byte ptr [ECX]
130051f1  47                   INC EDI
130051f2  41                   INC ECX
130051f3  8857ff               MOV byte ptr [EDI + -0x1],DL
130051f6  ff00                 INC dword ptr [EAX]
130051f8  e971ffffff           JMP 0x1300516e
130051fd  33db                 XOR EBX,EBX
130051ff  8ada                 MOV BL,DL
13005201  f683b183001304       TEST byte ptr [EBX + 0x130083b1],0x4
13005208  7403                 JZ 0x1300520d
1300520a  41                   INC ECX
1300520b  ff00                 INC dword ptr [EAX]
1300520d  ff00                 INC dword ptr [EAX]
1300520f  41                   INC ECX
13005210  e959ffffff           JMP 0x1300516e
13005215  85ff                 TEST EDI,EDI
13005217  7404                 JZ 0x1300521d
13005219  c60700               MOV byte ptr [EDI],0x0
1300521c  47                   INC EDI
1300521d  ff00                 INC dword ptr [EAX]
1300521f  e911ffffff           JMP 0x13005135
13005224  837c241800           CMP dword ptr [ESP + 0x18],0x0
13005229  740a                 JZ 0x13005235
1300522b  8b542418             MOV EDX,dword ptr [ESP + 0x18]
1300522f  c70200000000         MOV dword ptr [EDX],0x0
13005235  8b542420             MOV EDX,dword ptr [ESP + 0x20]
13005239  5d                   POP EBP
1300523a  5f                   POP EDI
1300523b  5e                   POP ESI
1300523c  5b                   POP EBX
1300523d  ff02                 INC dword ptr [EDX]
1300523f  c3                   RET

; ==== FUNCTION __setmbcp entry=13005240 sig=int __cdecl __setmbcp(int _CodePage)
13005240  83ec18               SUB ESP,0x18
13005243  53                   PUSH EBX
13005244  56                   PUSH ESI
13005245  57                   PUSH EDI
13005246  55                   PUSH EBP
13005247  6a19                 PUSH 0x19
13005249  e8a2070000           CALL 0x130059f0
1300524e  8b442430             MOV EAX,dword ptr [ESP + 0x30]
13005252  83c404               ADD ESP,0x4
13005255  50                   PUSH EAX
13005256  e815020000           CALL 0x13005470
1300525b  83c404               ADD ESP,0x4
1300525e  8be8                 MOV EBP,EAX
13005260  392db4840013         CMP dword ptr [0x130084b4],EBP
13005266  7514                 JNZ 0x1300527c
13005268  6a19                 PUSH 0x19
1300526a  e8f1070000           CALL 0x13005a60
1300526f  83c404               ADD ESP,0x4
13005272  33c0                 XOR EAX,EAX
13005274  5d                   POP EBP
13005275  5f                   POP EDI
13005276  5e                   POP ESI
13005277  5b                   POP EBX
13005278  83c418               ADD ESP,0x18
1300527b  c3                   RET
1300527c  85ed                 TEST EBP,EBP
1300527e  7519                 JNZ 0x13005299
13005280  e89b020000           CALL 0x13005520
13005285  6a19                 PUSH 0x19
13005287  e8d4070000           CALL 0x13005a60
1300528c  83c404               ADD ESP,0x4
1300528f  33c0                 XOR EAX,EAX
13005291  5d                   POP EBP
13005292  5f                   POP EDI
13005293  5e                   POP ESI
13005294  5b                   POP EBX
13005295  83c418               ADD ESP,0x18
13005298  c3                   RET
13005299  c744241000000000     MOV dword ptr [ESP + 0x10],0x0
130052a1  b8d8840013           MOV EAX,0x130084d8
130052a6  3928                 CMP dword ptr [EAX],EBP
130052a8  0f849b000000         JZ 0x13005349
130052ae  83c030               ADD EAX,0x30
130052b1  ff442410             INC dword ptr [ESP + 0x10]
130052b5  3dc8850013           CMP EAX,0x130085c8
130052ba  72ea                 JC 0x130052a6
130052bc  8d442414             LEA EAX,[ESP + 0x14]
130052c0  50                   PUSH EAX
130052c1  55                   PUSH EBP
130052c2  ff1594a10013         CALL dword ptr [0x1300a194]
130052c8  83f801               CMP EAX,0x1
130052cb  0f8559010000         JNZ 0x1300542a
130052d1  bfb0830013           MOV EDI,0x130083b0
130052d6  33c0                 XOR EAX,EAX
130052d8  b940000000           MOV ECX,0x40
130052dd  f3ab                 STOSD.REP ES:EDI
130052df  aa                   STOSB ES:EDI
130052e0  837c241401           CMP dword ptr [ESP + 0x14],0x1
130052e5  0f8610010000         JBE 0x130053fb
130052eb  8d74241a             LEA ESI,[ESP + 0x1a]
130052ef  3844241a             CMP byte ptr [ESP + 0x1a],AL
130052f3  742c                 JZ 0x13005321
130052f5  8a4e01               MOV CL,byte ptr [ESI + 0x1]
130052f8  84c9                 TEST CL,CL
130052fa  7425                 JZ 0x13005321
130052fc  33c0                 XOR EAX,EAX
130052fe  33d2                 XOR EDX,EDX
13005300  8a06                 MOV AL,byte ptr [ESI]
13005302  8ad1                 MOV DL,CL
13005304  3bd0                 CMP EDX,EAX
13005306  7211                 JC 0x13005319
13005308  8088b183001304       OR byte ptr [EAX + 0x130083b1],0x4
1300530f  40                   INC EAX
13005310  33c9                 XOR ECX,ECX
13005312  8a4e01               MOV CL,byte ptr [ESI + 0x1]
13005315  3bc8                 CMP ECX,EAX
13005317  73ef                 JNC 0x13005308
13005319  83c602               ADD ESI,0x2
1300531c  803e00               CMP byte ptr [ESI],0x0
1300531f  75d4                 JNZ 0x130052f5
13005321  b801000000           MOV EAX,0x1
13005326  8088b183001308       OR byte ptr [EAX + 0x130083b1],0x8
1300532d  40                   INC EAX
1300532e  3dff000000           CMP EAX,0xff
13005333  72f1                 JC 0x13005326
13005335  55                   PUSH EBP
13005336  892db4840013         MOV dword ptr [0x130084b4],EBP
1300533c  e87f010000           CALL 0x130054c0
13005341  83c404               ADD ESP,0x4
13005344  e9b9000000           JMP 0x13005402
13005349  bfb0830013           MOV EDI,0x130083b0
1300534e  33c0                 XOR EAX,EAX
13005350  b940000000           MOV ECX,0x40
13005355  f3ab                 STOSD.REP ES:EDI
13005357  aa                   STOSB ES:EDI
13005358  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
1300535c  8d1449               LEA EDX,[ECX + ECX*0x2]
1300535f  8d3c5500000000       LEA EDI,[EDX*0x2 + 0x0]
13005366  8d0c07               LEA ECX,[EDI + EAX*0x1]
13005369  8d34cde8840013       LEA ESI,[ECX*0x8 + 0x130084e8]
13005370  803e00               CMP byte ptr [ESI],0x0
13005373  7431                 JZ 0x130053a6
13005375  8a4e01               MOV CL,byte ptr [ESI + 0x1]
13005378  84c9                 TEST CL,CL
1300537a  742a                 JZ 0x130053a6
1300537c  33d2                 XOR EDX,EDX
1300537e  33db                 XOR EBX,EBX
13005380  8a16                 MOV DL,byte ptr [ESI]
13005382  8ad9                 MOV BL,CL
13005384  3bda                 CMP EBX,EDX
13005386  7216                 JC 0x1300539e
13005388  8a88d0840013         MOV CL,byte ptr [EAX + 0x130084d0]
1300538e  088ab1830013         OR byte ptr [EDX + 0x130083b1],CL
13005394  42                   INC EDX
13005395  33db                 XOR EBX,EBX
13005397  8a5e01               MOV BL,byte ptr [ESI + 0x1]
1300539a  3bda                 CMP EBX,EDX
1300539c  73f0                 JNC 0x1300538e
1300539e  83c602               ADD ESI,0x2
130053a1  803e00               CMP byte ptr [ESI],0x0
130053a4  75cf                 JNZ 0x13005375
130053a6  40                   INC EAX
130053a7  83f804               CMP EAX,0x4
130053aa  72ba                 JC 0x13005366
130053ac  55                   PUSH EBP
130053ad  892db4840013         MOV dword ptr [0x130084b4],EBP
130053b3  e808010000           CALL 0x130054c0
130053b8  83c404               ADD ESP,0x4
130053bb  bac0840013           MOV EDX,0x130084c0
130053c0  a3b8840013           MOV [0x130084b8],EAX
130053c5  8b442410             MOV EAX,dword ptr [ESP + 0x10]
130053c9  c1e004               SHL EAX,0x4
130053cc  8b9c40e0840013       MOV EBX,dword ptr [EAX + EAX*0x2 + 0x130084e0]
130053d3  6a19                 PUSH 0x19
130053d5  8d8c40dc840013       LEA ECX,[EAX + EAX*0x2 + 0x130084dc]
130053dc  8b01                 MOV EAX,dword ptr [ECX]
130053de  8b4908               MOV ECX,dword ptr [ECX + 0x8]
130053e1  8902                 MOV dword ptr [EDX],EAX
130053e3  895a04               MOV dword ptr [EDX + 0x4],EBX
130053e6  894a08               MOV dword ptr [EDX + 0x8],ECX
130053e9  e872060000           CALL 0x13005a60
130053ee  83c404               ADD ESP,0x4
130053f1  33c0                 XOR EAX,EAX
130053f3  5d                   POP EBP
130053f4  5f                   POP EDI
130053f5  5e                   POP ESI
130053f6  5b                   POP EBX
130053f7  83c418               ADD ESP,0x18
130053fa  c3                   RET
130053fb  33c0                 XOR EAX,EAX
130053fd  a3b4840013           MOV [0x130084b4],EAX
13005402  b9c0840013           MOV ECX,0x130084c0
13005407  6a19                 PUSH 0x19
13005409  a3b8840013           MOV [0x130084b8],EAX
1300540e  33c0                 XOR EAX,EAX
13005410  8901                 MOV dword ptr [ECX],EAX
13005412  894104               MOV dword ptr [ECX + 0x4],EAX
13005415  894108               MOV dword ptr [ECX + 0x8],EAX
13005418  e843060000           CALL 0x13005a60
1300541d  83c404               ADD ESP,0x4
13005420  33c0                 XOR EAX,EAX
13005422  5d                   POP EBP
13005423  5f                   POP EDI
13005424  5e                   POP ESI
13005425  5b                   POP EBX
13005426  83c418               ADD ESP,0x18
13005429  c3                   RET
1300542a  833dcc84001300       CMP dword ptr [0x130084cc],0x0
13005431  7419                 JZ 0x1300544c
13005433  e8e8000000           CALL 0x13005520
13005438  6a19                 PUSH 0x19
1300543a  e821060000           CALL 0x13005a60
1300543f  83c404               ADD ESP,0x4
13005442  33c0                 XOR EAX,EAX
13005444  5d                   POP EBP
13005445  5f                   POP EDI
13005446  5e                   POP ESI
13005447  5b                   POP EBX
13005448  83c418               ADD ESP,0x18
1300544b  c3                   RET
1300544c  6a19                 PUSH 0x19
1300544e  e80d060000           CALL 0x13005a60
13005453  83c404               ADD ESP,0x4
13005456  b8ffffffff           MOV EAX,0xffffffff
1300545b  5d                   POP EBP
1300545c  5f                   POP EDI
1300545d  5e                   POP ESI
1300545e  5b                   POP EBX
1300545f  83c418               ADD ESP,0x18
13005462  c3                   RET
; undefined 13 bytes at 13005463

; ==== FUNCTION getSystemCP entry=13005470 sig=int __cdecl getSystemCP(int param_1)
13005470  c705cc84001300000000 MOV dword ptr [0x130084cc],0x0
1300547a  8b442404             MOV EAX,dword ptr [ESP + 0x4]
1300547e  83f8fe               CMP EAX,-0x2
13005481  7510                 JNZ 0x13005493
13005483  c705cc84001301000000 MOV dword ptr [0x130084cc],0x1
1300548d  ff259ca10013         JMP dword ptr [0x1300a19c]
13005493  83f8fd               CMP EAX,-0x3
13005496  7510                 JNZ 0x130054a8
13005498  c705cc84001301000000 MOV dword ptr [0x130084cc],0x1
130054a2  ff2598a10013         JMP dword ptr [0x1300a198]
130054a8  83f8fc               CMP EAX,-0x4
130054ab  750f                 JNZ 0x130054bc
130054ad  c705cc84001301000000 MOV dword ptr [0x130084cc],0x1
130054b7  a1c0870013           MOV EAX,[0x130087c0]
130054bc  c3                   RET
; undefined 3 bytes at 130054bd

; ==== FUNCTION _CPtoLCID entry=130054c0 sig=undefined4 __cdecl _CPtoLCID(undefined4 param_1)
130054c0  8b442404             MOV EAX,dword ptr [ESP + 0x4]
130054c4  2da4030000           SUB EAX,0x3a4
130054c9  83f812               CMP EAX,0x12
130054cc  770f                 JA 0x130054dd
130054ce  33c9                 XOR ECX,ECX
130054d0  8a880c550013         MOV CL,byte ptr [EAX + 0x1300550c]
switchD_130054d6::switchD:
130054d6  ff248df8540013       JMP dword ptr [ECX*0x4 + 0x130054f8]
switchD_130054d6::caseD_3a5:
130054dd  33c0                 XOR EAX,EAX
130054df  c3                   RET
switchD_130054d6::caseD_3a4:
130054e0  b811040000           MOV EAX,0x411
130054e5  c3                   RET
switchD_130054d6::caseD_3a8:
130054e6  b804080000           MOV EAX,0x804
130054eb  c3                   RET
switchD_130054d6::caseD_3b5:
130054ec  b812040000           MOV EAX,0x412
130054f1  c3                   RET
switchD_130054d6::caseD_3b6:
130054f2  b804040000           MOV EAX,0x404
130054f7  c3                   RET
switchD_130054d6::switchdataD_130054f8:
130054f8  addr 130054e0
130054fc  addr 130054e6
13005500  addr 130054ec
13005504  addr 130054f2
13005508  addr 130054dd
switchD_130054d6::switchdataD_1300550c:
1300550c  db 0h
1300550d  db 4h
1300550e  db 4h
1300550f  db 4h
13005510  db 1h
13005511  db 4h
13005512  db 4h
13005513  db 4h
13005514  db 4h
13005515  db 4h
13005516  db 4h
13005517  db 4h
13005518  db 4h
13005519  db 4h
1300551a  db 4h
1300551b  db 4h
1300551c  db 4h
1300551d  db 2h
1300551e  db 3h
; undefined 1 bytes at 1300551f

; ==== FUNCTION setSBCS entry=13005520 sig=undefined __cdecl setSBCS(void)
13005520  57                   PUSH EDI
13005521  33c0                 XOR EAX,EAX
13005523  bfb0830013           MOV EDI,0x130083b0
13005528  b940000000           MOV ECX,0x40
1300552d  f3ab                 STOSD.REP ES:EDI
1300552f  aa                   STOSB ES:EDI
13005530  a3c0840013           MOV [0x130084c0],EAX
13005535  b9c0840013           MOV ECX,0x130084c0
1300553a  5f                   POP EDI
1300553b  a3b4840013           MOV [0x130084b4],EAX
13005540  a3b8840013           MOV [0x130084b8],EAX
13005545  894104               MOV dword ptr [ECX + 0x4],EAX
13005548  894108               MOV dword ptr [ECX + 0x8],EAX
1300554b  c3                   RET
; undefined 4 bytes at 1300554c

; ==== FUNCTION ___initmbctable entry=13005550 sig=undefined __stdcall ___initmbctable(void)
13005550  6afd                 PUSH -0x3
13005552  e8e9fcffff           CALL 0x13005240
13005557  83c404               ADD ESP,0x4
1300555a  c3                   RET
; undefined 5 bytes at 1300555b

; ==== FUNCTION FUN_13005560 entry=13005560 sig=LPSTR __stdcall FUN_13005560(void)
13005560  83ec04               SUB ESP,0x4
13005563  833dcc85001300       CMP dword ptr [0x130085cc],0x0
1300556a  53                   PUSH EBX
1300556b  56                   PUSH ESI
1300556c  57                   PUSH EDI
1300556d  8b3580a10013         MOV ESI,dword ptr [0x1300a180]
13005573  55                   PUSH EBP
13005574  753a                 JNZ 0x130055b0
13005576  ffd6                 CALL ESI
13005578  8bf8                 MOV EDI,EAX
1300557a  85ff                 TEST EDI,EDI
1300557c  7410                 JZ 0x1300558e
1300557e  c705cc85001301000000 MOV dword ptr [0x130085cc],0x1
13005588  8b5c2410             MOV EBX,dword ptr [ESP + 0x10]
1300558c  eb2a                 JMP 0x130055b8
1300558e  ff15a4a10013         CALL dword ptr [0x1300a1a4]
13005594  8bd8                 MOV EBX,EAX
13005596  85db                 TEST EBX,EBX
13005598  740c                 JZ 0x130055a6
1300559a  c705cc85001302000000 MOV dword ptr [0x130085cc],0x2
130055a4  eb12                 JMP 0x130055b8
130055a6  33c0                 XOR EAX,EAX
130055a8  5d                   POP EBP
130055a9  5f                   POP EDI
130055aa  5e                   POP ESI
130055ab  5b                   POP EBX
130055ac  83c404               ADD ESP,0x4
130055af  c3                   RET
130055b0  8b5c2410             MOV EBX,dword ptr [ESP + 0x10]
130055b4  8b7c2410             MOV EDI,dword ptr [ESP + 0x10]
130055b8  833dcc85001301       CMP dword ptr [0x130085cc],0x1
130055bf  0f85a2000000         JNZ 0x13005667
130055c5  85ff                 TEST EDI,EDI
130055c7  7512                 JNZ 0x130055db
130055c9  ffd6                 CALL ESI
130055cb  8bf8                 MOV EDI,EAX
130055cd  85ff                 TEST EDI,EDI
130055cf  750a                 JNZ 0x130055db
130055d1  33c0                 XOR EAX,EAX
130055d3  5d                   POP EBP
130055d4  5f                   POP EDI
130055d5  5e                   POP ESI
130055d6  5b                   POP EBX
130055d7  83c404               ADD ESP,0x4
130055da  c3                   RET
130055db  66833f00             CMP word ptr [EDI],0x0
130055df  8bf7                 MOV ESI,EDI
130055e1  7412                 JZ 0x130055f5
130055e3  83c602               ADD ESI,0x2
130055e6  66833e00             CMP word ptr [ESI],0x0
130055ea  75f7                 JNZ 0x130055e3
130055ec  83c602               ADD ESI,0x2
130055ef  66833e00             CMP word ptr [ESI],0x0
130055f3  75ee                 JNZ 0x130055e3
130055f5  2bf7                 SUB ESI,EDI
130055f7  6a00                 PUSH 0x0
130055f9  c1fe01               SAR ESI,0x1
130055fc  6a00                 PUSH 0x0
130055fe  46                   INC ESI
130055ff  6a00                 PUSH 0x0
13005601  6a00                 PUSH 0x0
13005603  56                   PUSH ESI
13005604  57                   PUSH EDI
13005605  6a00                 PUSH 0x0
13005607  6a00                 PUSH 0x0
13005609  ff15aca10013         CALL dword ptr [0x1300a1ac]
1300560f  8be8                 MOV EBP,EAX
13005611  85ed                 TEST EBP,EBP
13005613  7441                 JZ 0x13005656
13005615  55                   PUSH EBP
13005616  e8c5050000           CALL 0x13005be0
1300561b  83c404               ADD ESP,0x4
1300561e  8bd8                 MOV EBX,EAX
13005620  85db                 TEST EBX,EBX
13005622  7432                 JZ 0x13005656
13005624  6a00                 PUSH 0x0
13005626  6a00                 PUSH 0x0
13005628  55                   PUSH EBP
13005629  53                   PUSH EBX
1300562a  56                   PUSH ESI
1300562b  57                   PUSH EDI
1300562c  6a00                 PUSH 0x0
1300562e  6a00                 PUSH 0x0
13005630  ff15aca10013         CALL dword ptr [0x1300a1ac]
13005636  85c0                 TEST EAX,EAX
13005638  750b                 JNZ 0x13005645
1300563a  53                   PUSH EBX
1300563b  e880050000           CALL 0x13005bc0
13005640  83c404               ADD ESP,0x4
13005643  33db                 XOR EBX,EBX
13005645  57                   PUSH EDI
13005646  ff15a8a10013         CALL dword ptr [0x1300a1a8]
1300564c  8bc3                 MOV EAX,EBX
1300564e  5d                   POP EBP
1300564f  5f                   POP EDI
13005650  5e                   POP ESI
13005651  5b                   POP EBX
13005652  83c404               ADD ESP,0x4
13005655  c3                   RET
13005656  57                   PUSH EDI
13005657  ff15a8a10013         CALL dword ptr [0x1300a1a8]
1300565d  33c0                 XOR EAX,EAX
1300565f  5d                   POP EBP
13005660  5f                   POP EDI
13005661  5e                   POP ESI
13005662  5b                   POP EBX
13005663  83c404               ADD ESP,0x4
13005666  c3                   RET
13005667  833dcc85001302       CMP dword ptr [0x130085cc],0x2
1300566e  757b                 JNZ 0x130056eb
13005670  85db                 TEST EBX,EBX
13005672  7516                 JNZ 0x1300568a
13005674  ff15a4a10013         CALL dword ptr [0x1300a1a4]
1300567a  8bd8                 MOV EBX,EAX
1300567c  85db                 TEST EBX,EBX
1300567e  750a                 JNZ 0x1300568a
13005680  33c0                 XOR EAX,EAX
13005682  5d                   POP EBP
13005683  5f                   POP EDI
13005684  5e                   POP ESI
13005685  5b                   POP EBX
13005686  83c404               ADD ESP,0x4
13005689  c3                   RET
1300568a  8beb                 MOV EBP,EBX
1300568c  803b00               CMP byte ptr [EBX],0x0
1300568f  740e                 JZ 0x1300569f
13005691  45                   INC EBP
13005692  807d0000             CMP byte ptr [EBP],0x0
13005696  75f9                 JNZ 0x13005691
13005698  45                   INC EBP
13005699  807d0000             CMP byte ptr [EBP],0x0
1300569d  75f2                 JNZ 0x13005691
1300569f  2beb                 SUB EBP,EBX
130056a1  45                   INC EBP
130056a2  55                   PUSH EBP
130056a3  e838050000           CALL 0x13005be0
130056a8  89442414             MOV dword ptr [ESP + 0x14],EAX
130056ac  83c404               ADD ESP,0x4
130056af  85c0                 TEST EAX,EAX
130056b1  7511                 JNZ 0x130056c4
130056b3  53                   PUSH EBX
130056b4  ff15a0a10013         CALL dword ptr [0x1300a1a0]
130056ba  33c0                 XOR EAX,EAX
130056bc  5d                   POP EBP
130056bd  5f                   POP EDI
130056be  5e                   POP ESI
130056bf  5b                   POP EBX
130056c0  83c404               ADD ESP,0x4
130056c3  c3                   RET
130056c4  8b7c2410             MOV EDI,dword ptr [ESP + 0x10]
130056c8  8bf3                 MOV ESI,EBX
130056ca  8bcd                 MOV ECX,EBP
130056cc  c1e902               SHR ECX,0x2
130056cf  f3a5                 MOVSD.REP ES:EDI,ESI
130056d1  8bcd                 MOV ECX,EBP
130056d3  53                   PUSH EBX
130056d4  83e103               AND ECX,0x3
130056d7  f3a4                 MOVSB.REP ES:EDI,ESI
130056d9  ff15a0a10013         CALL dword ptr [0x1300a1a0]
130056df  8b442410             MOV EAX,dword ptr [ESP + 0x10]
130056e3  5d                   POP EBP
130056e4  5f                   POP EDI
130056e5  5e                   POP ESI
130056e6  5b                   POP EBX
130056e7  83c404               ADD ESP,0x4
130056ea  c3                   RET
130056eb  33c0                 XOR EAX,EAX
130056ed  5d                   POP EBP
130056ee  5f                   POP EDI
130056ef  5e                   POP ESI
130056f0  5b                   POP EBX
130056f1  83c404               ADD ESP,0x4
130056f4  c3                   RET
; undefined 11 bytes at 130056f5

; ==== FUNCTION FUN_13005700 entry=13005700 sig=undefined __cdecl FUN_13005700(undefined4 param_1)
13005700  8b442404             MOV EAX,dword ptr [ESP + 0x4]
13005704  a338830013           MOV [0x13008338],EAX
13005709  c3                   RET
; undefined 6 bytes at 1300570a

; ==== FUNCTION FUN_13005710 entry=13005710 sig=undefined4 __stdcall FUN_13005710(void)
13005710  b801000000           MOV EAX,0x1
13005715  c20c00               RET 0xc
; undefined 8 bytes at 13005718

; ==== FUNCTION __FF_MSGBANNER entry=13005720 sig=void __cdecl __FF_MSGBANNER(void)
13005720  a134830013           MOV EAX,[0x13008334]
13005725  83f801               CMP EAX,0x1
13005728  740d                 JZ 0x13005737
1300572a  85c0                 TEST EAX,EAX
1300572c  752e                 JNZ 0x1300575c
1300572e  833d3883001301       CMP dword ptr [0x13008338],0x1
13005735  7525                 JNZ 0x1300575c
13005737  68fc000000           PUSH 0xfc
1300573c  e81f000000           CALL 0x13005760
13005741  83c404               ADD ESP,0x4
13005744  a158860013           MOV EAX,[0x13008658]
13005749  85c0                 TEST EAX,EAX
1300574b  7402                 JZ 0x1300574f
1300574d  ffd0                 CALL EAX
1300574f  68ff000000           PUSH 0xff
13005754  e807000000           CALL 0x13005760
13005759  83c404               ADD ESP,0x4
1300575c  c3                   RET
; undefined 3 bytes at 1300575d

; ==== FUNCTION FUN_13005760 entry=13005760 sig=undefined __cdecl FUN_13005760(int param_1)
13005760  81eca8010000         SUB ESP,0x1a8
13005766  33c9                 XOR ECX,ECX
13005768  b8d0850013           MOV EAX,0x130085d0
1300576d  53                   PUSH EBX
1300576e  8b9424b0010000       MOV EDX,dword ptr [ESP + 0x1b0]
13005775  56                   PUSH ESI
13005776  57                   PUSH EDI
13005777  55                   PUSH EBP
13005778  3910                 CMP dword ptr [EAX],EDX
1300577a  740b                 JZ 0x13005787
1300577c  83c008               ADD EAX,0x8
1300577f  41                   INC ECX
13005780  3d58860013           CMP EAX,0x13008658
13005785  72f1                 JC 0x13005778
13005787  3914cdd0850013       CMP dword ptr [ECX*0x8 + 0x130085d0],EDX
1300578e  8d1ccd00000000       LEA EBX,[ECX*0x8 + 0x0]
13005795  0f85a7010000         JNZ 0x13005942
1300579b  833d3483001301       CMP dword ptr [0x13008334],0x1
130057a2  0f845f010000         JZ 0x13005907
130057a8  833d3483001300       CMP dword ptr [0x13008334],0x0
130057af  750d                 JNZ 0x130057be
130057b1  833d3883001301       CMP dword ptr [0x13008338],0x1
130057b8  0f8449010000         JZ 0x13005907
130057be  81fafc000000         CMP EDX,0xfc
130057c4  0f8478010000         JZ 0x13005942
130057ca  8d8424b4000000       LEA EAX,[ESP + 0xb4]
130057d1  6804010000           PUSH 0x104
130057d6  50                   PUSH EAX
130057d7  8b2d90a10013         MOV EBP,dword ptr [0x1300a190]
130057dd  6a00                 PUSH 0x0
130057df  ffd5                 CALL EBP
130057e1  85c0                 TEST EAX,EAX
130057e3  7516                 JNZ 0x130057fb
130057e5  be00750013           MOV ESI,0x13007500
130057ea  8dbc24b4000000       LEA EDI,[ESP + 0xb4]
130057f1  b905000000           MOV ECX,0x5
130057f6  f3a5                 MOVSD.REP ES:EDI,ESI
130057f8  66a5                 MOVSW ES:EDI,ESI
130057fa  a4                   MOVSB ES:EDI,ESI
130057fb  8dac24b4000000       LEA EBP,[ESP + 0xb4]
13005802  8dbc24b4000000       LEA EDI,[ESP + 0xb4]
13005809  b9ffffffff           MOV ECX,0xffffffff
1300580e  2bc0                 SUB EAX,EAX
13005810  f2ae                 SCASB.REPNE ES:EDI
13005812  f7d1                 NOT ECX
13005814  83f93c               CMP ECX,0x3c
13005817  7626                 JBE 0x1300583f
13005819  8dbc24b4000000       LEA EDI,[ESP + 0xb4]
13005820  b9ffffffff           MOV ECX,0xffffffff
13005825  2bc0                 SUB EAX,EAX
13005827  6a03                 PUSH 0x3
13005829  f2ae                 SCASB.REPNE ES:EDI
1300582b  f7d1                 NOT ECX
1300582d  8d6c0c7c             LEA EBP,[ESP + ECX*0x1 + 0x7c]
13005831  68fc740013           PUSH 0x130074fc
13005836  55                   PUSH EBP
13005837  e8c4040000           CALL 0x13005d00
1300583c  83c40c               ADD ESP,0xc
1300583f  bee0740013           MOV ESI,0x130074e0
13005844  8d7c2414             LEA EDI,[ESP + 0x14]
13005848  b906000000           MOV ECX,0x6
1300584d  f3a5                 MOVSD.REP ES:EDI,ESI
1300584f  66a5                 MOVSW ES:EDI,ESI
13005851  8bfd                 MOV EDI,EBP
13005853  b9ffffffff           MOV ECX,0xffffffff
13005858  2bc0                 SUB EAX,EAX
1300585a  f2ae                 SCASB.REPNE ES:EDI
1300585c  f7d1                 NOT ECX
1300585e  2bf9                 SUB EDI,ECX
13005860  8bd1                 MOV EDX,ECX
13005862  8bf7                 MOV ESI,EDI
13005864  b9ffffffff           MOV ECX,0xffffffff
13005869  8d7c2414             LEA EDI,[ESP + 0x14]
1300586d  2bc0                 SUB EAX,EAX
1300586f  f2ae                 SCASB.REPNE ES:EDI
13005871  4f                   DEC EDI
13005872  8bca                 MOV ECX,EDX
13005874  c1e902               SHR ECX,0x2
13005877  f3a5                 MOVSD.REP ES:EDI,ESI
13005879  8bca                 MOV ECX,EDX
1300587b  83e103               AND ECX,0x3
1300587e  f3a4                 MOVSB.REP ES:EDI,ESI
13005880  bfdc740013           MOV EDI,0x130074dc
13005885  b9ffffffff           MOV ECX,0xffffffff
1300588a  2bc0                 SUB EAX,EAX
1300588c  f2ae                 SCASB.REPNE ES:EDI
1300588e  f7d1                 NOT ECX
13005890  2bf9                 SUB EDI,ECX
13005892  8bd1                 MOV EDX,ECX
13005894  8bf7                 MOV ESI,EDI
13005896  b9ffffffff           MOV ECX,0xffffffff
1300589b  8d7c2414             LEA EDI,[ESP + 0x14]
1300589f  2bc0                 SUB EAX,EAX
130058a1  f2ae                 SCASB.REPNE ES:EDI
130058a3  4f                   DEC EDI
130058a4  8bca                 MOV ECX,EDX
130058a6  c1e902               SHR ECX,0x2
130058a9  f3a5                 MOVSD.REP ES:EDI,ESI
130058ab  8bca                 MOV ECX,EDX
130058ad  83e103               AND ECX,0x3
130058b0  f3a4                 MOVSB.REP ES:EDI,ESI
130058b2  8bbbd4850013         MOV EDI,dword ptr [EBX + 0x130085d4]
130058b8  b9ffffffff           MOV ECX,0xffffffff
130058bd  2bc0                 SUB EAX,EAX
130058bf  f2ae                 SCASB.REPNE ES:EDI
130058c1  f7d1                 NOT ECX
130058c3  2bf9                 SUB EDI,ECX
130058c5  8bf7                 MOV ESI,EDI
130058c7  8bd1                 MOV EDX,ECX
130058c9  8d7c2414             LEA EDI,[ESP + 0x14]
130058cd  b9ffffffff           MOV ECX,0xffffffff
130058d2  2bc0                 SUB EAX,EAX
130058d4  f2ae                 SCASB.REPNE ES:EDI
130058d6  4f                   DEC EDI
130058d7  8bca                 MOV ECX,EDX
130058d9  c1e902               SHR ECX,0x2
130058dc  f3a5                 MOVSD.REP ES:EDI,ESI
130058de  8bca                 MOV ECX,EDX
130058e0  6810200100           PUSH 0x12010
130058e5  83e103               AND ECX,0x3
130058e8  68b4740013           PUSH 0x130074b4
130058ed  f3a4                 MOVSB.REP ES:EDI,ESI
130058ef  8d44241c             LEA EAX,[ESP + 0x1c]
130058f3  50                   PUSH EAX
130058f4  e867030000           CALL 0x13005c60
130058f9  83c40c               ADD ESP,0xc
130058fc  5d                   POP EBP
130058fd  5f                   POP EDI
130058fe  5e                   POP ESI
130058ff  5b                   POP EBX
13005900  81c4a8010000         ADD ESP,0x1a8
13005906  c3                   RET
13005907  a1509d0013           MOV EAX,[0x13009d50]
1300590c  8b7048               MOV ESI,dword ptr [EAX + 0x48]
1300590f  83feff               CMP ESI,-0x1
13005912  750a                 JNZ 0x1300591e
13005914  6af4                 PUSH -0xc
13005916  ff152ca10013         CALL dword ptr [0x1300a12c]
1300591c  8bf0                 MOV ESI,EAX
1300591e  8b93d4850013         MOV EDX,dword ptr [EBX + 0x130085d4]
13005924  6a00                 PUSH 0x0
13005926  8d442414             LEA EAX,[ESP + 0x14]
1300592a  8bfa                 MOV EDI,EDX
1300592c  50                   PUSH EAX
1300592d  b9ffffffff           MOV ECX,0xffffffff
13005932  2bc0                 SUB EAX,EAX
13005934  f2ae                 SCASB.REPNE ES:EDI
13005936  f7d1                 NOT ECX
13005938  49                   DEC ECX
13005939  51                   PUSH ECX
1300593a  52                   PUSH EDX
1300593b  56                   PUSH ESI
1300593c  ff15b0a10013         CALL dword ptr [0x1300a1b0]
13005942  5d                   POP EBP
13005943  5f                   POP EDI
13005944  5e                   POP ESI
13005945  5b                   POP EBX
13005946  81c4a8010000         ADD ESP,0x1a8
1300594c  c3                   RET
; undefined 3 bytes at 1300594d

; ==== FUNCTION __mtinitlocks entry=13005950 sig=int __cdecl __mtinitlocks(void)
13005950  56                   PUSH ESI
13005951  a1a4860013           MOV EAX,[0x130086a4]
13005956  50                   PUSH EAX
13005957  8b35b4a10013         MOV ESI,dword ptr [0x1300a1b4]
1300595d  ffd6                 CALL ESI
1300595f  8b0d94860013         MOV ECX,dword ptr [0x13008694]
13005965  51                   PUSH ECX
13005966  ffd6                 CALL ESI
13005968  a184860013           MOV EAX,[0x13008684]
1300596d  50                   PUSH EAX
1300596e  ffd6                 CALL ESI
13005970  a164860013           MOV EAX,[0x13008664]
13005975  50                   PUSH EAX
13005976  ffd6                 CALL ESI
13005978  5e                   POP ESI
13005979  c3                   RET
; undefined 6 bytes at 1300597a

; ==== FUNCTION __mtdeletelocks entry=13005980 sig=void __cdecl __mtdeletelocks(void)
13005980  53                   PUSH EBX
13005981  56                   PUSH ESI
13005982  57                   PUSH EDI
13005983  8b358ca10013         MOV ESI,dword ptr [0x1300a18c]
13005989  33ff                 XOR EDI,EDI
1300598b  8d1cbd60860013       LEA EBX,[EDI*0x4 + 0x13008660]
13005992  8b03                 MOV EAX,dword ptr [EBX]
13005994  85c0                 TEST EAX,EAX
13005996  7422                 JZ 0x130059ba
13005998  83ff11               CMP EDI,0x11
1300599b  741d                 JZ 0x130059ba
1300599d  83ff0d               CMP EDI,0xd
130059a0  7418                 JZ 0x130059ba
130059a2  83ff09               CMP EDI,0x9
130059a5  7413                 JZ 0x130059ba
130059a7  83ff01               CMP EDI,0x1
130059aa  740e                 JZ 0x130059ba
130059ac  50                   PUSH EAX
130059ad  ffd6                 CALL ESI
130059af  8b03                 MOV EAX,dword ptr [EBX]
130059b1  50                   PUSH EAX
130059b2  e809020000           CALL 0x13005bc0
130059b7  83c404               ADD ESP,0x4
130059ba  47                   INC EDI
130059bb  83ff30               CMP EDI,0x30
130059be  7ccb                 JL 0x1300598b
130059c0  a184860013           MOV EAX,[0x13008684]
130059c5  50                   PUSH EAX
130059c6  ffd6                 CALL ESI
130059c8  a194860013           MOV EAX,[0x13008694]
130059cd  50                   PUSH EAX
130059ce  ffd6                 CALL ESI
130059d0  a1a4860013           MOV EAX,[0x130086a4]
130059d5  50                   PUSH EAX
130059d6  ffd6                 CALL ESI
130059d8  a164860013           MOV EAX,[0x13008664]
130059dd  50                   PUSH EAX
130059de  ffd6                 CALL ESI
130059e0  5f                   POP EDI
130059e1  5e                   POP ESI
130059e2  5b                   POP EBX
130059e3  c3                   RET
; undefined 12 bytes at 130059e4

; ==== FUNCTION __lock entry=130059f0 sig=void __cdecl __lock(int _File)
130059f0  55                   PUSH EBP
130059f1  8b442408             MOV EAX,dword ptr [ESP + 0x8]
130059f5  8bec                 MOV EBP,ESP
130059f7  56                   PUSH ESI
130059f8  57                   PUSH EDI
130059f9  8d3c8560860013       LEA EDI,[EAX*0x4 + 0x13008660]
13005a00  833f00               CMP dword ptr [EDI],0x0
13005a03  7546                 JNZ 0x13005a4b
13005a05  6a18                 PUSH 0x18
13005a07  e8d4010000           CALL 0x13005be0
13005a0c  83c404               ADD ESP,0x4
13005a0f  8bf0                 MOV ESI,EAX
13005a11  85f6                 TEST ESI,ESI
13005a13  750a                 JNZ 0x13005a1f
13005a15  6a11                 PUSH 0x11
13005a17  e8f4eeffff           CALL 0x13004910
13005a1c  83c404               ADD ESP,0x4
13005a1f  6a11                 PUSH 0x11
13005a21  e8caffffff           CALL 0x130059f0
13005a26  83c404               ADD ESP,0x4
13005a29  833f00               CMP dword ptr [EDI],0x0
13005a2c  56                   PUSH ESI
13005a2d  750a                 JNZ 0x13005a39
13005a2f  ff15b4a10013         CALL dword ptr [0x1300a1b4]
13005a35  8937                 MOV dword ptr [EDI],ESI
13005a37  eb08                 JMP 0x13005a41
13005a39  e882010000           CALL 0x13005bc0
13005a3e  83c404               ADD ESP,0x4
13005a41  6a11                 PUSH 0x11
13005a43  e818000000           CALL 0x13005a60
13005a48  83c404               ADD ESP,0x4
13005a4b  8b07                 MOV EAX,dword ptr [EDI]
13005a4d  50                   PUSH EAX
13005a4e  ff15b8a10013         CALL dword ptr [0x1300a1b8]
13005a54  5f                   POP EDI
13005a55  5e                   POP ESI
13005a56  5d                   POP EBP
13005a57  c3                   RET
; undefined 8 bytes at 13005a58

; ==== FUNCTION FUN_13005a60 entry=13005a60 sig=undefined __cdecl FUN_13005a60(int param_1)
13005a60  55                   PUSH EBP
13005a61  8b442408             MOV EAX,dword ptr [ESP + 0x8]
13005a65  8bec                 MOV EBP,ESP
13005a67  8b0c8560860013       MOV ECX,dword ptr [EAX*0x4 + 0x13008660]
13005a6e  51                   PUSH ECX
13005a6f  ff15bca10013         CALL dword ptr [0x1300a1bc]
13005a75  5d                   POP EBP
13005a76  c3                   RET
; undefined 9 bytes at 13005a77

; ==== FUNCTION FID_conflict:__lock_file entry=13005a80 sig=void __cdecl FID_conflict:__lock_file(FILE * _File)
13005a80  55                   PUSH EBP
13005a81  8b442408             MOV EAX,dword ptr [ESP + 0x8]
13005a85  8bec                 MOV EBP,ESP
13005a87  3dd0870013           CMP EAX,0x130087d0
13005a8c  721c                 JC 0x13005aaa
13005a8e  3d308a0013           CMP EAX,0x13008a30
13005a93  7715                 JA 0x13005aaa
13005a95  2dd0870013           SUB EAX,0x130087d0
13005a9a  c1f805               SAR EAX,0x5
13005a9d  83c01c               ADD EAX,0x1c
13005aa0  50                   PUSH EAX
13005aa1  e84affffff           CALL 0x130059f0
13005aa6  8be5                 MOV ESP,EBP
13005aa8  5d                   POP EBP
13005aa9  c3                   RET
13005aaa  83c020               ADD EAX,0x20
13005aad  50                   PUSH EAX
13005aae  ff15b8a10013         CALL dword ptr [0x1300a1b8]
13005ab4  5d                   POP EBP
13005ab5  c3                   RET
; undefined 10 bytes at 13005ab6

; ==== FUNCTION FID_conflict:__lock_file2 entry=13005ac0 sig=void __cdecl FID_conflict:__lock_file2(int _Index, void * _File)
13005ac0  55                   PUSH EBP
13005ac1  8b442408             MOV EAX,dword ptr [ESP + 0x8]
13005ac5  8bec                 MOV EBP,ESP
13005ac7  83f814               CMP EAX,0x14
13005aca  7d0d                 JGE 0x13005ad9
13005acc  83c01c               ADD EAX,0x1c
13005acf  50                   PUSH EAX
13005ad0  e81bffffff           CALL 0x130059f0
13005ad5  8be5                 MOV ESP,EBP
13005ad7  5d                   POP EBP
13005ad8  c3                   RET
13005ad9  8b450c               MOV EAX,dword ptr [EBP + 0xc]
13005adc  83c020               ADD EAX,0x20
13005adf  50                   PUSH EAX
13005ae0  ff15b8a10013         CALL dword ptr [0x1300a1b8]
13005ae6  5d                   POP EBP
13005ae7  c3                   RET
; undefined 8 bytes at 13005ae8

; ==== FUNCTION FID_conflict:__lock_file entry=13005af0 sig=void __cdecl FID_conflict:__lock_file(FILE * _File)
13005af0  55                   PUSH EBP
13005af1  8b442408             MOV EAX,dword ptr [ESP + 0x8]
13005af5  8bec                 MOV EBP,ESP
13005af7  3dd0870013           CMP EAX,0x130087d0
13005afc  721c                 JC 0x13005b1a
13005afe  3d308a0013           CMP EAX,0x13008a30
13005b03  7715                 JA 0x13005b1a
13005b05  2dd0870013           SUB EAX,0x130087d0
13005b0a  c1f805               SAR EAX,0x5
13005b0d  83c01c               ADD EAX,0x1c
13005b10  50                   PUSH EAX
13005b11  e84affffff           CALL 0x13005a60
13005b16  8be5                 MOV ESP,EBP
13005b18  5d                   POP EBP
13005b19  c3                   RET
13005b1a  83c020               ADD EAX,0x20
13005b1d  50                   PUSH EAX
13005b1e  ff15bca10013         CALL dword ptr [0x1300a1bc]
13005b24  5d                   POP EBP
13005b25  c3                   RET
; undefined 10 bytes at 13005b26

; ==== FUNCTION FID_conflict:__lock_file2 entry=13005b30 sig=void __cdecl FID_conflict:__lock_file2(int _Index, void * _File)
13005b30  55                   PUSH EBP
13005b31  8b442408             MOV EAX,dword ptr [ESP + 0x8]
13005b35  8bec                 MOV EBP,ESP
13005b37  83f814               CMP EAX,0x14
13005b3a  7d0d                 JGE 0x13005b49
13005b3c  83c01c               ADD EAX,0x1c
13005b3f  50                   PUSH EAX
13005b40  e81bffffff           CALL 0x13005a60
13005b45  8be5                 MOV ESP,EBP
13005b47  5d                   POP EBP
13005b48  c3                   RET
13005b49  8b450c               MOV EAX,dword ptr [EBP + 0xc]
13005b4c  83c020               ADD EAX,0x20
13005b4f  50                   PUSH EAX
13005b50  ff15bca10013         CALL dword ptr [0x1300a1bc]
13005b56  5d                   POP EBP
13005b57  c3                   RET
; undefined 8 bytes at 13005b58

; ==== FUNCTION FUN_13005b60 entry=13005b60 sig=LPVOID __cdecl FUN_13005b60(int param_1, int param_2)
13005b60  56                   PUSH ESI
13005b61  57                   PUSH EDI
13005b62  8b7c2410             MOV EDI,dword ptr [ESP + 0x10]
13005b66  0faf7c240c           IMUL EDI,dword ptr [ESP + 0xc]
13005b6b  85ff                 TEST EDI,EDI
13005b6d  7505                 JNZ 0x13005b74
13005b6f  bf01000000           MOV EDI,0x1
13005b74  a1549e0013           MOV EAX,[0x13009e54]
13005b79  8b35c0a10013         MOV ESI,dword ptr [0x1300a1c0]
13005b7f  83ffe0               CMP EDI,-0x20
13005b82  7604                 JBE 0x13005b88
13005b84  33c0                 XOR EAX,EAX
13005b86  eb06                 JMP 0x13005b8e
13005b88  57                   PUSH EDI
13005b89  6a08                 PUSH 0x8
13005b8b  50                   PUSH EAX
13005b8c  ffd6                 CALL ESI
13005b8e  85c0                 TEST EAX,EAX
13005b90  751d                 JNZ 0x13005baf
13005b92  833d548a001300       CMP dword ptr [0x13008a54],0x0
13005b99  7414                 JZ 0x13005baf
13005b9b  57                   PUSH EDI
13005b9c  e84f030000           CALL 0x13005ef0
13005ba1  83c404               ADD ESP,0x4
13005ba4  85c0                 TEST EAX,EAX
13005ba6  a1549e0013           MOV EAX,[0x13009e54]
13005bab  75d2                 JNZ 0x13005b7f
13005bad  33c0                 XOR EAX,EAX
13005baf  5f                   POP EDI
13005bb0  5e                   POP ESI
13005bb1  c3                   RET
; undefined 14 bytes at 13005bb2

; ==== FUNCTION FUN_13005bc0 entry=13005bc0 sig=undefined __cdecl FUN_13005bc0(LPVOID param_1)
13005bc0  8b442404             MOV EAX,dword ptr [ESP + 0x4]
13005bc4  85c0                 TEST EAX,EAX
13005bc6  740f                 JZ 0x13005bd7
13005bc8  50                   PUSH EAX
13005bc9  6a00                 PUSH 0x0
13005bcb  a1549e0013           MOV EAX,[0x13009e54]
13005bd0  50                   PUSH EAX
13005bd1  ff15c4a10013         CALL dword ptr [0x1300a1c4]
13005bd7  c3                   RET
; undefined 8 bytes at 13005bd8

; ==== FUNCTION FUN_13005be0 entry=13005be0 sig=undefined __cdecl FUN_13005be0(SIZE_T param_1)
13005be0  a1548a0013           MOV EAX,[0x13008a54]
13005be5  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
13005be9  50                   PUSH EAX
13005bea  51                   PUSH ECX
13005beb  e810000000           CALL 0x13005c00
13005bf0  83c408               ADD ESP,0x8
13005bf3  c3                   RET
; undefined 12 bytes at 13005bf4

; ==== FUNCTION FUN_13005c00 entry=13005c00 sig=int __cdecl FUN_13005c00(SIZE_T param_1, int param_2)
13005c00  56                   PUSH ESI
13005c01  57                   PUSH EDI
13005c02  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
13005c06  83fee0               CMP ESI,-0x20
13005c09  7605                 JBE 0x13005c10
13005c0b  33c0                 XOR EAX,EAX
13005c0d  5f                   POP EDI
13005c0e  5e                   POP ESI
13005c0f  c3                   RET
13005c10  85f6                 TEST ESI,ESI
13005c12  7505                 JNZ 0x13005c19
13005c14  be01000000           MOV ESI,0x1
13005c19  8b7c2410             MOV EDI,dword ptr [ESP + 0x10]
13005c1d  56                   PUSH ESI
13005c1e  e81d000000           CALL 0x13005c40
13005c23  83c404               ADD ESP,0x4
13005c26  85c0                 TEST EAX,EAX
13005c28  7513                 JNZ 0x13005c3d
13005c2a  85ff                 TEST EDI,EDI
13005c2c  740f                 JZ 0x13005c3d
13005c2e  56                   PUSH ESI
13005c2f  e8bc020000           CALL 0x13005ef0
13005c34  83c404               ADD ESP,0x4
13005c37  85c0                 TEST EAX,EAX
13005c39  75e2                 JNZ 0x13005c1d
13005c3b  33c0                 XOR EAX,EAX
13005c3d  5f                   POP EDI
13005c3e  5e                   POP ESI
13005c3f  c3                   RET

; ==== FUNCTION FUN_13005c40 entry=13005c40 sig=undefined __cdecl FUN_13005c40(SIZE_T param_1)
13005c40  8b442404             MOV EAX,dword ptr [ESP + 0x4]
13005c44  8b0d549e0013         MOV ECX,dword ptr [0x13009e54]
13005c4a  50                   PUSH EAX
13005c4b  6a00                 PUSH 0x0
13005c4d  51                   PUSH ECX
13005c4e  ff15c0a10013         CALL dword ptr [0x1300a1c0]
13005c54  c3                   RET
; undefined 11 bytes at 13005c55

; ==== FUNCTION ___crtMessageBoxA entry=13005c60 sig=int __cdecl ___crtMessageBoxA(LPCSTR _LpText, LPCSTR _LpCaption, UINT _UType)
13005c60  53                   PUSH EBX
13005c61  56                   PUSH ESI
13005c62  57                   PUSH EDI
13005c63  33f6                 XOR ESI,ESI
13005c65  3935c4870013         CMP dword ptr [0x130087c4],ESI
13005c6b  7542                 JNZ 0x13005caf
13005c6d  6848750013           PUSH 0x13007548
13005c72  ff15c8a10013         CALL dword ptr [0x1300a1c8]
13005c78  8bd8                 MOV EBX,EAX
13005c7a  85db                 TEST EBX,EBX
13005c7c  746e                 JZ 0x13005cec
13005c7e  683c750013           PUSH 0x1300753c
13005c83  8b3d44a10013         MOV EDI,dword ptr [0x1300a144]
13005c89  53                   PUSH EBX
13005c8a  ffd7                 CALL EDI
13005c8c  a3c4870013           MOV [0x130087c4],EAX
13005c91  85c0                 TEST EAX,EAX
13005c93  7457                 JZ 0x13005cec
13005c95  682c750013           PUSH 0x1300752c
13005c9a  53                   PUSH EBX
13005c9b  ffd7                 CALL EDI
13005c9d  6818750013           PUSH 0x13007518
13005ca2  a3c8870013           MOV [0x130087c8],EAX
13005ca7  53                   PUSH EBX
13005ca8  ffd7                 CALL EDI
13005caa  a3cc870013           MOV [0x130087cc],EAX
13005caf  a1c8870013           MOV EAX,[0x130087c8]
13005cb4  85c0                 TEST EAX,EAX
13005cb6  7404                 JZ 0x13005cbc
13005cb8  ffd0                 CALL EAX
13005cba  8bf0                 MOV ESI,EAX
13005cbc  85f6                 TEST ESI,ESI
13005cbe  7412                 JZ 0x13005cd2
13005cc0  833dcc87001300       CMP dword ptr [0x130087cc],0x0
13005cc7  7409                 JZ 0x13005cd2
13005cc9  56                   PUSH ESI
13005cca  ff15cc870013         CALL dword ptr [0x130087cc]
13005cd0  8bf0                 MOV ESI,EAX
13005cd2  8b442418             MOV EAX,dword ptr [ESP + 0x18]
13005cd6  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
13005cda  8b542410             MOV EDX,dword ptr [ESP + 0x10]
13005cde  50                   PUSH EAX
13005cdf  51                   PUSH ECX
13005ce0  52                   PUSH EDX
13005ce1  56                   PUSH ESI
13005ce2  ff15c4870013         CALL dword ptr [0x130087c4]
13005ce8  5f                   POP EDI
13005ce9  5e                   POP ESI
13005cea  5b                   POP EBX
13005ceb  c3                   RET
13005cec  33c0                 XOR EAX,EAX
13005cee  5f                   POP EDI
13005cef  5e                   POP ESI
13005cf0  5b                   POP EBX
13005cf1  c3                   RET
; undefined 14 bytes at 13005cf2

; ==== FUNCTION _strncpy entry=13005d00 sig=char * __cdecl _strncpy(char * _Dest, char * _Source, size_t _Count)
13005d00  8b4c240c             MOV ECX,dword ptr [ESP + 0xc]
13005d04  57                   PUSH EDI
13005d05  85c9                 TEST ECX,ECX
13005d07  747a                 JZ 0x13005d83
13005d09  56                   PUSH ESI
13005d0a  53                   PUSH EBX
13005d0b  8bd9                 MOV EBX,ECX
13005d0d  8b742414             MOV ESI,dword ptr [ESP + 0x14]
13005d11  f7c603000000         TEST ESI,0x3
13005d17  8b7c2410             MOV EDI,dword ptr [ESP + 0x10]
13005d1b  7507                 JNZ 0x13005d24
13005d1d  c1e902               SHR ECX,0x2
13005d20  756f                 JNZ 0x13005d91
13005d22  eb21                 JMP 0x13005d45
13005d24  8a06                 MOV AL,byte ptr [ESI]
13005d26  46                   INC ESI
13005d27  8807                 MOV byte ptr [EDI],AL
13005d29  47                   INC EDI
13005d2a  49                   DEC ECX
13005d2b  7425                 JZ 0x13005d52
13005d2d  84c0                 TEST AL,AL
13005d2f  7429                 JZ 0x13005d5a
13005d31  f7c603000000         TEST ESI,0x3
13005d37  75eb                 JNZ 0x13005d24
13005d39  8bd9                 MOV EBX,ECX
13005d3b  c1e902               SHR ECX,0x2
13005d3e  7551                 JNZ 0x13005d91
13005d40  83e303               AND EBX,0x3
13005d43  740d                 JZ 0x13005d52
13005d45  8a06                 MOV AL,byte ptr [ESI]
13005d47  46                   INC ESI
13005d48  8807                 MOV byte ptr [EDI],AL
13005d4a  47                   INC EDI
13005d4b  84c0                 TEST AL,AL
13005d4d  742f                 JZ 0x13005d7e
13005d4f  4b                   DEC EBX
13005d50  75f3                 JNZ 0x13005d45
13005d52  8b442410             MOV EAX,dword ptr [ESP + 0x10]
13005d56  5b                   POP EBX
13005d57  5e                   POP ESI
13005d58  5f                   POP EDI
13005d59  c3                   RET
13005d5a  f7c703000000         TEST EDI,0x3
13005d60  7412                 JZ 0x13005d74
13005d62  8807                 MOV byte ptr [EDI],AL
13005d64  47                   INC EDI
13005d65  49                   DEC ECX
13005d66  0f848a000000         JZ 0x13005df6
13005d6c  f7c703000000         TEST EDI,0x3
13005d72  75ee                 JNZ 0x13005d62
13005d74  8bd9                 MOV EBX,ECX
13005d76  c1e902               SHR ECX,0x2
13005d79  756c                 JNZ 0x13005de7
13005d7b  8807                 MOV byte ptr [EDI],AL
13005d7d  47                   INC EDI
13005d7e  4b                   DEC EBX
13005d7f  75fa                 JNZ 0x13005d7b
13005d81  5b                   POP EBX
13005d82  5e                   POP ESI
13005d83  8b442408             MOV EAX,dword ptr [ESP + 0x8]
13005d87  5f                   POP EDI
13005d88  c3                   RET
13005d89  8917                 MOV dword ptr [EDI],EDX
13005d8b  83c704               ADD EDI,0x4
13005d8e  49                   DEC ECX
13005d8f  74af                 JZ 0x13005d40
13005d91  bafffefe7e           MOV EDX,0x7efefeff
13005d96  8b06                 MOV EAX,dword ptr [ESI]
13005d98  03d0                 ADD EDX,EAX
13005d9a  83f0ff               XOR EAX,0xffffffff
13005d9d  33c2                 XOR EAX,EDX
13005d9f  8b16                 MOV EDX,dword ptr [ESI]
13005da1  83c604               ADD ESI,0x4
13005da4  a900010181           TEST EAX,0x81010100
13005da9  74de                 JZ 0x13005d89
13005dab  84d2                 TEST DL,DL
13005dad  742c                 JZ 0x13005ddb
13005daf  84f6                 TEST DH,DH
13005db1  741e                 JZ 0x13005dd1
13005db3  f7c20000ff00         TEST EDX,0xff0000
13005db9  740c                 JZ 0x13005dc7
13005dbb  f7c2000000ff         TEST EDX,0xff000000
13005dc1  75c6                 JNZ 0x13005d89
13005dc3  8917                 MOV dword ptr [EDI],EDX
13005dc5  eb18                 JMP 0x13005ddf
13005dc7  81e2ffff0000         AND EDX,0xffff
13005dcd  8917                 MOV dword ptr [EDI],EDX
13005dcf  eb0e                 JMP 0x13005ddf
13005dd1  81e2ff000000         AND EDX,0xff
13005dd7  8917                 MOV dword ptr [EDI],EDX
13005dd9  eb04                 JMP 0x13005ddf
13005ddb  33d2                 XOR EDX,EDX
13005ddd  8917                 MOV dword ptr [EDI],EDX
13005ddf  83c704               ADD EDI,0x4
13005de2  33c0                 XOR EAX,EAX
13005de4  49                   DEC ECX
13005de5  740a                 JZ 0x13005df1
13005de7  33c0                 XOR EAX,EAX
13005de9  8907                 MOV dword ptr [EDI],EAX
13005deb  83c704               ADD EDI,0x4
13005dee  49                   DEC ECX
13005def  75f8                 JNZ 0x13005de9
13005df1  83e303               AND EBX,0x3
13005df4  7585                 JNZ 0x13005d7b
13005df6  8b442410             MOV EAX,dword ptr [ESP + 0x10]
13005dfa  5b                   POP EBX
13005dfb  5e                   POP ESI
13005dfc  5f                   POP EDI
13005dfd  c3                   RET
; undefined 2 bytes at 13005dfe

; ==== FUNCTION FUN_13005e00 entry=13005e00 sig=undefined __stdcall FUN_13005e00(void)
13005e00  833d409d001300       CMP dword ptr [0x13009d40],0x0
13005e07  56                   PUSH ESI
13005e08  750c                 JNZ 0x13005e16
13005e0a  c705409d001300020000 MOV dword ptr [0x13009d40],0x200
13005e14  eb13                 JMP 0x13005e29
13005e16  833d409d001314       CMP dword ptr [0x13009d40],0x14
13005e1d  7d0a                 JGE 0x13005e29
13005e1f  c705409d001314000000 MOV dword ptr [0x13009d40],0x14
13005e29  6a04                 PUSH 0x4
13005e2b  a1409d0013           MOV EAX,[0x13009d40]
13005e30  50                   PUSH EAX
13005e31  e82afdffff           CALL 0x13005b60
13005e36  83c408               ADD ESP,0x8
13005e39  a3388d0013           MOV [0x13008d38],EAX
13005e3e  85c0                 TEST EAX,EAX
13005e40  7529                 JNZ 0x13005e6b
13005e42  c705409d001314000000 MOV dword ptr [0x13009d40],0x14
13005e4c  6a04                 PUSH 0x4
13005e4e  6a14                 PUSH 0x14
13005e50  e80bfdffff           CALL 0x13005b60
13005e55  83c408               ADD ESP,0x8
13005e58  a3388d0013           MOV [0x13008d38],EAX
13005e5d  85c0                 TEST EAX,EAX
13005e5f  750a                 JNZ 0x13005e6b
13005e61  6a1a                 PUSH 0x1a
13005e63  e8a8eaffff           CALL 0x13004910
13005e68  83c404               ADD ESP,0x4
13005e6b  b9d0870013           MOV ECX,0x130087d0
13005e70  33c0                 XOR EAX,EAX
13005e72  8b15388d0013         MOV EDX,dword ptr [0x13008d38]
13005e78  83c004               ADD EAX,0x4
13005e7b  894c02fc             MOV dword ptr [EDX + EAX*0x1 + -0x4],ECX
13005e7f  83c120               ADD ECX,0x20
13005e82  83f850               CMP EAX,0x50
13005e85  7ceb                 JL 0x13005e72
13005e87  33f6                 XOR ESI,ESI
13005e89  bae0870013           MOV EDX,0x130087e0
13005e8e  8bc6                 MOV EAX,ESI
13005e90  8bce                 MOV ECX,ESI
13005e92  83e0e7               AND EAX,0xffffffe7
13005e95  83e11f               AND ECX,0x1f
13005e98  c1f803               SAR EAX,0x3
13005e9b  c1e102               SHL ECX,0x2
13005e9e  8b80509d0013         MOV EAX,dword ptr [EAX + 0x13009d50]
13005ea4  8d0cc9               LEA ECX,[ECX + ECX*0x8]
13005ea7  8b0408               MOV EAX,dword ptr [EAX + ECX*0x1]
13005eaa  83f8ff               CMP EAX,-0x1
13005ead  7404                 JZ 0x13005eb3
13005eaf  85c0                 TEST EAX,EAX
13005eb1  7506                 JNZ 0x13005eb9
13005eb3  c702ffffffff         MOV dword ptr [EDX],0xffffffff
13005eb9  83c220               ADD EDX,0x20
13005ebc  46                   INC ESI
13005ebd  81fa40880013         CMP EDX,0x13008840
13005ec3  72c9                 JC 0x13005e8e
13005ec5  5e                   POP ESI
13005ec6  c3                   RET

; ==== FUNCTION FUN_13005ec7 entry=13005ec7 sig=undefined FUN_13005ec7(void)
13005ec7  cc                   INT3

; ==== FUNCTION FUN_13005ec8 entry=13005ec8 sig=undefined FUN_13005ec8(void)
13005ec8  cc                   INT3

; ==== FUNCTION FUN_13005ec9 entry=13005ec9 sig=undefined FUN_13005ec9(void)
13005ec9  cc                   INT3

; ==== FUNCTION FUN_13005eca entry=13005eca sig=undefined FUN_13005eca(void)
13005eca  cc                   INT3

; ==== FUNCTION FUN_13005ecb entry=13005ecb sig=undefined FUN_13005ecb(void)
13005ecb  cc                   INT3

; ==== FUNCTION FUN_13005ecc entry=13005ecc sig=undefined FUN_13005ecc(void)
13005ecc  cc                   INT3

; ==== FUNCTION FUN_13005ecd entry=13005ecd sig=undefined FUN_13005ecd(void)
13005ecd  cc                   INT3

; ==== FUNCTION FUN_13005ece entry=13005ece sig=undefined FUN_13005ece(void)
13005ece  cc                   INT3

; ==== FUNCTION FUN_13005ecf entry=13005ecf sig=undefined FUN_13005ecf(void)
13005ecf  cc                   INT3

; ==== FUNCTION FUN_13005ed0 entry=13005ed0 sig=undefined FUN_13005ed0(void)
13005ed0  e8ab010000           CALL 0x13006080
13005ed5  803d7483001300       CMP byte ptr [0x13008374],0x0
13005edc  7405                 JZ 0x13005ee3
13005ede  e94d000000           JMP 0x13005f30
13005ee3  c3                   RET

; ==== FUNCTION FUN_13005ee4 entry=13005ee4 sig=undefined FUN_13005ee4(void)
13005ee4  cc                   INT3

; ==== FUNCTION FUN_13005ee5 entry=13005ee5 sig=undefined FUN_13005ee5(void)
13005ee5  cc                   INT3

; ==== FUNCTION FUN_13005ee6 entry=13005ee6 sig=undefined FUN_13005ee6(void)
13005ee6  cc                   INT3

; ==== FUNCTION FUN_13005ee7 entry=13005ee7 sig=undefined FUN_13005ee7(void)
13005ee7  cc                   INT3

; ==== FUNCTION FUN_13005ee8 entry=13005ee8 sig=undefined FUN_13005ee8(void)
13005ee8  cc                   INT3

; ==== FUNCTION FUN_13005ee9 entry=13005ee9 sig=undefined FUN_13005ee9(void)
13005ee9  cc                   INT3

; ==== FUNCTION FUN_13005eea entry=13005eea sig=undefined FUN_13005eea(void)
13005eea  cc                   INT3

; ==== FUNCTION FUN_13005eeb entry=13005eeb sig=undefined FUN_13005eeb(void)
13005eeb  cc                   INT3

; ==== FUNCTION FUN_13005eec entry=13005eec sig=undefined FUN_13005eec(void)
13005eec  cc                   INT3

; ==== FUNCTION FUN_13005eed entry=13005eed sig=undefined FUN_13005eed(void)
13005eed  cc                   INT3

; ==== FUNCTION FUN_13005eee entry=13005eee sig=undefined FUN_13005eee(void)
13005eee  cc                   INT3

; ==== FUNCTION FUN_13005eef entry=13005eef sig=undefined FUN_13005eef(void)
13005eef  cc                   INT3

; ==== FUNCTION __callnewh entry=13005ef0 sig=int __cdecl __callnewh(size_t _Size)
13005ef0  6a09                 PUSH 0x9
13005ef2  e8f9faffff           CALL 0x130059f0
13005ef7  83c404               ADD ESP,0x4
13005efa  a1288d0013           MOV EAX,[0x13008d28]
13005eff  85c0                 TEST EAX,EAX
13005f01  741e                 JZ 0x13005f21
13005f03  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
13005f07  51                   PUSH ECX
13005f08  ffd0                 CALL EAX
13005f0a  83c404               ADD ESP,0x4
13005f0d  85c0                 TEST EAX,EAX
13005f0f  7410                 JZ 0x13005f21
13005f11  6a09                 PUSH 0x9
13005f13  e848fbffff           CALL 0x13005a60
13005f18  83c404               ADD ESP,0x4
13005f1b  b801000000           MOV EAX,0x1
13005f20  c3                   RET
13005f21  6a09                 PUSH 0x9
13005f23  e838fbffff           CALL 0x13005a60
13005f28  83c404               ADD ESP,0x4
13005f2b  33c0                 XOR EAX,EAX
13005f2d  c3                   RET
; undefined 2 bytes at 13005f2e

; ==== FUNCTION FUN_13005f30 entry=13005f30 sig=int __stdcall FUN_13005f30(void)
13005f30  53                   PUSH EBX
13005f31  56                   PUSH ESI
13005f32  57                   PUSH EDI
13005f33  33db                 XOR EBX,EBX
13005f35  55                   PUSH EBP
13005f36  6a02                 PUSH 0x2
13005f38  bd03000000           MOV EBP,0x3
13005f3d  e8aefaffff           CALL 0x130059f0
13005f42  83c404               ADD ESP,0x4
13005f45  392d409d0013         CMP dword ptr [0x13009d40],EBP
13005f4b  7e6a                 JLE 0x13005fb7
13005f4d  be0c000000           MOV ESI,0xc
13005f52  8b3d8ca10013         MOV EDI,dword ptr [0x1300a18c]
13005f58  a1388d0013           MOV EAX,[0x13008d38]
13005f5d  8b0430               MOV EAX,dword ptr [EAX + ESI*0x1]
13005f60  85c0                 TEST EAX,EAX
13005f62  7447                 JZ 0x13005fab
13005f64  f6400c83             TEST byte ptr [EAX + 0xc],0x83
13005f68  740f                 JZ 0x13005f79
13005f6a  50                   PUSH EAX
13005f6b  e8f0010000           CALL 0x13006160
13005f70  83c404               ADD ESP,0x4
13005f73  83f8ff               CMP EAX,-0x1
13005f76  7401                 JZ 0x13005f79
13005f78  43                   INC EBX
13005f79  83fe50               CMP ESI,0x50
13005f7c  7c2d                 JL 0x13005fab
13005f7e  a1388d0013           MOV EAX,[0x13008d38]
13005f83  8b0430               MOV EAX,dword ptr [EAX + ESI*0x1]
13005f86  83c020               ADD EAX,0x20
13005f89  50                   PUSH EAX
13005f8a  ffd7                 CALL EDI
13005f8c  8b0d388d0013         MOV ECX,dword ptr [0x13008d38]
13005f92  8b1431               MOV EDX,dword ptr [ECX + ESI*0x1]
13005f95  52                   PUSH EDX
13005f96  e825fcffff           CALL 0x13005bc0
13005f9b  83c404               ADD ESP,0x4
13005f9e  8b0d388d0013         MOV ECX,dword ptr [0x13008d38]
13005fa4  c7043100000000       MOV dword ptr [ECX + ESI*0x1],0x0
13005fab  83c604               ADD ESI,0x4
13005fae  45                   INC EBP
13005faf  392d409d0013         CMP dword ptr [0x13009d40],EBP
13005fb5  7fa1                 JG 0x13005f58
13005fb7  6a02                 PUSH 0x2
13005fb9  e8a2faffff           CALL 0x13005a60
13005fbe  83c404               ADD ESP,0x4
13005fc1  8bc3                 MOV EAX,EBX
13005fc3  5d                   POP EBP
13005fc4  5f                   POP EDI
13005fc5  5e                   POP ESI
13005fc6  5b                   POP EBX
13005fc7  c3                   RET
; undefined 8 bytes at 13005fc8

; ==== FUNCTION __fflush_lk entry=13005fd0 sig=int __cdecl __fflush_lk(FILE * param_1)
13005fd0  56                   PUSH ESI
13005fd1  8b742408             MOV ESI,dword ptr [ESP + 0x8]
13005fd5  56                   PUSH ESI
13005fd6  e835000000           CALL 0x13006010
13005fdb  83c404               ADD ESP,0x4
13005fde  85c0                 TEST EAX,EAX
13005fe0  7407                 JZ 0x13005fe9
13005fe2  b8ffffffff           MOV EAX,0xffffffff
13005fe7  5e                   POP ESI
13005fe8  c3                   RET
13005fe9  f6460d40             TEST byte ptr [ESI + 0xd],0x40
13005fed  7419                 JZ 0x13006008
13005fef  8b4610               MOV EAX,dword ptr [ESI + 0x10]
13005ff2  50                   PUSH EAX
13005ff3  e808020000           CALL 0x13006200
13005ff8  83c404               ADD ESP,0x4
13005ffb  83f801               CMP EAX,0x1
13005ffe  b800000000           MOV EAX,0x0
13006003  5e                   POP ESI
13006004  83d0ff               ADC EAX,-0x1
13006007  c3                   RET
13006008  33c0                 XOR EAX,EAX
1300600a  5e                   POP ESI
1300600b  c3                   RET
; undefined 4 bytes at 1300600c

; ==== FUNCTION __flush entry=13006010 sig=int __cdecl __flush(FILE * _File)
13006010  53                   PUSH EBX
13006011  56                   PUSH ESI
13006012  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
13006016  57                   PUSH EDI
13006017  33ff                 XOR EDI,EDI
13006019  8b460c               MOV EAX,dword ptr [ESI + 0xc]
1300601c  8bc8                 MOV ECX,EAX
1300601e  80e103               AND CL,0x3
13006021  80f902               CMP CL,0x2
13006024  753c                 JNZ 0x13006062
13006026  a908010000           TEST EAX,0x108
1300602b  7435                 JZ 0x13006062
1300602d  8b4608               MOV EAX,dword ptr [ESI + 0x8]
13006030  8b1e                 MOV EBX,dword ptr [ESI]
13006032  2bd8                 SUB EBX,EAX
13006034  85db                 TEST EBX,EBX
13006036  7e2a                 JLE 0x13006062
13006038  53                   PUSH EBX
13006039  50                   PUSH EAX
1300603a  8b4610               MOV EAX,dword ptr [ESI + 0x10]
1300603d  50                   PUSH EAX
1300603e  e86d020000           CALL 0x130062b0
13006043  83c40c               ADD ESP,0xc
13006046  3bc3                 CMP EAX,EBX
13006048  750f                 JNZ 0x13006059
1300604a  8b460c               MOV EAX,dword ptr [ESI + 0xc]
1300604d  a880                 TEST AL,0x80
1300604f  7411                 JZ 0x13006062
13006051  83e0fd               AND EAX,0xfffffffd
13006054  89460c               MOV dword ptr [ESI + 0xc],EAX
13006057  eb09                 JMP 0x13006062
13006059  834e0c20             OR dword ptr [ESI + 0xc],0x20
1300605d  bfffffffff           MOV EDI,0xffffffff
13006062  8b4608               MOV EAX,dword ptr [ESI + 0x8]
13006065  8906                 MOV dword ptr [ESI],EAX
13006067  8bc7                 MOV EAX,EDI
13006069  c7460400000000       MOV dword ptr [ESI + 0x4],0x0
13006070  5f                   POP EDI
13006071  5e                   POP ESI
13006072  5b                   POP EBX
13006073  c3                   RET
; undefined 12 bytes at 13006074

; ==== FUNCTION FUN_13006080 entry=13006080 sig=undefined __stdcall FUN_13006080(void)
13006080  6a01                 PUSH 0x1

; ==== FUNCTION FUN_13006082 entry=13006082 sig=undefined FUN_13006082(void)
13006082  e809000000           CALL 0x13006090
13006087  83c404               ADD ESP,0x4
1300608a  c3                   RET

; ==== FUNCTION FUN_1300608b entry=1300608b sig=undefined FUN_1300608b(void)
1300608b  cc                   INT3

; ==== FUNCTION FUN_1300608c entry=1300608c sig=undefined FUN_1300608c(void)
1300608c  cc                   INT3

; ==== FUNCTION FUN_1300608d entry=1300608d sig=undefined FUN_1300608d(void)
1300608d  cc                   INT3

; ==== FUNCTION FUN_1300608e entry=1300608e sig=undefined FUN_1300608e(void)
1300608e  cc                   INT3

; ==== FUNCTION FUN_1300608f entry=1300608f sig=undefined FUN_1300608f(void)
1300608f  cc                   INT3

; ==== FUNCTION flsall entry=13006090 sig=int __cdecl flsall(int param_1)
13006090  83ec04               SUB ESP,0x4
13006093  53                   PUSH EBX
13006094  56                   PUSH ESI
13006095  57                   PUSH EDI
13006096  33db                 XOR EBX,EBX
13006098  55                   PUSH EBP
13006099  33ff                 XOR EDI,EDI
1300609b  895c2410             MOV dword ptr [ESP + 0x10],EBX
1300609f  6a02                 PUSH 0x2
130060a1  e84af9ffff           CALL 0x130059f0
130060a6  83c404               ADD ESP,0x4
130060a9  391d409d0013         CMP dword ptr [0x13009d40],EBX
130060af  0f8e85000000         JLE 0x1300613a
130060b5  33ed                 XOR EBP,EBP
130060b7  8b742418             MOV ESI,dword ptr [ESP + 0x18]
130060bb  a1388d0013           MOV EAX,[0x13008d38]
130060c0  8b0428               MOV EAX,dword ptr [EAX + EBP*0x1]
130060c3  85c0                 TEST EAX,EAX
130060c5  7465                 JZ 0x1300612c
130060c7  f6400c83             TEST byte ptr [EAX + 0xc],0x83
130060cb  745f                 JZ 0x1300612c
130060cd  50                   PUSH EAX
130060ce  57                   PUSH EDI
130060cf  e8ecf9ffff           CALL 0x13005ac0
130060d4  83c408               ADD ESP,0x8
130060d7  a1388d0013           MOV EAX,[0x13008d38]
130060dc  8b0c28               MOV ECX,dword ptr [EAX + EBP*0x1]
130060df  8b410c               MOV EAX,dword ptr [ECX + 0xc]
130060e2  a883                 TEST AL,0x83
130060e4  7434                 JZ 0x1300611a
130060e6  83fe01               CMP ESI,0x1
130060e9  7511                 JNZ 0x130060fc
130060eb  51                   PUSH ECX
130060ec  e8dffeffff           CALL 0x13005fd0
130060f1  83c404               ADD ESP,0x4
130060f4  83f8ff               CMP EAX,-0x1
130060f7  7421                 JZ 0x1300611a
130060f9  43                   INC EBX
130060fa  eb1e                 JMP 0x1300611a
130060fc  85f6                 TEST ESI,ESI
130060fe  751a                 JNZ 0x1300611a
13006100  a802                 TEST AL,0x2
13006102  7416                 JZ 0x1300611a
13006104  51                   PUSH ECX
13006105  e8c6feffff           CALL 0x13005fd0
1300610a  83c404               ADD ESP,0x4
1300610d  83f8ff               CMP EAX,-0x1
13006110  7508                 JNZ 0x1300611a
13006112  c7442410ffffffff     MOV dword ptr [ESP + 0x10],0xffffffff
1300611a  a1388d0013           MOV EAX,[0x13008d38]
1300611f  8b0c28               MOV ECX,dword ptr [EAX + EBP*0x1]
13006122  51                   PUSH ECX
13006123  57                   PUSH EDI
13006124  e807faffff           CALL 0x13005b30
13006129  83c408               ADD ESP,0x8
1300612c  83c504               ADD EBP,0x4
1300612f  47                   INC EDI
13006130  3b3d409d0013         CMP EDI,dword ptr [0x13009d40]
13006136  7c83                 JL 0x130060bb
13006138  eb04                 JMP 0x1300613e
1300613a  8b742418             MOV ESI,dword ptr [ESP + 0x18]
1300613e  6a02                 PUSH 0x2
13006140  e81bf9ffff           CALL 0x13005a60
13006145  83c404               ADD ESP,0x4
13006148  8bc3                 MOV EAX,EBX
1300614a  83fe01               CMP ESI,0x1
1300614d  7404                 JZ 0x13006153
1300614f  8b442410             MOV EAX,dword ptr [ESP + 0x10]
13006153  5d                   POP EBP
13006154  5f                   POP EDI
13006155  5e                   POP ESI
13006156  5b                   POP EBX
13006157  83c404               ADD ESP,0x4
1300615a  c3                   RET
; undefined 5 bytes at 1300615b

; ==== FUNCTION _fclose entry=13006160 sig=int __cdecl _fclose(FILE * _File)
13006160  56                   PUSH ESI
13006161  57                   PUSH EDI
13006162  bfffffffff           MOV EDI,0xffffffff
13006167  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
1300616b  f6460c40             TEST byte ptr [ESI + 0xc],0x40
1300616f  740c                 JZ 0x1300617d
13006171  c7460c00000000       MOV dword ptr [ESI + 0xc],0x0
13006178  8bc7                 MOV EAX,EDI
1300617a  5f                   POP EDI
1300617b  5e                   POP ESI
1300617c  c3                   RET
1300617d  56                   PUSH ESI
1300617e  e8fdf8ffff           CALL 0x13005a80
13006183  83c404               ADD ESP,0x4
13006186  56                   PUSH ESI
13006187  e814000000           CALL 0x130061a0
1300618c  83c404               ADD ESP,0x4
1300618f  8bf8                 MOV EDI,EAX
13006191  56                   PUSH ESI
13006192  e859f9ffff           CALL 0x13005af0
13006197  83c404               ADD ESP,0x4
1300619a  8bc7                 MOV EAX,EDI
1300619c  5f                   POP EDI
1300619d  5e                   POP ESI
1300619e  c3                   RET
; undefined 1 bytes at 1300619f

; ==== FUNCTION __fclose_lk entry=130061a0 sig=int __cdecl __fclose_lk(FILE * param_1)
130061a0  56                   PUSH ESI
130061a1  57                   PUSH EDI
130061a2  bfffffffff           MOV EDI,0xffffffff
130061a7  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
130061ab  f6460c83             TEST byte ptr [ESI + 0xc],0x83
130061af  7442                 JZ 0x130061f3
130061b1  56                   PUSH ESI
130061b2  e859feffff           CALL 0x13006010
130061b7  83c404               ADD ESP,0x4
130061ba  8bf8                 MOV EDI,EAX
130061bc  56                   PUSH ESI
130061bd  e86e040000           CALL 0x13006630
130061c2  83c404               ADD ESP,0x4
130061c5  8b4610               MOV EAX,dword ptr [ESI + 0x10]
130061c8  50                   PUSH EAX
130061c9  e862030000           CALL 0x13006530
130061ce  83c404               ADD ESP,0x4
130061d1  85c0                 TEST EAX,EAX
130061d3  7d07                 JGE 0x130061dc
130061d5  bfffffffff           MOV EDI,0xffffffff
130061da  eb17                 JMP 0x130061f3
130061dc  8b461c               MOV EAX,dword ptr [ESI + 0x1c]
130061df  85c0                 TEST EAX,EAX
130061e1  7410                 JZ 0x130061f3
130061e3  50                   PUSH EAX
130061e4  e8d7f9ffff           CALL 0x13005bc0
130061e9  c7461c00000000       MOV dword ptr [ESI + 0x1c],0x0
130061f0  83c404               ADD ESP,0x4
130061f3  c7460c00000000       MOV dword ptr [ESI + 0xc],0x0
130061fa  8bc7                 MOV EAX,EDI
130061fc  5f                   POP EDI
130061fd  5e                   POP ESI
130061fe  c3                   RET
; undefined 1 bytes at 130061ff

; ==== FUNCTION __commit entry=13006200 sig=int __cdecl __commit(int _FileHandle)
13006200  53                   PUSH EBX
13006201  56                   PUSH ESI
13006202  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
13006206  57                   PUSH EDI
13006207  3b35509e0013         CMP ESI,dword ptr [0x13009e50]
1300620d  737f                 JNC 0x1300628e
1300620f  8bc6                 MOV EAX,ESI
13006211  83e0e7               AND EAX,0xffffffe7
13006214  c1f803               SAR EAX,0x3
13006217  8d98509d0013         LEA EBX,[EAX + 0x13009d50]
1300621d  8bc6                 MOV EAX,ESI
1300621f  83e01f               AND EAX,0x1f
13006222  8b0b                 MOV ECX,dword ptr [EBX]
13006224  c1e002               SHL EAX,0x2
13006227  8d3cc0               LEA EDI,[EAX + EAX*0x8]
1300622a  f644390401           TEST byte ptr [ECX + EDI*0x1 + 0x4],0x1
1300622f  745d                 JZ 0x1300628e
13006231  56                   PUSH ESI
13006232  e8c9050000           CALL 0x13006800
13006237  83c404               ADD ESP,0x4
1300623a  8b03                 MOV EAX,dword ptr [EBX]
1300623c  f644380401           TEST byte ptr [EAX + EDI*0x1 + 0x4],0x1
13006241  742c                 JZ 0x1300626f
13006243  56                   PUSH ESI
13006244  bf00000000           MOV EDI,0x0
13006249  e862050000           CALL 0x130067b0
1300624e  83c404               ADD ESP,0x4
13006251  50                   PUSH EAX
13006252  ff15cca10013         CALL dword ptr [0x1300a1cc]
13006258  85c0                 TEST EAX,EAX
1300625a  7508                 JNZ 0x13006264
1300625c  ff1570a10013         CALL dword ptr [0x1300a170]
13006262  8bf8                 MOV EDI,EAX
13006264  85ff                 TEST EDI,EDI
13006266  7417                 JZ 0x1300627f
13006268  e893040000           CALL 0x13006700
1300626d  8938                 MOV dword ptr [EAX],EDI
1300626f  bfffffffff           MOV EDI,0xffffffff
13006274  e877040000           CALL 0x130066f0
13006279  c70009000000         MOV dword ptr [EAX],0x9
1300627f  56                   PUSH ESI
13006280  e8eb050000           CALL 0x13006870
13006285  83c404               ADD ESP,0x4
13006288  8bc7                 MOV EAX,EDI
1300628a  5f                   POP EDI
1300628b  5e                   POP ESI
1300628c  5b                   POP EBX
1300628d  c3                   RET
1300628e  e85d040000           CALL 0x130066f0
13006293  5f                   POP EDI
13006294  c70009000000         MOV dword ptr [EAX],0x9
1300629a  b8ffffffff           MOV EAX,0xffffffff
1300629f  5e                   POP ESI
130062a0  5b                   POP EBX
130062a1  c3                   RET
; undefined 14 bytes at 130062a2

; ==== FUNCTION __write entry=130062b0 sig=int __cdecl __write(int _FileHandle, void * _Buf, uint _MaxCharCount)
130062b0  56                   PUSH ESI
130062b1  57                   PUSH EDI
130062b2  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
130062b6  3935509e0013         CMP dword ptr [0x13009e50],ESI
130062bc  764c                 JBE 0x1300630a
130062be  8bc6                 MOV EAX,ESI
130062c0  8bce                 MOV ECX,ESI
130062c2  83e0e7               AND EAX,0xffffffe7
130062c5  83e11f               AND ECX,0x1f
130062c8  c1f803               SAR EAX,0x3
130062cb  c1e102               SHL ECX,0x2
130062ce  8b90509d0013         MOV EDX,dword ptr [EAX + 0x13009d50]
130062d4  8d04c9               LEA EAX,[ECX + ECX*0x8]
130062d7  f644020401           TEST byte ptr [EDX + EAX*0x1 + 0x4],0x1
130062dc  742c                 JZ 0x1300630a
130062de  56                   PUSH ESI
130062df  e81c050000           CALL 0x13006800
130062e4  8b442418             MOV EAX,dword ptr [ESP + 0x18]
130062e8  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
130062ec  83c404               ADD ESP,0x4
130062ef  50                   PUSH EAX
130062f0  51                   PUSH ECX
130062f1  56                   PUSH ESI
130062f2  e839000000           CALL 0x13006330
130062f7  83c40c               ADD ESP,0xc
130062fa  8bf8                 MOV EDI,EAX
130062fc  56                   PUSH ESI
130062fd  e86e050000           CALL 0x13006870
13006302  83c404               ADD ESP,0x4
13006305  8bc7                 MOV EAX,EDI
13006307  5f                   POP EDI
13006308  5e                   POP ESI
13006309  c3                   RET
1300630a  e8e1030000           CALL 0x130066f0
1300630f  c70009000000         MOV dword ptr [EAX],0x9
13006315  e8e6030000           CALL 0x13006700
1300631a  5f                   POP EDI
1300631b  c70000000000         MOV dword ptr [EAX],0x0
13006321  b8ffffffff           MOV EAX,0xffffffff
13006326  5e                   POP ESI
13006327  c3                   RET
; undefined 8 bytes at 13006328

; ==== FUNCTION FUN_13006330 entry=13006330 sig=int __cdecl FUN_13006330(uint param_1, char * param_2, uint param_3)
13006330  81ec18040000         SUB ESP,0x418
13006336  53                   PUSH EBX
13006337  56                   PUSH ESI
13006338  57                   PUSH EDI
13006339  33db                 XOR EBX,EBX
1300633b  895c241c             MOV dword ptr [ESP + 0x1c],EBX
1300633f  55                   PUSH EBP
13006340  8bac2434040000       MOV EBP,dword ptr [ESP + 0x434]
13006347  3beb                 CMP EBP,EBX
13006349  750d                 JNZ 0x13006358
1300634b  33c0                 XOR EAX,EAX
1300634d  5d                   POP EBP
1300634e  5f                   POP EDI
1300634f  5e                   POP ESI
13006350  5b                   POP EBX
13006351  81c418040000         ADD ESP,0x418
13006357  c3                   RET
13006358  8b94242c040000       MOV EDX,dword ptr [ESP + 0x42c]
1300635f  8bc2                 MOV EAX,EDX
13006361  83e0e7               AND EAX,0xffffffe7
13006364  c1f803               SAR EAX,0x3
13006367  05509d0013           ADD EAX,0x13009d50
1300636c  89442418             MOV dword ptr [ESP + 0x18],EAX
13006370  8bc2                 MOV EAX,EDX
13006372  83e01f               AND EAX,0x1f
13006375  8b742418             MOV ESI,dword ptr [ESP + 0x18]
13006379  c1e002               SHL EAX,0x2
1300637c  8d0cc0               LEA ECX,[EAX + EAX*0x8]
1300637f  8b06                 MOV EAX,dword ptr [ESI]
13006381  894c241c             MOV dword ptr [ESP + 0x1c],ECX
13006385  f644080420           TEST byte ptr [EAX + ECX*0x1 + 0x4],0x20
1300638a  740d                 JZ 0x13006399
1300638c  6a02                 PUSH 0x2
1300638e  6a00                 PUSH 0x0
13006390  52                   PUSH EDX
13006391  e80a050000           CALL 0x130068a0
13006396  83c40c               ADD ESP,0xc
13006399  8b442418             MOV EAX,dword ptr [ESP + 0x18]
1300639d  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
130063a1  0308                 ADD ECX,dword ptr [EAX]
130063a3  f6410480             TEST byte ptr [ECX + 0x4],0x80
130063a7  0f8488000000         JZ 0x13006435
130063ad  c744241000000000     MOV dword ptr [ESP + 0x10],0x0
130063b5  8bbc2430040000       MOV EDI,dword ptr [ESP + 0x430]
130063bc  8bc7                 MOV EAX,EDI
130063be  2b842430040000       SUB EAX,dword ptr [ESP + 0x430]
130063c5  3bc5                 CMP EAX,EBP
130063c7  0f83a1000000         JNC 0x1300646e
130063cd  8d742424             LEA ESI,[ESP + 0x24]
130063d1  8bc7                 MOV EAX,EDI
130063d3  2b842430040000       SUB EAX,dword ptr [ESP + 0x430]
130063da  3bc5                 CMP EAX,EBP
130063dc  731e                 JNC 0x130063fc
130063de  8a07                 MOV AL,byte ptr [EDI]
130063e0  47                   INC EDI
130063e1  3c0a                 CMP AL,0xa
130063e3  7505                 JNZ 0x130063ea
130063e5  c6060d               MOV byte ptr [ESI],0xd
130063e8  43                   INC EBX
130063e9  46                   INC ESI
130063ea  8806                 MOV byte ptr [ESI],AL
130063ec  46                   INC ESI
130063ed  8bc6                 MOV EAX,ESI
130063ef  8d4c2424             LEA ECX,[ESP + 0x24]
130063f3  2bc1                 SUB EAX,ECX
130063f5  3d00040000           CMP EAX,0x400
130063fa  7cd5                 JL 0x130063d1
130063fc  8d442424             LEA EAX,[ESP + 0x24]
13006400  6a00                 PUSH 0x0
13006402  2bf0                 SUB ESI,EAX
13006404  8d4c2428             LEA ECX,[ESP + 0x28]
13006408  8d442418             LEA EAX,[ESP + 0x18]
1300640c  8b54241c             MOV EDX,dword ptr [ESP + 0x1c]
13006410  50                   PUSH EAX
13006411  56                   PUSH ESI
13006412  51                   PUSH ECX
13006413  8b02                 MOV EAX,dword ptr [EDX]
13006415  8b4c242c             MOV ECX,dword ptr [ESP + 0x2c]
13006419  8b1408               MOV EDX,dword ptr [EAX + ECX*0x1]
1300641c  52                   PUSH EDX
1300641d  ff15b0a10013         CALL dword ptr [0x1300a1b0]
13006423  85c0                 TEST EAX,EAX
13006425  743d                 JZ 0x13006464
13006427  8b442414             MOV EAX,dword ptr [ESP + 0x14]
1300642b  01442420             ADD dword ptr [ESP + 0x20],EAX
1300642f  3bf0                 CMP ESI,EAX
13006431  7e89                 JLE 0x130063bc
13006433  eb39                 JMP 0x1300646e
13006435  8d442414             LEA EAX,[ESP + 0x14]
13006439  6a00                 PUSH 0x0
1300643b  8b942434040000       MOV EDX,dword ptr [ESP + 0x434]
13006442  50                   PUSH EAX
13006443  55                   PUSH EBP
13006444  8b09                 MOV ECX,dword ptr [ECX]
13006446  52                   PUSH EDX
13006447  51                   PUSH ECX
13006448  ff15b0a10013         CALL dword ptr [0x1300a1b0]
1300644e  85c0                 TEST EAX,EAX
13006450  7412                 JZ 0x13006464
13006452  c744241000000000     MOV dword ptr [ESP + 0x10],0x0
1300645a  8b442414             MOV EAX,dword ptr [ESP + 0x14]
1300645e  89442420             MOV dword ptr [ESP + 0x20],EAX
13006462  eb0a                 JMP 0x1300646e
13006464  ff1570a10013         CALL dword ptr [0x1300a170]
1300646a  89442410             MOV dword ptr [ESP + 0x10],EAX
1300646e  837c242000           CMP dword ptr [ESP + 0x20],0x0
13006473  0f85a1000000         JNZ 0x1300651a
13006479  837c241000           CMP dword ptr [ESP + 0x10],0x0
1300647e  744a                 JZ 0x130064ca
13006480  837c241005           CMP dword ptr [ESP + 0x10],0x5
13006485  7526                 JNZ 0x130064ad
13006487  e864020000           CALL 0x130066f0
1300648c  c70009000000         MOV dword ptr [EAX],0x9
13006492  e869020000           CALL 0x13006700
13006497  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
1300649b  5d                   POP EBP
1300649c  5f                   POP EDI
1300649d  8908                 MOV dword ptr [EAX],ECX
1300649f  b8ffffffff           MOV EAX,0xffffffff
130064a4  5e                   POP ESI
130064a5  5b                   POP EBX
130064a6  81c418040000         ADD ESP,0x418
130064ac  c3                   RET
130064ad  8b4c2410             MOV ECX,dword ptr [ESP + 0x10]
130064b1  51                   PUSH ECX
130064b2  e8b9010000           CALL 0x13006670
130064b7  83c404               ADD ESP,0x4
130064ba  b8ffffffff           MOV EAX,0xffffffff
130064bf  5d                   POP EBP
130064c0  5f                   POP EDI
130064c1  5e                   POP ESI
130064c2  5b                   POP EBX
130064c3  81c418040000         ADD ESP,0x418
130064c9  c3                   RET
130064ca  8b442418             MOV EAX,dword ptr [ESP + 0x18]
130064ce  8b4c241c             MOV ECX,dword ptr [ESP + 0x1c]
130064d2  8b10                 MOV EDX,dword ptr [EAX]
130064d4  f6440a0440           TEST byte ptr [EDX + ECX*0x1 + 0x4],0x40
130064d9  7419                 JZ 0x130064f4
130064db  8b842430040000       MOV EAX,dword ptr [ESP + 0x430]
130064e2  80381a               CMP byte ptr [EAX],0x1a
130064e5  750d                 JNZ 0x130064f4
130064e7  33c0                 XOR EAX,EAX
130064e9  5d                   POP EBP
130064ea  5f                   POP EDI
130064eb  5e                   POP ESI
130064ec  5b                   POP EBX
130064ed  81c418040000         ADD ESP,0x418
130064f3  c3                   RET
130064f4  e8f7010000           CALL 0x130066f0
130064f9  c7001c000000         MOV dword ptr [EAX],0x1c
130064ff  e8fc010000           CALL 0x13006700
13006504  5d                   POP EBP
13006505  c70000000000         MOV dword ptr [EAX],0x0
1300650b  b8ffffffff           MOV EAX,0xffffffff
13006510  5f                   POP EDI
13006511  5e                   POP ESI
13006512  5b                   POP EBX
13006513  81c418040000         ADD ESP,0x418
13006519  c3                   RET
1300651a  8b442420             MOV EAX,dword ptr [ESP + 0x20]
1300651e  5d                   POP EBP
1300651f  2bc3                 SUB EAX,EBX
13006521  5f                   POP EDI
13006522  5e                   POP ESI
13006523  5b                   POP EBX
13006524  81c418040000         ADD ESP,0x418
1300652a  c3                   RET
; undefined 5 bytes at 1300652b

; ==== FUNCTION __close entry=13006530 sig=int __cdecl __close(int _FileHandle)
13006530  56                   PUSH ESI
13006531  57                   PUSH EDI
13006532  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
13006536  3935509e0013         CMP dword ptr [0x13009e50],ESI
1300653c  7642                 JBE 0x13006580
1300653e  8bc6                 MOV EAX,ESI
13006540  8bce                 MOV ECX,ESI
13006542  83e0e7               AND EAX,0xffffffe7
13006545  83e11f               AND ECX,0x1f
13006548  c1f803               SAR EAX,0x3
1300654b  c1e102               SHL ECX,0x2
1300654e  8b90509d0013         MOV EDX,dword ptr [EAX + 0x13009d50]
13006554  8d04c9               LEA EAX,[ECX + ECX*0x8]
13006557  f644020401           TEST byte ptr [EDX + EAX*0x1 + 0x4],0x1
1300655c  7422                 JZ 0x13006580
1300655e  56                   PUSH ESI
1300655f  e89c020000           CALL 0x13006800
13006564  83c404               ADD ESP,0x4
13006567  56                   PUSH ESI
13006568  e833000000           CALL 0x130065a0
1300656d  83c404               ADD ESP,0x4
13006570  8bf8                 MOV EDI,EAX
13006572  56                   PUSH ESI
13006573  e8f8020000           CALL 0x13006870
13006578  83c404               ADD ESP,0x4
1300657b  8bc7                 MOV EAX,EDI
1300657d  5f                   POP EDI
1300657e  5e                   POP ESI
1300657f  c3                   RET
13006580  e86b010000           CALL 0x130066f0
13006585  c70009000000         MOV dword ptr [EAX],0x9
1300658b  e870010000           CALL 0x13006700
13006590  5f                   POP EDI
13006591  c70000000000         MOV dword ptr [EAX],0x0
13006597  b8ffffffff           MOV EAX,0xffffffff
1300659c  5e                   POP ESI
1300659d  c3                   RET
; undefined 2 bytes at 1300659e

; ==== FUNCTION __close_lk entry=130065a0 sig=undefined4 __cdecl __close_lk(uint param_1)
130065a0  56                   PUSH ESI
130065a1  57                   PUSH EDI
130065a2  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
130065a6  83fe01               CMP ESI,0x1
130065a9  7405                 JZ 0x130065b0
130065ab  83fe02               CMP ESI,0x2
130065ae  751a                 JNZ 0x130065ca
130065b0  6a02                 PUSH 0x2
130065b2  e8f9010000           CALL 0x130067b0
130065b7  83c404               ADD ESP,0x4
130065ba  8bf8                 MOV EDI,EAX
130065bc  6a01                 PUSH 0x1
130065be  e8ed010000           CALL 0x130067b0
130065c3  83c404               ADD ESP,0x4
130065c6  3bf8                 CMP EDI,EAX
130065c8  741e                 JZ 0x130065e8
130065ca  56                   PUSH ESI
130065cb  e8e0010000           CALL 0x130067b0
130065d0  83c404               ADD ESP,0x4
130065d3  50                   PUSH EAX
130065d4  ff1584a10013         CALL dword ptr [0x1300a184]
130065da  85c0                 TEST EAX,EAX
130065dc  750a                 JNZ 0x130065e8
130065de  ff1570a10013         CALL dword ptr [0x1300a170]
130065e4  8bf8                 MOV EDI,EAX
130065e6  eb02                 JMP 0x130065ea
130065e8  33ff                 XOR EDI,EDI
130065ea  56                   PUSH ESI
130065eb  e820010000           CALL 0x13006710
130065f0  83c404               ADD ESP,0x4
130065f3  85ff                 TEST EDI,EDI
130065f5  7411                 JZ 0x13006608
130065f7  57                   PUSH EDI
130065f8  e873000000           CALL 0x13006670
130065fd  83c404               ADD ESP,0x4
13006600  b8ffffffff           MOV EAX,0xffffffff
13006605  5f                   POP EDI
13006606  5e                   POP ESI
13006607  c3                   RET
13006608  8bc6                 MOV EAX,ESI
1300660a  83e61f               AND ESI,0x1f
1300660d  c1e602               SHL ESI,0x2
13006610  83e0e7               AND EAX,0xffffffe7
13006613  c1f803               SAR EAX,0x3
13006616  5f                   POP EDI
13006617  8b88509d0013         MOV ECX,dword ptr [EAX + 0x13009d50]
1300661d  8d04f6               LEA EAX,[ESI + ESI*0x8]
13006620  5e                   POP ESI
13006621  c644010400           MOV byte ptr [ECX + EAX*0x1 + 0x4],0x0
13006626  33c0                 XOR EAX,EAX
13006628  c3                   RET
; undefined 7 bytes at 13006629

; ==== FUNCTION __freebuf entry=13006630 sig=void __cdecl __freebuf(FILE * _File)
13006630  56                   PUSH ESI
13006631  8b742408             MOV ESI,dword ptr [ESP + 0x8]
13006635  8b460c               MOV EAX,dword ptr [ESI + 0xc]
13006638  a883                 TEST AL,0x83
1300663a  742b                 JZ 0x13006667
1300663c  a808                 TEST AL,0x8
1300663e  7427                 JZ 0x13006667
13006640  8b4608               MOV EAX,dword ptr [ESI + 0x8]
13006643  50                   PUSH EAX
13006644  e877f5ffff           CALL 0x13005bc0
13006649  83c404               ADD ESP,0x4
1300664c  c70600000000         MOV dword ptr [ESI],0x0
13006652  81660cf7fbffff       AND dword ptr [ESI + 0xc],0xfffffbf7
13006659  c7460800000000       MOV dword ptr [ESI + 0x8],0x0
13006660  c7460400000000       MOV dword ptr [ESI + 0x4],0x0
13006667  5e                   POP ESI
13006668  c3                   RET
; undefined 7 bytes at 13006669

; ==== FUNCTION __dosmaperr entry=13006670 sig=void __cdecl __dosmaperr(ulong param_1)
13006670  56                   PUSH ESI
13006671  e88a000000           CALL 0x13006700
13006676  8b4c2408             MOV ECX,dword ptr [ESP + 0x8]
1300667a  33f6                 XOR ESI,ESI
1300667c  8908                 MOV dword ptr [EAX],ECX
1300667e  b8588a0013           MOV EAX,0x13008a58
13006683  3908                 CMP dword ptr [EAX],ECX
13006685  7422                 JZ 0x130066a9
13006687  83c008               ADD EAX,0x8
1300668a  46                   INC ESI
1300668b  3dc08b0013           CMP EAX,0x13008bc0
13006690  72f1                 JC 0x13006683
13006692  83f913               CMP ECX,0x13
13006695  7222                 JC 0x130066b9
13006697  83f924               CMP ECX,0x24
1300669a  771d                 JA 0x130066b9
1300669c  e84f000000           CALL 0x130066f0
130066a1  5e                   POP ESI
130066a2  c7000d000000         MOV dword ptr [EAX],0xd
130066a8  c3                   RET
130066a9  e842000000           CALL 0x130066f0
130066ae  8b0cf55c8a0013       MOV ECX,dword ptr [ESI*0x8 + 0x13008a5c]
130066b5  5e                   POP ESI
130066b6  8908                 MOV dword ptr [EAX],ECX
130066b8  c3                   RET
130066b9  81f9bc000000         CMP ECX,0xbc
130066bf  7215                 JC 0x130066d6
130066c1  81f9ca000000         CMP ECX,0xca
130066c7  770d                 JA 0x130066d6
130066c9  e822000000           CALL 0x130066f0
130066ce  5e                   POP ESI
130066cf  c70008000000         MOV dword ptr [EAX],0x8
130066d5  c3                   RET
130066d6  e815000000           CALL 0x130066f0
130066db  5e                   POP ESI
130066dc  c70016000000         MOV dword ptr [EAX],0x16
130066e2  c3                   RET
; undefined 13 bytes at 130066e3

; ==== FUNCTION FUN_130066f0 entry=130066f0 sig=int * __stdcall FUN_130066f0(void)
130066f0  e86be4ffff           CALL 0x13004b60
130066f5  83c008               ADD EAX,0x8
130066f8  c3                   RET
; undefined 7 bytes at 130066f9

; ==== FUNCTION FUN_13006700 entry=13006700 sig=ulong * __stdcall FUN_13006700(void)
13006700  e85be4ffff           CALL 0x13004b60
13006705  83c00c               ADD EAX,0xc
13006708  c3                   RET
; undefined 7 bytes at 13006709

; ==== FUNCTION FUN_13006710 entry=13006710 sig=undefined4 __cdecl FUN_13006710(uint param_1)
13006710  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
13006714  56                   PUSH ESI
13006715  57                   PUSH EDI
13006716  3b0d509e0013         CMP ECX,dword ptr [0x13009e50]
1300671c  7365                 JNC 0x13006783
1300671e  8bc1                 MOV EAX,ECX
13006720  83e0e7               AND EAX,0xffffffe7
13006723  c1f803               SAR EAX,0x3
13006726  8db8509d0013         LEA EDI,[EAX + 0x13009d50]
1300672c  8bc1                 MOV EAX,ECX
1300672e  83e01f               AND EAX,0x1f
13006731  c1e002               SHL EAX,0x2
13006734  8d34c0               LEA ESI,[EAX + EAX*0x8]
13006737  8b07                 MOV EAX,dword ptr [EDI]
13006739  03c6                 ADD EAX,ESI
1300673b  f6400401             TEST byte ptr [EAX + 0x4],0x1
1300673f  7442                 JZ 0x13006783
13006741  8338ff               CMP dword ptr [EAX],-0x1
13006744  743d                 JZ 0x13006783
13006746  833d3883001301       CMP dword ptr [0x13008338],0x1
1300674d  7526                 JNZ 0x13006775
1300674f  85c9                 TEST ECX,ECX
13006751  740c                 JZ 0x1300675f
13006753  83f901               CMP ECX,0x1
13006756  740d                 JZ 0x13006765
13006758  83f902               CMP ECX,0x2
1300675b  740e                 JZ 0x1300676b
1300675d  eb16                 JMP 0x13006775
1300675f  6a00                 PUSH 0x0
13006761  6af6                 PUSH -0xa
13006763  eb0a                 JMP 0x1300676f
13006765  6a00                 PUSH 0x0
13006767  6af5                 PUSH -0xb
13006769  eb04                 JMP 0x1300676f
1300676b  6a00                 PUSH 0x0
1300676d  6af4                 PUSH -0xc
1300676f  ff1588a10013         CALL dword ptr [0x1300a188]
13006775  8b07                 MOV EAX,dword ptr [EDI]
13006777  5f                   POP EDI
13006778  c70430ffffffff       MOV dword ptr [EAX + ESI*0x1],0xffffffff
1300677f  33c0                 XOR EAX,EAX
13006781  5e                   POP ESI
13006782  c3                   RET
13006783  e868ffffff           CALL 0x130066f0
13006788  c70009000000         MOV dword ptr [EAX],0x9
1300678e  e86dffffff           CALL 0x13006700
13006793  5f                   POP EDI
13006794  c70000000000         MOV dword ptr [EAX],0x0
1300679a  b8ffffffff           MOV EAX,0xffffffff
1300679f  5e                   POP ESI
130067a0  c3                   RET
; undefined 15 bytes at 130067a1

; ==== FUNCTION FUN_130067b0 entry=130067b0 sig=undefined4 __cdecl FUN_130067b0(uint param_1)
130067b0  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
130067b4  390d509e0013         CMP dword ptr [0x13009e50],ECX
130067ba  7622                 JBE 0x130067de
130067bc  8bc1                 MOV EAX,ECX
130067be  83e11f               AND ECX,0x1f
130067c1  c1e102               SHL ECX,0x2
130067c4  83e0e7               AND EAX,0xffffffe7
130067c7  c1f803               SAR EAX,0x3
130067ca  8d14c9               LEA EDX,[ECX + ECX*0x8]
130067cd  8b80509d0013         MOV EAX,dword ptr [EAX + 0x13009d50]
130067d3  03c2                 ADD EAX,EDX
130067d5  f6400401             TEST byte ptr [EAX + 0x4],0x1
130067d9  7403                 JZ 0x130067de
130067db  8b00                 MOV EAX,dword ptr [EAX]
130067dd  c3                   RET
130067de  e80dffffff           CALL 0x130066f0
130067e3  c70009000000         MOV dword ptr [EAX],0x9
130067e9  e812ffffff           CALL 0x13006700
130067ee  c70000000000         MOV dword ptr [EAX],0x0
130067f4  b8ffffffff           MOV EAX,0xffffffff
130067f9  c3                   RET
; undefined 6 bytes at 130067fa

; ==== FUNCTION __lock_fhandle entry=13006800 sig=int __cdecl __lock_fhandle(int _Filehandle)
13006800  8b442404             MOV EAX,dword ptr [ESP + 0x4]
13006804  53                   PUSH EBX
13006805  56                   PUSH ESI
13006806  8bc8                 MOV ECX,EAX
13006808  57                   PUSH EDI
13006809  83e1e7               AND ECX,0xffffffe7
1300680c  c1f903               SAR ECX,0x3
1300680f  83e01f               AND EAX,0x1f
13006812  c1e002               SHL EAX,0x2
13006815  8db9509d0013         LEA EDI,[ECX + 0x13009d50]
1300681b  8d34c0               LEA ESI,[EAX + EAX*0x8]
1300681e  8b1f                 MOV EBX,dword ptr [EDI]
13006820  03de                 ADD EBX,ESI
13006822  837b0800             CMP dword ptr [EBX + 0x8],0x0
13006826  7527                 JNZ 0x1300684f
13006828  6a11                 PUSH 0x11
1300682a  e8c1f1ffff           CALL 0x130059f0
1300682f  83c404               ADD ESP,0x4
13006832  837b0800             CMP dword ptr [EBX + 0x8],0x0
13006836  750d                 JNZ 0x13006845
13006838  8d430c               LEA EAX,[EBX + 0xc]
1300683b  50                   PUSH EAX
1300683c  ff15b4a10013         CALL dword ptr [0x1300a1b4]
13006842  ff4308               INC dword ptr [EBX + 0x8]
13006845  6a11                 PUSH 0x11
13006847  e814f2ffff           CALL 0x13005a60
1300684c  83c404               ADD ESP,0x4
1300684f  8b07                 MOV EAX,dword ptr [EDI]
13006851  03c6                 ADD EAX,ESI
13006853  83c00c               ADD EAX,0xc
13006856  50                   PUSH EAX
13006857  ff15b8a10013         CALL dword ptr [0x1300a1b8]
1300685d  5f                   POP EDI
1300685e  5e                   POP ESI
1300685f  5b                   POP EBX
13006860  c3                   RET
; undefined 15 bytes at 13006861

; ==== FUNCTION __unlock_fhandle entry=13006870 sig=void __cdecl __unlock_fhandle(int _Filehandle)
13006870  8b4c2404             MOV ECX,dword ptr [ESP + 0x4]
13006874  8bc1                 MOV EAX,ECX
13006876  83e11f               AND ECX,0x1f
13006879  c1e102               SHL ECX,0x2
1300687c  83e0e7               AND EAX,0xffffffe7
1300687f  c1f803               SAR EAX,0x3
13006882  8d14c9               LEA EDX,[ECX + ECX*0x8]
13006885  8b80509d0013         MOV EAX,dword ptr [EAX + 0x13009d50]
1300688b  03c2                 ADD EAX,EDX
1300688d  83c00c               ADD EAX,0xc
13006890  50                   PUSH EAX
13006891  ff15bca10013         CALL dword ptr [0x1300a1bc]
13006897  c3                   RET
; undefined 8 bytes at 13006898

; ==== FUNCTION __lseek_lk entry=130068a0 sig=DWORD __cdecl __lseek_lk(uint param_1, LONG param_2, DWORD param_3)
130068a0  56                   PUSH ESI
130068a1  57                   PUSH EDI
130068a2  8b74240c             MOV ESI,dword ptr [ESP + 0xc]
130068a6  56                   PUSH ESI
130068a7  e804ffffff           CALL 0x130067b0
130068ac  83c404               ADD ESP,0x4
130068af  83f8ff               CMP EAX,-0x1
130068b2  7513                 JNZ 0x130068c7
130068b4  e837feffff           CALL 0x130066f0
130068b9  5f                   POP EDI
130068ba  c70009000000         MOV dword ptr [EAX],0x9
130068c0  b8ffffffff           MOV EAX,0xffffffff
130068c5  5e                   POP ESI
130068c6  c3                   RET
130068c7  8b4c2414             MOV ECX,dword ptr [ESP + 0x14]
130068cb  8b542410             MOV EDX,dword ptr [ESP + 0x10]
130068cf  51                   PUSH ECX
130068d0  6a00                 PUSH 0x0
130068d2  52                   PUSH EDX
130068d3  50                   PUSH EAX
130068d4  ff1530a10013         CALL dword ptr [0x1300a130]
130068da  83f8ff               CMP EAX,-0x1
130068dd  8bf8                 MOV EDI,EAX
130068df  b800000000           MOV EAX,0x0
130068e4  7506                 JNZ 0x130068ec
130068e6  ff1570a10013         CALL dword ptr [0x1300a170]
130068ec  85c0                 TEST EAX,EAX
130068ee  7411                 JZ 0x13006901
130068f0  50                   PUSH EAX
130068f1  e87afdffff           CALL 0x13006670
130068f6  83c404               ADD ESP,0x4
130068f9  b8ffffffff           MOV EAX,0xffffffff
130068fe  5f                   POP EDI
130068ff  5e                   POP ESI
13006900  c3                   RET
13006901  8bc6                 MOV EAX,ESI
13006903  83e61f               AND ESI,0x1f
13006906  c1e602               SHL ESI,0x2
13006909  83e0e7               AND EAX,0xffffffe7
1300690c  c1f803               SAR EAX,0x3
1300690f  8b88509d0013         MOV ECX,dword ptr [EAX + 0x13009d50]
13006915  8d04f6               LEA EAX,[ESI + ESI*0x8]
13006918  80640104fd           AND byte ptr [ECX + EAX*0x1 + 0x4],0xfd
1300691d  8bc7                 MOV EAX,EDI
1300691f  5f                   POP EDI
13006920  5e                   POP ESI
13006921  c3                   RET
; undefined 238 bytes at 13006922
13007010  undefined2 0001h
; undefined 10 bytes at 13007012
1300701c  undefined2 0004h
; undefined 34 bytes at 1300701e
13007040  undefined2 000Dh
; undefined 6 bytes at 13007042
13007048  undefined2 000Fh
; undefined 94 bytes at 1300704a
130070a8  undefined2 0004h
; undefined 34 bytes at 130070aa
130070cc  undefined2 000Dh
; undefined 6 bytes at 130070ce
130070d4  undefined2 000Fh
; undefined 66 bytes at 130070d6
13007118  undefined2 0001h
; undefined 66 bytes at 1300711a
1300715c  undefined2 000Dh
; undefined 90 bytes at 1300715e
130071b8  undefined2 0001h
; undefined 10 bytes at 130071ba
130071c4  undefined2 0004h
; undefined 110 bytes at 130071c6
13007234  undefined2 0001h
; undefined 2 bytes at 13007236
13007238  ds "IsTNT"
; undefined 2 bytes at 1300723e
13007240  ds "kernel32.dll"
; undefined 3 bytes at 1300724d
13007250  ds "runtime error "
; undefined 4 bytes at 13007260
13007264  ds "TLOSS error\r\n"
13007274  ds "SING error\r\n"
13007284  ds "DOMAIN error\r\n"
13007294  ds "R6027\r\n- not enough space for lowio initialization\r\n"
130072cc  ds "R6026\r\n- not enough space for stdio initialization\r\n"
13007304  ds "R6025\r\n- pure virtual function call\r\n"
1300732c  ds "R6024\r\n- not enough space for _onexit/atexit table\r\n"
13007364  ds "R6019\r\n- unable to open console device\r\n"
13007390  ds "R6018\r\n- unexpected heap error\r\n"
130073b4  ds "R6017\r\n- unexpected multithread lock error\r\n"
130073e4  ds "R6016\r\n- not enough space for thread data\r\n"
13007410  ds "\r\nabnormal program termination\r\n"
13007434  ds "R6009\r\n- not enough space for environment\r\n"
13007460  ds "R6008\r\n- not enough space for arguments\r\n"
1300748c  ds "R6002\r\n- floating point not loaded\r\n"
130074b4  ds "Microsoft Visual C++ Runtime Library"
; undefined 3 bytes at 130074d9
130074dc  undefined4 00000A0Ah
130074e0  ds "Runtime Error!\n\nProgram: "
; undefined 4 bytes at 130074fc
13007500  ds "<program name unknown>"
13007518  ds "GetLastActivePopup"
; undefined 1 bytes at 1300752b
1300752c  ds "GetActiveWindow"
1300753c  ds "MessageBoxA"
13007548  ds "user32.dll"
; undefined 13 bytes at 13007553
13007560  IMAGE_DIRECTORY_ENTRY_EXPORT 
13007588  ibo32 13001000
1300758c  ibo32 13003ea0
13007590  ibo32 13002120
13007594  ibo32 130075b3
13007598  ibo32 130075bb
1300759c  ibo32 130075c0
130075a0  dw 0h
130075a2  dw 1h
130075a4  dw 2h
130075a6  ds "EXPRMNTL.R32"
130075b3  ds "MenuSrv"
130075bb  ds "Quit"
130075c0  ds "SysInfo"
; undefined 104 bytes at 130075c8
13008030  ds "_MComponent"
; undefined 8 bytes at 1300803c
13008044  ds "MenuSrv"
1300804c  ds "events"
; undefined 13 bytes at 13008053
13008060  ds "system"
; undefined 13 bytes at 13008067
13008074  ds "removemenu"
; undefined 9 bytes at 1300807f
13008088  ds "nextsibling"
; undefined 8 bytes at 13008094
1300809c  ds "childobject"
; undefined 28 bytes at 130080a8
130080c4  ds "parent"
; undefined 13 bytes at 130080cb
130080d8  ds "activeproject"
; undefined 6 bytes at 130080e6
130080ec  ds "project"
; undefined 12 bytes at 130080f4
13008100  ds "Standard Japanese"
; undefined 2 bytes at 13008112
13008114  ds "Nokia 9140"
; undefined 1 bytes at 1300811f
13008120  ds "Nokia 1050"
; undefined 1 bytes at 1300812b
1300812c  ds "IBM Enhanced"
; undefined 3 bytes at 13008139
1300813c  ds "IBM AT"
; undefined 1 bytes at 13008143
13008144  ds "Olivetti ICO"
; undefined 3 bytes at 13008151
13008154  ds "IBM PX/XT"
; undefined 2 bytes at 1300815e
13008160  ds "Unknown Keyboard"
; undefined 3 bytes at 13008171
13008174  ds "Pentium"
1300817c  ds "80486"
; undefined 2 bytes at 13008182
13008184  ds "80386"
; undefined 2 bytes at 1300818a
1300818c  ds "80286"
; undefined 2 bytes at 13008192
13008194  ds "Unknown CPU"
130081a0  addr 13008194
130081a4  addr 1300818c
130081a8  addr 13008184
130081ac  addr 1300817c
130081b0  addr 13008174
; undefined 4 bytes at 130081b4
130081b8  addr 13008160
130081bc  addr 13008154
130081c0  addr 13008144
130081c4  addr 1300813c
130081c8  addr 1300812c
130081cc  addr 13008120
130081d0  addr 13008114
130081d4  addr 13008100
130081d8  ds "SysInfo"
130081e0  ds "keyboardtype"
; undefined 7 bytes at 130081ed
130081f4  ds "screensize"
; undefined 9 bytes at 130081ff
13008208  ds "bitdepth"
; undefined 11 bytes at 13008211
1300821c  ds "soundcard"
; undefined 10 bytes at 13008226
13008230  ds "processor"
; undefined 10 bytes at 1300823a
13008244  ds "computername"
; undefined 7 bytes at 13008251
13008258  ds "currentram"
; undefined 9 bytes at 13008263
1300826c  ds "totalram"
; undefined 31 bytes at 13008275
13008294  ds "architecture"
; undefined 7 bytes at 130082a1
130082a8  ds "nativecpu"
; undefined 10 bytes at 130082b2
130082bc  ds "sysversion"
; undefined 9 bytes at 130082c7
130082d0  ds "Integrated"
; undefined 1 bytes at 130082db
130082dc  ds "80x86"
; undefined 2 bytes at 130082e2
130082e4  ds "Not Implemented"
130082f4  ds "%d.%d"
; undefined 6 bytes at 130082fa
13008300  undefined2 FFFFh
; undefined 6 bytes at 13008302
13008308  ds "_MCoreService"
; undefined 12 bytes at 13008318
13008324  undefined4 00000000h
13008328  undefined4 00000000h
; undefined 4 bytes at 1300832c
13008330  addr 13004980
13008334  undefined4 00000000h
13008338  undefined4 00000000h
; undefined 4 bytes at 1300833c
13008340  undefined4 00000000h
; undefined 48 bytes at 13008344
13008374  undefined1 00h
; undefined 3 bytes at 13008375
13008378  undefined4 00000000h
1300837c  undefined4 00000000h
13008380  undefined4 FFFFFFFFh
; undefined 44 bytes at 13008384
130083b0  undefined4 00000000h
130083b4  undefined1 00h
; undefined 255 bytes at 130083b5
130084b4  undefined4 00000000h
; undefined 8 bytes at 130084b8
130084c0  undefined4 00000000h
130084c4  undefined4 00000000h
130084c8  undefined4 00000000h
130084cc  undefined4 00000000h
130084d0  undefined1 01h
130084d1  undefined1 02h
; undefined 6 bytes at 130084d2
130084d8  undefined4 000003A4h
; undefined 44 bytes at 130084dc
13008508  undefined4 000003A8h
; undefined 192 bytes at 1300850c
130085cc  undefined4 00000000h
130085d0  undefined4 00000002h
; undefined 4 bytes at 130085d4
130085d8  undefined4 00000008h
; undefined 4 bytes at 130085dc
130085e0  undefined4 00000009h
130085e4  addr 13007434
; undefined 112 bytes at 130085e8
13008658  undefined4 00000000h
; undefined 4 bytes at 1300865c
13008660  undefined4 00000000h
13008664  addr 13008cc8
; undefined 28 bytes at 13008668
13008684  addr 13008cf8
; undefined 12 bytes at 13008688
13008694  addr 13008d10
; undefined 12 bytes at 13008698
130086a4  addr 13008ce0
; undefined 280 bytes at 130086a8
130087c0  undefined4 00000000h
130087c4  undefined4 00000000h
130087c8  undefined4 00000000h
130087cc  undefined4 00000000h
130087d0  addr 13008d40
; undefined 12 bytes at 130087d4
130087e0  undefined4 00000000h
; undefined 28 bytes at 130087e4
13008800  undefined4 00000001h
; undefined 592 bytes at 13008804
13008a54  undefined4 00000000h
13008a58  undefined4 00000001h
; undefined 4 bytes at 13008a5c
13008a60  undefined4 00000002h
13008a64  undefined4 00000002h
; undefined 704 bytes at 13008a68
13008d28  undefined4 00000000h
; undefined 4 bytes at 13008d2c
13008d30  undefined4 00000000h
; undefined 4 bytes at 13008d34
13008d38  undefined4 00000000h
; undefined 4100 bytes at 13008d3c
13009d40  undefined4 00000000h
; undefined 12 bytes at 13009d44
13009d50  undefined4 00000000h
13009d54  undefined4 00000000h
; undefined 248 bytes at 13009d58
13009e50  undefined4 00000000h
13009e54  undefined4 00000000h
13009e58  undefined4 00000000h
13009e5c  undefined4 00000000h
13009e60  undefined4 00000000h
13009e64  undefined4 00000000h
13009e68  undefined4 00000000h
1300a000  ddw A108h
1300a004  ddw 0h
1300a008  ddw 0h
1300a00c  ddw A222h
1300a010  ddw A1D4h
1300a014  ddw A050h
1300a018  ddw 0h
1300a01c  ddw 0h
1300a020  ddw A23Eh
1300a024  ddw A11Ch
1300a028  ddw A058h
1300a02c  ddw 0h
1300a030  ddw 0h
1300a034  ddw A540h
1300a038  ddw A124h
; undefined 20 bytes at 1300a03c
1300a050  ddw A22Eh
; undefined 4 bytes at 1300a054
1300a058  ddw A380h
1300a05c  ddw A39Eh
1300a060  ddw A38Eh
1300a064  ddw A52Eh
1300a068  ddw A248h
1300a06c  ddw A258h
1300a070  ddw A26Eh
1300a074  ddw A27Ch
1300a078  ddw A28Eh
1300a07c  ddw A2A0h
1300a080  ddw A2B4h
1300a084  ddw A2C2h
1300a088  ddw A2D6h
1300a08c  ddw A2EAh
1300a090  ddw A300h
1300a094  ddw A30Eh
1300a098  ddw A31Ah
1300a09c  ddw A324h
1300a0a0  ddw A334h
1300a0a4  ddw A342h
1300a0a8  ddw A352h
1300a0ac  ddw A360h
1300a0b0  ddw A36Eh
1300a0b4  ddw A44Ch
1300a0b8  ddw A510h
1300a0bc  ddw A51Eh
1300a0c0  ddw A3B0h
1300a0c4  ddw A3C8h
1300a0c8  ddw A3DEh
1300a0cc  ddw A3EAh
1300a0d0  ddw A3F4h
1300a0d4  ddw A400h
1300a0d8  ddw A41Ah
1300a0dc  ddw A432h
1300a0e0  ddw A466h
1300a0e4  ddw A47Ch
1300a0e8  ddw A488h
1300a0ec  ddw A4A4h
1300a0f0  ddw A4BCh
1300a0f4  ddw A4D4h
1300a0f8  ddw A4E0h
1300a0fc  ddw A4ECh
1300a100  ddw A4FCh
; undefined 4 bytes at 1300a104
1300a108  ddw A1E8h
1300a10c  ddw A1FAh
1300a110  ddw A20Eh
1300a114  ddw A21Ah
; undefined 4 bytes at 1300a118
1300a11c  addr 0000a22e
; undefined 4 bytes at 1300a120
1300a124  addr 0000a380
1300a128  addr 0000a39e
1300a12c  addr 0000a38e
1300a130  addr 0000a52e
1300a134  addr 0000a248
1300a138  addr 0000a258
1300a13c  addr 0000a26e
1300a140  addr 0000a27c
1300a144  addr 0000a28e
1300a148  addr 0000a2a0
1300a14c  addr 0000a2b4
1300a150  addr 0000a2c2
1300a154  addr 0000a2d6
1300a158  addr 0000a2ea
1300a15c  addr 0000a300
1300a160  addr 0000a30e
1300a164  addr 0000a31a
1300a168  addr 0000a324
1300a16c  addr 0000a334
1300a170  addr 0000a342
1300a174  addr 0000a352
1300a178  addr 0000a360
1300a17c  addr 0000a36e
1300a180  addr 0000a44c
1300a184  addr 0000a510
1300a188  addr 0000a51e
1300a18c  addr 0000a3b0
1300a190  addr 0000a3c8
1300a194  addr 0000a3de
1300a198  addr 0000a3ea
1300a19c  addr 0000a3f4
1300a1a0  addr 0000a400
1300a1a4  addr 0000a41a
1300a1a8  addr 0000a432
1300a1ac  addr 0000a466
1300a1b0  addr 0000a47c
1300a1b4  addr 0000a488
1300a1b8  addr 0000a4a4
1300a1bc  addr 0000a4bc
1300a1c0  addr 0000a4d4
1300a1c4  addr 0000a4e0
1300a1c8  addr 0000a4ec
1300a1cc  addr 0000a4fc
; undefined 4 bytes at 1300a1d0
1300a1d4  addr 0000a1e8
1300a1d8  addr 0000a1fa
1300a1dc  addr 0000a20e
1300a1e0  addr 0000a21a
; undefined 4 bytes at 1300a1e4
1300a1e8  dw FFh
1300a1ea  ds "GetKeyboardType"
1300a1fa  dw 123h
1300a1fc  ds "GetSystemMetrics"
; undefined 1 bytes at 1300a20d
1300a20e  dw 1B9h
1300a210  ds "ReleaseDC"
1300a21a  dw E6h
1300a21c  ds "GetDC"
1300a222  ds "USER32.dll"
; undefined 1 bytes at 1300a22d
1300a22e  dw BCh
1300a230  ds "GetDeviceCaps"
1300a23e  ds "GDI32.dll"
1300a248  dw 11Fh
1300a24a  ds "GetSystemInfo"
1300a258  dw 14Ch
1300a25a  ds "GlobalMemoryStatus"
; undefined 1 bytes at 1300a26d
1300a26e  dw 137h
1300a270  ds "GetVersion"
; undefined 1 bytes at 1300a27b
1300a27c  dw 9Fh
1300a27e  ds "GetCommandLineA"
1300a28e  dw 103h
1300a290  ds "GetProcAddress"
; undefined 1 bytes at 1300a29f
1300a2a0  dw EBh
1300a2a2  ds "GetModuleHandleA"
; undefined 1 bytes at 1300a2b3
1300a2b4  dw 62h
1300a2b6  ds "ExitProcess"
1300a2c2  dw 21Dh
1300a2c4  ds "TerminateProcess"
; undefined 1 bytes at 1300a2d5
1300a2d6  dw C4h
1300a2d8  ds "GetCurrentProcess"
1300a2ea  dw C7h
1300a2ec  ds "GetCurrentThreadId"
; undefined 1 bytes at 1300a2ff
1300a300  dw 222h
1300a302  ds "TlsSetValue"
1300a30e  dw 21Fh
1300a310  ds "TlsAlloc"
; undefined 1 bytes at 1300a319
1300a31a  dw 220h
1300a31c  ds "TlsFree"
1300a324  dw 1FDh
1300a326  ds "SetLastError"
; undefined 1 bytes at 1300a333
1300a334  dw 221h
1300a336  ds "TlsGetValue"
1300a342  dw E1h
1300a344  ds "GetLastError"
; undefined 1 bytes at 1300a351
1300a352  dw 155h
1300a354  ds "HeapCreate"
; undefined 1 bytes at 1300a35f
1300a360  dw 157h
1300a362  ds "HeapDestroy"
1300a36e  dw 1FAh
1300a370  ds "SetHandleCount"
; undefined 1 bytes at 1300a37f
1300a380  dw DCh
1300a382  ds "GetFileType"
1300a38e  dw 116h
1300a390  ds "GetStdHandle"
; undefined 1 bytes at 1300a39d
1300a39e  dw 114h
1300a3a0  ds "GetStartupInfoA"
1300a3b0  dw 44h
1300a3b2  ds "DeleteCriticalSection"
1300a3c8  dw E9h
1300a3ca  ds "GetModuleFileNameA"
; undefined 1 bytes at 1300a3dd
1300a3de  dw 98h
1300a3e0  ds "GetCPInfo"
1300a3ea  dw 92h
1300a3ec  ds "GetACP"
; undefined 1 bytes at 1300a3f3
1300a3f4  dw F6h
1300a3f6  ds "GetOEMCP"
; undefined 1 bytes at 1300a3ff
1300a400  dw 8Bh
1300a402  ds "FreeEnvironmentStringsA"
1300a41a  dw D0h
1300a41c  ds "GetEnvironmentStrings"
1300a432  dw 8Ch
1300a434  ds "FreeEnvironmentStringsW"
1300a44c  dw D2h
1300a44e  ds "GetEnvironmentStringsW"
; undefined 1 bytes at 1300a465
1300a466  dw 242h
1300a468  ds "WideCharToMultiByte"
1300a47c  dw 24Fh
1300a47e  ds "WriteFile"
1300a488  dw 164h
1300a48a  ds "InitializeCriticalSection"
1300a4a4  dw 4Fh
1300a4a6  ds "EnterCriticalSection"
; undefined 1 bytes at 1300a4bb
1300a4bc  dw 177h
1300a4be  ds "LeaveCriticalSection"
; undefined 1 bytes at 1300a4d3
1300a4d4  dw 153h
1300a4d6  ds "HeapAlloc"
1300a4e0  dw 159h
1300a4e2  ds "HeapFree"
; undefined 1 bytes at 1300a4eb
1300a4ec  dw 178h
1300a4ee  ds "LoadLibraryA"
; undefined 1 bytes at 1300a4fb
1300a4fc  dw 83h
1300a4fe  ds "FlushFileBuffers"
; undefined 1 bytes at 1300a50f
1300a510  dw 16h
1300a512  ds "CloseHandle"
1300a51e  dw 206h
1300a520  ds "SetStdHandle"
; undefined 1 bytes at 1300a52d
1300a52e  dw 1F8h
1300a530  ds "SetFilePointer"
; undefined 1 bytes at 1300a53f
1300a540  ds "KERNEL32.dll"
; undefined 179 bytes at 1300a54d
1300b000  IMAGE_RESOURCE_DIRECTORY 
1300b010  IMAGE_RESOURCE_DIRECTORY_ENTRY 
1300b018  IMAGE_RESOURCE_DIRECTORY 
1300b028  IMAGE_RESOURCE_DIRECTORY_ENTRY 
1300b030  IMAGE_RESOURCE_DIRECTORY 
1300b040  IMAGE_RESOURCE_DIRECTORY_ENTRY 
1300b048  IMAGE_RESOURCE_DATA_ENTRY 
; undefined 8 bytes at 1300b058
Rsrc_Version_1_1009:
1300b060  VS_VERSION_INFO 
1300b0bc  StringFileInfo 
1300b0c2  unicode u"StringFileInfo"
1300b0e0  StringTable 
1300b0e6  unicode u"040904E4"
1300b0f8  StringInfo 
1300b0fe  unicode u"CompanyName"
; undefined 2 bytes at 1300b116
1300b118  unicode u"mFactory/Quark, Inc."
; undefined 2 bytes at 1300b142
1300b144  StringInfo 
1300b14a  unicode u"FileDescription"
; undefined 2 bytes at 1300b16a
1300b16c  unicode u"Experimental Kit (Win32 Player)"
1300b1ac  StringInfo 
1300b1b2  unicode u"FileVersion"
; undefined 2 bytes at 1300b1ca
1300b1cc  unicode u"2, 0, 0, 0"
; undefined 2 bytes at 1300b1e2
1300b1e4  StringInfo 
1300b1ea  unicode u"InternalName"
1300b204  unicode u"Exprmntl"
; undefined 2 bytes at 1300b216
1300b218  StringInfo 
1300b21e  unicode u"LegalCopyright"
1300b23c  unicode u"Copyright © 1998 Quark, Inc."
; undefined 2 bytes at 1300b276
1300b278  StringInfo 
1300b27e  unicode u"OriginalFilename"
1300b2a0  unicode u"Exprmntl.r32"
; undefined 2 bytes at 1300b2ba
1300b2bc  StringInfo 
1300b2c2  unicode u"ProductName"
; undefined 2 bytes at 1300b2da
1300b2dc  unicode u"2.0, © 1998 Quark, Inc."
1300b30c  StringInfo 
1300b312  unicode u"ProductVersion"
1300b330  unicode u"2, 0, 0, 0"
; undefined 2 bytes at 1300b346
1300b348  VarFileInfo 
1300b34e  unicode u"VarFileInfo"
; undefined 2 bytes at 1300b366
1300b368  Var 
1300b36e  unicode u"Translation"
; undefined 2 bytes at 1300b386
1300b388  ddw 4E40409h
; undefined 116 bytes at 1300b38c
1300c000  IMAGE_BASE_RELOCATION 
1300c008  dw 3015h
1300c00a  dw 3058h
1300c00c  dw 3070h
1300c00e  dw 308Eh
1300c010  dw 30ACh
1300c012  dw 30CAh
1300c014  dw 30E8h
1300c016  dw 3106h
1300c018  dw 3124h
1300c01a  dw 3142h
1300c01c  dw 3160h
1300c01e  dw 317Eh
1300c020  dw 319Ch
1300c022  dw 31BAh
1300c024  dw 31D8h
1300c026  dw 31F6h
1300c028  dw 3214h
1300c02a  dw 3232h
1300c02c  dw 3250h
1300c02e  dw 326Eh
1300c030  dw 328Ch
1300c032  dw 32AAh
1300c034  dw 32D5h
1300c036  dw 32DCh
1300c038  dw 3302h
1300c03a  dw 330Eh
1300c03c  dw 342Eh
1300c03e  dw 3445h
1300c040  dw 345Eh
1300c042  dw 3478h
1300c044  dw 347Dh
1300c046  dw 34AEh
1300c048  dw 357Fh
1300c04a  dw 35B3h
1300c04c  dw 35DBh
1300c04e  dw 3628h
1300c050  dw 364Ah
1300c052  dw 3673h
1300c054  dw 3695h
1300c056  dw 36CDh
1300c058  dw 36FBh
1300c05a  dw 3720h
1300c05c  dw 376Ah
1300c05e  dw 3793h
1300c060  dw 37B4h
1300c062  dw 37F8h
1300c064  dw 381Fh
1300c066  dw 3858h
1300c068  dw 387Fh
1300c06a  dw 3896h
1300c06c  dw 39A8h
1300c06e  dw 39C6h
1300c070  dw 39CDh
1300c072  dw 3A03h
1300c074  dw 3A66h
1300c076  dw 3A7Bh
1300c078  dw 3AAAh
1300c07a  dw 3AAFh
1300c07c  dw 3ADEh
1300c07e  dw 3AE3h
1300c080  dw 3B09h
1300c082  dw 3B85h
1300c084  dw 3B97h
1300c086  dw 3BC0h
1300c088  dw 3BDBh
1300c08a  dw 3BECh
1300c08c  dw 3C0Ch
1300c08e  dw 3C1Dh
1300c090  dw 3C22h
1300c092  dw 3C43h
1300c094  dw 3C54h
1300c096  dw 3C59h
1300c098  dw 3C7Eh
1300c09a  dw 3C8Ah
1300c09c  dw 3C95h
1300c09e  dw 3CB9h
1300c0a0  dw 3CC5h
1300c0a2  dw 3CEEh
1300c0a4  dw 3D13h
1300c0a6  dw 3D1Fh
1300c0a8  dw 3D51h
1300c0aa  dw 3D76h
1300c0ac  dw 3DD8h
1300c0ae  dw 3DEFh
1300c0b0  dw 3E08h
1300c0b2  dw 3E22h
1300c0b4  dw 3E27h
1300c0b6  dw 3E58h
1300c0b8  dw 3F06h
1300c0ba  dw 3F19h
1300c0bc  dw 3F36h
1300c0be  dw 3F4Fh
1300c0c0  dw 3F78h
1300c0c2  dw 3F83h
1300c0c4  dw 3FA2h
1300c0c6  dw 3FB2h
1300c0c8  dw 3FBAh
1300c0ca  dw 3FDBh
1300c0cc  dw 3FEBh
1300c0ce  dw 0h
1300c0d0  IMAGE_BASE_RELOCATION 
1300c0d8  dw 305Ah
1300c0da  dw 3078h
1300c0dc  dw 30A5h
1300c0de  dw 30BFh
1300c0e0  dw 30C4h
1300c0e2  dw 30F5h
1300c0e4  dw 3136h
1300c0e6  dw 3179h
1300c0e8  dw 3193h
1300c0ea  dw 3198h
1300c0ec  dw 31AFh
1300c0ee  dw 31BEh
1300c0f0  dw 31DBh
1300c0f2  dw 31F8h
1300c0f4  dw 3215h
1300c0f6  dw 3232h
1300c0f8  dw 3256h
1300c0fa  dw 3269h
1300c0fc  dw 328Ah
1300c0fe  dw 3297h
1300c100  dw 329Ch
1300c102  dw 32BEh
1300c104  dw 32CFh
1300c106  dw 32D4h
1300c108  dw 32F2h
1300c10a  dw 32FEh
1300c10c  dw 3309h
1300c10e  dw 3326h
1300c110  dw 3337h
1300c112  dw 333Ch
1300c114  dw 335Ah
1300c116  dw 336Bh
1300c118  dw 3370h
1300c11a  dw 338Eh
1300c11c  dw 339Fh
1300c11e  dw 33A4h
1300c120  dw 33C2h
1300c122  dw 33D3h
1300c124  dw 33D8h
1300c126  dw 33F6h
1300c128  dw 3407h
1300c12a  dw 340Ch
1300c12c  dw 342Ah
1300c12e  dw 343Bh
1300c130  dw 3440h
1300c132  dw 345Eh
1300c134  dw 346Fh
1300c136  dw 3474h
1300c138  dw 3492h
1300c13a  dw 34A3h
1300c13c  dw 34A8h
1300c13e  dw 34C6h
1300c140  dw 34D2h
1300c142  dw 3501h
1300c144  dw 3514h
1300c146  dw 3537h
1300c148  dw 356Ch
1300c14a  dw 3585h
1300c14c  dw 359Ah
1300c14e  dw 35E0h
1300c150  dw 3622h
1300c152  dw 3635h
1300c154  dw 364Bh
1300c156  dw 3656h
1300c158  dw 366Eh
1300c15a  dw 3676h
1300c15c  dw 369Dh
1300c15e  dw 36AFh
1300c160  dw 371Dh
1300c162  dw 372Bh
1300c164  dw 374Eh
1300c166  dw 3767h
1300c168  dw 37AEh
1300c16a  dw 37D6h
1300c16c  dw 382Dh
1300c16e  dw 3858h
1300c170  dw 38ACh
1300c172  dw 38D7h
1300c174  dw 392Bh
1300c176  dw 3953h
1300c178  dw 39AAh
1300c17a  dw 39D5h
1300c17c  dw 3A35h
1300c17e  dw 3A66h
1300c180  dw 3AD5h
1300c182  dw 3B00h
1300c184  dw 3BA4h
1300c186  dw 3BAFh
1300c188  dw 3BD5h
1300c18a  dw 3BF3h
1300c18c  dw 3C2Ch
1300c18e  dw 3C57h
1300c190  dw 3C86h
1300c192  dw 3CADh
1300c194  dw 3CF7h
1300c196  dw 3D22h
1300c198  dw 3D54h
1300c19a  dw 3D7Bh
1300c19c  dw 3DC2h
1300c19e  dw 3DEAh
1300c1a0  dw 3E1Fh
1300c1a2  dw 3E46h
1300c1a4  dw 3E8Dh
1300c1a6  dw 3EB5h
1300c1a8  dw 3EE7h
1300c1aa  dw 3F0Eh
1300c1ac  dw 3F58h
1300c1ae  dw 3F83h
1300c1b0  dw 3FB2h
1300c1b2  dw 3FD9h
1300c1b4  IMAGE_BASE_RELOCATION 
1300c1bc  dw 3023h
1300c1be  dw 304Eh
1300c1c0  dw 3080h
1300c1c2  dw 30AAh
1300c1c4  dw 3109h
1300c1c6  dw 313Ah
1300c1c8  dw 3178h
1300c1ca  dw 319Fh
1300c1cc  dw 31FBh
1300c1ce  dw 3226h
1300c1d0  dw 32D4h
1300c1d2  dw 32DFh
1300c1d4  dw 3305h
1300c1d6  dw 3317h
1300c1d8  dw 3328h
1300c1da  dw 334Fh
1300c1dc  dw 3369h
1300c1de  dw 3390h
1300c1e0  dw 33AAh
1300c1e2  dw 33D1h
1300c1e4  dw 33EBh
1300c1e6  dw 3412h
1300c1e8  dw 342Ch
1300c1ea  dw 3453h
1300c1ec  dw 3470h
1300c1ee  dw 349Ah
1300c1f0  dw 34C0h
1300c1f2  dw 34EAh
1300c1f4  dw 351Bh
1300c1f6  dw 3551h
1300c1f8  dw 3583h
1300c1fa  dw 35B5h
1300c1fc  dw 35E7h
1300c1fe  dw 3619h
1300c200  dw 3652h
1300c202  dw 3684h
1300c204  dw 36B6h
1300c206  dw 36E8h
1300c208  dw 371Dh
1300c20a  dw 374Dh
1300c20c  dw 3754h
1300c20e  dw 3783h
1300c210  dw 3790h
1300c212  dw 37F1h
1300c214  dw 37F8h
1300c216  dw 3823h
1300c218  dw 3850h
1300c21a  dw 3857h
1300c21c  dw 3882h
1300c21e  dw 3925h
1300c220  dw 392Ch
1300c222  dw 395Fh
1300c224  dw 3988h
1300c226  dw 399Eh
1300c228  dw 39ABh
1300c22a  dw 3A36h
1300c22c  dw 3A3Dh
1300c22e  dw 3A66h
1300c230  dw 3AB0h
1300c232  dw 3AB7h
1300c234  dw 3ADCh
1300c236  dw 3AF0h
1300c238  dw 3B01h
1300c23a  dw 3B2Ch
1300c23c  dw 3B34h
1300c23e  dw 3B5Eh
1300c240  dw 3B83h
1300c242  dw 3B8Ah
1300c244  dw 3BADh
1300c246  dw 3C9Ch
1300c248  dw 3CA8h
1300c24a  dw 3CE2h
1300c24c  dw 3CEEh
1300c24e  dw 3D17h
1300c250  dw 3D28h
1300c252  dw 3D4Dh
1300c254  dw 3D59h
1300c256  dw 3D7Fh
1300c258  dw 3EB6h
1300c25a  dw 3EF9h
1300c25c  dw 3F13h
1300c25e  dw 3F18h
1300c260  dw 3F2Fh
1300c262  dw 3F3Eh
1300c264  dw 3F5Bh
1300c266  dw 3F78h
1300c268  dw 3F95h
1300c26a  dw 3FB2h
1300c26c  dw 3FCFh
1300c26e  dw 3FECh
1300c270  IMAGE_BASE_RELOCATION 
1300c278  dw 3009h
1300c27a  dw 3026h
1300c27c  dw 3043h
1300c27e  dw 3060h
1300c280  dw 307Dh
1300c282  dw 309Ah
1300c284  dw 30B7h
1300c286  dw 30D4h
1300c288  dw 3105h
1300c28a  dw 310Ch
1300c28c  dw 3132h
1300c28e  dw 313Eh
1300c290  dw 3245h
1300c292  dw 326Ch
1300c294  dw 32BDh
1300c296  dw 32E4h
1300c298  dw 333Fh
1300c29a  dw 336Bh
1300c29c  dw 33B8h
1300c29e  dw 33DAh
1300c2a0  dw 33FFh
1300c2a2  dw 344Bh
1300c2a4  dw 3479h
1300c2a6  dw 349Eh
1300c2a8  dw 34DDh
1300c2aa  dw 3502h
1300c2ac  dw 3548h
1300c2ae  dw 356Fh
1300c2b0  dw 35A8h
1300c2b2  dw 35CFh
1300c2b4  dw 3625h
1300c2b6  dw 3666h
1300c2b8  dw 367Bh
1300c2ba  dw 36AAh
1300c2bc  dw 36AFh
1300c2be  dw 36D9h
1300c2c0  dw 36FFh
1300c2c2  dw 3705h
1300c2c4  dw 370Bh
1300c2c6  dw 3727h
1300c2c8  dw 372Dh
1300c2ca  dw 3736h
1300c2cc  dw 373Dh
1300c2ce  dw 3758h
1300c2d0  dw 3767h
1300c2d2  dw 3770h
1300c2d4  dw 3775h
1300c2d6  dw 377Bh
1300c2d8  dw 3785h
1300c2da  dw 379Eh
1300c2dc  dw 37A3h
1300c2de  dw 37AEh
1300c2e0  dw 37B4h
1300c2e2  dw 37EEh
1300c2e4  dw 37F9h
1300c2e6  dw 37FFh
1300c2e8  dw 3853h
1300c2ea  dw 3862h
1300c2ec  dw 3880h
1300c2ee  dw 388Ah
1300c2f0  dw 38F2h
1300c2f2  dw 3911h
1300c2f4  dw 3920h
1300c2f6  dw 3940h
1300c2f8  dw 3951h
1300c2fa  dw 395Ch
1300c2fc  dw 3961h
1300c2fe  dw 396Eh
1300c300  dw 3973h
1300c302  dw 39BAh
1300c304  dw 39C8h
1300c306  dw 39CFh
1300c308  dw 39D5h
1300c30a  dw 39E8h
1300c30c  dw 39F0h
1300c30e  dw 39F9h
1300c310  dw 3A02h
1300c312  dw 3A15h
1300c314  dw 3A1Ch
1300c316  dw 3A21h
1300c318  dw 3A2Eh
1300c31a  dw 3A33h
1300c31c  dw 3A4Eh
1300c31e  dw 3A59h
1300c320  dw 3AB8h
1300c322  dw 3ABDh
1300c324  dw 3ADEh
1300c326  dw 3AE5h
1300c328  dw 3AF8h
1300c32a  dw 3B16h
1300c32c  dw 3B22h
1300c32e  dw 3B28h
1300c330  dw 3B47h
1300c332  dw 3B64h
1300c334  dw 3B6Bh
1300c336  dw 3B72h
1300c338  dw 3B90h
1300c33a  dw 3B97h
1300c33c  dw 3BAAh
1300c33e  dw 3BC6h
1300c340  dw 3BD2h
1300c342  dw 3BE7h
1300c344  dw 3BEEh
1300c346  dw 3C64h
1300c348  dw 3C6Bh
1300c34a  dw 3C8Bh
1300c34c  dw 3C90h
1300c34e  dw 3CA1h
1300c350  dw 3CA8h
1300c352  dw 3CDCh
1300c354  dw 3CE2h
1300c356  dw 3D09h
1300c358  dw 3D1Dh
1300c35a  dw 3D53h
1300c35c  dw 3D5Ah
1300c35e  dw 3D79h
1300c360  dw 3DA9h
1300c362  dw 3DB3h
1300c364  dw 3DCCh
1300c366  dw 3DE6h
1300c368  dw 3E07h
1300c36a  dw 3E30h
1300c36c  dw 3E3Eh
1300c36e  dw 3E77h
1300c370  dw 3E7Eh
1300c372  dw 3E94h
1300c374  dw 3E9Bh
1300c376  dw 3EDAh
1300c378  dw 3EFAh
1300c37a  dw 3F2Dh
1300c37c  dw 3F46h
1300c37e  dw 3FB1h
1300c380  dw 3FDBh
1300c382  dw 3FE4h
1300c384  dw 3FE9h
1300c386  dw 3FEFh
1300c388  dw 3FFAh
1300c38a  dw 0h
1300c38c  IMAGE_BASE_RELOCATION 
1300c394  dw 305Ch
1300c396  dw 3062h
1300c398  dw 30BBh
1300c39a  dw 30FFh
1300c39c  dw 31E2h
1300c39e  dw 3203h
1300c3a0  dw 3262h
1300c3a2  dw 32A2h
1300c3a4  dw 32B6h
1300c3a6  dw 32C4h
1300c3a8  dw 32D2h
1300c3aa  dw 330Ah
1300c3ac  dw 3328h
1300c3ae  dw 3338h
1300c3b0  dw 334Ah
1300c3b2  dw 336Ch
1300c3b4  dw 338Ah
1300c3b6  dw 3390h
1300c3b8  dw 33AFh
1300c3ba  dw 33BCh
1300c3bc  dw 33C1h
1300c3be  dw 33CFh
1300c3c0  dw 33D8h
1300c3c2  dw 33FEh
1300c3c4  dw 3403h
1300c3c6  dw 340Ah
1300c3c8  dw 342Ch
1300c3ca  dw 3472h
1300c3cc  dw 3485h
1300c3ce  dw 348Fh
1300c3d0  dw 349Ah
1300c3d2  dw 34A4h
1300c3d4  dw 34AFh
1300c3d6  dw 34B8h
1300c3d8  dw 34D2h
1300c3da  dw 34D9h
1300c3dc  dw 34F8h
1300c3de  dw 34FCh
1300c3e0  dw 3500h
1300c3e2  dw 3504h
1300c3e4  dw 3508h
1300c3e6  dw 3524h
1300c3e8  dw 3531h
1300c3ea  dw 3536h
1300c3ec  dw 353Ch
1300c3ee  dw 3541h
1300c3f0  dw 3565h
1300c3f2  dw 356Fh
1300c3f4  dw 3580h
1300c3f6  dw 3590h
1300c3f8  dw 359Ch
1300c3fa  dw 35BAh
1300c3fc  dw 360Bh
1300c3fe  dw 3632h
1300c400  dw 3648h
1300c402  dw 3659h
1300c404  dw 3669h
1300c406  dw 3676h
1300c408  dw 36B6h
1300c40a  dw 36DBh
1300c40c  dw 3705h
1300c40e  dw 3721h
1300c410  dw 3730h
1300c412  dw 3745h
1300c414  dw 3769h
1300c416  dw 3781h
1300c418  dw 378Ah
1300c41a  dw 379Dh
1300c41c  dw 37AAh
1300c41e  dw 37B3h
1300c420  dw 37D9h
1300c422  dw 37E6h
1300c424  dw 3832h
1300c426  dw 3840h
1300c428  dw 3881h
1300c42a  dw 38B4h
1300c42c  dw 38E9h
1300c42e  dw 3908h
1300c430  dw 3918h
1300c432  dw 3920h
1300c434  dw 393Eh
1300c436  dw 3952h
1300c438  dw 3959h
1300c43a  dw 3961h
1300c43c  dw 3969h
1300c43e  dw 3971h
1300c440  dw 3985h
1300c442  dw 398Eh
1300c444  dw 39C1h
1300c446  dw 39C9h
1300c448  dw 39D1h
1300c44a  dw 39D9h
1300c44c  dw 39FCh
1300c44e  dw 3A31h
1300c450  dw 3A50h
1300c452  dw 3A6Ah
1300c454  dw 3A71h
1300c456  dw 3A88h
1300c458  dw 3A8Fh
1300c45a  dw 3A96h
1300c45c  dw 3AB0h
1300c45e  dw 3AE2h
1300c460  dw 3AF8h
1300c462  dw 3AFFh
1300c464  dw 3B06h
1300c466  dw 3B20h
1300c468  dw 3B52h
1300c46a  dw 3B75h
1300c46c  dw 3B7Bh
1300c46e  dw 3B94h
1300c470  dw 3BA7h
1300c472  dw 3BCCh
1300c474  dw 3BD3h
1300c476  dw 3BE1h
1300c478  dw 3C46h
1300c47a  dw 3C50h
1300c47c  dw 3C67h
1300c47e  dw 3C6Eh
1300c480  dw 3C74h
1300c482  dw 3C7Fh
1300c484  dw 3C85h
1300c486  dw 3C8Dh
1300c488  dw 3C96h
1300c48a  dw 3C9Eh
1300c48c  dw 3CA3h
1300c48e  dw 3CABh
1300c490  dw 3CB0h
1300c492  dw 3CC2h
1300c494  dw 3CCCh
1300c496  dw 3CE4h
1300c498  dw 3E02h
1300c49a  dw 3E0Ch
1300c49c  dw 3E18h
1300c49e  dw 3E21h
1300c4a0  dw 3E2Ch
1300c4a2  dw 3E3Ah
1300c4a4  dw 3E44h
1300c4a6  dw 3E59h
1300c4a8  dw 3E6Ch
1300c4aa  dw 3E74h
1300c4ac  dw 3E8Ah
1300c4ae  dw 3EA0h
1300c4b0  dw 3EBFh
1300c4b2  dw 3ED7h
1300c4b4  dw 3EFBh
1300c4b6  dw 3F47h
1300c4b8  dw 3F54h
1300c4ba  dw 3F59h
1300c4bc  dw 3F7Fh
1300c4be  dw 3F8Eh
1300c4c0  dw 3FA0h
1300c4c2  dw 3FB1h
1300c4c4  IMAGE_BASE_RELOCATION 
1300c4cc  dw 30ABh
1300c4ce  dw 30BCh
1300c4d0  dw 30D8h
1300c4d2  dw 311Bh
1300c4d4  dw 3132h
1300c4d6  dw 3209h
1300c4d8  dw 3219h
1300c4da  dw 3254h
1300c4dc  dw 325Eh
1300c4de  dw 32B8h
1300c4e0  dw 32D0h
1300c4e2  dw 3368h
1300c4e4  dw 341Fh
1300c4e6  dw 344Ah
1300c4e8  dw 3466h
1300c4ea  dw 3538h
1300c4ec  dw 3550h
1300c4ee  dw 35D6h
1300c4f0  dw 35E0h
1300c4f2  dw 3619h
1300c4f4  dw 367Fh
1300c4f6  dw 368Ch
1300c4f8  dw 36B1h
1300c4fa  dw 3718h
1300c4fc  dw 3728h
1300c4fe  dw 3748h
1300c500  dw 3771h
1300c502  dw 37B6h
1300c504  dw 37CFh
1300c506  dw 3817h
1300c508  dw 383Eh
1300c50a  dw 3859h
1300c50c  dw 3887h
1300c50e  dw 3893h
1300c510  dw 38D6h
1300c512  dw 38E8h
1300c514  dw 3911h
1300c516  dw 0h
1300c518  IMAGE_BASE_RELOCATION 
1300c520  dw 300Ch
1300c522  dw 3018h
1300c524  dw 31A0h
1300c526  dw 31A4h
1300c528  dw 31A8h
1300c52a  dw 31ACh
1300c52c  dw 31B0h
1300c52e  dw 31B8h
1300c530  dw 31BCh
1300c532  dw 31C0h
1300c534  dw 31C4h
1300c536  dw 31C8h
1300c538  dw 31CCh
1300c53a  dw 31D0h
1300c53c  dw 31D4h
1300c53e  dw 3330h
1300c540  dw 35D4h
1300c542  dw 35DCh
1300c544  dw 35E4h
1300c546  dw 35ECh
1300c548  dw 35F4h
1300c54a  dw 35FCh
1300c54c  dw 3604h
1300c54e  dw 360Ch
1300c550  dw 3614h
1300c552  dw 361Ch
1300c554  dw 3624h
1300c556  dw 362Ch
1300c558  dw 3634h
1300c55a  dw 363Ch
1300c55c  dw 3644h
1300c55e  dw 364Ch
1300c560  dw 3654h
1300c562  dw 3664h
1300c564  dw 3684h
1300c566  dw 3694h
1300c568  dw 36A4h
1300c56a  dw 37D0h
1300c56c  dw 37D8h
1300c56e  dw 0h
; undefined 656 bytes at 1300c570
