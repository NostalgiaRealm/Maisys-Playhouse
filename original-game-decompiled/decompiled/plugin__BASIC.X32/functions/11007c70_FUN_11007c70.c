
/* ==== FUN_11007c70 @ 11007c70 ==== 
 * signature: undefined __cdecl FUN_11007c70(undefined4 * param_1)
 * body: 11007c70-11007cc0
 */

void __cdecl FUN_11007c70(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_11019a40(param_1,0x38);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x32a;
    *(undefined2 *)(puVar1 + 8) = 0;
    *(undefined1 *)((int)puVar1 + 0x1a) = 0;
    *(undefined1 *)((int)puVar1 + 0x19) = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
    *(undefined1 *)((int)puVar1 + 0x1e) = 0xff;
    *(undefined1 *)((int)puVar1 + 0x1d) = 0xff;
    *(undefined1 *)(puVar1 + 7) = 0xff;
    puVar1[0xd] = 0;
    puVar1[9] = 0x7d1;
    puVar1[10] = 0;
    puVar1[0xb] = 1;
    puVar1[0xc] = 0;
    puVar1[3] = 0;
  }
  return;
}


