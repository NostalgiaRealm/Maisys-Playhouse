
/* ==== FUN_0048e5c0 @ 0048e5c0 ==== 
 * signature: bool __thiscall FUN_0048e5c0(void * this, int param_1)
 * body: 0048e5c0-0048e5ff
 */

bool __thiscall FUN_0048e5c0(void *this,int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  pbVar4 = (byte *)((int)this + 9);
  pbVar2 = (byte *)(param_1 + 9);
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_0048e5ea:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_0048e5ef;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_0048e5ea;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_0048e5ef:
  return iVar3 == 0;
}


