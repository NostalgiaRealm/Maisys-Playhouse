
/* ==== FUN_11001a40 @ 11001a40 ==== 
 * signature: undefined __cdecl FUN_11001a40(undefined4 * param_1)
 * body: 11001a40-11001b44
 */

void __cdecl FUN_11001a40(undefined4 *param_1)

{
  ushort *puVar1;
  byte bVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)FUN_11019a40(param_1,0xd0);
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = (ushort *)(puVar3 + 3);
    *puVar3 = 0x2f8;
    *puVar1 = 0;
    FUN_110062d0(puVar1,'\x03');
    FUN_110062d0(puVar1,'\x04');
    FUN_110062d0(puVar1,'\x05');
    FUN_110062d0(puVar1,'\x06');
    FUN_110062d0(puVar1,'\a');
    FUN_110062d0(puVar1,'\b');
    FUN_110062d0(puVar1,'\t');
    FUN_110062f0(puVar1,'\0');
    FUN_110062f0(puVar1,'\x01');
    FUN_110062f0(puVar1,'\x02');
    *(undefined1 *)((int)puVar3 + 0xe) = 0;
    puVar3[4] = 0x7d1;
    puVar3[5] = 0;
    puVar3[6] = 1;
    puVar3[7] = 0;
    puVar3[8] = 1;
    puVar3[9] = 0;
    *(undefined2 *)(puVar3 + 10) = 5;
    *(undefined4 *)((int)puVar3 + 0x2a) = 0xc9;
    *(undefined2 *)(puVar3 + 0xe) = 0;
    *(undefined4 *)((int)puVar3 + 0x3a) = 0;
    bVar2 = *(byte *)((int)puVar3 + 0x66);
    *(byte *)((int)puVar3 + 0x66) = bVar2 & 0xfe;
    *(byte *)((int)puVar3 + 0x66) = bVar2 & 0xfc;
    *(byte *)((int)puVar3 + 0x66) = bVar2 & 0xf8;
    *(byte *)((int)puVar3 + 0x66) = bVar2 & 0xf0;
    puVar3[0xf] = 0;
    *(undefined2 *)(puVar3 + 0x1b) = 0x69;
    *(undefined4 *)((int)puVar3 + 0x72) = 0;
    *(undefined4 *)((int)puVar3 + 0x76) = 0;
    *(undefined4 *)((int)puVar3 + 0x6e) = 0;
    *(undefined4 *)((int)puVar3 + 0x7a) = 0;
    *(undefined4 *)((int)puVar3 + 0x8a) = 0;
  }
  return;
}


