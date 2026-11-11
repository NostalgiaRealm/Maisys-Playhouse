
/* ==== FUN_1100f1f0 @ 1100f1f0 ==== 
 * signature: undefined __cdecl FUN_1100f1f0(int param_1)
 * body: 1100f1f0-1100f20d
 */

void __cdecl FUN_1100f1f0(int param_1)

{
  short sVar1;
  int iVar2;
  
  sVar1 = 1;
  do {
    iVar2 = (int)sVar1;
    sVar1 = sVar1 + 1;
    *(undefined1 *)(param_1 + 3 + iVar2 * 4) = 1;
  } while (sVar1 < 0xff);
  return;
}


