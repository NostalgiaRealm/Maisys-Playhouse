
/* ==== FUN_00406240 @ 00406240 ==== 
 * signature: undefined __thiscall FUN_00406240(void * this, int * param_1)
 * body: 00406240-004063aa
 */

void __thiscall FUN_00406240(void *this,int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  short sVar7;
  
  cVar2 = (**(code **)(**(int **)((int)this + 0x2a) + 0x104))();
  if ((cVar2 == '\0') && (*param_1 == 3)) {
    FUN_004061e0(this,param_1);
    sVar7 = 0;
    do {
      iVar3 = (int)sVar7;
      sVar7 = sVar7 + 1;
      *(int *)(*(int *)((int)this + 0x38) + iVar3 * 4) = param_1[iVar3];
    } while (sVar7 < 4);
    piVar4 = (int *)FUN_00459fc0(*(void **)((int)this + 0x2a),*(int **)((int)this + 0x38));
    if (piVar4 == (int *)0x0) {
      *(undefined4 *)((int)this + 0x9e) = 0;
      *(undefined4 *)((int)this + 0x9a) = 0;
      *(undefined1 *)((int)this + 0xa6) = 0;
    }
    else {
      piVar5 = (int *)FUN_0046ca90((int)piVar4);
      piVar6 = (int *)(**(code **)(*piVar5 + 0x338))();
      piVar5 = *(int **)((int)this + 0x9a);
      piVar1 = *(int **)((int)this + 0x9e);
      *(int **)((int)this + 0x9e) = piVar6;
      *(int **)((int)this + 0x9a) = piVar4;
      if (((piVar6 != (int *)0x0) && (piVar1 != (int *)0x0)) && (piVar1 != piVar6)) {
        cVar2 = (**(code **)(*piVar1 + 0x160))();
        if (cVar2 == '\0') {
          FUN_00405d20(this,piVar1);
        }
      }
      if ((piVar5 != (int *)0x0) && (piVar4 != piVar5)) {
        cVar2 = (**(code **)(*piVar5 + 0x160))();
        if (cVar2 == '\0') {
          FUN_00405d20(this,piVar5);
        }
      }
      if (*(int **)((int)this + 0x9e) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x9e) + 0x284))(1);
      }
      if (*(int **)((int)this + 0x9a) != (int *)0x0) {
        (**(code **)(**(int **)((int)this + 0x9a) + 0x284))(1);
      }
      *(undefined1 *)((int)this + 0xa6) = 1;
    }
    FUN_00402dc0(*(int *)((int)this + 0x52));
    FUN_0042fc00(*(void **)((int)this + 0x52));
    FUN_00402dc0(*(int *)((int)this + 0x56));
    FUN_0042fc00(*(void **)((int)this + 0x56));
    FUN_00430640(*(int *)((int)this + 0x6a));
    FUN_0042fc00(*(void **)((int)this + 0x82));
    *(undefined1 *)((int)this + 0xa7) = 1;
    FUN_004105c0(*(int *)((int)this + 0x8e));
  }
  return;
}


