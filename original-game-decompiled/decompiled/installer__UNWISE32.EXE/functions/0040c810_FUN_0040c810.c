
/* ==== FUN_0040c810 @ 0040c810 ==== 
 * signature: LONG __cdecl FUN_0040c810(int param_1, _EXCEPTION_POINTERS * param_2)
 * body: 0040c810-0040c94d
 */

LONG __cdecl FUN_0040c810(int param_1,_EXCEPTION_POINTERS *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  LONG LVar5;
  undefined4 *puVar6;
  int iVar7;
  
  piVar4 = FUN_0040c950(param_1);
  uVar3 = DAT_004134c0;
  if ((piVar4 == (int *)0x0) || (pcVar1 = (code *)piVar4[2], pcVar1 == (code *)0x0)) {
    LVar5 = UnhandledExceptionFilter(param_2);
    return LVar5;
  }
  if (pcVar1 == (code *)0x5) {
    piVar4[2] = 0;
    return 1;
  }
  if (pcVar1 != (code *)0x1) {
    DAT_004134c0 = param_2;
    if (piVar4[1] == 8) {
      if (DAT_00413270 < DAT_00413274 + DAT_00413270) {
        iVar7 = (DAT_00413274 + DAT_00413270) - DAT_00413270;
        puVar6 = (undefined4 *)(DAT_00413270 * 0xc + 0x413200);
        do {
          *puVar6 = 0;
          puVar6 = puVar6 + 3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      uVar2 = DAT_0041327c;
      iVar7 = *piVar4;
      if (iVar7 == -0x3fffff72) {
        DAT_0041327c = 0x83;
      }
      else if (iVar7 == -0x3fffff70) {
        DAT_0041327c = 0x81;
      }
      else if (iVar7 == -0x3fffff6f) {
        DAT_0041327c = 0x84;
      }
      else if (iVar7 == -0x3fffff6d) {
        DAT_0041327c = 0x85;
      }
      else if (iVar7 == -0x3fffff73) {
        DAT_0041327c = 0x82;
      }
      else if (iVar7 == -0x3fffff71) {
        DAT_0041327c = 0x86;
      }
      else if (iVar7 == -0x3fffff6e) {
        DAT_0041327c = 0x8a;
      }
      (*pcVar1)(8,DAT_0041327c);
      DAT_0041327c = uVar2;
      DAT_004134c0 = (_EXCEPTION_POINTERS *)uVar3;
      return -1;
    }
    piVar4[2] = 0;
    (*pcVar1)(piVar4[1]);
    DAT_004134c0 = (_EXCEPTION_POINTERS *)uVar3;
    return -1;
  }
  return -1;
}


