
/* ==== FUN_10014712 @ 10014712 ==== 
 * signature: undefined __cdecl FUN_10014712(int param_1, byte * param_2, int * param_3)
 * body: 10014712-100147f9
 */

void __cdecl FUN_10014712(int param_1,byte *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  
  iVar4 = lstrlenA((LPCSTR)param_2);
  *param_3 = iVar4 + 1;
  if (param_1 == 3) {
    iVar4 = FUN_10016190(param_2);
    *(int *)param_2 = iVar4;
    *param_3 = 4;
  }
  else if (param_1 == 2) {
    bVar3 = *param_2;
    while (bVar3 != 0) {
      if (*param_2 == 0x7f) {
        *param_2 = 0;
      }
      param_2 = param_2 + 1;
      bVar3 = *param_2;
    }
    param_2[1] = 0;
  }
  else if (param_1 == 4) {
    bVar2 = false;
    param_1 = 0;
    *param_3 = 0;
    for (pbVar6 = param_2; *pbVar6 != 0; pbVar6 = pbVar6 + 1) {
      uVar5 = FUN_10015b60((int)(char)*pbVar6);
      bVar3 = (byte)uVar5;
      *pbVar6 = bVar3;
      if (DAT_100200d4 < 2) {
        uVar5 = (byte)PTR_DAT_1001fec8[(char)bVar3 * 2] & 4;
      }
      else {
        uVar5 = FUN_10015ac0((int)(char)bVar3,4);
      }
      if ((uVar5 != 0) || (('@' < (char)*pbVar6 && ((char)*pbVar6 < 'G')))) {
        bVar3 = *pbVar6;
        if (bVar2) {
          if ((char)bVar3 < ':') {
            cVar1 = -0x30;
          }
          else {
            cVar1 = -0x37;
          }
          *param_2 = param_1._3_1_ << 4 | bVar3 + cVar1;
          *param_3 = *param_3 + 1;
          bVar2 = false;
          param_2 = param_2 + 1;
        }
        else {
          if ((char)bVar3 < ':') {
            bVar3 = bVar3 - 0x30;
          }
          else {
            bVar3 = bVar3 - 0x37;
          }
          param_1 = (uint)bVar3 << 0x18;
          bVar2 = true;
        }
      }
    }
  }
  return;
}


