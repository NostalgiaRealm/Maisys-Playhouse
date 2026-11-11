
/* ==== _frexp @ 0048ff80 ==== 
 * signature: double __cdecl _frexp(double _X, int * _Y)
 * body: 0048ff80-0049006e
 * note: Library Function - Single Match  _frexp  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _frexp
   
   Library: Visual Studio 1998 Release */

double __cdecl _frexp(double _X,int *_Y)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  uVar2 = __ctrlfp();
  uVar1 = (uint)((ulonglong)_X >> 0x20);
  if ((_X._6_2_ & 0x7ff0) != 0x7ff0) {
    fVar4 = __decomp(_X._0_4_,uVar1,_Y);
    __ctrlfp();
    return (double)fVar4;
  }
  *_Y = -1;
  iVar3 = __sptype(_X._0_4_,uVar1);
  if (0 < iVar3) {
    if (iVar3 < 3) {
      fVar4 = __except1(8,0x17,_X._0_4_,uVar1,DAT_004decc0,DAT_004decc4,uVar2);
      return (double)fVar4;
    }
    if (iVar3 == 3) {
      fVar4 = __handle_qnan1(0x17,_X._0_4_,uVar1);
      return (double)fVar4;
    }
  }
  fVar4 = __except1(8,0x17,_X._0_4_,uVar1,SUB84(_X + 1.0,0),(int)((ulonglong)(_X + 1.0) >> 0x20),
                    uVar2);
  return (double)fVar4;
}


