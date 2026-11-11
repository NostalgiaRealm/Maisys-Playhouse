
/* ==== FUN_00482c80 @ 00482c80 ==== 
 * signature: undefined4 __cdecl FUN_00482c80(undefined4 param_1, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * body: 00482c80-00482ce1
 */

undefined4 __cdecl
FUN_00482c80(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  char cVar1;
  int *piVar2;
  undefined4 local_8;
  
  piVar2 = (int *)FUN_00482af0(param_2,&local_8);
  if (piVar2 == (int *)0x0) {
    return local_8;
  }
  if ((*(byte *)((int)piVar2 + 0x1e) & 1) != 0) {
    cVar1 = (**(code **)(*piVar2 + 0xf4))(param_3,param_4,param_5,param_6);
    if (cVar1 != '\0') {
      return 0;
    }
    local_8 = 0x10000;
  }
  return local_8;
}


