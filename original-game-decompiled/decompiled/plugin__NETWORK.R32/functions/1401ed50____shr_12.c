
/* ==== ___shr_12 @ 1401ed50 ==== 
 * signature: undefined __cdecl ___shr_12(uint * param_1)
 * body: 1401ed50-1401ed85
 * note: Library Function - Single Match  ___shr_12  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    ___shr_12
   
   Library: Visual Studio 1998 Release */

void __cdecl ___shr_12(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[2];
  uVar2 = param_1[1];
  param_1[2] = uVar1 >> 1;
  param_1[1] = uVar2 >> 1 | uVar1 << 0x1f;
  *param_1 = *param_1 >> 1 | uVar2 << 0x1f;
  return;
}


