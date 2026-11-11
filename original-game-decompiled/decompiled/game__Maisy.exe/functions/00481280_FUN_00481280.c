
/* ==== FUN_00481280 @ 00481280 ==== 
 * signature: undefined4 * __fastcall FUN_00481280(undefined4 * param_1)
 * body: 00481280-0048130e
 */

undefined4 * __fastcall FUN_00481280(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_0048130f;
  *unaff_FS_OFFSET = &local_10;
  FUN_00412c90(param_1,0);
  bVar1 = *(byte *)((int)param_1 + 0x15a);
  *param_1 = &PTR_FUN_004ca328;
  *(undefined4 *)((int)param_1 + 0x156) = 0;
  *(undefined4 *)((int)param_1 + 0x152) = 1;
  *(byte *)((int)param_1 + 0x15a) = bVar1 & 0xfe;
  *(undefined4 *)((int)param_1 + 0x14a) = 0;
  *(undefined4 *)((int)param_1 + 0x14e) = 0;
  *(byte *)((int)param_1 + 0x15a) = bVar1 & 0xfc;
  *unaff_FS_OFFSET = local_10;
  *(undefined1 *)(param_1 + 0x52) = 2;
  *(undefined1 *)((int)param_1 + 0x149) = 2;
  return param_1;
}


