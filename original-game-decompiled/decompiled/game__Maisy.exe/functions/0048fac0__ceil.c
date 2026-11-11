
/* ==== _ceil @ 0048fac0 ==== 
 * signature: double __cdecl _ceil(double _X)
 * body: 0048fac0-0048fbd4
 * note: Library Function - Single Match  _ceil  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _ceil
   
   Library: Visual Studio 1998 Release */

double __cdecl _ceil(double _X)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar3 = __ctrlfp();
  uVar2 = (uint)((ulonglong)_X >> 0x20);
  if ((_X._6_2_ & 0x7ff0) != 0x7ff0) {
    fVar5 = __frnd(_X);
    dVar1 = (double)fVar5;
    if (fVar5 == (float10)_X) {
      __ctrlfp();
      return dVar1;
    }
    if ((uVar3 & 0x20) != 0) {
      __ctrlfp();
      return dVar1;
    }
    uStack_4 = (undefined4)((ulonglong)dVar1 >> 0x20);
    local_8 = SUB84(dVar1,0);
    fVar5 = __except1(0x10,0xc,_X._0_4_,uVar2,local_8,uStack_4,uVar3);
    return (double)fVar5;
  }
  iVar4 = __sptype(_X._0_4_,uVar2);
  if (0 < iVar4) {
    if (iVar4 < 3) {
      __ctrlfp();
      return _X;
    }
    if (iVar4 == 3) {
      fVar5 = __handle_qnan1(0xc,_X._0_4_,uVar2);
      return (double)fVar5;
    }
  }
  fVar5 = __except1(8,0xc,_X._0_4_,uVar2,SUB84(_X + 1.0,0),(int)((ulonglong)(_X + 1.0) >> 0x20),
                    uVar3);
  return (double)fVar5;
}


