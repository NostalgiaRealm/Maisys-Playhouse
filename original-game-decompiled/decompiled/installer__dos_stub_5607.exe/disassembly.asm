; Ghidra listing for stream_005_0002039f.exe (x86:LE:16:Real Mode). Labels and types are tool-generated unless they came from the binary.
; undefined 16 bytes at 1000:0000

; ==== FUNCTION FUN_1000_0010 entry=1000:0010 sig=undefined __cdecl16near FUN_1000_0010(void)
1000:0010  c8020200             ENTER 0x202,0x0
1000:0014  57                   PUSH DI
1000:0015  56                   PUSH SI
1000:0016  8b5e06               MOV BX,word ptr [BP + 0x6]
1000:0019  8b37                 MOV SI,word ptr [BX]
1000:001b  8bfe                 MOV DI,SI
1000:001d  8db6fefd             LEA SI,[BP + 0xfdfe]
1000:0021  8cd9                 MOV CX,DS
1000:0023  8ec1                 MOV CX,ES
1000:0025  b9ffff               MOV CX,0xffff
1000:0028  33c0                 XOR AX,AX
1000:002a  f2ae                 SCASB.REPNE ES:DI
1000:002c  f7d1                 NOT CX
1000:002e  2bf9                 SUB DI,CX
1000:0030  87fe                 XCHG SI,DI
1000:0032  d1e9                 SHR CX,0x1
1000:0034  f3a5                 MOVSW.REP ES:DI,SI
1000:0036  13c9                 ADC CX,CX
1000:0038  f3a4                 MOVSB.REP ES:DI,SI
1000:003a  8946fe               MOV word ptr [BP + -0x2],AX
1000:003d  8d96fefd             LEA DX,[BP + 0xfdfe]
1000:0041  8bda                 MOV BX,DX
1000:0043  3807                 CMP byte ptr [BX],AL
1000:0045  7417                 JZ 0x1000:005e
1000:0047  8b5efe               MOV BX,word ptr [BP + -0x2]
1000:004a  8bf2                 MOV SI,DX
1000:004c  803c5c               CMP byte ptr [SI],0x5c
1000:004f  7502                 JNZ 0x1000:0053
1000:0051  8bda                 MOV BX,DX
1000:0053  42                   INC DX
1000:0054  8bf2                 MOV SI,DX
1000:0056  803c00               CMP byte ptr [SI],0x0
1000:0059  75ef                 JNZ 0x1000:004a
1000:005b  895efe               MOV word ptr [BP + -0x2],BX
1000:005e  837efe00             CMP word ptr [BP + -0x2],0x0
1000:0062  750a                 JNZ 0x1000:006e
1000:0064  8d86fefd             LEA AX,[BP + 0xfdfe]
1000:0068  8946fe               MOV word ptr [BP + -0x2],AX
1000:006b  eb04                 JMP 0x1000:0071
; undefined 1 bytes at 1000:006d
1000:006e  ff46fe               INC word ptr [BP + -0x2]
1000:0071  be4a01               MOV SI,0x14a
1000:0074  1e                   PUSH DS
1000:0075  07                   POP ES
1000:0076  8b7efe               MOV DI,word ptr [BP + -0x2]
1000:0079  b90600               MOV CX,0x6
1000:007c  f3a5                 MOVSW.REP ES:DI,SI
1000:007e  a4                   MOVSB ES:DI,SI
1000:007f  8d86fefd             LEA AX,[BP + 0xfdfe]
1000:0083  50                   PUSH AX
1000:0084  e8450f               CALL 0x1000:0fcc
1000:0087  83c402               ADD SP,0x2
1000:008a  8d86fefd             LEA AX,[BP + 0xfdfe]
1000:008e  50                   PUSH AX
1000:008f  e8fa0f               CALL 0x1000:108c
1000:0092  83c402               ADD SP,0x2
1000:0095  8b5e06               MOV BX,word ptr [BP + 0x6]
1000:0098  ff37                 PUSH word ptr [BX]
1000:009a  e8ef0f               CALL 0x1000:108c
1000:009d  83c402               ADD SP,0x2
1000:00a0  33c0                 XOR AX,AX
1000:00a2  5e                   POP SI
1000:00a3  5f                   POP DI
1000:00a4  c9                   LEAVE
1000:00a5  c3                   RET

; ==== FUNCTION entry entry=1000:00a6 sig=undefined __cdecl16far entry(void)
1000:00a6  b430                 MOV AH,0x30
1000:00a8  cd21                 INT 0x21
1000:00aa  3c02                 CMP AL,0x2
1000:00ac  7305                 JNC 0x1000:00b3
1000:00ae  33c0                 XOR AX,AX
1000:00b0  06                   PUSH ES
1000:00b1  50                   PUSH AX
1000:00b2  cb                   RETF
1000:00b3  bf1911               MOV DI,0x1119
1000:00b6  8b360200             MOV SI,word ptr [0x2]
1000:00ba  2bf7                 SUB SI,DI
1000:00bc  81fe0010             CMP SI,0x1000
1000:00c0  7203                 JC 0x1000:00c5
1000:00c2  be0010               MOV SI,0x1000
1000:00c5  fa                   CLI
1000:00c6  8ed7                 MOV DI,SS
1000:00c8  81c45e02             ADD SP,0x25e
1000:00cc  fb                   STI
1000:00cd  7310                 JNC 0x1000:00df
1000:00cf  16                   PUSH SS
1000:00d0  1f                   POP DS
1000:00d1  e86a02               CALL 0x1000:033e
1000:00d4  33c0                 XOR AX,AX
1000:00d6  50                   PUSH AX
1000:00d7  e8f704               CALL 0x1000:05d1
1000:00da  b8ff4c               MOV AX,0x4cff
1000:00dd  cd21                 INT 0x21
1000:00df  36a38800             MOV SS:[0x88],AX
1000:00e3  86e0                 XCHG AL,AH
1000:00e5  36a38600             MOV SS:[0x86],AX
1000:00e9  8bc6                 MOV AX,SI
1000:00eb  b104                 MOV CL,0x4
1000:00ed  d3e0                 SHL AX,CL
1000:00ef  48                   DEC AX
1000:00f0  36a34600             MOV SS:[0x46],AX
1000:00f4  bb4800               MOV BX,0x48
1000:00f7  368c17               MOV word ptr SS:[BX],SS
1000:00fa  83e4fe               AND SP,0xfffe
1000:00fd  36896704             MOV word ptr SS:[BX + 0x4],SP
1000:0101  b8feff               MOV AX,0xfffe
1000:0104  50                   PUSH AX
1000:0105  3689670a             MOV word ptr SS:[BX + 0xa],SP
1000:0109  f7d0                 NOT AX
1000:010b  50                   PUSH AX
1000:010c  36896706             MOV word ptr SS:[BX + 0x6],SP
1000:0110  36896708             MOV word ptr SS:[BX + 0x8],SP
1000:0114  3689264200           MOV word ptr SS:[0x42],SP
1000:0119  03f7                 ADD SI,DI
1000:011b  89360200             MOV word ptr [0x2],SI
1000:011f  8cc3                 MOV BX,ES
1000:0121  2bde                 SUB BX,SI
1000:0123  f7db                 NEG BX
1000:0125  b44a                 MOV AH,0x4a
1000:0127  cd21                 INT 0x21
1000:0129  368c1e8400           MOV word ptr SS:[0x84],DS
1000:012e  16                   PUSH SS
1000:012f  07                   POP ES
1000:0130  fc                   CLD
1000:0131  bf5802               MOV DI,0x258
1000:0134  b96002               MOV CX,0x260
1000:0137  2bcf                 SUB CX,DI
1000:0139  33c0                 XOR AX,AX
1000:013b  f3aa                 STOSB.REP ES:DI
1000:013d  16                   PUSH SS
1000:013e  1f                   POP DS
1000:013f  8b0e5801             MOV CX,word ptr [0x158]
1000:0143  e302                 JCXZ 0x1000:0147
1000:0145  ffd1                 CALL CX
1000:0147  e8de03               CALL 0x1000:0528
1000:014a  e85102               CALL 0x1000:039e
1000:014d  33ed                 XOR BP,BP
1000:014f  e85000               CALL 0x1000:01a2
1000:0152  16                   PUSH SS
1000:0153  1f                   POP DS
1000:0154  ff36a800             PUSH word ptr [0xa8]
1000:0158  ff36a600             PUSH word ptr [0xa6]
1000:015c  ff36a400             PUSH word ptr [0xa4]
1000:0160  e8adfe               CALL 0x1000:0010
1000:0163  50                   PUSH AX
1000:0164  e80d01               CALL 0x1000:0274

; ==== FUNCTION FUN_1000_0167 entry=1000:0167 sig=undefined __cdecl16near FUN_1000_0167(void)
1000:0167  c3                   RET
; undefined 15 bytes at 1000:0168

; ==== FUNCTION FUN_1000_0177 entry=1000:0177 sig=undefined FUN_1000_0177(void)
1000:0177  50                   PUSH AX
1000:0178  2e8b1ea001           MOV BX,word ptr CS:[0x1a0]
1000:017d  8edb                 MOV BX,DS
1000:017f  9a80060010           CALLF 0x1000:0680
1000:0184  e8b701               CALL 0x1000:033e
1000:0187  e84704               CALL 0x1000:05d1
1000:018a  813e5a01d6d6         CMP word ptr [0x15a],0xd6d6
1000:0190  7506                 JNZ 0x1000:0198
1000:0192  58                   POP AX
1000:0193  50                   PUSH AX
1000:0194  ff165e01             CALL word ptr [0x15e]
1000:0198  b8ff00               MOV AX,0xff
1000:019b  50                   PUSH AX
1000:019c  ff164400             CALL word ptr [0x44]
1000:01a0  1911                 SBB word ptr [BX + DI],DX

; ==== FUNCTION FUN_1000_01a2 entry=1000:01a2 sig=undefined __cdecl16near FUN_1000_01a2(void)
1000:01a2  b80035               MOV AX,0x3500
1000:01a5  cd21                 INT 0x21
1000:01a7  891e7000             MOV word ptr [0x70],BX
1000:01ab  8c067200             MOV word ptr [0x72],ES
1000:01af  0e                   PUSH CS
1000:01b0  1f                   POP DS
1000:01b1  b80025               MOV AX,0x2500
1000:01b4  ba6801               MOV DX,0x168
1000:01b7  cd21                 INT 0x21
1000:01b9  16                   PUSH SS
1000:01ba  1f                   POP DS
1000:01bb  833e680100           CMP word ptr [0x168],0x0
1000:01c0  7431                 JZ 0x1000:01f3
1000:01c2  8c0e6a01             MOV word ptr [0x16a],CS
1000:01c6  8c0e7201             MOV word ptr [0x172],CS
1000:01ca  8e068400             MOV ES,word ptr [0x84]
1000:01ce  268b362c00           MOV SI,word ptr ES:[0x2c]
1000:01d3  a16c01               MOV AX,[0x16c]
1000:01d6  8b166e01             MOV DX,word ptr [0x16e]
1000:01da  33db                 XOR BX,BX
1000:01dc  ff1e6801             CALLF [0x168]
1000:01e0  7303                 JNC 0x1000:01e5
1000:01e2  e97901               JMP 0x1000:035e
1000:01e5  a17001               MOV AX,[0x170]
1000:01e8  8b167201             MOV DX,word ptr [0x172]
1000:01ec  bb0300               MOV BX,0x3
1000:01ef  ff1e6801             CALLF [0x168]
1000:01f3  8e068400             MOV ES,word ptr [0x84]
1000:01f7  268b0e2c00           MOV CX,word ptr ES:[0x2c]
1000:01fc  e33e                 JCXZ 0x1000:023c
1000:01fe  8ec1                 MOV CX,ES
1000:0200  33ff                 XOR DI,DI
1000:0202  26803d00             CMP byte ptr ES:[DI],0x0
1000:0206  7434                 JZ 0x1000:023c
1000:0208  b90d00               MOV CX,0xd
1000:020b  be6200               MOV SI,0x62
1000:020e  f3a6                 CMPSB.REPE ES:DI,SI
1000:0210  740b                 JZ 0x1000:021d
1000:0212  b9ff7f               MOV CX,0x7fff
1000:0215  33c0                 XOR AX,AX
1000:0217  f2ae                 SCASB.REPNE ES:DI
1000:0219  7521                 JNZ 0x1000:023c
1000:021b  ebe5                 JMP 0x1000:0202
1000:021d  06                   PUSH ES
1000:021e  1e                   PUSH DS
1000:021f  07                   POP ES
1000:0220  1f                   POP DS
1000:0221  8bf7                 MOV SI,DI
1000:0223  bf9000               MOV DI,0x90
1000:0226  b104                 MOV CL,0x4
1000:0228  ac                   LODSB SI
1000:0229  2c41                 SUB AL,0x41
1000:022b  720d                 JC 0x1000:023a
1000:022d  d2e0                 SHL AL,CL
1000:022f  92                   XCHG AX,DX
1000:0230  ac                   LODSB SI
1000:0231  2c41                 SUB AL,0x41
1000:0233  7205                 JC 0x1000:023a
1000:0235  0ac2                 OR AL,DL
1000:0237  aa                   STOSB ES:DI
1000:0238  ebee                 JMP 0x1000:0228
1000:023a  16                   PUSH SS
1000:023b  1f                   POP DS
1000:023c  bb0400               MOV BX,0x4
1000:023f  80a79000bf           AND byte ptr [BX + 0x90],0xbf
1000:0244  b80044               MOV AX,0x4400
1000:0247  cd21                 INT 0x21
1000:0249  720a                 JC 0x1000:0255
1000:024b  f6c280               TEST DL,0x80
1000:024e  7405                 JZ 0x1000:0255
1000:0250  808f900040           OR byte ptr [BX + 0x90],0x40
1000:0255  4b                   DEC BX
1000:0256  79e7                 JNS 0x1000:023f
1000:0258  be7401               MOV SI,0x174
1000:025b  bf7401               MOV DI,0x174
1000:025e  e8c900               CALL 0x1000:032a
1000:0261  be7401               MOV SI,0x174
1000:0264  bf7401               MOV DI,0x174
1000:0267  e8b100               CALL 0x1000:031b
1000:026a  be7401               MOV SI,0x174
1000:026d  bf7401               MOV DI,0x174
1000:0270  e8b700               CALL 0x1000:032a
1000:0273  c3                   RET

; ==== FUNCTION FUN_1000_0274 entry=1000:0274 sig=undefined __cdecl16near FUN_1000_0274(void)
1000:0274  55                   PUSH BP
1000:0275  8bec                 MOV BP,SP
1000:0277  33c9                 XOR CX,CX
1000:0279  eb1a                 JMP 0x1000:0295

