
/* ==== FUN_00412150 @ 00412150 ==== 
 * signature: HGLOBAL __cdecl FUN_00412150(HGLOBAL param_1, int param_2, uint param_3, char * param_4, uint param_5, uint * param_6)
 * body: 00412150-00412258
 */

HGLOBAL __cdecl
FUN_00412150(HGLOBAL param_1,int param_2,uint param_3,char *param_4,uint param_5,uint *param_6)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_20 [4];
  int local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00412259;
  *unaff_FS_OFFSET = &local_10;
  if ((int)param_5 < 0) {
    local_14 = GlobalSize(param_1);
  }
  else {
    local_14 = param_5;
  }
  if (local_14 < param_3) {
    param_3 = local_14;
  }
  uVar2 = 0xffffffff;
  pcVar3 = param_4;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_18 = ((~uVar2 - 1) - param_3) + local_14 + param_2;
  if (local_14 < local_18) {
    param_1 = GlobalReAlloc(param_1,local_18,0x40);
  }
  FUN_00411ea0(local_20,param_1);
  local_8 = 0;
  FID_conflict__memcpy
            ((void *)((local_18 - local_14) + param_3 + local_1c),(void *)(local_1c + param_3),
             local_14 - param_3);
  FID_conflict__memcpy((void *)(local_1c + param_2),param_4,~uVar2 - 1);
  local_8 = 0xffffffff;
  FUN_00412263();
  if (local_18 < local_14) {
    uVar2 = local_18;
    if (local_18 == 0) {
      uVar2 = 1;
    }
    FUN_0043f7b0(param_1,uVar2);
  }
  if (param_6 != (uint *)0x0) {
    *param_6 = local_18;
  }
  *unaff_FS_OFFSET = local_10;
  return param_1;
}


