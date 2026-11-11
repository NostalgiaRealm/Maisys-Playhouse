
/* ==== FUN_00483ed0 @ 00483ed0 ==== 
 * signature: int * __cdecl FUN_00483ed0(undefined4 param_1, int * param_2, undefined4 * param_3)
 * body: 00483ed0-00483f6d
 */

int * __cdecl FUN_00483ed0(undefined4 param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_24 [12];
  int *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00483f88;
  *unaff_FS_OFFSET = &local_10;
  local_18 = (int *)0x0;
  local_14 = &stack0xffffffd0;
  AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_24);
  local_8 = 1;
  DAT_004dca70 = DAT_004dca70 + 1;
  if ((param_3 == (undefined4 *)0x0) || (param_3[2] == 0)) {
    local_18 = (int *)0x10000;
  }
  else if ((*(byte *)((int)param_3 + 3) & 0x80) == 0) {
    local_18 = FUN_00483970(param_2,param_3);
  }
  else {
    local_18 = (int *)FUN_00483930(param_2,param_3);
  }
  DAT_004dca70 = DAT_004dca70 + -1;
  local_8 = 0xffffffff;
  FUN_00483f92();
  *unaff_FS_OFFSET = local_10;
  return local_18;
}


