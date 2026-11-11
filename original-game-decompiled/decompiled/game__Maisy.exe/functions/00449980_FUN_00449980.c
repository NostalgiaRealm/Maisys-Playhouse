
/* ==== FUN_00449980 @ 00449980 ==== 
 * signature: undefined __thiscall FUN_00449980(void * this, uint param_1, char * param_2)
 * body: 00449980-00449ae2
 */

void __thiscall FUN_00449980(void *this,uint param_1,char *param_2)

{
  char cVar1;
  HGLOBAL pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_2c [4];
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  SIZE_T *local_18;
  int *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00449ae3;
  *unaff_FS_OFFSET = &local_10;
  local_14 = this;
  FUN_00449260(this);
  (**(code **)(*local_14 + 0x1c))(1);
  local_18 = (SIZE_T *)((int)local_14 + 0x186);
  local_20 = FUN_00412010(*(HGLOBAL *)((int)local_14 + 0x152),*local_18);
  FUN_00411ea0(local_2c,*(HGLOBAL *)((int)local_14 + 0x152));
  if ((0 < (int)*local_18) && (*(char *)(local_28 + -1 + *local_18) == '\r')) {
    local_20 = local_20 + 1;
  }
  local_8 = 0xffffffff;
  FUN_00449aed();
  if (local_20 < param_1) {
    iVar5 = param_1 - local_20;
    do {
      uVar3 = *local_18;
      pvVar2 = FUN_00412150(*(HGLOBAL *)((int)local_14 + 0x152),uVar3,uVar3,&DAT_004dbb00,uVar3,
                            local_18);
      iVar5 = iVar5 + -1;
      *(HGLOBAL *)((int)local_14 + 0x152) = pvVar2;
    } while (iVar5 != 0);
  }
  FUN_00411f80(*(HGLOBAL *)((int)local_14 + 0x152),param_1,&local_1c,&local_24,*local_18);
  FUN_00412150(*(HGLOBAL *)((int)local_14 + 0x152),local_1c,local_24,param_2,*local_18,local_18);
  uVar3 = 0xffffffff;
  pcVar6 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = 0xffffffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  FUN_00412150(*(HGLOBAL *)((int)local_14 + 0x152),(~uVar4 - 1) + local_1c,(~uVar3 - 1) + local_1c,
               &DAT_004dbb00,*local_18,local_18);
  *unaff_FS_OFFSET = local_10;
  return;
}


