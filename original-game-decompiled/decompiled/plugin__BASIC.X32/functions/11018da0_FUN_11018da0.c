
/* ==== FUN_11018da0 @ 11018da0 ==== 
 * signature: undefined __cdecl FUN_11018da0(undefined4 * param_1)
 * body: 11018da0-11018e33
 */

void __cdecl FUN_11018da0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_11019a40(param_1,0xae);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2 + 3;
    *puVar2 = 0x21b;
    puVar2[4] = 0x12e;
    puVar2[5] = 0;
    puVar2[6] = 1;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *puVar1 = 0;
    FUN_11006270(puVar1,'\x04');
    FUN_11006270(puVar1,'\t');
    *(undefined2 *)(puVar2 + 10) = 0;
    *(undefined2 *)((int)puVar2 + 0x2a) = 0;
    puVar2[0xb] = 0;
    *(undefined2 *)(puVar2 + 0x12) = 0;
    *(undefined2 *)((int)puVar2 + 0x46) = 0;
    *(undefined2 *)((int)puVar2 + 0x5a) = 0;
    *(undefined2 *)(puVar2 + 0x16) = 0;
    *(byte *)((int)puVar2 + 0x56) = *(byte *)((int)puVar2 + 0x56) & 0xfe;
    *(undefined2 *)(puVar2 + 0xd) = 0x69;
    *(undefined4 *)((int)puVar2 + 0x3a) = 0;
    *(undefined4 *)((int)puVar2 + 0x3e) = 0;
    *(undefined4 *)((int)puVar2 + 0x36) = 0;
    *(undefined4 *)((int)puVar2 + 0x42) = 0;
    puVar2[0x19] = 0;
    *(undefined2 *)(puVar2 + 0x20) = 0;
  }
  return;
}


