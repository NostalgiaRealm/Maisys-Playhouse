
/* ==== __break @ 0045bedd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045bedd-0045bedd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


