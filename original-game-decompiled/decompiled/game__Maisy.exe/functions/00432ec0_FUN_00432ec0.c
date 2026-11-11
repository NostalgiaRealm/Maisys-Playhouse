
/* ==== FUN_00432ec0 @ 00432ec0 ==== 
 * signature: int __cdecl FUN_00432ec0(short param_1, short * param_2, short * param_3)
 * body: 00432ec0-00432f60
 */

int __cdecl FUN_00432ec0(short param_1,short *param_2,short *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_20 [4];
  char *local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00432f61;
  *unaff_FS_OFFSET = &local_10;
  if (param_1 == 1) {
    FUN_00458440(local_20,param_2);
    local_8 = 0;
    if (local_18 == 0) {
      iVar3 = 0;
      iVar2 = -1;
      pcVar4 = local_1c;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (iVar2 != -2) {
        iVar3 = (int)*local_1c;
      }
      local_14 = FUN_00454d00(param_3,iVar3);
      local_8 = 0xffffffff;
      FUN_00432f6b();
    }
    else {
      local_8 = 0xffffffff;
      local_14 = local_18;
      FUN_00432f6b();
    }
  }
  else {
    local_14 = 0x10000;
  }
  *unaff_FS_OFFSET = local_10;
  return local_14;
}


