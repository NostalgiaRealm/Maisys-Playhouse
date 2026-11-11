
/* ==== FUN_004b9aae @ 004b9aae ==== 
 * signature: undefined4 __thiscall FUN_004b9aae(void * this, int param_1, RECT * param_2)
 * body: 004b9aae-004b9b35
 */

undefined4 __thiscall FUN_004b9aae(void *this,int param_1,RECT *param_2)

{
  BOOL BVar1;
  
  if (param_1 == 1) {
    CWnd::RepositionBars(this,0,0xffff,0xe900,1,param_2,(tagRECT *)0x0,1);
  }
  else if ((param_1 != 2) && (param_1 == 3)) {
    if (param_2 == (RECT *)0x0) {
      if ((((((LPRECT)((int)this + 0x58))->left == 0) && (*(int *)((int)this + 0x60) == 0)) &&
          (*(int *)((int)this + 0x5c) == 0)) && (*(int *)((int)this + 100) == 0)) {
        return 0;
      }
      SetRectEmpty((LPRECT)((int)this + 0x58));
    }
    else {
      BVar1 = EqualRect((RECT *)((int)this + 0x58),param_2);
      if (BVar1 != 0) {
        return 0;
      }
      CopyRect((RECT *)((int)this + 0x58),param_2);
    }
  }
  return 1;
}


