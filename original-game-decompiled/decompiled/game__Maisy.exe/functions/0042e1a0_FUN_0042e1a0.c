
/* ==== FUN_0042e1a0 @ 0042e1a0 ==== 
 * signature: undefined __thiscall FUN_0042e1a0(void * this, char param_1, undefined4 param_2)
 * body: 0042e1a0-0042e273
 */

void __thiscall FUN_0042e1a0(void *this,char param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  void *this_00;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  
  *(uint *)((int)this + 0x7e) = *(uint *)((int)this + 0x7e) & 0x7fffffff;
  *(byte *)((int)this + 0x10) = *(byte *)((int)this + 0x10) | 8;
  cVar2 = DAT_004dbdc4;
  iVar1 = *(int *)this;
  this_00 = (void *)(**(code **)(iVar1 + 0x10))();
  DAT_004dbdc4 = (char)param_2 == '\0';
  (**(code **)(iVar1 + 0x188))();
  if (this_00 != (void *)0x0) {
    sVar7 = 0;
    uVar3 = FUN_0045a510((int)this_00);
    iVar6 = (int)(short)uVar3;
    if (0 < iVar6) {
      do {
        piVar4 = FUN_0045a920(this_00,sVar7);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 8))(1,param_2);
          piVar5 = (int *)FUN_00458a10(this_00,sVar7 + 1);
          if (piVar5 == piVar4) {
            sVar8 = sVar7 + 1;
            sVar7 = sVar7 + 1;
            FUN_00458a30(this_00,sVar8,0);
          }
        }
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  if (DAT_004dbdc4 != cVar2) {
    DAT_004dbdc4 = cVar2;
  }
  if (param_1 != '\0') {
    (**(code **)(iVar1 + 4))();
    return;
  }
  *(undefined4 *)((int)this + 0x4e) = 0;
  *(undefined4 *)((int)this + 0x6e) = 0;
  return;
}


