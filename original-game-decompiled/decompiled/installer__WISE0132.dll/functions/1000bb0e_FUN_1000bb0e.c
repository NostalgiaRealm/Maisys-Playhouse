
/* ==== FUN_1000bb0e @ 1000bb0e ==== 
 * signature: undefined __stdcall FUN_1000bb0e(void)
 * body: 1000bb0e-1000bb69
 */

void FUN_1000bb0e(void)

{
  int iVar1;
  ushort uVar2;
  
  DAT_100239ac = 0;
  uVar2 = 0;
  if (DAT_1002402c != 0) {
    do {
      iVar1 = lstrcmpiA((LPCSTR)((uint)uVar2 * 0x11 + DAT_10023efc),s__BACKUPDIR__1001fa1c);
      if (iVar1 == 0) break;
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_1002402c);
    if ((uVar2 < DAT_1002402c) && (*(char *)((uint)uVar2 * 0x100 + DAT_100238f8) != '\0')) {
      DAT_100239ac = (undefined1)uVar2;
    }
  }
  return;
}


