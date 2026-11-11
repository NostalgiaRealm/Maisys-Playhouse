
/* ==== FUN_0044dd40 @ 0044dd40 ==== 
 * signature: undefined __thiscall FUN_0044dd40(void * this, int param_1, undefined4 param_2, undefined4 param_3)
 * body: 0044dd40-0044dd80
 */

void __thiscall FUN_0044dd40(void *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  if (0 < param_1) {
    iVar1 = FUN_0044e340((int)this);
    if (param_1 <= iVar1) {
      piVar2 = FUN_0044db20(this,param_1,0,'\x01','\0');
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x1c8))(param_2,param_3);
      }
    }
  }
  return;
}


