
/* ==== FUN_0040de40 @ 0040de40 ==== 
 * signature: undefined __thiscall FUN_0040de40(void * this, byte * param_1)
 * body: 0040de40-0040defd
 */

void __thiscall FUN_0040de40(void *this,byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  byte local_104 [256];
  
  iVar6 = 0;
  (**(code **)(*(int *)this + 0x160))(0xb,1);
  if (param_1 != (byte *)0x0) {
    (**(code **)(*(int *)this + 0x70))(local_104);
    pbVar5 = local_104;
    pbVar2 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_0040de99:
        iVar6 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0040de9e;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_0040de99;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_0040de9e:
    if (iVar6 == 0) {
      return;
    }
    uVar4 = 0xffffffff;
    pbVar5 = param_1;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
    iVar6 = ~uVar4 - 1;
  }
  if (*(LPVOID *)((int)this + 0x5a) != (LPVOID)0x0) {
    FUN_0043f6d0(*(LPVOID *)((int)this + 0x5a));
    *(undefined4 *)((int)this + 0x5a) = 0;
  }
  if ((param_1 != (byte *)0x0) && (iVar6 != 0)) {
    if (0xff < iVar6) {
      param_1[0xff] = 0;
    }
    pcVar3 = FUN_0043f650((char *)param_1);
    *(char **)((int)this + 0x5a) = pcVar3;
  }
  (**(code **)(*(int *)this + 0x1c))(1);
  return;
}


