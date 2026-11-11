
/* ==== FUN_0043c9c0 @ 0043c9c0 ==== 
 * signature: undefined __cdecl FUN_0043c9c0(int param_1, int param_2, int param_3)
 * body: 0043c9c0-0043c9de
 */

void __cdecl FUN_0043c9c0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)(param_3 + param_1 * 4);
  uVar3 = *puVar1;
  puVar2 = (undefined4 *)(param_3 + param_2 * 4);
  *puVar1 = *puVar2;
  *puVar2 = uVar3;
  return;
}


