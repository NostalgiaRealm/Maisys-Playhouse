
/* ==== FUN_110162a0 @ 110162a0 ==== 
 * signature: undefined __cdecl FUN_110162a0(byte * param_1, short * param_2, int param_3, HRGN param_4, int param_5)
 * body: 110162a0-11016362
 */

void __cdecl FUN_110162a0(byte *param_1,short *param_2,int param_3,HRGN param_4,int param_5)

{
  short sVar1;
  short sVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int local_4;
  
  if (param_4 == (HRGN)0x0) {
    sVar1 = param_2[2];
    sVar2 = *param_2;
    iVar4 = (int)param_2[3] - (int)param_2[1];
    if (0 < iVar4) {
      do {
        iVar5 = (int)sVar1 - (int)sVar2;
        pbVar6 = param_1;
        if (0 < (int)sVar1 - (int)sVar2) {
          do {
            iVar5 = iVar5 + -1;
            param_1 = pbVar6 + 1;
            *pbVar6 = *(byte *)((uint)*pbVar6 + param_5);
            pbVar6 = param_1;
          } while (iVar5 != 0);
        }
        iVar4 = iVar4 + -1;
        param_1 = param_1 + param_3;
      } while (iVar4 != 0);
    }
  }
  else {
    local_4 = (int)param_2[1];
    if (local_4 < param_2[3]) {
      do {
        iVar4 = (int)*param_2;
        if (iVar4 < param_2[2]) {
          do {
            BVar3 = PtInRegion(param_4,iVar4,local_4);
            if (BVar3 != 0) {
              *param_1 = *(byte *)((uint)*param_1 + param_5);
            }
            iVar4 = iVar4 + 1;
            param_1 = param_1 + 1;
          } while (iVar4 < param_2[2]);
        }
        param_1 = param_1 + param_3;
        local_4 = local_4 + 1;
      } while (local_4 < param_2[3]);
      return;
    }
  }
  return;
}


