
/* ==== __break @ 0045bede ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045bede-0045bede
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


