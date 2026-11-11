
/* ==== __break @ 0044d62c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044d62c-0044d62c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


