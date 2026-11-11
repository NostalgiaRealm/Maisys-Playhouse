
/* ==== FUN_14009900 @ 14009900 ==== 
 * signature: undefined4 __cdecl FUN_14009900(undefined1 * param_1, undefined4 param_2, int param_3)
 * body: 14009900-14009942
 */

undefined4 __cdecl FUN_14009900(undefined1 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *unaff_retaddr;
  
  iVar1 = (*DAT_14026430)(*(undefined4 *)(param_1 + 2),param_2,param_3,0);
  *unaff_retaddr = iVar1;
  if (iVar1 != -1) {
    if (param_3 <= iVar1) {
      *param_1 = 1;
    }
    return 0;
  }
  *unaff_retaddr = 0;
  uVar2 = (*DAT_14026410)();
  return uVar2;
}


