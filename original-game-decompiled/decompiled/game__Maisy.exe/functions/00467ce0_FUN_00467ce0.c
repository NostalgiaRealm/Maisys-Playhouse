
/* ==== FUN_00467ce0 @ 00467ce0 ==== 
 * signature: uint __cdecl FUN_00467ce0(undefined4 param_1, SIZE_T param_2, int * param_3)
 * body: 00467ce0-00467d4f
 */

uint __cdecl FUN_00467ce0(undefined4 param_1,SIZE_T param_2,int *param_3)

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
  pcStack_c = FUN_00467d65;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffd4;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_20);
  local_8 = 1;
  iVar1 = FUN_00434920(DAT_004d99ac,param_2,0);
  *param_3 = iVar1;
  local_8 = 0xffffffff;
  FUN_00467d6f();
  *unaff_FS_OFFSET = local_10;
  return -(uint)(*param_3 == 0) & 0x20001;
}


