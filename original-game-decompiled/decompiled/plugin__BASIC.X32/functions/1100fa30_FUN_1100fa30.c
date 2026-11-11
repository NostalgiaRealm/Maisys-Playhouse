
/* ==== FUN_1100fa30 @ 1100fa30 ==== 
 * signature: undefined __cdecl FUN_1100fa30(undefined4 * param_1)
 * body: 1100fa30-1100fa64
 */

void __cdecl FUN_1100fa30(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_11019a40(param_1,0x1e);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x3ca;
    puVar1[3] = 0x12f;
    puVar1[4] = 0;
    puVar1[5] = 1;
    puVar1[6] = 0;
    *(undefined2 *)(puVar1 + 7) = 1;
  }
  return;
}


