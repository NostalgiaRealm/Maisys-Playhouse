
/* ==== terminate @ 1202c150 ==== 
 * signature: void __cdecl terminate(void)
 * body: 1202c150-1202c198
 * note: Library Function - Single Match  void __cdecl terminate(void)  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 1202c1b5-1202c1c4
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
  puStack_c = &DAT_12036340;
  pcStack_10 = FUN_1202c2d4;
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


