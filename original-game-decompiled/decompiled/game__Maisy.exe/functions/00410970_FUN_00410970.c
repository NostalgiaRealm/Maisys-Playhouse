
/* ==== FUN_00410970 @ 00410970 ==== 
 * signature: undefined4 * __fastcall FUN_00410970(undefined4 * param_1)
 * body: 00410970-00410b60
 */

undefined4 * __fastcall FUN_00410970(undefined4 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *this;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00410b6e;
  *unaff_FS_OFFSET = &local_10;
  iVar4 = 0;
  FUN_00412c90(param_1,0);
  puVar3 = (undefined4 *)((int)param_1 + 0x32);
  local_8 = 0;
  *(undefined2 *)((int)param_1 + 0x26) = 0;
  *param_1 = &PTR_FUN_004be7e0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 9);
  *(undefined4 *)((int)param_1 + 0x56) = 0;
  *(undefined4 *)((int)param_1 + 0x5a) = 0;
  *(undefined4 *)((int)param_1 + 0x5e) = 0;
  *(undefined4 *)((int)param_1 + 0x62) = 0;
  *(undefined4 *)((int)param_1 + 0x66) = 0;
  *(undefined4 *)((int)param_1 + 0x6a) = 0;
  *(undefined4 *)((int)param_1 + 0x6e) = 0;
  *(undefined4 *)((int)param_1 + 0x72) = 0;
  *(undefined4 *)((int)param_1 + 0x76) = 0;
  *(undefined4 *)((int)param_1 + 0x7a) = 0;
  *(undefined4 *)((int)param_1 + 0x7e) = 0;
  *(undefined4 *)((int)param_1 + 0x82) = 0;
  *(undefined4 *)((int)param_1 + 0x86) = 0;
  *(undefined4 *)((int)param_1 + 0x8a) = 0;
  *(undefined4 *)((int)param_1 + 0x8e) = 0;
  *(undefined4 *)((int)param_1 + 0x92) = 0;
  *(undefined4 *)((int)param_1 + 0x96) = 0;
  *(undefined4 *)((int)param_1 + 0x9a) = 0;
  *(undefined4 *)((int)param_1 + 0x9e) = 0;
  *(undefined4 *)((int)param_1 + 0xa2) = 0;
  *(undefined4 *)((int)param_1 + 0xa6) = 0;
  *(undefined4 *)((int)param_1 + 0xaa) = 0;
  *(undefined4 *)((int)param_1 + 0xae) = 0;
  *(undefined4 *)((int)param_1 + 0xb2) = 0;
  *(undefined2 *)((int)param_1 + 0xc6) = 0;
  *(undefined4 *)((int)param_1 + 0xb6) = 0;
  bVar1 = *(byte *)(param_1 + 0x32);
  *(undefined4 *)((int)param_1 + 0xba) = 0;
  *(undefined4 *)((int)param_1 + 0xbe) = 0;
  *(undefined4 *)((int)param_1 + 0xc2) = 0;
  *(undefined2 *)((int)param_1 + 0x26) = 0x28;
  *(byte *)(param_1 + 0x32) = bVar1 & 0xfe;
  *(byte *)(param_1 + 0x32) = bVar1 & 0xfe;
  puVar3 = FUN_00412c20(0x4a);
  this = (undefined4 *)0x0;
  local_8._0_1_ = 1;
  if (puVar3 != (undefined4 *)0x0) {
    this = FUN_0042f8d0(puVar3);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(undefined4 **)((int)param_1 + 0xca) = this;
  FUN_0042fb50(this,4,0,'\0',0);
  iVar4 = FUN_004bafca();
  uVar2 = *(undefined4 *)(iVar4 + 8);
  iVar4 = FUN_004bafca();
  *(undefined4 *)(iVar4 + 0xc) = uVar2;
  *(undefined4 *)((int)param_1 + 0x8a) = 0;
  *(undefined4 *)((int)param_1 + 0x8e) = 0;
  *(undefined4 *)((int)param_1 + 0x92) = 0;
  *(undefined4 *)((int)param_1 + 0x96) = 0;
  *(undefined4 *)((int)param_1 + 0x9a) = 0;
  *(undefined4 *)((int)param_1 + 0xa2) = 0;
  *(undefined4 *)((int)param_1 + 0xa6) = 0;
  *(undefined4 *)((int)param_1 + 0xaa) = 0;
  *(undefined4 *)((int)param_1 + 0xae) = 0;
  *(undefined4 *)((int)param_1 + 0xb2) = 0;
  *(undefined4 *)((int)param_1 + 0xb6) = 0;
  *(undefined4 *)((int)param_1 + 0xbe) = 0;
  *(undefined4 *)((int)param_1 + 0xc2) = 0;
  *(undefined2 *)((int)param_1 + 0xc6) = 0xffff;
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


