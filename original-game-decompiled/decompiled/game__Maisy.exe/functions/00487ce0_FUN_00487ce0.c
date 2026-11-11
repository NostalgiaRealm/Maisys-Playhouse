
/* ==== FUN_00487ce0 @ 00487ce0 ==== 
 * signature: undefined __thiscall FUN_00487ce0(void * this, short param_1, int * param_2, char param_3)
 * body: 00487ce0-00487dbc
 */

void __thiscall FUN_00487ce0(void *this,short param_1,int *param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  
  FUN_00460810(this,param_1,param_2,param_3);
  if (((param_2 != (int *)0x0) && (param_1 == 7)) && ((*(byte *)((int)param_2 + 0x1e) & 0x10) != 0))
  {
    if (param_3 == '\0') {
      piVar1 = (int *)FUN_00488410(*(int *)((int)this + 0x5a));
      if (piVar1 == param_2) {
        iVar2 = (**(code **)(**(int **)((int)this + 0x5a) + 0x2c8))(0);
        if (iVar2 == 0) {
          *(undefined4 *)((int)this + 0x124) = 0xfefefe;
        }
        FUN_00488400(*(void **)((int)this + 0x5a),0);
        (**(code **)(*(int *)this + 0x314))(1);
      }
    }
    else {
      piVar1 = (int *)FUN_00488410(*(int *)((int)this + 0x5a));
      if (piVar1 != param_2) {
        iVar2 = (**(code **)(**(int **)((int)this + 0x5a) + 0x2c8))(0);
        if (iVar2 == 0) {
          *(undefined4 *)((int)this + 0x124) = DAT_004da334;
        }
        FUN_00488400(*(void **)((int)this + 0x5a),param_2);
        (**(code **)(*(int *)this + 0x314))(1);
        return;
      }
    }
  }
  return;
}


