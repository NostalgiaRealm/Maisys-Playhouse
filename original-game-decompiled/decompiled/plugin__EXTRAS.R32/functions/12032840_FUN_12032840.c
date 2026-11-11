
/* ==== FUN_12032840 @ 12032840 ==== 
 * signature: undefined __stdcall FUN_12032840(int param_1, int param_2, uint param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10, int param_11)
 * body: 12032840-12032840
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_12032840(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar3 = (&DAT_120397cc)[param_4];
    }
    else {
      iVar3 = *(int *)(&DAT_12039804 + param_4 * 4);
    }
    iVar2 = (int)(((int)(param_3 - 1) >> 2) + param_3 * 0x16d + -0x63db + iVar3 + 1) % 7;
    iVar1 = param_5;
    if (iVar2 < param_6) {
      iVar1 = param_5 + -1;
    }
    iVar3 = iVar3 + 1 + (iVar1 * 7 - iVar2) + param_6;
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        iVar1 = *(int *)(&DAT_120397d0 + param_4 * 4);
      }
      else {
        iVar1 = *(int *)(&DAT_12039808 + param_4 * 4);
      }
      if (iVar1 < iVar3) {
        iVar3 = iVar3 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar3 = (&DAT_120397cc)[param_4];
    }
    else {
      iVar3 = *(int *)(&DAT_12039804 + param_4 * 4);
    }
    iVar3 = iVar3 + param_7;
  }
  if (param_1 != 1) {
    DAT_120397c4 = iVar3;
    DAT_120397c8 = param_11 + ((param_8 * 0x3c + param_9) * 0x3c + _DAT_12039718 + param_10) * 1000;
    if (DAT_120397c8 < 0) {
      DAT_120397c8 = DAT_120397c8 + 86399999;
    }
    else if (86399999 < DAT_120397c8) {
      DAT_120397c8 = DAT_120397c8 + -86399999;
    }
    DAT_120397c0 = param_3;
    return;
  }
  DAT_120397b4 = iVar3;
  DAT_120397b0 = param_3;
  DAT_120397b8 = param_11 + ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000;
  return;
}


