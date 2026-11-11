
/* ==== FUN_11006cd0 @ 11006cd0 ==== 
 * signature: undefined __cdecl FUN_11006cd0(undefined4 * param_1)
 * body: 11006cd0-11006d9e
 */

void __cdecl FUN_11006cd0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_11019a40(param_1,0xe4);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2 + 3;
    *puVar2 = 0x2e4;
    *puVar1 = 0;
    FUN_11006270(puVar1,'\0');
    FUN_11006290(puVar1,'\x01');
    FUN_11006290(puVar1,'\x02');
    puVar2[4] = 0x12e;
    puVar2[5] = 0;
    puVar2[6] = 1;
    puVar2[7] = 0;
    puVar2[8] = 1;
    puVar2[9] = 0;
    *(undefined2 *)(puVar2 + 10) = 5;
    *(undefined4 *)((int)puVar2 + 0x2a) = 0xc9;
    *(undefined2 *)(puVar2 + 0xe) = 0;
    *(undefined4 *)((int)puVar2 + 0x3a) = 0;
    puVar2[0x1f] = 0;
    *(undefined1 *)((int)puVar2 + 0x66) = 0;
    *(undefined1 *)((int)puVar2 + 0x67) = 0;
    *(undefined1 *)(puVar2 + 0x1a) = 0;
    *(undefined1 *)((int)puVar2 + 0x69) = 0;
    *(undefined4 *)((int)puVar2 + 0x6e) = 0x3c;
    *(undefined4 *)((int)puVar2 + 0x72) = 0;
    *(uint *)((int)puVar2 + 0x6a) = (uint)*(byte *)(puVar2 + 0x1a) * *(int *)((int)puVar2 + 0x6e);
    *(undefined2 *)((int)puVar2 + 0x7a) = 0;
    *(undefined2 *)(puVar2 + 0x20) = 0x69;
    *(undefined4 *)((int)puVar2 + 0x86) = 0;
    *(undefined4 *)((int)puVar2 + 0x8a) = 0;
    *(undefined4 *)((int)puVar2 + 0x82) = 0;
    *(undefined4 *)((int)puVar2 + 0x8e) = 0;
    puVar2[0xf] = 0;
  }
  return;
}


