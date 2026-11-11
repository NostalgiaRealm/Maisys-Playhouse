
/* ==== FUN_004588a0 @ 004588a0 ==== 
 * signature: bool __fastcall FUN_004588a0(int param_1)
 * body: 004588a0-00458920
 */

bool __fastcall FUN_004588a0(int param_1)

{
  short sVar1;
  undefined4 *unaff_FS_OFFSET;
  AFX_EXCEPTION_LINK local_24 [12];
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0045893a;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffd0;
  local_18 = param_1;
  sVar1 = FUN_00458960(param_1);
  if (sVar1 < 10) {
    FUN_00458970(local_18);
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_24);
    local_8 = 1;
    FUN_00407a20(*(void **)(local_18 + 0x82),1);
    local_8 = 0xffffffff;
    FUN_00458944();
    FUN_00458980(local_18);
  }
  *unaff_FS_OFFSET = local_10;
  return sVar1 < 10;
}


