
/* ==== FUN_0046ddb0 @ 0046ddb0 ==== 
 * signature: undefined __thiscall FUN_0046ddb0(void * this, void * param_1)
 * body: 0046ddb0-0046de13
 */

void __thiscall FUN_0046ddb0(void *this,void *param_1)

{
  int *piVar1;
  int *piVar2;
  int local_14;
  uint local_e;
  
  piVar2 = (int *)0x0;
  do {
    FUN_00486e50(param_1,&local_14);
    piVar1 = (int *)FUN_00466aa0(*(void **)((int)this + 4),param_1,local_e,&local_14);
    if (piVar1 != (int *)0x0) {
      if (piVar2 == (int *)0x0) {
        (**(code **)(*(int *)this + 0x2b0))(piVar1,1);
        piVar2 = piVar1;
      }
      else {
        (**(code **)(*piVar2 + 0x2b4))(piVar1,0);
        piVar2 = piVar1;
      }
    }
  } while ((local_e & 8) == 0);
  return;
}