; ==== FUNCTION FUN_1000_027b entry=1000:027b sig=undefined FUN_1000_027b(void)
1000:027b  55                   PUSH BP
1000:027c  8bec                 MOV BP,SP
1000:027e  b90100               MOV CX,0x1
1000:0281  eb12                 JMP 0x1000:0295

; ==== FUNCTION FUN_1000_0283 entry=1000:0283 sig=undefined FUN_1000_0283(void)
1000:0283  55                   PUSH BP
1000:0284  8bec                 MOV BP,SP
1000:0286  56                   PUSH SI
1000:0287  57                   PUSH DI
1000:0288  b90001               MOV CX,0x100
1000:028b  eb08                 JMP 0x1000:0295
; undefined 8 bytes at 1000:028d

; ==== FUNCTION FUN_1000_0295 entry=1000:0295 sig=undefined __cdecl16near FUN_1000_0295(void)
1000:0295  882eb700             MOV byte ptr [0xb7],CH
1000:0299  51                   PUSH CX
1000:029a  0ac9                 OR CL,CL
1000:029c  7527                 JNZ 0x1000:02c5
1000:029e  be5802               MOV SI,0x258
1000:02a1  bf5802               MOV DI,0x258
1000:02a4  e87400               CALL 0x1000:031b
1000:02a7  be5802               MOV SI,0x258
1000:02aa  bf5802               MOV DI,0x258
1000:02ad  e87a00               CALL 0x1000:032a
1000:02b0  be7401               MOV SI,0x174
1000:02b3  bf7401               MOV DI,0x174
1000:02b6  e86200               CALL 0x1000:031b
1000:02b9  813e5a01d6d6         CMP word ptr [0x15a],0xd6d6
1000:02bf  7504                 JNZ 0x1000:02c5
1000:02c1  ff166001             CALL word ptr [0x160]
1000:02c5  be7401               MOV SI,0x174
1000:02c8  bf7401               MOV DI,0x174
1000:02cb  e84d00               CALL 0x1000:031b
1000:02ce  be7401               MOV SI,0x174
1000:02d1  bf7401               MOV DI,0x174
1000:02d4  e85300               CALL 0x1000:032a
1000:02d7  e8a200               CALL 0x1000:037c
1000:02da  0bc0                 OR AX,AX
1000:02dc  7411                 JZ 0x1000:02ef
1000:02de  58                   POP AX
1000:02df  0ae4                 OR AH,AH
1000:02e1  50                   PUSH AX
1000:02e2  750b                 JNZ 0x1000:02ef
1000:02e4  837e0400             CMP word ptr [BP + 0x4],0x0
1000:02e8  7505                 JNZ 0x1000:02ef
1000:02ea  c74604ff00           MOV word ptr [BP + 0x4],0xff
1000:02ef  e81000               CALL 0x1000:0302
1000:02f2  58                   POP AX
1000:02f3  0ae4                 OR AH,AH
1000:02f5  7507                 JNZ 0x1000:02fe
1000:02f7  8b4604               MOV AX,word ptr [BP + 0x4]
1000:02fa  b44c                 MOV AH,0x4c
1000:02fc  cd21                 INT 0x21
1000:02fe  5f                   POP DI
1000:02ff  5e                   POP SI
1000:0300  5d                   POP BP
1000:0301  c3                   RET

; ==== FUNCTION FUN_1000_0302 entry=1000:0302 sig=undefined __cdecl16near FUN_1000_0302(void)
1000:0302  8b0e6a01             MOV CX,word ptr [0x16a]
1000:0306  e307                 JCXZ 0x1000:030f
1000:0308  bb0200               MOV BX,0x2
1000:030b  ff1e6801             CALLF [0x168]
1000:030f  1e                   PUSH DS
1000:0310  c5167000             LDS DX,[0x70]
1000:0314  b80025               MOV AX,0x2500
1000:0317  cd21                 INT 0x21
1000:0319  1f                   POP DS
1000:031a  c3                   RET

; ==== FUNCTION FUN_1000_031b entry=1000:031b sig=undefined __cdecl16near FUN_1000_031b(void)
1000:031b  3bf7                 CMP SI,DI
1000:031d  730a                 JNC 0x1000:0329
1000:031f  4f                   DEC DI
1000:0320  4f                   DEC DI
1000:0321  8b0d                 MOV CX,word ptr [DI]
1000:0323  e3f6                 JCXZ 0x1000:031b
1000:0325  ffd1                 CALL CX
1000:0327  ebf2                 JMP 0x1000:031b
1000:0329  c3                   RET

; ==== FUNCTION FUN_1000_032a entry=1000:032a sig=undefined __cdecl16near FUN_1000_032a(void)
1000:032a  3bf7                 CMP SI,DI
1000:032c  730e                 JNC 0x1000:033c
1000:032e  83ef04               SUB DI,0x4
1000:0331  8b05                 MOV AX,word ptr [DI]
1000:0333  0b4502               OR AX,word ptr [DI + 0x2]
1000:0336  74f2                 JZ 0x1000:032a
1000:0338  ff1d                 CALLF [DI]
1000:033a  ebee                 JMP 0x1000:032a
1000:033c  c3                   RET
; undefined 1 bytes at 1000:033d

; ==== FUNCTION FUN_1000_033e entry=1000:033e sig=undefined __cdecl16near FUN_1000_033e(void)
1000:033e  55                   PUSH BP
1000:033f  8bec                 MOV BP,SP
1000:0341  b8fc00               MOV AX,0xfc
1000:0344  50                   PUSH AX
1000:0345  e88902               CALL 0x1000:05d1
1000:0348  833eb80000           CMP word ptr [0xb8],0x0
1000:034d  7404                 JZ 0x1000:0353
1000:034f  ff16b800             CALL word ptr [0xb8]
1000:0353  b8ff00               MOV AX,0xff
1000:0356  50                   PUSH AX
1000:0357  e87702               CALL 0x1000:05d1
1000:035a  8be5                 MOV SP,BP
1000:035c  5d                   POP BP
1000:035d  c3                   RET

; ==== FUNCTION FUN_1000_035e entry=1000:035e sig=undefined FUN_1000_035e(void)
1000:035e  b80200               MOV AX,0x2
1000:0361  e913fe               JMP 0x1000:0177

; ==== FUNCTION FUN_1000_0364 entry=1000:0364 sig=undefined FUN_1000_0364(void)
1000:0364  59                   POP CX
1000:0365  8bdc                 MOV BX,SP
1000:0367  2bd8                 SUB BX,AX
1000:0369  720a                 JC 0x1000:0375
1000:036b  3b1ebc00             CMP BX,word ptr [0xbc]
1000:036f  7204                 JC 0x1000:0375
1000:0371  8be3                 MOV SP,BX
1000:0373  ffe1                 JMP CX
1000:0375  51                   PUSH CX
1000:0376  33c0                 XOR AX,AX
1000:0378  e9fcfd               JMP 0x1000:0177
; undefined 1 bytes at 1000:037b

; ==== FUNCTION FUN_1000_037c entry=1000:037c sig=undefined __cdecl16near FUN_1000_037c(void)
1000:037c  56                   PUSH SI
1000:037d  33f6                 XOR SI,SI
1000:037f  b94200               MOV CX,0x42
1000:0382  32e4                 XOR AH,AH
1000:0384  fc                   CLD
1000:0385  ac                   LODSB SI
1000:0386  32e0                 XOR AH,AL
1000:0388  e2fb                 LOOP 0x1000:0385
1000:038a  80f455               XOR AH,0x55
1000:038d  740d                 JZ 0x1000:039c
1000:038f  e8acff               CALL 0x1000:033e
1000:0392  b80100               MOV AX,0x1
1000:0395  50                   PUSH AX
1000:0396  e83802               CALL 0x1000:05d1
1000:0399  b80100               MOV AX,0x1
1000:039c  5e                   POP SI
1000:039d  c3                   RET

; ==== FUNCTION FUN_1000_039e entry=1000:039e sig=undefined FUN_1000_039e(void)
1000:039e  8f06be00             POP word ptr [0xbe]
1000:03a2  a18800               MOV AX,[0x88]
1000:03a5  ba0100               MOV DX,0x1
1000:03a8  3c02                 CMP AL,0x2
1000:03aa  7429                 JZ 0x1000:03d5
1000:03ac  8e068400             MOV ES,word ptr [0x84]
1000:03b0  268e062c00           MOV ES,word ptr ES:[0x2c]
1000:03b5  8c06ac00             MOV word ptr [0xac],ES
1000:03b9  33c0                 XOR AX,AX
1000:03bb  99                   CWD
1000:03bc  b90080               MOV CX,0x8000
1000:03bf  33ff                 XOR DI,DI
1000:03c1  f2ae                 SCASB.REPNE ES:DI
1000:03c3  ae                   SCASB ES:DI
1000:03c4  75fb                 JNZ 0x1000:03c1
1000:03c6  47                   INC DI
1000:03c7  47                   INC DI
1000:03c8  893eaa00             MOV word ptr [0xaa],DI
1000:03cc  b9ffff               MOV CX,0xffff
1000:03cf  f2ae                 SCASB.REPNE ES:DI
1000:03d1  f7d1                 NOT CX
1000:03d3  8bd1                 MOV DX,CX
1000:03d5  bf0100               MOV DI,0x1
1000:03d8  be8100               MOV SI,0x81
1000:03db  8e1e8400             MOV DS,word ptr [0x84]
1000:03df  ac                   LODSB SI
1000:03e0  3c20                 CMP AL,0x20
1000:03e2  74fb                 JZ 0x1000:03df
1000:03e4  3c09                 CMP AL,0x9
1000:03e6  74f7                 JZ 0x1000:03df
1000:03e8  3c0d                 CMP AL,0xd
1000:03ea  746f                 JZ 0x1000:045b
1000:03ec  0ac0                 OR AL,AL
1000:03ee  746b                 JZ 0x1000:045b
1000:03f0  47                   INC DI
1000:03f1  4e                   DEC SI
1000:03f2  ac                   LODSB SI
1000:03f3  3c20                 CMP AL,0x20
1000:03f5  74e8                 JZ 0x1000:03df
1000:03f7  3c09                 CMP AL,0x9
1000:03f9  74e4                 JZ 0x1000:03df
1000:03fb  3c0d                 CMP AL,0xd
1000:03fd  745c                 JZ 0x1000:045b
1000:03ff  0ac0                 OR AL,AL
1000:0401  7458                 JZ 0x1000:045b
1000:0403  3c22                 CMP AL,0x22
1000:0405  7424                 JZ 0x1000:042b
1000:0407  3c5c                 CMP AL,0x5c
1000:0409  7403                 JZ 0x1000:040e
1000:040b  42                   INC DX
1000:040c  ebe4                 JMP 0x1000:03f2
1000:040e  33c9                 XOR CX,CX
1000:0410  41                   INC CX
1000:0411  ac                   LODSB SI
1000:0412  3c5c                 CMP AL,0x5c
1000:0414  74fa                 JZ 0x1000:0410
1000:0416  3c22                 CMP AL,0x22
1000:0418  7404                 JZ 0x1000:041e
1000:041a  03d1                 ADD DX,CX
1000:041c  ebd3                 JMP 0x1000:03f1
1000:041e  8bc1                 MOV AX,CX
1000:0420  d1e9                 SHR CX,0x1
1000:0422  13d1                 ADC DX,CX
1000:0424  a801                 TEST AL,0x1
1000:0426  75ca                 JNZ 0x1000:03f2
1000:0428  eb01                 JMP 0x1000:042b
1000:042a  4e                   DEC SI
1000:042b  ac                   LODSB SI
1000:042c  3c0d                 CMP AL,0xd
1000:042e  742b                 JZ 0x1000:045b
1000:0430  0ac0                 OR AL,AL
1000:0432  7427                 JZ 0x1000:045b
1000:0434  3c22                 CMP AL,0x22
1000:0436  74ba                 JZ 0x1000:03f2
1000:0438  3c5c                 CMP AL,0x5c
1000:043a  7403                 JZ 0x1000:043f
1000:043c  42                   INC DX
1000:043d  ebec                 JMP 0x1000:042b
1000:043f  33c9                 XOR CX,CX
1000:0441  41                   INC CX
1000:0442  ac                   LODSB SI
1000:0443  3c5c                 CMP AL,0x5c
1000:0445  74fa                 JZ 0x1000:0441
1000:0447  3c22                 CMP AL,0x22
1000:0449  7404                 JZ 0x1000:044f
1000:044b  03d1                 ADD DX,CX
1000:044d  ebdb                 JMP 0x1000:042a
1000:044f  8bc1                 MOV AX,CX
1000:0451  d1e9                 SHR CX,0x1
1000:0453  13d1                 ADC DX,CX
1000:0455  a801                 TEST AL,0x1
1000:0457  75d2                 JNZ 0x1000:042b
1000:0459  eb97                 JMP 0x1000:03f2
1000:045b  16                   PUSH SS
1000:045c  1f                   POP DS
1000:045d  893ea400             MOV word ptr [0xa4],DI
1000:0461  03d7                 ADD DX,DI
1000:0463  47                   INC DI
1000:0464  d1e7                 SHL DI,0x1
1000:0466  03d7                 ADD DX,DI
1000:0468  42                   INC DX
1000:0469  80e2fe               AND DL,0xfe
1000:046c  2be2                 SUB SP,DX
1000:046e  8bc4                 MOV AX,SP
1000:0470  a3a600               MOV [0xa6],AX
1000:0473  8bd8                 MOV BX,AX
1000:0475  03fb                 ADD DI,BX
1000:0477  16                   PUSH SS
1000:0478  07                   POP ES
1000:0479  36893f               MOV word ptr SS:[BX],DI
1000:047c  43                   INC BX
1000:047d  43                   INC BX
1000:047e  c536aa00             LDS SI,[0xaa]
1000:0482  ac                   LODSB SI
1000:0483  aa                   STOSB ES:DI
1000:0484  0ac0                 OR AL,AL
1000:0486  75fa                 JNZ 0x1000:0482
1000:0488  368e1e8400           MOV DS,word ptr SS:[0x84]
1000:048d  be8100               MOV SI,0x81
1000:0490  eb03                 JMP 0x1000:0495
1000:0492  33c0                 XOR AX,AX
1000:0494  aa                   STOSB ES:DI
1000:0495  ac                   LODSB SI
1000:0496  3c20                 CMP AL,0x20
1000:0498  74fb                 JZ 0x1000:0495
1000:049a  3c09                 CMP AL,0x9
1000:049c  74f7                 JZ 0x1000:0495
1000:049e  3c0d                 CMP AL,0xd
1000:04a0  747c                 JZ 0x1000:051e
1000:04a2  0ac0                 OR AL,AL
1000:04a4  7478                 JZ 0x1000:051e
1000:04a6  36893f               MOV word ptr SS:[BX],DI
1000:04a9  43                   INC BX
1000:04aa  43                   INC BX
1000:04ab  4e                   DEC SI
1000:04ac  ac                   LODSB SI
1000:04ad  3c20                 CMP AL,0x20
1000:04af  74e1                 JZ 0x1000:0492
1000:04b1  3c09                 CMP AL,0x9
1000:04b3  74dd                 JZ 0x1000:0492
1000:04b5  3c0d                 CMP AL,0xd
1000:04b7  7462                 JZ 0x1000:051b
1000:04b9  0ac0                 OR AL,AL
1000:04bb  745e                 JZ 0x1000:051b
1000:04bd  3c22                 CMP AL,0x22
1000:04bf  7427                 JZ 0x1000:04e8
1000:04c1  3c5c                 CMP AL,0x5c
1000:04c3  7403                 JZ 0x1000:04c8
1000:04c5  aa                   STOSB ES:DI
1000:04c6  ebe4                 JMP 0x1000:04ac
1000:04c8  33c9                 XOR CX,CX
1000:04ca  41                   INC CX
1000:04cb  ac                   LODSB SI
1000:04cc  3c5c                 CMP AL,0x5c
1000:04ce  74fa                 JZ 0x1000:04ca
1000:04d0  3c22                 CMP AL,0x22
1000:04d2  7406                 JZ 0x1000:04da
1000:04d4  b05c                 MOV AL,0x5c
1000:04d6  f3aa                 STOSB.REP ES:DI
1000:04d8  ebd1                 JMP 0x1000:04ab
1000:04da  b05c                 MOV AL,0x5c
1000:04dc  d1e9                 SHR CX,0x1
1000:04de  f3aa                 STOSB.REP ES:DI
1000:04e0  7306                 JNC 0x1000:04e8
1000:04e2  b022                 MOV AL,0x22
1000:04e4  aa                   STOSB ES:DI
1000:04e5  ebc5                 JMP 0x1000:04ac
1000:04e7  4e                   DEC SI
1000:04e8  ac                   LODSB SI
1000:04e9  3c0d                 CMP AL,0xd
1000:04eb  742e                 JZ 0x1000:051b
1000:04ed  0ac0                 OR AL,AL
1000:04ef  742a                 JZ 0x1000:051b
1000:04f1  3c22                 CMP AL,0x22
1000:04f3  74b7                 JZ 0x1000:04ac
1000:04f5  3c5c                 CMP AL,0x5c
1000:04f7  7403                 JZ 0x1000:04fc
1000:04f9  aa                   STOSB ES:DI
1000:04fa  ebec                 JMP 0x1000:04e8
1000:04fc  33c9                 XOR CX,CX
1000:04fe  41                   INC CX
1000:04ff  ac                   LODSB SI
1000:0500  3c5c                 CMP AL,0x5c
1000:0502  74fa                 JZ 0x1000:04fe
1000:0504  3c22                 CMP AL,0x22
1000:0506  7406                 JZ 0x1000:050e
1000:0508  b05c                 MOV AL,0x5c
1000:050a  f3aa                 STOSB.REP ES:DI
1000:050c  ebd9                 JMP 0x1000:04e7
1000:050e  b05c                 MOV AL,0x5c
1000:0510  d1e9                 SHR CX,0x1
1000:0512  f3aa                 STOSB.REP ES:DI
1000:0514  7396                 JNC 0x1000:04ac
1000:0516  b022                 MOV AL,0x22
1000:0518  aa                   STOSB ES:DI
1000:0519  ebcd                 JMP 0x1000:04e8
1000:051b  33c0                 XOR AX,AX
1000:051d  aa                   STOSB ES:DI
1000:051e  16                   PUSH SS
1000:051f  1f                   POP DS
1000:0520  c7070000             MOV word ptr [BX],0x0
1000:0524  ff26be00             JMP word ptr [0xbe]

