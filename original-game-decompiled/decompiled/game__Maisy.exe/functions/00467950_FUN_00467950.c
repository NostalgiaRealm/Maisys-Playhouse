
/* ==== FUN_00467950 @ 00467950 ==== 
 * signature: undefined4 __cdecl FUN_00467950(int param_1, int param_2, int param_3)
 * body: 00467950-004679a9
 */

undefined4 __cdecl FUN_00467950(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0x10001;
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) {
    uVar4 = 0x9000d;
    piVar2 = (int *)FUN_0048b550(param_2);
    if (piVar2 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar2 + 0x10))();
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x82) != 0)) {
        bVar1 = FUN_00408450(*(int *)(iVar3 + 0x82));
        uVar4 = 0;
        *(bool *)param_3 = !bVar1;
      }
    }
  }
  return uVar4;
}


