
/* ==== __break @ 0045bfc6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045bfc6-0045bfc6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


