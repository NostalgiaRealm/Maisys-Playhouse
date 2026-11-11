
/* ==== FUN_110283c0 @ 110283c0 ==== 
 * signature: undefined __cdecl FUN_110283c0(undefined4 * param_1)
 * body: 110283c0-110283fc
 */

void __cdecl FUN_110283c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_11019a40(param_1,0x74);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x2df;
    puVar1[3] = 0;
    puVar1[4] = 0x12e;
    puVar1[5] = 0;
    *(undefined2 *)(puVar1 + 6) = 0;
    *(undefined2 *)((int)puVar1 + 0x46) = 0;
    *(undefined4 *)((int)puVar1 + 0x1a) = 0;
    puVar1[0x12] = 0;
    puVar1[7] = 0;
    *(undefined4 *)((int)puVar1 + 0x4a) = 0;
  }
  return;
}


