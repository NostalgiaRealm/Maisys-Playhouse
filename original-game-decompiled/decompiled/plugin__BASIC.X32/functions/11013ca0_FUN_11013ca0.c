
/* ==== FUN_11013ca0 @ 11013ca0 ==== 
 * signature: undefined4 * __cdecl FUN_11013ca0(undefined4 * param_1)
 * body: 11013ca0-11013d0c
 */

undefined4 * __cdecl FUN_11013ca0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = FUN_110291a0(1,0x30);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0xfffffffb;
    puVar1[1] = 0;
    puVar1[2] = 0;
    uVar2 = FUN_110026d0(param_1,4);
    puVar1[3] = uVar2;
    puVar1[4] = 0;
    puVar1[5] = 0;
    uVar2 = FUN_110026d0(param_1,4);
    puVar1[6] = uVar2;
    puVar1[7] = 0;
    puVar1[8] = 0;
    uVar2 = FUN_110026d0(param_1,4);
    puVar1[9] = uVar2;
    puVar1[10] = 0;
    puVar1[0xb] = 1;
  }
  return puVar1;
}


