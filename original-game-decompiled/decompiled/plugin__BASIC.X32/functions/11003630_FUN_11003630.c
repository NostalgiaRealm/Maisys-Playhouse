
/* ==== FUN_11003630 @ 11003630 ==== 
 * signature: undefined __cdecl FUN_11003630(undefined4 * param_1)
 * body: 11003630-1100367e
 */

void __cdecl FUN_11003630(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_11019a40(param_1,0x5c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x1fe;
    puVar1[3] = 0x12e;
    puVar1[4] = 0;
    puVar1[5] = 1;
    puVar1[6] = 0;
    *(undefined2 *)(puVar1 + 7) = 2;
    *(undefined2 *)((int)puVar1 + 0x1e) = 4;
    *(undefined1 *)(puVar1 + 0xd) = 0;
    *(undefined1 *)((int)puVar1 + 0x35) = 1;
    *(undefined1 *)((int)puVar1 + 0x36) = 0;
    *(undefined2 *)(puVar1 + 0x14) = 0x10;
    *(undefined4 *)((int)puVar1 + 0x52) = 0;
  }
  return;
}


