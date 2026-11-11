
/* ==== FUN_0042f330 @ 0042f330 ==== 
 * signature: uint __cdecl FUN_0042f330(undefined4 param_1, int * param_2, char * param_3)
 * body: 0042f330-0042f39a
 */

uint __cdecl FUN_0042f330(undefined4 param_1,int *param_2,char *param_3)

{
  char *pcVar1;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_20 [12];
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0042f3b0;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffd4;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_20);
  local_8 = 1;
  pcVar1 = FUN_0043b970(param_3);
  *param_2 = (int)pcVar1;
  local_8 = 0xffffffff;
  FUN_0042f3ba();
  *unaff_FS_OFFSET = local_10;
  return -(uint)(*param_2 == 0) & 0x10000;
}