; ==== FUNCTION FUN_1000_0528 entry=1000:0528 sig=undefined __cdecl16near FUN_1000_0528(void)
1000:0528  55                   PUSH BP
1000:0529  8bec                 MOV BP,SP
1000:052b  1e                   PUSH DS
1000:052c  8e068400             MOV ES,word ptr [0x84]
1000:0530  268b1e2c00           MOV BX,word ptr ES:[0x2c]
1000:0535  8ec3                 MOV BX,ES
1000:0537  33c0                 XOR AX,AX
1000:0539  33f6                 XOR SI,SI
1000:053b  33ff                 XOR DI,DI
1000:053d  b9ffff               MOV CX,0xffff
1000:0540  0bdb                 OR BX,BX
1000:0542  740e                 JZ 0x1000:0552
1000:0544  26803e000000         CMP byte ptr ES:[0x0],0x0
1000:054a  7406                 JZ 0x1000:0552
1000:054c  f2ae                 SCASB.REPNE ES:DI
1000:054e  46                   INC SI
1000:054f  ae                   SCASB ES:DI
1000:0550  75fa                 JNZ 0x1000:054c
1000:0552  8bc7                 MOV AX,DI
1000:0554  40                   INC AX
1000:0555  24fe                 AND AL,0xfe
1000:0557  46                   INC SI
1000:0558  8bfe                 MOV DI,SI
1000:055a  d1e6                 SHL SI,0x1
1000:055c  b90900               MOV CX,0x9
1000:055f  e8a400               CALL 0x1000:0606
1000:0562  50                   PUSH AX
1000:0563  8bc6                 MOV AX,SI
1000:0565  e89e00               CALL 0x1000:0606
1000:0568  a3a800               MOV [0xa8],AX
1000:056b  06                   PUSH ES
1000:056c  1e                   PUSH DS
1000:056d  07                   POP ES
1000:056e  1f                   POP DS
1000:056f  8bcf                 MOV CX,DI
1000:0571  8bd8                 MOV BX,AX
1000:0573  33f6                 XOR SI,SI
1000:0575  5f                   POP DI
1000:0576  49                   DEC CX
1000:0577  e326                 JCXZ 0x1000:059f
1000:0579  8b04                 MOV AX,word ptr [SI]
1000:057b  363b066200           CMP AX,word ptr SS:[0x62]
1000:0580  7510                 JNZ 0x1000:0592
1000:0582  51                   PUSH CX
1000:0583  56                   PUSH SI
1000:0584  57                   PUSH DI
1000:0585  bf6200               MOV DI,0x62
1000:0588  b90600               MOV CX,0x6
1000:058b  f3a7                 CMPSW.REPE ES:DI,SI
1000:058d  5f                   POP DI
1000:058e  5e                   POP SI
1000:058f  59                   POP CX
1000:0590  7405                 JZ 0x1000:0597
1000:0592  26893f               MOV word ptr ES:[BX],DI
1000:0595  43                   INC BX
1000:0596  43                   INC BX
1000:0597  ac                   LODSB SI
1000:0598  aa                   STOSB ES:DI
1000:0599  0ac0                 OR AL,AL
1000:059b  75fa                 JNZ 0x1000:0597
1000:059d  e2da                 LOOP 0x1000:0579
1000:059f  26890f               MOV word ptr ES:[BX],CX
1000:05a2  1f                   POP DS
1000:05a3  5d                   POP BP
1000:05a4  c3                   RET
; undefined 1 bytes at 1000:05a5

; ==== FUNCTION FUN_1000_05a6 entry=1000:05a6 sig=undefined __stdcall16near FUN_1000_05a6(void)
1000:05a6  55                   PUSH BP
1000:05a7  8bec                 MOV BP,SP
1000:05a9  56                   PUSH SI
1000:05aa  57                   PUSH DI
1000:05ab  1e                   PUSH DS
1000:05ac  07                   POP ES
1000:05ad  8b5604               MOV DX,word ptr [BP + 0x4]
1000:05b0  be7e01               MOV SI,0x17e
1000:05b3  ad                   LODSW SI
1000:05b4  3bc2                 CMP AX,DX
1000:05b6  7410                 JZ 0x1000:05c8
1000:05b8  40                   INC AX
1000:05b9  96                   XCHG AX,SI
1000:05ba  740c                 JZ 0x1000:05c8
1000:05bc  97                   XCHG AX,DI
1000:05bd  33c0                 XOR AX,AX
1000:05bf  b9ffff               MOV CX,0xffff
1000:05c2  f2ae                 SCASB.REPNE ES:DI
1000:05c4  8bf7                 MOV SI,DI
1000:05c6  ebeb                 JMP 0x1000:05b3
1000:05c8  96                   XCHG AX,SI
1000:05c9  5f                   POP DI
1000:05ca  5e                   POP SI
1000:05cb  8be5                 MOV SP,BP
1000:05cd  5d                   POP BP
1000:05ce  c20200               RET 0x2

; ==== FUNCTION FUN_1000_05d1 entry=1000:05d1 sig=undefined __stdcall16near FUN_1000_05d1(void)
1000:05d1  55                   PUSH BP
1000:05d2  8bec                 MOV BP,SP
1000:05d4  57                   PUSH DI
1000:05d5  ff7604               PUSH word ptr [BP + 0x4]
1000:05d8  e8cbff               CALL 0x1000:05a6
1000:05db  0bc0                 OR AX,AX
1000:05dd  7420                 JZ 0x1000:05ff
1000:05df  92                   XCHG AX,DX
1000:05e0  8bfa                 MOV DI,DX
1000:05e2  33c0                 XOR AX,AX
1000:05e4  b9ffff               MOV CX,0xffff
1000:05e7  f2ae                 SCASB.REPNE ES:DI
1000:05e9  f7d1                 NOT CX
1000:05eb  49                   DEC CX
1000:05ec  bb0200               MOV BX,0x2
1000:05ef  813e5a01d6d6         CMP word ptr [0x15a],0xd6d6
1000:05f5  7504                 JNZ 0x1000:05fb
1000:05f7  ff165c01             CALL word ptr [0x15c]
1000:05fb  b440                 MOV AH,0x40
1000:05fd  cd21                 INT 0x21
1000:05ff  5f                   POP DI
1000:0600  8be5                 MOV SP,BP
1000:0602  5d                   POP BP
1000:0603  c20200               RET 0x2

; ==== FUNCTION FUN_1000_0606 entry=1000:0606 sig=undefined __cdecl16near FUN_1000_0606(void)
1000:0606  53                   PUSH BX
1000:0607  06                   PUSH ES
1000:0608  51                   PUSH CX
1000:0609  b90004               MOV CX,0x400
1000:060c  870ed400             XCHG word ptr [0xd4],CX
1000:0610  51                   PUSH CX
1000:0611  50                   PUSH AX
1000:0612  e8a60a               CALL 0x1000:10bb
1000:0615  5b                   POP BX
1000:0616  8f06d400             POP word ptr [0xd4]
1000:061a  59                   POP CX
1000:061b  8cda                 MOV DX,DS
1000:061d  0bc0                 OR AX,AX
1000:061f  7403                 JZ 0x1000:0624
1000:0621  07                   POP ES
1000:0622  5b                   POP BX
1000:0623  c3                   RET
1000:0624  8bc1                 MOV AX,CX
1000:0626  e94efb               JMP 0x1000:0177
; undefined 1 bytes at 1000:0629

; ==== FUNCTION FUN_1000_062a entry=1000:062a sig=undefined __cdecl16near FUN_1000_062a(void)
1000:062a  7215                 JC 0x1000:0641
1000:062c  33c0                 XOR AX,AX
1000:062e  8be5                 MOV SP,BP
1000:0630  5d                   POP BP
1000:0631  c3                   RET
; undefined 13 bytes at 1000:0632

; ==== FUNCTION FUN_1000_063f entry=1000:063f sig=undefined __cdecl16near FUN_1000_063f(void)
1000:063f  7307                 JNC 0x1000:0648
1000:0641  e80e00               CALL 0x1000:0652
1000:0644  b8ffff               MOV AX,0xffff
1000:0647  99                   CWD
1000:0648  8be5                 MOV SP,BP
1000:064a  5d                   POP BP
1000:064b  c3                   RET
; undefined 6 bytes at 1000:064c

; ==== FUNCTION FUN_1000_0652 entry=1000:0652 sig=undefined __cdecl16near FUN_1000_0652(void)
1000:0652  a28c00               MOV [0x8c],AL
1000:0655  0ae4                 OR AH,AH
1000:0657  7522                 JNZ 0x1000:067b
1000:0659  803e870003           CMP byte ptr [0x87],0x3
1000:065e  720c                 JC 0x1000:066c
1000:0660  3c22                 CMP AL,0x22
1000:0662  730c                 JNC 0x1000:0670
1000:0664  3c20                 CMP AL,0x20
1000:0666  7204                 JC 0x1000:066c
1000:0668  b005                 MOV AL,0x5
1000:066a  eb06                 JMP 0x1000:0672
1000:066c  3c13                 CMP AL,0x13
1000:066e  7602                 JBE 0x1000:0672
1000:0670  b013                 MOV AL,0x13
1000:0672  bbc000               MOV BX,0xc0
1000:0675  d7                   XLAT BX
1000:0676  98                   CBW
1000:0677  a37e00               MOV [0x7e],AX
1000:067a  c3                   RET
1000:067b  8ac4                 MOV AL,AH
1000:067d  ebf7                 JMP 0x1000:0676
; undefined 1 bytes at 1000:067f

; ==== FUNCTION FUN_1000_0680 entry=1000:0680 sig=undefined __cdecl16far FUN_1000_0680(void)
1000:0680  cb                   RETF
; undefined 1 bytes at 1000:0681

