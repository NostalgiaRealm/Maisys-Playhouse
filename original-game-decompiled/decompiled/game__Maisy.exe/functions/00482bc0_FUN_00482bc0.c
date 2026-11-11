
/* ==== FUN_00482bc0 @ 00482bc0 ==== 
 * signature: undefined4 __cdecl FUN_00482bc0(undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * body: 00482bc0-00482bfb
 */

undefined4 __cdecl
FUN_00482bc0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 local_8;
  
  piVar1 = (int *)FUN_00482af0(param_2,&local_8);
  if (piVar1 == (int *)0x0) {
    return local_8;
  }
  uVar2 = (**(code **)(*piVar1 + 0x9c))(param_3,param_4,param_5);
  return uVar2;
}


