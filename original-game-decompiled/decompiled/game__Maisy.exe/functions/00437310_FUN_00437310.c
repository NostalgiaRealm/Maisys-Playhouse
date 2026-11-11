
/* ==== FUN_00437310 @ 00437310 ==== 
 * signature: undefined __fastcall FUN_00437310(int param_1)
 * body: 00437310-0043742a
 */

void __fastcall FUN_00437310(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = *(int *)(param_1 + 0x13c);
  FUN_004374c0((undefined4 *)(iVar2 + 0x94),(undefined4 *)&DAT_004da40c);
  *(undefined2 *)(iVar2 + 0xc6) = 0;
  FUN_004374c0((undefined4 *)(iVar2 + 0x94),(undefined4 *)s__MCoreService_004dd168);
  *(undefined2 *)(iVar2 + 0x92) = 0;
  bVar1 = *(byte *)(iVar2 + 0xf8);
  *(byte *)(iVar2 + 0xf8) = bVar1 | 1;
  *(byte *)(iVar2 + 0xf8) = bVar1 | 9;
  *(undefined2 *)(iVar2 + 0xcc) = 0;
  *(undefined2 *)(iVar2 + 0xce) = 1;
  *(undefined2 *)(iVar2 + 0xca) = 0xffff;
  *(undefined2 *)(iVar2 + 200) = 0;
  *(undefined2 *)(iVar2 + 0xd0) = 0;
  *(undefined4 *)(iVar2 + 0xd2) = 0x14;
  *(undefined4 *)(iVar2 + 0xd6) = 0x14;
  *(undefined4 *)(iVar2 + 0xda) = 0;
  *(undefined4 *)(iVar2 + 0xde) = 0;
  *(undefined4 *)(iVar2 + 0xf0) = 0x4d6f6d4f;
  iVar3 = FUN_00434920(DAT_004d99ac,4,0);
  *(int *)(iVar2 + 0xe2) = iVar3;
  if (iVar3 == 0) {
    FUN_004a3538();
  }
  uVar4 = FUN_00434920(DAT_004d99ac,0x400,0);
  **(undefined4 **)(iVar2 + 0xe2) = uVar4;
  if (**(int **)(iVar2 + 0xe2) == 0) {
    FUN_004a3538();
  }
  iVar3 = FUN_00434920(DAT_004d99ac,4,0);
  *(int *)(iVar2 + 0xe6) = iVar3;
  if (iVar3 == 0) {
    FUN_004a3538();
  }
  **(undefined4 **)(iVar2 + 0xe6) = 8;
  *(undefined2 *)(iVar2 + 0xea) = 1;
  *(undefined4 *)(iVar2 + 0xf4) = 0;
  bVar1 = *(byte *)(iVar2 + 0xf8);
  *(byte *)(iVar2 + 0xf8) = bVar1 & 0xfd;
  *(byte *)(iVar2 + 0xf8) = bVar1 & 0xf9;
  *(undefined2 *)(iVar2 + 0xfa) = 0x32;
  FUN_00487140((undefined4 *)**(undefined4 **)(iVar2 + 0xe2),0x32);
  FUN_00434d40();
  return;
}