; ==== FUNCTION FUN_1000_0682 entry=1000:0682 sig=undefined __cdecl16near FUN_1000_0682(void)
1000:0682  51                   PUSH CX
1000:0683  57                   PUSH DI
1000:0684  f6470201             TEST byte ptr [BX + 0x2],0x1
1000:0688  7463                 JZ 0x1000:06ed
1000:068a  e8d200               CALL 0x1000:075f
1000:068d  8bfe                 MOV DI,SI
1000:068f  8b04                 MOV AX,word ptr [SI]
1000:0691  a801                 TEST AL,0x1
1000:0693  7403                 JZ 0x1000:0698
1000:0695  2bc8                 SUB CX,AX
1000:0697  49                   DEC CX
1000:0698  41                   INC CX
1000:0699  41                   INC CX
1000:069a  8b7704               MOV SI,word ptr [BX + 0x4]
1000:069d  0bf6                 OR SI,SI
1000:069f  744c                 JZ 0x1000:06ed
1000:06a1  03ce                 ADD CX,SI
1000:06a3  7309                 JNC 0x1000:06ae
1000:06a5  33c0                 XOR AX,AX
1000:06a7  baf0ff               MOV DX,0xfff0
1000:06aa  e330                 JCXZ 0x1000:06dc
1000:06ac  eb3f                 JMP 0x1000:06ed
1000:06ae  16                   PUSH SS
1000:06af  07                   POP ES
1000:06b0  26a1d400             MOV AX,ES:[0xd4]
1000:06b4  3d0020               CMP AX,0x2000
1000:06b7  7416                 JZ 0x1000:06cf
1000:06b9  ba0080               MOV DX,0x8000
1000:06bc  3bd0                 CMP DX,AX
1000:06be  7206                 JC 0x1000:06c6
1000:06c0  d1ea                 SHR DX,0x1
1000:06c2  75f8                 JNZ 0x1000:06bc
1000:06c4  eb22                 JMP 0x1000:06e8
1000:06c6  83fa08               CMP DX,0x8
1000:06c9  721d                 JC 0x1000:06e8
1000:06cb  d1e2                 SHL DX,0x1
1000:06cd  8bc2                 MOV AX,DX
1000:06cf  48                   DEC AX
1000:06d0  8bd0                 MOV DX,AX
1000:06d2  03c1                 ADD AX,CX
1000:06d4  7302                 JNC 0x1000:06d8
1000:06d6  33c0                 XOR AX,AX
1000:06d8  f7d2                 NOT DX
1000:06da  23c2                 AND AX,DX
1000:06dc  52                   PUSH DX
1000:06dd  e82e00               CALL 0x1000:070e
1000:06e0  5a                   POP DX
1000:06e1  730d                 JNC 0x1000:06f0
1000:06e3  83faf0               CMP DX,-0x10
1000:06e6  7405                 JZ 0x1000:06ed
1000:06e8  b81000               MOV AX,0x10
1000:06eb  ebe2                 JMP 0x1000:06cf
1000:06ed  f9                   STC
1000:06ee  eb1b                 JMP 0x1000:070b
1000:06f0  8bd0                 MOV DX,AX
1000:06f2  2b5704               SUB DX,word ptr [BX + 0x4]
1000:06f5  894704               MOV word ptr [BX + 0x4],AX
1000:06f8  897f08               MOV word ptr [BX + 0x8],DI
1000:06fb  8b770a               MOV SI,word ptr [BX + 0xa]
1000:06fe  4a                   DEC DX
1000:06ff  8914                 MOV word ptr [SI],DX
1000:0701  42                   INC DX
1000:0702  03f2                 ADD SI,DX
1000:0704  c704feff             MOV word ptr [SI],0xfffe
1000:0708  89770a               MOV word ptr [BX + 0xa],SI
1000:070b  5f                   POP DI
1000:070c  59                   POP CX
1000:070d  c3                   RET

; ==== FUNCTION FUN_1000_070e entry=1000:070e sig=undefined __cdecl16near FUN_1000_070e(void)
1000:070e  8bd0                 MOV DX,AX
1000:0710  f6470204             TEST byte ptr [BX + 0x2],0x4
1000:0714  740f                 JZ 0x1000:0725
1000:0716  4a                   DEC DX
1000:0717  8b7704               MOV SI,word ptr [BX + 0x4]
1000:071a  4e                   DEC SI
1000:071b  3bd6                 CMP DX,SI
1000:071d  7605                 JBE 0x1000:0724
1000:071f  3957fe               CMP word ptr [BX + -0x2],DX
1000:0722  7336                 JNC 0x1000:075a
1000:0724  42                   INC DX
1000:0725  53                   PUSH BX
1000:0726  51                   PUSH CX
1000:0727  8cde                 MOV SI,DS
1000:0729  8ec6                 MOV SI,ES
1000:072b  b104                 MOV CL,0x4
1000:072d  d3e8                 SHR AX,CL
1000:072f  7503                 JNZ 0x1000:0734
1000:0731  b80010               MOV AX,0x1000
1000:0734  f6470204             TEST byte ptr [BX + 0x2],0x4
1000:0738  740a                 JZ 0x1000:0744
1000:073a  03c6                 ADD AX,SI
1000:073c  8b1e8400             MOV BX,word ptr [0x84]
1000:0740  2bc3                 SUB AX,BX
1000:0742  8ec3                 MOV BX,ES
1000:0744  8bd8                 MOV BX,AX
1000:0746  b44a                 MOV AH,0x4a
1000:0748  cd21                 INT 0x21
1000:074a  59                   POP CX
1000:074b  5b                   POP BX
1000:074c  7210                 JC 0x1000:075e
1000:074e  8bc2                 MOV AX,DX
1000:0750  f6470204             TEST byte ptr [BX + 0x2],0x4
1000:0754  7404                 JZ 0x1000:075a
1000:0756  4a                   DEC DX
1000:0757  8957fe               MOV word ptr [BX + -0x2],DX
1000:075a  f8                   CLC
1000:075b  eb01                 JMP 0x1000:075e
; undefined 1 bytes at 1000:075d
1000:075e  c3                   RET

; ==== FUNCTION FUN_1000_075f entry=1000:075f sig=undefined __cdecl16near FUN_1000_075f(void)
1000:075f  57                   PUSH DI
1000:0760  8b7708               MOV SI,word ptr [BX + 0x8]
1000:0763  3b770a               CMP SI,word ptr [BX + 0xa]
1000:0766  7503                 JNZ 0x1000:076b
1000:0768  8b7706               MOV SI,word ptr [BX + 0x6]
1000:076b  ad                   LODSW SI
1000:076c  83f8fe               CMP AX,-0x2
1000:076f  7408                 JZ 0x1000:0779
1000:0771  8bfe                 MOV DI,SI
1000:0773  24fe                 AND AL,0xfe
1000:0775  03f0                 ADD SI,AX
1000:0777  ebf2                 JMP 0x1000:076b
1000:0779  4f                   DEC DI
1000:077a  4f                   DEC DI
1000:077b  8bf7                 MOV SI,DI
1000:077d  5f                   POP DI
1000:077e  c3                   RET
; undefined 1 bytes at 1000:077f

; ==== FUNCTION FUN_1000_0780 entry=1000:0780 sig=undefined __cdecl16near FUN_1000_0780(void)
1000:0780  55                   PUSH BP
1000:0781  8bec                 MOV BP,SP
1000:0783  8bd7                 MOV DX,DI
1000:0785  8bde                 MOV BX,SI
1000:0787  8cd8                 MOV AX,DS
1000:0789  8ec0                 MOV AX,ES
1000:078b  8b7e04               MOV DI,word ptr [BP + 0x4]
1000:078e  33c0                 XOR AX,AX
1000:0790  b9ffff               MOV CX,0xffff
1000:0793  f2ae                 SCASB.REPNE ES:DI
1000:0795  8d75ff               LEA SI,[DI + -0x1]
1000:0798  8b7e06               MOV DI,word ptr [BP + 0x6]
1000:079b  b9ffff               MOV CX,0xffff
1000:079e  f2ae                 SCASB.REPNE ES:DI
1000:07a0  f7d1                 NOT CX
1000:07a2  2bf9                 SUB DI,CX
1000:07a4  87fe                 XCHG SI,DI
1000:07a6  8b4604               MOV AX,word ptr [BP + 0x4]
1000:07a9  f7c60100             TEST SI,0x1
1000:07ad  7402                 JZ 0x1000:07b1
1000:07af  a4                   MOVSB ES:DI,SI
1000:07b0  49                   DEC CX
1000:07b1  d1e9                 SHR CX,0x1
1000:07b3  f3a5                 MOVSW.REP ES:DI,SI
1000:07b5  13c9                 ADC CX,CX
1000:07b7  f3a4                 MOVSB.REP ES:DI,SI
1000:07b9  8bf3                 MOV SI,BX
1000:07bb  8bfa                 MOV DI,DX
1000:07bd  5d                   POP BP
1000:07be  c3                   RET
; undefined 1 bytes at 1000:07bf

; ==== FUNCTION FUN_1000_07c0 entry=1000:07c0 sig=undefined __cdecl16near FUN_1000_07c0(void)
1000:07c0  55                   PUSH BP
1000:07c1  8bec                 MOV BP,SP
1000:07c3  8bd7                 MOV DX,DI
1000:07c5  8bde                 MOV BX,SI
1000:07c7  8b7606               MOV SI,word ptr [BP + 0x6]
1000:07ca  8bfe                 MOV DI,SI
1000:07cc  8cd8                 MOV AX,DS
1000:07ce  8ec0                 MOV AX,ES
1000:07d0  33c0                 XOR AX,AX
1000:07d2  b9ffff               MOV CX,0xffff
1000:07d5  f2ae                 SCASB.REPNE ES:DI
1000:07d7  f7d1                 NOT CX
1000:07d9  8b7e04               MOV DI,word ptr [BP + 0x4]
1000:07dc  8bc7                 MOV AX,DI
1000:07de  a801                 TEST AL,0x1
1000:07e0  7402                 JZ 0x1000:07e4
1000:07e2  a4                   MOVSB ES:DI,SI
1000:07e3  49                   DEC CX
1000:07e4  d1e9                 SHR CX,0x1
1000:07e6  f3a5                 MOVSW.REP ES:DI,SI
1000:07e8  13c9                 ADC CX,CX
1000:07ea  f3a4                 MOVSB.REP ES:DI,SI
1000:07ec  8bf3                 MOV SI,BX
1000:07ee  8bfa                 MOV DI,DX
1000:07f0  5d                   POP BP
1000:07f1  c3                   RET

; ==== FUNCTION FUN_1000_07f2 entry=1000:07f2 sig=undefined __cdecl16near FUN_1000_07f2(void)
1000:07f2  55                   PUSH BP
1000:07f3  8bec                 MOV BP,SP
1000:07f5  8bd7                 MOV DX,DI
1000:07f7  8cd8                 MOV AX,DS
1000:07f9  8ec0                 MOV AX,ES
1000:07fb  8b7e04               MOV DI,word ptr [BP + 0x4]
1000:07fe  33c0                 XOR AX,AX
1000:0800  b9ffff               MOV CX,0xffff
1000:0803  f2ae                 SCASB.REPNE ES:DI
1000:0805  f7d1                 NOT CX
1000:0807  49                   DEC CX
1000:0808  91                   XCHG AX,CX
1000:0809  8bfa                 MOV DI,DX
1000:080b  5d                   POP BP
1000:080c  c3                   RET
; undefined 1 bytes at 1000:080d

; ==== FUNCTION FUN_1000_080e entry=1000:080e sig=undefined __cdecl16near FUN_1000_080e(void)
1000:080e  55                   PUSH BP
1000:080f  8bec                 MOV BP,SP
1000:0811  57                   PUSH DI
1000:0812  56                   PUSH SI
1000:0813  1e                   PUSH DS
1000:0814  07                   POP ES
1000:0815  8b4e08               MOV CX,word ptr [BP + 0x8]
1000:0818  e326                 JCXZ 0x1000:0840
1000:081a  8bd9                 MOV BX,CX
1000:081c  8b7e04               MOV DI,word ptr [BP + 0x4]
1000:081f  8bf7                 MOV SI,DI
1000:0821  33c0                 XOR AX,AX
1000:0823  f2ae                 SCASB.REPNE ES:DI
1000:0825  f7d9                 NEG CX
1000:0827  03cb                 ADD CX,BX
1000:0829  8bfe                 MOV DI,SI
1000:082b  8b7606               MOV SI,word ptr [BP + 0x6]
1000:082e  f3a6                 CMPSB.REPE ES:DI,SI
1000:0830  8a44ff               MOV AL,byte ptr [SI + -0x1]
1000:0833  33c9                 XOR CX,CX
1000:0835  3a45ff               CMP AL,byte ptr [DI + -0x1]
1000:0838  7704                 JA 0x1000:083e
1000:083a  7404                 JZ 0x1000:0840
1000:083c  49                   DEC CX
1000:083d  49                   DEC CX
1000:083e  f7d1                 NOT CX
1000:0840  8bc1                 MOV AX,CX
1000:0842  5e                   POP SI
1000:0843  5f                   POP DI
1000:0844  8be5                 MOV SP,BP
1000:0846  5d                   POP BP
1000:0847  c3                   RET

; ==== FUNCTION FUN_1000_0848 entry=1000:0848 sig=undefined __cdecl16near FUN_1000_0848(void)
1000:0848  55                   PUSH BP
1000:0849  8bec                 MOV BP,SP
1000:084b  57                   PUSH DI
1000:084c  56                   PUSH SI
1000:084d  8b36a800             MOV SI,word ptr [0xa8]
1000:0851  0bf6                 OR SI,SI
1000:0853  7445                 JZ 0x1000:089a
1000:0855  837e0400             CMP word ptr [BP + 0x4],0x0
1000:0859  743f                 JZ 0x1000:089a
1000:085b  ff7604               PUSH word ptr [BP + 0x4]
1000:085e  e891ff               CALL 0x1000:07f2
1000:0861  83c402               ADD SP,0x2
1000:0864  8bf8                 MOV DI,AX
1000:0866  eb2d                 JMP 0x1000:0895
1000:0868  ff34                 PUSH word ptr [SI]
1000:086a  e885ff               CALL 0x1000:07f2
1000:086d  83c402               ADD SP,0x2
1000:0870  3bc7                 CMP AX,DI
1000:0872  761e                 JBE 0x1000:0892
1000:0874  8b1c                 MOV BX,word ptr [SI]
1000:0876  80393d               CMP byte ptr [BX + DI],0x3d
1000:0879  7517                 JNZ 0x1000:0892
1000:087b  57                   PUSH DI
1000:087c  ff7604               PUSH word ptr [BP + 0x4]
1000:087f  53                   PUSH BX
1000:0880  e88bff               CALL 0x1000:080e
1000:0883  83c406               ADD SP,0x6
1000:0886  0bc0                 OR AX,AX
1000:0888  7508                 JNZ 0x1000:0892
1000:088a  8b04                 MOV AX,word ptr [SI]
1000:088c  03c7                 ADD AX,DI
1000:088e  40                   INC AX
1000:088f  eb0b                 JMP 0x1000:089c
; undefined 1 bytes at 1000:0891
1000:0892  83c602               ADD SI,0x2
1000:0895  833c00               CMP word ptr [SI],0x0
1000:0898  75ce                 JNZ 0x1000:0868
1000:089a  33c0                 XOR AX,AX
1000:089c  5e                   POP SI
1000:089d  5f                   POP DI
1000:089e  8be5                 MOV SP,BP
1000:08a0  5d                   POP BP
1000:08a1  c3                   RET

; ==== FUNCTION FUN_1000_08a2 entry=1000:08a2 sig=undefined __cdecl16near FUN_1000_08a2(void)
1000:08a2  55                   PUSH BP
1000:08a3  8bec                 MOV BP,SP
1000:08a5  57                   PUSH DI
1000:08a6  8b7e04               MOV DI,word ptr [BP + 0x4]
1000:08a9  1e                   PUSH DS
1000:08aa  07                   POP ES
1000:08ab  8bdf                 MOV BX,DI
1000:08ad  33c0                 XOR AX,AX
1000:08af  b9ffff               MOV CX,0xffff
1000:08b2  f2ae                 SCASB.REPNE ES:DI
1000:08b4  f7d1                 NOT CX
1000:08b6  8a4606               MOV AL,byte ptr [BP + 0x6]
1000:08b9  8bfb                 MOV DI,BX
1000:08bb  f2ae                 SCASB.REPNE ES:DI
1000:08bd  7404                 JZ 0x1000:08c3
1000:08bf  33c0                 XOR AX,AX
1000:08c1  eb03                 JMP 0x1000:08c6
1000:08c3  8d45ff               LEA AX,[DI + -0x1]
1000:08c6  5f                   POP DI
1000:08c7  8be5                 MOV SP,BP
1000:08c9  5d                   POP BP
1000:08ca  c3                   RET
; undefined 1 bytes at 1000:08cb

