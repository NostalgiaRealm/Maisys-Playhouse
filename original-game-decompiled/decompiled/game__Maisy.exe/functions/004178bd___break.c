
/* ==== __break @ 004178bd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004178bd-004178bd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


