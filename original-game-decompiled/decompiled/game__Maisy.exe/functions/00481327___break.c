
/* ==== __break @ 00481327 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00481327-00481327
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


