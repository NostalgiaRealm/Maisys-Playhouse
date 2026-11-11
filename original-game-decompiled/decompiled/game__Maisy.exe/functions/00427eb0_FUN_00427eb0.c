
/* ==== FUN_00427eb0 @ 00427eb0 ==== 
 * signature: undefined1 __thiscall FUN_00427eb0(void * this, int param_1, int * param_2, int * param_3)
 * body: 00427eb0-00427fa3
 */

undefined1 __thiscall FUN_00427eb0(void *this,int param_1,int *param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_5;
  
  iVar3 = 0;
  local_5 = 0;
  if ((*(int *)((int)this + 0xd6) != 0) && (sVar1 = *(short *)((int)this + 0xde), sVar1 != 0)) {
    if (0 < sVar1) {
      piVar4 = (int *)(*(int *)((int)this + 0xd6) + 10);
      do {
        if (*piVar4 == param_1) {
          *param_2 = *(int *)(*(int *)((int)this + 0xd6) + 6 + iVar3 * 0xe);
          if ((iVar3 + 1 < (int)*(short *)((int)this + 0xde)) &&
             (iVar2 = *(int *)((int)this + 0xd6) + iVar3 * 0xe, *(int *)(iVar2 + 0x18) == param_1))
          {
            local_5 = 1;
            *param_3 = *(int *)(iVar2 + 0x14);
          }
          else {
            local_5 = 1;
            *param_3 = *(int *)(*(int *)((int)this + 0xd6) + 6 + iVar3 * 0xe);
          }
          break;
        }
        piVar4 = (int *)((int)piVar4 + 0xe);
        iVar3 = iVar3 + 1;
      } while (iVar3 < sVar1);
    }
    *param_2 = (uint)*(byte *)((int)this + 0xf6) *
               ((int)(*(int *)((int)this + 0xe2) + (*(int *)((int)this + 0xe2) >> 0x1f & 7U)) >> 3)
               * *param_2;
    *param_3 = (uint)*(byte *)((int)this + 0xf6) *
               ((int)(*(int *)((int)this + 0xe2) + (*(int *)((int)this + 0xe2) >> 0x1f & 7U)) >> 3)
               * *param_3;
  }
  return local_5;
}


