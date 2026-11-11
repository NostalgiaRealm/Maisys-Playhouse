
/* ==== FUN_14021960 @ 14021960 ==== 
 * signature: undefined __stdcall FUN_14021960(int param_1, int param_2, uint param_3, int param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10, int param_11)
 * body: 14021960-14021960
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14021960(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar3 = *(int *)(&DAT_14028794 + param_4 * 4);
    }
    else {
      iVar3 = *(int *)(&DAT_140287cc + param_4 * 4);
    }
    iVar2 = (int)(((int)(param_3 - 1) >> 2) + param_3 * 0x16d + -0x63db + iVar3 + 1) % 7;
    iVar1 = param_5;
    if (iVar2 < param_6) {
      iVar1 = param_5 + -1;
    }
    iVar3 = iVar3 + 1 + (iVar1 * 7 - iVar2) + param_6;
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        iVar1 = *(int *)(&DAT_14028798 + param_4 * 4);
      }
      else {
        iVar1 = *(int *)(&DAT_140287d0 + param_4 * 4);
      }
      if (iVar1 < iVar3) {
        iVar3 = iVar3 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar3 = *(int *)(&DAT_14028794 + param_4 * 4);
    }
    else {
      iVar3 = *(int *)(&DAT_140287cc + param_4 * 4);
    }
    iVar3 = iVar3 + param_7;
  }
  if (param_1 != 1) {
    DAT_140284cc = iVar3;
    DAT_140284d0 = param_11 + ((param_8 * 0x3c + param_9) * 0x3c + _DAT_14028420 + param_10) * 1000;
    if (DAT_140284d0 < 0) {
      DAT_140284d0 = DAT_140284d0 + 86399999;
    }
    else if (86399999 < DAT_140284d0) {
      DAT_140284d0 = DAT_140284d0 + -86399999;
    }
    DAT_140284c8 = param_3;
    return;
  }
  DAT_140284bc = iVar3;
  DAT_140284b8 = param_3;
  DAT_140284c0 = param_11 + ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000;
  return;
}


