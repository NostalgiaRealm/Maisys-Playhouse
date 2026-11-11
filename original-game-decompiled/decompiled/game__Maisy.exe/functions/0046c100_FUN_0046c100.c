
/* ==== FUN_0046c100 @ 0046c100 ==== 
 * signature: undefined __thiscall FUN_0046c100(void * this, byte * param_1)
 * body: 0046c100-0046c1b8
 */

void __thiscall FUN_0046c100(void *this,byte *param_1)

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
  if (param_1 != (byte *)0x0) {
    (**(code **)(*(int *)this + 0x70))(local_104);
    pbVar5 = local_104;
    pbVar2 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_0046c14b:
        iVar6 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0046c150;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_0046c14b;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_0046c150:
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
  if (*(LPVOID *)((int)this + 0x2e) != (LPVOID)0x0) {
    FUN_0043f6d0(*(LPVOID *)((int)this + 0x2e));
    *(undefined4 *)((int)this + 0x2e) = 0;
  }
  if ((param_1 != (byte *)0x0) && (iVar6 != 0)) {
    if (0xff < iVar6) {
      param_1[0xff] = 0;
    }
    pcVar3 = FUN_0043f650((char *)param_1);
    *(char **)((int)this + 0x2e) = pcVar3;
  }
  if (DAT_004dbdc4 == '\0') {
    (**(code **)(*(int *)this + 0x1c))(1);
  }
  return;
}


