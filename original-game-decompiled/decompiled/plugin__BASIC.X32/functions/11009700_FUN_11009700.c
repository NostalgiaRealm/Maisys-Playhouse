
/* ==== FUN_11009700 @ 11009700 ==== 
 * signature: undefined __cdecl FUN_11009700(undefined4 * param_1, undefined4 * param_2, undefined4 param_3, uint param_4)
 * body: 11009700-1100971e
 */

void __cdecl FUN_11009700(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  
  for (uVar1 = param_4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_2 = *param_1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar1 = param_4 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_2 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return;
}


