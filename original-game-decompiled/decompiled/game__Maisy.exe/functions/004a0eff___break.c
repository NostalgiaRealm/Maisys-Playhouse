
/* ==== __break @ 004a0eff ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004a0eff-004a0eff
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


