
/* ==== FUN_00432fd0 @ 00432fd0 ==== 
 * signature: int __cdecl FUN_00432fd0(short param_1, short * param_2, short * param_3)
 * body: 00432fd0-0043308f
 */

int __cdecl FUN_00432fd0(short param_1,short *param_2,short *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
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
  pcStack_c = FUN_00433090;
  *unaff_FS_OFFSET = &local_10;
  if (param_1 == 1) {
    FUN_00458440(local_20,param_2);
    local_8 = 0;
    if (local_18 == 0) {
      pcVar3 = FUN_0043b970(local_1c);
      cVar1 = *pcVar3;
      pcVar2 = pcVar3;
      while (cVar1 != '\0') {
        iVar4 = _tolower((int)*pcVar2);
        *pcVar2 = (char)iVar4;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 1;
      }
      local_14 = FUN_00454fa0(param_3,pcVar3);
      FUN_0043ba20(pcVar3);
      local_8 = 0xffffffff;
      FUN_0043309a();
    }
    else {
      local_8 = 0xffffffff;
      local_14 = local_18;
      FUN_0043309a();
    }
  }
  else {
    local_14 = 0x10000;
  }
  *unaff_FS_OFFSET = local_10;
  return local_14;
}


