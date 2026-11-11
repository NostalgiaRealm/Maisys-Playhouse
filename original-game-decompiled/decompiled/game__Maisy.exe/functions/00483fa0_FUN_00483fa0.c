
/* ==== FUN_00483fa0 @ 00483fa0 ==== 
 * signature: undefined4 __cdecl FUN_00483fa0(undefined4 param_1, int param_2, undefined4 * param_3, short * param_4)
 * body: 00483fa0-0048400f
 */

undefined4 __cdecl FUN_00483fa0(undefined4 param_1,int param_2,undefined4 *param_3,short *param_4)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int *piVar6;
  int *piVar7;
  
  if (*param_4 == 0x6d) {
    piVar2 = (int *)FUN_0048b550(param_2);
    pcVar1 = *(code **)(*piVar2 + 0x10);
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00458a00(iVar3);
    }
    if (iVar3 != 0) {
      sVar5 = param_4[1];
      piVar7 = (int *)0x0;
      piVar6 = (int *)0x0;
      iVar3 = *(int *)(param_4 + 2);
      iVar4 = (*pcVar1)();
      piVar2 = (int *)FUN_00458a00(iVar4);
      piVar2 = FUN_0043e510(piVar2,sVar5,iVar3,piVar6,piVar7);
      *param_3 = piVar2;
      return 0;
    }
  }
  return 0x10000;
}


