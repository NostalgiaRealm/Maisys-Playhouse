
/* ==== FUN_1101e0f0 @ 1101e0f0 ==== 
 * signature: undefined __cdecl FUN_1101e0f0(undefined4 * param_1)
 * body: 1101e0f0-1101e15b
 */

void __cdecl FUN_1101e0f0(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_11019a40(param_1,0x7a);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x226;
    *(undefined4 *)((int)puVar2 + 0xe) = 0x12e;
    *(undefined4 *)((int)puVar2 + 0x12) = 0;
    *(undefined4 *)((int)puVar2 + 0x16) = 1;
    *(undefined4 *)((int)puVar2 + 0x1a) = 0;
    *(undefined2 *)((int)puVar2 + 0x1e) = 0;
    puVar2[8] = 0;
    bVar1 = *(byte *)(puVar2 + 3);
    *(byte *)(puVar2 + 3) = bVar1 & 0xfe;
    *(byte *)(puVar2 + 3) = bVar1 & 0xfc;
    *(undefined2 *)(puVar2 + 0x14) = 0;
    *(undefined2 *)((int)puVar2 + 0x52) = 0;
    *(undefined4 *)((int)puVar2 + 0x56) = 0;
    *(undefined4 *)((int)puVar2 + 0x5a) = 0;
    *(undefined4 *)((int)puVar2 + 0x5e) = 0;
    *(undefined4 *)((int)puVar2 + 0x62) = 0;
    *(undefined2 *)((int)puVar2 + 0x6e) = 1;
    *(undefined2 *)(puVar2 + 0x1e) = 0;
    *(undefined2 *)((int)puVar2 + 0x76) = 0;
    *(undefined1 *)(puVar2 + 0x1d) = 0;
  }
  return;
}


