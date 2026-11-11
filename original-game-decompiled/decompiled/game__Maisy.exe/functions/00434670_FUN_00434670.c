
/* ==== FUN_00434670 @ 00434670 ==== 
 * signature: undefined __stdcall FUN_00434670(void)
 * body: 00434670-004346e2
 */

void FUN_00434670(void)

{
  undefined4 *this;
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004346e3;
  *unaff_FS_OFFSET = &local_10;
  this = FUN_00412c20(0x4a);
  local_8 = 0;
  puVar1 = (undefined4 *)0x0;
  if (this != (undefined4 *)0x0) {
    puVar1 = FUN_0042f970(this,0x1a,0,'\0',0,'\0');
  }
  local_8 = 0xffffffff;
  DAT_004dae30 = puVar1;
  DAT_004dae34 = GetStockObject(0xc);
  *unaff_FS_OFFSET = local_10;
  return;
}


