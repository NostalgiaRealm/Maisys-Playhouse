
/* ==== FUN_00410e70 @ 00410e70 ==== 
 * signature: bool __thiscall FUN_00410e70(void * this, short param_1)
 * body: 00410e70-00410f20
 */

bool __thiscall FUN_00410e70(void *this,short param_1)

{
  HCURSOR hCursor;
  HCURSOR pHVar1;
  undefined1 local_5;
  
  if (*(short *)((int)this + 0xc6) == param_1) {
    local_5 = true;
  }
  else {
    hCursor = *(HCURSOR *)((int)this + 0xc2);
    *(undefined4 *)((int)this + 0xc2) = 0;
    *(undefined2 *)((int)this + 0xc6) = 0xffff;
    if (param_1 == 0) {
      FUN_00410f30((int)this);
      FUN_00410ca0(this,0x28);
      return false;
    }
    pHVar1 = FUN_00410ff0(this,(int)param_1);
    *(HCURSOR *)((int)this + 0xc2) = pHVar1;
    local_5 = pHVar1 != (HCURSOR)0x0;
    if (local_5) {
      FUN_00410ca0(this,0x28);
      FUN_00410ca0(this,0x2c);
    }
    *(short *)((int)this + 0xc6) = param_1;
    if (hCursor != (HCURSOR)0x0) {
      DestroyCursor(hCursor);
      return local_5;
    }
  }
  return local_5;
}


