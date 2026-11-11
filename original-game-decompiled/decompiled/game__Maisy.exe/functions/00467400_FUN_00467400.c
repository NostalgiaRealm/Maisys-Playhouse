
/* ==== FUN_00467400 @ 00467400 ==== 
 * signature: undefined4 __cdecl FUN_00467400(undefined4 param_1, int param_2, int param_3, undefined4 param_4)
 * body: 00467400-00467446
 */

undefined4 __cdecl FUN_00467400(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_004da378;
  if (param_2 != 0) {
    puVar1 = (undefined4 *)FUN_0048b560(0,param_2);
    iVar2 = (**(code **)(*(int *)*puVar1 + 0x10))();
  }
  if (iVar2 == 0) {
    return 0x10000;
  }
  FUN_00470a40(DAT_004dc564,param_3,param_4,iVar2);
  return 0;
}


