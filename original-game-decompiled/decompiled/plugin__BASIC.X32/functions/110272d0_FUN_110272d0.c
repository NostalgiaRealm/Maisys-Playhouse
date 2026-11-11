
/* ==== FUN_110272d0 @ 110272d0 ==== 
 * signature: undefined __cdecl FUN_110272d0(undefined4 * param_1)
 * body: 110272d0-11027343
 */

void __cdecl FUN_110272d0(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_11019a40(param_1,0x3a);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x208;
    puVar2[3] = 0x7d1;
    puVar2[4] = 0;
    puVar2[5] = 1;
    puVar2[6] = 0;
    *(byte *)((int)puVar2 + 0x26) = *(byte *)((int)puVar2 + 0x26) & 0xfe;
    bVar1 = *(byte *)(puVar2 + 7);
    *(byte *)(puVar2 + 7) = bVar1 & 0xfe;
    *(byte *)(puVar2 + 7) = bVar1 & 0xfc;
    *(byte *)(puVar2 + 7) = bVar1 & 0xf8;
    *(byte *)(puVar2 + 7) = bVar1 & 0xf0;
    *(undefined2 *)((int)puVar2 + 0x22) = 0;
    *(undefined2 *)(puVar2 + 9) = 0;
    *(undefined2 *)((int)puVar2 + 0x1e) = 0;
    *(undefined2 *)(puVar2 + 8) = 0;
    *(undefined4 *)((int)puVar2 + 0x2e) = 0;
    *(byte *)((int)puVar2 + 0x26) = *(byte *)((int)puVar2 + 0x26) & 0xfd;
    *(undefined2 *)((int)puVar2 + 0x2a) = 0;
    *(undefined2 *)(puVar2 + 10) = 0;
    *(undefined1 *)(puVar2 + 0xb) = 0;
    *(undefined4 *)((int)puVar2 + 0x2e) = 0;
  }
  return;
}


