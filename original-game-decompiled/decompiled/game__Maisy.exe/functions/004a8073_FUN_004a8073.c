
/* ==== FUN_004a8073 @ 004a8073 ==== 
 * signature: int __thiscall FUN_004a8073(void * this, int param_1, int param_2, RECT * param_3, RECT * param_4, int param_5, LPRECT param_6, uint param_7)
 * body: 004a8073-004a80c7
 */

int __thiscall
FUN_004a8073(void *this,int param_1,int param_2,RECT *param_3,RECT *param_4,int param_5,
            LPRECT param_6,uint param_7)

{
  int iVar1;
  HRGN hrgnUpdate;
  
  hrgnUpdate = (HRGN)0x0;
  if (param_5 != 0) {
    hrgnUpdate = *(HRGN *)(param_5 + 4);
  }
  iVar1 = ScrollWindowEx(*(HWND *)((int)this + 0x1c),param_1,param_2,param_3,param_4,hrgnUpdate,
                         param_6,param_7);
  if ((*(int **)((int)this + 0x34) != (int *)0x0) && ((param_7 & 1) != 0)) {
    (**(code **)(**(int **)((int)this + 0x34) + 0x5c))(param_1,param_2);
  }
  return iVar1;
}


