
/* ==== __break @ 00455ede ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00455ede-00455ede
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


