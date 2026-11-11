
/* ==== FUN_00433960 @ 00433960 ==== 
 * signature: undefined4 __cdecl FUN_00433960(int param_1, int * param_2)
 * body: 00433960-004339c1
 */

undefined4 __cdecl FUN_00433960(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 local_8;
  
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) {
    piVar1 = (int *)FUN_00482af0(param_1,&local_8);
    *param_2 = 0;
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x10))();
      if (iVar2 != 0) {
        *param_2 = iVar2;
        return 0;
      }
      local_8 = 0x9000d;
    }
    return local_8;
  }
  return 0x10001;
}


