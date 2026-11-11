
/* ==== FUN_00471a40 @ 00471a40 ==== 
 * signature: undefined4 __cdecl FUN_00471a40(int param_1, int * param_2)
 * body: 00471a40-00471a7d
 */

undefined4 __cdecl FUN_00471a40(int param_1,int *param_2)

{
  short sVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_0048b560(0,param_1);
  if ((*(byte *)((int *)*piVar2 + 0x12) & 2) != 0) {
    sVar1 = (**(code **)(*(int *)*piVar2 + 0x27c))();
    *param_2 = (int)sVar1;
    return 0;
  }
  *param_2 = -1;
  return 0x10000;
}


