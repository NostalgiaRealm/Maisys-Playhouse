
/* ==== FUN_10009d0d @ 10009d0d ==== 
 * signature: undefined __cdecl FUN_10009d0d(byte * param_1)
 * body: 10009d0d-10009ea3
 */

void __cdecl FUN_10009d0d(byte *param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte local_108 [256];
  undefined4 local_8;
  
  bVar2 = *param_1;
  pbVar6 = param_1;
  while (bVar2 == 0x20) {
    pbVar6 = pbVar6 + 1;
    bVar2 = *pbVar6;
  }
  FUN_1001488c((LPSTR)pbVar6,(uint *)&DAT_1001f6f4);
  lstrcpyA((LPSTR)local_108,(LPCSTR)pbVar6);
  lstrcpyA((LPSTR)param_1,(LPCSTR)local_108);
  if (DAT_100241e8 == 0) {
    bVar2 = *param_1;
    pbVar6 = param_1;
    while (bVar2 != 0) {
      if (*pbVar6 == 0x20) {
        *pbVar6 = 0x5f;
      }
      pbVar6 = (byte *)CharNextA((LPCSTR)pbVar6);
      bVar2 = *pbVar6;
    }
  }
  iVar3 = FUN_1001b090(param_1,&DAT_1001f6ac,2);
  if (iVar3 == 0) {
    return;
  }
  bVar1 = false;
  bVar2 = *param_1;
  pbVar6 = param_1;
  while (((bVar2 != 0 && (bVar2 != 0x3a)) && (bVar2 != 0x5c))) {
    pbVar6 = (byte *)CharNextA((LPCSTR)pbVar6);
    bVar2 = *pbVar6;
  }
  if (*pbVar6 != 0) {
    if (*pbVar6 == 0x3a) {
      bVar1 = true;
      pbVar6 = pbVar6 + 1;
      goto LAB_10009dc5;
    }
    if (pbVar6 == param_1) goto LAB_10009dc5;
  }
  pbVar6 = param_1;
LAB_10009dc5:
  if (*pbVar6 != 0x5c) {
    lstrcpyA((LPSTR)local_108,(LPCSTR)pbVar6);
    lstrcpyA((LPSTR)pbVar6,&DAT_1001f314);
    lstrcpyA((LPSTR)(pbVar6 + 1),(LPCSTR)local_108);
  }
  iVar3 = 0;
  if (!bVar1) {
    lstrcpyA((LPSTR)local_108,(LPCSTR)param_1);
    pbVar6 = local_108;
    iVar4 = FUN_100164b0();
    wsprintfA((LPSTR)param_1,s__c__s_1001f6ec,iVar4 + 0x40,pbVar6);
  }
  iVar4 = lstrlenA((LPCSTR)param_1);
  if (iVar4 < 4) {
    param_1[2] = 0;
  }
  else if (DAT_100241e8 == 0) {
    bVar1 = false;
    pbVar6 = local_108;
    bVar2 = *param_1;
    pbVar5 = param_1;
    while (bVar2 != 0) {
      if ((((iVar3 < 3) || ((iVar3 < 8 && (!bVar1)))) || (bVar2 = *pbVar5, bVar2 == 0x5c)) ||
         (bVar2 == 0x2e)) {
        bVar2 = *pbVar5;
        *pbVar6 = bVar2;
        pbVar6 = pbVar6 + 1;
        iVar3 = iVar3 + 1;
      }
      if (bVar2 == 0x5c) {
        local_8 = 0;
        bVar1 = false;
        iVar3 = 0;
      }
      if (bVar2 == 0x2e) {
        bVar1 = true;
        iVar3 = 0;
      }
      pbVar5 = pbVar5 + 1;
      bVar2 = *pbVar5;
    }
    *pbVar6 = 0;
    lstrcpyA((LPSTR)param_1,(LPCSTR)local_108);
  }
  return;
}


