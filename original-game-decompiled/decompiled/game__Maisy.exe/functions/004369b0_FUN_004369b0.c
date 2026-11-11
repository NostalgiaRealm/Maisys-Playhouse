
/* ==== FUN_004369b0 @ 004369b0 ==== 
 * signature: undefined __thiscall FUN_004369b0(void * this, undefined4 * param_1, short param_2, undefined2 param_3, undefined * param_4, undefined4 param_5, undefined2 param_6, char param_7)
 * body: 004369b0-00436b15
 */

void __thiscall
FUN_004369b0(void *this,undefined4 *param_1,short param_2,undefined2 param_3,undefined *param_4,
            undefined4 param_5,undefined2 param_6,char param_7)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  short sVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)(param_2 * 0x80 + *(int *)((int)this + 0x13c));
  FUN_004374c0(puVar7,(undefined4 *)s__MComponent_004dafb8);
  *(undefined2 *)((int)puVar7 + 0x12) = 1;
  FUN_004374c0(puVar7 + 5,param_1);
  *(undefined2 *)((int)puVar7 + 0x46) = param_6;
  bVar1 = (param_7 << 4 ^ *(byte *)(puVar7 + 0x1e)) & 0x10 ^ *(byte *)(puVar7 + 0x1e);
  *(byte *)(puVar7 + 0x1e) = bVar1;
  *(byte *)(puVar7 + 0x1e) = bVar1 | 1;
  *(byte *)(puVar7 + 0x1e) = bVar1 | 9;
  *(undefined2 *)(puVar7 + 0x13) = 0;
  *(short *)((int)puVar7 + 0x4e) = param_2;
  *(undefined2 *)((int)puVar7 + 0x4a) = 0;
  *(undefined2 *)(puVar7 + 0x12) = 0;
  *(undefined2 *)(puVar7 + 0x14) = 1;
  *(undefined4 *)((int)puVar7 + 0x52) = param_5;
  *(undefined4 *)((int)puVar7 + 0x56) = 0;
  *(undefined4 *)((int)puVar7 + 0x5a) = 0;
  *(undefined4 *)((int)puVar7 + 0x5e) = 0;
  puVar7[0x1c] = 0x4d6f6d4f;
  iVar2 = FUN_00434920(DAT_004d99ac,8,0);
  *(int *)((int)puVar7 + 0x62) = iVar2;
  if (iVar2 == 0) {
    FUN_004a3538();
  }
  uVar3 = FUN_00434920(DAT_004d99ac,0x400,0);
  **(undefined4 **)((int)puVar7 + 0x62) = uVar3;
  if (**(int **)((int)puVar7 + 0x62) == 0) {
    FUN_004a3538();
  }
  sVar5 = 0;
  do {
    iVar2 = (int)sVar5;
    sVar5 = sVar5 + 1;
    puVar4 = (undefined4 *)(**(int **)(*(int *)((int)this + 0x13c) + 0x62) + iVar2 * 8);
    puVar6 = (undefined4 *)(**(int **)((int)puVar7 + 0x62) + iVar2 * 8);
    uVar3 = puVar4[1];
    *puVar6 = *puVar4;
    puVar6[1] = uVar3;
  } while (sVar5 < 0x32);
  uVar3 = FUN_00434920(DAT_004d99ac,0x400,0);
  *(undefined4 *)(*(int *)((int)puVar7 + 0x62) + 4) = uVar3;
  if (**(int **)((int)puVar7 + 0x62) == 0) {
    FUN_004a3538();
  }
  *(undefined4 *)((int)puVar7 + 0x66) = 0;
  *(short *)((int)puVar7 + 0x6a) = param_2;
  puVar7[0x1d] = 0;
  bVar1 = *(byte *)(puVar7 + 0x1e);
  *(byte *)(puVar7 + 0x1e) = bVar1 & 0xfd;
  *(byte *)(puVar7 + 0x1e) = bVar1 & 0xf9;
  *(undefined2 *)((int)puVar7 + 0x7a) = param_3;
  (*(code *)param_4)(*(undefined4 *)((int)puVar7 + 0x62));
  return;
}


