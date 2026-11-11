
/* ==== FUN_0043fd70 @ 0043fd70 ==== 
 * signature: undefined4 __thiscall FUN_0043fd70(void * this, char param_1)
 * body: 0043fd70-0043fdae
 */

undefined4 __thiscall FUN_0043fd70(void *this,char param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  if ((*(int *)((int)this + 0x7e) == 0) && (param_1 != '\0')) {
    pcVar1 = *(code **)(*(int *)this + 0x244);
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      piVar3 = (int *)(*pcVar1)();
      iVar2 = FUN_0044a0b0(piVar3);
      *(int *)((int)this + 0x7e) = iVar2;
      FUN_00440330((int)this);
    }
  }
  return *(undefined4 *)((int)this + 0x7e);
}


