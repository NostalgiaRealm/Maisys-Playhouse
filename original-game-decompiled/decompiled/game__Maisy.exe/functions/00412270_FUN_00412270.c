
/* ==== FUN_00412270 @ 00412270 ==== 
 * signature: HGLOBAL __cdecl FUN_00412270(HGLOBAL param_1, SIZE_T * param_2, char param_3)
 * body: 00412270-0041236d
 */

HGLOBAL __cdecl FUN_00412270(HGLOBAL param_1,SIZE_T *param_2,char param_3)

{
  SIZE_T SVar1;
  int iVar2;
  int iVar3;
  SIZE_T SVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_24 [4];
  int local_20;
  undefined1 local_1c [4];
  int local_18;
  HGLOBAL local_14;
  undefined4 local_10;
  code *pcStack_c;
  uint local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00412376;
  *unaff_FS_OFFSET = &local_10;
  FUN_00411ea0(local_1c,param_1);
  iVar2 = 0;
  local_8 = 0;
  SVar1 = *param_2;
  SVar4 = SVar1;
  if (param_3 == '\0') {
    iVar2 = 0;
    if (0 < (int)SVar1) {
      do {
        if (*(char *)(local_18 + iVar2) == '\n') {
          SVar4 = SVar4 - 1;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)SVar1);
    }
  }
  else if (0 < (int)SVar1) {
    do {
      if (*(char *)(local_18 + iVar2) == '\r') {
        SVar4 = SVar4 + 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)SVar1);
  }
  iVar2 = 0;
  local_14 = FUN_0043f770(SVar4);
  if (local_14 != (HGLOBAL)0x0) {
    FUN_00411ea0(local_24,local_14);
    iVar3 = 0;
    if (param_3 == '\0') {
      iVar2 = 0;
      if (0 < (int)*param_2) {
        do {
          if (*(char *)(local_18 + iVar2) != '\n') {
            iVar3 = iVar3 + 1;
            *(char *)(local_20 + -1 + iVar3) = *(char *)(local_18 + iVar2);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)*param_2);
      }
    }
    else if (0 < (int)*param_2) {
      do {
        *(undefined1 *)(local_20 + iVar3) = *(undefined1 *)(local_18 + iVar2);
        if (*(char *)(local_18 + iVar2) == '\r') {
          iVar3 = iVar3 + 1;
          *(undefined1 *)(iVar3 + local_20) = 10;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar2 < (int)*param_2);
    }
    local_8 = local_8 & 0xffffff00;
    *param_2 = SVar4;
    FUN_0041236e();
  }
  local_8 = 0xffffffff;
  FUN_00412380();
  *unaff_FS_OFFSET = local_10;
  return local_14;
}


