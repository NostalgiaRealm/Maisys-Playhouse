
/* ==== FUN_004371e0 @ 004371e0 ==== 
 * signature: undefined __fastcall FUN_004371e0(int param_1)
 * body: 004371e0-0043730c
 */

void __fastcall FUN_004371e0(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined4 *)FUN_00434920(DAT_004d99ac,0xe00,1);
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined4 **)(param_1 + 0x13c) = puVar2;
  *(undefined4 *)(param_1 + 0x138) = 0x1c;
  FUN_004374c0(puVar2,(undefined4 *)&DAT_004da40c);
  *(undefined2 *)((int)puVar2 + 0x46) = 1;
  FUN_004374c0(puVar2 + 5,(undefined4 *)s__MComponent_004dafb8);
  *(undefined2 *)((int)puVar2 + 0x12) = 0;
  bVar1 = *(byte *)(puVar2 + 0x1e);
  *(byte *)(puVar2 + 0x1e) = bVar1 | 8;
  *(byte *)(puVar2 + 0x1e) = bVar1 | 9;
  *(undefined2 *)(puVar2 + 0x13) = 0;
  *(undefined2 *)((int)puVar2 + 0x4e) = 0;
  *(undefined2 *)((int)puVar2 + 0x4a) = 0xffff;
  *(undefined2 *)(puVar2 + 0x12) = 0;
  *(undefined2 *)(puVar2 + 0x14) = 0;
  *(undefined4 *)((int)puVar2 + 0x52) = 0x14;
  *(undefined4 *)((int)puVar2 + 0x56) = 0x14;
  *(undefined4 *)((int)puVar2 + 0x5a) = 0;
  *(undefined4 *)((int)puVar2 + 0x5e) = 0;
  puVar2[0x1c] = 0x4d6f6d4f;
  iVar3 = FUN_00434920(DAT_004d99ac,4,0);
  *(int *)((int)puVar2 + 0x62) = iVar3;
  if (iVar3 == 0) {
    FUN_004a3538();
  }
  uVar4 = FUN_00434920(DAT_004d99ac,0x400,0);
  **(undefined4 **)((int)puVar2 + 0x62) = uVar4;
  if (**(int **)((int)puVar2 + 0x62) == 0) {
    FUN_004a3538();
  }
  iVar3 = FUN_00434920(DAT_004d99ac,4,0);
  *(int *)((int)puVar2 + 0x66) = iVar3;
  if (iVar3 == 0) {
    FUN_004a3538();
  }
  **(undefined4 **)((int)puVar2 + 0x66) = 8;
  *(undefined2 *)((int)puVar2 + 0x6a) = 0;
  puVar2[0x1d] = 0;
  bVar1 = *(byte *)(puVar2 + 0x1e);
  *(byte *)(puVar2 + 0x1e) = bVar1 & 0xfd;
  *(byte *)(puVar2 + 0x1e) = bVar1 & 0xf9;
  *(undefined2 *)((int)puVar2 + 0x7a) = 0x32;
  FUN_00433d30((undefined4 *)**(undefined4 **)((int)puVar2 + 0x62),0x32);
  FUN_00434d50();
  return;
}


