
/* ==== FUN_11013e10 @ 11013e10 ==== 
 * signature: undefined __cdecl FUN_11013e10(undefined4 * param_1, undefined4 param_2, uint param_3)
 * body: 11013e10-11013e48
 */

void __cdecl FUN_11013e10(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)FUN_11002840(param_1,param_2);
  for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  FUN_110028a0(param_1,param_2);
  return;
}


