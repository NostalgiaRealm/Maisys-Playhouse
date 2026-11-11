
/* ==== FUN_11015a30 @ 11015a30 ==== 
 * signature: undefined __cdecl FUN_11015a30(undefined4 * param_1)
 * body: 11015a30-11015a74
 */

void __cdecl FUN_11015a30(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_11019a40(param_1,0x2e);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 900;
    puVar1[3] = 0;
    *(undefined2 *)(puVar1 + 4) = 1;
    *(undefined4 *)((int)puVar1 + 0x12) = 0x12d;
    *(undefined4 *)((int)puVar1 + 0x1a) = 0x12e;
    *(undefined4 *)((int)puVar1 + 0x16) = 0;
    *(undefined4 *)((int)puVar1 + 0x1e) = 0;
    *(undefined2 *)((int)puVar1 + 0x22) = 5;
    *(undefined2 *)(puVar1 + 9) = 0x14;
  }
  return;
}


