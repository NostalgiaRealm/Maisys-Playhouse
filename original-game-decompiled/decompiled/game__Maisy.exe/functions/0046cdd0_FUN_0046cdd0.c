
/* ==== FUN_0046cdd0 @ 0046cdd0 ==== 
 * signature: int * __thiscall FUN_0046cdd0(void * this, byte * param_1)
 * body: 0046cdd0-0046ce8d
 */

int * __thiscall FUN_0046cdd0(void *this,byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  bool bVar6;
  
  if (param_1 == (byte *)0x0) {
    return (int *)0x0;
  }
  if (((*(byte *)((int)this + 0x29) & 0x80) == 0) &&
     (pbVar2 = (byte *)(**(code **)(*(int *)this + 0x114))(), pbVar5 = param_1,
     pbVar2 != (byte *)0x0)) {
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_0046ce1c:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_0046ce21;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_0046ce1c;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_0046ce21:
    if (iVar3 == 0) {
      return this;
    }
  }
  piVar4 = (int *)FUN_00469fb0(this);
  do {
    if (piVar4 == (int *)0x0) {
      return (int *)0x0;
    }
    if (((*(byte *)((int)piVar4 + 0x29) & 0x80) == 0) &&
       (pbVar2 = (byte *)(**(code **)(*piVar4 + 0x114))(), pbVar5 = param_1, pbVar2 != (byte *)0x0))
    {
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_0046ce70:
          iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_0046ce75;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_0046ce70;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_0046ce75:
      if (iVar3 == 0) {
        return piVar4;
      }
    }
    piVar4 = *(int **)((int)piVar4 + 0x6a);
  } while( true );
}


