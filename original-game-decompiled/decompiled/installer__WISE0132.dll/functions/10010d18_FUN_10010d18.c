
/* ==== FUN_10010d18 @ 10010d18 ==== 
 * signature: undefined __cdecl FUN_10010d18(HWND param_1, char param_2, ushort param_3)
 * body: 10010d18-10010ec7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10010d18(HWND param_1,char param_2,ushort param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int X;
  tagRECT local_1c;
  int local_c;
  int local_8;
  
  GetWindowRect(param_1,&local_1c);
  local_c = local_1c.right - local_1c.left;
  local_8 = local_1c.bottom - local_1c.top;
  if (((param_2 == '\0') || (DAT_10024038 == 0)) && (param_2 != '\x02')) {
    X = (DAT_10023f3c - local_c) / 2;
    iVar2 = (DAT_10023f44 - local_8) / 2;
  }
  else {
    X = (int)(((_DAT_10024180 & 0xf) % 3 + 1) * DAT_10023f3c) / 4 - local_c / 2;
    iVar2 = (int)(((_DAT_10024180 & 0xf) / 3 + 1) * DAT_10023f44) / 4 - local_8 / 2;
    if (DAT_10023f3c < X + local_c) {
      X = DAT_10023f3c - local_c;
    }
    if (DAT_10023f44 < iVar2 + local_8) {
      iVar2 = DAT_10023f44 - local_8;
    }
    if (X < 0) {
      X = 0;
    }
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  uVar3 = param_3 & 0xf;
  if (uVar3 == 1) {
LAB_10010e4a:
    X = 0;
  }
  else if ((param_3 & 0xf) != 0) {
    if (uVar3 < 5) {
      X = (int)(((param_3 - 2 & 0xf) % 3 + 1) * DAT_10023f3c) / 4 - local_c / 2;
      if (DAT_10023f3c < X + local_c) {
        X = DAT_10023f3c - local_c;
      }
      if (X < 0) goto LAB_10010e4a;
    }
    else if (uVar3 == 5) {
      X = DAT_10023f3c - local_c;
    }
  }
  uVar1 = param_3 >> 4;
  uVar3 = (uint)uVar1;
  if (uVar3 != 1) {
    if (uVar1 < 2) goto LAB_10010eb0;
    if (4 < uVar1) {
      if (uVar3 == 5) {
        iVar2 = GetSystemMetrics(4);
        iVar2 = iVar2 + (DAT_10023f44 - local_8);
      }
      goto LAB_10010eb0;
    }
    iVar2 = (((int)((uVar3 & 0xf) - 2) % 3 + 1) * DAT_10023f44) / 4 - local_8 / 2;
    if (DAT_10023f44 < iVar2 + local_8) {
      iVar2 = DAT_10023f44 - local_8;
    }
    if (-1 < iVar2) goto LAB_10010eb0;
  }
  iVar2 = 0;
LAB_10010eb0:
  MoveWindow(param_1,X,iVar2,local_c,local_8,0);
  return;
}


