
/* ==== FUN_100105d2 @ 100105d2 ==== 
 * signature: undefined __cdecl FUN_100105d2(LPCSTR param_1, LPCSTR param_2)
 * body: 100105d2-1001077c
 */

void __cdecl FUN_100105d2(LPCSTR param_1,LPCSTR param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  CHAR local_30;
  CHAR local_2f [31];
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_30 = '%';
  lstrcpyA(local_2f,param_1);
  lstrcatA(&local_30,&DAT_1001f764);
  iVar1 = lstrlenA(param_2);
  param_1 = (LPCSTR)((iVar1 + 0x100) / 0x100);
  if ((short)param_1 == 0) {
    param_1 = (LPCSTR)0x1;
  }
  uVar3 = 0;
  local_c = 0;
  if (DAT_1002402c != 0) {
    do {
      uVar3 = local_c;
      iVar1 = lstrcmpiA((LPCSTR)((local_c & 0xffff) * 0x11 + DAT_10023efc),&local_30);
      if (iVar1 == 0) break;
      uVar3 = uVar3 + 1;
      local_c = uVar3;
    } while ((ushort)uVar3 < DAT_1002402c);
  }
  uVar2 = uVar3;
  if ((ushort)uVar3 < DAT_1002402c) {
    do {
      uVar2 = uVar2 + 1;
      if (DAT_1002402c <= (ushort)uVar2) break;
    } while (*(char *)((uVar2 & 0xffff) * 0x11 + DAT_10023efc) == '\0');
    local_10 = uVar2 & 0xffff;
    uVar4 = ((uint)param_1 & 0xffff) + (uVar3 & 0xffff);
    local_8 = uVar2;
    if (local_10 != uVar4) {
      if ((ushort)uVar2 < DAT_1002402c) {
        FUN_10016690((undefined4 *)(uVar4 * 0x100 + DAT_100238f8),
                     (undefined4 *)(local_10 * 0x100 + DAT_100238f8),
                     (local_10 * 0xffffff + (uint)DAT_1002402c) * 0x100);
        FUN_10016690((undefined4 *)(uVar4 * 0x11 + DAT_10023efc),
                     (undefined4 *)(local_10 * 0x11 + DAT_10023efc),
                     (uint)DAT_1002402c * 0x11 + local_10 * -0x11);
      }
      DAT_1002402c = DAT_1002402c + ((ushort)param_1 - (short)local_8) + (short)local_c;
    }
  }
  else {
    uVar4 = ((uint)param_1 & 0xffff) + (uVar3 & 0xffff);
    if (0xf9 < uVar4) {
      return;
    }
    lstrcpyA((LPSTR)((uVar3 & 0xffff) * 0x11 + DAT_10023efc),&local_30);
    DAT_1002402c = DAT_1002402c + (ushort)param_1;
  }
  if (1 < (ushort)param_1) {
    iVar5 = uVar4 * 0x11;
    iVar1 = ((uint)param_1 & 0xffff) - 1;
    do {
      iVar5 = iVar5 + -0x11;
      *(undefined1 *)(DAT_10023efc + iVar5) = 0;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  lstrcpyA((LPSTR)((uVar3 & 0xffff) * 0x100 + DAT_100238f8),param_2);
  return;
}


