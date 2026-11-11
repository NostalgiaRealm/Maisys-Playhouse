
/* ==== __break @ 004799ef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004799ef-004799ef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


