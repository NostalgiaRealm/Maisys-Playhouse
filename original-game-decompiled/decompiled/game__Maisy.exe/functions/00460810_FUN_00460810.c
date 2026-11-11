
/* ==== FUN_00460810 @ 00460810 ==== 
 * signature: undefined __thiscall FUN_00460810(void * this, short param_1, int * param_2, char param_3)
 * body: 00460810-004609da
 */

void __thiscall FUN_00460810(void *this,short param_1,int *param_2,char param_3)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  void *this_00;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined2 local_8;
  
  if (param_2 != (int *)0x0) {
    switch(param_1) {
    case 3:
      if ((*(byte *)((int)param_2 + 0x1e) & 0x10) != 0) {
        if (param_3 != '\0') {
          (**(code **)(*(int *)this + 0x3d8))(param_2);
          return;
        }
        if (*(int **)((int)this + 0x136) == param_2) {
          (**(code **)(*(int *)this + 0x3d8))(0);
          return;
        }
      }
      break;
    case 5:
      if (((*(byte *)((int)param_2 + 0x1e) & 0x10) != 0) && (*(int *)((int)this + 0x5a) != 0)) {
        if (param_3 != '\0') {
          (**(code **)(*(int *)this + 0x338))();
          return;
        }
        (**(code **)(*(int *)this + 0x33c))(param_2);
        return;
      }
      break;
    case 6:
      if ((*(byte *)((int)param_2 + 0x1f) & 1) != 0) {
        if (param_3 == '\0') {
          piVar2 = (int *)(**(code **)(**(int **)((int)this + 0x5a) + 0x2c8))(0);
          if (piVar2 == param_2) {
            iVar3 = *(int *)this;
            pcVar1 = *(code **)(iVar3 + 0x314);
            (*pcVar1)(0);
            local_14 = DAT_004da338;
            local_10 = DAT_004da334;
            local_c = DAT_004da338;
            local_8 = 0;
            (**(code **)(iVar3 + 0x414))(&local_14);
            (**(code **)(**(int **)((int)this + 0x5a) + 0x254))(0);
            *(undefined4 *)((int)this + 0x13a) = 0;
            (*pcVar1)(0);
            return;
          }
        }
        else {
          piVar2 = (int *)(**(code **)(**(int **)((int)this + 0x5a) + 0x2c8))();
          if (piVar2 != param_2) {
            iVar3 = *(int *)this;
            (**(code **)(iVar3 + 0x314))(0);
            FUN_0048bea0(param_2,&local_14);
            (**(code **)(iVar3 + 0x414))(&local_14);
            (**(code **)(**(int **)((int)this + 0x5a) + 0x254))(param_2);
            *(int **)((int)this + 0x13a) = param_2;
            (**(code **)(iVar3 + 0x314))(0);
            return;
          }
        }
      }
      break;
    case 8:
    case 9:
      iVar3 = FUN_0040c620(this);
      if (iVar3 != 0) {
        this_00 = (void *)FUN_0040c620(this);
        FUN_00403bd0(this_00,param_1,this,param_3,param_2);
        return;
      }
      break;
    case 0xf:
      if (param_3 != '\0') {
        *(uint *)((int)this + 0x32) = *(uint *)((int)this + 0x32) | 1;
      }
    }
  }
  return;
}


