
/* ==== FUN_00424040 @ 00424040 ==== 
 * signature: int * __thiscall FUN_00424040(void * this, byte * param_1)
 * body: 00424040-004240b2
 */

int * __thiscall FUN_00424040(void *this,byte *param_1)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  byte local_104 [256];
  
  piVar2 = (int *)FUN_004246a0((int)this);
  do {
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    (**(code **)(*piVar2 + 0x70))(local_104);
    pbVar3 = local_104;
    pbVar5 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_0042408f:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_00424094;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_0042408f;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00424094:
    if (iVar4 == 0) {
      return piVar2;
    }
    piVar2 = *(int **)((int)piVar2 + 0x3e);
  } while( true );
}


