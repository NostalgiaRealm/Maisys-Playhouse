
/* ==== FUN_00468250 @ 00468250 ==== 
 * signature: undefined4 __cdecl FUN_00468250(undefined4 param_1, void * param_2, int param_3, void * param_4)
 * body: 00468250-004682d7
 */

undefined4 __cdecl FUN_00468250(undefined4 param_1,void *param_2,int param_3,void *param_4)

{
  uint uVar1;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_24 [12];
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004682eb;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffd0;
  if (param_2 == (void *)0x0) {
    local_18 = 0x10001;
  }
  else {
    local_18 = 0;
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_24);
    local_8 = 1;
    uVar1 = FUN_0042ff60(param_2,param_3,param_4);
    if ((char)uVar1 == '\0') {
      local_18 = 0x10000;
    }
    else {
      local_18 = 0;
    }
    local_8 = 0xffffffff;
    FUN_004682f5();
  }
  *unaff_FS_OFFSET = local_10;
  return local_18;
}


