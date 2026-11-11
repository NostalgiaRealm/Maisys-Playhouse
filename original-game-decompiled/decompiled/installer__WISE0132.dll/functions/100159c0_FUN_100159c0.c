
/* ==== FUN_100159c0 @ 100159c0 ==== 
 * signature: int __cdecl FUN_100159c0(byte * param_1)
 * body: 100159c0-10015a4d
 */

int __cdecl FUN_100159c0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  LPWSTR pWVar4;
  byte *pbVar5;
  int *piVar6;
  byte *pbVar7;
  
  if (((DAT_100233b0 != (int *)0x0) ||
      (((DAT_100233b8 == 0 || (iVar2 = FUN_10016fe0(), iVar2 == 0)) && (DAT_100233b0 != (int *)0x0))
      )) && (param_1 != (byte *)0x0)) {
    uVar3 = 0xffffffff;
    pbVar5 = (byte *)*DAT_100233b0;
    pbVar7 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar1 != 0);
    pWVar4 = (LPWSTR)(~uVar3 - 1);
    piVar6 = DAT_100233b0;
    if (pbVar5 != (byte *)0x0) {
      do {
        uVar3 = 0xffffffff;
        pbVar7 = pbVar5;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar1 != 0);
        if (((pWVar4 < (LPWSTR)(~uVar3 - 1)) && (*(byte *)((int)pWVar4 + (int)pbVar5) == 0x3d)) &&
           (iVar2 = FUN_10016fa0(pbVar5,param_1,pWVar4), iVar2 == 0)) {
          return *piVar6 + 1 + (int)pWVar4;
        }
        pbVar5 = (byte *)piVar6[1];
        piVar6 = piVar6 + 1;
        if (pbVar5 == (byte *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


