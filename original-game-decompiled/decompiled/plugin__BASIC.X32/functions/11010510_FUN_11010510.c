
/* ==== FUN_11010510 @ 11010510 ==== 
 * signature: undefined __cdecl FUN_11010510(undefined4 * param_1)
 * body: 11010510-110105a4
 */

void __cdecl FUN_11010510(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_11019a40(param_1,0x56);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x276;
    puVar1[3] = 0x12d;
    puVar1[4] = 0;
    puVar1[5] = 1;
    puVar1[6] = 0;
    *(undefined2 *)((int)puVar1 + 0x1e) = 9000;
    *(undefined2 *)(puVar1 + 8) = 0x385;
    *(undefined2 *)((int)puVar1 + 0x22) = 1;
    *(undefined2 *)(puVar1 + 9) = 0x20;
    *(undefined2 *)(puVar1 + 7) = 1;
    *(undefined1 *)((int)puVar1 + 0x26) = 0;
    *(undefined1 *)((int)puVar1 + 0x27) = 0;
    *(undefined1 *)(puVar1 + 10) = 2;
    *(undefined1 *)((int)puVar1 + 0x29) = 0;
    *(undefined4 *)((int)puVar1 + 0x2e) = 0x3c;
    *(undefined4 *)((int)puVar1 + 0x32) = 0;
    *(uint *)((int)puVar1 + 0x2a) = (uint)*(byte *)(puVar1 + 10) * *(int *)((int)puVar1 + 0x2e);
    *(undefined2 *)((int)puVar1 + 0x3a) = 0;
    *(short *)(puVar1 + 0xf) =
         (short)((int)*(short *)(puVar1 + 9) / (int)(uint)*(byte *)(puVar1 + 10));
    puVar1[0x12] = 0;
    *(byte *)(puVar1 + 0x15) = *(byte *)(puVar1 + 0x15) & 0xfe;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
  }
  return;
}


