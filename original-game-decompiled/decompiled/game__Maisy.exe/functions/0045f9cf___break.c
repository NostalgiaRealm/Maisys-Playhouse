
/* ==== __break @ 0045f9cf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045f9cf-0045f9cf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


