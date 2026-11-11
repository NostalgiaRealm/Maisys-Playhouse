
/* ==== __initterm @ 150013b0 ==== 
 * signature: undefined __cdecl __initterm(undefined4 * param_1, undefined4 * param_2)
 * body: 150013b0-150013cf
 * note: Library Function - Single Match  __initterm  Library: Visual Studio 1998 Release
 */

/* Library Function - Single Match
    __initterm
   
   Library: Visual Studio 1998 Release */

void __cdecl __initterm(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}


