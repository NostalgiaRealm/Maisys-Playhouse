
/* ==== FUN_12032844 @ 12032844 ==== 
 * signature: undefined FUN_12032844(void)
 * body: 12032844-120329ca
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_12032844(uint param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,int param_10,int param_11,int param_12)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 == 1) {
    if ((param_1 & 3) == 0) {
      iVar3 = (&DAT_120397cc)[param_5];
    }
    else {
      iVar3 = *(int *)(&DAT_12039804 + param_5 * 4);
    }
    iVar2 = (int)(((int)(param_1 - 1) >> 2) + param_1 * 0x16d + -0x63db + iVar3 + 1) % 7;
    iVar1 = param_6;
    if (iVar2 < param_7) {
      iVar1 = param_6 + -1;
    }
    iVar3 = iVar3 + 1 + (iVar1 * 7 - iVar2) + param_7;
    if (param_6 == 5) {
      if ((param_1 & 3) == 0) {
        iVar1 = *(int *)(&DAT_120397d0 + param_5 * 4);
      }
      else {
        iVar1 = *(int *)(&DAT_12039808 + param_5 * 4);
      }
      if (iVar1 < iVar3) {
        iVar3 = iVar3 + -7;
      }
    }
  }
  else {
    if ((param_1 & 3) == 0) {
      iVar3 = (&DAT_120397cc)[param_5];
    }
    else {
      iVar3 = *(int *)(&DAT_12039804 + param_5 * 4);
    }
    iVar3 = iVar3 + param_8;
  }
  if (param_2 != 1) {
    DAT_120397c4 = iVar3;
    DAT_120397c8 = param_12 + ((param_9 * 0x3c + param_10) * 0x3c + _DAT_12039718 + param_11) * 1000
    ;
    if (DAT_120397c8 < 0) {
      DAT_120397c8 = DAT_120397c8 + 86399999;
    }
    else if (86399999 < DAT_120397c8) {
      DAT_120397c8 = DAT_120397c8 + -86399999;
    }
    DAT_120397c0 = param_1;
    return;
  }
  DAT_120397b4 = iVar3;
  DAT_120397b0 = param_1;
  DAT_120397b8 = param_12 + ((param_9 * 0x3c + param_10) * 0x3c + param_11) * 1000;
  return;
}


