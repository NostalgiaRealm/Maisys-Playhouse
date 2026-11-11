
/* ==== FUN_1101d6a0 @ 1101d6a0 ==== 
 * signature: undefined __cdecl FUN_1101d6a0(undefined4 * param_1)
 * body: 1101d6a0-1101d6ef
 */

void __cdecl FUN_1101d6a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_11019a40(param_1,0x60);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x26c;
    puVar1[3] = 0x65;
    puVar1[4] = 0;
    puVar1[5] = 1;
    puVar1[6] = 0;
    *(undefined2 *)(puVar1 + 7) = 0x406;
    *(undefined2 *)((int)puVar1 + 0x1e) = 0x385;
    *(undefined2 *)(puVar1 + 8) = 1;
    *(undefined2 *)((int)puVar1 + 0x22) = 0x20;
    puVar1[9] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
  }
  return;
}


