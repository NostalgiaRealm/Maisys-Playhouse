
/* ==== FUN_0042f7b0 @ 0042f7b0 ==== 
 * signature: undefined4 __cdecl FUN_0042f7b0(undefined4 param_1, undefined4 * param_2, undefined1 param_3, uint param_4)
 * body: 0042f7b0-0042f7de
 */

undefined4 __cdecl
FUN_0042f7b0(undefined4 param_1,undefined4 *param_2,undefined1 param_3,uint param_4)

{
  uint uVar1;
  
  for (uVar1 = param_4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_2 = CONCAT22(CONCAT11(param_3,param_3),CONCAT11(param_3,param_3));
    param_2 = param_2 + 1;
  }
  for (uVar1 = param_4 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)param_2 = param_3;
    param_2 = (undefined4 *)((int)param_2 + 1);
  }
  return 0;
}


