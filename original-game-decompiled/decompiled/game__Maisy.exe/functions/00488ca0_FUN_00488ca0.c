
/* ==== FUN_00488ca0 @ 00488ca0 ==== 
 * signature: undefined __thiscall FUN_00488ca0(void * this, undefined4 param_1, undefined2 param_2, undefined2 param_3)
 * body: 00488ca0-00488d31
 */

void __thiscall FUN_00488ca0(void *this,undefined4 param_1,undefined2 param_2,undefined2 param_3)

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
  pcStack_c = FUN_00488d3e;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffd0;
  if (DAT_004dc57c == '\0') {
    local_18 = CONCAT22(param_3,param_2);
    FUN_004a8882(this);
    AFX_EXCEPTION_LINK::AFX_EXCEPTION_LINK(local_24);
    local_8 = 1;
    if (*(int **)((int)this + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)((int)this + 0x40) + 0xf8))(local_18,0,0);
    }
    local_8 = 0xffffffff;
    FUN_00488d48();
    ReleaseCapture();
    DAT_004dcf98 = 0;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


