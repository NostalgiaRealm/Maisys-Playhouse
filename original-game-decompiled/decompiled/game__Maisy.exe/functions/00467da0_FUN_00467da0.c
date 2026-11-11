
/* ==== FUN_00467da0 @ 00467da0 ==== 
 * signature: uint __cdecl FUN_00467da0(undefined4 param_1, SIZE_T param_2, int * param_3)
 * body: 00467da0-00467e0a
 */

uint __cdecl FUN_00467da0(undefined4 param_1,SIZE_T param_2,int *param_3)

{
  HGLOBAL pvVar1;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_20 [12];
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00467e20;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffd4;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_20);
  local_8 = 1;
  pvVar1 = FUN_0043f770(param_2);
  *param_3 = (int)pvVar1;
  local_8 = 0xffffffff;
  FUN_00467e2a();
  *unaff_FS_OFFSET = local_10;
  return -(uint)(*param_3 == 0) & 0x20001;
}


