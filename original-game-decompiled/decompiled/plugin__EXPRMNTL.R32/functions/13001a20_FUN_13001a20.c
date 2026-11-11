
/* ==== FUN_13001a20 @ 13001a20 ==== 
 * signature: undefined4 __cdecl FUN_13001a20(int param_1, int param_2)
 * body: 13001a20-13001a5c
 */

undefined4 __cdecl FUN_13001a20(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if ((*(int *)(param_1 + 2) == iVar1) && (*(int *)(param_1 + 6) == *(int *)(param_2 + 0x10))) {
    return 0;
  }
  if ((iVar1 != 0x7d2) &&
     ((*(int *)(param_1 + 0xc) != iVar1 || (*(int *)(param_2 + 0x10) != *(int *)(param_1 + 0x10)))))
  {
    return 0x10000;
  }
  return 0;
}


