
/* ==== FUN_00451220 @ 00451220 ==== 
 * signature: CDocument * __fastcall FUN_00451220(CDocument * param_1)
 * body: 00451220-004512a0;004512b9-00451314
 */

CDocument * __fastcall FUN_00451220(CDocument *param_1)

{
  undefined4 *this;
  int iVar1;
  short sVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  int local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_00451322;
  *unaff_FS_OFFSET = &local_10;
  CDocument::CDocument(param_1);
  local_8 = 0;
  *(undefined ***)param_1 = &PTR_FUN_004c87b0;
  this = FUN_00412c20(0xc2);
  local_8._0_1_ = 1;
  if (this == (undefined4 *)0x0) {
    this = (undefined4 *)0x0;
  }
  else {
    FUN_00412c90(this,0);
    *this = &PTR_FUN_004be4b8;
    *this = &PTR_FUN_004be3b0;
    *this = &PTR_FUN_004c8868;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  *(undefined4 **)(param_1 + 0x50) = this;
  FUN_004585c0(this,param_1,1);
  sVar2 = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  do {
    iVar1 = (int)sVar2;
    sVar2 = sVar2 + 1;
    *(undefined4 *)(param_1 + iVar1 * 0x16 + 0x5a) = 0;
  } while (sVar2 < 2);
  param_1[0x84] = (CDocument)0x0;
  DAT_004da378 = *(undefined4 *)(param_1 + 0x50);
  *unaff_FS_OFFSET = local_10;
  DAT_004dbc10 = param_1;
  return param_1;
}


