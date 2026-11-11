
/* ==== FUN_0043c970 @ 0043c970 ==== 
 * signature: undefined4 __cdecl FUN_0043c970(int param_1, int param_2, int param_3)
 * body: 0043c970-0043c9b4
 */

undefined4 __cdecl FUN_0043c970(int param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  
  sVar1 = (**(code **)(**(int **)(param_3 + param_1 * 4) + 0x27c))();
  sVar2 = (**(code **)(**(int **)(param_3 + param_2 * 4) + 0x27c))();
  if (sVar2 < sVar1) {
    return 1;
  }
  uVar3 = 0xffffffff;
  if (sVar2 <= sVar1) {
    uVar3 = 0;
  }
  return uVar3;
}


