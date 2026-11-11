
/* ==== __break @ 004794ef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004794ef-004794ef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


