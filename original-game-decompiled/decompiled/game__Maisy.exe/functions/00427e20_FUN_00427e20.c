
/* ==== FUN_00427e20 @ 00427e20 ==== 
 * signature: uint __thiscall FUN_00427e20(void * this, int * param_1)
 * body: 00427e20-00427eaa
 */

uint __thiscall FUN_00427e20(void *this,int *param_1)

{
  DWORD DVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (*(int *)((int)param_1 + 0x1a) != 0)) {
    DVar1 = timeGetTime();
    uVar2 = ((int)((uint)*(byte *)((int)this + 0xf6) *
                   ((int)(*(int *)((int)this + 0xe2) + (*(int *)((int)this + 0xe2) >> 0x1f & 7U)) >>
                   3) * *(int *)((int)this + 0xe6)) / 0x3c) *
            ((DVar1 * 6) / 100 - *(int *)((int)param_1 + 0x1a)) + *(int *)((int)param_1 + 0x22);
    if (*(short *)((int)param_1 + 0x12) == 0) {
      uVar3 = *(uint *)(*param_1 + 0x14);
      if ((int)uVar2 <= (int)uVar3) {
        uVar3 = uVar2;
      }
    }
    else {
      uVar3 = (int)uVar2 % *(int *)(*param_1 + 0x14);
    }
    if ((uVar3 & 1) != 0) {
      uVar3 = uVar3 + 1;
    }
  }
  return uVar3;
}


