
/* ==== _raise @ 1202cc90 ==== 
 * signature: int __cdecl _raise(int _SigNum)
 * body: 1202cc90-1202cd6b;1202cd6f-1202ce37
 * note: Library Function - Single Match  _raise  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 1202cd6c-1202cd6e
 */

/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 1998 Release */

int __cdecl _raise(int _SigNum)

{
  bool bVar1;
  _ptiddata p_Var2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 *local_c;
  _ptiddata local_8;
  void *local_4;
  
  bVar1 = false;
  switch(_SigNum) {
  case 2:
    local_c = &DAT_12038580;
    pcVar6 = DAT_12038580;
    break;
  default:
    return -1;
  case 4:
  case 8:
  case 0xb:
    p_Var2 = __getptd();
    uVar3 = siglookup(_SigNum,*(uint *)(p_Var2->_con_ch_buf + 4));
    pcVar6 = *(code **)(uVar3 + 8);
    local_c = (undefined4 *)(uVar3 + 8);
    goto LAB_1202cd28;
  case 0xf:
    local_c = &DAT_1203858c;
    pcVar6 = DAT_1203858c;
    break;
  case 0x15:
    local_c = &DAT_12038584;
    pcVar6 = DAT_12038584;
    break;
  case 0x16:
    local_c = &DAT_12038588;
    pcVar6 = DAT_12038588;
  }
  bVar1 = true;
  p_Var2 = local_8;
LAB_1202cd28:
  if (bVar1) {
    __lock(1);
  }
  if (pcVar6 == (code *)0x1) {
    if (bVar1) {
      FUN_1202c520(1);
    }
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_1202c520(1);
    }
                    /* WARNING: Subroutine does not return */
    __exit(3);
  }
  if (((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) {
    local_8 = p_Var2->_initaddr;
    p_Var2->_initaddr = (void *)0x0;
    if (_SigNum == 8) {
      local_4 = p_Var2->_initarg;
      p_Var2->_initarg = (void *)0x8c;
      goto LAB_1202cd9f;
    }
  }
  else {
LAB_1202cd9f:
    if (_SigNum == 8) {
      if (DAT_12038540 < DAT_12038544 + DAT_12038540) {
        iVar4 = DAT_12038540 * 0xc;
        iVar5 = DAT_12038540;
        do {
          iVar4 = iVar4 + 0xc;
          iVar5 = iVar5 + 1;
          *(undefined4 *)(*(int *)(p_Var2->_con_ch_buf + 4) + -4 + iVar4) = 0;
        } while (iVar5 < DAT_12038540 + DAT_12038544);
      }
      goto LAB_1202cde6;
    }
  }
  *local_c = 0;
LAB_1202cde6:
  if (bVar1) {
    FUN_1202c520(1);
  }
  if (_SigNum == 8) {
    (*pcVar6)(8,p_Var2->_initarg);
  }
  else {
    (*pcVar6)(_SigNum);
    if ((_SigNum != 0xb) && (_SigNum != 4)) {
      return 0;
    }
  }
  p_Var2->_initaddr = local_8;
  if (_SigNum == 8) {
    p_Var2->_initarg = local_4;
  }
  return 0;
}


