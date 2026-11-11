
/* ==== FUN_110220d0 @ 110220d0 ==== 
 * signature: undefined __cdecl FUN_110220d0(undefined4 * param_1)
 * body: 110220d0-110221bf
 */

void __cdecl FUN_110220d0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_11019a40(param_1,0xd4);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2 + 3;
    *puVar2 = 0x2ee;
    *puVar1 = 0;
    FUN_11006270(puVar1,'\x03');
    FUN_11006270(puVar1,'\t');
    FUN_11006270(puVar1,'\x04');
    FUN_11006270(puVar1,'\x05');
    FUN_11006270(puVar1,'\a');
    FUN_11006270(puVar1,'\v');
    FUN_11006290(puVar1,'\0');
    FUN_11006290(puVar1,'\x01');
    FUN_11006290(puVar1,'\x02');
    puVar2[4] = 0x7d1;
    puVar2[5] = 0;
    puVar2[6] = 1;
    puVar2[7] = 0;
    puVar2[8] = 1;
    puVar2[9] = 0;
    *(undefined2 *)(puVar2 + 10) = 5;
    *(undefined4 *)((int)puVar2 + 0x2a) = 0xc9;
    *(undefined2 *)(puVar2 + 0xe) = 0;
    *(undefined4 *)((int)puVar2 + 0x3a) = 0;
    *(undefined1 *)((int)puVar2 + 0x66) = 0;
    *(undefined2 *)(puVar2 + 0x1a) = 0x69;
    *(undefined4 *)((int)puVar2 + 0x6e) = 0;
    *(undefined4 *)((int)puVar2 + 0x72) = 0;
    *(undefined4 *)((int)puVar2 + 0x6a) = 0;
    *(undefined4 *)((int)puVar2 + 0x76) = 0;
    puVar2[0xf] = 0;
    *(undefined2 *)(puVar2 + 0x33) = 0;
    *(undefined2 *)((int)puVar2 + 0xce) = 0;
    puVar2[0x34] = 0;
  }
  return;
}


