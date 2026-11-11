
/* ==== __IsZeroMan @ 1102bb20 ==== 
 * signature: undefined4 __cdecl __IsZeroMan(int * param_1)
 * body: 1102bb20-1102bb3c
 * note: Library Function - Single Match  __IsZeroMan  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __IsZeroMan
   
   Library: Visual Studio 1998 Release */

undefined4 __cdecl __IsZeroMan(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return 0;
    }
    param_1 = param_1 + 1;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return 1;
}


