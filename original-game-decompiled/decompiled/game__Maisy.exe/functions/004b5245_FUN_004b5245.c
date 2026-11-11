
/* ==== FUN_004b5245 @ 004b5245 ==== 
 * signature: undefined __stdcall FUN_004b5245(CString * param_1, byte * param_2, int param_3, int param_4)
 * body: 004b5245-004b5320
 */

void FUN_004b5245(CString *param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  LPCSTR pCVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar6 = 0;
  bVar1 = *param_2;
  pbVar5 = param_2;
  while (bVar1 != 0) {
    if (((*pbVar5 == 0x25) && (bVar1 = pbVar5[1], '0' < (char)bVar1)) && ((char)bVar1 < ':')) {
      pbVar5 = pbVar5 + 2;
      if (param_4 <= (char)bVar1 + -0x31) goto LAB_004b529b;
      pCVar3 = *(LPCSTR *)(param_3 + ((char)bVar1 + -0x31) * 4);
      if (pCVar3 != (LPCSTR)0x0) {
        iVar4 = lstrlenA(pCVar3);
        iVar6 = iVar6 + iVar4;
      }
    }
    else {
      if ((*(byte *)((int)&DAT_004de1f0 + *pbVar5 + 1) & 4) != 0) {
        iVar6 = iVar6 + 1;
        pbVar5 = pbVar5 + 1;
      }
      pbVar5 = pbVar5 + 1;
LAB_004b529b:
      iVar6 = iVar6 + 1;
    }
    bVar1 = *pbVar5;
  }
  pbVar5 = (byte *)FUN_004ac16a(param_1,iVar6);
  bVar1 = *param_2;
  do {
    if (bVar1 == 0) {
      CString::ReleaseBuffer(param_1,(int)pbVar5 - *(int *)param_1);
      return;
    }
    bVar1 = *param_2;
    if (((bVar1 == 0x25) && (bVar2 = param_2[1], '0' < (char)bVar2)) && ((char)bVar2 < ':')) {
      param_2 = param_2 + 2;
      if (param_4 <= (char)bVar2 + -0x31) {
        *pbVar5 = 0x3f;
        goto LAB_004b530a;
      }
      pCVar3 = *(LPCSTR *)(param_3 + ((char)bVar2 + -0x31) * 4);
      if (pCVar3 != (LPCSTR)0x0) {
        lstrcpyA((LPSTR)pbVar5,pCVar3);
        iVar6 = lstrlenA((LPCSTR)pbVar5);
        pbVar5 = pbVar5 + iVar6;
      }
    }
    else {
      if ((*(byte *)((int)&DAT_004de1f0 + bVar1 + 1) & 4) != 0) {
        param_2 = param_2 + 1;
        *pbVar5 = bVar1;
        pbVar5 = pbVar5 + 1;
      }
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      *pbVar5 = bVar1;
LAB_004b530a:
      pbVar5 = pbVar5 + 1;
    }
    bVar1 = *param_2;
  } while( true );
}


