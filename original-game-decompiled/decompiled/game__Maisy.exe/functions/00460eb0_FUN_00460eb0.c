
/* ==== FUN_00460eb0 @ 00460eb0 ==== 
 * signature: undefined __thiscall FUN_00460eb0(void * this, char param_1)
 * body: 00460eb0-00460f3c
 */

void __thiscall FUN_00460eb0(void *this,char param_1)

{
  undefined4 uVar1;
  int *piVar2;
  short local_c [4];
  
  if ((*(char *)((int)this + 0x146) != '\0') && (uVar1 = FUN_00460d70(this), (char)uVar1 == '\0')) {
    if ((param_1 == '\0') || (*(int *)((int)this + 0x3a) == 0)) {
      (**(code **)(*(int *)this + 0x424))(0);
    }
    else {
      (**(code **)(*(int *)this + 0x38c))(local_c,1);
      FUN_004087c0(*(void **)((int)this + 0x3a),local_c,'\x01');
    }
  }
  for (piVar2 = (int *)FUN_00469fb0(this); piVar2 != (int *)0x0;
      piVar2 = *(int **)((int)piVar2 + 0x6a)) {
    if ((*(uint *)((int)piVar2 + 0x1e) & 4) != 0) {
      (**(code **)(*piVar2 + 0x3e0))(param_1);
    }
  }
  return;
}


