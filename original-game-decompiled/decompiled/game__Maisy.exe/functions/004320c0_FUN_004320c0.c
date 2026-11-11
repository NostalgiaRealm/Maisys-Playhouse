
/* ==== FUN_004320c0 @ 004320c0 ==== 
 * signature: undefined4 __cdecl FUN_004320c0(short * param_1, short * param_2, char * param_3, short * param_4, char param_5)
 * body: 004320c0-004321f6
 */

undefined4 __cdecl
FUN_004320c0(short *param_1,short *param_2,char *param_3,short *param_4,char param_5)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_48 [28];
  undefined4 local_2c;
  HLOCAL local_28;
  char *local_24;
  char *local_20;
  HLOCAL local_1c;
  HLOCAL local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0043220a;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffac;
  local_2c = 0;
  local_1c = (HLOCAL)0x0;
  local_18 = (HLOCAL)0x0;
  local_24 = (char *)0x0;
  local_20 = (char *)0x0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_48);
  local_8 = 1;
  iVar1 = FUN_00432220(param_1,&local_28);
  if (iVar1 != 0) {
    FUN_004a3538();
  }
  local_1c = local_28;
  local_24 = LocalLock(local_28);
  if (param_2 == (short *)0x0) {
    local_18 = (HLOCAL)0x0;
  }
  else {
    iVar1 = FUN_00432220(param_2,&local_28);
    if (iVar1 != 0) {
      FUN_004a3538();
    }
    local_18 = local_28;
    param_3 = LocalLock(local_28);
  }
  local_20 = param_3;
  iVar1 = FUN_00431cd0(local_24,param_3,param_5);
  iVar1 = FUN_00454d00(param_4,iVar1);
  if (iVar1 != 0) {
    FUN_004a3538();
  }
  local_8 = 0xffffffff;
  FUN_00432214();
  if (local_1c != (HLOCAL)0x0) {
    if (local_24 != (char *)0x0) {
      LocalUnlock(local_1c);
    }
    FUN_0043f720(local_1c);
  }
  if (local_18 != (HLOCAL)0x0) {
    if (local_20 != (char *)0x0) {
      LocalUnlock(local_18);
    }
    FUN_0043f720(local_18);
  }
  *unaff_FS_OFFSET = local_10;
  return local_2c;
}


