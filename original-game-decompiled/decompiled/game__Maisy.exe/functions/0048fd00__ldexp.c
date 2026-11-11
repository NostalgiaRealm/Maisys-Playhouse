
/* ==== _ldexp @ 0048fd00 ==== 
 * signature: double __cdecl _ldexp(double _X, int _Y)
 * body: 0048fd00-0048ff74
 * note: Library Function - Single Match  _ldexp  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _ldexp
   
   Library: Visual Studio 1998 Release */

double __cdecl _ldexp(double _X,int _Y)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  double dVar5;
  short sVar6;
  undefined4 local_c;
  undefined4 uStack_8;
  int local_4;
  
  uVar2 = __ctrlfp();
  uVar1 = (uint)((ulonglong)_X >> 0x20);
  if ((_X._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = __sptype(_X._0_4_,uVar1);
    if (0 < iVar3) {
      if (iVar3 < 3) {
        __ctrlfp();
        return _X;
      }
      if (iVar3 == 3) {
        fVar4 = __handle_qnan2(0x19,_X._0_4_,uVar1,SUB84((double)_Y,0),
                               (int)((ulonglong)(double)_Y >> 0x20));
        return (double)fVar4;
      }
    }
    fVar4 = __except2(8,0x19,_X._0_4_,uVar1,SUB84((double)_Y,0),(int)((ulonglong)(double)_Y >> 0x20)
                      ,SUB84(_X + 1.0,0),(int)((ulonglong)(_X + 1.0) >> 0x20),uVar2);
    return (double)fVar4;
  }
  if (((ulonglong)_X & 0x7fffffff00000000) == 0 && _X._0_4_ == 0) {
    __ctrlfp();
    return _X;
  }
  fVar4 = __decomp(_X._0_4_,uVar1,&local_4);
  dVar5 = (double)fVar4;
  local_4 = local_4 + _Y;
  local_c = SUB84(dVar5,0);
  uStack_8 = (undefined4)((ulonglong)dVar5 >> 0x20);
  if (local_4 < 0xa01) {
    sVar6 = (short)local_4;
    if (0x400 < local_4) {
      fVar4 = __set_exp(local_c,uStack_8,sVar6 + -0x600);
      fVar4 = __except2(0x11,0x19,_X._0_4_,uVar1,SUB84((double)_Y,0),
                        (int)((ulonglong)(double)_Y >> 0x20),SUB84((double)fVar4,0),
                        (int)((ulonglong)(double)fVar4 >> 0x20),uVar2);
      return (double)fVar4;
    }
    if (-0x9fe < local_4) {
      if (-0x3fe < local_4) {
        fVar4 = __set_exp(local_c,uStack_8,sVar6);
        __ctrlfp();
        return (double)fVar4;
      }
      fVar4 = __set_exp(local_c,uStack_8,sVar6 + 0x600);
      fVar4 = __except2(0x12,0x19,_X._0_4_,uVar1,SUB84((double)_Y,0),
                        (int)((ulonglong)(double)_Y >> 0x20),SUB84((double)fVar4,0),
                        (int)((ulonglong)(double)fVar4 >> 0x20),uVar2);
      return (double)fVar4;
    }
    fVar4 = __except2(0x12,0x19,_X._0_4_,uVar1,SUB84((double)_Y,0),
                      (int)((ulonglong)(double)_Y >> 0x20),0,0,uVar2);
    return (double)fVar4;
  }
  dVar5 = __copysign((double)CONCAT44(DAT_004decbc,DAT_004decb8),dVar5);
  fVar4 = __except2(0x11,0x19,_X._0_4_,uVar1,SUB84((double)_Y,0),
                    (int)((ulonglong)(double)_Y >> 0x20),SUB84(dVar5,0),
                    (int)((ulonglong)dVar5 >> 0x20),uVar2);
  return (double)fVar4;
}


