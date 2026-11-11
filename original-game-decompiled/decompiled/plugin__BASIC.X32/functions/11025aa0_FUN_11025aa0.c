
/* ==== FUN_11025aa0 @ 11025aa0 ==== 
 * signature: undefined __cdecl FUN_11025aa0(undefined4 * param_1)
 * body: 11025aa0-11025b36
 */

void __cdecl FUN_11025aa0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)FUN_11019a40(param_1,0x78);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2 + 3;
    *puVar2 = 700;
    *puVar1 = 0;
    FUN_11006290(puVar1,'\0');
    FUN_11006290(puVar1,'\x01');
    FUN_11006290(puVar1,'\x02');
    puVar2[4] = 0x12e;
    puVar2[5] = 0;
    puVar2[6] = 1;
    puVar2[7] = 0;
    *(undefined2 *)(puVar2 + 8) = 5;
    *(undefined4 *)((int)puVar2 + 0x22) = 0xc9;
    *(undefined2 *)(puVar2 + 0xc) = 0;
    *(undefined4 *)((int)puVar2 + 0x32) = 0;
    puVar2[0xd] = 0;
    *(undefined4 *)((int)puVar2 + 0x5e) = 0;
    puVar3 = FUN_11013ca0(param_1);
    *(undefined4 **)((int)puVar2 + 0x62) = puVar3;
    *(undefined2 *)((int)puVar2 + 0x66) = 0x69;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1d] = 0;
  }
  return;
}


