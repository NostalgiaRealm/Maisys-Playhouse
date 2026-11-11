
/* ==== __break @ 0044d72d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044d72d-0044d72d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


