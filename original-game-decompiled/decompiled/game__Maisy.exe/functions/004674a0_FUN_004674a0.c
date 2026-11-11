
/* ==== FUN_004674a0 @ 004674a0 ==== 
 * signature: undefined4 __cdecl FUN_004674a0(undefined4 param_1, int param_2, int param_3, int * param_4)
 * body: 004674a0-004674c7
 */

undefined4 __cdecl FUN_004674a0(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0043c420();
  iVar2 = 0;
  if (param_3 - param_2 != 0) {
    iVar2 = iVar1 % ((param_3 - param_2) + 1);
  }
  *param_4 = param_2 + iVar2;
  return 0;
}