; ==== FUNCTION FUN_1000_08cc entry=1000:08cc sig=undefined __cdecl16near FUN_1000_08cc(void)
1000:08cc  55                   PUSH BP
1000:08cd  8bec                 MOV BP,SP
1000:08cf  8bd6                 MOV DX,SI
1000:08d1  8b7606               MOV SI,word ptr [BP + 0x6]
1000:08d4  8b5e04               MOV BX,word ptr [BP + 0x4]
1000:08d7  b0ff                 MOV AL,0xff
1000:08d9  0ac0                 OR AL,AL
1000:08db  742c                 JZ 0x1000:0909
1000:08dd  ac                   LODSB SI
1000:08de  8a27                 MOV AH,byte ptr [BX]
1000:08e0  43                   INC BX
1000:08e1  3ae0                 CMP AH,AL
1000:08e3  74f4                 JZ 0x1000:08d9
1000:08e5  2c41                 SUB AL,0x41
1000:08e7  3c1a                 CMP AL,0x1a
1000:08e9  1ac9                 SBB CL,CL
1000:08eb  80e120               AND CL,0x20
1000:08ee  02c1                 ADD AL,CL
1000:08f0  0441                 ADD AL,0x41
1000:08f2  86e0                 XCHG AL,AH
1000:08f4  2c41                 SUB AL,0x41
1000:08f6  3c1a                 CMP AL,0x1a
1000:08f8  1ac9                 SBB CL,CL
1000:08fa  80e120               AND CL,0x20
1000:08fd  02c1                 ADD AL,CL
1000:08ff  0441                 ADD AL,0x41
1000:0901  3ac4                 CMP AL,AH
1000:0903  74d4                 JZ 0x1000:08d9
1000:0905  1ac0                 SBB AL,AL
1000:0907  1cff                 SBB AL,0xff
1000:0909  98                   CBW
1000:090a  8bf2                 MOV SI,DX
1000:090c  5d                   POP BP
1000:090d  c3                   RET

; ==== FUNCTION FUN_1000_090e entry=1000:090e sig=undefined __cdecl16near FUN_1000_090e(void)
1000:090e  55                   PUSH BP
1000:090f  8bec                 MOV BP,SP
1000:0911  57                   PUSH DI
1000:0912  1e                   PUSH DS
1000:0913  07                   POP ES
1000:0914  8b7e04               MOV DI,word ptr [BP + 0x4]
1000:0917  33c0                 XOR AX,AX
1000:0919  b9ffff               MOV CX,0xffff
1000:091c  f2ae                 SCASB.REPNE ES:DI
1000:091e  f7d1                 NOT CX
1000:0920  4f                   DEC DI
1000:0921  8a4606               MOV AL,byte ptr [BP + 0x6]
1000:0924  fd                   STD
1000:0925  f2ae                 SCASB.REPNE ES:DI
1000:0927  7404                 JZ 0x1000:092d
1000:0929  33c0                 XOR AX,AX
1000:092b  eb03                 JMP 0x1000:0930
1000:092d  8d4501               LEA AX,[DI + 0x1]
1000:0930  fc                   CLD
1000:0931  5f                   POP DI
1000:0932  8be5                 MOV SP,BP
1000:0934  5d                   POP BP
1000:0935  c3                   RET

; ==== FUNCTION FUN_1000_0936 entry=1000:0936 sig=undefined __cdecl16near FUN_1000_0936(void)
1000:0936  55                   PUSH BP
1000:0937  8bec                 MOV BP,SP
1000:0939  83ec02               SUB SP,0x2
1000:093c  57                   PUSH DI
1000:093d  56                   PUSH SI
1000:093e  8b7604               MOV SI,word ptr [BP + 0x4]
1000:0941  8b7e06               MOV DI,word ptr [BP + 0x6]
1000:0944  eb01                 JMP 0x1000:0947
1000:0946  46                   INC SI
1000:0947  803c3b               CMP byte ptr [SI],0x3b
1000:094a  74fa                 JZ 0x1000:0946
1000:094c  8976fe               MOV word ptr [BP + -0x2],SI
1000:094f  ff4e08               DEC word ptr [BP + 0x8]
1000:0952  7420                 JZ 0x1000:0974
1000:0954  803c00               CMP byte ptr [SI],0x0
1000:0957  7416                 JZ 0x1000:096f
1000:0959  803c3b               CMP byte ptr [SI],0x3b
1000:095c  7411                 JZ 0x1000:096f
1000:095e  8a04                 MOV AL,byte ptr [SI]
1000:0960  8805                 MOV byte ptr [DI],AL
1000:0962  46                   INC SI
1000:0963  47                   INC DI
1000:0964  ff4e08               DEC word ptr [BP + 0x8]
1000:0967  75eb                 JNZ 0x1000:0954
1000:0969  8976fe               MOV word ptr [BP + -0x2],SI
1000:096c  eb06                 JMP 0x1000:0974
1000:096e  46                   INC SI
1000:096f  803c3b               CMP byte ptr [SI],0x3b
1000:0972  74fa                 JZ 0x1000:096e
1000:0974  c60500               MOV byte ptr [DI],0x0
1000:0977  3976fe               CMP word ptr [BP + -0x2],SI
1000:097a  7404                 JZ 0x1000:0980
1000:097c  8bc6                 MOV AX,SI
1000:097e  eb02                 JMP 0x1000:0982
1000:0980  33c0                 XOR AX,AX
1000:0982  5e                   POP SI
1000:0983  5f                   POP DI
1000:0984  8be5                 MOV SP,BP
1000:0986  5d                   POP BP
1000:0987  c3                   RET

; ==== FUNCTION FUN_1000_0988 entry=1000:0988 sig=undefined __cdecl16near FUN_1000_0988(void)
1000:0988  55                   PUSH BP
1000:0989  8bec                 MOV BP,SP
1000:098b  83ec0c               SUB SP,0xc
1000:098e  57                   PUSH DI
1000:098f  56                   PUSH SI
1000:0990  33f6                 XOR SI,SI
1000:0992  397606               CMP word ptr [BP + 0x6],SI
1000:0995  7506                 JNZ 0x1000:099d
1000:0997  a1a800               MOV AX,[0xa8]
1000:099a  894606               MOV word ptr [BP + 0x6],AX
1000:099d  397606               CMP word ptr [BP + 0x6],SI
1000:09a0  7425                 JZ 0x1000:09c7
1000:09a2  8b4606               MOV AX,word ptr [BP + 0x6]
1000:09a5  8946fc               MOV word ptr [BP + -0x4],AX
1000:09a8  eb0f                 JMP 0x1000:09b9
1000:09aa  8346fc02             ADD word ptr [BP + -0x4],0x2
1000:09ae  ff37                 PUSH word ptr [BX]
1000:09b0  e83ffe               CALL 0x1000:07f2
1000:09b3  83c402               ADD SP,0x2
1000:09b6  40                   INC AX
1000:09b7  03f0                 ADD SI,AX
1000:09b9  8b5efc               MOV BX,word ptr [BP + -0x4]
1000:09bc  833f00               CMP word ptr [BX],0x0
1000:09bf  7406                 JZ 0x1000:09c7
1000:09c1  81feff7f             CMP SI,0x7fff
1000:09c5  76e3                 JBE 0x1000:09aa
1000:09c7  833eda0000           CMP word ptr [0xda],0x0
1000:09cc  741e                 JZ 0x1000:09ec
1000:09ce  a18e00               MOV AX,[0x8e]
1000:09d1  8946f6               MOV word ptr [BP + -0xa],AX
1000:09d4  eb03                 JMP 0x1000:09d9
1000:09d6  ff4ef6               DEC word ptr [BP + -0xa]
1000:09d9  837ef600             CMP word ptr [BP + -0xa],0x0
1000:09dd  7412                 JZ 0x1000:09f1
1000:09df  8b5ef6               MOV BX,word ptr [BP + -0xa]
1000:09e2  80bf8f0000           CMP byte ptr [BX + 0x8f],0x0
1000:09e7  7508                 JNZ 0x1000:09f1
1000:09e9  ebeb                 JMP 0x1000:09d6
; undefined 1 bytes at 1000:09eb
1000:09ec  c746f60000           MOV word ptr [BP + -0xa],0x0
1000:09f1  837ef600             CMP word ptr [BP + -0xa],0x0
1000:09f5  740a                 JZ 0x1000:0a01
1000:09f7  8b46f6               MOV AX,word ptr [BP + -0xa]
1000:09fa  050700               ADD AX,0x7
1000:09fd  03c0                 ADD AX,AX
1000:09ff  03f0                 ADD SI,AX
1000:0a01  837e0e00             CMP word ptr [BP + 0xe],0x0
1000:0a05  740e                 JZ 0x1000:0a15
1000:0a07  ff760e               PUSH word ptr [BP + 0xe]
1000:0a0a  e8e5fd               CALL 0x1000:07f2
1000:0a0d  83c402               ADD SP,0x2
1000:0a10  050300               ADD AX,0x3
1000:0a13  03f0                 ADD SI,AX
1000:0a15  46                   INC SI
1000:0a16  8976fa               MOV word ptr [BP + -0x6],SI
1000:0a19  81feff7f             CMP SI,0x7fff
1000:0a1d  7613                 JBE 0x1000:0a32
1000:0a1f  c7067e000700         MOV word ptr [0x7e],0x7
1000:0a25  c7068c000a00         MOV word ptr [0x8c],0xa
1000:0a2b  b8ffff               MOV AX,0xffff
1000:0a2e  e9a401               JMP 0x1000:0bd5
; undefined 1 bytes at 1000:0a31
1000:0a32  8b36d400             MOV SI,word ptr [0xd4]
1000:0a36  c706d4001000         MOV word ptr [0xd4],0x10
1000:0a3c  8b46fa               MOV AX,word ptr [BP + -0x6]
1000:0a3f  050f00               ADD AX,0xf
1000:0a42  50                   PUSH AX
1000:0a43  e87506               CALL 0x1000:10bb
1000:0a46  83c402               ADD SP,0x2
1000:0a49  8bf8                 MOV DI,AX
1000:0a4b  0bf8                 OR DI,AX
1000:0a4d  7513                 JNZ 0x1000:0a62
1000:0a4f  c7067e000c00         MOV word ptr [0x7e],0xc
1000:0a55  c7068c000800         MOV word ptr [0x8c],0x8
1000:0a5b  8936d400             MOV word ptr [0xd4],SI
1000:0a5f  ebca                 JMP 0x1000:0a2b
; undefined 1 bytes at 1000:0a61
1000:0a62  8936d400             MOV word ptr [0xd4],SI
1000:0a66  8b5e08               MOV BX,word ptr [BP + 0x8]
1000:0a69  8bc7                 MOV AX,DI
1000:0a6b  893f                 MOV word ptr [BX],DI
1000:0a6d  050f00               ADD AX,0xf
1000:0a70  24f0                 AND AL,0xf0
1000:0a72  8b5e0a               MOV BX,word ptr [BP + 0xa]
1000:0a75  8bf8                 MOV DI,AX
1000:0a77  8907                 MOV word ptr [BX],AX
1000:0a79  837e0600             CMP word ptr [BP + 0x6],0x0
1000:0a7d  742b                 JZ 0x1000:0aaa
1000:0a7f  8b4606               MOV AX,word ptr [BP + 0x6]
1000:0a82  8946fc               MOV word ptr [BP + -0x4],AX
1000:0a85  eb1b                 JMP 0x1000:0aa2
; undefined 1 bytes at 1000:0a87
1000:0a88  33c0                 XOR AX,AX
1000:0a8a  50                   PUSH AX
1000:0a8b  ff37                 PUSH word ptr [BX]
1000:0a8d  57                   PUSH DI
1000:0a8e  e82ffd               CALL 0x1000:07c0
1000:0a91  83c404               ADD SP,0x4
1000:0a94  50                   PUSH AX
1000:0a95  e80afe               CALL 0x1000:08a2
1000:0a98  83c404               ADD SP,0x4
1000:0a9b  40                   INC AX
1000:0a9c  8bf8                 MOV DI,AX
1000:0a9e  8346fc02             ADD word ptr [BP + -0x4],0x2
1000:0aa2  8b5efc               MOV BX,word ptr [BP + -0x4]
1000:0aa5  833f00               CMP word ptr [BX],0x0
1000:0aa8  75de                 JNZ 0x1000:0a88
1000:0aaa  837ef600             CMP word ptr [BP + -0xa],0x0
1000:0aae  7445                 JZ 0x1000:0af5
1000:0ab0  33c0                 XOR AX,AX
1000:0ab2  50                   PUSH AX
1000:0ab3  b86200               MOV AX,0x62
1000:0ab6  50                   PUSH AX
1000:0ab7  57                   PUSH DI
1000:0ab8  e805fd               CALL 0x1000:07c0
1000:0abb  83c404               ADD SP,0x4
1000:0abe  50                   PUSH AX
1000:0abf  e8e0fd               CALL 0x1000:08a2
1000:0ac2  83c404               ADD SP,0x4
1000:0ac5  8bf8                 MOV DI,AX
1000:0ac7  33f6                 XOR SI,SI
1000:0ac9  eb1c                 JMP 0x1000:0ae7
; undefined 1 bytes at 1000:0acb
1000:0acc  b104                 MOV CL,0x4
1000:0ace  8a849000             MOV AL,byte ptr [SI + 0x90]
1000:0ad2  8bd0                 MOV DX,AX
1000:0ad4  d2f8                 SAR AL,CL
1000:0ad6  240f                 AND AL,0xf
1000:0ad8  0441                 ADD AL,0x41
1000:0ada  8805                 MOV byte ptr [DI],AL
1000:0adc  47                   INC DI
1000:0add  80e20f               AND DL,0xf
1000:0ae0  80c241               ADD DL,0x41
1000:0ae3  8815                 MOV byte ptr [DI],DL
1000:0ae5  47                   INC DI
1000:0ae6  46                   INC SI
1000:0ae7  8b46f6               MOV AX,word ptr [BP + -0xa]
1000:0aea  ff4ef6               DEC word ptr [BP + -0xa]
1000:0aed  0bc0                 OR AX,AX
1000:0aef  75db                 JNZ 0x1000:0acc
1000:0af1  c60500               MOV byte ptr [DI],0x0
1000:0af4  47                   INC DI
1000:0af5  c60500               MOV byte ptr [DI],0x0
1000:0af8  47                   INC DI
1000:0af9  837e0e00             CMP word ptr [BP + 0xe],0x0
1000:0afd  7412                 JZ 0x1000:0b11
1000:0aff  c60501               MOV byte ptr [DI],0x1
1000:0b02  47                   INC DI
1000:0b03  c60500               MOV byte ptr [DI],0x0
1000:0b06  47                   INC DI
1000:0b07  ff760e               PUSH word ptr [BP + 0xe]
1000:0b0a  57                   PUSH DI
1000:0b0b  e8b2fc               CALL 0x1000:07c0
1000:0b0e  83c404               ADD SP,0x4
1000:0b11  33f6                 XOR SI,SI
1000:0b13  8b460c               MOV AX,word ptr [BP + 0xc]
1000:0b16  40                   INC AX
1000:0b17  8bf8                 MOV DI,AX
1000:0b19  397610               CMP word ptr [BP + 0x10],SI
1000:0b1c  742f                 JZ 0x1000:0b4d
1000:0b1e  33c9                 XOR CX,CX
1000:0b20  51                   PUSH CX
1000:0b21  ff7610               PUSH word ptr [BP + 0x10]
1000:0b24  51                   PUSH CX
1000:0b25  b9d600               MOV CX,0xd6
1000:0b28  51                   PUSH CX
1000:0b29  50                   PUSH AX
1000:0b2a  e893fc               CALL 0x1000:07c0
1000:0b2d  83c404               ADD SP,0x4
1000:0b30  50                   PUSH AX
1000:0b31  e86efd               CALL 0x1000:08a2
1000:0b34  83c404               ADD SP,0x4
1000:0b37  50                   PUSH AX
1000:0b38  e885fc               CALL 0x1000:07c0
1000:0b3b  83c404               ADD SP,0x4
1000:0b3e  50                   PUSH AX
1000:0b3f  e860fd               CALL 0x1000:08a2
1000:0b42  83c404               ADD SP,0x4
1000:0b45  8bf8                 MOV DI,AX
1000:0b47  8bf0                 MOV SI,AX
1000:0b49  2b760c               SUB SI,word ptr [BP + 0xc]
1000:0b4c  4e                   DEC SI
1000:0b4d  8b5e04               MOV BX,word ptr [BP + 0x4]
1000:0b50  833f00               CMP word ptr [BX],0x0
1000:0b53  7473                 JZ 0x1000:0bc8
1000:0b55  837f0200             CMP word ptr [BX + 0x2],0x0
1000:0b59  7405                 JZ 0x1000:0b60
1000:0b5b  c60520               MOV byte ptr [DI],0x20
1000:0b5e  47                   INC DI
1000:0b5f  46                   INC SI
1000:0b60  8d4702               LEA AX,[BX + 0x2]
1000:0b63  8946fc               MOV word ptr [BP + -0x4],AX
1000:0b66  eb58                 JMP 0x1000:0bc0
1000:0b68  ff37                 PUSH word ptr [BX]
1000:0b6a  e885fc               CALL 0x1000:07f2
1000:0b6d  83c402               ADD SP,0x2
1000:0b70  8946f8               MOV word ptr [BP + -0x8],AX
1000:0b73  03c6                 ADD AX,SI
1000:0b75  3d7d00               CMP AX,0x7d
1000:0b78  761a                 JBE 0x1000:0b94
1000:0b7a  c7067e000700         MOV word ptr [0x7e],0x7
1000:0b80  c7068c000a00         MOV word ptr [0x8c],0xa
1000:0b86  8b5e08               MOV BX,word ptr [BP + 0x8]
1000:0b89  ff37                 PUSH word ptr [BX]
1000:0b8b  e80c05               CALL 0x1000:109a
1000:0b8e  83c402               ADD SP,0x2
1000:0b91  e997fe               JMP 0x1000:0a2b
1000:0b94  0376f8               ADD SI,word ptr [BP + -0x8]
1000:0b97  33c0                 XOR AX,AX
1000:0b99  50                   PUSH AX
1000:0b9a  8b5efc               MOV BX,word ptr [BP + -0x4]
1000:0b9d  8346fc02             ADD word ptr [BP + -0x4],0x2
1000:0ba1  ff37                 PUSH word ptr [BX]
1000:0ba3  57                   PUSH DI
1000:0ba4  e819fc               CALL 0x1000:07c0
1000:0ba7  83c404               ADD SP,0x4
1000:0baa  50                   PUSH AX
1000:0bab  e8f4fc               CALL 0x1000:08a2
1000:0bae  83c404               ADD SP,0x4
1000:0bb1  8bf8                 MOV DI,AX
1000:0bb3  8b5efc               MOV BX,word ptr [BP + -0x4]
1000:0bb6  833f00               CMP word ptr [BX],0x0
1000:0bb9  7405                 JZ 0x1000:0bc0
1000:0bbb  c60520               MOV byte ptr [DI],0x20
1000:0bbe  47                   INC DI
1000:0bbf  46                   INC SI
1000:0bc0  8b5efc               MOV BX,word ptr [BP + -0x4]
1000:0bc3  833f00               CMP word ptr [BX],0x0
1000:0bc6  75a0                 JNZ 0x1000:0b68
1000:0bc8  c6050d               MOV byte ptr [DI],0xd
1000:0bcb  8b5e0c               MOV BX,word ptr [BP + 0xc]
1000:0bce  8bc6                 MOV AX,SI
1000:0bd0  8807                 MOV byte ptr [BX],AL
1000:0bd2  8b46fa               MOV AX,word ptr [BP + -0x6]
1000:0bd5  5e                   POP SI
1000:0bd6  5f                   POP DI
1000:0bd7  8be5                 MOV SP,BP
1000:0bd9  5d                   POP BP
1000:0bda  c3                   RET
; undefined 1 bytes at 1000:0bdb
1000:0bdc  undefined2 0000h
1000:0bde  undefined2 0000h
1000:0be0  undefined2 0000h
1000:0be2  undefined2 0000h
1000:0be4  undefined2 0000h

