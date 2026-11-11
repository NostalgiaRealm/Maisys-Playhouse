
/* ==== FUN_00448f00 @ 00448f00 ==== 
 * signature: undefined __thiscall FUN_00448f00(void * this, int * param_1)
 * body: 00448f00-00448ff1
 */

void __thiscall FUN_00448f00(void *this,int *param_1)

{
  undefined2 uVar1;
  SIZE_T _Size;
  HGLOBAL pvVar2;
  LPVOID _Dst;
  undefined4 local_10;
  void *local_c;
  HGLOBAL local_8;
  
  if (param_1 != (int *)0x0) {
    FUN_00449050(param_1,&local_8,&local_10);
    _Size = FUN_00449950(param_1);
    if (_Size == 0) {
      pvVar2 = FUN_0043f770(1);
      *(HGLOBAL *)((int)this + 0x152) = pvVar2;
      *(undefined4 *)((int)this + 0x186) = 0;
      if (DAT_004da3e0 != 0) {
        FUN_004a3538();
      }
    }
    else {
      pvVar2 = FUN_0043f770(_Size);
      *(HGLOBAL *)((int)this + 0x152) = pvVar2;
      if (DAT_004da3e0 != 0) {
        FUN_004a3538();
      }
      local_c = GlobalLock(local_8);
      _Dst = GlobalLock(*(HGLOBAL *)((int)this + 0x152));
      FID_conflict__memcpy(_Dst,local_c,_Size);
      GlobalUnlock(local_8);
      GlobalUnlock(*(HGLOBAL *)((int)this + 0x152));
      *(SIZE_T *)((int)this + 0x186) = _Size;
    }
    uVar1 = FUN_00449920(param_1);
    *(undefined2 *)((int)this + 0x15a) = uVar1;
    *(undefined1 *)((int)this + 0x17c) = 0;
    *(undefined1 *)((int)this + 0x17d) = *(undefined1 *)((int)param_1 + 0x17d);
    FUN_0040d640();
  }
  return;
}


