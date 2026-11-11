
/* ==== x_ismbbtype @ 0049af10 ==== 
 * signature: undefined4 __cdecl x_ismbbtype(byte param_1, uint param_2, byte param_3)
 * body: 0049af10-0049af49
 * note: Library Function - Single Match  _x_ismbbtype  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    _x_ismbbtype
   
   Library: Visual Studio 1998 Release */

undefined4 __cdecl x_ismbbtype(byte param_1,uint param_2,byte param_3)

{
  uint uVar1;
  
  if ((param_3 & *(byte *)((int)&DAT_004de1f0 + param_1 + 1)) == 0) {
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = *(ushort *)(&DAT_004de6ca + (uint)param_1 * 2) & param_2;
    }
    if (uVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


