
/* ==== FUN_00467e60 @ 00467e60 ==== 
 * signature: undefined4 __cdecl FUN_00467e60(undefined4 param_1, HGLOBAL param_2, SIZE_T param_3)
 * body: 00467e60-00467ed1
 */

undefined4 __cdecl FUN_00467e60(undefined4 param_1,HGLOBAL param_2,SIZE_T param_3)

{
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_24 [12];
  undefined4 local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00467ee5;
  *unaff_FS_OFFSET = &local_10;
  local_18 = 0x20002;
  local_14 = &stack0xffffffd0;
  if (param_2 != (HGLOBAL)0x0) {
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_24);
    local_8 = 1;
    FUN_0043f7b0(param_2,param_3);
    local_18 = 0;
    local_8 = 0xffffffff;
    FUN_00467eef();
  }
  *unaff_FS_OFFSET = local_10;
  return local_18;
}


