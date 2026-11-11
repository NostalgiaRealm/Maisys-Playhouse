
/* ==== FUN_00411830 @ 00411830 ==== 
 * signature: undefined __thiscall FUN_00411830(void * this, int param_1, int param_2)
 * body: 00411830-004118ba
 */

void __thiscall FUN_00411830(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if ((0 < param_1) && (param_2 != 0)) {
    piVar1 = (int *)FUN_004119c0(this,param_1,param_2);
    iVar2 = FUN_004119c0(this,*piVar1,param_2);
    piVar3 = (int *)FUN_004119c0(this,piVar1[1],param_2);
    *(int *)(iVar2 + 4) = piVar1[1];
    *piVar3 = *piVar1;
    if (*(int *)this == param_1) {
      *(int *)this = *piVar1;
    }
    if (*(int *)((int)this + 4) == param_1) {
      *(int *)((int)this + 4) = piVar1[1];
    }
    if (*(int *)this == param_1) {
      *(undefined4 *)((int)this + 4) = 0;
      *(undefined4 *)this = 0;
    }
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  return;
}


