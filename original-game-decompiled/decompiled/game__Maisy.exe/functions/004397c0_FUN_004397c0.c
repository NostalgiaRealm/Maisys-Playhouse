
/* ==== FUN_004397c0 @ 004397c0 ==== 
 * signature: undefined __fastcall FUN_004397c0(int param_1)
 * body: 004397c0-004397f9
 */

void __fastcall FUN_004397c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 6;
  puVar2 = (undefined4 *)(param_1 + 4);
  do {
    if ((int)puVar2[0x102] < 1) {
      if ((HGDIOBJ)*puVar2 != (HGDIOBJ)0x0) {
        DeleteObject((HGDIOBJ)*puVar2);
        *puVar2 = 0;
      }
      puVar2[-1] = 0;
      puVar2[0x102] = 0;
    }
    puVar2 = puVar2 + 0x104;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


