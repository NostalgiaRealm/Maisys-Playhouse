
/* ==== FUN_004394b0 @ 004394b0 ==== 
 * signature: undefined __fastcall FUN_004394b0(int param_1)
 * body: 004394b0-004394d6
 */

void __fastcall FUN_004394b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(param_1 + 4);
  iVar2 = 6;
  do {
    if ((HGDIOBJ)*puVar1 != (HGDIOBJ)0x0) {
      DeleteObject((HGDIOBJ)*puVar1);
    }
    puVar1 = puVar1 + 0x104;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


