
/* ==== FUN_00401ca0 @ 00401ca0 ==== 
 * signature: undefined4 * __thiscall FUN_00401ca0(void * this, int * param_1, undefined4 * param_2)
 * body: 00401ca0-00401e33
 */

undefined4 * __thiscall FUN_00401ca0(void *this,int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *unaff_FS_OFFSET;
  int local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  pcStack_c = FUN_00401e34;
  *unaff_FS_OFFSET = &local_10;
  *(undefined ***)this = &PTR_FUN_004be060;
  local_8 = 0;
  *(undefined2 *)((int)this + 4) = 0x69;
  *(undefined ***)this = &PTR_FUN_004be068;
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xe) = 0;
  *(int **)((int)this + 6) = param_1;
  *(undefined4 *)((int)this + 0x12) = 0;
  pcVar1 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 8),1,8,&local_14);
  DAT_004e34cc = (*pcVar1)(local_14,(undefined2 *)((int)this + 4));
  if (*(short *)(param_2 + 9) == 0xd) {
    pcVar2 = FUN_0043b970((char *)param_2[10]);
    param_2[10] = pcVar2;
  }
  if (*(short *)(param_2 + 9) == 0x1fd) {
    (**(code **)(*param_1 + 600))(0x24,param_2 + 9,0x2e);
  }
  if (*(short *)(param_2 + 9) == 3) {
    *(undefined2 *)((int)this + 0x16) = 0x69;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)param_2 + 0x26);
    *(undefined4 *)((int)this + 0x24) = 0;
    pcVar1 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 8),1,8,&local_14);
    DAT_004e34cc = (*pcVar1)(local_14,(undefined2 *)((int)this + 0x16));
  }
  else {
    *(undefined2 *)((int)this + 0x16) = 0x69;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  if ((*(short *)(param_2 + 5) == 7) || (*(short *)(param_2 + 5) == 8)) {
    *(undefined2 *)((int)this + 0x28) = 0x69;
    *(undefined4 *)((int)this + 0x2e) = 0;
    *(undefined4 *)((int)this + 0x32) = 0;
    *(undefined4 *)((int)this + 0x2a) = *(undefined4 *)((int)param_2 + 0x16);
    *(undefined4 *)((int)this + 0x36) = 0;
    pcVar1 = (code *)FUN_0048b580(*(int *)(DAT_004e0210 + 8),1,8,&local_14);
    DAT_004e34cc = (*pcVar1)(local_14,(undefined2 *)((int)this + 0x28));
  }
  else {
    *(undefined2 *)((int)this + 0x28) = 0x69;
    *(undefined4 *)((int)this + 0x2e) = 0;
    *(undefined4 *)((int)this + 0x32) = 0;
    *(undefined4 *)((int)this + 0x2a) = 0;
    *(undefined4 *)((int)this + 0x36) = 0;
  }
  puVar4 = (undefined4 *)((int)this + 0x3a);
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)param_2;
  *unaff_FS_OFFSET = local_10;
  return this;
}


