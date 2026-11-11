
/* ==== FUN_11002c80 @ 11002c80 ==== 
 * signature: undefined __cdecl FUN_11002c80(undefined4 * param_1)
 * body: 11002c80-11002cbb
 */

void __cdecl FUN_11002c80(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 local_1;
  
  puVar1 = (undefined4 *)FUN_11019a40(param_1,0x14);
  if (puVar1 != (undefined4 *)0x0) {
    local_1 = 0;
    *puVar1 = 0x329;
    uVar2 = FUN_110024d0(param_1,&local_1);
    puVar1[4] = uVar2;
  }
  return;
}


