
/* ==== FUN_00443310 @ 00443310 ==== 
 * signature: undefined __cdecl FUN_00443310(int param_1, short param_2, short param_3, short param_4)
 * body: 00443310-004433ce
 */

void __cdecl FUN_00443310(int param_1,short param_2,short param_3,short param_4)

{
  int iVar1;
  
  if (param_1 != 0) {
    *(short *)(param_1 + 0x26) = param_2;
    if ((DAT_004db5a0 != '\0') && (-1 < *(short *)(param_1 + 0x28))) {
      iVar1 = *(short *)(param_1 + 0x28) * 0x3e;
      if ((*(short *)(&DAT_004db5da + iVar1) != param_3) ||
         ((*(short *)(&DAT_004db5dc + iVar1) != param_4 ||
          (*(short *)(&DAT_004db5d8 + iVar1) != param_2)))) {
        if (0xfe < param_3) {
          param_3 = 0xff;
        }
        *(short *)(&DAT_004db5da + iVar1) = param_3;
        if (0xfe < param_4) {
          param_4 = 0xff;
        }
        *(short *)(&DAT_004db5dc + *(short *)(param_1 + 0x28) * 0x3e) = param_4;
        if (0xfe < param_2) {
          param_2 = 0xff;
        }
        *(short *)(&DAT_004db5d8 + *(short *)(param_1 + 0x28) * 0x3e) = param_2;
      }
    }
  }
  DAT_004db87c = 1;
  return;
}


