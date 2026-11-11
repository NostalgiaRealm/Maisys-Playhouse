
/* ==== terminate @ 0049be8d ==== 
 * signature: void __cdecl terminate(void)
 * body: 0049be8d-0049be91
 * thunk to: terminate
 */

void __cdecl terminate(void)

{
  _ptiddata p_Var1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_14 = *unaff_FS_OFFSET;
  puStack_c = &DAT_004ce1f8;
  pcStack_10 = FUN_0049b880;
  *unaff_FS_OFFSET = &uStack_14;
  uStack_8 = 0;
  p_Var1 = __getptd();
  if (p_Var1->_tpxcptinfoptrs != (void *)0x0) {
    uStack_8 = 1;
    p_Var1 = __getptd();
    (*p_Var1->_tpxcptinfoptrs)();
  }
  uStack_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  _abort();
}


