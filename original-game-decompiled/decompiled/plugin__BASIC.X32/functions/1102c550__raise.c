
/* ==== _raise @ 1102c550 ==== 
 * signature: int __cdecl _raise(int _SigNum)
 * body: 1102c550-1102c62b;1102c62f-1102c6f7
 * note: Library Function - Single Match  _raise  Library: Visual Studio 1998 Release
 * unreachable code after a no-return call, not in this C (see unreachable_after_noreturn.csv, disassembly.asm): 1102c62c-1102c62e
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
    local_c = &DAT_11036f24;
    pcVar6 = DAT_11036f24;
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
    goto LAB_1102c5e8;
  case 0xf:
    local_c = &DAT_11036f30;
    pcVar6 = DAT_11036f30;
    break;
  case 0x15:
    local_c = &DAT_11036f28;
    pcVar6 = DAT_11036f28;
    break;
  case 0x16:
    local_c = &DAT_11036f2c;
    pcVar6 = DAT_11036f2c;
  }
  bVar1 = true;
  p_Var2 = local_8;
LAB_1102c5e8:
  if (bVar1) {
    __lock(1);
  }
  if (pcVar6 == (code *)0x1) {
    if (bVar1) {
      FUN_1102b240(1);
    }
    return 0;
  }
  if (pcVar6 == (code *)0x0) {
    if (bVar1) {
      FUN_1102b240(1);
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
      goto LAB_1102c65f;
    }
  }
  else {
LAB_1102c65f:
    if (_SigNum == 8) {
      if (DAT_11036a18 < DAT_11036a1c + DAT_11036a18) {
        iVar4 = DAT_11036a18 * 0xc;
        iVar5 = DAT_11036a18;
        do {
          iVar4 = iVar4 + 0xc;
          iVar5 = iVar5 + 1;
          *(undefined4 *)(*(int *)(p_Var2->_con_ch_buf + 4) + -4 + iVar4) = 0;
        } while (iVar5 < DAT_11036a18 + DAT_11036a1c);
      }
      goto LAB_1102c6a6;
    }
  }
  *local_c = 0;
LAB_1102c6a6:
  if (bVar1) {
    FUN_1102b240(1);
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


