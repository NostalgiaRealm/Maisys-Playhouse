
/* ==== FUN_11009720 @ 11009720 ==== 
 * signature: undefined __cdecl FUN_11009720(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * body: 11009720-1100973e
 */

void __cdecl FUN_11009720(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return;
}


