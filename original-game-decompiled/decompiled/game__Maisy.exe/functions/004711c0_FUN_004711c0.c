
/* ==== FUN_004711c0 @ 004711c0 ==== 
 * signature: undefined4 __cdecl FUN_004711c0(undefined4 param_1, int param_2, undefined4 * param_3)
 * body: 004711c0-004711f9
 */

undefined4 __cdecl FUN_004711c0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  iVar1 = FUN_00471110(param_2,&local_8);
  if (iVar1 == 0x10000) {
    return 0x10000;
  }
  uVar2 = FUN_004053e0(local_8);
  *param_3 = uVar2;
  return 0;
}


