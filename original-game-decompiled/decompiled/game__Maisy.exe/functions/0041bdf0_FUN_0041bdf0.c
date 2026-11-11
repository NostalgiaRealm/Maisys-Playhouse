
/* ==== FUN_0041bdf0 @ 0041bdf0 ==== 
 * signature: int * __cdecl FUN_0041bdf0(int param_1, undefined4 param_2, short param_3)
 * body: 0041bdf0-0041be43
 */

int * __cdecl FUN_0041bdf0(int param_1,undefined4 param_2,short param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = FUN_0041b450(param_1,0);
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    (**(code **)(iVar1 + 0x278))(param_3);
    if (param_3 == 0) {
      piVar3 = (int *)(**(code **)(iVar1 + 0x31c))();
      (**(code **)(*piVar3 + 0x13c))(1);
      (**(code **)(iVar1 + 0x13c))(1);
    }
  }
  return piVar2;
}


