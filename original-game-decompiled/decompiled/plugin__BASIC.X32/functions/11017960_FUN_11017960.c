
/* ==== FUN_11017960 @ 11017960 ==== 
 * signature: undefined __cdecl FUN_11017960(undefined4 * param_1)
 * body: 11017960-110179f6
 */

void __cdecl FUN_11017960(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_11019a40(param_1,0x74);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x302;
    *(undefined2 *)(puVar2 + 4) = 6;
    *(undefined2 *)((int)puVar2 + 0x12) = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
    *(undefined1 *)((int)puVar2 + 0x15) = 0;
    puVar1 = puVar2 + 3;
    puVar2[7] = 1;
    puVar2[8] = 0;
    *(undefined2 *)(puVar2 + 9) = 5;
    *(undefined4 *)((int)puVar2 + 0x26) = 0xc9;
    *(undefined2 *)(puVar2 + 0xd) = 0;
    *(undefined4 *)((int)puVar2 + 0x36) = 0;
    *puVar1 = 0;
    puVar2[0xe] = 0;
    FUN_11006270(puVar1,'\x03');
    FUN_11006290(puVar1,'\0');
    FUN_11006290(puVar1,'\x01');
    FUN_11006290(puVar1,'\x02');
    *(undefined2 *)((int)puVar2 + 0x62) = 0x69;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1c] = 0;
  }
  return;
}


