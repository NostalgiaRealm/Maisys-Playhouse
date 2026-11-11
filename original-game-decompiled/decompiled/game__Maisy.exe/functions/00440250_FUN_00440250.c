
/* ==== FUN_00440250 @ 00440250 ==== 
 * signature: undefined __thiscall FUN_00440250(void * this, char param_1)
 * body: 00440250-004402aa
 */

void __thiscall FUN_00440250(void *this,char param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  
  piVar3 = (int *)FUN_0041ed90((int)this);
  iVar1 = *piVar3;
  if (param_1 == '\0') {
    cVar2 = FUN_00440230(this,0x200);
    uVar4 = 0;
    if (cVar2 == '\0') goto LAB_00440281;
  }
  uVar4 = 1;
LAB_00440281:
  uVar4 = (**(code **)(*(int *)this + 0x210))(uVar4);
  (**(code **)(iVar1 + 0x78))(8,uVar4);
  FUN_004401e0(this,0x100,param_1);
  return;
}


