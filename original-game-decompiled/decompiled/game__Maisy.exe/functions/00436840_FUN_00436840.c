
/* ==== FUN_00436840 @ 00436840 ==== 
 * signature: undefined __thiscall FUN_00436840(void * this, undefined4 * param_1, short param_2, undefined2 param_3, undefined * param_4, undefined4 param_5, undefined2 param_6, char param_7)
 * body: 00436840-004369ab
 */

void __thiscall
FUN_00436840(void *this,undefined4 *param_1,short param_2,undefined2 param_3,undefined *param_4,
            undefined4 param_5,undefined2 param_6,char param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  short sVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)(param_2 * 0x80 + *(int *)((int)this + 0x13c));
  FUN_004374c0(puVar7,(undefined4 *)s__MCoreService_004dd168);
  *(undefined2 *)((int)puVar7 + 0x46) = param_6;
  FUN_004374c0(puVar7 + 5,param_1);
  *(undefined2 *)((int)puVar7 + 0x12) = 0;
  bVar4 = (param_7 << 4 ^ *(byte *)(puVar7 + 0x1e)) & 0x10 ^ *(byte *)(puVar7 + 0x1e);
  *(byte *)(puVar7 + 0x1e) = bVar4;
  *(byte *)(puVar7 + 0x1e) = bVar4 | 1;
  *(byte *)(puVar7 + 0x1e) = bVar4 | 9;
  *(undefined2 *)(puVar7 + 0x13) = 0;
  *(short *)((int)puVar7 + 0x4e) = param_2;
  *(undefined2 *)((int)puVar7 + 0x4a) = 1;
  *(undefined2 *)(puVar7 + 0x12) = 0;
  *(undefined2 *)(puVar7 + 0x14) = 1;
  *(undefined4 *)((int)puVar7 + 0x52) = param_5;
  *(undefined4 *)((int)puVar7 + 0x56) = 0;
  *(undefined4 *)((int)puVar7 + 0x5a) = 0;
  *(undefined4 *)((int)puVar7 + 0x5e) = 0;
  puVar7[0x1c] = 0x4d6f6d4f;
  iVar1 = FUN_00434920(DAT_004d99ac,8,0);
  *(int *)((int)puVar7 + 0x62) = iVar1;
  if (iVar1 == 0) {
    FUN_004a3538();
  }
  uVar2 = FUN_00434920(DAT_004d99ac,0x400,0);
  **(undefined4 **)((int)puVar7 + 0x62) = uVar2;
  if (**(int **)((int)puVar7 + 0x62) == 0) {
    FUN_004a3538();
  }
  sVar5 = 0;
  do {
    iVar1 = (int)sVar5;
    sVar5 = sVar5 + 1;
    puVar3 = (undefined4 *)(**(int **)(*(int *)((int)this + 0x13c) + 0xe2) + iVar1 * 8);
    puVar6 = (undefined4 *)(**(int **)((int)puVar7 + 0x62) + iVar1 * 8);
    uVar2 = puVar3[1];
    *puVar6 = *puVar3;
    puVar6[1] = uVar2;
  } while (sVar5 < 3);
  uVar2 = FUN_00434920(DAT_004d99ac,0x400,0);
  *(undefined4 *)(*(int *)((int)puVar7 + 0x62) + 4) = uVar2;
  if (*(int *)(*(int *)((int)puVar7 + 0x62) + 4) == 0) {
    FUN_004a3538();
  }
  *(undefined4 *)((int)puVar7 + 0x66) = 0;
  *(short *)((int)puVar7 + 0x6a) = param_2;
  puVar7[0x1d] = 0;
  bVar4 = *(byte *)(puVar7 + 0x1e);
  *(byte *)(puVar7 + 0x1e) = bVar4 & 0xfd;
  *(byte *)(puVar7 + 0x1e) = bVar4 & 0xf9;
  *(undefined2 *)((int)puVar7 + 0x7a) = param_3;
  (*(code *)param_4)(*(undefined4 *)((int)puVar7 + 0x62));
  return;
}


