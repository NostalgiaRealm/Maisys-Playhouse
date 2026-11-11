
/* ==== FUN_00468080 @ 00468080 ==== 
 * signature: undefined4 __cdecl FUN_00468080(undefined4 param_1, int param_2, undefined4 * param_3)
 * body: 00468080-00468119
 */

undefined4 __cdecl FUN_00468080(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_2c [16];
  undefined4 *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00468143;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffc8;
  if (param_2 == 0) {
    local_18 = 0x10000;
  }
  else {
    local_18 = 0;
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_2c);
    local_8 = 1;
    local_1c = FUN_00412c20(0x4a);
    local_8 = CONCAT31(local_8._1_3_,2);
    puVar1 = (undefined4 *)0x0;
    if (local_1c != (undefined4 *)0x0) {
      puVar1 = FUN_0042f970(local_1c,param_2,0,'\0',0,'\0');
    }
    *param_3 = puVar1;
    local_8 = 0xffffffff;
    FUN_0046814d();
  }
  *unaff_FS_OFFSET = local_10;
  return local_18;
}


