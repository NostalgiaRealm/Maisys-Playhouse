
/* ==== FUN_00401970 @ 00401970 ==== 
 * signature: undefined4 * __thiscall FUN_00401970(void * this, undefined4 param_1, undefined4 * param_2)
 * body: 00401970-00401b28
 */

undefined4 * __thiscall FUN_00401970(void *this,undefined4 param_1,undefined4 *param_2)

{
  short *psVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 *unaff_FS_OFFSET;
  int local_1c;
  void *local_18;
  int local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00401b29;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  *(undefined ***)this = &PTR_FUN_004be060;
  *(undefined ***)this = &PTR_FUN_004be058;
  *(undefined4 *)((int)this + 0x28) = *param_2;
  psVar1 = (short *)((int)this + 0x4e);
  *(undefined4 *)((int)this + 0x2c) = param_2[1];
  *(undefined4 *)((int)this + 0x34) = param_2[3];
  uVar2 = param_2[4];
  *psVar1 = 0;
  *(undefined4 *)((int)this + 0x38) = uVar2;
  local_18 = this;
  pcVar3 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x19,&local_14);
  DAT_004e34cc = (*pcVar3)(local_14,psVar1,(int)param_2 + 0x26);
  if (*psVar1 == 0x69) {
    pcVar3 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 8),1,8,&local_14);
    DAT_004e34cc = (*pcVar3)(local_14,psVar1);
  }
  psVar1 = (short *)((int)this + 0x3c);
  *psVar1 = 0;
  pcVar3 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 0x10),1,0x2f,&local_14);
  DAT_004e34cc = (*pcVar3)(local_14,psVar1,param_2 + 5);
  if (*psVar1 == 0x69) {
    pcVar3 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 8),1,8,&local_14);
    DAT_004e34cc = (*pcVar3)(local_14,psVar1);
  }
  *(undefined2 *)((int)this + 4) = 0x69;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xe) = 0;
  *(undefined4 *)((int)this + 6) = param_2[2];
  *(undefined4 *)((int)this + 0x12) = 0;
  pcVar3 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 8),1,8,&local_1c);
  DAT_004e34cc = (*pcVar3)(local_1c,(int)this + 4);
  *(undefined2 *)((int)this + 0x16) = 0x69;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x24) = 0;
  pcVar3 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 8),1,8,&local_14);
  DAT_004e34cc = (*pcVar3)(local_14,(undefined2 *)((int)this + 0x16));
  *unaff_FS_OFFSET = local_10;
  return this;
}


