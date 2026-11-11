
/* ==== FUN_00461ef0 @ 00461ef0 ==== 
 * signature: undefined __thiscall FUN_00461ef0(void * this, int * param_1, char param_2)
 * body: 00461ef0-00461fbd
 */

void __thiscall FUN_00461ef0(void *this,int *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar3 = *(int *)this;
  cVar1 = (**(code **)(iVar3 + 0x35c))();
  if (cVar1 == '\0') {
    FUN_0044b310(*(int *)((int)this + 0x5a));
    if ((*(int *)((int)this + 0x11c) != 0) &&
       (pcVar2 = (char *)(*(int *)((int)this + 0x11c) + 2), *pcVar2 != '\0')) {
      FUN_0047bce0(pcVar2);
    }
  }
  if (((param_2 != '\0') && ((*(byte *)((int)this + 0x9c) & 0x20) == 0)) &&
     (*(short *)((int)this + 0xec) == 1)) {
    (**(code **)(iVar3 + 0x38c))(&local_c,1);
    if (*(HRGN *)((int)this + 0xf6) != (HRGN)0x0) {
      OffsetRgn(*(HRGN *)((int)this + 0xf6),(int)(short)local_c,(int)local_c._2_2_);
    }
    *(byte *)((int)this + 0x9c) = *(byte *)((int)this + 0x9c) | 0x20;
    *(undefined4 *)((int)this + 0xee) = local_c;
    *(undefined4 *)((int)this + 0xf2) = local_8;
    if (*(int *)((int)this + 0x11c) != 0) {
      *(short *)(*(int *)((int)this + 0x11c) + 0x24) = (short)local_c;
      *(short *)(*(int *)((int)this + 0x11c) + 0x26) = local_c._2_2_;
    }
  }
  piVar4 = (int *)((int)this + 0xec);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *piVar4;
    piVar4 = piVar4 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


