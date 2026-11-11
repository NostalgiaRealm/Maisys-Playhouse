
/* ==== FUN_1000bd4b @ 1000bd4b ==== 
 * signature: undefined __cdecl FUN_1000bd4b(int param_1, int param_2)
 * body: 1000bd4b-1000bddf
 */

void __cdecl FUN_1000bd4b(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  RECT local_14;
  
  iVar1 = param_1 * 0x38 + DAT_10023ed4;
  if ((*(byte *)(iVar1 + 0x24) & 0x40) != 0) {
    InvalidateRect(DAT_100238d8,(RECT *)0x0,0);
    return;
  }
  local_14.left = *(int *)(iVar1 + 0x1c);
  local_14.top = *(int *)(iVar1 + 0x20);
  local_14.right = *(int *)(iVar1 + 0x10) + local_14.left;
  local_14.bottom = *(int *)(iVar1 + 0x14) + local_14.top;
  if (param_2 != 0) {
    uVar2 = (*(ushort *)(iVar1 + 0x24) & 0x380) >> 7;
    if (uVar2 == 2) {
      local_14.top = 0;
    }
    else if (uVar2 == 3) {
      local_14.bottom = DAT_10023f44;
    }
    else if (uVar2 == 4) {
      local_14.left = 0;
    }
    else if (uVar2 == 5) {
      local_14.right = DAT_10023f3c;
    }
  }
  InvalidateRect(DAT_100238d8,&local_14,0);
  return;
}


