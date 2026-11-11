
/* ==== FUN_140097d0 @ 140097d0 ==== 
 * signature: undefined4 __cdecl FUN_140097d0(int param_1)
 * body: 140097d0-140097f6
 */

undefined4 __cdecl FUN_140097d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*DAT_14026420)(*(undefined4 *)(param_1 + 2));
  if (iVar1 != -1) {
    *(undefined4 *)(param_1 + 2) = 0;
    return 0;
  }
  uVar2 = (*DAT_14026410)();
  return uVar2;
}


