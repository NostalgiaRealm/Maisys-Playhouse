
/* ==== _signal @ 1202ca20 ==== 
 * signature: void __cdecl _signal(int param_1)
 * body: 1202ca20-1202cbcb
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
      if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_12038590 == 0)) {
        BVar3 = SetConsoleCtrlHandler(FUN_1202cc00,1);
        if (BVar3 != 1) {
          puVar4 = FUN_1202efb0();
          DVar5 = GetLastError();
          *puVar4 = DVar5;
          FUN_1202c520(1);
          goto LAB_1202cb64;
        }
        DAT_12038590 = 1;
      }
      switch(param_1) {
      case 2:
        DAT_12038580 = in_stack_00000008;
        break;
      default:
        break;
      case 0xf:
        DAT_1203858c = in_stack_00000008;
        break;
      case 0x15:
        DAT_12038584 = in_stack_00000008;
        break;
      case 0x16:
        DAT_12038588 = in_stack_00000008;
      }
      FUN_1202c520(1);
      return;
    }
    if (((param_1 == 8) || (param_1 == 4)) || (param_1 == 0xb)) {
      p_Var1 = __getptd();
      if (*(undefined4 **)(p_Var1->_con_ch_buf + 4) == &DAT_120384c8) {
        puVar2 = (undefined4 *)FUN_1202c7e0(DAT_12038548);
        *(undefined4 **)(p_Var1->_con_ch_buf + 4) = puVar2;
        uVar8 = DAT_12038548;
        if (puVar2 == (undefined4 *)0x0) goto LAB_1202cb64;
        puVar9 = &DAT_120384c8;
        for (uVar7 = DAT_12038548 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
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
LAB_1202cb64:
  piVar6 = FUN_1202efa0();
  *piVar6 = 0x16;
  return;
}


