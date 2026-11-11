
/* ==== FUN_00417830 @ 00417830 ==== 
 * signature: undefined4 __cdecl FUN_00417830(int param_1, HPSTR param_2, LONG param_3, int * param_4)
 * body: 00417830-004178a2
 */

undefined4 __cdecl FUN_00417830(int param_1,HPSTR param_2,LONG param_3,int *param_4)

{
  int *this;
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)FUN_0048b560(0,param_1);
  this = (int *)*puVar2;
  if (this != (int *)0x0) {
    cVar1 = (**(code **)(*this + 0x238))();
    if (*param_4 < 0) {
      iVar3 = (**(code **)(*this + 0x1b4))();
      *param_4 = iVar3;
    }
    FUN_0040e0e0(this,param_3);
    FUN_0040e180(this,param_2,*param_4);
    if (cVar1 == '\0') {
      (**(code **)(*this + 0x19c))();
    }
    return 0;
  }
  return 0x10000;
}


