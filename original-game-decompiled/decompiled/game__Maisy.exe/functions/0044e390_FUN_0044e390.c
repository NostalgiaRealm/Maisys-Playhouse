
/* ==== FUN_0044e390 @ 0044e390 ==== 
 * signature: undefined2 __thiscall FUN_0044e390(void * this, int param_1)
 * body: 0044e390-0044e3e9
 */

undefined2 __thiscall FUN_0044e390(void *this,int param_1)

{
  int iVar1;
  short sVar2;
  undefined4 local_c;
  undefined2 local_6;
  
  if (*(short *)((int)this + 0x5c) == 0) {
    FUN_0044e3f0(this,&local_6,&local_c);
    *(undefined2 *)((int)this + 0x48) = local_6;
    *(short *)((int)this + 0x5c) = *(short *)((int)this + 0x5c) + 1;
  }
  sVar2 = 0;
  if (0 < *(short *)((int)this + 0x5c)) {
    do {
      iVar1 = (int)sVar2;
      sVar2 = sVar2 + 1;
      *(undefined2 *)(iVar1 * 2 + param_1) = *(undefined2 *)(iVar1 * 2 + 0x48 + (int)this);
    } while (sVar2 < *(short *)((int)this + 0x5c));
  }
  return *(undefined2 *)((int)this + 0x5c);
}


