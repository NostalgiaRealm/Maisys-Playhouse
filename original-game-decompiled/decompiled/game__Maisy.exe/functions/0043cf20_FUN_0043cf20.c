
/* ==== FUN_0043cf20 @ 0043cf20 ==== 
 * signature: int __cdecl FUN_0043cf20(int * param_1)
 * body: 0043cf20-0043cff9
 */

int __cdecl FUN_0043cf20(int *param_1)

{
  short sVar1;
  code *pcVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  int local_20;
  int local_1c;
  undefined4 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0043cffa;
  *unaff_FS_OFFSET = &local_10;
  local_14 = (undefined4 *)FUN_004a5fed(0xe);
  if (local_14 == (undefined4 *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    *local_14 = &PTR_FUN_004be070;
  }
  local_8 = 0xffffffff;
  local_1c = 0;
  local_20 = 0x7fff;
  FUN_00430500(local_14,0);
  iVar5 = 1;
  FUN_0043ca40(param_1,local_14);
  sVar1 = *(short *)(local_14 + 3);
  if (0 < sVar1) {
    do {
      piVar4 = (int *)FUN_004308b0(local_14,(short)iVar5);
      pcVar2 = *(code **)(*piVar4 + 0x27c);
      sVar3 = (*pcVar2)();
      if (sVar3 < local_20) {
        sVar3 = (*pcVar2)();
        local_20 = (int)sVar3;
        local_1c = local_20;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= sVar1);
  }
  FUN_00430540(local_14);
  *unaff_FS_OFFSET = local_10;
  return local_1c;
}


