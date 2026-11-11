
/* ==== FUN_00442d80 @ 00442d80 ==== 
 * signature: undefined4 __cdecl FUN_00442d80(int param_1)
 * body: 00442d80-00442e4b
 */

undefined4 __cdecl FUN_00442d80(int param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = param_1 * 0x1a;
  *(undefined4 *)(&DAT_004db7b6 + iVar1) = 0;
  *(undefined4 *)(&DAT_004db7ba + iVar1) = 0;
  *(undefined4 *)(&DAT_004db7ae + iVar1) = 0;
  *(undefined4 *)((int)&DAT_004db7b2 + iVar1) = 0;
  pvVar2 = GlobalAlloc(0x2002,DAT_004db7aa);
  *(HGLOBAL *)(&DAT_004db7b6 + iVar1) = pvVar2;
  if (pvVar2 != (HGLOBAL)0x0) {
    pvVar3 = GlobalLock(pvVar2);
    *(LPVOID *)(&DAT_004db7ba + iVar1) = pvVar3;
    if (pvVar3 != (LPVOID)0x0) {
      iVar5 = 0;
      if (0 < (int)DAT_004db7aa) {
        do {
          *(undefined1 *)((int)pvVar3 + iVar5) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)DAT_004db7aa);
      }
      pvVar2 = GlobalAlloc(0x2002,0x20);
      *(HGLOBAL *)(&DAT_004db7ae + iVar1) = pvVar2;
      if (pvVar2 != (HGLOBAL)0x0) {
        pvVar3 = GlobalLock(pvVar2);
        *(LPVOID *)((int)&DAT_004db7b2 + iVar1) = pvVar3;
        if (pvVar3 != (LPVOID)0x0) {
          *(undefined4 *)(&DAT_004db7be + iVar1) = 0;
          (&DAT_004db7c6)[iVar1] = 0;
          *(undefined4 *)(&DAT_004db7c2 + iVar1) = 0;
          return 0;
        }
      }
    }
  }
  uVar4 = FUN_00442e50(param_1);
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


