
/* ==== FUN_100108e9 @ 100108e9 ==== 
 * signature: undefined4 __cdecl FUN_100108e9(byte * param_1, LPCSTR param_2)
 * body: 100108e9-1001094f
 */

undefined4 __cdecl FUN_100108e9(byte *param_1,LPCSTR param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  
  iVar2 = lstrlenA(param_2);
  iVar4 = 0;
  bVar1 = *param_1;
  pbVar5 = param_1;
  while( true ) {
    if (bVar1 == 0) {
      return 1;
    }
    iVar3 = FUN_1001b090(pbVar5,param_2,iVar2);
    if (((iVar3 == 0) &&
        (((bVar1 = pbVar5[-1], bVar1 == 0x20 || (bVar1 == 0x3b)) || (bVar1 == 0x3d)))) &&
       (((bVar1 = param_1[iVar2 + iVar4], bVar1 == 0x20 || (bVar1 == 0x3b)) || (bVar1 == 0))))
    break;
    iVar4 = iVar4 + 1;
    pbVar5 = pbVar5 + 1;
    bVar1 = *pbVar5;
  }
  return 0;
}