; ==== FUNCTION FUN_1000_0be6 entry=1000:0be6 sig=undefined FUN_1000_0be6(void)
1000:0be6  55                   PUSH BP
1000:0be7  8bec                 MOV BP,SP
1000:0be9  837e0401             CMP word ptr [BP + 0x4],0x1
1000:0bed  7413                 JZ 0x1000:0c02
1000:0bef  837e0400             CMP word ptr [BP + 0x4],0x0
1000:0bf3  740d                 JZ 0x1000:0c02
1000:0bf5  c7067e001600         MOV word ptr [0x7e],0x16
1000:0bfb  b8ffff               MOV AX,0xffff
1000:0bfe  f8                   CLC
1000:0bff  e93dfa               JMP 0x1000:063f
1000:0c02  56                   PUSH SI
1000:0c03  57                   PUSH DI
1000:0c04  8cd8                 MOV AX,DS
1000:0c06  8b5e0a               MOV BX,word ptr [BP + 0xa]
1000:0c09  b104                 MOV CL,0x4
1000:0c0b  d3eb                 SHR BX,CL
1000:0c0d  03c3                 ADD AX,BX
1000:0c0f  a3dc00               MOV [0xdc],AX
1000:0c12  8b4608               MOV AX,word ptr [BP + 0x8]
1000:0c15  a3de00               MOV [0xde],AX
1000:0c18  8c1ee000             MOV word ptr [0xe0],DS
1000:0c1c  8c1ee400             MOV word ptr [0xe4],DS
1000:0c20  8c1ee800             MOV word ptr [0xe8],DS
1000:0c24  1e                   PUSH DS
1000:0c25  07                   POP ES
1000:0c26  8b36de00             MOV SI,word ptr [0xde]
1000:0c2a  46                   INC SI
1000:0c2b  bfea00               MOV DI,0xea
1000:0c2e  b80129               MOV AX,0x2901
1000:0c31  cd21                 INT 0x21
1000:0c33  b80129               MOV AX,0x2901
1000:0c36  bffa00               MOV DI,0xfa
1000:0c39  cd21                 INT 0x21
1000:0c3b  813e5a01d6d6         CMP word ptr [0x15a],0xd6d6
1000:0c41  7507                 JNZ 0x1000:0c4a
1000:0c43  bbffff               MOV BX,0xffff
1000:0c46  ff165c01             CALL word ptr [0x15c]
1000:0c4a  55                   PUSH BP
1000:0c4b  06                   PUSH ES
1000:0c4c  1e                   PUSH DS
1000:0c4d  2e8c16de0b           MOV word ptr CS:[0xbde],SS
1000:0c52  2e8926dc0b           MOV word ptr CS:[0xbdc],SP
1000:0c57  bf2e00               MOV DI,0x2e
1000:0c5a  8b35                 MOV SI,word ptr [DI]
1000:0c5c  2e8936e00b           MOV word ptr CS:[0xbe0],SI
1000:0c61  8b7502               MOV SI,word ptr [DI + 0x2]
1000:0c64  2e8936e20b           MOV word ptr CS:[0xbe2],SI
1000:0c69  2e8c1ee40b           MOV word ptr CS:[0xbe4],DS
1000:0c6e  bbdc00               MOV BX,0xdc
1000:0c71  837e0400             CMP word ptr [BP + 0x4],0x0
1000:0c75  7406                 JZ 0x1000:0c7d
1000:0c77  b004                 MOV AL,0x4
1000:0c79  33c9                 XOR CX,CX
1000:0c7b  eb02                 JMP 0x1000:0c7f
1000:0c7d  32c0                 XOR AL,AL
1000:0c7f  f8                   CLC
1000:0c80  50                   PUSH AX
1000:0c81  b40b                 MOV AH,0xb
1000:0c83  cd21                 INT 0x21
1000:0c85  58                   POP AX
1000:0c86  c706af000100         MOV word ptr [0xaf],0x1
1000:0c8c  8b5606               MOV DX,word ptr [BP + 0x6]
1000:0c8f  b44b                 MOV AH,0x4b
1000:0c91  cd21                 INT 0x21
1000:0c93  93                   XCHG AX,BX
1000:0c94  9f                   LAHF
1000:0c95  fa                   CLI
1000:0c96  2e8e16de0b           MOV SS,word ptr CS:[0xbde]
1000:0c9b  2e8b26dc0b           MOV SP,word ptr CS:[0xbdc]
1000:0ca0  fb                   STI
1000:0ca1  bf2e00               MOV DI,0x2e
1000:0ca4  2e8e1ee40b           MOV DS,word ptr CS:[0xbe4]
1000:0ca9  2e8b36e20b           MOV SI,word ptr CS:[0xbe2]
1000:0cae  897502               MOV word ptr [DI + 0x2],SI
1000:0cb1  2e8b36e00b           MOV SI,word ptr CS:[0xbe0]
1000:0cb6  8935                 MOV word ptr [DI],SI
1000:0cb8  1f                   POP DS
1000:0cb9  9e                   SAHF
1000:0cba  93                   XCHG AX,BX
1000:0cbb  c706af000000         MOV word ptr [0xaf],0x0
1000:0cc1  07                   POP ES
1000:0cc2  5d                   POP BP
1000:0cc3  5f                   POP DI
1000:0cc4  5e                   POP SI
1000:0cc5  7204                 JC 0x1000:0ccb
1000:0cc7  b44d                 MOV AH,0x4d
1000:0cc9  cd21                 INT 0x21
1000:0ccb  e971f9               JMP 0x1000:063f

; ==== FUNCTION FUN_1000_0cce entry=1000:0cce sig=undefined __cdecl16near FUN_1000_0cce(void)
1000:0cce  55                   PUSH BP
1000:0ccf  8bec                 MOV BP,SP
1000:0cd1  b88800               MOV AX,0x88
1000:0cd4  e88df6               CALL 0x1000:0364
1000:0cd7  56                   PUSH SI
1000:0cd8  8b7606               MOV SI,word ptr [BP + 0x6]
1000:0cdb  837e0c00             CMP word ptr [BP + 0xc],0x0
1000:0cdf  751f                 JNZ 0x1000:0d00
1000:0ce1  89b678ff             MOV word ptr [BP + 0xff78],SI
1000:0ce5  b80a01               MOV AX,0x10a
1000:0ce8  50                   PUSH AX
1000:0ce9  e85cfb               CALL 0x1000:0848
1000:0cec  83c402               ADD SP,0x2
1000:0cef  8bf0                 MOV SI,AX
1000:0cf1  0bf0                 OR SI,AX
1000:0cf3  7511                 JNZ 0x1000:0d06
1000:0cf5  c7067e000800         MOV word ptr [0x7e],0x8
1000:0cfb  b8ffff               MOV AX,0xffff
1000:0cfe  eb4e                 JMP 0x1000:0d4e
1000:0d00  c78678ff0000         MOV word ptr [BP + 0xff78],0x0
1000:0d06  ffb678ff             PUSH word ptr [BP + 0xff78]
1000:0d0a  33c0                 XOR AX,AX
1000:0d0c  50                   PUSH AX
1000:0d0d  8d867eff             LEA AX,[BP + 0xff7e]
1000:0d11  50                   PUSH AX
1000:0d12  8d46fe               LEA AX,[BP + -0x2]
1000:0d15  50                   PUSH AX
1000:0d16  8d867cff             LEA AX,[BP + 0xff7c]
1000:0d1a  50                   PUSH AX
1000:0d1b  ff760a               PUSH word ptr [BP + 0xa]
1000:0d1e  ff7608               PUSH word ptr [BP + 0x8]
1000:0d21  e864fc               CALL 0x1000:0988
1000:0d24  83c40e               ADD SP,0xe
1000:0d27  40                   INC AX
1000:0d28  74d1                 JZ 0x1000:0cfb
1000:0d2a  ff76fe               PUSH word ptr [BP + -0x2]
1000:0d2d  8d867eff             LEA AX,[BP + 0xff7e]
1000:0d31  50                   PUSH AX
1000:0d32  56                   PUSH SI
1000:0d33  ff7604               PUSH word ptr [BP + 0x4]
1000:0d36  e8adfe               CALL 0x1000:0be6
1000:0d39  83c408               ADD SP,0x8
1000:0d3c  89867aff             MOV word ptr [BP + 0xff7a],AX
1000:0d40  ffb67cff             PUSH word ptr [BP + 0xff7c]
1000:0d44  e85303               CALL 0x1000:109a
1000:0d47  83c402               ADD SP,0x2
1000:0d4a  8b867aff             MOV AX,word ptr [BP + 0xff7a]
1000:0d4e  5e                   POP SI
1000:0d4f  8be5                 MOV SP,BP
1000:0d51  5d                   POP BP
1000:0d52  c3                   RET
; undefined 1 bytes at 1000:0d53

