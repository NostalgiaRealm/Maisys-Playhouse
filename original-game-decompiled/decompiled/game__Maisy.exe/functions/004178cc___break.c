
/* ==== __break @ 004178cc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004178cc-004178cc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


