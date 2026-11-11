
/* ==== FUN_004211b0 @ 004211b0 ==== 
 * signature: undefined __thiscall FUN_004211b0(void * this, int param_1, int param_2, short param_3)
 * body: 004211b0-0042122f
 */

void __thiscall FUN_004211b0(void *this,int param_1,int param_2,short param_3)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)this;
  (**(code **)(iVar1 + 0x114))();
  cVar2 = (**(code **)(iVar1 + 0xec))();
  if ((cVar2 != '\0') && (*(int *)((int)this + 0x152) != 0)) {
    (**(code **)(iVar1 + 0xc4))(0,param_3);
    *(int *)((int)this + 0x1d6) = param_1;
    *(int *)((int)this + 0x1da) = param_2;
    *(undefined1 *)((int)this + 0x1de) = 1;
    if (param_1 < *(short *)((int)this + 0x176)) {
      do {
        if (param_2 < param_1) break;
        FUN_00420e80(this,param_1,param_3);
        param_1 = param_1 + 1;
      } while (param_1 < *(short *)((int)this + 0x176));
    }
    *(undefined1 *)((int)this + 0x1de) = 0;
  }
  return;
}


