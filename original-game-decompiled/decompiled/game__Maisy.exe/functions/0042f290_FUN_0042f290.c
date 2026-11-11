
/* ==== FUN_0042f290 @ 0042f290 ==== 
 * signature: uint __cdecl FUN_0042f290(undefined4 param_1, int * param_2, int param_3)
 * body: 0042f290-0042f2fa
 */

uint __cdecl FUN_0042f290(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_20 [12];
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0042f310;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffd4;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_20);
  local_8 = 1;
  iVar1 = FUN_0043b950(param_3);
  *param_2 = iVar1;
  local_8 = 0xffffffff;
  FUN_0042f31a();
  *unaff_FS_OFFSET = local_10;
  return -(uint)(*param_2 == 0) & 0x10000;
}


