
/* ==== __break @ 0044d72c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044d72c-0044d72c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


