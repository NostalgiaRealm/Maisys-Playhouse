
/* ==== FUN_11023f70 @ 11023f70 ==== 
 * signature: undefined __cdecl FUN_11023f70(undefined4 * param_1)
 * body: 11023f70-11024038
 */

void __cdecl FUN_11023f70(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_11019a40(param_1,0x6a);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x334;
    *(undefined2 *)(puVar2 + 8) = 0;
    *(undefined2 *)((int)puVar2 + 0x22) = 1;
    *(undefined1 *)((int)puVar2 + 0x26) = 0xff;
    *(undefined1 *)(puVar2 + 9) = 0xff;
    *(undefined1 *)((int)puVar2 + 0x25) = 0xff;
    *(undefined1 *)((int)puVar2 + 0x2a) = 0;
    *(undefined1 *)(puVar2 + 10) = 0;
    *(undefined1 *)((int)puVar2 + 0x29) = 0;
    *(undefined1 *)((int)puVar2 + 0x36) = 0;
    *(undefined1 *)(puVar2 + 0xd) = 0;
    *(undefined1 *)((int)puVar2 + 0x35) = 0;
    *(undefined1 *)(puVar2 + 0x10) = 0;
    *(undefined1 *)((int)puVar2 + 0x3e) = 0;
    *(undefined1 *)((int)puVar2 + 0x3f) = 0;
    *(undefined1 *)(puVar2 + 0xc) = 0;
    *(undefined1 *)((int)puVar2 + 0x2e) = 0;
    *(undefined1 *)((int)puVar2 + 0x2f) = 0;
    *(undefined1 *)((int)puVar2 + 0x3a) = 0xfe;
    *(undefined1 *)(puVar2 + 0xe) = 0xfe;
    *(undefined1 *)((int)puVar2 + 0x39) = 0xfe;
    *(undefined2 *)((int)puVar2 + 0x32) = 0;
    *(undefined2 *)((int)puVar2 + 0x42) = 0;
    *(undefined2 *)(puVar2 + 0x11) = 0;
    *(undefined2 *)((int)puVar2 + 0x46) = 0;
    *(undefined2 *)(puVar2 + 0x12) = 0;
    *(undefined2 *)(puVar2 + 0xb) = 0;
    *(undefined2 *)((int)puVar2 + 0x32) = 0;
    *(undefined2 *)(puVar2 + 0xf) = 0;
    puVar2[4] = 0x7d1;
    puVar2[5] = 0;
    puVar2[6] = 1;
    puVar2[7] = 0;
    puVar2[3] = 0;
    *(undefined2 *)((int)puVar2 + 0x4a) = 0;
    *(undefined2 *)(puVar2 + 0x13) = 0;
    puVar2[0x16] = 0;
    *(undefined2 *)((int)puVar2 + 0x56) = 0;
    *(undefined2 *)(puVar2 + 0x19) = 0;
    *(undefined2 *)((int)puVar2 + 0x66) = 0xffff;
    bVar1 = *(byte *)(puVar2 + 0x1a);
    *(byte *)(puVar2 + 0x1a) = bVar1 & 0xfe;
    *(byte *)(puVar2 + 0x1a) = bVar1 & 0xfa;
  }
  return;
}


