
/* ==== FUN_00488660 @ 00488660 ==== 
 * signature: CView * __stdcall FUN_00488660(void)
 * body: 00488660-004886b7
 */

CView * FUN_00488660(void)

{
  CView *pCVar1;
  CView *pCVar2;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  code *pcStack_c;
  undefined4 local_8;
  
  local_10 = *unaff_FS_OFFSET;
  local_8 = 0xffffffff;
  pcStack_c = FUN_004886b8;
  *unaff_FS_OFFSET = &local_10;
  pCVar1 = (CView *)FUN_004a5fed(0x50);
  local_8 = 0;
  pCVar2 = (CView *)0x0;
  if (pCVar1 != (CView *)0x0) {
    pCVar2 = FUN_00488700(pCVar1);
  }
  *unaff_FS_OFFSET = local_10;
  return pCVar2;
}


