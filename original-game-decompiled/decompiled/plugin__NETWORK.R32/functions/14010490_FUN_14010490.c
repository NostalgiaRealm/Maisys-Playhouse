
/* ==== FUN_14010490 @ 14010490 ==== 
 * signature: undefined __cdecl FUN_14010490(int param_1, int param_2)
 * body: 14010490-140104b6
 */

void __cdecl FUN_14010490(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  sVar1 = 0;
  do {
    iVar2 = (int)sVar1;
    sVar1 = sVar1 + 1;
    *(undefined1 *)(param_1 + iVar2) = *(undefined1 *)((param_2 - iVar2) + 7);
  } while (sVar1 < 8);
  return;
}


