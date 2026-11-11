
/* ==== FUN_00419780 @ 00419780 ==== 
 * signature: undefined4 __thiscall FUN_00419780(void * this, int param_1)
 * body: 00419780-004197fa
 */

undefined4 __thiscall FUN_00419780(void *this,int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 local_18 [8];
  int local_10;
  
  iVar2 = (**(code **)(*(int *)this + 0x10))();
  if (param_1 == 0) {
    return 0x10001;
  }
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00466a90(iVar2);
    if (piVar3 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar3 + 0x108))(3);
      if (piVar3 != (int *)0x0) {
        cVar1 = (**(code **)(*piVar3 + 0x124))(0,param_1,local_18,1,0);
        if (cVar1 != '\0') {
          uVar4 = FUN_00419800(this,local_10);
          return uVar4;
        }
      }
    }
  }
  return 0x40003;
}


