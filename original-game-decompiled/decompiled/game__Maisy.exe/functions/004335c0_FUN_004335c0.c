
/* ==== FUN_004335c0 @ 004335c0 ==== 
 * signature: undefined4 __cdecl FUN_004335c0(int param_1, short param_2, undefined4 * param_3)
 * body: 004335c0-0043360e
 */

undefined4 __cdecl FUN_004335c0(int param_1,short param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  *param_3 = 0;
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) && (-1 < param_2)) {
    iVar2 = FUN_00430190(iVar1);
    *param_3 = *(undefined4 *)(iVar2 + param_2 * 4);
    FUN_004301f0(iVar1);
    return 0;
  }
  return 0x10000;
}


