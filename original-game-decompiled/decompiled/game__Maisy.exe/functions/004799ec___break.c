
/* ==== __break @ 004799ec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004799ec-004799ec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


