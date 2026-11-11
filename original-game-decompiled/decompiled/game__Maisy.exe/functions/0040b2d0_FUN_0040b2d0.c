
/* ==== FUN_0040b2d0 @ 0040b2d0 ==== 
 * signature: int * __thiscall FUN_0040b2d0(void * this, byte * param_1)
 * body: 0040b2d0-0040b34f
 */

int * __thiscall FUN_0040b2d0(void *this,byte *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  bool bVar7;
  byte local_104 [256];
  
  piVar3 = (int *)(**(code **)(*(int *)this + 0x188))();
  do {
    if (piVar3 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar2 = *piVar3;
    (**(code **)(iVar2 + 0x70))(local_104);
    pbVar4 = local_104;
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_0040b323:
        iVar5 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0040b328;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_0040b323;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_0040b328:
    if (iVar5 == 0) {
      return piVar3;
    }
    piVar3 = (int *)(**(code **)(iVar2 + 0x174))();
  } while( true );
}


