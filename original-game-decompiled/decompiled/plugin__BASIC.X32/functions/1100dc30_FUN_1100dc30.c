
/* ==== FUN_1100dc30 @ 1100dc30 ==== 
 * signature: undefined __cdecl FUN_1100dc30(undefined4 * param_1)
 * body: 1100dc30-1100dc93
 */

void __cdecl FUN_1100dc30(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_11019a40(param_1,0x46);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x4ce;
    puVar1[3] = 0;
    puVar1[4] = 0x7d1;
    puVar1[5] = 0;
    puVar1[6] = 1;
    puVar1[7] = 0;
    *(undefined2 *)(puVar1 + 8) = 100;
    *(undefined1 *)((int)puVar1 + 0x22) = 0;
    *(undefined1 *)((int)puVar1 + 0x23) = 0;
    *(undefined1 *)(puVar1 + 9) = 3;
    *(undefined1 *)((int)puVar1 + 0x25) = 0;
    *(undefined4 *)((int)puVar1 + 0x2a) = 0x3c;
    *(undefined4 *)((int)puVar1 + 0x2e) = 0;
    *(uint *)((int)puVar1 + 0x26) = (uint)*(byte *)(puVar1 + 9) * *(int *)((int)puVar1 + 0x2a);
    *(undefined2 *)((int)puVar1 + 0x36) = 0;
    *(byte *)(puVar1 + 0x11) = *(byte *)(puVar1 + 0x11) & 0xfe;
  }
  return;
}


