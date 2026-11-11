
/* ==== FUN_00460110 @ 00460110 ==== 
 * signature: undefined __cdecl FUN_00460110(int param_1, int param_2, int param_3, int param_4, byte * param_5)
 * body: 00460110-004601a6
 */

void __cdecl FUN_00460110(int param_1,int param_2,int param_3,int param_4,byte *param_5)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  short sVar4;
  
  sVar4 = 0;
  do {
    iVar1 = (int)sVar4;
    sVar4 = sVar4 + 1;
    pcVar2 = (char *)(param_3 + iVar1 * 4);
    pbVar3 = (byte *)(iVar1 * 4 + param_4);
    *pcVar2 = *param_5 + (char)((int)(((uint)*pbVar3 - (uint)*param_5) * param_1) / param_2);
    pcVar2[1] = param_5[1] + (char)((int)(((uint)pbVar3[1] - (uint)param_5[1]) * param_1) / param_2)
    ;
    pcVar2[2] = param_5[2] + (char)((int)(((uint)pbVar3[2] - (uint)param_5[2]) * param_1) / param_2)
    ;
  } while (sVar4 < 0x100);
  return;
}


