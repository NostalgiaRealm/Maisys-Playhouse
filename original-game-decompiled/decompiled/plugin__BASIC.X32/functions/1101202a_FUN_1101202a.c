
/* ==== FUN_1101202a @ 1101202a ==== 
 * signature: undefined __fastcall FUN_1101202a(int * param_1, int param_2)
 * body: 1101202a-1101202b
 */

void __fastcall FUN_1101202a(int *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  char cVar4;
  uint in_EAX;
  byte *pbVar5;
  undefined3 uVar6;
  byte unaff_BL;
  int unaff_EBP;
  byte *unaff_EDI;
  
  *unaff_EDI = *unaff_EDI ^ unaff_BL;
  *param_1 = *param_1 + param_2;
  *param_1 = *param_1 + param_2;
  *param_1 = *param_1 + param_2;
  pcVar2 = *(char **)unaff_EDI;
  *(int *)(unaff_EBP + 0x20) = (int)(unaff_EDI + *(int *)(unaff_EBP + 0x20));
  *param_1 = *param_1 + param_2;
  *param_1 = *param_1 + param_2;
  iVar1 = iRamc111011f + param_2 * 2;
  pbVar5 = (byte *)(in_EAX & 0xffffff20);
  iRamc111011f._0_1_ = (char)iVar1;
  iRamc111011f = CONCAT31((int3)((uint)iVar1 >> 8),(char)iRamc111011f + (char)pbVar5);
  *pbVar5 = *pbVar5 | 0x1f;
  uVar6 = (undefined3)((uint)pbVar5 >> 8);
  cVar4 = (char)pbVar5 + *pcVar2;
  pbVar5 = (byte *)CONCAT31(uVar6,cVar4);
  *pbVar5 = *pbVar5 | 0x1f;
  pbVar5 = (byte *)CONCAT31(uVar6,cVar4 + '\b');
  *pbVar5 = *pbVar5 | 0x1f;
  *pbVar5 = *pbVar5 | 0x1f;
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


