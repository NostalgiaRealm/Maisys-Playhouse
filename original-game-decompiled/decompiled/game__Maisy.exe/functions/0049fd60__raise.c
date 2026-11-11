
/* ==== _raise @ 0049fd60 ==== 
 * signature: int __cdecl _raise(int _SigNum)
 * body: 0049fd60-0049fe3b;0049fe3f-0049ff07
 * note: Library Function - Single Match  _raise  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 0049fe3c-0049fe3e
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
    local_c = &DAT_004dfc2c;
    pcVar6 = DAT_004dfc2c;
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
    goto LAB_0049fdf8;
  case 0xf:
    local_c = &DAT_004dfc38;
    pcVar6 = DAT_004dfc38;
    break;
  case 0x15:
    local_c = &DAT_004dfc30;
    pcVar6 = DAT_004dfc30;
    break;
  case 0x16:
    local_c = &DAT_004dfc34;
    pcVar6 = DAT_004dfc34;
  }
  bVar1 = true;
  p_Var2 = local_8;
LAB_0049fdf8:
  if (bVar1) {
    __lock(1);
  }
  if (pcVar6 == (code *)0x1) {
    if (bVar1) {
      FUN_00493e20(1);
    }
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_00493e20(1);
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
      goto LAB_0049fe6f;
    }
  }
  else {
LAB_0049fe6f:
    if (_SigNum == 8) {
      if (DAT_004defb8 < DAT_004defbc + DAT_004defb8) {
        iVar4 = DAT_004defb8 * 0xc;
        iVar5 = DAT_004defb8;
        do {
          iVar4 = iVar4 + 0xc;
          iVar5 = iVar5 + 1;
          *(undefined4 *)(*(int *)(p_Var2->_con_ch_buf + 4) + -4 + iVar4) = 0;
        } while (iVar5 < DAT_004defb8 + DAT_004defbc);
      }
      goto LAB_0049feb6;
    }
  }
  *local_c = 0;
LAB_0049feb6:
  if (bVar1) {
    FUN_00493e20(1);
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


