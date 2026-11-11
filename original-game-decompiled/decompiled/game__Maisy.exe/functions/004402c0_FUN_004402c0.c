
/* ==== FUN_004402c0 @ 004402c0 ==== 
 * signature: undefined __thiscall FUN_004402c0(void * this, char param_1)
 * body: 004402c0-0044031a
 */

void __thiscall FUN_004402c0(void *this,char param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  
  piVar3 = (int *)FUN_0041ed90((int)this);
  iVar1 = *piVar3;
  if (param_1 == '\0') {
    cVar2 = FUN_00440230(this,0x100);
    uVar4 = 0;
    if (cVar2 == '\0') goto LAB_004402f1;
  }
  uVar4 = 1;
LAB_004402f1:
  uVar4 = (**(code **)(*(int *)this + 0x210))(uVar4);
  (**(code **)(iVar1 + 0x78))(8,uVar4);
  FUN_004401e0(this,0x200,param_1);
  return;
}


