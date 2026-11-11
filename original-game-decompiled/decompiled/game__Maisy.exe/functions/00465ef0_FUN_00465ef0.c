
/* ==== FUN_00465ef0 @ 00465ef0 ==== 
 * signature: undefined __cdecl FUN_00465ef0(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * body: 00465ef0-00465f10
 */

void __cdecl FUN_00465ef0(undefined4 *param_1,undefined4 *param_2,uint param_3)

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


