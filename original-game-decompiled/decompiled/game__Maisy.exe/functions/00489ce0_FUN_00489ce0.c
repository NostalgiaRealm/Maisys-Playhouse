
/* ==== FUN_00489ce0 @ 00489ce0 ==== 
 * signature: undefined __thiscall FUN_00489ce0(void * this, int param_1)
 * body: 00489ce0-00489d43
 */

void __thiscall FUN_00489ce0(void *this,int param_1)

{
  short sVar1;
  short sVar2;
  
  if (DAT_004dc57c == '\0') {
    FUN_004a8882(this);
    if (param_1 != 1) {
      sVar1 = *(short *)((int)this + 0x44);
      if (sVar1 < *(short *)((int)this + 0x48)) {
        sVar2 = *(short *)((int)this + 0x46);
        if (sVar2 < *(short *)((int)this + 0x4a)) {
          CWnd::MoveWindow(this,(int)sVar1,(int)sVar2,(int)*(short *)((int)this + 0x48) - (int)sVar1
                           ,(int)*(short *)((int)this + 0x4a) - (int)sVar2,1);
        }
      }
    }
  }
  return;
}


