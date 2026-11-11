
/* ==== _signal @ 0049faf0 ==== 
 * signature: void __cdecl _signal(int param_1)
 * body: 0049faf0-0049fc9b
 * note: Library Function - Single Match  _signal  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _signal
   
   Library: Visual Studio 1998 Release */

void __cdecl _signal(int param_1)

{
  _ptiddata p_Var1;
  undefined4 *puVar2;
  BOOL BVar3;
  ulong *puVar4;
  DWORD DVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int in_stack_00000008;
  
  if ((in_stack_00000008 != 4) && (in_stack_00000008 != 3)) {
    if ((param_1 == 2) || (((param_1 == 0x15 || (param_1 == 0x16)) || (param_1 == 0xf)))) {
      __lock(1);
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_004dfc3c == 0)) {
        BVar3 = SetConsoleCtrlHandler(FUN_0049fcd0,1);
        if (BVar3 != 1) {
          puVar4 = FUN_0048f9e0();
          DVar5 = GetLastError();
          *puVar4 = DVar5;
          FUN_00493e20(1);
          goto LAB_0049fc34;
        }
        DAT_004dfc3c = 1;
      }
      switch(param_1) {
      case 2:
        DAT_004dfc2c = in_stack_00000008;
        break;
      default:
        break;
      case 0xf:
        DAT_004dfc38 = in_stack_00000008;
        break;
      case 0x15:
        DAT_004dfc30 = in_stack_00000008;
        break;
      case 0x16:
        DAT_004dfc34 = in_stack_00000008;
      }
      FUN_00493e20(1);
      return;
    }
    if (((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) {
      p_Var1 = __getptd();
      if (*(undefined4 **)(p_Var1->_con_ch_buf + 4) == &DAT_004def40) {
        puVar2 = (undefined4 *)FUN_00490210(DAT_004defc0);
        *(undefined4 **)(p_Var1->_con_ch_buf + 4) = puVar2;
        uVar8 = DAT_004defc0;
        if (puVar2 == (undefined4 *)0x0) goto LAB_0049fc34;
        puVar9 = &DAT_004def40;
        for (uVar7 = DAT_004defc0 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar2 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar2 = puVar2 + 1;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar2 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar2 = (undefined4 *)((int)puVar2 + 1);
        }
      }
      uVar8 = siglookup(param_1,*(uint *)(p_Var1->_con_ch_buf + 4));
      if (uVar8 != 0) {
        if (*(int *)(uVar8 + 4) != param_1) {
          return;
        }
        do {
          *(int *)(uVar8 + 8) = in_stack_00000008;
          piVar6 = (int *)(uVar8 + 0x10);
          uVar8 = uVar8 + 0xc;
        } while (*piVar6 == param_1);
        return;
      }
    }
  }
LAB_0049fc34:
  piVar6 = FUN_0048f9d0();
  *piVar6 = 0x16;
  return;
}


