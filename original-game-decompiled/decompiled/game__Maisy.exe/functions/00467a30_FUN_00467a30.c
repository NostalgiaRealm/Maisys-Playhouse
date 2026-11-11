
/* ==== FUN_00467a30 @ 00467a30 ==== 
 * signature: undefined4 __cdecl FUN_00467a30(undefined4 param_1, int * param_2)
 * body: 00467a30-00467a97
 */

undefined4 __cdecl FUN_00467a30(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  void *this;
  int *piVar3;
  
  if ((param_2 != (int *)0x0) && ((*(byte *)((int)param_2 + 0x1e) & 0x10) != 0)) {
    piVar3 = param_2;
    iVar2 = (**(code **)(**(int **)((int)param_2 + 0x3a) + 0x10))();
    this = (void *)FUN_00466a80(iVar2);
    FUN_004506f0(this,piVar3);
    iVar2 = *param_2;
    (**(code **)(iVar2 + 0x1c))(1);
    pcVar1 = *(code **)(iVar2 + 0x218);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      piVar3 = (int *)(*pcVar1)();
      (**(code **)(*piVar3 + 0x2ac))();
    }
    (**(code **)(**(int **)((int)param_2 + 0x3a) + 0x2c8))();
    return 0;
  }
  return 0x10000;
}


