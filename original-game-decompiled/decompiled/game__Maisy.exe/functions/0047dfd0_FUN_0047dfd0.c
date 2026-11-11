
/* ==== FUN_0047dfd0 @ 0047dfd0 ==== 
 * signature: undefined1 __thiscall FUN_0047dfd0(void * this, int param_1, int param_2, short * param_3, int * param_4)
 * body: 0047dfd0-0047e150
 */

undefined1 __thiscall FUN_0047dfd0(void *this,int param_1,int param_2,short *param_3,int *param_4)

{
  void *this_00;
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  short local_c [4];
  
  bVar1 = false;
  if (param_1 < 0xdf) {
    if (param_1 == 0xde) {
      if ((*(byte *)((int)this + 0x9c) & 2) == 0) {
        iVar4 = *(int *)this;
        (**(code **)(iVar4 + 0x358))(1,1);
        cVar2 = FUN_004413d0(*(int *)((int)this + 0x5a));
        if ((((cVar2 != '\0') && (*(int *)((int)this + 0x3a) != 0)) &&
            (*(char *)((int)this + 0x146) != '\0')) && (*(short *)((int)this + 300) != -1)) {
          (**(code **)(iVar4 + 0x38c))(local_c,1);
          FUN_004087c0(*(void **)((int)this + 0x3a),local_c,'\x01');
        }
      }
      goto LAB_0047e123;
    }
    if (((param_1 != 0xc9) || ((*(byte *)((int)this + 0x28) & 0x20) != 0)) ||
       (cVar2 = FUN_00440230(*(void **)((int)this + 0x5a),0x40), cVar2 == '\0')) goto LAB_0047e125;
    iVar4 = *(int *)this;
    (**(code **)(iVar4 + 0x140))(0);
    FUN_0044f650(this,'\0');
    (**(code **)(iVar4 + 0x2e0))();
    *(undefined2 *)((int)this + 0x46) = 3;
LAB_0047e053:
    iVar4 = *(int *)(*(int *)((int)this + 0x5a) + 0x9c);
    if (*param_3 != 0) {
      FUN_00416070(this,this,s_range_004d9f50,param_3,0);
    }
    if (iVar4 < 0) {
      FUN_00441330(*(void **)((int)this + 0x5a),-iVar4);
    }
    else {
      iVar4 = FUN_00441580(*(void **)((int)this + 0x5a));
      if (iVar4 == 0) {
LAB_0047e11b:
        FUN_0043ff10(*(int **)((int)this + 0x5a));
      }
    }
  }
  else {
    if (param_1 == 0x32f) goto LAB_0047e053;
    if (param_1 != 0x330) goto LAB_0047e125;
    this_00 = *(void **)((int)this + 0x5a);
    if (*(int *)((int)this_00 + 0x9c) < 1) {
      iVar4 = FUN_00441580(this_00);
      if (iVar4 != 0) goto LAB_0047e123;
      goto LAB_0047e11b;
    }
    FUN_00441330(this_00,-*(int *)((int)this_00 + 0x9c));
  }
LAB_0047e123:
  bVar1 = true;
LAB_0047e125:
  if (bVar1) {
    return 1;
  }
  uVar3 = FUN_0044fa80(this,param_1,param_2,param_3,param_4);
  return uVar3;
}


