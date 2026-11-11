
/* ==== FUN_0048c9d0 @ 0048c9d0 ==== 
 * signature: undefined4 __cdecl FUN_0048c9d0(int param_1, int * param_2)
 * body: 0048c9d0-0048ca25
 */

undefined4 __cdecl FUN_0048c9d0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 != (int *)0x0) {
    iVar2 = 0;
    *param_2 = -1;
    piVar1 = (int *)FUN_0048c050(param_1);
    while (piVar1 != (int *)0x0) {
      if (*(short *)((int)piVar1 + 0x22) == 0x43) {
        *param_2 = iVar2;
        return 0;
      }
      iVar2 = iVar2 + 1;
      piVar1 = (int *)(**(code **)(*piVar1 + 0x16c))();
      if (0xff < iVar2) {
        return 0x10000;
      }
    }
  }
  return 0x10000;
}


