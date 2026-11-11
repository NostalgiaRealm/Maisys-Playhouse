
/* ==== _modf @ 00490070 ==== 
 * signature: double __cdecl _modf(double _X, double * _Y)
 * body: 00490070-004901c1
 * note: Library Function - Single Match  _modf  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _modf
   
   Library: Visual Studio 1998 Release */

double __cdecl _modf(double _X,double *_Y)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  double dVar5;
  undefined8 local_8;
  
  uVar2 = __ctrlfp();
  __ctrlfp();
  if ((_X._6_2_ & 0x7ff0) != 0x7ff0) {
    if (((ulonglong)_X & 0x7fffffff00000000) == 0 && _X._0_4_ == 0) {
      local_8 = _X;
      *_Y = _X;
    }
    else {
      fVar4 = __frnd(_X);
      *_Y = (double)fVar4;
      local_8 = (double)((float10)_X - fVar4);
    }
    __ctrlfp();
    return local_8;
  }
  uVar1 = (uint)((ulonglong)_X >> 0x20);
  *(undefined4 *)((int)_Y + 4) = DAT_004decc4;
  *(undefined4 *)_Y = DAT_004decc0;
  iVar3 = __sptype(_X._0_4_,uVar1);
  if (0 < iVar3) {
    if (iVar3 < 3) {
      *_Y = _X;
      dVar5 = __copysign(0.0,_X);
      __ctrlfp();
      return dVar5;
    }
    if (iVar3 == 3) {
      *_Y = _X;
      fVar4 = __handle_qnan1(0x1c,_X._0_4_,uVar1);
      return (double)fVar4;
    }
  }
  dVar5 = _X + 1.0;
  *_Y = dVar5;
  fVar4 = __except1(8,0x1c,_X._0_4_,uVar1,SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),uVar2);
  return (double)fVar4;
}


