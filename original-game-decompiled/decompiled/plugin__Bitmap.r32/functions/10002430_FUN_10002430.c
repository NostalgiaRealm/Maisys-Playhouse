
/* ==== FUN_10002430 @ 10002430 ==== 
 * signature: undefined4 __cdecl FUN_10002430(int param_1, int param_2, int param_3)
 * body: 10002430-100024a9
 */

undefined4 __cdecl FUN_10002430(int param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = param_2;
  psVar5 = *(short **)(param_2 + 8);
  sVar1 = psVar5[2];
  sVar2 = *psVar5;
  sVar3 = psVar5[1];
  sVar4 = psVar5[3];
  iVar7 = FUN_100024b0(param_1);
  if (iVar7 == 0) {
    return 0x10000;
  }
  FUN_10006070(iVar7,&param_2,&param_1);
  if (*(int *)(param_2 + 4) == (int)sVar1 - (int)sVar2) {
    iVar8 = *(int *)(param_2 + 8);
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    if (iVar8 == (int)sVar4 - (int)sVar3) {
      FUN_100072e0(iVar6,param_3,iVar7);
    }
  }
  return 0;
}


