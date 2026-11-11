
/* ==== FUN_1000_037c @ 1000:037c ==== 
 * signature: undefined __cdecl16near FUN_1000_037c(void)
 * body: 1000:037c-1000:039d
 */

uint __cdecl16near FUN_1000_037c(void)

{
  byte *pbVar1;
  byte bVar3;
  uint uVar2;
  int iVar4;
  byte *pbVar5;
  undefined2 unaff_DS;
  
  pbVar5 = (byte *)0x0;
  iVar4 = 0x42;
  bVar3 = 0;
  do {
    pbVar1 = pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar3 = bVar3 ^ *pbVar1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar2 = CONCAT11(bVar3,*pbVar1) ^ 0x5500;
  if (bVar3 != 0x55) {
    FUN_1000_033e();
    FUN_1000_05d1(1);
    uVar2 = 1;
  }
  return uVar2;
}