; ==== FUNCTION FUN_1000_0d54 entry=1000:0d54 sig=undefined __cdecl16near FUN_1000_0d54(void)
1000:0d54  55                   PUSH BP
1000:0d55  8bec                 MOV BP,SP
1000:0d57  b80a00               MOV AX,0xa
1000:0d5a  e807f6               CALL 0x1000:0364
1000:0d5d  57                   PUSH DI
1000:0d5e  56                   PUSH SI
1000:0d5f  8b7606               MOV SI,word ptr [BP + 0x6]
1000:0d62  837e0402             CMP word ptr [BP + 0x4],0x2
1000:0d66  7510                 JNZ 0x1000:0d78
1000:0d68  ff760a               PUSH word ptr [BP + 0xa]
1000:0d6b  ff7608               PUSH word ptr [BP + 0x8]
1000:0d6e  56                   PUSH SI
1000:0d6f  e8e602               CALL 0x1000:1058
1000:0d72  83c406               ADD SP,0x6
1000:0d75  e90c01               JMP 0x1000:0e84
1000:0d78  b85c00               MOV AX,0x5c
1000:0d7b  50                   PUSH AX
1000:0d7c  56                   PUSH SI
1000:0d7d  e88efb               CALL 0x1000:090e
1000:0d80  83c404               ADD SP,0x4
1000:0d83  8bf8                 MOV DI,AX
1000:0d85  b82f00               MOV AX,0x2f
1000:0d88  50                   PUSH AX
1000:0d89  56                   PUSH SI
1000:0d8a  e881fb               CALL 0x1000:090e
1000:0d8d  83c404               ADD SP,0x4
1000:0d90  0bc0                 OR AX,AX
1000:0d92  7508                 JNZ 0x1000:0d9c
1000:0d94  0bff                 OR DI,DI
1000:0d96  750e                 JNZ 0x1000:0da6
1000:0d98  8bfe                 MOV DI,SI
1000:0d9a  eb0a                 JMP 0x1000:0da6
1000:0d9c  0bff                 OR DI,DI
1000:0d9e  7404                 JZ 0x1000:0da4
1000:0da0  3bc7                 CMP AX,DI
1000:0da2  7602                 JBE 0x1000:0da6
1000:0da4  8bf8                 MOV DI,AX
1000:0da6  c746faffff           MOV word ptr [BP + -0x6],0xffff
1000:0dab  b82e00               MOV AX,0x2e
1000:0dae  50                   PUSH AX
1000:0daf  57                   PUSH DI
1000:0db0  e8effa               CALL 0x1000:08a2
1000:0db3  83c404               ADD SP,0x4
1000:0db6  8946fe               MOV word ptr [BP + -0x2],AX
1000:0db9  0bc0                 OR AX,AX
1000:0dbb  7435                 JZ 0x1000:0df2
1000:0dbd  33c9                 XOR CX,CX
1000:0dbf  51                   PUSH CX
1000:0dc0  56                   PUSH SI
1000:0dc1  e8a802               CALL 0x1000:106c
1000:0dc4  83c404               ADD SP,0x4
1000:0dc7  40                   INC AX
1000:0dc8  7503                 JNZ 0x1000:0dcd
1000:0dca  e9b400               JMP 0x1000:0e81
1000:0dcd  ff362201             PUSH word ptr [0x122]
1000:0dd1  ff76fe               PUSH word ptr [BP + -0x2]
1000:0dd4  e8f5fa               CALL 0x1000:08cc
1000:0dd7  83c404               ADD SP,0x4
1000:0dda  50                   PUSH AX
1000:0ddb  ff760a               PUSH word ptr [BP + 0xa]
1000:0dde  ff7608               PUSH word ptr [BP + 0x8]
1000:0de1  56                   PUSH SI
1000:0de2  ff7604               PUSH word ptr [BP + 0x4]
1000:0de5  e8e6fe               CALL 0x1000:0cce
1000:0de8  83c40a               ADD SP,0xa
1000:0deb  8946fa               MOV word ptr [BP + -0x6],AX
1000:0dee  e99000               JMP 0x1000:0e81
; undefined 1 bytes at 1000:0df1
1000:0df2  a1d400               MOV AX,[0xd4]
1000:0df5  8946f6               MOV word ptr [BP + -0xa],AX
1000:0df8  c706d4001000         MOV word ptr [0xd4],0x10
1000:0dfe  56                   PUSH SI
1000:0dff  e8f0f9               CALL 0x1000:07f2
1000:0e02  83c402               ADD SP,0x2
1000:0e05  050500               ADD AX,0x5
1000:0e08  50                   PUSH AX
1000:0e09  e8af02               CALL 0x1000:10bb
1000:0e0c  83c402               ADD SP,0x2
1000:0e0f  8bf8                 MOV DI,AX
1000:0e11  8b46f6               MOV AX,word ptr [BP + -0xa]
1000:0e14  a3d400               MOV [0xd4],AX
1000:0e17  0bff                 OR DI,DI
1000:0e19  7505                 JNZ 0x1000:0e20
1000:0e1b  b8ffff               MOV AX,0xffff
1000:0e1e  eb64                 JMP 0x1000:0e84
1000:0e20  56                   PUSH SI
1000:0e21  57                   PUSH DI
1000:0e22  e89bf9               CALL 0x1000:07c0
1000:0e25  83c404               ADD SP,0x4
1000:0e28  56                   PUSH SI
1000:0e29  e8c6f9               CALL 0x1000:07f2
1000:0e2c  83c402               ADD SP,0x2
1000:0e2f  03c7                 ADD AX,DI
1000:0e31  8946fe               MOV word ptr [BP + -0x2],AX
1000:0e34  c746f80200           MOV word ptr [BP + -0x8],0x2
1000:0e39  eb04                 JMP 0x1000:0e3f
; undefined 1 bytes at 1000:0e3b
1000:0e3c  ff4ef8               DEC word ptr [BP + -0x8]
1000:0e3f  837ef800             CMP word ptr [BP + -0x8],0x0
1000:0e43  7c35                 JL 0x1000:0e7a
1000:0e45  8b5ef8               MOV BX,word ptr [BP + -0x8]
1000:0e48  03db                 ADD BX,BX
1000:0e4a  ffb72201             PUSH word ptr [BX + 0x122]
1000:0e4e  ff76fe               PUSH word ptr [BP + -0x2]
1000:0e51  e86cf9               CALL 0x1000:07c0
1000:0e54  83c404               ADD SP,0x4
1000:0e57  33c0                 XOR AX,AX
1000:0e59  50                   PUSH AX
1000:0e5a  57                   PUSH DI
1000:0e5b  e80e02               CALL 0x1000:106c
1000:0e5e  83c404               ADD SP,0x4
1000:0e61  40                   INC AX
1000:0e62  74d8                 JZ 0x1000:0e3c
1000:0e64  ff76f8               PUSH word ptr [BP + -0x8]
1000:0e67  ff760a               PUSH word ptr [BP + 0xa]
1000:0e6a  ff7608               PUSH word ptr [BP + 0x8]
1000:0e6d  57                   PUSH DI
1000:0e6e  ff7604               PUSH word ptr [BP + 0x4]
1000:0e71  e85afe               CALL 0x1000:0cce
1000:0e74  83c40a               ADD SP,0xa
1000:0e77  8946fa               MOV word ptr [BP + -0x6],AX
1000:0e7a  57                   PUSH DI
1000:0e7b  e81c02               CALL 0x1000:109a
1000:0e7e  83c402               ADD SP,0x2
1000:0e81  8b46fa               MOV AX,word ptr [BP + -0x6]
1000:0e84  5e                   POP SI
1000:0e85  5f                   POP DI
1000:0e86  8be5                 MOV SP,BP
1000:0e88  5d                   POP BP
1000:0e89  c3                   RET

; ==== FUNCTION FUN_1000_0e8a entry=1000:0e8a sig=undefined __cdecl16near FUN_1000_0e8a(void)
1000:0e8a  55                   PUSH BP
1000:0e8b  8bec                 MOV BP,SP
1000:0e8d  83ec08               SUB SP,0x8
1000:0e90  57                   PUSH DI
1000:0e91  56                   PUSH SI
1000:0e92  33ff                 XOR DI,DI
1000:0e94  a1d400               MOV AX,[0xd4]
1000:0e97  8946fa               MOV word ptr [BP + -0x6],AX
1000:0e9a  c706d4001000         MOV word ptr [0xd4],0x10
1000:0ea0  ff760a               PUSH word ptr [BP + 0xa]
1000:0ea3  ff7608               PUSH word ptr [BP + 0x8]
1000:0ea6  ff7606               PUSH word ptr [BP + 0x6]
1000:0ea9  ff7604               PUSH word ptr [BP + 0x4]
1000:0eac  e8a5fe               CALL 0x1000:0d54
1000:0eaf  83c408               ADD SP,0x8
1000:0eb2  8946fe               MOV word ptr [BP + -0x2],AX
1000:0eb5  40                   INC AX
1000:0eb6  7557                 JNZ 0x1000:0f0f
1000:0eb8  833e7e0002           CMP word ptr [0x7e],0x2
1000:0ebd  7550                 JNZ 0x1000:0f0f
1000:0ebf  b82f00               MOV AX,0x2f
1000:0ec2  50                   PUSH AX
1000:0ec3  ff7606               PUSH word ptr [BP + 0x6]
1000:0ec6  e8d9f9               CALL 0x1000:08a2
1000:0ec9  83c404               ADD SP,0x4
1000:0ecc  0bc0                 OR AX,AX
1000:0ece  753f                 JNZ 0x1000:0f0f
1000:0ed0  b85c00               MOV AX,0x5c
1000:0ed3  50                   PUSH AX
1000:0ed4  ff7606               PUSH word ptr [BP + 0x6]
1000:0ed7  e8c8f9               CALL 0x1000:08a2
1000:0eda  83c404               ADD SP,0x4
1000:0edd  0bc0                 OR AX,AX
1000:0edf  752e                 JNZ 0x1000:0f0f
1000:0ee1  8b5e06               MOV BX,word ptr [BP + 0x6]
1000:0ee4  803f00               CMP byte ptr [BX],0x0
1000:0ee7  7406                 JZ 0x1000:0eef
1000:0ee9  807f013a             CMP byte ptr [BX + 0x1],0x3a
1000:0eed  7420                 JZ 0x1000:0f0f
1000:0eef  b82801               MOV AX,0x128
1000:0ef2  50                   PUSH AX
1000:0ef3  e852f9               CALL 0x1000:0848
1000:0ef6  83c402               ADD SP,0x2
1000:0ef9  8bf0                 MOV SI,AX
1000:0efb  0bf0                 OR SI,AX
1000:0efd  7410                 JZ 0x1000:0f0f
1000:0eff  b80401               MOV AX,0x104
1000:0f02  50                   PUSH AX
1000:0f03  e8b501               CALL 0x1000:10bb
1000:0f06  83c402               ADD SP,0x2
1000:0f09  8bf8                 MOV DI,AX
1000:0f0b  0bf8                 OR DI,AX
1000:0f0d  7509                 JNZ 0x1000:0f18
1000:0f0f  8b46fa               MOV AX,word ptr [BP + -0x6]
1000:0f12  a3d400               MOV [0xd4],AX
1000:0f15  e9a000               JMP 0x1000:0fb8
1000:0f18  8b46fa               MOV AX,word ptr [BP + -0x6]
1000:0f1b  a3d400               MOV [0xd4],AX
1000:0f1e  e98200               JMP 0x1000:0fa3
; undefined 1 bytes at 1000:0f21
1000:0f22  803d00               CMP byte ptr [DI],0x0
1000:0f25  7503                 JNZ 0x1000:0f2a
1000:0f27  e98e00               JMP 0x1000:0fb8
1000:0f2a  57                   PUSH DI
1000:0f2b  e8c4f8               CALL 0x1000:07f2
1000:0f2e  83c402               ADD SP,0x2
1000:0f31  8bd8                 MOV BX,AX
1000:0f33  03df                 ADD BX,DI
1000:0f35  4b                   DEC BX
1000:0f36  803f5c               CMP byte ptr [BX],0x5c
1000:0f39  7410                 JZ 0x1000:0f4b
1000:0f3b  803f2f               CMP byte ptr [BX],0x2f
1000:0f3e  740b                 JZ 0x1000:0f4b
1000:0f40  b82d01               MOV AX,0x12d
1000:0f43  50                   PUSH AX
1000:0f44  57                   PUSH DI
1000:0f45  e838f8               CALL 0x1000:0780
1000:0f48  83c404               ADD SP,0x4
1000:0f4b  ff7606               PUSH word ptr [BP + 0x6]
1000:0f4e  e8a1f8               CALL 0x1000:07f2
1000:0f51  83c402               ADD SP,0x2
1000:0f54  57                   PUSH DI
1000:0f55  8946f8               MOV word ptr [BP + -0x8],AX
1000:0f58  e897f8               CALL 0x1000:07f2
1000:0f5b  83c402               ADD SP,0x2
1000:0f5e  0346f8               ADD AX,word ptr [BP + -0x8]
1000:0f61  3d0401               CMP AX,0x104
1000:0f64  7352                 JNC 0x1000:0fb8
1000:0f66  ff7606               PUSH word ptr [BP + 0x6]
1000:0f69  57                   PUSH DI
1000:0f6a  e813f8               CALL 0x1000:0780
1000:0f6d  83c404               ADD SP,0x4
1000:0f70  ff760a               PUSH word ptr [BP + 0xa]
1000:0f73  ff7608               PUSH word ptr [BP + 0x8]
1000:0f76  57                   PUSH DI
1000:0f77  ff7604               PUSH word ptr [BP + 0x4]
1000:0f7a  e8d7fd               CALL 0x1000:0d54
1000:0f7d  83c408               ADD SP,0x8
1000:0f80  8946fe               MOV word ptr [BP + -0x2],AX
1000:0f83  40                   INC AX
1000:0f84  7532                 JNZ 0x1000:0fb8
1000:0f86  833e7e0002           CMP word ptr [0x7e],0x2
1000:0f8b  7416                 JZ 0x1000:0fa3
1000:0f8d  803d5c               CMP byte ptr [DI],0x5c
1000:0f90  7405                 JZ 0x1000:0f97
1000:0f92  803d2f               CMP byte ptr [DI],0x2f
1000:0f95  7521                 JNZ 0x1000:0fb8
1000:0f97  807d015c             CMP byte ptr [DI + 0x1],0x5c
1000:0f9b  7406                 JZ 0x1000:0fa3
1000:0f9d  807d012f             CMP byte ptr [DI + 0x1],0x2f
1000:0fa1  7515                 JNZ 0x1000:0fb8
1000:0fa3  b80301               MOV AX,0x103
1000:0fa6  50                   PUSH AX
1000:0fa7  57                   PUSH DI
1000:0fa8  56                   PUSH SI
1000:0fa9  e88af9               CALL 0x1000:0936
1000:0fac  83c406               ADD SP,0x6
1000:0faf  8bf0                 MOV SI,AX
1000:0fb1  0bf0                 OR SI,AX
1000:0fb3  7403                 JZ 0x1000:0fb8
1000:0fb5  e96aff               JMP 0x1000:0f22
1000:0fb8  0bff                 OR DI,DI
1000:0fba  7407                 JZ 0x1000:0fc3
1000:0fbc  57                   PUSH DI
1000:0fbd  e8da00               CALL 0x1000:109a
1000:0fc0  83c402               ADD SP,0x2
1000:0fc3  8b46fe               MOV AX,word ptr [BP + -0x2]
1000:0fc6  5e                   POP SI
1000:0fc7  5f                   POP DI
1000:0fc8  8be5                 MOV SP,BP
1000:0fca  5d                   POP BP
1000:0fcb  c3                   RET

