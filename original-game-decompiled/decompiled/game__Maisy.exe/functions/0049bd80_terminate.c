
/* ==== terminate @ 0049bd80 ==== 
 * signature: void __cdecl terminate(void)
 * body: 0049bd80-0049bdc8
 * note: Library Function - Single Match  void __cdecl terminate(void)  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0049bde5-0049bdf4
 */

/* Library Function - Single Match
    void __cdecl terminate(void)
   
   Library: Visual Studio 1998 Release */

void __cdecl terminate(void)

{
  _ptiddata p_Var1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 uStack_14;
  code *pcStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  uStack_14 = *unaff_FS_OFFSET;
  puStack_c = &DAT_004ce1f8;
  pcStack_10 = FUN_0049b880;
  *unaff_FS_OFFSET = &uStack_14;
  local_8 = 0;
  p_Var1 = __getptd();
  if (p_Var1->_tpxcptinfoptrs != (void *)0x0) {
    local_8 = 1;
    p_Var1 = __getptd();
    (*p_Var1->_tpxcptinfoptrs)();
  }
  local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  _abort();
}


