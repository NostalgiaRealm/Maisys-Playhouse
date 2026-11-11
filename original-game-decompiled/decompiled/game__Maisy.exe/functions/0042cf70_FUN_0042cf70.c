
/* ==== FUN_0042cf70 @ 0042cf70 ==== 
 * signature: undefined __thiscall FUN_0042cf70(void * this, char * param_1)
 * body: 0042cf70-0042cffc
 */

void __thiscall FUN_0042cf70(void *this,char *param_1)

{
  char cVar1;
  int iVar2;
  void *this_00;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  short sVar8;
  
  if (*(int *)((int)this + 0x2a) != 0) {
    piVar5 = (int *)0x0;
    if ((*(short *)((int)this + 0x36) != 0) && (*(int *)((int)this + 4) != 0)) {
      iVar2 = FUN_00466a80(*(int *)((int)this + 4));
      if (iVar2 != 0) {
        sVar8 = *(short *)((int)this + 0x36);
        this_00 = (void *)FUN_00466a80(*(int *)((int)this + 4));
        piVar5 = (int *)FUN_00450230(this_00,sVar8);
      }
    }
    if ((piVar5 != (int *)0x0) && (piVar5 != this)) {
      (**(code **)(*piVar5 + 0x70))(param_1);
      return;
    }
  }
  if (*(char **)((int)this + 0x2e) == (char *)0x0) {
    *param_1 = '\0';
    return;
  }
  uVar3 = 0xffffffff;
  pcVar6 = *(char **)((int)this + 0x2e);
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar7 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    param_1 = param_1 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


