
/* ==== FUN_00451170 @ 00451170 ==== 
 * signature: CDocument * __stdcall FUN_00451170(void)
 * body: 00451170-004511ca
 */

CDocument * FUN_00451170(void)

{
  CDocument *pCVar1;
  CDocument *pCVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004511cb;
  *unaff_FS_OFFSET = &local_10;
  pCVar1 = (CDocument *)FUN_004a5fed(0x86);
  local_8 = 0;
  pCVar2 = (CDocument *)0x0;
  if (pCVar1 != (CDocument *)0x0) {
    pCVar2 = FUN_00451220(pCVar1);
  }
  *unaff_FS_OFFSET = local_10;
  return pCVar2;
}