; ==== FUNCTION FUN_1000_0fcc entry=1000:0fcc sig=undefined __cdecl16near FUN_1000_0fcc(void)
1000:0fcc  55                   PUSH BP
1000:0fcd  8bec                 MOV BP,SP
1000:0fcf  83ec0a               SUB SP,0xa
1000:0fd2  b83001               MOV AX,0x130
1000:0fd5  50                   PUSH AX
1000:0fd6  e86ff8               CALL 0x1000:0848
1000:0fd9  83c402               ADD SP,0x2
1000:0fdc  8946f6               MOV word ptr [BP + -0xa],AX
1000:0fdf  837e0400             CMP word ptr [BP + 0x4],0x0
1000:0fe3  7515                 JNZ 0x1000:0ffa
1000:0fe5  33c0                 XOR AX,AX
1000:0fe7  50                   PUSH AX
1000:0fe8  ff76f6               PUSH word ptr [BP + -0xa]
1000:0feb  e87e00               CALL 0x1000:106c
1000:0fee  83c404               ADD SP,0x4
1000:0ff1  3d0100               CMP AX,0x1
1000:0ff4  1bc0                 SBB AX,AX
1000:0ff6  f7d8                 NEG AX
1000:0ff8  eb59                 JMP 0x1000:1053
1000:0ffa  c746f83801           MOV word ptr [BP + -0x8],0x138
1000:0fff  8b4604               MOV AX,word ptr [BP + 0x4]
1000:1002  8946fa               MOV word ptr [BP + -0x6],AX
1000:1005  c746fc0000           MOV word ptr [BP + -0x4],0x0
1000:100a  837ef600             CMP word ptr [BP + -0xa],0x0
1000:100e  742e                 JZ 0x1000:103e
1000:1010  ff36a800             PUSH word ptr [0xa8]
1000:1014  8d46f6               LEA AX,[BP + -0xa]
1000:1017  50                   PUSH AX
1000:1018  ff76f6               PUSH word ptr [BP + -0xa]
1000:101b  33c9                 XOR CX,CX
1000:101d  51                   PUSH CX
1000:101e  e833fd               CALL 0x1000:0d54
1000:1021  83c408               ADD SP,0x8
1000:1024  8946fe               MOV word ptr [BP + -0x2],AX
1000:1027  40                   INC AX
1000:1028  750e                 JNZ 0x1000:1038
1000:102a  833e7e0002           CMP word ptr [0x7e],0x2
1000:102f  740d                 JZ 0x1000:103e
1000:1031  833e7e000d           CMP word ptr [0x7e],0xd
1000:1036  7406                 JZ 0x1000:103e
1000:1038  8b46fe               MOV AX,word ptr [BP + -0x2]
1000:103b  eb16                 JMP 0x1000:1053
; undefined 1 bytes at 1000:103d
1000:103e  ff36a800             PUSH word ptr [0xa8]
1000:1042  8d46f6               LEA AX,[BP + -0xa]
1000:1045  50                   PUSH AX
1000:1046  b93b01               MOV CX,0x13b
1000:1049  894ef6               MOV word ptr [BP + -0xa],CX
1000:104c  51                   PUSH CX
1000:104d  33c0                 XOR AX,AX
1000:104f  50                   PUSH AX
1000:1050  e837fe               CALL 0x1000:0e8a
1000:1053  8be5                 MOV SP,BP
1000:1055  5d                   POP BP
1000:1056  c3                   RET
; undefined 1 bytes at 1000:1057

; ==== FUNCTION FUN_1000_1058 entry=1000:1058 sig=undefined FUN_1000_1058(void)
1000:1058  8b0e7401             MOV CX,word ptr [0x174]
1000:105c  e302                 JCXZ 0x1000:1060
1000:105e  ffe1                 JMP CX
1000:1060  b8ffff               MOV AX,0xffff
1000:1063  c7067e001600         MOV word ptr [0x7e],0x16
1000:1069  e9d3f5               JMP 0x1000:063f

; ==== FUNCTION FUN_1000_106c entry=1000:106c sig=undefined FUN_1000_106c(void)
1000:106c  55                   PUSH BP
1000:106d  8bec                 MOV BP,SP
1000:106f  8b5604               MOV DX,word ptr [BP + 0x4]
1000:1072  b80043               MOV AX,0x4300
1000:1075  cd21                 INT 0x21
1000:1077  720f                 JC 0x1000:1088
1000:1079  f6460602             TEST byte ptr [BP + 0x6],0x2
1000:107d  7409                 JZ 0x1000:1088
1000:107f  f6c101               TEST CL,0x1
1000:1082  7404                 JZ 0x1000:1088
1000:1084  b8000d               MOV AX,0xd00
1000:1087  f9                   STC
1000:1088  e99ff5               JMP 0x1000:062a
; undefined 1 bytes at 1000:108b

; ==== FUNCTION FUN_1000_108c entry=1000:108c sig=undefined FUN_1000_108c(void)
1000:108c  55                   PUSH BP
1000:108d  8bec                 MOV BP,SP
1000:108f  8b5604               MOV DX,word ptr [BP + 0x4]
1000:1092  b441                 MOV AH,0x41
1000:1094  cd21                 INT 0x21
1000:1096  e991f5               JMP 0x1000:062a
; undefined 1 bytes at 1000:1099

; ==== FUNCTION FUN_1000_109a entry=1000:109a sig=undefined __cdecl16near FUN_1000_109a(void)
1000:109a  55                   PUSH BP
1000:109b  8bec                 MOV BP,SP
1000:109d  56                   PUSH SI
1000:109e  8b5e04               MOV BX,word ptr [BP + 0x4]
1000:10a1  be4800               MOV SI,0x48
1000:10a4  395c06               CMP word ptr [SI + 0x6],BX
1000:10a7  730d                 JNC 0x1000:10b6
1000:10a9  4b                   DEC BX
1000:10aa  4b                   DEC BX
1000:10ab  800f01               OR byte ptr [BX],0x1
1000:10ae  395c08               CMP word ptr [SI + 0x8],BX
1000:10b1  7603                 JBE 0x1000:10b6
1000:10b3  895c08               MOV word ptr [SI + 0x8],BX
1000:10b6  5e                   POP SI
1000:10b7  8be5                 MOV SP,BP
1000:10b9  5d                   POP BP
1000:10ba  c3                   RET

; ==== FUNCTION FUN_1000_10bb entry=1000:10bb sig=undefined __cdecl16near FUN_1000_10bb(void)
1000:10bb  55                   PUSH BP
1000:10bc  8bec                 MOV BP,SP
1000:10be  56                   PUSH SI
1000:10bf  57                   PUSH DI
1000:10c0  8b4e04               MOV CX,word ptr [BP + 0x4]
1000:10c3  83f9e8               CMP CX,-0x18
1000:10c6  7712                 JA 0x1000:10da
1000:10c8  bb4800               MOV BX,0x48
1000:10cb  e82800               CALL 0x1000:10f6
1000:10ce  7321                 JNC 0x1000:10f1
1000:10d0  e8aff5               CALL 0x1000:0682
1000:10d3  7205                 JC 0x1000:10da
1000:10d5  e81e00               CALL 0x1000:10f6
1000:10d8  7317                 JNC 0x1000:10f1
1000:10da  33c0                 XOR AX,AX
1000:10dc  39064801             CMP word ptr [0x148],AX
1000:10e0  740e                 JZ 0x1000:10f0
1000:10e2  ff7604               PUSH word ptr [BP + 0x4]
1000:10e5  ff164801             CALL word ptr [0x148]
1000:10e9  83c402               ADD SP,0x2
1000:10ec  0bc0                 OR AX,AX
1000:10ee  75d0                 JNZ 0x1000:10c0
1000:10f0  99                   CWD
1000:10f1  5f                   POP DI
1000:10f2  5e                   POP SI
1000:10f3  5d                   POP BP
1000:10f4  c3                   RET
; undefined 1 bytes at 1000:10f5

; ==== FUNCTION FUN_1000_10f6 entry=1000:10f6 sig=undefined __cdecl16near FUN_1000_10f6(void)
1000:10f6  41                   INC CX
1000:10f7  80e1fe               AND CL,0xfe
1000:10fa  53                   PUSH BX
1000:10fb  fc                   CLD
1000:10fc  8b7708               MOV SI,word ptr [BX + 0x8]
1000:10ff  8b5f0a               MOV BX,word ptr [BX + 0xa]
1000:1102  33ff                 XOR DI,DI
1000:1104  eb23                 JMP 0x1000:1129
1000:1106  8bc3                 MOV AX,BX
1000:1108  5b                   POP BX
1000:1109  a801                 TEST AL,0x1
1000:110b  7542                 JNZ 0x1000:114f
1000:110d  53                   PUSH BX
1000:110e  8b7706               MOV SI,word ptr [BX + 0x6]
1000:1111  8b5f08               MOV BX,word ptr [BX + 0x8]
1000:1114  3bde                 CMP BX,SI
1000:1116  7436                 JZ 0x1000:114e
1000:1118  4b                   DEC BX
1000:1119  33ff                 XOR DI,DI
1000:111b  eb0c                 JMP 0x1000:1129
; undefined 1 bytes at 1000:111d
1000:111e  8d54fe               LEA DX,[SI + -0x2]
1000:1121  3bd3                 CMP DX,BX
1000:1123  73e1                 JNC 0x1000:1106
1000:1125  03f0                 ADD SI,AX
1000:1127  7223                 JC 0x1000:114c
1000:1129  ad                   LODSW SI
1000:112a  a801                 TEST AL,0x1
1000:112c  74f0                 JZ 0x1000:111e
1000:112e  8bfe                 MOV DI,SI
1000:1130  48                   DEC AX
1000:1131  3bc1                 CMP AX,CX
1000:1133  7323                 JNC 0x1000:1158
1000:1135  03f0                 ADD SI,AX
1000:1137  7213                 JC 0x1000:114c
1000:1139  8bd0                 MOV DX,AX
1000:113b  ad                   LODSW SI
1000:113c  a801                 TEST AL,0x1
1000:113e  74de                 JZ 0x1000:111e
1000:1140  03c2                 ADD AX,DX
1000:1142  83c002               ADD AX,0x2
1000:1145  8bf7                 MOV SI,DI
1000:1147  8944fe               MOV word ptr [SI + -0x2],AX
1000:114a  ebe4                 JMP 0x1000:1130
1000:114c  8bc0                 MOV AX,AX
1000:114e  5b                   POP BX
1000:114f  8b4706               MOV AX,word ptr [BX + 0x6]
1000:1152  894708               MOV word ptr [BX + 0x8],AX
1000:1155  f9                   STC
1000:1156  eb19                 JMP 0x1000:1171
1000:1158  5b                   POP BX
1000:1159  894cfe               MOV word ptr [SI + -0x2],CX
1000:115c  7409                 JZ 0x1000:1167
1000:115e  03f9                 ADD DI,CX
1000:1160  2bc1                 SUB AX,CX
1000:1162  48                   DEC AX
1000:1163  8905                 MOV word ptr [DI],AX
1000:1165  2bf9                 SUB DI,CX
1000:1167  03f9                 ADD DI,CX
1000:1169  897f08               MOV word ptr [BX + 0x8],DI
1000:116c  8bc6                 MOV AX,SI
1000:116e  8cda                 MOV DX,DS
1000:1170  f8                   CLC
1000:1171  c3                   RET
; undefined 32 bytes at 1000:1172
1119:0002  undefined2 0000h
; undefined 62 bytes at 1119:0004
1119:0042  undefined2 0000h
1119:0044  undefined2 027Bh
1119:0046  undefined2 0000h
1119:0048  undefined2 0000h
; undefined 2 bytes at 1119:004a
1119:004c  undefined2 0000h
1119:004e  undefined2 0000h
1119:0050  undefined2 0000h
1119:0052  undefined2 0000h
; undefined 14 bytes at 1119:0054
1119:0062  ds "_C_FILE_INFO="
; undefined 20 bytes at 1119:0070
1119:0084  undefined2 0000h
1119:0086  undefined2 0000h
1119:0088  undefined2 0000h
; undefined 26 bytes at 1119:008a
1119:00a4  undefined2 0000h
1119:00a6  undefined2 0000h
1119:00a8  undefined2 0000h
; undefined 96 bytes at 1119:00aa
1119:010a  ds "COMSPEC"
; undefined 30 bytes at 1119:0112
1119:0130  ds "COMSPEC"
; undefined 3 bytes at 1119:0138
1119:013b  ds "command.com"
; undefined 2 bytes at 1119:0148
1119:014a  ds "_MSSETUP.BAT"
1119:0158  undefined2 0000h
1119:015a  undefined2 0000h
; undefined 2 bytes at 1119:015c
1119:015e  undefined2 0167h
; undefined 32 bytes at 1119:0160
1119:0180  ds "R6000\r\n- stack overflow\r\n"
; undefined 2 bytes at 1119:019a
1119:019c  ds "R6003\r\n- integer divide by 0\r\n"
; undefined 2 bytes at 1119:01bb
1119:01bd  ds "R6009\r\n- not enough space for environment\r\n"
; undefined 7 bytes at 1119:01e9
1119:01f0  ds "run-time error "
; undefined 2 bytes at 1119:0200
1119:0202  ds "R6002\r\n- floating-point support not loaded\r\n"
; undefined 2 bytes at 1119:022f
1119:0231  ds "R6001\r\n- null pointer assignment\r\n"
; undefined 4 bytes at 1119:0254
1119:0258  undefined1 ??
1119:0259  undefined1 ??
; undefined 5133 bytes at 1119:025a
HEADER::00000000  OLD_IMAGE_DOS_HEADER 
; undefined 2 bytes at HEADER::0000001c
HEADER::0000001e  OLD_IMAGE_DOS_RELOC 
HEADER::00000022  OLD_IMAGE_DOS_RELOC 
HEADER::00000026  OLD_IMAGE_DOS_RELOC 
HEADER::0000002a  OLD_IMAGE_DOS_RELOC 
HEADER::0000002e  OLD_IMAGE_DOS_RELOC 
; undefined 462 bytes at HEADER::00000032
